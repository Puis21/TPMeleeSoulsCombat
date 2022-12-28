// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/CharacterType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterType() {}
// Cross Module References
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterState();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterActions();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EStats();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECollisionPart();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EDamageType();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
	static UEnum* ECharacterState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPMeleeCombat_ECharacterState, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("ECharacterState"));
		}
		return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	struct Z_Construct_UEnum_TPMeleeCombat_ECharacterState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPMeleeCombat_ECharacterState_Statics::Enumerators[] = {
		{ "ECharacterState::ECS_Nothing", (int64)ECharacterState::ECS_Nothing },
		{ "ECharacterState::ECS_Attacking", (int64)ECharacterState::ECS_Attacking },
		{ "ECharacterState::ECS_Dodging", (int64)ECharacterState::ECS_Dodging },
		{ "ECharacterState::ECS_GeneralAction", (int64)ECharacterState::ECS_GeneralAction },
		{ "ECharacterState::ECS_Dead", (int64)ECharacterState::ECS_Dead },
		{ "ECharacterState::ECS_Disabled", (int64)ECharacterState::ECS_Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPMeleeCombat_ECharacterState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_Attacking.DisplayName", "Attacking" },
		{ "ECS_Attacking.Name", "ECharacterState::ECS_Attacking" },
		{ "ECS_Dead.DisplayName", "Dead" },
		{ "ECS_Dead.Name", "ECharacterState::ECS_Dead" },
		{ "ECS_Disabled.DisplayName", "Disabled" },
		{ "ECS_Disabled.Name", "ECharacterState::ECS_Disabled" },
		{ "ECS_Dodging.DisplayName", "Dodging" },
		{ "ECS_Dodging.Name", "ECharacterState::ECS_Dodging" },
		{ "ECS_GeneralAction.DisplayName", "General Action" },
		{ "ECS_GeneralAction.Name", "ECharacterState::ECS_GeneralAction" },
		{ "ECS_Nothing.DisplayName", "Nothing" },
		{ "ECS_Nothing.Name", "ECharacterState::ECS_Nothing" },
		{ "ModuleRelativePath", "Player/CharacterType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPMeleeCombat_ECharacterState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		"ECharacterState",
		"ECharacterState",
		Z_Construct_UEnum_TPMeleeCombat_ECharacterState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_ECharacterState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPMeleeCombat_ECharacterState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_ECharacterState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterState()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_TPMeleeCombat_ECharacterState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterActions;
	static UEnum* ECharacterActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("ECharacterActions"));
		}
		return Z_Registration_Info_UEnum_ECharacterActions.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UEnum* StaticEnum<ECharacterActions>()
	{
		return ECharacterActions_StaticEnum();
	}
	struct Z_Construct_UEnum_TPMeleeCombat_ECharacterActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPMeleeCombat_ECharacterActions_Statics::Enumerators[] = {
		{ "ECharacterActions::ECA_Nothing", (int64)ECharacterActions::ECA_Nothing },
		{ "ECharacterActions::ECA_GeneralAction", (int64)ECharacterActions::ECA_GeneralAction },
		{ "ECharacterActions::ECA_LightAttack", (int64)ECharacterActions::ECA_LightAttack },
		{ "ECharacterActions::ECA_HeavyAttack", (int64)ECharacterActions::ECA_HeavyAttack },
		{ "ECharacterActions::ECA_ChargedAttack", (int64)ECharacterActions::ECA_ChargedAttack },
		{ "ECharacterActions::ECA_FallingAttack", (int64)ECharacterActions::ECA_FallingAttack },
		{ "ECharacterActions::ECA_SprintingAttack", (int64)ECharacterActions::ECA_SprintingAttack },
		{ "ECharacterActions::ECA_Dodge", (int64)ECharacterActions::ECA_Dodge },
		{ "ECharacterActions::ECA_EnterCombat", (int64)ECharacterActions::ECA_EnterCombat },
		{ "ECharacterActions::ECA_ExitCombat", (int64)ECharacterActions::ECA_ExitCombat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPMeleeCombat_ECharacterActions_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECA_ChargedAttack.DisplayName", "ChargedAttack" },
		{ "ECA_ChargedAttack.Name", "ECharacterActions::ECA_ChargedAttack" },
		{ "ECA_Dodge.DisplayName", "Dodge" },
		{ "ECA_Dodge.Name", "ECharacterActions::ECA_Dodge" },
		{ "ECA_EnterCombat.DisplayName", "EnterCombat" },
		{ "ECA_EnterCombat.Name", "ECharacterActions::ECA_EnterCombat" },
		{ "ECA_ExitCombat.DisplayName", "ExitCombat" },
		{ "ECA_ExitCombat.Name", "ECharacterActions::ECA_ExitCombat" },
		{ "ECA_FallingAttack.DisplayName", "FallingAttack" },
		{ "ECA_FallingAttack.Name", "ECharacterActions::ECA_FallingAttack" },
		{ "ECA_GeneralAction.DisplayName", "GeneralAction" },
		{ "ECA_GeneralAction.Name", "ECharacterActions::ECA_GeneralAction" },
		{ "ECA_HeavyAttack.DisplayName", "HeavyAttack" },
		{ "ECA_HeavyAttack.Name", "ECharacterActions::ECA_HeavyAttack" },
		{ "ECA_LightAttack.DisplayName", "LightAttack" },
		{ "ECA_LightAttack.Name", "ECharacterActions::ECA_LightAttack" },
		{ "ECA_Nothing.DisplayName", "Nothing" },
		{ "ECA_Nothing.Name", "ECharacterActions::ECA_Nothing" },
		{ "ECA_SprintingAttack.DisplayName", "SprintingAttack" },
		{ "ECA_SprintingAttack.Name", "ECharacterActions::ECA_SprintingAttack" },
		{ "ModuleRelativePath", "Player/CharacterType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPMeleeCombat_ECharacterActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		"ECharacterActions",
		"ECharacterActions",
		Z_Construct_UEnum_TPMeleeCombat_ECharacterActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_ECharacterActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPMeleeCombat_ECharacterActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_ECharacterActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterActions()
	{
		if (!Z_Registration_Info_UEnum_ECharacterActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterActions.InnerSingleton, Z_Construct_UEnum_TPMeleeCombat_ECharacterActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterActions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementSpeedMode;
	static UEnum* EMovementSpeedMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovementSpeedMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovementSpeedMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("EMovementSpeedMode"));
		}
		return Z_Registration_Info_UEnum_EMovementSpeedMode.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UEnum* StaticEnum<EMovementSpeedMode>()
	{
		return EMovementSpeedMode_StaticEnum();
	}
	struct Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode_Statics::Enumerators[] = {
		{ "EMovementSpeedMode::EMM_Walking", (int64)EMovementSpeedMode::EMM_Walking },
		{ "EMovementSpeedMode::EMM_Jogging", (int64)EMovementSpeedMode::EMM_Jogging },
		{ "EMovementSpeedMode::EMM_Sprinting", (int64)EMovementSpeedMode::EMM_Sprinting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMM_Jogging.DisplayName", "Jogging" },
		{ "EMM_Jogging.Name", "EMovementSpeedMode::EMM_Jogging" },
		{ "EMM_Sprinting.DisplayName", "Sprinting" },
		{ "EMM_Sprinting.Name", "EMovementSpeedMode::EMM_Sprinting" },
		{ "EMM_Walking.DisplayName", "Walking" },
		{ "EMM_Walking.Name", "EMovementSpeedMode::EMM_Walking" },
		{ "ModuleRelativePath", "Player/CharacterType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		"EMovementSpeedMode",
		"EMovementSpeedMode",
		Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode()
	{
		if (!Z_Registration_Info_UEnum_EMovementSpeedMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementSpeedMode.InnerSingleton, Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovementSpeedMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStats;
	static UEnum* EStats_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStats.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStats.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPMeleeCombat_EStats, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("EStats"));
		}
		return Z_Registration_Info_UEnum_EStats.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UEnum* StaticEnum<EStats>()
	{
		return EStats_StaticEnum();
	}
	struct Z_Construct_UEnum_TPMeleeCombat_EStats_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPMeleeCombat_EStats_Statics::Enumerators[] = {
		{ "EStats::ES_NONE", (int64)EStats::ES_NONE },
		{ "EStats::ES_Health", (int64)EStats::ES_Health },
		{ "EStats::ES_Stamina", (int64)EStats::ES_Stamina },
		{ "EStats::ES_Armor", (int64)EStats::ES_Armor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPMeleeCombat_EStats_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ES_Armor.DisplayName", "Armor" },
		{ "ES_Armor.Name", "EStats::ES_Armor" },
		{ "ES_Health.DisplayName", "Health" },
		{ "ES_Health.Name", "EStats::ES_Health" },
		{ "ES_NONE.DisplayName", "None" },
		{ "ES_NONE.Name", "EStats::ES_NONE" },
		{ "ES_Stamina.DisplayName", "Stamina" },
		{ "ES_Stamina.Name", "EStats::ES_Stamina" },
		{ "ModuleRelativePath", "Player/CharacterType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPMeleeCombat_EStats_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		"EStats",
		"EStats",
		Z_Construct_UEnum_TPMeleeCombat_EStats_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EStats_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPMeleeCombat_EStats_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EStats_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPMeleeCombat_EStats()
	{
		if (!Z_Registration_Info_UEnum_EStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStats.InnerSingleton, Z_Construct_UEnum_TPMeleeCombat_EStats_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStats.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionPart;
	static UEnum* ECollisionPart_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollisionPart.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollisionPart.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPMeleeCombat_ECollisionPart, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("ECollisionPart"));
		}
		return Z_Registration_Info_UEnum_ECollisionPart.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UEnum* StaticEnum<ECollisionPart>()
	{
		return ECollisionPart_StaticEnum();
	}
	struct Z_Construct_UEnum_TPMeleeCombat_ECollisionPart_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPMeleeCombat_ECollisionPart_Statics::Enumerators[] = {
		{ "ECollisionPart::MainWeapon", (int64)ECollisionPart::MainWeapon },
		{ "ECollisionPart::OffHandWeapon", (int64)ECollisionPart::OffHandWeapon },
		{ "ECollisionPart::RightFoot", (int64)ECollisionPart::RightFoot },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPMeleeCombat_ECollisionPart_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MainWeapon.DisplayName", "MainWeapon" },
		{ "MainWeapon.Name", "ECollisionPart::MainWeapon" },
		{ "ModuleRelativePath", "Player/CharacterType.h" },
		{ "OffHandWeapon.DisplayName", "Off-HandWeapon" },
		{ "OffHandWeapon.Name", "ECollisionPart::OffHandWeapon" },
		{ "RightFoot.DisplayName", "RightFoot" },
		{ "RightFoot.Name", "ECollisionPart::RightFoot" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPMeleeCombat_ECollisionPart_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		"ECollisionPart",
		"ECollisionPart",
		Z_Construct_UEnum_TPMeleeCombat_ECollisionPart_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_ECollisionPart_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPMeleeCombat_ECollisionPart_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_ECollisionPart_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPMeleeCombat_ECollisionPart()
	{
		if (!Z_Registration_Info_UEnum_ECollisionPart.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionPart.InnerSingleton, Z_Construct_UEnum_TPMeleeCombat_ECollisionPart_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollisionPart.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageType;
	static UEnum* EDamageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPMeleeCombat_EDamageType, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("EDamageType"));
		}
		return Z_Registration_Info_UEnum_EDamageType.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UEnum* StaticEnum<EDamageType>()
	{
		return EDamageType_StaticEnum();
	}
	struct Z_Construct_UEnum_TPMeleeCombat_EDamageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPMeleeCombat_EDamageType_Statics::Enumerators[] = {
		{ "EDamageType::None", (int64)EDamageType::None },
		{ "EDamageType::MeleeDamage", (int64)EDamageType::MeleeDamage },
		{ "EDamageType::KnockdownDamage", (int64)EDamageType::KnockdownDamage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPMeleeCombat_EDamageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KnockdownDamage.DisplayName", "KnockdownDamage" },
		{ "KnockdownDamage.Name", "EDamageType::KnockdownDamage" },
		{ "MeleeDamage.DisplayName", "MeleeDamage" },
		{ "MeleeDamage.Name", "EDamageType::MeleeDamage" },
		{ "ModuleRelativePath", "Player/CharacterType.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDamageType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPMeleeCombat_EDamageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		"EDamageType",
		"EDamageType",
		Z_Construct_UEnum_TPMeleeCombat_EDamageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EDamageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPMeleeCombat_EDamageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EDamageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPMeleeCombat_EDamageType()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageType.InnerSingleton, Z_Construct_UEnum_TPMeleeCombat_EDamageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDamageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIAttackRange;
	static UEnum* EAIAttackRange_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIAttackRange.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIAttackRange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("EAIAttackRange"));
		}
		return Z_Registration_Info_UEnum_EAIAttackRange.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UEnum* StaticEnum<EAIAttackRange>()
	{
		return EAIAttackRange_StaticEnum();
	}
	struct Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange_Statics::Enumerators[] = {
		{ "EAIAttackRange::None", (int64)EAIAttackRange::None },
		{ "EAIAttackRange::CloseRange", (int64)EAIAttackRange::CloseRange },
		{ "EAIAttackRange::MediumRange", (int64)EAIAttackRange::MediumRange },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CloseRange.DisplayName", "CloseRange" },
		{ "CloseRange.Name", "EAIAttackRange::CloseRange" },
		{ "MediumRange.DisplayName", "MediumRange" },
		{ "MediumRange.Name", "EAIAttackRange::MediumRange" },
		{ "ModuleRelativePath", "Player/CharacterType.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAIAttackRange::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		"EAIAttackRange",
		"EAIAttackRange",
		Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange()
	{
		if (!Z_Registration_Info_UEnum_EAIAttackRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIAttackRange.InnerSingleton, Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIAttackRange.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CharacterType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CharacterType_h_Statics::EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3357434538U) },
		{ ECharacterActions_StaticEnum, TEXT("ECharacterActions"), &Z_Registration_Info_UEnum_ECharacterActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2246722876U) },
		{ EMovementSpeedMode_StaticEnum, TEXT("EMovementSpeedMode"), &Z_Registration_Info_UEnum_EMovementSpeedMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4257242440U) },
		{ EStats_StaticEnum, TEXT("EStats"), &Z_Registration_Info_UEnum_EStats, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1281444539U) },
		{ ECollisionPart_StaticEnum, TEXT("ECollisionPart"), &Z_Registration_Info_UEnum_ECollisionPart, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3784078234U) },
		{ EDamageType_StaticEnum, TEXT("EDamageType"), &Z_Registration_Info_UEnum_EDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 403459661U) },
		{ EAIAttackRange_StaticEnum, TEXT("EAIAttackRange"), &Z_Registration_Info_UEnum_EAIAttackRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3982640656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CharacterType_h_1354021586(TEXT("/Script/TPMeleeCombat"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CharacterType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CharacterType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
