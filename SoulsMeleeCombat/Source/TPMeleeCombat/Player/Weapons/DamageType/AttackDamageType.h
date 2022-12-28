// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"

#include "TPMeleeCombat/Player/CharacterType.h"

#include "AttackDamageType.generated.h"

/**
 * 
 */
UCLASS()
class TPMELEECOMBAT_API UAttackDamageType : public UDamageType
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Type")
	EDamageType DamageType = EDamageType::None;

public:

	FORCEINLINE EDamageType GetDamageType() const { return DamageType; }
};
