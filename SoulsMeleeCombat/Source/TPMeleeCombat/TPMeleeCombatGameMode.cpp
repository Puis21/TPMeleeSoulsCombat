// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPMeleeCombatGameMode.h"
#include "TPMeleeCombatCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPMeleeCombatGameMode::ATPMeleeCombatGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
