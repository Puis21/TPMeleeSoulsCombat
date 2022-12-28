// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Components/TargetingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingComponent() {}
// Cross Module References
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ERotationMode();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UTargetingComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UTargetingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotationMode;
	static UEnum* ERotationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERotationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPMeleeCombat_ERotationMode, Z_Construct_UPackage__Script_TPMeleeCombat(), TEXT("ERotationMode"));
		}
		return Z_Registration_Info_UEnum_ERotationMode.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UEnum* StaticEnum<ERotationMode>()
	{
		return ERotationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_TPMeleeCombat_ERotationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPMeleeCombat_ERotationMode_Statics::Enumerators[] = {
		{ "ERotationMode::OrientToCamera", (int64)ERotationMode::OrientToCamera },
		{ "ERotationMode::OrientToMovement", (int64)ERotationMode::OrientToMovement },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPMeleeCombat_ERotationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
		{ "OrientToCamera.DisplayName", "OrientToCamera" },
		{ "OrientToCamera.Name", "ERotationMode::OrientToCamera" },
		{ "OrientToMovement.DisplayName", "Off-OrientToMovement" },
		{ "OrientToMovement.Name", "ERotationMode::OrientToMovement" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPMeleeCombat_ERotationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat,
		nullptr,
		"ERotationMode",
		"ERotationMode",
		Z_Construct_UEnum_TPMeleeCombat_ERotationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_ERotationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPMeleeCombat_ERotationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPMeleeCombat_ERotationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPMeleeCombat_ERotationMode()
	{
		if (!Z_Registration_Info_UEnum_ERotationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotationMode.InnerSingleton, Z_Construct_UEnum_TPMeleeCombat_ERotationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERotationMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UTargetingComponent::execFindTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->FindTarget();
		P_NATIVE_END;
	}
	void UTargetingComponent::StaticRegisterNativesUTargetingComponent()
	{
		UClass* Class = UTargetingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindTarget", &UTargetingComponent::execFindTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics
	{
		struct TargetingComponent_eventFindTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetingComponent_eventFindTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "FindTarget" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingComponent, nullptr, "FindTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::TargetingComponent_eventFindTarget_Parms), Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingComponent_FindTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingComponent_FindTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingComponent);
	UClass* Z_Construct_UClass_UTargetingComponent_NoRegister()
	{
		return UTargetingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fTargetingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fTargetingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fTargetingRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fTargetingRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fTargetRotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fTargetRotationInterpSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bShowTargetDebug_MetaData[];
#endif
		static void NewProp_m_bShowTargetDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bShowTargetDebug;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentRotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentRotationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetingComponent_FindTarget, "FindTarget" }, // 447205434
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TargetingComponent.h" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetingDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetingDistance = { "m_fTargetingDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetingComponent, m_fTargetingDistance), METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetingRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetingRadius = { "m_fTargetingRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetingComponent, m_fTargetingRadius), METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetingRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetRotationInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetRotationInterpSpeed = { "m_fTargetRotationInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetingComponent, m_fTargetRotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetRotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetRotationInterpSpeed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ObjectType_Inner = { "ObjectType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ObjectType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetingComponent, ObjectType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ObjectType_MetaData)) }; // 3629342158
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetingComponent, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_bShowTargetDebug_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_bShowTargetDebug_SetBit(void* Obj)
	{
		((UTargetingComponent*)Obj)->m_bShowTargetDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_bShowTargetDebug = { "m_bShowTargetDebug", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetingComponent), &Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_bShowTargetDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_bShowTargetDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_bShowTargetDebug_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentRotationMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Components/TargetingComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentRotationMode = { "CurrentRotationMode", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetingComponent, CurrentRotationMode), Z_Construct_UEnum_TPMeleeCombat_ERotationMode, METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentRotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentRotationMode_MetaData)) }; // 591887217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetingRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_fTargetRotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ObjectType_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_m_bShowTargetDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentRotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingComponent_Statics::NewProp_CurrentRotationMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingComponent_Statics::ClassParams = {
		&UTargetingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingComponent()
	{
		if (!Z_Registration_Info_UClass_UTargetingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingComponent.OuterSingleton, Z_Construct_UClass_UTargetingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingComponent.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UTargetingComponent>()
	{
		return UTargetingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingComponent);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_Statics::EnumInfo[] = {
		{ ERotationMode_StaticEnum, TEXT("ERotationMode"), &Z_Registration_Info_UEnum_ERotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 591887217U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingComponent, UTargetingComponent::StaticClass, TEXT("UTargetingComponent"), &Z_Registration_Info_UClass_UTargetingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingComponent), 1794972552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_881824752(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_TargetingComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
