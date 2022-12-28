// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatComponent.h"
#include "TPMeleeCombat/Player/Weapons/BaseWeapon.h"
#include "TPMeleeCombat/Player/PlayerAnimInstace.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "TPMeleeCombat/AI/MasterAI.h"

// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCombatComponent::SetMainWeapon(ABaseWeapon* NewWeapon)
{
	if (MainWeapon)
	{
		MainWeapon->OnUnequipped();
		MainWeapon->Destroy();
		MainWeapon = NewWeapon;
	}
	else
	{
		MainWeapon = NewWeapon;
	}
}

void UCombatComponent::SetAttachedToHand(bool IsAttached)
{
	UE_LOG(LogTemp, Log, TEXT("Attached 2"));
	OwnerAnimInstace = Cast<ACharacter>(GetOwner());
	//UAnimInstance* AnimInstance = Cast<UAnimInstance>(OwnerAnimInstace->GetMesh()->GetAnimInstance());
	if (OwnerAnimInstace)
	{
		UPlayerAnimInstace* AnimInstance = Cast<UPlayerAnimInstace>(OwnerAnimInstace->GetMesh()->GetAnimInstance());
		UE_LOG(LogTemp, Log, TEXT("Attached 3"));
		if (AnimInstance)
		{
			UE_LOG(LogTemp, Log, TEXT("Attached 4"));
			m_bIsAttachedToHand = IsAttached;
			AnimInstance->UpdateWeaponAttachedToHand(IsAttached);
			OnCombatEnabled.Broadcast(IsAttached);
		}
	}
}

void UCombatComponent::SetBlockingState(bool bEnableBlocking)
{
	if (m_bIsBlocking != bEnableBlocking)
	{
		m_bIsBlocking = bEnableBlocking;
		OnCombatEnabled.Broadcast(m_bIsBlocking);
	}
}

void UCombatComponent::SetShieldWeapon(ABaseWeapon* InShield)
{
	EquippedShield = InShield;
}

void UCombatComponent::ResetAttack()
{
	m_iAttackCount = 1;
	m_bIsAttackSaved = false;
}