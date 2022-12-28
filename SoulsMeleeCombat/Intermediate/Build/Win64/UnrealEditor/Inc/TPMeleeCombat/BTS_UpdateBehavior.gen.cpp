// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/AI/Services/BTS_UpdateBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_UpdateBehavior() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UBTS_UpdateBehavior_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UBTS_UpdateBehavior();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void UBTS_UpdateBehavior::StaticRegisterNativesUBTS_UpdateBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_UpdateBehavior);
	UClass* Z_Construct_UClass_UBTS_UpdateBehavior_NoRegister()
	{
		return UBTS_UpdateBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UBTS_UpdateBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTS_UpdateBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTS_UpdateBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Services/BTS_UpdateBehavior.h" },
		{ "ModuleRelativePath", "AI/Services/BTS_UpdateBehavior.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTS_UpdateBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_UpdateBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_UpdateBehavior_Statics::ClassParams = {
		&UBTS_UpdateBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTS_UpdateBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdateBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTS_UpdateBehavior()
	{
		if (!Z_Registration_Info_UClass_UBTS_UpdateBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_UpdateBehavior.OuterSingleton, Z_Construct_UClass_UBTS_UpdateBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTS_UpdateBehavior.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UBTS_UpdateBehavior>()
	{
		return UBTS_UpdateBehavior::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_UpdateBehavior);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_Services_BTS_UpdateBehavior_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_Services_BTS_UpdateBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_UpdateBehavior, UBTS_UpdateBehavior::StaticClass, TEXT("UBTS_UpdateBehavior"), &Z_Registration_Info_UClass_UBTS_UpdateBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_UpdateBehavior), 111633589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_Services_BTS_UpdateBehavior_h_920080515(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_Services_BTS_UpdateBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_Services_BTS_UpdateBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
