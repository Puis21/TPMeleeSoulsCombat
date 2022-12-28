// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Notifies/NotifyState_CollisionTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotifyState_CollisionTrace() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotifyState_CollisionTrace_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UNotifyState_CollisionTrace();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECollisionPart();
// End Cross Module References
	void UNotifyState_CollisionTrace::StaticRegisterNativesUNotifyState_CollisionTrace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotifyState_CollisionTrace);
	UClass* Z_Construct_UClass_UNotifyState_CollisionTrace_NoRegister()
	{
		return UNotifyState_CollisionTrace::StaticClass();
	}
	struct Z_Construct_UClass_UNotifyState_CollisionTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollPart_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollPart_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollPart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Player/Notifies/NotifyState_CollisionTrace.h" },
		{ "ModuleRelativePath", "Player/Notifies/NotifyState_CollisionTrace.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::NewProp_CollPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::NewProp_CollPart_MetaData[] = {
		{ "Category", "Collision Select" },
		{ "ModuleRelativePath", "Player/Notifies/NotifyState_CollisionTrace.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::NewProp_CollPart = { "CollPart", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNotifyState_CollisionTrace, CollPart), Z_Construct_UEnum_TPMeleeCombat_ECollisionPart, METADATA_PARAMS(Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::NewProp_CollPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::NewProp_CollPart_MetaData)) }; // 3784078234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::NewProp_CollPart_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::NewProp_CollPart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotifyState_CollisionTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::ClassParams = {
		&UNotifyState_CollisionTrace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotifyState_CollisionTrace()
	{
		if (!Z_Registration_Info_UClass_UNotifyState_CollisionTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotifyState_CollisionTrace.OuterSingleton, Z_Construct_UClass_UNotifyState_CollisionTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNotifyState_CollisionTrace.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UNotifyState_CollisionTrace>()
	{
		return UNotifyState_CollisionTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotifyState_CollisionTrace);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_CollisionTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_CollisionTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNotifyState_CollisionTrace, UNotifyState_CollisionTrace::StaticClass, TEXT("UNotifyState_CollisionTrace"), &Z_Registration_Info_UClass_UNotifyState_CollisionTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotifyState_CollisionTrace), 3288060585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_CollisionTrace_h_1221672650(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_CollisionTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Notifies_NotifyState_CollisionTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
