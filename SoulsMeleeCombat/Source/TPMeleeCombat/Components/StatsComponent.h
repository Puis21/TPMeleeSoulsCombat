// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "TPMeleeCombat/Player/CharacterType.h"

#include "StatsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrentStatUpdated, EStats, StatType, float, Value);

USTRUCT(BlueprintType)
struct FBaseStats
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float m_fBaseStats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float m_fMaxStats;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TPMELEECOMBAT_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatsComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	TMap<EStats, FBaseStats> BaseStats;

	//Modify Value Based on Stat and clamp
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void ModifyCurrentStatValue(EStats Stat, float Value, bool bShouldRegen = true);

	//Set Current Stat Value
	void SetCurrentStatValue(EStats Stat, float Value);

	//Set Current Base Value
	void SetBaseStatValue(EStats Stat, float Value); //Crashes ???

	//Get Current Stat Value
	//UFUNCTION(BlueprintCallable, Category = "Stats")
	float GetCurrentStatValue(EStats Stat);

	//Get Base Stat Value
	float GetBaseStatValue(EStats Stat);

	//Get Max Stat Value
	float GetMaxStatValue(EStats Stat);

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void TakeDamage(float inDamage);

	void RegenStamina();
	void CooldownStamina();

	void InitializeStats();
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void StartRegen(EStats StatType);

	UPROPERTY(BlueprintAssignable, Category = "Event Dispachers")
	FOnCurrentStatUpdated OnCurrentStatUpdated;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	TMap<EStats, float> CurrentStats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float m_fStaminaRegenRate;

	FTimerHandle CooldownStaminaTimer;
	FTimerHandle StaminaRegenTimer;

public:
		
};
