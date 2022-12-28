// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CollisionComponent.generated.h"

class UPrimitiveComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHit, FHitResult, HitResult);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TPMELEECOMBAT_API UCollisionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCollisionComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void EnableCollision();
	void DisableCollision();
	void CollisionTrace();
	void ClearHitActors();

	void AddActorToIgnore(AActor* Actor);
	void RemoveActorToIgnore(AActor* Actor);

	UPROPERTY(BlueprintAssignable, Category = "Event Dispachers")
	FOnHit OnHit;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	
	TArray<AActor*> HitActors;

	FHitResult LastHit;

	bool m_bIsCollisionEnabled;
	
	UPrimitiveComponent* CollisionMeshComponent;

	UPROPERTY(EditAnywhere, Category = "Collision Trace", meta = (AllowPrivateAccess = "true"))
	FName StartSocketName;

	UPROPERTY(EditAnywhere, Category = "Collision Trace", meta = (AllowPrivateAccess = "true"))
	FName EndSocketName;

	UPROPERTY(EditAnywhere, Category = "Collision Trace", meta = (AllowPrivateAccess = "true"))
	float m_fFloatRadius;

	UPROPERTY(EditAnywhere, Category = "Collision Trace", meta = (AllowPrivateAccess = "true"))
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectType;

	UPROPERTY(EditAnywhere, Category = "Collision Trace", meta = (AllowPrivateAccess = "true"))
	TArray<AActor*> ActorsToIgnore;

	UPROPERTY(EditAnywhere, Category = "Collision Trace", meta = (AllowPrivateAccess = "true"))
	bool m_bShowBoxDebug;

public:	

	FORCEINLINE TArray<AActor*> GetHitActors() const { return HitActors; }
	FORCEINLINE TArray<AActor*> GetActorsToIgnore() const { return ActorsToIgnore; }
	FORCEINLINE bool GetIsCollisionEnabled() const { return m_bIsCollisionEnabled; }
	FORCEINLINE FHitResult GetLastHit() const { return LastHit; }
	FORCEINLINE UPrimitiveComponent* GetCollisionMeshComponent() const { return CollisionMeshComponent; }

	FORCEINLINE void SetCollisionMeshComponent(UPrimitiveComponent* MeshComp) { CollisionMeshComponent = MeshComp; }

		
};
