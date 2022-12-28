// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTS_UpdateBehavior.generated.h"

/**
 * 
 */
UCLASS()
class TPMELEECOMBAT_API UBTS_UpdateBehavior : public UBTService
{
	GENERATED_BODY()

public:
	
	UBTS_UpdateBehavior(const FObjectInitializer& ObjectInitializer);

	virtual void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:

	void UpdateBehavior();
};
