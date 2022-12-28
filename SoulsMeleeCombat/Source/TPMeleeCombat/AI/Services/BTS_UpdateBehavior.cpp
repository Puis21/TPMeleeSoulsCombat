// Fill out your copyright notice in the Description page of Project Settings.


#include "BTS_UpdateBehavior.h"

UBTS_UpdateBehavior::UBTS_UpdateBehavior(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = "Update Behavior";

	bNotifyBecomeRelevant = true;
	bNotifyTick = true;

}

void UBTS_UpdateBehavior::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);
	
}

void UBTS_UpdateBehavior::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UE_LOG(LogTemp, Log, TEXT("ALO??"));
}

void UBTS_UpdateBehavior::UpdateBehavior()
{
}
