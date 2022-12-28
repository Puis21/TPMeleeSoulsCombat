// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/CombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatInterface() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCombatInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECollisionPart();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(ICombatInterface::execToggleCombat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleCombat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execEnableIFrames)
	{
		P_GET_UBOOL(Z_Param_bEnabledIFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableIFrames(Z_Param_bEnabledIFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execDeactivateCollision)
	{
		P_GET_ENUM(ECollisionPart,Z_Param_ColPart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateCollision(ECollisionPart(Z_Param_ColPart));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execActivateCollision)
	{
		P_GET_ENUM(ECollisionPart,Z_Param_ColPart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateCollision(ECollisionPart(Z_Param_ColPart));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execCanReceiveDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanReceiveDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execGetDesiredRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execResetCombat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCombat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execResetAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICombatInterface::execContinueAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ContinueAttack();
		P_NATIVE_END;
	}
	void UCombatInterface::StaticRegisterNativesUCombatInterface()
	{
		UClass* Class = UCombatInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateCollision", &ICombatInterface::execActivateCollision },
			{ "CanReceiveDamage", &ICombatInterface::execCanReceiveDamage },
			{ "ContinueAttack", &ICombatInterface::execContinueAttack },
			{ "DeactivateCollision", &ICombatInterface::execDeactivateCollision },
			{ "EnableIFrames", &ICombatInterface::execEnableIFrames },
			{ "GetDesiredRotation", &ICombatInterface::execGetDesiredRotation },
			{ "ResetAttack", &ICombatInterface::execResetAttack },
			{ "ResetCombat", &ICombatInterface::execResetCombat },
			{ "ToggleCombat", &ICombatInterface::execToggleCombat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics
	{
		struct CombatInterface_eventActivateCollision_Parms
		{
			ECollisionPart ColPart;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColPart_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColPart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::NewProp_ColPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::NewProp_ColPart = { "ColPart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatInterface_eventActivateCollision_Parms, ColPart), Z_Construct_UEnum_TPMeleeCombat_ECollisionPart, METADATA_PARAMS(nullptr, 0) }; // 3784078234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::NewProp_ColPart_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::NewProp_ColPart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "ActivateCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::CombatInterface_eventActivateCollision_Parms), Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatInterface_ActivateCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_ActivateCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics
	{
		struct CombatInterface_eventCanReceiveDamage_Parms
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
	void Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CombatInterface_eventCanReceiveDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CombatInterface_eventCanReceiveDamage_Parms), &Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "CanReceiveDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::CombatInterface_eventCanReceiveDamage_Parms), Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatInterface_CanReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_CanReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_ContinueAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_ContinueAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_ContinueAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "ContinueAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatInterface_ContinueAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_ContinueAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatInterface_ContinueAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_ContinueAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics
	{
		struct CombatInterface_eventDeactivateCollision_Parms
		{
			ECollisionPart ColPart;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColPart_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColPart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::NewProp_ColPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::NewProp_ColPart = { "ColPart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatInterface_eventDeactivateCollision_Parms, ColPart), Z_Construct_UEnum_TPMeleeCombat_ECollisionPart, METADATA_PARAMS(nullptr, 0) }; // 3784078234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::NewProp_ColPart_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::NewProp_ColPart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "DeactivateCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::CombatInterface_eventDeactivateCollision_Parms), Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatInterface_DeactivateCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_DeactivateCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics
	{
		struct CombatInterface_eventEnableIFrames_Parms
		{
			bool bEnabledIFrames;
		};
		static void NewProp_bEnabledIFrames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledIFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::NewProp_bEnabledIFrames_SetBit(void* Obj)
	{
		((CombatInterface_eventEnableIFrames_Parms*)Obj)->bEnabledIFrames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::NewProp_bEnabledIFrames = { "bEnabledIFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CombatInterface_eventEnableIFrames_Parms), &Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::NewProp_bEnabledIFrames_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::NewProp_bEnabledIFrames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "EnableIFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::CombatInterface_eventEnableIFrames_Parms), Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatInterface_EnableIFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_EnableIFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics
	{
		struct CombatInterface_eventGetDesiredRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatInterface_eventGetDesiredRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "GetDesiredRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::CombatInterface_eventGetDesiredRotation_Parms), Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatInterface_GetDesiredRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_GetDesiredRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_ResetAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_ResetAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_ResetAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "ResetAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatInterface_ResetAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_ResetAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatInterface_ResetAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_ResetAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_ResetCombat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_ResetCombat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_ResetCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "ResetCombat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatInterface_ResetCombat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_ResetCombat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatInterface_ResetCombat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_ResetCombat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatInterface_ToggleCombat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatInterface_ToggleCombat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatInterface_ToggleCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatInterface, nullptr, "ToggleCombat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatInterface_ToggleCombat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatInterface_ToggleCombat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatInterface_ToggleCombat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatInterface_ToggleCombat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatInterface);
	UClass* Z_Construct_UClass_UCombatInterface_NoRegister()
	{
		return UCombatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCombatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatInterface_ActivateCollision, "ActivateCollision" }, // 2208093349
		{ &Z_Construct_UFunction_UCombatInterface_CanReceiveDamage, "CanReceiveDamage" }, // 3138517145
		{ &Z_Construct_UFunction_UCombatInterface_ContinueAttack, "ContinueAttack" }, // 744101272
		{ &Z_Construct_UFunction_UCombatInterface_DeactivateCollision, "DeactivateCollision" }, // 1224195359
		{ &Z_Construct_UFunction_UCombatInterface_EnableIFrames, "EnableIFrames" }, // 2621551496
		{ &Z_Construct_UFunction_UCombatInterface_GetDesiredRotation, "GetDesiredRotation" }, // 3342939894
		{ &Z_Construct_UFunction_UCombatInterface_ResetAttack, "ResetAttack" }, // 1201427359
		{ &Z_Construct_UFunction_UCombatInterface_ResetCombat, "ResetCombat" }, // 3086097482
		{ &Z_Construct_UFunction_UCombatInterface_ToggleCombat, "ToggleCombat" }, // 1664390460
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CombatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatInterface_Statics::ClassParams = {
		&UCombatInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatInterface()
	{
		if (!Z_Registration_Info_UClass_UCombatInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatInterface.OuterSingleton, Z_Construct_UClass_UCombatInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatInterface.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UCombatInterface>()
	{
		return UCombatInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatInterface);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatInterface, UCombatInterface::StaticClass, TEXT("UCombatInterface"), &Z_Registration_Info_UClass_UCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatInterface), 859289194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_2928296518(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_CombatInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
