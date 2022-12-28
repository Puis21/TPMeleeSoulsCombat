// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "Perception/AIPerceptionTypes.h"
#include "TPMeleeCombat/Player/CharacterType.h"

#include "MasterAIController.generated.h"

UENUM(BlueprintType)
enum class EAIBehavior : uint8
{
	EAB_Nothing			UMETA(DisplayName = "Nothing"),
	EAB_Patrolling		UMETA(DisplayName = "Patrolling"),
	EAB_Chasing			UMETA(DisplayName = "Chasing"),
	//EAB_Investigating	UMETA(DisplayName = "Investigating"),
	EAB_Combat			UMETA(DisplayName = "Combat"),
	EAB_Attacking		UMETA(DisplayName = "Attacking"),
	EAB_Hit				UMETA(DisplayName = "Hit")

};


class AMasterAI;
class UBehaviorTreeComponent;
class UBlackboardComponent;
class UAISenseConfig_Sight;
class UAISenseConfig_Damage;
class UAIPerceptionSystem;

UCLASS()
class TPMELEECOMBAT_API AMasterAIController : public AAIController
{
	GENERATED_BODY()

public:
	AMasterAIController();

	virtual void OnPossess(APawn* InPawn) override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void SetupPerceptionSystem();

	UFUNCTION(BlueprintCallable)
	void StartAIBehaviorSwitch(EAIBehavior ENewAIBehavior);
	void SetAIBehaviorState(EAIBehavior &ENewAIBehavior);

	UFUNCTION()
	void OnUpdated(TArray<AActor*> const& UpdatedActors);

	void OnCombatToggled(bool bIsEnabled);

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true" ))
	float m_fCloseRangeAttackingDistance = 200.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float m_fTotalRangeAttackingDistance = 400.f;

	bool m_bCanSeePlayer = false;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
	UBehaviorTreeComponent* BehaviorTreeComponent;

	UBlackboardComponent* BlackboardComponent;

	UAISenseConfig_Sight* SightConfig;
	UAISenseConfig_Damage* DamageConfig;

	UAIPerceptionSystem* PercSystem;

	AMasterAI* MasterAI;

	AActor* FoundTarget;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
	EAIBehavior CurrentAIBehavior = EAIBehavior::EAB_Nothing;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
	EAIAttackRange CurrentAIAttackRange = EAIAttackRange::CloseRange;

public:

	FORCEINLINE UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }
	FORCEINLINE AMasterAI* GetMasterAI() const { return MasterAI; }
	FORCEINLINE AActor* GetFoundTarget() const { return FoundTarget; }
};
