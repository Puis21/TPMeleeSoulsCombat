// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/Weapons/BaseDualWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseDualWeapon() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseDualWeapon_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseDualWeapon();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseWeapon();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCollisionComponent_NoRegister();
// End Cross Module References
	void ABaseDualWeapon::StaticRegisterNativesABaseDualWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseDualWeapon);
	UClass* Z_Construct_UClass_ABaseDualWeapon_NoRegister()
	{
		return ABaseDualWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABaseDualWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondItemStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondItemStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondWeaponHandSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SecondWeaponHandSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondWeaponAttachSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SecondWeaponAttachSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandCollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandCollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightFootCollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightFootCollisionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseDualWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDualWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Weapons/BaseDualWeapon.h" },
		{ "ModuleRelativePath", "Player/Weapons/BaseDualWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondItemStaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Off-Hand Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Weapons/BaseDualWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondItemStaticMesh = { "SecondItemStaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDualWeapon, SecondItemStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondItemStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondItemStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondWeaponHandSocket_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SocketName" },
		{ "DisplayName", "Left Hand Attached Socket" },
		{ "ModuleRelativePath", "Player/Weapons/BaseDualWeapon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondWeaponHandSocket = { "SecondWeaponHandSocket", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDualWeapon, SecondWeaponHandSocket), METADATA_PARAMS(Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondWeaponHandSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondWeaponHandSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondWeaponAttachSocket_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SocketName" },
		{ "DisplayName", "Left Hand Hip Socket" },
		{ "ModuleRelativePath", "Player/Weapons/BaseDualWeapon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondWeaponAttachSocket = { "SecondWeaponAttachSocket", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDualWeapon, SecondWeaponAttachSocket), METADATA_PARAMS(Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondWeaponAttachSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondWeaponAttachSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_LeftHandCollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CollisionComp" },
		{ "DisplayName", "LefHandComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Weapons/BaseDualWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_LeftHandCollisionComponent = { "LeftHandCollisionComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDualWeapon, LeftHandCollisionComponent), Z_Construct_UClass_UCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_LeftHandCollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_LeftHandCollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_RightFootCollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CollisionComp" },
		{ "DisplayName", "RightFootComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/Weapons/BaseDualWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_RightFootCollisionComponent = { "RightFootCollisionComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseDualWeapon, RightFootCollisionComponent), Z_Construct_UClass_UCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_RightFootCollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_RightFootCollisionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseDualWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondItemStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondWeaponHandSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_SecondWeaponAttachSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_LeftHandCollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseDualWeapon_Statics::NewProp_RightFootCollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseDualWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseDualWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseDualWeapon_Statics::ClassParams = {
		&ABaseDualWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseDualWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDualWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseDualWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseDualWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseDualWeapon()
	{
		if (!Z_Registration_Info_UClass_ABaseDualWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseDualWeapon.OuterSingleton, Z_Construct_UClass_ABaseDualWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseDualWeapon.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<ABaseDualWeapon>()
	{
		return ABaseDualWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseDualWeapon);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseDualWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseDualWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseDualWeapon, ABaseDualWeapon::StaticClass, TEXT("ABaseDualWeapon"), &Z_Registration_Info_UClass_ABaseDualWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseDualWeapon), 1487522101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseDualWeapon_h_3777358622(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseDualWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_Weapons_BaseDualWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
