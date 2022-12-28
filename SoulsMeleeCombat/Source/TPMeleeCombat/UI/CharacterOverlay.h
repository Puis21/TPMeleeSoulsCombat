// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterOverlay.generated.h"

class UStatsComponent;

UCLASS()
class TPMELEECOMBAT_API UCharacterOverlay : public UUserWidget
{
	GENERATED_BODY()

public:

	UCharacterOverlay(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* StaminaStatBar;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthStatBar;

};
