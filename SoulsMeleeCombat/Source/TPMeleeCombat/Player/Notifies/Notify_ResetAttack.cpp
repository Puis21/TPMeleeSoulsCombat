// Fill out your copyright notice in the Description page of Project Settings.


#include "Notify_ResetAttack.h"
#include "TPMeleeCombat/Player/CombatInterface.h"

void UNotify_ResetAttack::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (MeshComp != nullptr && MeshComp)
	{
		AActor* pOwner = MeshComp->GetOwner();
		if (pOwner != nullptr)
		{
			ICombatInterface* Combat = Cast<ICombatInterface>(pOwner);
			if (Combat)
				Combat->ResetAttack();
		}
	}
}
