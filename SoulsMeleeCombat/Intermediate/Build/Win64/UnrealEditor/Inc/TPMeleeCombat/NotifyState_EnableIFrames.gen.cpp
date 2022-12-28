// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Notifies/NotifyState_EnableIFrames.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotifyState_EnableIFrames() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotifyState_EnableIFrames_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotifyState_EnableIFrames();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void UNotifyState_EnableIFrames::StaticRegisterNativesUNotifyState_EnableIFrames()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotifyState_EnableIFrames);
	UClass* Z_Construct_UClass_UNotifyState_EnableIFrames_NoRegister()
	{
		return UNotifyState_EnableIFrames::StaticClass();
	}
	struct Z_Construct_UClass_UNotifyState_EnableIFrames_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotifyState_EnableIFrames_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyState_EnableIFrames_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notifies/NotifyState_EnableIFrames.h" },
		{ "ModuleRelativePath", "Player/Notifies/NotifyState_EnableIFrames.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotifyState_EnableIFrames_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotifyState_EnableIFrames>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotifyState_EnableIFrames_Statics::ClassParams = {
		&UNotifyState_EnableIFrames::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotifyState_EnableIFrames_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_EnableIFrames_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotifyState_EnableIFrames()
	{
		if (!Z_Registration_Info_UClass_UNotifyState_EnableIFrames.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotifyState_EnableIFrames.OuterSingleton, Z_Construct_UClass_UNotifyState_EnableIFrames_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotifyState_EnableIFrames.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UNotifyState_EnableIFrames>()
	{
		return UNotifyState_EnableIFrames::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotifyState_EnableIFrames);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_EnableIFrames_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_EnableIFrames_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotifyState_EnableIFrames, UNotifyState_EnableIFrames::StaticClass, TEXT("UNotifyState_EnableIFrames"), &Z_Registration_Info_UClass_UNotifyState_EnableIFrames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotifyState_EnableIFrames), 2447249204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_EnableIFrames_h_3057735614(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_EnableIFrames_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_EnableIFrames_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
