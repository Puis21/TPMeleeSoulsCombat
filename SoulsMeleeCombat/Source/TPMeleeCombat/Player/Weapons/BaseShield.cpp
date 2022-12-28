// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseShield.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "TPMeleeCombat/Components/CombatComponent.h"
#include "TPMeleeCombat/Player/PlayerAnimInstace.h"
#include "TPMeleeCombat/Components/CollisionComponent.h"

ABaseShield::ABaseShield()
{
}

void ABaseShield::OnEquipped()
{
	AttachActor(m_sAttachedSocketName);

	SetIsEquipped(true);

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
		Player->GetCombatComponent()->SetShieldWeapon(this);
		AnimInstace = Cast<UPlayerAnimInstace>(Player->GetMesh()->GetAnimInstance());
		if (AnimInstace)
		{
			AnimInstace->UpdateCombatType(eWeaponType);
			MainWeaponCollision->SetCollisionMeshComponent(GetMeshComp());
			MainWeaponCollision->AddActorToIgnore(GetOwner());
			//UE_LOG(LogTemp, Log, TEXT("AnimInstace"));
		}
	}
}

void ABaseShield::OnUnequipped()
{
	Super::OnUnequipped();
	
	Player = Cast<ATPMeleeCombatPlayer>(GetOwner());
	if(Player)
	{
		Player->GetCombatComponent()->SetShieldWeapon(nullptr);
	}
}