// Fill out your copyright notice in the Description page of Project Settings.


#include "StateManagerComponent.h"

// Sets default values for this component's properties
UStateManagerComponent::UStateManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStateManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStateManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UStateManagerComponent::SetCharacterState(ECharacterState NewState)
{
	if (NewState != CurrentState)
	{
		OnStateEnd.Broadcast(NewState);
		CurrentState = NewState;
		OnStateBegin.Broadcast(NewState);
	}
}

void UStateManagerComponent::SetCharacterAction(ECharacterActions NewAction)
{
	if (NewAction != CurrentAction)
	{
		OnActionEnd.Broadcast(NewAction);
		CurrentAction = NewAction;
		OnActionBegin.Broadcast(NewAction);
	}
}

void UStateManagerComponent::ResetState()
{
	CurrentState = ECharacterState::ECS_Nothing;
}

bool UStateManagerComponent::IsCurrentStateEqualToAny(TArray<ECharacterState> StatesToCheck)
{
	if (StatesToCheck.Contains(CurrentState))
	{
		return true;
	}

	return false;
}

bool UStateManagerComponent::IsCurrentActionEqualToAny(TArray<ECharacterActions> ActionsToCheck)
{
	if (ActionsToCheck.Contains(CurrentAction))
	{
		return true;
	}

	return false;
}

