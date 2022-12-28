// Fill out your copyright notice in the Description page of Project Settings.


#include "NotifyState_CollisionTrace.h"
#include "TPMeleeCombat/Components/CombatComponent.h"
#include "TPMeleeCombat/Player/CombatInterface.h"
#include "TPMeleeCombat/Player/Weapons/BaseWeapon.h"
#include "TPMeleeCombat/Components/CollisionComponent.h"

void UNotifyState_CollisionTrace::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	UE_LOG(LogTemp, Log, TEXT("StartColl"))
	if (nullptr != MeshComp)
	{
		AActor* Owner = MeshComp->GetOwner();
		if (nullptr != Owner)
		{
			ICombatInterface* CombatComp = nullptr;
			CombatComp = Cast<ICombatInterface>(Owner);
			if (!CombatComp) return;
			CombatComp->ActivateCollision(CollPart);
			//if (!CombatComp->GetMainWeapon()) return;
			//CombatComp->GetMainWeapon()->ActivateCollision(CollPart);
			//UE_LOG(LogTemp, Log, TEXT("Weapon Name: %s"), *CombatComp->GetMainWeapon()->GetName());
		}
	}
}


void UNotifyState_CollisionTrace::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	UE_LOG(LogTemp, Log, TEXT("StopColl"))
	if (nullptr != MeshComp)
	{
		AActor* Owner = MeshComp->GetOwner();
		if (nullptr != Owner)
		{
			ICombatInterface* CombatComp = nullptr;
			CombatComp = Cast<ICombatInterface>(Owner);
			if (!CombatComp) return;
			CombatComp->DeactivateCollision(CollPart);
			/*if (!CombatComp->GetMainWeapon()) return;
			CombatComp->GetMainWeapon()->DeactivateCollision(CollPart);*/
			//UE_LOG(LogTemp, Log, TEXT("Deactivated"));
		}
	}
}