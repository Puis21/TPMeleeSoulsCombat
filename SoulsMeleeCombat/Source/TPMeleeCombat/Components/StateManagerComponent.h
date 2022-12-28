// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "TPMeleeCombat/Player/CharacterType.h"

#include "StateManagerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateBegin, ECharacterState, CharacterState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateEnd, ECharacterState, CharacterState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionBegin, ECharacterActions, CurrentAction);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionEnd, ECharacterActions, CurrentAction);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TPMELEECOMBAT_API UStateManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStateManagerComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetCharacterState(ECharacterState NewState);
	void SetCharacterAction(ECharacterActions NewAction);

	void ResetState();

	bool IsCurrentStateEqualToAny(TArray<ECharacterState> StatesToCheck);
	bool IsCurrentActionEqualToAny(TArray<ECharacterActions> ActionsToCheck);

	UPROPERTY(BlueprintAssignable, Category = "Event Dispachers")
	FOnStateBegin OnStateBegin;

	UPROPERTY(BlueprintAssignable, Category = "Event Dispachers")
	FOnStateEnd OnStateEnd;

	UPROPERTY(BlueprintAssignable, Category = "Event Dispachers")
	FOnActionBegin OnActionBegin;

	UPROPERTY(BlueprintAssignable, Category = "Event Dispachers")
	FOnActionEnd OnActionEnd;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	ECharacterState CurrentState = ECharacterState::ECS_Nothing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	ECharacterActions CurrentAction = ECharacterActions::ECA_Nothing;

public:	

	UFUNCTION(BlueprintCallable)
	FORCEINLINE ECharacterState GetCurrentState() const { return CurrentState; }
	FORCEINLINE ECharacterActions GetCurrentAction() const { return CurrentAction; }

		
};
