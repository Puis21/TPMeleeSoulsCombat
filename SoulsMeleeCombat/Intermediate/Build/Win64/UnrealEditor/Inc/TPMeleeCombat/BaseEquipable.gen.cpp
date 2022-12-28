// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Weapons/BaseEquipable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEquipable() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseEquipable_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseEquipable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseEquipable::execAttachActor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachActor(Z_Param_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEquipable::execOnEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipped();
		P_NATIVE_END;
	}
	void ABaseEquipable::StaticRegisterNativesABaseEquipable()
	{
		UClass* Class = ABaseEquipable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachActor", &ABaseEquipable::execAttachActor },
			{ "OnEquipped", &ABaseEquipable::execOnEquipped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics
	{
		struct BaseEquipable_eventAttachActor_Parms
		{
			FName SocketName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEquipable_eventAttachActor_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::NewProp_SocketName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attach Actor" },
		{ "ModuleRelativePath", "Player/Weapons/BaseEquipable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEquipable, nullptr, "AttachActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::BaseEquipable_eventAttachActor_Parms), Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEquipable_AttachActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEquipable_AttachActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEquipable_OnEquipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEquipable_OnEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnEquipped" },
		{ "ModuleRelativePath", "Player/Weapons/BaseEquipable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEquipable_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEquipable, nullptr, "OnEquipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEquipable_OnEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEquipable_OnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEquipable_OnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEquipable_OnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEquipable);
	UClass* Z_Construct_UClass_ABaseEquipable_NoRegister()
	{
		return ABaseEquipable::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEquipable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_sAttachedSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_m_sAttachedSocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEquipable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseEquipable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEquipable_AttachActor, "AttachActor" }, // 3327709737
		{ &Z_Construct_UFunction_ABaseEquipable_OnEquipped, "OnEquipped" }, // 1011465753
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEquipable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Weapons/BaseEquipable.h" },
		{ "ModuleRelativePath", "Player/Weapons/BaseEquipable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEquipable_Statics::NewProp_RootComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Weapons/BaseEquipable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEquipable_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEquipable, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEquipable_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEquipable_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEquipable_Statics::NewProp_ItemSkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Weapons/BaseEquipable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEquipable_Statics::NewProp_ItemSkeletalMesh = { "ItemSkeletalMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEquipable, ItemSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEquipable_Statics::NewProp_ItemSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEquipable_Statics::NewProp_ItemSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEquipable_Statics::NewProp_ItemStaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Main Hand Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Weapons/BaseEquipable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEquipable_Statics::NewProp_ItemStaticMesh = { "ItemStaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEquipable, ItemStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEquipable_Statics::NewProp_ItemStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEquipable_Statics::NewProp_ItemStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEquipable_Statics::NewProp_m_sAttachedSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SocketName" },
		{ "DisplayName", "Right Hand Hip Socket" },
		{ "ModuleRelativePath", "Player/Weapons/BaseEquipable.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseEquipable_Statics::NewProp_m_sAttachedSocketName = { "m_sAttachedSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEquipable, m_sAttachedSocketName), METADATA_PARAMS(Z_Construct_UClass_ABaseEquipable_Statics::NewProp_m_sAttachedSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEquipable_Statics::NewProp_m_sAttachedSocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEquipable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEquipable_Statics::NewProp_RootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEquipable_Statics::NewProp_ItemSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEquipable_Statics::NewProp_ItemStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEquipable_Statics::NewProp_m_sAttachedSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEquipable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEquipable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEquipable_Statics::ClassParams = {
		&ABaseEquipable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseEquipable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEquipable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEquipable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEquipable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEquipable()
	{
		if (!Z_Registration_Info_UClass_ABaseEquipable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEquipable.OuterSingleton, Z_Construct_UClass_ABaseEquipable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseEquipable.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<ABaseEquipable>()
	{
		return ABaseEquipable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEquipable);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEquipable, ABaseEquipable::StaticClass, TEXT("ABaseEquipable"), &Z_Registration_Info_UClass_ABaseEquipable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEquipable), 409004056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_3353352906(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseEquipable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
