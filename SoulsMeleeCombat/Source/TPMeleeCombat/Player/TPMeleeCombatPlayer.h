// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "InteractionInterface.h"
#include "CombatInterface.h"
#include "TPMeleeCombat/Player/CharacterType.h"

#include "TPMeleeCombatPlayer.generated.h"

class UAnimMontage;
class ABaseWeapon;
class IInteractionInterface;
class UCombatComponent;
class UStateManagerComponent;
class UStatsComponent;
class UTargetingComponent;
class USoundBase;
class UParticleSystem;
class UAttackDamageType;

UCLASS(config = Game)
class TPMELEECOMBAT_API ATPMeleeCombatPlayer : public ACharacter, public ICombatInterface
{
	GENERATED_BODY()

private:
	
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Combat Component")
	UCombatComponent* m_ACCombatComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "State Manager Component")
	UStateManagerComponent* m_ACStateManagerComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Stats Component")
	UStatsComponent* m_ACStatsComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Targeting Component")
	UTargetingComponent* m_ACTargetingComponent;

	UAnimInstance* AnimInstance;

	IInteractionInterface* Interact;

	ECharacterState CurrentCharacterState;
	ECharacterActions CurrentCharacterAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	EMovementSpeedMode MovementSpeedMode = EMovementSpeedMode::EMM_Jogging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	TArray<ECharacterState> CombatStatesToCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	TArray<ECharacterState> DodgeStatesToCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	TArray<ECharacterActions> ActionToCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float m_fHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float m_fWalkingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float m_fJoggingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float m_fSprintingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float m_fAttackHeldTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float m_fChargeAttackTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	bool m_bIsAttackCharged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	FName BoneRagdollName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds | Hit Sound", meta = (AllowPrivateAccess = "true"))
	USoundBase* HitSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particles | Hit Particle", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* HitParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim Montages | Hit Montage", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HitMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim Montages | Knockdown Montage", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* KnockdownMontage;

	bool m_bHeavyAttack;
	bool m_bIsIFramesEnabled;

	FTimerHandle SprintCostTimer;

	const UAttackDamageType* AttackDamageType;

	class UAIPerceptionStimuliSourceComponent* stimulus;

public:

	ATPMeleeCombatPlayer();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;

	virtual void Jump() override;

	virtual void AddControllerYawInput(float Val) override;

	virtual void AddControllerPitchInput(float Val) override;

	virtual bool CanReceiveDamage() override;

	void PerformAttack(ECharacterActions AttackType,int AttackIndex, bool RandomIndex);

	void PerformDodge(int MontageIndex, bool RandomIndex);

	virtual void EnableIFrames(bool bEnabledIFrames) override;

	void PerformAction(int MontageIndex = 0, bool RandomIndex = false, ECharacterActions CharAction = ECharacterActions::ECA_GeneralAction, ECharacterState CharState = ECharacterState::ECS_GeneralAction);

	//DEPRECATED
	//void PerformHitStun();
	//void PerformKnockdown();
	//

	void PerformDeath();

	void AttackEvent();

	UFUNCTION(BlueprintCallable, Category = "ChargeAttack")
	void ChargeAttackEvent();

	bool CanPerformToggleCombat();
	bool CanPerformAttack();
	bool CanPerformBlock();
	bool CanPerformDodge();
	bool CanPerformSprint();

	UFUNCTION(BlueprintCallable)
	void OnStateBegin(ECharacterState State);

	UFUNCTION(BlueprintCallable)
	void OnStateEnd(ECharacterState State);

	UFUNCTION(BlueprintCallable)
	void OnActionBegin(ECharacterActions Action);

	UFUNCTION(BlueprintCallable)
	void OnActionEnd(ECharacterActions Action);

	UFUNCTION(BlueprintCallable)
	void OnCurrentStatUpdated(EStats StatType, float Value);

	//UFUNCTION(BlueprintCallable, Category = "Combat") ///// DEPRECATED
	//void TakeDamage(float inDamage);

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void TakePointDamage(AActor* DamagedActor, float Damage, class AController* InstigatedBy, FVector HitLocation,
		class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const class UDamageType* DamageType, AActor* DamageCauser);

	void DirectionalHitReact(const FVector& ImpactPoint, UAnimMontage* &SelectedHitMontage);
	void EnableRagdoll();
	void ApplyHitReactionPhysicsVelocity(float InitialSpeed);
	void PlayHitReactMontage(const FName& SectionName, UAnimMontage* &SelectedHitMontage);
	void ApplyImpactEffect(EDamageType DamageType, const FVector& HitLocation);

	void ApplyHitReaction(EDamageType DamageType, const FVector &HitDirection);

	void SetMovementSpeedMode(EMovementSpeedMode NewSpeedMode);

	void SetupStimulus();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input)
	float TurnRateGamepad;

protected:

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	void OnToggleCombat();
	virtual void ToggleCombat() override;

	void OnInteract();

	void OnLightAttack();
	void OnHeavyAttack();

	void OnToggleLockOn();
	void OnToggleBlock();
	void OnStopBlock();

	UFUNCTION(BlueprintNativeEvent, Category = "ChargeAttack") //BP IMPLEMENTED
	void TrackChargeAttack(FKey Key);

	FKey LMB;

	UFUNCTION(BlueprintImplementableEvent, Category = "ChargeAttack") //BP IMPLEMENTED
	void ClearChargeEventTimer();

	ECharacterActions GetDesiredAttackType();

	bool ResetChargeAttack();

	void OnDodge();

	void SprintStaminaCost();
	void DisableSprinting();
	void OnSprint();
	void OnSprintReleased();

	void OnWalk();

	virtual void ContinueAttack() override;

	virtual void ResetAttack() override;

	virtual void ResetCombat() override;

	virtual void ActivateCollision(ECollisionPart ColPart) override;

	virtual void DeactivateCollision(ECollisionPart ColPart) override;

	virtual FRotator GetDesiredRotation();

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE	UCombatComponent* GetCombatComponent() const { return m_ACCombatComponent; }
	FORCEINLINE	UStateManagerComponent* GetStateComponent() const { return m_ACStateManagerComponent; }
	FORCEINLINE	UStatsComponent* GetStatsComponent() const { return m_ACStatsComponent; }
	FORCEINLINE UTargetingComponent* GetTargetingComponent() const { return m_ACTargetingComponent; }
	FORCEINLINE EMovementSpeedMode GetCurrentSpeedMode() const { return MovementSpeedMode; }


	//FORCEINLINE void SetMainWeapon(ABaseWeapon* mainweapon) { MainWeapon = mainweapon; }

};
