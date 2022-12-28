// Fill out your copyright notice in the Description page of Project Settings.


#include "Sword.h"
#include "BaseWeapon.h"
#include "BaseEquipable.h"

ASword::ASword()
{

}

void ASword::OnEquipped()
{
	Super::OnEquipped();
}

void ASword::OnUnequipped()
{
	Super::OnUnequipped();
}

void ASword::AttachActor(FName SocketName)
{
	Super::AttachActor(SocketName);

}