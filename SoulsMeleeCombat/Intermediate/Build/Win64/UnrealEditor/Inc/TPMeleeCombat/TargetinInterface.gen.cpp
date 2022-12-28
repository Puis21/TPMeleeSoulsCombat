// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/TargetinInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetinInterface() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UTargetinInterface_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UTargetinInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
// End Cross Module References
	DEFINE_FUNCTION(ITargetinInterface::execOnTargeted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnTargeted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITargetinInterface::execCanBeTargeted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeTargeted();
		P_NATIVE_END;
	}
	void UTargetinInterface::StaticRegisterNativesUTargetinInterface()
	{
		UClass* Class = UTargetinInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeTargeted", &ITargetinInterface::execCanBeTargeted },
			{ "OnTargeted", &ITargetinInterface::execOnTargeted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics
	{
		struct TargetinInterface_eventCanBeTargeted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetinInterface_eventCanBeTargeted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TargetinInterface_eventCanBeTargeted_Parms), &Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/TargetinInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetinInterface, nullptr, "CanBeTargeted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::TargetinInterface_eventCanBeTargeted_Parms), Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetinInterface_CanBeTargeted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetinInterface_CanBeTargeted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics
	{
		struct TargetinInterface_eventOnTargeted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetinInterface_eventOnTargeted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TargetinInterface_eventOnTargeted_Parms), &Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/TargetinInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetinInterface, nullptr, "OnTargeted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::TargetinInterface_eventOnTargeted_Parms), Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetinInterface_OnTargeted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetinInterface_OnTargeted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetinInterface);
	UClass* Z_Construct_UClass_UTargetinInterface_NoRegister()
	{
		return UTargetinInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTargetinInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetinInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetinInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetinInterface_CanBeTargeted, "CanBeTargeted" }, // 683038279
		{ &Z_Construct_UFunction_UTargetinInterface_OnTargeted, "OnTargeted" }, // 879886067
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetinInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/TargetinInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetinInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITargetinInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetinInterface_Statics::ClassParams = {
		&UTargetinInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTargetinInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetinInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetinInterface()
	{
		if (!Z_Registration_Info_UClass_UTargetinInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetinInterface.OuterSingleton, Z_Construct_UClass_UTargetinInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetinInterface.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UTargetinInterface>()
	{
		return UTargetinInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetinInterface);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TargetinInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TargetinInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetinInterface, UTargetinInterface::StaticClass, TEXT("UTargetinInterface"), &Z_Registration_Info_UClass_UTargetinInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetinInterface), 2429547561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TargetinInterface_h_323863504(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TargetinInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TargetinInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
