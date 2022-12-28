// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"

#include "TPMeleeCombat/Player/CharacterType.h"

#include "BaseDualWeapon.generated.h"

class UStaticMeshComponent;
class UCollisionComponent;

UCLASS()
class TPMELEECOMBAT_API ABaseDualWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:

	ABaseDualWeapon();

	virtual void BeginPlay() override;

	virtual void ActivateCollision(ECollisionPart CollPart) override;
	virtual void DeactivateCollision(ECollisionPart CollPart) override;

	virtual void OnEquipped() override;
	virtual void ToggleCombat(bool bEnableCombat) override;

	virtual void ApplyDamage(FHitResult HitResult);

	void AttachOffHandWeapon(FName SocketName);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Off-Hand Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* SecondItemStaticMesh;

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SocketName", meta = (AllowPrivateAccess = "true"), DisplayName = "Left Hand Attached Socket")
	FName SecondWeaponHandSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SocketName", meta = (AllowPrivateAccess = "true"), DisplayName = "Left Hand Hip Socket")
	FName SecondWeaponAttachSocket;

	UPROPERTY(Category = CollisionComp, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "LefHandComponent")
	UCollisionComponent* LeftHandCollisionComponent;

	UPROPERTY(Category = CollisionComp, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "RightFootComponent")
	UCollisionComponent* RightFootCollisionComponent;

	ECollisionPart CollisionPart;
};
