// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "TPMeleeCombat/Player/CharacterType.h"

#include "CombatInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCombatInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TPMELEECOMBAT_API ICombatInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION()
	virtual void ContinueAttack() = 0;

	UFUNCTION()
	virtual void ResetAttack() = 0;

	UFUNCTION()
	virtual void ResetCombat() = 0;

	UFUNCTION()
	virtual FRotator GetDesiredRotation() = 0;

	UFUNCTION()
	virtual bool CanReceiveDamage() = 0;

	UFUNCTION()
	virtual void ActivateCollision(ECollisionPart ColPart);

	UFUNCTION()
	virtual void DeactivateCollision(ECollisionPart ColPart);

	UFUNCTION()
	virtual void EnableIFrames(bool bEnabledIFrames);

	UFUNCTION()
	virtual void ToggleCombat();
};
