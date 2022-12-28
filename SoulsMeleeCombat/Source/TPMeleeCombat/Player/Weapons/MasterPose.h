// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEquipable.h"

#include "TPMeleeCombat/Player/CharacterType.h"

#include "MasterPose.generated.h"

/**
 * 
 */
UCLASS()
class TPMELEECOMBAT_API AMasterPose : public ABaseEquipable
{
	GENERATED_BODY()
	
public:

	virtual void AttachActor(FName SocketName) override;

	virtual void OnEquipped() override;

	virtual void OnUnequipped() override;

private:

	class ATPMeleeCombatPlayer* Player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float m_fArmorValue;
};
