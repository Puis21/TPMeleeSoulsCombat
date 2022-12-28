// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "BaseShield.generated.h"

/**
 * 
 */
UCLASS()
class TPMELEECOMBAT_API ABaseShield : public ABaseWeapon
{
	GENERATED_BODY()

public:
	
	ABaseShield();

	virtual void OnEquipped() override;

	virtual void OnUnequipped() override;

private:

};
