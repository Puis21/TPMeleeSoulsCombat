// Fill out your copyright notice in the Description page of Project Settings.


#include "NotifyState_RotateCharacter.h"
#include "TPMeleeCombat/Player/CombatInterface.h"
#include "Kismet/KismetMathLibrary.h"

UNotifyState_RotateCharacter::UNotifyState_RotateCharacter()
{

}

void UNotifyState_RotateCharacter::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	if (MeshComp != nullptr && MeshComp)
	{
		AActor* pOwner = MeshComp->GetOwner();
		if (pOwner != nullptr)
		{
			ICombatInterface* Combat = Cast<ICombatInterface>(pOwner);
			if (Combat)
			{
				FRotator NewRotation = FRotator(Combat->GetDesiredRotation());
				//FQuat QuatRotation = FQuat();
				UKismetMathLibrary::RInterpTo_Constant(pOwner->GetActorRotation(), NewRotation, FrameDeltaTime, m_fInterpSpeed);
				pOwner->SetActorRotation(NewRotation, ETeleportType::None);
			}

		}
	}
}