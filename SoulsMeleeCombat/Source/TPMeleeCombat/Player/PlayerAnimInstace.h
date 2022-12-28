// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"

#include "TPMeleeCombat/Player/AnimInstanceInterface.h"

#include "PlayerAnimInstace.generated.h"

/**
 * 
 */
UCLASS()
class TPMELEECOMBAT_API UPlayerAnimInstace : public UAnimInstance, public IAnimInstanceInterface
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	EWeaponType Weapon;

	UPROPERTY(BlueprintReadOnly)
	bool m_bIsAttachedToHand;

	float speed;

	virtual void UpdateCombatType(EWeaponType WeaponType) override;

	virtual void UpdateWeaponAttachedToHand(bool bIsAttachedToHand) override;

	FORCEINLINE float GetSpeed() const { return speed; }
};
