// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatPlayerController.h"
#include "Components/ProgressBar.h"
#include "TPMeleeCombat/Components/StatsComponent.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "TPMeleeCombat/UI/CharacterOverlay.h"

ACombatPlayerController::ACombatPlayerController()
{

}

void ACombatPlayerController::BeginPlay()
{
	//UE_LOG(LogTemp, Log, TEXT("ALO"));
	CharacterOverlay = CreateWidget<UCharacterOverlay>(this, CharacterOverlayClass);
	if (CharacterOverlay)
	{
		CharacterOverlay->AddToViewport();
	}

	PlayerChar = Cast<ATPMeleeCombatPlayer>(GetPawn());
	if (PlayerChar && PlayerChar->GetStatsComponent())
	{
		PlayerChar->GetStatsComponent()->OnCurrentStatUpdated.AddDynamic(this, &ACombatPlayerController::OnStatsUpdated);
		UE_LOG(LogTemp, Log, TEXT("ALO"));
	}
}

void ACombatPlayerController::OnStatsUpdated(EStats StatType, float Value) //Mby Redo the system selection with widget??
{
	if (PlayerChar && PlayerChar->GetStatsComponent())
	{
		float StaminaPercent;
		float HealthPercent;

		switch (StatType)
		{
		case EStats::ES_NONE:
			break;

		case EStats::ES_Health:
			StaminaPercent = Value / PlayerChar->GetStatsComponent()->GetMaxStatValue(StaminaStat);
			CharacterOverlay->HealthStatBar->SetPercent(StaminaPercent);
			break;

		case EStats::ES_Stamina:
			HealthPercent = Value / PlayerChar->GetStatsComponent()->GetMaxStatValue(HealthStat);
			CharacterOverlay->StaminaStatBar->SetPercent(HealthPercent);
			break;

		case EStats::ES_Armor:
			break;

		default:
			break;
		}
	}
}
