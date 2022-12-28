// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_PerformAttack.h"
#include "MasterAIController.h"
#include "TPMeleeCombat/Player/CombatInterface.h"


UBTT_PerformAttack::UBTT_PerformAttack(FObjectInitializer const& object_initializer) : Super(object_initializer)
{
	NodeName = TEXT("Perform Action");
}

EBTNodeResult::Type UBTT_PerformAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto const OwnerController = Cast<AMasterAIController>(OwnerComp.GetAIOwner());
	auto const OwnerPawn = OwnerController->GetPawn();

	ICombatInterface* Combat = Cast<ICombatInterface>(OwnerPawn);
	if (Combat)
	{
		//Combat->PerformAttack(CharAction, MontageIndex, bRandomIndex);
	}

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}
