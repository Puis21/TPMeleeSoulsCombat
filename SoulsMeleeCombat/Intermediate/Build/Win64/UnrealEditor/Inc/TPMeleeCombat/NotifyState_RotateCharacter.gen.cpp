// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Notifies/NotifyState_RotateCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotifyState_RotateCharacter() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotifyState_RotateCharacter_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotifyState_RotateCharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	void UNotifyState_RotateCharacter::StaticRegisterNativesUNotifyState_RotateCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotifyState_RotateCharacter);
	UClass* Z_Construct_UClass_UNotifyState_RotateCharacter_NoRegister()
	{
		return UNotifyState_RotateCharacter::StaticClass();
	}
	struct Z_Construct_UClass_UNotifyState_RotateCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notifies/NotifyState_RotateCharacter.h" },
		{ "ModuleRelativePath", "Player/Notifies/NotifyState_RotateCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::NewProp_m_fInterpSpeed_MetaData[] = {
		{ "Category", "InterpSpeed" },
		{ "ModuleRelativePath", "Player/Notifies/NotifyState_RotateCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::NewProp_m_fInterpSpeed = { "m_fInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNotifyState_RotateCharacter, m_fInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::NewProp_m_fInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::NewProp_m_fInterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::NewProp_m_fInterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotifyState_RotateCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::ClassParams = {
		&UNotifyState_RotateCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotifyState_RotateCharacter()
	{
		if (!Z_Registration_Info_UClass_UNotifyState_RotateCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotifyState_RotateCharacter.OuterSingleton, Z_Construct_UClass_UNotifyState_RotateCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotifyState_RotateCharacter.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UNotifyState_RotateCharacter>()
	{
		return UNotifyState_RotateCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotifyState_RotateCharacter);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_RotateCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_RotateCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotifyState_RotateCharacter, UNotifyState_RotateCharacter::StaticClass, TEXT("UNotifyState_RotateCharacter"), &Z_Registration_Info_UClass_UNotifyState_RotateCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotifyState_RotateCharacter), 4277722732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_RotateCharacter_h_4130873838(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_RotateCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_RotateCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
