// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstace.h"
#include "TPMeleeCombat/Player/Weapons/BaseWeapon.h"

void UPlayerAnimInstace::UpdateCombatType(EWeaponType WeaponType)
{
	Weapon = WeaponType;
}

void UPlayerAnimInstace::UpdateWeaponAttachedToHand(bool bIsAttachedToHand)
{
	m_bIsAttachedToHand = bIsAttachedToHand;
}
