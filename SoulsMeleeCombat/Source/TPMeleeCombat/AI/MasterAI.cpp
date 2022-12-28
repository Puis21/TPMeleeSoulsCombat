// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterAI.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "TPMeleeCombat/Player/Weapons/BaseWeapon.h"
#include "TPMeleeCombat/Player/PlayerAnimInstace.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "TPMeleeCombat/Components/CombatComponent.h"
#include "TPMeleeCombat/Components/StateManagerComponent.h"
#include "TPMeleeCombat/Components/StatsComponent.h"
#include "TPMeleeCombat/Components/CollisionComponent.h"
#include "TPMeleeCombat/Player/Weapons/DamageType/AttackDamageType.h"
#include "Perception/AISense_Damage.h"
#include "MasterAIController.h"

// Sets default values
AMasterAI::AMasterAI()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

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

	m_ACCombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));

	m_ACStateManagerComponent = CreateDefaultSubobject<UStateManagerComponent>(TEXT("State Manager Component"));

	m_ACStatsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));

	MainWeaponCollision = CreateDefaultSubobject<UCollisionComponent>(TEXT("MainWeaponCollisionComponent"));

	ItemStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemStaticMesh"));
	ItemStaticMesh->SetupAttachment(GetMesh(), "SwordHipSocket");

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

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

}

void AMasterAI::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

// Called when the game starts or when spawned
void AMasterAI::BeginPlay()
{
	Super::BeginPlay();

	AnimInstance = GetMesh()->GetAnimInstance();
	
	AIController = Cast<AMasterAIController>(GetController());

	OnTakePointDamage.AddDynamic(this, &AMasterAI::TakePointDamage);

	//Delegate State
	GetStateComponent()->OnStateBegin.AddDynamic(this, &AMasterAI::OnStateBegin);
	GetStateComponent()->OnStateEnd.AddDynamic(this, &AMasterAI::OnStateEnd);

	//Delegate Action
	GetStateComponent()->OnActionBegin.AddDynamic(this, &AMasterAI::OnActionBegin);
	GetStateComponent()->OnActionEnd.AddDynamic(this, &AMasterAI::OnActionEnd);

	GetStatsComponent()->OnCurrentStatUpdated.AddDynamic(this, &AMasterAI::OnCurrentStatUpdated);

	MainWeaponCollision->OnHit.AddDynamic(this, &AMasterAI::ApplyDamage);

	GetStatsComponent()->InitializeStats();
	MainWeaponCollision->SetCollisionMeshComponent(ItemStaticMesh);

	if (RotationCurveFloat)
	{
		FOnTimelineFloatStatic TimelineProgress;
		TimelineProgress.BindUFunction(this, FName("RotateToTarget"));
		AttackRotationTimeline.AddInterpFloat(RotationCurveFloat, TimelineProgress);
	}

	//Tags.Add(FName("Enemy"));
	//GetStatsComponent()->SetBaseStatValue(EStats::ES_Health, 20.f);
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
void AMasterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AttackRotationTimeline.TickTimeline(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Black, FString::Printf(TEXT("Bool: %s"), m_bIsAttachedToHand ? TEXT("true") : TEXT("false")));
}

ECharacterActions AMasterAI::GetDesiredAttackType()
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
			if (true)
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

void AMasterAI::OnWalk()
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

void AMasterAI::ContinueAttack()
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

void AMasterAI::ResetAttack()
{
	GetCombatComponent()->ResetAttack();
}

void AMasterAI::ActivateCollision(ECollisionPart ColPart)
{
	MainWeaponCollision->EnableCollision();
}

void AMasterAI::DeactivateCollision(ECollisionPart ColPart)
{
	MainWeaponCollision->DisableCollision();
}

void AMasterAI::ToggleCombat()
{
	UE_LOG(LogTemp, Log, TEXT("Toggle"));
	AttachWeapon(!GetCombatComponent()->GetIsAttachedToHand());
}

void AMasterAI::AttachWeapon(bool bAttachWeapon)
{
	GetCombatComponent()->SetAttachedToHand(bAttachWeapon);
	if (bAttachWeapon)
	{
		ItemStaticMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("WeaponSocket")); 
		UE_LOG(LogTemp, Log, TEXT("Main Hand"));
	}
	else
	{
		ItemStaticMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("SwordHipSocket"));
		UE_LOG(LogTemp, Log, TEXT("Main Hip"));
	}
}

void AMasterAI::RotateToTarget(float Value)
{	
	if (AIController->GetFoundTarget())
	{
		FVector StartLook = GetActorLocation();
		FVector TargetLook = AIController->GetFoundTarget()->GetActorLocation();// Change to variable
		FRotator LookRotation = UKismetMathLibrary::FindLookAtRotation(StartLook, TargetLook);

		FRotator RollAndPitchRotation;
		FRotator YawRotation;
		RollAndPitchRotation = GetActorRotation();

		YawRotation = UKismetMathLibrary::RInterpTo(GetActorRotation(), LookRotation, Value, 9.f);
		SetActorRotation(FRotator(RollAndPitchRotation.Pitch, YawRotation.Yaw, RollAndPitchRotation.Roll));
		//UE_LOG(LogTemp, Log, TEXT("Rotation to : %s"), *AIController->GetFoundTarget()->GetName());
	}
}

FRotator AMasterAI::GetDesiredRotation()
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

float AMasterAI::PerformAttack(ECharacterActions AttackType, int AttackIndex, bool RandomIndex)
{
	//UAnimMontage* L_AttackMontage = GetCombatComponent()->GetMainWeapon()->GetWeaponAttackMontage() [AttackIndex];
	//UE_LOG(LogTemp, Log, TEXT("AttackStarted"));
	float MontageDuration;
	TArray<UAnimMontage*> TempMontage = GetActionMontage(AttackType);
	GetStateComponent()->SetCharacterState(ECharacterState::ECS_Attacking); //Changed with state manager
	GetStateComponent()->SetCharacterAction(AttackType);

	if (RandomIndex)
	{
		int randomint = FMath::RandRange(AttackIndex, TempMontage.Num() - 1);
		MontageDuration = AnimInstance->Montage_Play(TempMontage[randomint], 1.f);
		return MontageDuration;
	}
	else
	{
		if (AttackIndex < TempMontage.Num()) //If erros occur, maybe check montage index :)
		{
			MontageDuration = AnimInstance->Montage_Play(TempMontage[AttackIndex], 1.f);
			GetCombatComponent()->SetAttackCount(AttackIndex + 1);
			return MontageDuration;
			//UE_LOG(LogTemp, Log, TEXT("AttackIndex: %d"), GetCombatComponent()->GetAttackCount());
		}
		else
		{
			MontageDuration = AnimInstance->Montage_Play(TempMontage[0], 1.f);
			GetCombatComponent()->SetAttackCount(1);
			return MontageDuration;
		}
	}

	return 0.f;


	//UE_LOG(LogTemp, Log, TEXT("Number: %d "), randomint);


	//if (L_AttackMontage)
	//{
	//	AnimInstance->Montage_Play(L_AttackMontage);
	//	UE_LOG(LogTemp, Log, TEXT("Attacked"));
	//}
}

float AMasterAI::PerformAction(int MontageIndex, bool RandomIndex, ECharacterActions CharAction, ECharacterState CharState)
{
	float MontageDuration = 0.f;
	TArray<UAnimMontage*> TempMontage = GetActionMontage(CharAction);
	GetStateComponent()->SetCharacterState(CharState);
	GetStateComponent()->SetCharacterAction(CharAction);
	MontageDuration = AnimInstance->Montage_Play(TempMontage[MontageIndex], 1.f);
	return MontageDuration;
}

///////////
// DEPRECATED
//////////////////

//void AMasterAI::PerformHitStun()
//{
//	if (HitMontage)
//	{
//		AnimInstance->Montage_Play(HitMontage);
//	}
//
//	GetStateComponent()->SetCharacterState(ECharacterState::ECS_Disabled);
//}
//
//void AMasterAI::PerformKnockdown()
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

void AMasterAI::PerformDeath()
{
	EnableRagdoll();
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	SetLifeSpan(3.f);
}

void AMasterAI::AttackEvent()
{
	if (CanPerformAttack())
	{
		PerformAttack(GetDesiredAttackType(), GetCombatComponent()->GetAttackCount(), false);
	}
}


void AMasterAI::ResetCombat()
{
	ResetAttack();
	GetStateComponent()->ResetState();
	GetStateComponent()->SetCharacterAction(ECharacterActions::ECA_Nothing);
	//if(GEngine)
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Black, FString::Printf(TEXT("StateReset")));

}

bool AMasterAI::CanReceiveDamage()
{
	if (GetStateComponent()->GetCurrentState() != ECharacterState::ECS_Dead)
	{
		return true;
	}

	return false;
}

bool AMasterAI::CanPerformToggleCombat()
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

bool AMasterAI::CanPerformAttack()
{
	if (!GetStateComponent()->IsCurrentStateEqualToAny(CombatStatesToCheck) && GetStatsComponent()->GetCurrentStatValue(EStats::ES_Stamina) >= 10)
	{
		return true;
	}

	return false;
}

bool AMasterAI::CanPerformDodge()
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

bool AMasterAI::CanPerformSprint()
{
	if (GetCharacterMovement()->Velocity.Size() != 0 && GetCharacterMovement()->IsFalling())
	{
		return false;
	}
	return true;
}

void AMasterAI::OnStateBegin(ECharacterState State)
{
	switch (State)
	{
	case ECharacterState::ECS_Nothing:
		break;

	case ECharacterState::ECS_Attacking:
		AttackRotationTimeline.PlayFromStart();
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

void AMasterAI::OnStateEnd(ECharacterState State)
{
	switch (State)
	{
	case ECharacterState::ECS_Nothing:
		break;

	case ECharacterState::ECS_Attacking:
		AttackRotationTimeline.Stop();
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

void AMasterAI::OnActionBegin(ECharacterActions Action)
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

void AMasterAI::OnActionEnd(ECharacterActions Action)
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

void AMasterAI::OnCurrentStatUpdated(EStats StatType, float Value)
{
	if (StatType == EStats::ES_Health && Value <= 0)
	{
		GetStateComponent()->SetCharacterState(ECharacterState::ECS_Dead);
	}
}

void AMasterAI::TakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser)
{
	if (Damage == 0) return;
	if (!CanReceiveDamage()) return;

	AttackDamageType = Cast<UAttackDamageType>(DamageType);
	if (AttackDamageType)
	{
		GetStatsComponent()->TakeDamage(Damage);
		ApplyImpactEffect(AttackDamageType->GetDamageType(), HitLocation);
		//UE_LOG(LogTemp, Log,TEXT("%d Damage caused by %s with instigator %s"), Damage, * DamageCauser->GetName(), * InstigatedBy->GetPawn()->GetName());

		if (CanReceiveDamage())
		{
			ApplyHitReaction(AttackDamageType->GetDamageType(), InstigatedBy->GetPawn()->GetActorLocation());
			UAISense_Damage::ReportDamageEvent(GetWorld(), this, InstigatedBy, Damage, HitLocation, HitLocation);
			//UE_LOG(LogTemp, Log, TEXT("Enter Hit React"));
		}
	}
}

void AMasterAI::ApplyDamage(FHitResult HitResult) //CHANGE THIS IF MULTIPLAYER???????????
{
	UE_LOG(LogTemp, Log, TEXT("Try DMG??"));
	ATPMeleeCombatPlayer* Character;
	Character = Cast<ATPMeleeCombatPlayer>(HitResult.GetActor());
	if (Character)
	{
		if(!Character->CanReceiveDamage()) return;
		UGameplayStatics::ApplyPointDamage(HitResult.GetActor(), 20.f, GetActorForwardVector(), HitResult, GetController(), this, DamageTypeClass);
	}
}


void AMasterAI::ApplyHitReaction(EDamageType DamageType, const FVector& HitDirection)
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

void AMasterAI::DirectionalHitReact(const FVector& ImpactPoint, UAnimMontage*& SelectedHitMontage)
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

	HitSection = FName("FromBack");

	if (Theta >= -45.f && Theta < 45.f)
	{
		HitSection = FName("FromFront");
	}
	/*else if (Theta >= -135.f && Theta < -45.f)
	{
		Section = FName("FromLeft");
	}
	else if (Theta >= 45.f && Theta < 135.f)
	{
		Section = FName("FromRight");
	}*/

	PlayHitReactMontage(HitSection, SelectedHitMontage);
	//UE_LOG(LogTemp, Log, TEXT("DirectionalHit"));
}

void AMasterAI::PlayHitReactMontage(const FName& SectionName, UAnimMontage*& SelectedHitMontage)
{
	AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && SelectedHitMontage)
	{
		AnimInstance->Montage_Play(SelectedHitMontage);
		AnimInstance->Montage_JumpToSection(SectionName, SelectedHitMontage);
		//UE_LOG(LogTemp, Log, TEXT("PlayHit"));
	}
}

void AMasterAI::ApplyImpactEffect(EDamageType DamageType, const FVector& HitLocation)
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

void AMasterAI::EnableIFrames(bool bEnabledIFrames)
{
}

void AMasterAI::EnableRagdoll()
{
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetMesh()->SetCollisionProfileName("ragdoll", true);
	GetMesh()->SetAllBodiesBelowSimulatePhysics(BoneRagdollName, true, true);
	GetMesh()->SetAllBodiesBelowPhysicsBlendWeight(BoneRagdollName, 1.f);
	GetCharacterMovement()->SetMovementMode(MOVE_None);
	if (HitSection == FName("FromFront"))
	{
		ApplyHitReactionPhysicsVelocity(2000.f);
	}
	else if (HitSection == FName("FromBack"))
	{
		ApplyHitReactionPhysicsVelocity(-2000.f);
	}

}

void AMasterAI::ApplyHitReactionPhysicsVelocity(float InitialSpeed)
{
	FVector NewVelocity = GetActorForwardVector() * (InitialSpeed * -1.f);
	GetMesh()->SetPhysicsLinearVelocity(NewVelocity, false, BoneRagdollName);
}

void AMasterAI::SetMovementSpeedMode(EMovementSpeedMode NewSpeedMode)
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

////////////// CHANGE NAMINGS FOR AI (EX: CLOSE RANGE, MEDIUM RANGE, ETC)
TArray<UAnimMontage*> AMasterAI::GetActionMontage(ECharacterActions CharacterAction)
{
	switch (CharacterAction)
	{
	case ECharacterActions::ECA_Nothing:
		break;

	case ECharacterActions::ECA_GeneralAction:
		break;

	case ECharacterActions::ECA_LightAttack:
		return LightAttackMontages;
		break;

	case ECharacterActions::ECA_HeavyAttack:
		return HeavyAttackMontages;
		break;

	case ECharacterActions::ECA_ChargedAttack:
		return ChargeAttackMontages;
		break;

	case ECharacterActions::ECA_FallingAttack:
		//return FallingAttackMontage;
		break;

	case ECharacterActions::ECA_SprintingAttack:
		//return SprintingAttackMontage;
		break;

	case ECharacterActions::ECA_Dodge:
		return DodgeMontages;
		break;

	case ECharacterActions::ECA_EnterCombat:
		return EnterCombatMontages;
		break;

	case ECharacterActions::ECA_ExitCombat:
		return ExitCombatMontages;
		break;

	default:
		break;
	}

	return TArray<UAnimMontage*>();

}

