// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/AI/MasterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterAIController() {}
// Cross Module References
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EAIBehavior();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_AMasterAIController_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_AMasterAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIBehavior;
	static UEnum* EAIBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPMeleeCombat_EAIBehavior, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("EAIBehavior"));
		}
		return Z_Registration_Info_UEnum_EAIBehavior.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UEnum* StaticEnum<EAIBehavior>()
	{
		return EAIBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_TPMeleeCombat_EAIBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPMeleeCombat_EAIBehavior_Statics::Enumerators[] = {
		{ "EAIBehavior::EAB_Nothing", (int64)EAIBehavior::EAB_Nothing },
		{ "EAIBehavior::EAB_Patrolling", (int64)EAIBehavior::EAB_Patrolling },
		{ "EAIBehavior::EAB_Chasing", (int64)EAIBehavior::EAB_Chasing },
		{ "EAIBehavior::EAB_Combat", (int64)EAIBehavior::EAB_Combat },
		{ "EAIBehavior::EAB_Attacking", (int64)EAIBehavior::EAB_Attacking },
		{ "EAIBehavior::EAB_Hit", (int64)EAIBehavior::EAB_Hit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPMeleeCombat_EAIBehavior_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAB_Attacking.DisplayName", "Attacking" },
		{ "EAB_Attacking.Name", "EAIBehavior::EAB_Attacking" },
		{ "EAB_Chasing.DisplayName", "Chasing" },
		{ "EAB_Chasing.Name", "EAIBehavior::EAB_Chasing" },
		{ "EAB_Combat.Comment", "//EAB_Investigating\x09UMETA(DisplayName = \"Investigating\"),\n" },
		{ "EAB_Combat.DisplayName", "Combat" },
		{ "EAB_Combat.Name", "EAIBehavior::EAB_Combat" },
		{ "EAB_Combat.ToolTip", "EAB_Investigating       UMETA(DisplayName = \"Investigating\")," },
		{ "EAB_Hit.DisplayName", "Hit" },
		{ "EAB_Hit.Name", "EAIBehavior::EAB_Hit" },
		{ "EAB_Nothing.DisplayName", "Nothing" },
		{ "EAB_Nothing.Name", "EAIBehavior::EAB_Nothing" },
		{ "EAB_Patrolling.DisplayName", "Patrolling" },
		{ "EAB_Patrolling.Name", "EAIBehavior::EAB_Patrolling" },
		{ "ModuleRelativePath", "AI/MasterAIController.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPMeleeCombat_EAIBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		"EAIBehavior",
		"EAIBehavior",
		Z_Construct_UEnum_TPMeleeCombat_EAIBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EAIBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPMeleeCombat_EAIBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_EAIBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPMeleeCombat_EAIBehavior()
	{
		if (!Z_Registration_Info_UEnum_EAIBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIBehavior.InnerSingleton, Z_Construct_UEnum_TPMeleeCombat_EAIBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIBehavior.InnerSingleton;
	}
	DEFINE_FUNCTION(AMasterAIController::execOnUpdated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdated(Z_Param_Out_UpdatedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAIController::execStartAIBehaviorSwitch)
	{
		P_GET_ENUM(EAIBehavior,Z_Param_ENewAIBehavior);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAIBehaviorSwitch(EAIBehavior(Z_Param_ENewAIBehavior));
		P_NATIVE_END;
	}
	void AMasterAIController::StaticRegisterNativesAMasterAIController()
	{
		UClass* Class = AMasterAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUpdated", &AMasterAIController::execOnUpdated },
			{ "StartAIBehaviorSwitch", &AMasterAIController::execStartAIBehaviorSwitch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics
	{
		struct MasterAIController_eventOnUpdated_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAIController_eventOnUpdated_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::NewProp_UpdatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::NewProp_UpdatedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::NewProp_UpdatedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MasterAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAIController, nullptr, "OnUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::MasterAIController_eventOnUpdated_Parms), Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAIController_OnUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAIController_OnUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics
	{
		struct MasterAIController_eventStartAIBehaviorSwitch_Parms
		{
			EAIBehavior ENewAIBehavior;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ENewAIBehavior_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ENewAIBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::NewProp_ENewAIBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::NewProp_ENewAIBehavior = { "ENewAIBehavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAIController_eventStartAIBehaviorSwitch_Parms, ENewAIBehavior), Z_Construct_UEnum_TPMeleeCombat_EAIBehavior, METADATA_PARAMS(nullptr, 0) }; // 1331181794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::NewProp_ENewAIBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::NewProp_ENewAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MasterAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAIController, nullptr, "StartAIBehaviorSwitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::MasterAIController_eventStartAIBehaviorSwitch_Parms), Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterAIController);
	UClass* Z_Construct_UClass_AMasterAIController_NoRegister()
	{
		return AMasterAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMasterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fCloseRangeAttackingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fCloseRangeAttackingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fTotalRangeAttackingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fTotalRangeAttackingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAIBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAIBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentAIBehavior;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAIAttackRange_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAIAttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentAIAttackRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMasterAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMasterAIController_OnUpdated, "OnUpdated" }, // 2273341623
		{ &Z_Construct_UFunction_AMasterAIController_StartAIBehaviorSwitch, "StartAIBehaviorSwitch" }, // 3848838351
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/MasterAIController.h" },
		{ "ModuleRelativePath", "AI/MasterAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAIController_Statics::NewProp_m_fCloseRangeAttackingDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AI/MasterAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterAIController_Statics::NewProp_m_fCloseRangeAttackingDistance = { "m_fCloseRangeAttackingDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAIController, m_fCloseRangeAttackingDistance), METADATA_PARAMS(Z_Construct_UClass_AMasterAIController_Statics::NewProp_m_fCloseRangeAttackingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAIController_Statics::NewProp_m_fCloseRangeAttackingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAIController_Statics::NewProp_m_fTotalRangeAttackingDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AI/MasterAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterAIController_Statics::NewProp_m_fTotalRangeAttackingDistance = { "m_fTotalRangeAttackingDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAIController, m_fTotalRangeAttackingDistance), METADATA_PARAMS(Z_Construct_UClass_AMasterAIController_Statics::NewProp_m_fTotalRangeAttackingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAIController_Statics::NewProp_m_fTotalRangeAttackingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAIController_Statics::NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/MasterAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAIController_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x004000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAIController, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAIController_Statics::NewProp_BehaviorTreeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAIController_Statics::NewProp_BehaviorTreeComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIBehavior_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/MasterAIController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIBehavior = { "CurrentAIBehavior", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAIController, CurrentAIBehavior), Z_Construct_UEnum_TPMeleeCombat_EAIBehavior, METADATA_PARAMS(Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIBehavior_MetaData)) }; // 1331181794
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIAttackRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIAttackRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/MasterAIController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIAttackRange = { "CurrentAIAttackRange", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAIController, CurrentAIAttackRange), Z_Construct_UEnum_TPMeleeCombat_EAIAttackRange, METADATA_PARAMS(Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIAttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIAttackRange_MetaData)) }; // 3982640656
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAIController_Statics::NewProp_m_fCloseRangeAttackingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAIController_Statics::NewProp_m_fTotalRangeAttackingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAIController_Statics::NewProp_BehaviorTreeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIAttackRange_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAIController_Statics::NewProp_CurrentAIAttackRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterAIController_Statics::ClassParams = {
		&AMasterAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMasterAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterAIController()
	{
		if (!Z_Registration_Info_UClass_AMasterAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterAIController.OuterSingleton, Z_Construct_UClass_AMasterAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterAIController.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<AMasterAIController>()
	{
		return AMasterAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterAIController);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_Statics::EnumInfo[] = {
		{ EAIBehavior_StaticEnum, TEXT("EAIBehavior"), &Z_Registration_Info_UEnum_EAIBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1331181794U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterAIController, AMasterAIController::StaticClass, TEXT("AMasterAIController"), &Z_Registration_Info_UClass_AMasterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterAIController), 4119805491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_295369109(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
