// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEquipable.generated.h"

class USpringArmComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class USceneComponent;

UCLASS()
class TPMELEECOMBAT_API ABaseEquipable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseEquipable();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	USceneComponent* RootComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* ItemSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Hand Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ItemStaticMesh;

protected:

	bool m_bIsEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SocketName", meta = (AllowPrivateAccess = "true"), DisplayName = "Right Hand Hip Socket")
	FName m_sAttachedSocketName;

public:
	
	UFUNCTION(BlueprintCallable, Category = "OnEquipped")
	virtual void OnEquipped();

	virtual void OnUnequipped();

	UFUNCTION(BlueprintCallable, Category = "Attach Actor")
	virtual void AttachActor(FName SocketName);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:	

	FORCEINLINE UStaticMeshComponent* GetMeshComp() const { return ItemStaticMesh; }
	FORCEINLINE USkeletalMeshComponent* GetSkeletalMeshComp() const { return ItemSkeletalMesh; }
	FORCEINLINE FName GetAttachedSocketName() const { return m_sAttachedSocketName; }
	FORCEINLINE bool GetIsEquipped() const { return m_bIsEquipped; }

	FORCEINLINE void SetIsEquipped(bool equipped) { m_bIsEquipped = equipped; }

};
