// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEquipable.h"

#include "TPMeleeCombat/Player/CharacterType.h"

#include "BaseWeapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	None				UMETA(DisplayName = "None"),
	LightSword			UMETA(DisplayName = "LightSword"),
	GreatSword			UMETA(DisplayName = "GreatSword"),
	DualSwords			UMETA(DisplayName = "DualSwords")

};

class UCollisionComponent;
class UAnimMontage;
class UDamageType;

UCLASS()
class TPMELEECOMBAT_API ABaseWeapon : public ABaseEquipable
{
	GENERATED_BODY()
	
public:

	ABaseWeapon();

	virtual void BeginPlay() override;

	virtual void OnEquipped() override;

	virtual void OnUnequipped() override;

	virtual void AttachActor(FName SocketName) override;

	void SimulateWeaponPhysics();

	UFUNCTION(BlueprintCallable)
	virtual void ApplyDamage(FHitResult HitResult);

	TArray<UAnimMontage*> GetActionMontages(ECharacterActions CharacterAction);

	float GetStatCostForAction();
	float GetAttackDamage();

	virtual void ActivateCollision(ECollisionPart CollisionPart);
	virtual void DeactivateCollision(ECollisionPart CollisionPart);

	virtual void ToggleCombat(bool bEnableCombat);

	//void SetAttachedToHand(bool IsAttached); /// MOVED TO PLAYER CHARACTER

	UPROPERTY(EditAnywhere, Category = "Weapon Type")
	EWeaponType eWeaponType;

	class IAnimInstanceInterface* AnimInterface;


protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SocketName", meta = (AllowPrivateAccess = "true"), DisplayName = "Right Hand Attached Socket")
	FName m_sHandSocketName;

	bool m_bIsAttachedToHand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float m_fDamage;

	class ATPMeleeCombatPlayer* Player;
	class UPlayerAnimInstace* AnimInstace;

	UPROPERTY(Category = CollisionComp, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), DisplayName = "MainWeaponCollisionComponent")
	UCollisionComponent* MainWeaponCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Type", meta = (AllowPrivateAccess = "true"), DisplayName = "Damage Type Class")
	TSubclassOf<UDamageType> DamageTypeClass;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Sheath")
	TArray<UAnimMontage*> SwordSheathMontage;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Draw")
	TArray<UAnimMontage*> SwordDrawMontage;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Combo")
	TArray<UAnimMontage*> LightAttackMontage;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Combo")
	TArray<UAnimMontage*> HeavyAttackMontage;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Combo")
	TArray<UAnimMontage*> ChargedAttackMontage;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Combo")
	TArray<UAnimMontage*> FallingAttackMontage;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Combo")
	TArray<UAnimMontage*> SprintingAttackMontage;

	UPROPERTY(EditAnywhere, Category = "Anim | Sword Combo")
	TArray<UAnimMontage*> DodgeMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	TMap<ECharacterActions, float> ActionStatCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	TMap<ECharacterActions, float> ActionDamageMultiplier;

public:

	FORCEINLINE UCollisionComponent* GetCollisionComponent() const { return MainWeaponCollision; }
	FORCEINLINE FName GetHandSocketName() const { return m_sHandSocketName; }
	//FORCEINLINE bool GetIsAttachedToHand() const { return m_bIsAttachedToHand; } // MOVED TO PLAYER
	FORCEINLINE TArray<UAnimMontage*> GetWeaponSheathMontage() const { return SwordSheathMontage; }
	FORCEINLINE TArray<UAnimMontage*> GetWeaponDrawMontage() const { return SwordDrawMontage; }
	FORCEINLINE TArray<UAnimMontage*> GetWeaponAttackMontage() const { return LightAttackMontage; }
	FORCEINLINE TArray<UAnimMontage*> GetDodgeMontage() const { return DodgeMontage; }

	//FORCEINLINE void SetIsAttachedToHand(bool attached) { m_bIsAttachedToHand = attached; } //UNUSED SETTER AND MOVED TO PLAYER

};
