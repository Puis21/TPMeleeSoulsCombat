// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsComponent.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "TPMeleeCombat/Components/StateManagerComponent.h"

// Sets default values for this component's properties
UStatsComponent::UStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UStatsComponent::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UStatsComponent::ModifyCurrentStatValue(EStats Stat, float Value, bool bShouldRegen)
{
	if (Value != 0)
	{
		float NewValue;
		NewValue = Value + GetCurrentStatValue(Stat);
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxStatValue(Stat));
		SetCurrentStatValue(Stat, NewValue);
		if (bShouldRegen)
		{
			StartRegen(Stat);
		}
	}
}

void UStatsComponent::SetCurrentStatValue(EStats Stat, float Value)
{
	CurrentStats.Add(Stat, Value);
	float val = *CurrentStats.Find(Stat);
	OnCurrentStatUpdated.Broadcast(Stat, Value);
	//UE_LOG(LogTemp, Warning, TEXT("Setted: %f"), val);
}

void UStatsComponent::SetBaseStatValue(EStats Stat, float Value) //CRASHES ??
{
	FBaseStats Val = *BaseStats.Find(Stat);
	//UE_LOG(LogTemp, Warning, TEXT("Setted: %f"), Val.m_fBaseStats);
	Val.m_fBaseStats = Value;
	BaseStats.Add(Stat, Val);
	//UE_LOG(LogTemp, Warning, TEXT("Setted: %f"), Val.m_fBaseStats);
}

void UStatsComponent::InitializeStats()
{	
	for (auto& Stat : BaseStats)
	{
		FBaseStats BaseValue = *BaseStats.Find(Stat.Key);
		//UE_LOG(LogTemp, Warning, TEXT("Initialize: %f"), BaseValue.m_fBaseStats);
		SetCurrentStatValue(Stat.Key, BaseValue.m_fBaseStats);
	}
}

void UStatsComponent::StartRegen(EStats StatType)
{
	switch (StatType)
	{
	case EStats::ES_NONE:
		break;
	case EStats::ES_Health:
		break;

	case EStats::ES_Stamina:
		GetWorld()->GetTimerManager().ClearTimer(StaminaRegenTimer);
		GetWorld()->GetTimerManager().SetTimer(CooldownStaminaTimer, this, &UStatsComponent::CooldownStamina, 1.5f, false);
		break;

	case EStats::ES_Armor:
		break;

	default:
		break;
	}
}

float UStatsComponent::GetCurrentStatValue(EStats Stat)
{
	float Value = *CurrentStats.Find(Stat);
	return Value;
}

float UStatsComponent::GetBaseStatValue(EStats Stat)
{
	FBaseStats Value = *BaseStats.Find(Stat);
	return Value.m_fBaseStats;
}

float UStatsComponent::GetMaxStatValue(EStats Stat)
{
	FBaseStats Value = *BaseStats.Find(Stat);
	return Value.m_fMaxStats;

}

void UStatsComponent::TakeDamage(float inDamage)
{
	ModifyCurrentStatValue(EStats::ES_Health, inDamage * -1.f);
	//UE_LOG(LogTemp, Log, TEXT("Took dmg"));
	ATPMeleeCombatPlayer* Player = Cast<ATPMeleeCombatPlayer>(GetOwner());
	if (Player)
	{
		if (GetCurrentStatValue(EStats::ES_Health) <= 0)
		{
			Player->GetStateComponent()->SetCharacterState(ECharacterState::ECS_Dead);
			//UE_LOG(LogTemp, Log, TEXT("Ded"));
		}
	}
}

void UStatsComponent::CooldownStamina()
{
	GetWorld()->GetTimerManager().SetTimer(StaminaRegenTimer, this, &UStatsComponent::RegenStamina, 0.1f, true);
}

void UStatsComponent::RegenStamina()
{
	float ClampedStamina = FMath::Clamp(GetCurrentStatValue(EStats::ES_Stamina) + m_fStaminaRegenRate, 0, GetMaxStatValue(EStats::ES_Stamina));
	SetCurrentStatValue(EStats::ES_Stamina, ClampedStamina);
	//UE_LOG(LogTemp, Warning, TEXT("Stamina: %f"), GetCurrentStatValue(EStats::ES_Stamina));

	if (GetCurrentStatValue(EStats::ES_Stamina) >= GetMaxStatValue(EStats::ES_Stamina))
	{
		GetWorld()->GetTimerManager().ClearTimer(StaminaRegenTimer);
	}
}
