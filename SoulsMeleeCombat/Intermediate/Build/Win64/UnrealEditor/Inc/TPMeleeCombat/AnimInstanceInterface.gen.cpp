// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/AnimInstanceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceInterface() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UAnimInstanceInterface_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UAnimInstanceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EWeaponType();
// End Cross Module References
	DEFINE_FUNCTION(IAnimInstanceInterface::execUpdateWeaponAttachedToHand)
	{
		P_GET_UBOOL(Z_Param_bIsAttachedToHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWeaponAttachedToHand(Z_Param_bIsAttachedToHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimInstanceInterface::execUpdateCombatType)
	{
		P_GET_ENUM(EWeaponType,Z_Param_WeaponType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCombatType(EWeaponType(Z_Param_WeaponType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimInstanceInterface::execBPUpdateCombatType)
	{
		P_GET_ENUM(EWeaponType,Z_Param_WeaponType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPUpdateCombatType_Implementation(EWeaponType(Z_Param_WeaponType));
		P_NATIVE_END;
	}
	void IAnimInstanceInterface::BPUpdateCombatType(EWeaponType WeaponType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPUpdateCombatType instead.");
	}
	void UAnimInstanceInterface::StaticRegisterNativesUAnimInstanceInterface()
	{
		UClass* Class = UAnimInstanceInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BPUpdateCombatType", &IAnimInstanceInterface::execBPUpdateCombatType },
			{ "UpdateCombatType", &IAnimInstanceInterface::execUpdateCombatType },
			{ "UpdateWeaponAttachedToHand", &IAnimInstanceInterface::execUpdateWeaponAttachedToHand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceInterface_eventBPUpdateCombatType_Parms, WeaponType), Z_Construct_UEnum_TPMeleeCombat_EWeaponType, METADATA_PARAMS(nullptr, 0) }; // 1473469626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::NewProp_WeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::NewProp_WeaponType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Player/AnimInstanceInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceInterface, nullptr, "BPUpdateCombatType", nullptr, nullptr, sizeof(AnimInstanceInterface_eventBPUpdateCombatType_Parms), Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics
	{
		struct AnimInstanceInterface_eventUpdateCombatType_Parms
		{
			EWeaponType WeaponType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimInstanceInterface_eventUpdateCombatType_Parms, WeaponType), Z_Construct_UEnum_TPMeleeCombat_EWeaponType, METADATA_PARAMS(nullptr, 0) }; // 1473469626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::NewProp_WeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::NewProp_WeaponType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/AnimInstanceInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceInterface, nullptr, "UpdateCombatType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::AnimInstanceInterface_eventUpdateCombatType_Parms), Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics
	{
		struct AnimInstanceInterface_eventUpdateWeaponAttachedToHand_Parms
		{
			bool bIsAttachedToHand;
		};
		static void NewProp_bIsAttachedToHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttachedToHand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::NewProp_bIsAttachedToHand_SetBit(void* Obj)
	{
		((AnimInstanceInterface_eventUpdateWeaponAttachedToHand_Parms*)Obj)->bIsAttachedToHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::NewProp_bIsAttachedToHand = { "bIsAttachedToHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimInstanceInterface_eventUpdateWeaponAttachedToHand_Parms), &Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::NewProp_bIsAttachedToHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::NewProp_bIsAttachedToHand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/AnimInstanceInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstanceInterface, nullptr, "UpdateWeaponAttachedToHand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::AnimInstanceInterface_eventUpdateWeaponAttachedToHand_Parms), Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimInstanceInterface);
	UClass* Z_Construct_UClass_UAnimInstanceInterface_NoRegister()
	{
		return UAnimInstanceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnimInstanceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimInstanceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimInstanceInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimInstanceInterface_BPUpdateCombatType, "BPUpdateCombatType" }, // 3629851173
		{ &Z_Construct_UFunction_UAnimInstanceInterface_UpdateCombatType, "UpdateCombatType" }, // 3110631886
		{ &Z_Construct_UFunction_UAnimInstanceInterface_UpdateWeaponAttachedToHand, "UpdateWeaponAttachedToHand" }, // 1946698367
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimInstanceInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/AnimInstanceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimInstanceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimInstanceInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimInstanceInterface_Statics::ClassParams = {
		&UAnimInstanceInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimInstanceInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstanceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimInstanceInterface()
	{
		if (!Z_Registration_Info_UClass_UAnimInstanceInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimInstanceInterface.OuterSingleton, Z_Construct_UClass_UAnimInstanceInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimInstanceInterface.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UAnimInstanceInterface>()
	{
		return UAnimInstanceInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimInstanceInterface);
	static FName NAME_UAnimInstanceInterface_BPUpdateCombatType = FName(TEXT("BPUpdateCombatType"));
	void IAnimInstanceInterface::Execute_BPUpdateCombatType(UObject* O, EWeaponType WeaponType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnimInstanceInterface::StaticClass()));
		AnimInstanceInterface_eventBPUpdateCombatType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnimInstanceInterface_BPUpdateCombatType);
		if (Func)
		{
			Parms.WeaponType=WeaponType;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAnimInstanceInterface*)(O->GetNativeInterfaceAddress(UAnimInstanceInterface::StaticClass())))
		{
			I->BPUpdateCombatType_Implementation(WeaponType);
		}
	}
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimInstanceInterface, UAnimInstanceInterface::StaticClass, TEXT("UAnimInstanceInterface"), &Z_Registration_Info_UClass_UAnimInstanceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimInstanceInterface), 2823615410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_1049803384(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_AnimInstanceInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
