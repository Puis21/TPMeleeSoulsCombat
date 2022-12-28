// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Components/StatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsComponent() {}
// Cross Module References
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EStats();
	TPMELEECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FBaseStats();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UStatsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics
	{
		struct _Script_TPMeleeCombat_eventOnCurrentStatUpdated_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TPMeleeCombat_eventOnCurrentStatUpdated_Parms, StatType), Z_Construct_UEnum_TPMeleeCombat_EStats, METADATA_PARAMS(nullptr, 0) }; // 1281444539
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TPMeleeCombat_eventOnCurrentStatUpdated_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::NewProp_StatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::NewProp_StatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat, nullptr, "OnCurrentStatUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::_Script_TPMeleeCombat_eventOnCurrentStatUpdated_Parms), Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseStats;
class UScriptStruct* FBaseStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseStats, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("BaseStats"));
	}
	return Z_Registration_Info_UScriptStruct_BaseStats.OuterSingleton;
}
template<> TPMELEECOMBAT_API UScriptStruct* StaticStruct<FBaseStats>()
{
	return FBaseStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fBaseStats_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fBaseStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMaxStats_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMaxStats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseStats>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_m_fBaseStats_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_m_fBaseStats = { "m_fBaseStats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseStats, m_fBaseStats), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_m_fBaseStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_m_fBaseStats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_m_fMaxStats_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_m_fMaxStats = { "m_fMaxStats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseStats, m_fMaxStats), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_m_fMaxStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_m_fMaxStats_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_m_fBaseStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_m_fMaxStats,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		&NewStructOps,
		"BaseStats",
		sizeof(FBaseStats),
		alignof(FBaseStats),
		Z_Construct_UScriptStruct_FBaseStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseStats()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseStats.InnerSingleton, Z_Construct_UScriptStruct_FBaseStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseStats.InnerSingleton;
	}
	DEFINE_FUNCTION(UStatsComponent::execStartRegen)
	{
		P_GET_ENUM(EStats,Z_Param_StatType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRegen(EStats(Z_Param_StatType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsComponent::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_inDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsComponent::execModifyCurrentStatValue)
	{
		P_GET_ENUM(EStats,Z_Param_Stat);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bShouldRegen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyCurrentStatValue(EStats(Z_Param_Stat),Z_Param_Value,Z_Param_bShouldRegen);
		P_NATIVE_END;
	}
	void UStatsComponent::StaticRegisterNativesUStatsComponent()
	{
		UClass* Class = UStatsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyCurrentStatValue", &UStatsComponent::execModifyCurrentStatValue },
			{ "StartRegen", &UStatsComponent::execStartRegen },
			{ "TakeDamage", &UStatsComponent::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics
	{
		struct StatsComponent_eventModifyCurrentStatValue_Parms
		{
			EStats Stat;
			float Value;
			bool bShouldRegen;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_bShouldRegen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRegen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatsComponent_eventModifyCurrentStatValue_Parms, Stat), Z_Construct_UEnum_TPMeleeCombat_EStats, METADATA_PARAMS(nullptr, 0) }; // 1281444539
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatsComponent_eventModifyCurrentStatValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::NewProp_bShouldRegen_SetBit(void* Obj)
	{
		((StatsComponent_eventModifyCurrentStatValue_Parms*)Obj)->bShouldRegen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::NewProp_bShouldRegen = { "bShouldRegen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatsComponent_eventModifyCurrentStatValue_Parms), &Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::NewProp_bShouldRegen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::NewProp_Stat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::NewProp_Stat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::NewProp_bShouldRegen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "Comment", "//Modify Value Based on Stat and clamp\n" },
		{ "CPP_Default_bShouldRegen", "true" },
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
		{ "ToolTip", "Modify Value Based on Stat and clamp" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ModifyCurrentStatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::StatsComponent_eventModifyCurrentStatValue_Parms), Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_StartRegen_Statics
	{
		struct StatsComponent_eventStartRegen_Parms
		{
			EStats StatType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StatType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatsComponent_eventStartRegen_Parms, StatType), Z_Construct_UEnum_TPMeleeCombat_EStats, METADATA_PARAMS(nullptr, 0) }; // 1281444539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::NewProp_StatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::NewProp_StatType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "StartRegen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::StatsComponent_eventStartRegen_Parms), Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_StartRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_StartRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics
	{
		struct StatsComponent_eventTakeDamage_Parms
		{
			float inDamage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::NewProp_inDamage = { "inDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatsComponent_eventTakeDamage_Parms, inDamage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::NewProp_inDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::StatsComponent_eventTakeDamage_Parms), Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatsComponent_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsComponent);
	UClass* Z_Construct_UClass_UStatsComponent_NoRegister()
	{
		return UStatsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseStats_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BaseStats_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BaseStats_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseStats_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BaseStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentStatUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentStatUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fStaminaRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fStaminaRegenRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsComponent_ModifyCurrentStatValue, "ModifyCurrentStatValue" }, // 1037108402
		{ &Z_Construct_UFunction_UStatsComponent_StartRegen, "StartRegen" }, // 3817125963
		{ &Z_Construct_UFunction_UStatsComponent_TakeDamage, "TakeDamage" }, // 2485625748
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/StatsComponent.h" },
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats_ValueProp = { "BaseStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBaseStats, METADATA_PARAMS(nullptr, 0) }; // 3045907907
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats_Key_KeyProp = { "BaseStats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TPMeleeCombat_EStats, METADATA_PARAMS(nullptr, 0) }; // 1281444539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats = { "BaseStats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsComponent, BaseStats), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats_MetaData)) }; // 1281444539 3045907907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnCurrentStatUpdated_MetaData[] = {
		{ "Category", "Event Dispachers" },
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnCurrentStatUpdated = { "OnCurrentStatUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsComponent, OnCurrentStatUpdated), Z_Construct_UDelegateFunction_TPMeleeCombat_OnCurrentStatUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnCurrentStatUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnCurrentStatUpdated_MetaData)) }; // 1724215256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_m_fStaminaRegenRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Components/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_m_fStaminaRegenRate = { "m_fStaminaRegenRate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatsComponent, m_fStaminaRegenRate), METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::NewProp_m_fStaminaRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_m_fStaminaRegenRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_BaseStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnCurrentStatUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_m_fStaminaRegenRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsComponent_Statics::ClassParams = {
		&UStatsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStatsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatsComponent()
	{
		if (!Z_Registration_Info_UClass_UStatsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsComponent.OuterSingleton, Z_Construct_UClass_UStatsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatsComponent.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UStatsComponent>()
	{
		return UStatsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsComponent);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_Statics::ScriptStructInfo[] = {
		{ FBaseStats::StaticStruct, Z_Construct_UScriptStruct_FBaseStats_Statics::NewStructOps, TEXT("BaseStats"), &Z_Registration_Info_UScriptStruct_BaseStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseStats), 3045907907U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatsComponent, UStatsComponent::StaticClass, TEXT("UStatsComponent"), &Z_Registration_Info_UClass_UStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsComponent), 3218528065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_3391837247(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StatsComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
