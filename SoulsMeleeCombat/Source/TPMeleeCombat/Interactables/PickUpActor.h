// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "TPMeleeCombat/Player/InteractionInterface.h"

#include "PickUpActor.generated.h"

UCLASS()
class TPMELEECOMBAT_API APickUpActor : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUpActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
	class UStaticMeshComponent* ActorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
	class USphereComponent* SphereCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sword, meta = (AllowPrivateAccess = "true")) //Mby change to Asword?
	TSubclassOf<class ABaseWeapon> WeaponClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sword, meta = (AllowPrivateAccess = "true"))
	class ABaseWeapon* Weapon; //Mby change to Asword?

	class ATPMeleeCombatPlayer* Player; //NOT USED

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void InteractPure(AActor* CallerActor, APawn* CallerPawn) override;

};
