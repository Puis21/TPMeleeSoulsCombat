// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnableCombat, bool, bEnableCombat);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBlockingSet, bool, bIsBlocking);

class ATPMeleeCombatPlayer;
class ABaseWeapon;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TPMELEECOMBAT_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCombatComponent();

	friend class ATPMeleeCombatPlayer;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetMainWeapon(ABaseWeapon* NewWeapon);

	void SetAttachedToHand(bool IsAttached);

	void SetBlockingState(bool bIsBlocking);

	void SetShieldWeapon(ABaseWeapon* InShield);

	void ResetAttack();

	ATPMeleeCombatPlayer* m_pPlayer;

	class AMasterAI* AI;

	class ACharacter* OwnerAnimInstace;

	UPROPERTY(BlueprintAssignable, Category = "Event Dispachers")
	FOnEnableCombat OnCombatEnabled;

	UPROPERTY(BlueprintAssignable, Category = "Event Dispachers")
	FOnBlockingSet OnBlockingEnabled;

private:

	int m_iAttackCount;

	bool m_bIsAttackSaved;

	ABaseWeapon* MainWeapon;
	ABaseWeapon* EquippedShield;

	bool m_bIsAttachedToHand;

	bool m_bIsBlocking;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	FORCEINLINE ABaseWeapon* GetMainWeapon() const { return MainWeapon; }
	FORCEINLINE ABaseWeapon* GetShieldWeapon() const { return EquippedShield; }
	FORCEINLINE bool GetIsAttachedToHand() const { return m_bIsAttachedToHand; }
	FORCEINLINE bool GetIsAttackSaved() const { return m_bIsAttackSaved; }
	FORCEINLINE int GetAttackCount() const { return m_iAttackCount; }

	FORCEINLINE void SetIsAttackSaved(bool attacksaved) { m_bIsAttackSaved = attacksaved; }
	FORCEINLINE void SetAttackCount(int count) { m_iAttackCount = count; }


};
