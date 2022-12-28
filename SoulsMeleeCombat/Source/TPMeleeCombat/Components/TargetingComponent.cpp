// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetingComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
#include "TPMeleeCombat/Components/StateManagerComponent.h"
#include "TPMeleeCombat/AI/MasterAI.h"

// Sets default values for this component's properties
UTargetingComponent::UTargetingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	m_fTargetingDistance = 900.f;
	m_fTargetingRadius = 100.f;
	m_fTargetRotationInterpSpeed = 9.f;
}


// Called when the game starts
void UTargetingComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (OwnerCharacter)
	{
		OwnerController = OwnerCharacter->GetController();
		FollowCamera = Cast<UCameraComponent>(OwnerCharacter->GetComponentByClass(UCameraComponent::StaticClass()));
	}
	
}


// Called every frame
void UTargetingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (m_bIsTargeting)
	{
		UpdateTargetingRotation(DeltaTime);
	}
}

void UTargetingComponent::EnableLockOn()
{
	FindTarget();
	//UE_LOG(LogTemp, Log, TEXT("Was Target Found: %s. Target Name: %s"), m_bIsTargetFound ? TEXT("true") : TEXT("false"));//, *TargetActor->GetName());
	if (m_bIsTargetFound)
	{
		SetTargetActor(TargetActor);
		SetIsTargeting(true);
		SetRotationMode(ERotationMode::OrientToCamera);
		//UE_LOG(LogTemp, Log, TEXT("Targeting : %s"), *TargetActor->GetActorLabel());
	}

}

void UTargetingComponent::DisableLockOn()
{
	SetIsTargeting(false);
	SetTargetActor(nullptr);
	SetRotationMode(ERotationMode::OrientToMovement);
}

void UTargetingComponent::ToggleLockOn()
{
	//UE_LOG(LogTemp, Log, TEXT("Try Toggle"));
	if (!GetIsTargeting())
	{
		EnableLockOn();
		//UE_LOG(LogTemp, Log, TEXT("Toggle On"));
	}
	else
	{
		DisableLockOn();
	}
}

void UTargetingComponent::UpdateTargetingRotation(float DeltaTime)
{
	if (OwnerController && TargetActor)
	{
		AMasterAI* SelfTarget = Cast<AMasterAI>(TargetActor); ///// CHANGE THIS WHEN MAKING ENEMIES WITH THE TARGETING INTERFACE
		if (SelfTarget)
		{
			if (SelfTarget->GetStateComponent()->GetCurrentState() != ECharacterState::ECS_Dead)
			{
				FVector StartLook = GetOwner()->GetActorLocation();
				FVector TargetLook = TargetActor->GetActorLocation() - 100.f; // Change to variable
				FRotator LookRotation = UKismetMathLibrary::FindLookAtRotation(StartLook, TargetLook);

				FRotator RollRotation;
				FRotator PitchAndYawRotation;
				RollRotation = OwnerController->GetControlRotation();

				PitchAndYawRotation = UKismetMathLibrary::RInterpTo(OwnerController->GetControlRotation(), LookRotation, DeltaTime, m_fTargetRotationInterpSpeed);
				OwnerController->SetControlRotation(FRotator(PitchAndYawRotation.Pitch, PitchAndYawRotation.Yaw, RollRotation.Roll));
			}
			else
			{
				DisableLockOn();
			}
		}

	}
}

void UTargetingComponent::SetRotationMode(ERotationMode NewRotMode)
{
	CurrentRotationMode = NewRotMode;
	
	switch (CurrentRotationMode)
	{
	case ERotationMode::OrientToCamera:
		OwnerCharacter->bUseControllerRotationYaw = false;
		OwnerCharacter->GetCharacterMovement()->bUseControllerDesiredRotation = true;
		OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
		break;

	case ERotationMode::OrientToMovement:
		OwnerCharacter->bUseControllerRotationYaw = false;
		OwnerCharacter->GetCharacterMovement()->bUseControllerDesiredRotation = false;
		OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
		break;

	default:
		break;
	}
}

void UTargetingComponent::SetIsTargeting(bool EnableTargeting)
{
	m_bIsTargeting = EnableTargeting;
	if (TargetActor)
	{
		//Call On Targeted 
	}
}

AActor* UTargetingComponent::FindTarget()
{
	if (FollowCamera)
	{
		FHitResult TargetResult;

		FVector Start = GetOwner()->GetActorLocation();
		FVector CameraForward = FollowCamera->GetForwardVector() * m_fTargetingDistance;
		FVector End = CameraForward + Start;

		ActorsToIgnore.Add(GetOwner());

		UKismetSystemLibrary::SphereTraceSingleForObjects(GetWorld(), 
		Start, 
		End,
		m_fTargetingRadius, 
		ObjectType, 
		false, 
		ActorsToIgnore,
		m_bShowTargetDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
		TargetResult,
		true
		);

		if (TargetResult.bBlockingHit && TargetResult.GetActor())
		{
			m_bIsTargetFound = true;
			return TargetActor = TargetResult.GetActor();
			//UE_LOG(LogTemp, Log, TEXT("Was Target Found: %s. Target Name: %s"), ReturnBool ? TEXT("true") : TEXT("false"), *FoundTarget->GetName());
		}
		else
		{
			m_bIsTargetFound = false;
			return TargetActor = nullptr;
			UE_LOG(LogTemp, Log, TEXT("NOT Found Target"));
		}
	}

	m_bIsTargetFound = false;
	return TargetActor = nullptr;
}

