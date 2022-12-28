// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/AI/BTT_PerformAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_PerformAction() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UBTT_PerformAction_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UBTT_PerformAction();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterActions();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterState();
// End Cross Module References
	void UBTT_PerformAction::StaticRegisterNativesUBTT_PerformAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_PerformAction);
	UClass* Z_Construct_UClass_UBTT_PerformAction_NoRegister()
	{
		return UBTT_PerformAction::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_PerformAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MontageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomIndex_MetaData[];
#endif
		static void NewProp_bRandomIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_PerformAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_PerformAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTT_PerformAction.h" },
		{ "ModuleRelativePath", "AI/BTT_PerformAction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "AI/BTT_PerformAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharAction = { "CharAction", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTT_PerformAction, CharAction), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharAction_MetaData)) }; // 2246722876
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "AI/BTT_PerformAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharState = { "CharState", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTT_PerformAction, CharState), Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharState_MetaData)) }; // 3357434538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_MontageIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "AI/BTT_PerformAction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_MontageIndex = { "MontageIndex", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTT_PerformAction, MontageIndex), METADATA_PARAMS(Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_MontageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_MontageIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_bRandomIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "AI/BTT_PerformAction.h" },
	};
#endif
	void Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_bRandomIndex_SetBit(void* Obj)
	{
		((UBTT_PerformAction*)Obj)->bRandomIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_bRandomIndex = { "bRandomIndex", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTT_PerformAction), &Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_bRandomIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_bRandomIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_bRandomIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_PerformAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_CharState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_MontageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PerformAction_Statics::NewProp_bRandomIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_PerformAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_PerformAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_PerformAction_Statics::ClassParams = {
		&UBTT_PerformAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTT_PerformAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTT_PerformAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_PerformAction()
	{
		if (!Z_Registration_Info_UClass_UBTT_PerformAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_PerformAction.OuterSingleton, Z_Construct_UClass_UBTT_PerformAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_PerformAction.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UBTT_PerformAction>()
	{
		return UBTT_PerformAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_PerformAction);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_BTT_PerformAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_BTT_PerformAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_PerformAction, UBTT_PerformAction::StaticClass, TEXT("UBTT_PerformAction"), &Z_Registration_Info_UClass_UBTT_PerformAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_PerformAction), 329196292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_BTT_PerformAction_h_3348993571(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_BTT_PerformAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_BTT_PerformAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
