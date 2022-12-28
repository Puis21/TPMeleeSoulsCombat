// Fill out your copyright notice in the Description page of Project Settings.


#include "NotifyState_EnableIFrames.h"
#include "TPMeleeCombat/Components/CombatComponent.h"
#include "TPMeleeCombat/Player/CombatInterface.h"

void UNotifyState_EnableIFrames::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	if (nullptr != MeshComp)
	{
		AActor* Owner = MeshComp->GetOwner();
		if (nullptr != Owner)
		{
			ICombatInterface* CombatComp = nullptr;
			CombatComp = Cast<ICombatInterface>(Owner);
			if (!CombatComp) return;
			CombatComp->EnableIFrames(true);
		}
	}
}


void UNotifyState_EnableIFrames::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (nullptr != MeshComp)
	{
		AActor* Owner = MeshComp->GetOwner();
		if (nullptr != Owner)
		{
			ICombatInterface* CombatComp = nullptr;
			CombatComp = Cast<ICombatInterface>(Owner);
			if (!CombatComp) return;
			CombatComp->EnableIFrames(false);
		}
	}
}