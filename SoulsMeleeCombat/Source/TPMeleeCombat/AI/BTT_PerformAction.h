// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"

#include "TPMeleeCombat/Player/CharacterType.h"

#include "BTT_PerformAction.generated.h"

/**
 * 
 */
UCLASS()
class TPMELEECOMBAT_API UBTT_PerformAction : public UBTTaskNode
{
	GENERATED_BODY()
	
public:

	UBTT_PerformAction(FObjectInitializer const& object_initializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actions", meta = (AllowPrivateAccess = "true"))
	ECharacterActions CharAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actions", meta = (AllowPrivateAccess = "true"))
	ECharacterState CharState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actions", meta = (AllowPrivateAccess = "true"))
	int32 MontageIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actions", meta = (AllowPrivateAccess = "true"))
	bool bRandomIndex;
};
