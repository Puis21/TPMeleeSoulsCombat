// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionComponent.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values for this component's properties
UCollisionComponent::UCollisionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	m_bIsCollisionEnabled = false;
	m_bShowBoxDebug = false;
	m_fFloatRadius = 20.f;
}


// Called when the game starts
void UCollisionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UCollisionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (m_bIsCollisionEnabled)
	{
		CollisionTrace();
	}
}

void UCollisionComponent::EnableCollision()
{
	ClearHitActors();
	m_bIsCollisionEnabled = true;
}

void UCollisionComponent::DisableCollision()
{
	m_bIsCollisionEnabled = false;
}

void UCollisionComponent::CollisionTrace()
{
	TArray<FHitResult> SphereHits;
	
	FVector start = CollisionMeshComponent->GetSocketLocation(StartSocketName);
	FVector end = CollisionMeshComponent->GetSocketLocation(EndSocketName);

	ActorsToIgnore.Add(GetOwner());

	const bool IsHit = UKismetSystemLibrary::SphereTraceMultiForObjects(
		GetWorld(),
		start, 
		end,
		m_fFloatRadius, 
		ObjectType,
		false, 
		ActorsToIgnore, 
		m_bShowBoxDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
		SphereHits,
		true
		);

	if (IsHit)
	{
		for (const FHitResult& HitResult : SphereHits)
		{
			//LastHit = HitResult;
			if (!HitActors.Contains(HitResult.GetActor()))
			{
				HitActors.Add(HitResult.GetActor());
				OnHit.Broadcast(HitResult);
			}
		}
	}

}

void UCollisionComponent::ClearHitActors()
{
	HitActors.Empty();
}

void UCollisionComponent::AddActorToIgnore(AActor* Actor)
{
	ActorsToIgnore.AddUnique(Actor);
}

void UCollisionComponent::RemoveActorToIgnore(AActor* Actor)
{
	ActorsToIgnore.Remove(Actor);
}

