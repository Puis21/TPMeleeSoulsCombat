// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "NotifyState_RotateCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TPMELEECOMBAT_API UNotifyState_RotateCharacter : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:

	UNotifyState_RotateCharacter();

	UPROPERTY(EditAnywhere, Category = InterpSpeed)
	float m_fInterpSpeed = 720;

	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;

};
