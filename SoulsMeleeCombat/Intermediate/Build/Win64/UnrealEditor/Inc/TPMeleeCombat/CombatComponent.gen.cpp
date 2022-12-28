// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Components/CombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}
// Cross Module References
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCombatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics
	{
		struct _Script_TPMeleeCombat_eventOnEnableCombat_Parms
		{
			bool bEnableCombat;
		};
		static void NewProp_bEnableCombat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCombat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::NewProp_bEnableCombat_SetBit(void* Obj)
	{
		((_Script_TPMeleeCombat_eventOnEnableCombat_Parms*)Obj)->bEnableCombat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::NewProp_bEnableCombat = { "bEnableCombat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TPMeleeCombat_eventOnEnableCombat_Parms), &Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::NewProp_bEnableCombat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::NewProp_bEnableCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat, nullptr, "OnEnableCombat__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::_Script_TPMeleeCombat_eventOnEnableCombat_Parms), Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics
	{
		struct _Script_TPMeleeCombat_eventOnBlockingSet_Parms
		{
			bool bIsBlocking;
		};
		static void NewProp_bIsBlocking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlocking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::NewProp_bIsBlocking_SetBit(void* Obj)
	{
		((_Script_TPMeleeCombat_eventOnBlockingSet_Parms*)Obj)->bIsBlocking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::NewProp_bIsBlocking = { "bIsBlocking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TPMeleeCombat_eventOnBlockingSet_Parms), &Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::NewProp_bIsBlocking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::NewProp_bIsBlocking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat, nullptr, "OnBlockingSet__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::_Script_TPMeleeCombat_eventOnBlockingSet_Parms), Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCombatComponent::StaticRegisterNativesUCombatComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponent);
	UClass* Z_Construct_UClass_UCombatComponent_NoRegister()
	{
		return UCombatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCombatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatEnabled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlockingEnabled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlockingEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CombatComponent.h" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnCombatEnabled_MetaData[] = {
		{ "Category", "Event Dispachers" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnCombatEnabled = { "OnCombatEnabled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, OnCombatEnabled), Z_Construct_UDelegateFunction_TPMeleeCombat_OnEnableCombat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnCombatEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnCombatEnabled_MetaData)) }; // 707882192
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnBlockingEnabled_MetaData[] = {
		{ "Category", "Event Dispachers" },
		{ "ModuleRelativePath", "Components/CombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnBlockingEnabled = { "OnBlockingEnabled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatComponent, OnBlockingEnabled), Z_Construct_UDelegateFunction_TPMeleeCombat_OnBlockingSet__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnBlockingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnBlockingEnabled_MetaData)) }; // 844318211
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnCombatEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_OnBlockingEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Statics::ClassParams = {
		&UCombatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatComponent()
	{
		if (!Z_Registration_Info_UClass_UCombatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent.OuterSingleton, Z_Construct_UClass_UCombatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatComponent.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UCombatComponent>()
	{
		return UCombatComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 762695532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_4177222572(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
