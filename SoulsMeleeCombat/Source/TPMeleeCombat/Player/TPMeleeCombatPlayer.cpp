// Fill out your copyright notice in the Description page of Project Settings.


#include "TPMeleeCombatPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "TPMeleeCombat/Player/Weapons/BaseWeapon.h"
#include "TPMeleeCombat/Player/PlayerAnimInstace.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "TPMeleeCombat/Components/CombatComponent.h"
#include "TPMeleeCombat/Components/StateManagerComponent.h"
#include "TPMeleeCombat/Components/StatsComponent.h"
#include "TPMeleeCombat/Components/TargetingComponent.h"
#include "TPMeleeCombat/Player/Weapons/DamageType/AttackDamageType.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISense_Sight.h"

// Sets default values
ATPMeleeCombatPlayer::ATPMeleeCombatPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rate for input
	TurnRateGamepad = 50.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	m_ACCombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
	
	m_ACStateManagerComponent = CreateDefaultSubobject<UStateManagerComponent>(TEXT("State Manager Component"));

	m_ACStatsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));

	m_ACTargetingComponent = CreateDefaultSubobject<UTargetingComponent>(TEXT("Targeting Component"));

	m_fHealth = 100.f;

	BoneRagdollName = TEXT("Pelvis");

	CombatStatesToCheck.Add(ECharacterState::ECS_Attacking);
	CombatStatesToCheck.Add(ECharacterState::ECS_Dodging);
	CombatStatesToCheck.Add(ECharacterState::ECS_Dead);
	CombatStatesToCheck.Add(ECharacterState::ECS_Disabled);
	CombatStatesToCheck.Add(ECharacterState::ECS_GeneralAction);

	DodgeStatesToCheck.Add(ECharacterState::ECS_Dodging);
	DodgeStatesToCheck.Add(ECharacterState::ECS_Dead);
	DodgeStatesToCheck.Add(ECharacterState::ECS_Disabled);
	DodgeStatesToCheck.Add(ECharacterState::ECS_GeneralAction);

	m_fWalkingSpeed = 200.f;
	m_fJoggingSpeed = 500.f;
	m_fSprintingSpeed = 700.f;

	m_bHeavyAttack = false;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

}

void ATPMeleeCombatPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (m_ACCombatComponent)
	{
		m_ACCombatComponent->m_pPlayer = this;
	}

}

// Called when the game starts or when spawned
void ATPMeleeCombatPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	AnimInstance = GetMesh()->GetAnimInstance();

	OnTakePointDamage.AddDynamic(this, &ATPMeleeCombatPlayer::TakePointDamage);

	//Delegate State
	GetStateComponent()->OnStateBegin.AddDynamic(this, &ATPMeleeCombatPlayer::OnStateBegin);
	GetStateComponent()->OnStateEnd.AddDynamic(this, &ATPMeleeCombatPlayer::OnStateEnd);

	//Delegate Action
	GetStateComponent()->OnActionBegin.AddDynamic(this, &ATPMeleeCombatPlayer::OnActionBegin);
	GetStateComponent()->OnActionEnd.AddDynamic(this, &ATPMeleeCombatPlayer::OnActionEnd);

	GetStatsComponent()->OnCurrentStatUpdated.AddDynamic(this, &ATPMeleeCombatPlayer::OnCurrentStatUpdated);

	GetStatsComponent()->InitializeStats();
	//GetStatsComponent()->SetBaseStatValue(EStats::ES_Health, 20.f);

	TrackChargeAttack(LMB);

	//Tags.Add(FName("Player"));
	//ClearChargeEventTimer();

	//FActorSpawnParameters SpawnParams;
	//MainWeapon = GetWorld()->SpawnActor<MainWeapon>(MainWeapon, GetTransform(), SpawnParams);
	//MainWeapon->SetOwner(this);
	//if (MainWeapon)
	//{
	//	UE_LOG(LogTemp, Log, TEXT("Spawned"));
	//	MainWeapon->OnEquipped();
	//}
}

// Called every frame
void ATPMeleeCombatPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Black, FString::Printf(TEXT("Bool: %s"), m_bIsAttachedToHand ? TEXT("true") : TEXT("false")));
}

// Called to bind functionality to input
void ATPMeleeCombatPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ATPMeleeCombatPlayer::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ATPMeleeCombatPlayer::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ATPMeleeCombatPlayer::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &ATPMeleeCombatPlayer::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &ATPMeleeCombatPlayer::AddControllerPitchInput);

	PlayerInputComponent->BindAction("ToggleCombat", IE_Pressed, this, &ATPMeleeCombatPlayer::OnToggleCombat);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ATPMeleeCombatPlayer::OnInteract);
	PlayerInputComponent->BindAction("LightAttack", IE_Released, this, &ATPMeleeCombatPlayer::OnLightAttack);
	PlayerInputComponent->BindAction("LightAttack", IE_Pressed, this, &ATPMeleeCombatPlayer::TrackChargeAttack_Implementation); //ADDDED IN BP
	PlayerInputComponent->BindAction("HeavyAttack", IE_Released, this, &ATPMeleeCombatPlayer::OnHeavyAttack);
	PlayerInputComponent->BindAction("Dodge", IE_Pressed, this, &ATPMeleeCombatPlayer::OnDodge);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ATPMeleeCombatPlayer::OnSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ATPMeleeCombatPlayer::OnSprintReleased);
	PlayerInputComponent->BindAction("Walk", IE_Pressed, this, &ATPMeleeCombatPlayer::OnWalk);

	PlayerInputComponent->BindAction("ToggleLockOn", IE_Pressed, this, &ATPMeleeCombatPlayer::OnToggleLockOn);
	PlayerInputComponent->BindAction("Block", IE_Pressed, this, &ATPMeleeCombatPlayer::OnToggleBlock);
	PlayerInputComponent->BindAction("Block", IE_Released, this, &ATPMeleeCombatPlayer::OnStopBlock);

}

void ATPMeleeCombatPlayer::Jump()
{
	if (CanPerformToggleCombat()) // MAYBE JUMP AND STOP ATTACK???
	{
		Super::Jump();
	}

}

void ATPMeleeCombatPlayer::AddControllerYawInput(float Val)
{
	if (!GetTargetingComponent()->GetIsTargeting())
	{
		Super::AddControllerYawInput(Val);
	}
}

void ATPMeleeCombatPlayer::AddControllerPitchInput(float Val)
{
	if (!GetTargetingComponent()->GetIsTargeting())
	{
		Super::AddControllerPitchInput(Val);
	}
}

void ATPMeleeCombatPlayer::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ATPMeleeCombatPlayer::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ATPMeleeCombatPlayer::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ATPMeleeCombatPlayer::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void ATPMeleeCombatPlayer::OnToggleCombat()
{
	if (CanPerformToggleCombat())
	{
		//UE_LOG(LogTemp, Log, TEXT("Check"))
		if (GetCombatComponent()->GetMainWeapon())
		{
			GetStateComponent()->SetCharacterState(ECharacterState::ECS_GeneralAction);
			//UE_LOG(LogTemp, Log, TEXT("Check2"));
			if (!GetCombatComponent()->GetIsAttachedToHand())
			{
				//AnimInstance->Montage_Play(GetCombatComponent()->GetMainWeapon()->GetWeaponDrawMontage()); // Replaced by PerformAction
				//TArray<UAnimMontage*> DrawArray;
				
				//DrawArray.Add(GetCombatComponent()->GetMainWeapon()->GetWeaponDrawMontage());				// Changed it to array
				//GetStateComponent()->SetCharacterAction(ECharacterActions::ECA_EnterCombat);  // Replaced by PerformAction
			
				PerformAction(0, false, ECharacterActions::ECA_EnterCombat);
				//GetCombatComponent()->SetAttachedToHand(true); //Changed
			}
			else
			{
				//AnimInstance->Montage_Play(GetCombatComponent()->GetMainWeapon()->GetWeaponSheathMontage()); // Replaced by PerformAction		
				//GetStateComponent()->SetCharacterAction(ECharacterActions::ECA_ExitCombat); // Replaced by PerformAction
				
				//TArray<UAnimMontage*> SheathArray;
				//SheathArray.Add(GetCombatComponent()->GetMainWeapon()->GetWeaponSheathMontage());		// Changed it to array
				
				PerformAction(0, false, ECharacterActions::ECA_ExitCombat);
				//GetCombatComponent()->SetAttachedToHand(false); //Changed)
			}
		}
	}
		
	//Sword->AttachActor(TEXT("WeaponSocket"));
}

void ATPMeleeCombatPlayer::ToggleCombat()
{
	if (GetCombatComponent()->GetMainWeapon())
	{
		GetCombatComponent()->GetMainWeapon()->ToggleCombat(!GetCombatComponent()->GetIsAttachedToHand());
	}
}

void ATPMeleeCombatPlayer::OnInteract()
{
	FHitResult OutHit;
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypeQuery;
	ObjectTypeQuery.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_GameTraceChannel2));
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);
	TArray<AActor*> ActorsFound;

	bool bObjectFound = UKismetSystemLibrary::SphereTraceSingleForObjects(GetWorld(), GetActorLocation(), GetActorLocation(), 100.f, ObjectTypeQuery, true, ActorsToIgnore, EDrawDebugTrace::ForDuration, OutHit, true);

	if (bObjectFound)
	{
		Interact = Cast<IInteractionInterface>(OutHit.GetActor());
		if(Interact)
		{
			Interact->InteractPure(this, this);
		}						
	}

	//UE_LOG(LogTemp, Log, TEXT("Interacted"));
}

void ATPMeleeCombatPlayer::OnLightAttack()
{
	if (ResetChargeAttack() && GetCombatComponent()->GetIsAttachedToHand())
	{
		m_bHeavyAttack = false;
		if (GetStateComponent()->GetCurrentState() == ECharacterState::ECS_Attacking) //Changed with State Manager
		{
			GetCombatComponent()->SetIsAttackSaved(true);
		}
		else
		{
			AttackEvent(); //Att event
		}
	}

}

void ATPMeleeCombatPlayer::OnHeavyAttack()
{
	//if (ResetChargeAttack())
	//{
		m_bHeavyAttack = true;
		if (!m_bIsAttackCharged && GetCombatComponent()->GetIsAttachedToHand())
		{
			if (GetStateComponent()->GetCurrentState() == ECharacterState::ECS_Attacking) //Changed with State Manager
			{
				GetCombatComponent()->SetIsAttackSaved(true);
			}
			else
			{
				AttackEvent(); //Att event
			}
		}

	//}
}

void ATPMeleeCombatPlayer::OnToggleLockOn()
{
	if (GetCombatComponent()->GetIsAttachedToHand())
	{
		GetTargetingComponent()->ToggleLockOn();
	}
}

void ATPMeleeCombatPlayer::OnToggleBlock()
{
	if (CanPerformBlock())
	{
		GetCombatComponent()->SetBlockingState(true);
	}
}

void ATPMeleeCombatPlayer::OnStopBlock()
{
	if (CanPerformBlock())
	{
		GetCombatComponent()->SetBlockingState(false);
	}
}

void ATPMeleeCombatPlayer::TrackChargeAttack_Implementation(FKey Key)
{
	//UE_LOG(LogTemp, Log,TEXT("ALO")); 
}

ECharacterActions ATPMeleeCombatPlayer::GetDesiredAttackType()
{
	if (GetCharacterMovement()->IsFalling())
	{
		return ECharacterActions::ECA_FallingAttack;
	}
	else
	{
		if (GetCurrentSpeedMode() == EMovementSpeedMode::EMM_Sprinting)
		{
			return ECharacterActions::ECA_SprintingAttack;
		}
		else
		{
			if (!m_bHeavyAttack)
			{
				return ECharacterActions::ECA_LightAttack;
			}
			else
			{
				return ECharacterActions::ECA_HeavyAttack;
			}
		}
	
	}

	return ECharacterActions();
}

bool ATPMeleeCombatPlayer::ResetChargeAttack()
{
	ClearChargeEventTimer();
	m_fAttackHeldTime = 0.f;
	if (m_bIsAttackCharged)
	{
		m_bIsAttackCharged = false;
		return false;
	}
	else
	{
		return true;
	}
}

void ATPMeleeCombatPlayer::OnDodge()
{
	if (CanPerformDodge())
	{
		PerformDodge(0, false);
	}
}

void ATPMeleeCombatPlayer::OnSprint()
{
	if (GetCurrentSpeedMode() != EMovementSpeedMode::EMM_Sprinting && CanPerformSprint())
	{
		SetMovementSpeedMode(EMovementSpeedMode::EMM_Sprinting);
		GetWorld()->GetTimerManager().SetTimer(SprintCostTimer, this, &ATPMeleeCombatPlayer::SprintStaminaCost, 0.1f, true);
	}

}

void ATPMeleeCombatPlayer::OnSprintReleased()
{
	DisableSprinting();
}

void ATPMeleeCombatPlayer::OnWalk()
{
	if (GetCurrentSpeedMode() != EMovementSpeedMode::EMM_Walking)
	{
		SetMovementSpeedMode(EMovementSpeedMode::EMM_Walking);
	}
	else
	{
		SetMovementSpeedMode(EMovementSpeedMode::EMM_Jogging);
	}

}

void ATPMeleeCombatPlayer::ContinueAttack()
{
	//GetCombatComponent()->SetIsAttacking(false);

	if (GetCombatComponent()->GetIsAttackSaved())
	{
		GetCombatComponent()->SetIsAttackSaved(false);
		if (GetStateComponent()->GetCurrentState() == ECharacterState::ECS_Attacking) //Changed with State Manager
		{
			GetStateComponent()->SetCharacterState(ECharacterState::ECS_Nothing);
			AttackEvent(); //Att event
		}
		else
		{
			AttackEvent(); //Att event
		}

	}

}

void ATPMeleeCombatPlayer::ResetAttack()
{
	GetCombatComponent()->ResetAttack();
}

FRotator ATPMeleeCombatPlayer::GetDesiredRotation()
{
	if (GetCharacterMovement()->GetLastInputVector() != FVector(0.f, 0.f, 0.f))
	{
		FRotator Rot1 = UKismetMathLibrary::MakeRotFromX(GetLastMovementInputVector());
		return Rot1;
	}
	else
	{
		FRotator Rot2 = GetActorRotation();
		return Rot2;
	}

	//return FRotator::ZeroRotator;
}

void ATPMeleeCombatPlayer::PerformAttack(ECharacterActions AttackType,int AttackIndex, bool RandomIndex)
{
	//UAnimMontage* L_AttackMontage = GetCombatComponent()->GetMainWeapon()->GetWeaponAttackMontage() [AttackIndex];
	if (GetCombatComponent()->GetMainWeapon() && GetCombatComponent()->GetIsAttachedToHand())
	{
		TArray<UAnimMontage*> TempMontage = GetCombatComponent()->GetMainWeapon()->GetActionMontages(AttackType);
		GetStateComponent()->SetCharacterState(ECharacterState::ECS_Attacking); //Changed with state manager
		GetStateComponent()->SetCharacterAction(AttackType);

		if (RandomIndex)
		{
			int randomint = FMath::RandRange(AttackIndex, TempMontage.Num() - 1);
			AnimInstance->Montage_Play(TempMontage[randomint], 1.f);
		}
		else
		{
			if (AttackIndex < TempMontage.Num()) //If erros occur, maybe check montage index :)
			{
				AnimInstance->Montage_Play(TempMontage[AttackIndex], 1.f);
				GetCombatComponent()->SetAttackCount(AttackIndex + 1);
				//UE_LOG(LogTemp, Log, TEXT("AttackIndex: %d"), GetCombatComponent()->GetAttackCount());
			}
			else
			{
				AnimInstance->Montage_Play(TempMontage[0], 1.f);
				GetCombatComponent()->SetAttackCount(1);
			}

		}

	}
	//UE_LOG(LogTemp, Log, TEXT("Number: %d "), randomint);

	
	//if (L_AttackMontage)
	//{
	//	AnimInstance->Montage_Play(L_AttackMontage);
	//	UE_LOG(LogTemp, Log, TEXT("Attacked"));
	//}
}

void ATPMeleeCombatPlayer::PerformDodge(int MontageIndex, bool RandomIndex) //Modify because you can only dodge with weapon equipped
{
	if (GetCombatComponent()->GetMainWeapon()) //&& GetCombatComponent()->GetIsAttachedToHand())
	{
		GetStateComponent()->SetCharacterState(ECharacterState::ECS_Dodging);
		GetStateComponent()->SetCharacterAction(ECharacterActions::ECA_Dodge);
		TArray<UAnimMontage*> TempMontage = GetCombatComponent()->GetMainWeapon()->GetDodgeMontage();
		AnimInstance->Montage_Play(TempMontage[MontageIndex], 1.f);
		if (GetCombatComponent()->GetMainWeapon())
		{
			GetStatsComponent()->ModifyCurrentStatValue(EStats::ES_Stamina, GetCombatComponent()->GetMainWeapon()->GetStatCostForAction() * -1.f, true);
		}
	}

}

void ATPMeleeCombatPlayer::EnableIFrames(bool bEnabledIFrames)
{
	m_bIsIFramesEnabled = bEnabledIFrames;
}

void ATPMeleeCombatPlayer::PerformAction(int MontageIndex, bool RandomIndex, ECharacterActions CharAction, ECharacterState CharState)
{
	//UE_LOG(LogTemp, Log, TEXT("Action1"));
	if (GetCombatComponent()->GetMainWeapon()) //&& GetCombatComponent()->GetIsAttachedToHand())
	{
		//UE_LOG(LogTemp, Log, TEXT("Action2"));
		TArray<UAnimMontage*> TempMontage = GetCombatComponent()->GetMainWeapon()->GetActionMontages(CharAction);
		GetStateComponent()->SetCharacterState(CharState);
		GetStateComponent()->SetCharacterAction(CharAction);
		AnimInstance->Montage_Play(TempMontage[MontageIndex], 1.f);
	}
}

///////////
// DEPRECATED
//////////////////

//void ATPMeleeCombatPlayer::PerformHitStun()
//{
//	if (HitMontage)
//	{
//		AnimInstance->Montage_Play(HitMontage);
//	}
//
//	GetStateComponent()->SetCharacterState(ECharacterState::ECS_Disabled);
//}
//
//void ATPMeleeCombatPlayer::PerformKnockdown()
//{
//	if (KnockdownMontage)
//	{
//		AnimInstance->Montage_Play(KnockdownMontage);
//	}
//
//	GetStateComponent()->SetCharacterState(ECharacterState::ECS_Disabled);
//}

//////////////
//
/////////////

void ATPMeleeCombatPlayer::PerformDeath()
{
	EnableRagdoll();
	SetLifeSpan(3.f);
	if(!GetCombatComponent()->GetMainWeapon()) return;
	GetCombatComponent()->GetMainWeapon()->SetLifeSpan(5.f);
}

void ATPMeleeCombatPlayer::AttackEvent()
{
	if (CanPerformAttack())
	{
		PerformAttack(GetDesiredAttackType(), GetCombatComponent()->GetAttackCount(), false);
		if (GetCombatComponent()->GetMainWeapon())
		{
			GetStatsComponent()->ModifyCurrentStatValue(EStats::ES_Stamina, GetCombatComponent()->GetMainWeapon()->GetStatCostForAction() * -1.f, true);
		}
	}
}


void ATPMeleeCombatPlayer::ResetCombat()
{
	ResetAttack();
	GetStateComponent()->ResetState();
	GetStateComponent()->SetCharacterAction(ECharacterActions::ECA_Nothing);
	//if(GEngine)
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Black, FString::Printf(TEXT("StateReset")));

}

void ATPMeleeCombatPlayer::ActivateCollision(ECollisionPart ColPart)
{
	if (GetCombatComponent()->GetMainWeapon())
	GetCombatComponent()->GetMainWeapon()->ActivateCollision(ColPart);
}

void ATPMeleeCombatPlayer::DeactivateCollision(ECollisionPart ColPart)
{	
	if(GetCombatComponent()->GetMainWeapon())
	GetCombatComponent()->GetMainWeapon()->DeactivateCollision(ColPart);
}

bool ATPMeleeCombatPlayer::CanReceiveDamage()
{
	if (GetStateComponent()->GetCurrentState() != ECharacterState::ECS_Dead && !m_bIsIFramesEnabled)
	{
		return true;
	}

	return false;
}

void ATPMeleeCombatPlayer::ChargeAttackEvent()
{
	if (CanPerformToggleCombat() && GetCombatComponent()->GetIsAttachedToHand())
	{
		PerformAttack(ECharacterActions::ECA_ChargedAttack, GetCombatComponent()->GetAttackCount(), false);
		if (GetCombatComponent()->GetMainWeapon())
		{
			GetStatsComponent()->ModifyCurrentStatValue(EStats::ES_Stamina, GetCombatComponent()->GetMainWeapon()->GetStatCostForAction() * -1.f, true);
		}
	}
}

bool ATPMeleeCombatPlayer::CanPerformToggleCombat()
{
	/*if (!GetCombatComponent()->GetIsAttacking() && !m_bIsTogglingCombat && !m_bIsDodging && !m_bIsDisabled && !m_bIsDead && !GetCharacterMovement()->IsFalling())
	{

		return true;

	}*/

	//TArray<ECharacterState> StatesToCheck;
	/*StatesToCheck.Add(ECharacterState::ECS_Attacking);
	StatesToCheck.Add(ECharacterState::ECS_Dodging);
	StatesToCheck.Add(ECharacterState::ECS_Dead);
	StatesToCheck.Add(ECharacterState::ECS_Disabled);
	StatesToCheck.Add(ECharacterState::ECS_GeneralAction);*/

	if (!GetStateComponent()->IsCurrentStateEqualToAny(CombatStatesToCheck) && !GetCharacterMovement()->IsFalling())
	{
		return true;
	}

	return false;
}

bool ATPMeleeCombatPlayer::CanPerformAttack()
{
	if (!GetStateComponent()->IsCurrentStateEqualToAny(CombatStatesToCheck) && GetStatsComponent()->GetCurrentStatValue(EStats::ES_Stamina) >= 10 )
	{
		return true;
	}

	return false;
}

bool ATPMeleeCombatPlayer::CanPerformBlock()
{
	if (!GetStateComponent()->IsCurrentStateEqualToAny(CombatStatesToCheck) && GetCombatComponent()->GetIsAttachedToHand() && GetCombatComponent()->GetShieldWeapon())
	{
		return true;
	}

	return false;
}

bool ATPMeleeCombatPlayer::CanPerformDodge()
{
	/*if (!GetCombatComponent()->GetIsAttacking() && !m_bIsTogglingCombat && !m_bIsDodging && !m_bIsDisabled && !m_bIsDead && !GetCharacterMovement()->IsFalling())
	{

		return true;

	}*/

	//TArray<ECharacterState> StatesToCheck;
	/*StatesToCheck.Add(ECharacterState::ECS_Attacking);
	StatesToCheck.Add(ECharacterState::ECS_Dodging);
	StatesToCheck.Add(ECharacterState::ECS_Dead);
	StatesToCheck.Add(ECharacterState::ECS_Disabled);
	StatesToCheck.Add(ECharacterState::ECS_GeneralAction);*/

	if (!GetStateComponent()->IsCurrentStateEqualToAny(DodgeStatesToCheck) && !GetCharacterMovement()->IsFalling() && GetStatsComponent()->GetCurrentStatValue(EStats::ES_Stamina) >= 10)
	{
		return true;
	}

	return false;
}

bool ATPMeleeCombatPlayer::CanPerformSprint()
{
	if (GetCharacterMovement()->Velocity.Size() != 0 && GetCharacterMovement()->IsFalling())
	{
		return false;
	}
	return true;
}

void ATPMeleeCombatPlayer::OnStateBegin(ECharacterState State)
{
	switch (State)
	{
	case ECharacterState::ECS_Nothing:
		break;

	case ECharacterState::ECS_Attacking:
		break;

	case ECharacterState::ECS_Dodging:
		break;

	case ECharacterState::ECS_GeneralAction:
		break;

	case ECharacterState::ECS_Dead:

		PerformDeath();

		break;

	case ECharacterState::ECS_Disabled:
		break;

	default:
		break;
	}
}

void ATPMeleeCombatPlayer::OnStateEnd(ECharacterState State)
{
	switch (State)
	{
	case ECharacterState::ECS_Nothing:
		break;

	case ECharacterState::ECS_Attacking:
		break;

	case ECharacterState::ECS_Dodging:
		break;

	case ECharacterState::ECS_GeneralAction:
		break;

	case ECharacterState::ECS_Dead:
		break;

	case ECharacterState::ECS_Disabled:
		break;

	default:
		break;
	}
}

void ATPMeleeCombatPlayer::OnActionBegin(ECharacterActions Action)
{
	switch (Action)
	{
	case ECharacterActions::ECA_Nothing:
		break;

	case ECharacterActions::ECA_GeneralAction:
		break;

	case ECharacterActions::ECA_LightAttack:
		break;

	case ECharacterActions::ECA_HeavyAttack:
		break;

	case ECharacterActions::ECA_ChargedAttack:
		break;

	case ECharacterActions::ECA_FallingAttack:
		break;

	case ECharacterActions::ECA_SprintingAttack:
		break;

	case ECharacterActions::ECA_Dodge:
		break;

	case ECharacterActions::ECA_EnterCombat:
		break;

	case ECharacterActions::ECA_ExitCombat:
		break;

	default:
		break;
	}
}

void ATPMeleeCombatPlayer::OnActionEnd(ECharacterActions Action)
{
	switch (Action)
	{
	case ECharacterActions::ECA_Nothing:
		break;

	case ECharacterActions::ECA_GeneralAction:
		break;

	case ECharacterActions::ECA_LightAttack:
		break;

	case ECharacterActions::ECA_HeavyAttack:
		break;

	case ECharacterActions::ECA_ChargedAttack:
		break;

	case ECharacterActions::ECA_FallingAttack:
		break;

	case ECharacterActions::ECA_SprintingAttack:
		break;

	case ECharacterActions::ECA_Dodge:
		break;

	case ECharacterActions::ECA_EnterCombat:
		break;

	case ECharacterActions::ECA_ExitCombat:
		break;

	default:
		break;
	}
}

void ATPMeleeCombatPlayer::OnCurrentStatUpdated(EStats StatType, float Value)
{
	if (StatType == EStats::ES_Health && Value <= 0)
	{
		GetStateComponent()->SetCharacterState(ECharacterState::ECS_Dead);
	}
}

void ATPMeleeCombatPlayer::SprintStaminaCost()
{
	if (CanPerformSprint())
	{
		GetStatsComponent()->ModifyCurrentStatValue(EStats::ES_Stamina, -2.f, true);
		if (GetStatsComponent()->GetCurrentStatValue(EStats::ES_Stamina) <= 10.f)
		{
			DisableSprinting();
		}
	}
	else
	{
		DisableSprinting();
	}
}

void ATPMeleeCombatPlayer::DisableSprinting()
{
	GetWorld()->GetTimerManager().ClearTimer(SprintCostTimer);
	if (GetCurrentSpeedMode() == EMovementSpeedMode::EMM_Sprinting)
	{
		SetMovementSpeedMode(EMovementSpeedMode::EMM_Jogging);
	}
}

//void ATPMeleeCombatPlayer::TakeDamage(float inDamage) ///DEPRECATED
//{
//	m_fHealth = FMath::Clamp(m_fHealth - inDamage, 0.f, 100.f);
//
//	if (m_fHealth <= 0.f)
//	{
//		PerformDeath();
//	}
//}

void ATPMeleeCombatPlayer::TakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser)
{
	if(Damage == 0) return;
	if(!CanReceiveDamage()) return;

	AttackDamageType = Cast<UAttackDamageType>(DamageType);
	if (AttackDamageType)
	{
		GetStatsComponent()->TakeDamage(Damage);
		ApplyImpactEffect(AttackDamageType->GetDamageType(), HitLocation);

		//UE_LOG(LogTemp, Log,TEXT("%d Damage caused by %s with instigator %s"), Damage, * DamageCauser->GetName(), * InstigatedBy->GetPawn()->GetName());

		/*if (m_fHealth <= 0.f)
		{
			GetStateComponent()->SetCharacterState(ECharacterState::ECS_Dead); //Added in StatsComponent
		}*/
	
		if(CanReceiveDamage())
		{
			ApplyHitReaction(AttackDamageType->GetDamageType(), DamageCauser->GetActorLocation());
			//UE_LOG(LogTemp, Log, TEXT("Enter Hit React"));
		}
	}
}

void ATPMeleeCombatPlayer::ApplyHitReaction(EDamageType DamageType, const FVector& HitDirection)
{
	switch (DamageType)
	{
	case EDamageType::None:
		break;

	case EDamageType::MeleeDamage:
		DirectionalHitReact(HitDirection, HitMontage);
		break;

	case EDamageType::KnockdownDamage:
		DirectionalHitReact(HitDirection, KnockdownMontage);
		break;

	default:
		break;
	}
}

void ATPMeleeCombatPlayer::DirectionalHitReact(const FVector& ImpactPoint, UAnimMontage*& SelectedHitMontage)
{
	const FVector Forward = GetActorForwardVector();
	// Lower Impact Point to the Enemy's Actor Location Z
	const FVector ImpactLowered(ImpactPoint.X, ImpactPoint.Y, GetActorLocation().Z);
	const FVector ToHit = (ImpactLowered - GetActorLocation()).GetSafeNormal();

	// Forward * ToHit = |Forward||ToHit| * cos(theta)
	// |Forward| = 1, |ToHit| = 1, so Forward * ToHit = cos(theta)
	const double CosTheta = FVector::DotProduct(Forward, ToHit);
	// Take the inverse cosine (arc-cosine) of cos(theta) to get theta
	double Theta = FMath::Acos(CosTheta);
	// convert from radians to degrees
	Theta = FMath::RadiansToDegrees(Theta);

	// if CrossProduct points down, Theta should be negative
	const FVector CrossProduct = FVector::CrossProduct(Forward, ToHit);
	if (CrossProduct.Z < 0)
	{
		Theta *= -1.f;
	}

	FName Section("FromBack");

	if (Theta >= -45.f && Theta < 45.f)
	{
		Section = FName("FromFront");
	}
	/*else if (Theta >= -135.f && Theta < -45.f)
	{
		Section = FName("FromLeft");
	}
	else if (Theta >= 45.f && Theta < 135.f)
	{
		Section = FName("FromRight");
	}*/

	PlayHitReactMontage(Section, SelectedHitMontage);
	//UE_LOG(LogTemp, Log, TEXT("DirectionalHit"));
}

void ATPMeleeCombatPlayer::PlayHitReactMontage(const FName& SectionName, UAnimMontage* &SelectedHitMontage)
{
	AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && SelectedHitMontage)
	{
		AnimInstance->Montage_Play(SelectedHitMontage);
		AnimInstance->Montage_JumpToSection(SectionName, SelectedHitMontage);
		GetStateComponent()->SetCharacterState(ECharacterState::ECS_Disabled);
		//UE_LOG(LogTemp, Log, TEXT("PlayHit"));
	}
}

void ATPMeleeCombatPlayer::ApplyImpactEffect(EDamageType DamageType, const FVector& HitLocation)
{

	if (HitParticles && GetWorld())
	{
		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			HitParticles,
			HitLocation
		);
	}

	if (HitSound)
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			HitSound,
			HitLocation
		);
	}
}

void ATPMeleeCombatPlayer::EnableRagdoll()
{
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetMesh()->SetCollisionProfileName("ragdoll", true);
	GetMesh()->SetAllBodiesBelowSimulatePhysics(BoneRagdollName, true, true);
	GetMesh()->SetAllBodiesBelowPhysicsBlendWeight(BoneRagdollName, 1.f);
	GetCharacterMovement()->SetMovementMode(MOVE_None);
	GetCameraBoom()->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepWorldTransform, BoneRagdollName);
	ApplyHitReactionPhysicsVelocity(2000.f);
	if (GetCombatComponent()->GetMainWeapon())
	{
		GetCombatComponent()->GetMainWeapon()->SimulateWeaponPhysics();
	}
}

void ATPMeleeCombatPlayer::ApplyHitReactionPhysicsVelocity(float InitialSpeed)
{
	FVector NewVelocity = GetActorForwardVector() * (InitialSpeed * -1.f);
	GetMesh()->SetPhysicsLinearVelocity(NewVelocity, false, BoneRagdollName);
}

void ATPMeleeCombatPlayer::SetMovementSpeedMode(EMovementSpeedMode NewSpeedMode)
{
	if (NewSpeedMode != MovementSpeedMode)
	{
		MovementSpeedMode = NewSpeedMode;

		switch (MovementSpeedMode)
		{
		case EMovementSpeedMode::EMM_Walking:
			GetCharacterMovement()->MaxWalkSpeed = m_fWalkingSpeed;
			break;

		case EMovementSpeedMode::EMM_Jogging:
			GetCharacterMovement()->MaxWalkSpeed = m_fJoggingSpeed;
			break;

		case EMovementSpeedMode::EMM_Sprinting:
			GetCharacterMovement()->MaxWalkSpeed = m_fSprintingSpeed;
			break;

		default:
			break;
		}
	}
}

void ATPMeleeCombatPlayer::SetupStimulus()
{
	stimulus = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("Stimuli"));
	stimulus->RegisterForSense(TSubclassOf<UAISense_Sight>());
	stimulus->RegisterWithPerceptionSystem();
}
