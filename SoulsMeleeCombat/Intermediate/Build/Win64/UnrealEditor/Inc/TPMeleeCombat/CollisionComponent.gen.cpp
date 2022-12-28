// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Components/CollisionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionComponent() {}
// Cross Module References
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCollisionComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCollisionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics
	{
		struct _Script_TPMeleeCombat_eventOnHit_Parms
		{
			FHitResult HitResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TPMeleeCombat_eventOnHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat, nullptr, "OnHit__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::_Script_TPMeleeCombat_eventOnHit_Parms), Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCollisionComponent::StaticRegisterNativesUCollisionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionComponent);
	UClass* Z_Construct_UClass_UCollisionComponent_NoRegister()
	{
		return UCollisionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCollisionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fFloatRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fFloatRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bShowBoxDebug_MetaData[];
#endif
		static void NewProp_m_bShowBoxDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bShowBoxDebug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollisionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CollisionComponent.h" },
		{ "ModuleRelativePath", "Components/CollisionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionComponent_Statics::NewProp_OnHit_MetaData[] = {
		{ "Category", "Event Dispachers" },
		{ "ModuleRelativePath", "Components/CollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCollisionComponent_Statics::NewProp_OnHit = { "OnHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionComponent, OnHit), Z_Construct_UDelegateFunction_TPMeleeCombat_OnHit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_OnHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_OnHit_MetaData)) }; // 2929112948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionComponent_Statics::NewProp_StartSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision Trace" },
		{ "ModuleRelativePath", "Components/CollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCollisionComponent_Statics::NewProp_StartSocketName = { "StartSocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionComponent, StartSocketName), METADATA_PARAMS(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_StartSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_StartSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionComponent_Statics::NewProp_EndSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision Trace" },
		{ "ModuleRelativePath", "Components/CollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCollisionComponent_Statics::NewProp_EndSocketName = { "EndSocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionComponent, EndSocketName), METADATA_PARAMS(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_EndSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_EndSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_fFloatRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision Trace" },
		{ "ModuleRelativePath", "Components/CollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_fFloatRadius = { "m_fFloatRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionComponent, m_fFloatRadius), METADATA_PARAMS(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_fFloatRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_fFloatRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ObjectType_Inner = { "ObjectType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ObjectType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision Trace" },
		{ "ModuleRelativePath", "Components/CollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionComponent, ObjectType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ObjectType_MetaData)) }; // 3629342158
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision Trace" },
		{ "ModuleRelativePath", "Components/CollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollisionComponent, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_bShowBoxDebug_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision Trace" },
		{ "ModuleRelativePath", "Components/CollisionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_bShowBoxDebug_SetBit(void* Obj)
	{
		((UCollisionComponent*)Obj)->m_bShowBoxDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_bShowBoxDebug = { "m_bShowBoxDebug", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCollisionComponent), &Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_bShowBoxDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_bShowBoxDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_bShowBoxDebug_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionComponent_Statics::NewProp_OnHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionComponent_Statics::NewProp_StartSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionComponent_Statics::NewProp_EndSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_fFloatRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ObjectType_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionComponent_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionComponent_Statics::NewProp_m_bShowBoxDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollisionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionComponent_Statics::ClassParams = {
		&UCollisionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollisionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCollisionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollisionComponent()
	{
		if (!Z_Registration_Info_UClass_UCollisionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionComponent.OuterSingleton, Z_Construct_UClass_UCollisionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCollisionComponent.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UCollisionComponent>()
	{
		return UCollisionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionComponent);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCollisionComponent, UCollisionComponent::StaticClass, TEXT("UCollisionComponent"), &Z_Registration_Info_UClass_UCollisionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionComponent), 2885776478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_1403360261(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_CollisionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
