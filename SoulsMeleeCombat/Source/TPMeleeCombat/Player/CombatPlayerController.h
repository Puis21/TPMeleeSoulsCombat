// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "TPMeleeCombat/Player/CharacterType.h"

#include "CombatPlayerController.generated.h"

class ATPMeleeCombatPlayer;
class UCharacterOverlay;

UCLASS()
class TPMELEECOMBAT_API ACombatPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	
	ACombatPlayerController();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	TSubclassOf<UCharacterOverlay> CharacterOverlayClass;

	UCharacterOverlay* CharacterOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	EStats StaminaStat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	EStats HealthStat;

private:

	ATPMeleeCombatPlayer* PlayerChar;

	UFUNCTION(BlueprintCallable)
	void OnStatsUpdated(EStats StatType, float Value);

};
