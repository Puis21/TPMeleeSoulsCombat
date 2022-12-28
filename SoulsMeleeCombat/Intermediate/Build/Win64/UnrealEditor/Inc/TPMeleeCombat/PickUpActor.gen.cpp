// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Interactables/PickUpActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpActor() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_APickUpActor_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_APickUpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
// End Cross Module References
	void APickUpActor::StaticRegisterNativesAPickUpActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickUpActor);
	UClass* Z_Construct_UClass_APickUpActor_NoRegister()
	{
		return APickUpActor::StaticClass();
	}
	struct Z_Construct_UClass_APickUpActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUpActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/PickUpActor.h" },
		{ "ModuleRelativePath", "Interactables/PickUpActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_ActorMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactables/PickUpActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_ActorMesh = { "ActorMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpActor, ActorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_ActorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_ActorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactables/PickUpActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpActor, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_SphereCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sword" },
		{ "Comment", "//Mby change to Asword?\n" },
		{ "ModuleRelativePath", "Interactables/PickUpActor.h" },
		{ "ToolTip", "Mby change to Asword?" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpActor, WeaponClass), Z_Construct_UClass_ABaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpActor_Statics::NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sword" },
		{ "ModuleRelativePath", "Interactables/PickUpActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpActor_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpActor, Weapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::NewProp_Weapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_ActorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_SphereCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_WeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpActor_Statics::NewProp_Weapon,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickUpActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(APickUpActor, IInteractionInterface), false },  // 3773861718
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUpActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickUpActor_Statics::ClassParams = {
		&APickUpActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickUpActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUpActor()
	{
		if (!Z_Registration_Info_UClass_APickUpActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickUpActor.OuterSingleton, Z_Construct_UClass_APickUpActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickUpActor.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<APickUpActor>()
	{
		return APickUpActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpActor);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Interactables_PickUpActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Interactables_PickUpActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickUpActor, APickUpActor::StaticClass, TEXT("APickUpActor"), &Z_Registration_Info_UClass_APickUpActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickUpActor), 2990606512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Interactables_PickUpActor_h_3830051562(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Interactables_PickUpActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Interactables_PickUpActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
