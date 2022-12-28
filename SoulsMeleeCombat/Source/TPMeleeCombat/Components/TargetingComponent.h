// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "TPMeleeCombat/Player/CharacterType.h"

#include "TargetingComponent.generated.h"

UENUM(BlueprintType)
enum class ERotationMode : uint8
{
	OrientToCamera			UMETA(DisplayName = "OrientToCamera"),
	OrientToMovement		UMETA(DisplayName = "Off-OrientToMovement")
};

class ACharacter;
class AController;
class UCameraComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TPMELEECOMBAT_API UTargetingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTargetingComponent();

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void EnableLockOn();
	void DisableLockOn();

	void ToggleLockOn();

	void UpdateTargetingRotation(float DeltaTime);
	void SetRotationMode(ERotationMode NewRotMode);

	void SetIsTargeting(bool EnableTargeting);

	UFUNCTION(BlueprintCallable, Category = "FindTarget")
	AActor* FindTarget();

protected:

	AActor* TargetActor;

	ACharacter* OwnerCharacter;
	AController* OwnerController;
	UCameraComponent* FollowCamera;

	bool m_bIsTargeting;
	bool m_bIsTargetFound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting", meta = (AllowPrivateAccess = "true"))
	float m_fTargetingDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting", meta = (AllowPrivateAccess = "true"))
	float m_fTargetingRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting", meta = (AllowPrivateAccess = "true"))
	float m_fTargetRotationInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting", meta = (AllowPrivateAccess = "true"))
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting", meta = (AllowPrivateAccess = "true"))
	TArray<AActor*> ActorsToIgnore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting", meta = (AllowPrivateAccess = "true"))
	bool m_bShowTargetDebug;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Targeting", meta = (AllowPrivateAccess = "true"))
	ERotationMode CurrentRotationMode = ERotationMode::OrientToMovement;

public:	

	FORCEINLINE int GetIsTargeting() const { return m_bIsTargeting; }
	FORCEINLINE AActor* GetTargetActor() const { return TargetActor; }

	FORCEINLINE void SetTargetActor(AActor* NewTargetActor) { TargetActor = NewTargetActor; }
		
};
