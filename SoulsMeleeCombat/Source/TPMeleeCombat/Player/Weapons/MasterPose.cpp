// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterPose.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "TPMeleeCombat/Components/StatsComponent.h"

void AMasterPose::AttachActor(FName SocketName)
{
	if (GetSkeletalMeshComp())
	{
		Player = Cast<ATPMeleeCombatPlayer>(GetOwner());
		if (Player)
		{
			GetSkeletalMeshComp()->AttachToComponent(Player->GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, SocketName);
			GetSkeletalMeshComp()->SetMasterPoseComponent(Player->GetMesh());
		}

	}
}

void AMasterPose::OnEquipped()
{
	Super::OnEquipped();

	Player = Cast<ATPMeleeCombatPlayer>(GetOwner());
	if (Player)
	{
		//Player->GetStatsComponent()->ModifyCurrentStatValue(EStats::ES_Armor, m_fArmorValue, false); //Crashes on equip call??? mby fix later :)
	}
}

void AMasterPose::OnUnequipped()
{
	Player = Cast<ATPMeleeCombatPlayer>(GetOwner());
	if (Player)
	{
		//Player->GetStatsComponent()->ModifyCurrentStatValue(EStats::ES_Armor, -m_fArmorValue, false);
	}
}
