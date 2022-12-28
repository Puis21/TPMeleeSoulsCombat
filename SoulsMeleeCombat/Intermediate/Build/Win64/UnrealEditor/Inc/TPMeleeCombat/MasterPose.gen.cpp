// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Weapons/MasterPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterPose() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_AMasterPose_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_AMasterPose();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseEquipable();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void AMasterPose::StaticRegisterNativesAMasterPose()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterPose);
	UClass* Z_Construct_UClass_AMasterPose_NoRegister()
	{
		return AMasterPose::StaticClass();
	}
	struct Z_Construct_UClass_AMasterPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fArmorValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fArmorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEquipable,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPose_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/Weapons/MasterPose.h" },
		{ "ModuleRelativePath", "Player/Weapons/MasterPose.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterPose_Statics::NewProp_m_fArmorValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Player/Weapons/MasterPose.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterPose_Statics::NewProp_m_fArmorValue = { "m_fArmorValue", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterPose, m_fArmorValue), METADATA_PARAMS(Z_Construct_UClass_AMasterPose_Statics::NewProp_m_fArmorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPose_Statics::NewProp_m_fArmorValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterPose_Statics::NewProp_m_fArmorValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterPose_Statics::ClassParams = {
		&AMasterPose::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMasterPose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPose_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterPose()
	{
		if (!Z_Registration_Info_UClass_AMasterPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterPose.OuterSingleton, Z_Construct_UClass_AMasterPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterPose.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<AMasterPose>()
	{
		return AMasterPose::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterPose);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_MasterPose_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_MasterPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterPose, AMasterPose::StaticClass, TEXT("AMasterPose"), &Z_Registration_Info_UClass_AMasterPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterPose), 4129659793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_MasterPose_h_3691384889(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_MasterPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_MasterPose_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
