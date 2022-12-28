#pragma once

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Nothing			UMETA(DisplayName = "Nothing"),
	ECS_Attacking		UMETA(DisplayName = "Attacking"),
	ECS_Dodging			UMETA(DisplayName = "Dodging"),
	ECS_GeneralAction	UMETA(DisplayName = "General Action"),
	ECS_Dead			UMETA(DisplayName = "Dead"),
	ECS_Disabled		UMETA(DisplayName = "Disabled")
};

UENUM(BlueprintType)
enum class ECharacterActions : uint8
{
	ECA_Nothing			UMETA(DisplayName = "Nothing"),
	ECA_GeneralAction	UMETA(DisplayName = "GeneralAction"),
	ECA_LightAttack		UMETA(DisplayName = "LightAttack"),
	ECA_HeavyAttack		UMETA(DisplayName = "HeavyAttack"),
	ECA_ChargedAttack	UMETA(DisplayName = "ChargedAttack"),
	ECA_FallingAttack	UMETA(DisplayName = "FallingAttack"),
	ECA_SprintingAttack	UMETA(DisplayName = "SprintingAttack"),
	ECA_Dodge			UMETA(DisplayName = "Dodge"),
	ECA_EnterCombat		UMETA(DisplayName = "EnterCombat"),
	ECA_ExitCombat		UMETA(DisplayName = "ExitCombat")

};

UENUM(BlueprintType)
enum class EMovementSpeedMode : uint8
{
	EMM_Walking			UMETA(DisplayName = "Walking"),
	EMM_Jogging			UMETA(DisplayName = "Jogging"),
	EMM_Sprinting		UMETA(DisplayName = "Sprinting")

};

UENUM(BlueprintType)
enum class EStats : uint8
{
	ES_NONE				UMETA(DisplayName = "None"),
	ES_Health			UMETA(DisplayName = "Health"),
	ES_Stamina			UMETA(DisplayName = "Stamina"),
	ES_Armor			UMETA(DisplayName = "Armor")

};

UENUM(BlueprintType)
enum class ECollisionPart : uint8
{
	MainWeapon			UMETA(DisplayName = "MainWeapon"),
	OffHandWeapon		UMETA(DisplayName = "Off-HandWeapon"),
	RightFoot			UMETA(DisplayName = "RightFoot")
};

UENUM(BlueprintType)
enum class EDamageType : uint8
{
	None				UMETA(DisplayName = "None"),
	MeleeDamage			UMETA(DisplayName = "MeleeDamage"),
	KnockdownDamage		UMETA(DisplayName = "KnockdownDamage")
};

UENUM(BlueprintType)
enum class EAIAttackRange : uint8
{
	None				UMETA(DisplayName = "None"),
	CloseRange			UMETA(DisplayName = "CloseRange"),
	MediumRange			UMETA(DisplayName = "MediumRange")
};