// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeapon.h"
#include "GameFramework/Character.h"
#include "Engine/SkeletalMeshSocket.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "TPMeleeCombat/Components/CombatComponent.h"
#include "TPMeleeCombat/Components/StateManagerComponent.h"
#include "TPMeleeCombat/Components/CollisionComponent.h"
#include "TPMeleeCombat/Player/AnimInstanceInterface.h"
#include "TPMeleeCombat/Player/PlayerAnimInstace.h"
#include "Kismet/GameplayStatics.h"
#include "TPMeleeCombat/AI/MasterAI.h"

ABaseWeapon::ABaseWeapon()
{

	MainWeaponCollision = CreateDefaultSubobject<UCollisionComponent>(TEXT("MainWeaponCollisionComponent"));

}

void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();

	MainWeaponCollision->OnHit.AddDynamic(this, &ABaseWeapon::ApplyDamage);
}

void ABaseWeapon::OnEquipped()
{
	Super::OnEquipped();

	SetIsEquipped(true);

	//New way of setting main weapon to Player //Mby Revert?
	Player = Cast<ATPMeleeCombatPlayer>(GetOwner());
	if (Player)
	{
		if (Player->GetCombatComponent()->GetIsAttachedToHand())
		{
			AttachActor(m_sHandSocketName);	
		}
		else
		{
			AttachActor(m_sAttachedSocketName);
		}
		Player->GetCombatComponent()->SetMainWeapon(this);
		AnimInstace = Cast<UPlayerAnimInstace>(Player->GetMesh()->GetAnimInstance()); //Call mby in constructor/begin play???
		if (AnimInstace)
		{
			AnimInstace->UpdateCombatType(eWeaponType);
			MainWeaponCollision->SetCollisionMeshComponent(GetMeshComp());
			MainWeaponCollision->AddActorToIgnore(GetOwner());
			//UE_LOG(LogTemp, Log, TEXT("AnimInstace"));
		}
		/*AnimInterface = Cast<IAnimInstanceInterface>();
		if (AnimInterface)
		{
			AnimInterface->BPUpdateCombatType(eWeaponType);
			UE_LOG(LogTemp, Log, TEXT("Spawned"));
		}*/
		//Player->GetMesh()->GetAnimInstance()->
	}
}

void ABaseWeapon::OnUnequipped()
{
	Super::OnUnequipped();
}

void ABaseWeapon::AttachActor(FName SocketName)
{
	Super::AttachActor(SocketName);

}

void ABaseWeapon::SimulateWeaponPhysics()
{
	GetMeshComp()->SetCollisionProfileName("PhysicsActor");
	GetMeshComp()->SetSimulatePhysics(true);
}

void ABaseWeapon::ApplyDamage(FHitResult HitResult) //CHANGE THIS IF MULTIPLAYER???????????
{
	//UE_LOG(LogTemp, Log, TEXT("Try DMG??"));
	AMasterAI* Character;
	Character = Cast<AMasterAI>(HitResult.GetActor());
	if (Character)
	{
		if(!Character->CanReceiveDamage()) return;
		UGameplayStatics::ApplyPointDamage(HitResult.GetActor(), GetAttackDamage(), GetOwner()->GetActorForwardVector(), HitResult, GetInstigatorController(), this, DamageTypeClass);
		//UE_LOG(LogTemp, Log, TEXT("Main DMG: %f"), GetAttackDamage());
	}
}

TArray<UAnimMontage*> ABaseWeapon::GetActionMontages(ECharacterActions CharacterAction)
{
	switch (CharacterAction)
	{
	case ECharacterActions::ECA_Nothing:
		break;
		
	case ECharacterActions::ECA_GeneralAction:
		break;
		
	case ECharacterActions::ECA_LightAttack:
		return LightAttackMontage;
		break;
		
	case ECharacterActions::ECA_HeavyAttack:
		return HeavyAttackMontage;
		break;
		
	case ECharacterActions::ECA_ChargedAttack:
		return ChargedAttackMontage;
		break;
		
	case ECharacterActions::ECA_FallingAttack:
		return FallingAttackMontage;
		break;

	case ECharacterActions::ECA_SprintingAttack:
		return SprintingAttackMontage;
		break;
		
	case ECharacterActions::ECA_Dodge:
		return DodgeMontage;
		break;
		
	case ECharacterActions::ECA_EnterCombat:	//Mby Change default values to arrays?
		return SwordDrawMontage;
		break;
		
	case ECharacterActions::ECA_ExitCombat:		//Mby Change default values to arrays?
		return SwordSheathMontage;
		break;
		
	default:
		break;
	}

	return TArray<UAnimMontage*>();
}

float ABaseWeapon::GetStatCostForAction()
{
	if (Player->GetStateComponent())
	{
		float Value = *ActionStatCost.Find(Player->GetStateComponent()->GetCurrentAction());
		return Value;
	}

	return 0.f;
}

float ABaseWeapon::GetAttackDamage()
{
	if (Player->GetStateComponent())
	{
		float Multiplier = *ActionDamageMultiplier.Find(Player->GetStateComponent()->GetCurrentAction());
		Multiplier = FMath::Clamp(Multiplier, 1.f, Multiplier);

		return m_fDamage * Multiplier;
	}

	return 0.f;
}

void ABaseWeapon::ActivateCollision(ECollisionPart CollisionPart)
{
	MainWeaponCollision->EnableCollision();
	//UE_LOG(LogTemp, Log, TEXT("ToughSword Enabled"));
}

void ABaseWeapon::DeactivateCollision(ECollisionPart CollisionPart)
{
	MainWeaponCollision->DisableCollision();
}

void ABaseWeapon::ToggleCombat(bool bEnableCombat)
{
	Player->GetCombatComponent()->SetAttachedToHand(bEnableCombat);
	if (bEnableCombat)
	{
		AttachActor(m_sHandSocketName);
		UE_LOG(LogTemp, Log, TEXT("Main Hand"));
	}
	else
	{
		AttachActor(m_sAttachedSocketName);
		UE_LOG(LogTemp, Log, TEXT("Main Hip"));
	}
}

//MOVED TO PLAYER CHARACTER
/*
void ABaseWeapon::SetAttachedToHand(bool IsAttached)
{
	AnimInstace = Cast<UPlayerAnimInstace>(Player->GetMesh()->GetAnimInstance());
	if (AnimInstace)
	{
		m_bIsAttachedToHand = IsAttached;
		AnimInstace->UpdateWeaponAttachedToHand(IsAttached);
	}

}*/