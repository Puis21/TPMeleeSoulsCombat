// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/CombatPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatPlayerController() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ACombatPlayerController_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ACombatPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EStats();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACombatPlayerController::execOnStatsUpdated)
	{
		P_GET_ENUM(EStats,Z_Param_StatType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStatsUpdated(EStats(Z_Param_StatType),Z_Param_Value);
		P_NATIVE_END;
	}
	void ACombatPlayerController::StaticRegisterNativesACombatPlayerController()
	{
		UClass* Class = ACombatPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStatsUpdated", &ACombatPlayerController::execOnStatsUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics
	{
		struct CombatPlayerController_eventOnStatsUpdated_Parms
		{
			EStats StatType;
			float Value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StatType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatPlayerController_eventOnStatsUpdated_Parms, StatType), Z_Construct_UEnum_TPMeleeCombat_EStats, METADATA_PARAMS(nullptr, 0) }; // 1281444539
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatPlayerController_eventOnStatsUpdated_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::NewProp_StatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::NewProp_StatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACombatPlayerController, nullptr, "OnStatsUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::CombatPlayerController_eventOnStatsUpdated_Parms), Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombatPlayerController);
	UClass* Z_Construct_UClass_ACombatPlayerController_NoRegister()
	{
		return ACombatPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACombatPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlayClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterOverlayClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StaminaStat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaStat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StaminaStat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HealthStat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthStat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HealthStat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombatPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACombatPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACombatPlayerController_OnStatsUpdated, "OnStatsUpdated" }, // 3951003329
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/CombatPlayerController.h" },
		{ "ModuleRelativePath", "Player/CombatPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_CharacterOverlayClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Player/CombatPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_CharacterOverlayClass = { "CharacterOverlayClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatPlayerController, CharacterOverlayClass), Z_Construct_UClass_UCharacterOverlay_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_CharacterOverlayClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_CharacterOverlayClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_StaminaStat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_StaminaStat_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Player/CombatPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_StaminaStat = { "StaminaStat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatPlayerController, StaminaStat), Z_Construct_UEnum_TPMeleeCombat_EStats, METADATA_PARAMS(Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_StaminaStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_StaminaStat_MetaData)) }; // 1281444539
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_HealthStat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_HealthStat_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Player/CombatPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_HealthStat = { "HealthStat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombatPlayerController, HealthStat), Z_Construct_UEnum_TPMeleeCombat_EStats, METADATA_PARAMS(Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_HealthStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_HealthStat_MetaData)) }; // 1281444539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_CharacterOverlayClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_StaminaStat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_StaminaStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_HealthStat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatPlayerController_Statics::NewProp_HealthStat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombatPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatPlayerController_Statics::ClassParams = {
		&ACombatPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACombatPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACombatPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACombatPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACombatPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACombatPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatPlayerController.OuterSingleton, Z_Construct_UClass_ACombatPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACombatPlayerController.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<ACombatPlayerController>()
	{
		return ACombatPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatPlayerController);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACombatPlayerController, ACombatPlayerController::StaticClass, TEXT("ACombatPlayerController"), &Z_Registration_Info_UClass_ACombatPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatPlayerController), 4132954013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_2490046623(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
