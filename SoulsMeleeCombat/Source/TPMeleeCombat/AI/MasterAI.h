// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "TPMeleeCombat/Player/CombatInterface.h"
#include "TPMeleeCombat/Player/CharacterType.h"
#include "Components/TimelineComponent.h"

#include "MasterAI.generated.h"

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
class UBehaviorTree;
class UCollisionComponent;
class UStaticMeshComponent;
class UDamageType;
class UCurveFloat;
class AMasterAIController;

UCLASS()
class TPMELEECOMBAT_API AMasterAI : public ACharacter, public ICombatInterface
{
	GENERATED_BODY()

private:

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Combat Component")
	UCombatComponent* m_ACCombatComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "State Manager Component")
	UStateManagerComponent* m_ACStateManagerComponent;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "Stats Component")
	UStatsComponent* m_ACStatsComponent;

	UPROPERTY(Category = CollisionComp, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "MainWeaponCollisionComponent")
	UCollisionComponent* MainWeaponCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Weapon Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ItemStaticMesh;

	UPROPERTY(EditAnywhere, Category = "Behavior Tree", meta = (AlowPrivateAccess = "true"))
	UBehaviorTree* BehaviorTree;

	UAnimInstance* AnimInstance;
	AMasterAIController* AIController;

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
	float m_fWalkingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float m_fJoggingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float m_fSprintingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float m_fDamage;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim Montages | Light Attack Montages", meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*> LightAttackMontages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim Montages | Medium Range Attack Montages", meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*> ChargeAttackMontages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim Montages | Rare Attack Montages", meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*> HeavyAttackMontages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim Montages | Dodge Montages", meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*> DodgeMontages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim Montages | Enter Combat Montages", meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*> EnterCombatMontages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim Montages | Exit Combat Montages", meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*> ExitCombatMontages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (AllowPrivateAccess = "true"), DisplayName = "Damage Type Class")
	TSubclassOf<UDamageType> DamageTypeClass;

	UPROPERTY(EditAnywhere, Category = "Curve Float")
	UCurveFloat* RotationCurveFloat;

	FName HitSection;

	FTimerHandle SprintCostTimer;

	FTimeline AttackRotationTimeline; 

	const UAttackDamageType* AttackDamageType;

public:

	AMasterAI();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;

	virtual bool CanReceiveDamage() override;

	UFUNCTION(BlueprintCallable, Category = "AI Actions")
	float PerformAttack(ECharacterActions AttackType = ECharacterActions::ECA_Nothing, int AttackIndex = 0, bool RandomIndex = false);

	UFUNCTION(BlueprintCallable, Category = "AI Actions")
	float PerformAction(int MontageIndex = 0, bool RandomIndex = false, ECharacterActions CharAction = ECharacterActions::ECA_GeneralAction, ECharacterState CharState = ECharacterState::ECS_GeneralAction);

	//DEPRECATED
	//void PerformHitStun();
	//void PerformKnockdown();
	//

	void PerformDeath();

	void AttackEvent();

	bool CanPerformToggleCombat();
	bool CanPerformAttack();
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

	UFUNCTION(BlueprintCallable)
	virtual void ApplyDamage(FHitResult HitResult);

	//UFUNCTION(BlueprintCallable, Category = "Combat") ///// DEPRECATED
	//void TakeDamage(float inDamage);

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void TakePointDamage(AActor* DamagedActor, float Damage, class AController* InstigatedBy, FVector HitLocation,
			class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const class UDamageType* DamageType, AActor* DamageCauser);

	void DirectionalHitReact(const FVector& ImpactPoint, UAnimMontage*& SelectedHitMontage);
	void EnableRagdoll();
	void ApplyHitReactionPhysicsVelocity(float InitialSpeed);
	void PlayHitReactMontage(const FName& SectionName, UAnimMontage*& SelectedHitMontage);
	void ApplyImpactEffect(EDamageType DamageType, const FVector& HitLocation);

	virtual void EnableIFrames(bool bEnabledIFrames) override;

	void ApplyHitReaction(EDamageType DamageType, const FVector& HitDirection);

	void SetMovementSpeedMode(EMovementSpeedMode NewSpeedMode);

	void AttachWeapon(bool bAttachWeapon);

	UFUNCTION()
	void RotateToTarget(float Value);

	TArray<UAnimMontage*> GetActionMontage(ECharacterActions CharacterAction);

protected:

	ECharacterActions GetDesiredAttackType();

	void OnWalk();

	virtual void ContinueAttack() override;

	virtual void ResetAttack() override;

	virtual void ActivateCollision(ECollisionPart ColPart) override;

	virtual void DeactivateCollision(ECollisionPart ColPart) override;

	virtual void ToggleCombat() override;

	virtual void ResetCombat() override;

	virtual FRotator GetDesiredRotation();

public:

	FORCEINLINE	UCombatComponent* GetCombatComponent() const { return m_ACCombatComponent; }
	FORCEINLINE	UStateManagerComponent* GetStateComponent() const { return m_ACStateManagerComponent; }
	FORCEINLINE	UStatsComponent* GetStatsComponent() const { return m_ACStatsComponent; }
	FORCEINLINE EMovementSpeedMode GetCurrentSpeedMode() const { return MovementSpeedMode; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE UBehaviorTree* GetBehaviorTree() const { return BehaviorTree; }


	//FORCEINLINE void SetMainWeapon(ABaseWeapon* mainweapon) { MainWeapon = mainweapon; }

};
