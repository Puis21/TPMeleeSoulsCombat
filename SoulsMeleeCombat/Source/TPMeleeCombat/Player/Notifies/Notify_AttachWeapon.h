// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Notify_AttachWeapon.generated.h"

/**
 * 
 */
UCLASS()
class TPMELEECOMBAT_API UNotify_AttachWeapon : public UAnimNotify
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere)
	bool bAttachToHand;

	class ABaseWeapon* MainWeapon;

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

};
