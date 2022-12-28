// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_PerformAction.h"
#include "MasterAIController.h"
#include "TPMeleeCombat/Player/CombatInterface.h"

UBTT_PerformAction::UBTT_PerformAction(FObjectInitializer const& object_initializer) : Super(object_initializer)
{
	NodeName = TEXT("Perform Action");
}

EBTNodeResult::Type UBTT_PerformAction::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto const OwnerController = Cast<AMasterAIController>(OwnerComp.GetAIOwner());
	auto const OwnerPawn = OwnerController->GetPawn();

	ICombatInterface* Combat = Cast<ICombatInterface>(OwnerPawn);
	if (Combat)
	{
		//Combat->PerformCombatAction(CharAction, CharState, MontageIndex, bRandomIndex);
	}

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}
