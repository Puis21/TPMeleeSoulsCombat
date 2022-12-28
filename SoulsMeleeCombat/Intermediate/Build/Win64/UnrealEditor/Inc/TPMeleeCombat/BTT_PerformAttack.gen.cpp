// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/AI/BTT_PerformAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_PerformAttack() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UBTT_PerformAttack_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UBTT_PerformAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterActions();
// End Cross Module References
	void UBTT_PerformAttack::StaticRegisterNativesUBTT_PerformAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_PerformAttack);
	UClass* Z_Construct_UClass_UBTT_PerformAttack_NoRegister()
	{
		return UBTT_PerformAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_PerformAttack_Statics
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
	UObject* (*const Z_Construct_UClass_UBTT_PerformAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_PerformAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTT_PerformAttack.h" },
		{ "ModuleRelativePath", "AI/BTT_PerformAttack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_CharAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_CharAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "AI/BTT_PerformAttack.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_CharAction = { "CharAction", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTT_PerformAttack, CharAction), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_CharAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_CharAction_MetaData)) }; // 2246722876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_MontageIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "AI/BTT_PerformAttack.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_MontageIndex = { "MontageIndex", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTT_PerformAttack, MontageIndex), METADATA_PARAMS(Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_MontageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_MontageIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_bRandomIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "AI/BTT_PerformAttack.h" },
	};
#endif
	void Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_bRandomIndex_SetBit(void* Obj)
	{
		((UBTT_PerformAttack*)Obj)->bRandomIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_bRandomIndex = { "bRandomIndex", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTT_PerformAttack), &Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_bRandomIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_bRandomIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_bRandomIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_PerformAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_CharAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_CharAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_MontageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PerformAttack_Statics::NewProp_bRandomIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_PerformAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_PerformAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_PerformAttack_Statics::ClassParams = {
		&UBTT_PerformAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTT_PerformAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTT_PerformAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PerformAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_PerformAttack()
	{
		if (!Z_Registration_Info_UClass_UBTT_PerformAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_PerformAttack.OuterSingleton, Z_Construct_UClass_UBTT_PerformAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_PerformAttack.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UBTT_PerformAttack>()
	{
		return UBTT_PerformAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_PerformAttack);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_BTT_PerformAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_BTT_PerformAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_PerformAttack, UBTT_PerformAttack::StaticClass, TEXT("UBTT_PerformAttack"), &Z_Registration_Info_UClass_UBTT_PerformAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_PerformAttack), 3794903365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_BTT_PerformAttack_h_1040944235(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_BTT_PerformAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_BTT_PerformAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
