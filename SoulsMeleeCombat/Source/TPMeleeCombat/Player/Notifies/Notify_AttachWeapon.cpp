// Fill out your copyright notice in the Description page of Project Settings.


#include "Notify_AttachWeapon.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "TPMeleeCombat/Components/CombatComponent.h"
#include "TPMeleeCombat/Player/Weapons/Sword.h"

void UNotify_AttachWeapon::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (MeshComp != nullptr && MeshComp)
	{
		AActor* Owner = MeshComp->GetOwner();
		if (nullptr != Owner)
		{
			ICombatInterface* CombatComp = nullptr;
			CombatComp = Cast<ICombatInterface>(Owner);
			if (!CombatComp) return;
			CombatComp->ToggleCombat();

			////////////
			// Can use it later to remove ToggleCombat from BPI
			////////////////
			//UCombatComponent* Combat = nullptr;
			//Combat = Cast<UCombatComponent>(Owner->GetComponentByClass(UCombatComponent::StaticClass()));
			//if (Combat)
			//{
			//	Combat->SetAttachedToHand(!Combat->GetIsAttachedToHand());
			//}
		}
		/*AActor* pOwner = MeshComp->GetOwner();
		if (pOwner != nullptr)
		{
			ATPMeleeCombatPlayer* pPlayer = Cast<ATPMeleeCombatPlayer>(pOwner);
			if (pPlayer != nullptr)
			{
				MainWeapon = pPlayer->GetCombatComponent()->GetMainWeapon();
				if (bAttachToHand)
				{
					//MainWeapon->AttachActor(MainWeapon->GetHandSocketName());
					pPlayer->GetCombatComponent()->GetMainWeapon()->ToggleCombat(bAttachToHand);
					UE_LOG(LogTemp, Log, TEXT("Notify Hand"));
				}
				else
				{
					//MainWeapon->AttachActor(MainWeapon->GetAttachedSocketName());
					pPlayer->GetCombatComponent()->GetMainWeapon()->ToggleCombat(bAttachToHand);
					UE_LOG(LogTemp, Log, TEXT("Notify Hip"));
				}

			}
		}*/
	}
}