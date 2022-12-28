// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterAIController.h"
#include "MasterAI.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionSystem.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Damage.h"
#include "TPMeleeCombat/Components/CombatComponent.h"
#include "Kismet/GameplayStatics.h"

AMasterAIController::AMasterAIController()
{
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComp"));
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));

	SetupPerceptionSystem();
}

void AMasterAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (InPawn == nullptr) return;

	MasterAI = Cast<AMasterAI>(InPawn);
	if (MasterAI && MasterAI->GetBehaviorTree())
	{
		//BehaviorTreeComponent->StartTree(*MasterAI->GetBehaviorTree());
		BlackboardComponent->InitializeBlackboard(*MasterAI->GetBehaviorTree()->BlackboardAsset);
		BehaviorTreeComponent->StartTree(*MasterAI->GetBehaviorTree());
		//GetMasterAI()->GetCombatComponent()->OnCombatEnabled.AddDynamic(this, &AMasterAIController::OnCombatToggled);
		RunBehaviorTree(MasterAI->GetBehaviorTree());
		//UE_LOG(LogTemp, Log, TEXT("Ran Tree"));
	}

}

void AMasterAIController::BeginPlay()
{
	Super::BeginPlay();

}

void AMasterAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_bCanSeePlayer && FVector::Distance(FoundTarget->GetActorLocation(), GetMasterAI()->GetActorLocation()) <= m_fTotalRangeAttackingDistance)
	{
		StartAIBehaviorSwitch(EAIBehavior::EAB_Combat);
		if (FVector::Distance(FoundTarget->GetActorLocation(), GetMasterAI()->GetActorLocation()) <= m_fCloseRangeAttackingDistance)
		{
			GetBlackboardComponent()->SetValueAsEnum(FName("AIAttackRange"), 1);
			//UE_LOG(LogTemp, Log, TEXT("CloseRange"))
		}
		else
		{
			GetBlackboardComponent()->SetValueAsEnum(FName("AIAttackRange"), 2);\
			//UE_LOG(LogTemp, Log, TEXT("MediumRange"))
		}
		//UE_LOG(LogTemp, Log, TEXT("CombatRange"))
	}
	else if (m_bCanSeePlayer && FVector::Distance(FoundTarget->GetActorLocation(), GetMasterAI()->GetActorLocation()) > m_fTotalRangeAttackingDistance)
	{
		StartAIBehaviorSwitch(EAIBehavior::EAB_Chasing);
	}
}

void AMasterAIController::OnUpdated(TArray<AActor*> const& UpdatedActors)
{
	for (AActor* FoundActor : UpdatedActors)
	{
		FActorPerceptionBlueprintInfo info;
		FoundTarget = FoundActor;
		GetPerceptionComponent()->GetActorsPerception(FoundTarget, info);
		for (size_t StimuliIndex = 0; StimuliIndex < info.LastSensedStimuli.Num(); ++StimuliIndex)
		{
			FAIStimulus const Stim = info.LastSensedStimuli[StimuliIndex];
			FString StimulusName = UKismetSystemLibrary::GetDisplayName(PercSystem->GetSenseClassForStimulus(GetWorld(), Stim));
			//UE_LOG(LogTemp, Log, TEXT("StimuliName: %s"), *StimulusName);
			switch (StimuliIndex)
			{
			case 0:
				if (Stim.WasSuccessfullySensed())
				{
					StartAIBehaviorSwitch(EAIBehavior::EAB_Chasing);
				}
				else
				{
					StartAIBehaviorSwitch(EAIBehavior::EAB_Nothing);
					UE_LOG(LogTemp, Log, TEXT("Stopped Sensing"));
				}
				//GetBlackboardComponent()->SetValueAsBool(FName("PlayerDetected"), Stim.WasSuccessfullySensed());
				//GetBlackboardComponent()->SetValueAsEnum(FName("AIBehavior"), 2);
				//UE_LOG(LogTemp, Log, TEXT("PlayerSensed : %s"), Stim.WasSuccessfullySensed() ? TEXT("true") : TEXT("false"));
				UE_LOG(LogTemp, Log, TEXT("StimuliName0: %s"), *StimulusName);
				break;
			case 1:
				if (Stim.WasSuccessfullySensed() && CurrentAIBehavior != EAIBehavior::EAB_Combat)
				{
					UE_LOG(LogTemp, Log, TEXT("StimuliName1: %s"), *StimulusName);
					StartAIBehaviorSwitch(EAIBehavior::EAB_Chasing);
				}
				break;

			default:
				break;
			}
		}
	}

	///////////////////////
	//// DEPRECATED
	//////////////////////
	 
	/*FActorPerceptionBlueprintInfo info;
	GetPerceptionComponent()->GetActorsPerception(FoundActor, info);
	FAIStimulus const Stim = info.LastSensedStimuli[0];
	auto Player = Cast<ATPMeleeCombatPlayer>(FoundActor);
	if (Player)
	{
		GetBlackboardComponent()->SetValueAsObject(FName("Player"), FoundActor);
		GetBlackboardComponent()->SetValueAsBool(FName("CanSeePlayer"), Stim.WasSuccessfullySensed());
	}*/

	//if (StimulusName == "AISense_Sight")
	//{
	//	GetBlackboardComponent()->SetValueAsObject(FName("Player"), FoundActor);
	//	GetBlackboardComponent()->SetValueAsBool(FName("CanSeePlayer"), Stim.WasSuccessfullySensed());
	//	UE_LOG(LogTemp, Log, TEXT("PlayerFound"))
	//}

	/*switch (StimuliIndex)
	{
	case 0:
		StartAIBehaviorSwitch(EAIBehavior::EAB_Chasing);
		if (!Stim.WasSuccessfullySensed())
		{
			StartAIBehaviorSwitch(EAIBehavior::EAB_Nothing);
			UE_LOG(LogTemp, Log, TEXT("Stopped Sensing"));
		}
		//GetBlackboardComponent()->SetValueAsBool(FName("PlayerDetected"), Stim.WasSuccessfullySensed());
		//GetBlackboardComponent()->SetValueAsEnum(FName("AIBehavior"), 2);
		UE_LOG(LogTemp, Log, TEXT("PlayerSensed : %s"), Stim.WasSuccessfullySensed() ? TEXT("true") : TEXT("false"));
		UE_LOG(LogTemp, Log, TEXT("StimuliName: %s"), *StimulusName);
		break;
	case 1:
		UE_LOG(LogTemp, Log, TEXT("StimuliName: %s"), *StimulusName);
		//StartAIBehaviorSwitch(EAIBehavior::EAB_Chasing);
		//GetBlackboardComponent()->SetValueAsObject(FName("Player"), FoundTarget);
		//GetBlackboardComponent()->SetValueAsBool(FName("PlayerDetected"), Stim.WasSuccessfullySensed());
		//GetBlackboardComponent()->SetValueAsEnum(FName("AIBehavior"), 2);
		break;

	default:
		break;
	}*/

	///////////////////////
	////
	//////////////////////

}

void AMasterAIController::OnCombatToggled(bool bIsEnabled)
{
	GetBlackboardComponent()->SetValueAsBool(FName("bCombatEnabled"), bIsEnabled);
	UE_LOG(LogTemp, Log, TEXT("Combat Toggled"));
}

void AMasterAIController::StartAIBehaviorSwitch(EAIBehavior ENewAIBehavior)
{
	if (ENewAIBehavior != CurrentAIBehavior)
	{
		CurrentAIBehavior = ENewAIBehavior;
		SetAIBehaviorState(ENewAIBehavior);
	}
}

void AMasterAIController::SetAIBehaviorState(EAIBehavior &ENewAIBehavior)
{
	switch (ENewAIBehavior)
	{
	case EAIBehavior::EAB_Nothing:
		GetBlackboardComponent()->SetValueAsEnum(FName("AIBehavior"), 0);
		GetBlackboardComponent()->SetValueAsObject(FName("Player"), nullptr);
		m_bCanSeePlayer = false;
		break;

	case EAIBehavior::EAB_Patrolling:
		break;

	case EAIBehavior::EAB_Chasing:
		GetBlackboardComponent()->SetValueAsEnum(FName("AIBehavior"), 2);
		GetBlackboardComponent()->SetValueAsObject(FName("Player"), FoundTarget);
		m_bCanSeePlayer = true;
		break;
	
	case EAIBehavior::EAB_Combat:
		GetBlackboardComponent()->SetValueAsEnum(FName("AIBehavior"), 3);
		break;

	case EAIBehavior::EAB_Attacking:
		GetBlackboardComponent()->SetValueAsEnum(FName("AIBehavior"), 4);
		break;

	default:
		break;
	}
}

void AMasterAIController::SetupPerceptionSystem()
{
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	if (SightConfig)
	{
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
		SightConfig->SightRadius = 500.0f;
		SightConfig->LoseSightRadius = SightConfig->SightRadius + 100.0f;
		SightConfig->PeripheralVisionAngleDegrees = 45.0f;
		SightConfig->SetMaxAge(2.5f);
		SightConfig->AutoSuccessRangeFromLastSeenLocation = -1.0f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		// add sight configuration component to perception component
		GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
		GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AMasterAIController::OnUpdated);
		GetPerceptionComponent()->ConfigureSense(*SightConfig);
	}
	DamageConfig = CreateDefaultSubobject<UAISenseConfig_Damage>(TEXT("Damage Config"));
	if (DamageConfig)
	{
		GetPerceptionComponent()->ConfigureSense(*DamageConfig);
	}

}

