// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/AI/MasterAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMasterAI() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_AMasterAI_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_AMasterAI();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterActions();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EStats();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UStateManagerComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCollisionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMasterAI::execGetBehaviorTree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBehaviorTree**)Z_Param__Result=P_THIS->GetBehaviorTree();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAI::execRotateToTarget)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateToTarget(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAI::execTakePointDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_FHitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakePointDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_HitLocation,Z_Param_FHitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_DamageType,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAI::execApplyDamage)
	{
		P_GET_STRUCT(FHitResult,Z_Param_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDamage(Z_Param_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAI::execOnCurrentStatUpdated)
	{
		P_GET_ENUM(EStats,Z_Param_StatType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentStatUpdated(EStats(Z_Param_StatType),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAI::execOnActionEnd)
	{
		P_GET_ENUM(ECharacterActions,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionEnd(ECharacterActions(Z_Param_Action));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAI::execOnActionBegin)
	{
		P_GET_ENUM(ECharacterActions,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionBegin(ECharacterActions(Z_Param_Action));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAI::execOnStateEnd)
	{
		P_GET_ENUM(ECharacterState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateEnd(ECharacterState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAI::execOnStateBegin)
	{
		P_GET_ENUM(ECharacterState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateBegin(ECharacterState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAI::execPerformAction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MontageIndex);
		P_GET_UBOOL(Z_Param_RandomIndex);
		P_GET_ENUM(ECharacterActions,Z_Param_CharAction);
		P_GET_ENUM(ECharacterState,Z_Param_CharState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PerformAction(Z_Param_MontageIndex,Z_Param_RandomIndex,ECharacterActions(Z_Param_CharAction),ECharacterState(Z_Param_CharState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMasterAI::execPerformAttack)
	{
		P_GET_ENUM(ECharacterActions,Z_Param_AttackType);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttackIndex);
		P_GET_UBOOL(Z_Param_RandomIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PerformAttack(ECharacterActions(Z_Param_AttackType),Z_Param_AttackIndex,Z_Param_RandomIndex);
		P_NATIVE_END;
	}
	void AMasterAI::StaticRegisterNativesAMasterAI()
	{
		UClass* Class = AMasterAI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamage", &AMasterAI::execApplyDamage },
			{ "GetBehaviorTree", &AMasterAI::execGetBehaviorTree },
			{ "OnActionBegin", &AMasterAI::execOnActionBegin },
			{ "OnActionEnd", &AMasterAI::execOnActionEnd },
			{ "OnCurrentStatUpdated", &AMasterAI::execOnCurrentStatUpdated },
			{ "OnStateBegin", &AMasterAI::execOnStateBegin },
			{ "OnStateEnd", &AMasterAI::execOnStateEnd },
			{ "PerformAction", &AMasterAI::execPerformAction },
			{ "PerformAttack", &AMasterAI::execPerformAttack },
			{ "RotateToTarget", &AMasterAI::execRotateToTarget },
			{ "TakePointDamage", &AMasterAI::execTakePointDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics
	{
		struct MasterAI_eventApplyDamage_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventApplyDamage_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "ApplyDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::MasterAI_eventApplyDamage_Parms), Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics
	{
		struct MasterAI_eventGetBehaviorTree_Parms
		{
			UBehaviorTree* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventGetBehaviorTree_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "GetBehaviorTree", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::MasterAI_eventGetBehaviorTree_Parms), Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_GetBehaviorTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_GetBehaviorTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics
	{
		struct MasterAI_eventOnActionBegin_Parms
		{
			ECharacterActions Action;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventOnActionBegin_Parms, Action), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "OnActionBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::MasterAI_eventOnActionBegin_Parms), Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_OnActionBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_OnActionBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics
	{
		struct MasterAI_eventOnActionEnd_Parms
		{
			ECharacterActions Action;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventOnActionEnd_Parms, Action), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "OnActionEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::MasterAI_eventOnActionEnd_Parms), Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_OnActionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_OnActionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics
	{
		struct MasterAI_eventOnCurrentStatUpdated_Parms
		{
			EStats StatType;
			float Value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StatType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventOnCurrentStatUpdated_Parms, StatType), Z_Construct_UEnum_TPMeleeCombat_EStats, METADATA_PARAMS(nullptr, 0) }; // 1281444539
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventOnCurrentStatUpdated_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::NewProp_StatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::NewProp_StatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "OnCurrentStatUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::MasterAI_eventOnCurrentStatUpdated_Parms), Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics
	{
		struct MasterAI_eventOnStateBegin_Parms
		{
			ECharacterState State;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventOnStateBegin_Parms, State), Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "OnStateBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::MasterAI_eventOnStateBegin_Parms), Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_OnStateBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_OnStateBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics
	{
		struct MasterAI_eventOnStateEnd_Parms
		{
			ECharacterState State;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventOnStateEnd_Parms, State), Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "OnStateEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::MasterAI_eventOnStateEnd_Parms), Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_OnStateEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_OnStateEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAI_PerformAction_Statics
	{
		struct MasterAI_eventPerformAction_Parms
		{
			int32 MontageIndex;
			bool RandomIndex;
			ECharacterActions CharAction;
			ECharacterState CharState;
			float ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MontageIndex;
		static void NewProp_RandomIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharAction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharState;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_MontageIndex = { "MontageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventPerformAction_Parms, MontageIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_RandomIndex_SetBit(void* Obj)
	{
		((MasterAI_eventPerformAction_Parms*)Obj)->RandomIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_RandomIndex = { "RandomIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MasterAI_eventPerformAction_Parms), &Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_RandomIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_CharAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_CharAction = { "CharAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventPerformAction_Parms, CharAction), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_CharState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_CharState = { "CharState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventPerformAction_Parms, CharState), Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventPerformAction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_PerformAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_MontageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_RandomIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_CharAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_CharAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_CharState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_CharState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_PerformAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI Actions" },
		{ "CPP_Default_CharAction", "ECA_GeneralAction" },
		{ "CPP_Default_CharState", "ECS_GeneralAction" },
		{ "CPP_Default_MontageIndex", "0" },
		{ "CPP_Default_RandomIndex", "false" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_PerformAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "PerformAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_PerformAction_Statics::MasterAI_eventPerformAction_Parms), Z_Construct_UFunction_AMasterAI_PerformAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_PerformAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_PerformAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_PerformAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_PerformAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_PerformAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAI_PerformAttack_Statics
	{
		struct MasterAI_eventPerformAttack_Parms
		{
			ECharacterActions AttackType;
			int32 AttackIndex;
			bool RandomIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttackType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttackType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AttackIndex;
		static void NewProp_RandomIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_AttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventPerformAttack_Parms, AttackType), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_AttackIndex = { "AttackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventPerformAttack_Parms, AttackIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_RandomIndex_SetBit(void* Obj)
	{
		((MasterAI_eventPerformAttack_Parms*)Obj)->RandomIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_RandomIndex = { "RandomIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MasterAI_eventPerformAttack_Parms), &Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_RandomIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventPerformAttack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_AttackType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_AttackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_AttackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_RandomIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI Actions" },
		{ "CPP_Default_AttackIndex", "0" },
		{ "CPP_Default_AttackType", "ECA_Nothing" },
		{ "CPP_Default_RandomIndex", "false" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "PerformAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::MasterAI_eventPerformAttack_Parms), Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_PerformAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_PerformAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics
	{
		struct MasterAI_eventRotateToTarget_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventRotateToTarget_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "RotateToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::MasterAI_eventRotateToTarget_Parms), Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_RotateToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_RotateToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics
	{
		struct MasterAI_eventTakePointDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			AController* InstigatedBy;
			FVector HitLocation;
			UPrimitiveComponent* FHitComponent;
			FName BoneName;
			FVector ShotFromDirection;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FHitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FHitComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventTakePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventTakePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_FHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventTakePointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_FHitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_FHitComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventTakePointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventTakePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MasterAI_eventTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_FHitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_ShotFromDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Combat\") ///// DEPRECATED\n//void TakeDamage(float inDamage);\n" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Combat\")  DEPRECATED\nvoid TakeDamage(float inDamage);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMasterAI, nullptr, "TakePointDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::MasterAI_eventTakePointDamage_Parms), Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMasterAI_TakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMasterAI_TakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMasterAI);
	UClass* Z_Construct_UClass_AMasterAI_NoRegister()
	{
		return AMasterAI::StaticClass();
	}
	struct Z_Construct_UClass_AMasterAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_ACCombatComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ACCombatComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_ACStateManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ACStateManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_ACStatsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ACStatsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainWeaponCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWeaponCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementSpeedMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementSpeedMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombatStatesToCheck_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatStatesToCheck_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatStatesToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CombatStatesToCheck;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DodgeStatesToCheck_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DodgeStatesToCheck_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeStatesToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DodgeStatesToCheck;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionToCheck_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionToCheck_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionToCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fWalkingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fWalkingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fJoggingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fJoggingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fSprintingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fSprintingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneRagdollName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneRagdollName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnockdownMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KnockdownMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LightAttackMontages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightAttackMontages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LightAttackMontages;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeAttackMontages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChargeAttackMontages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChargeAttackMontages;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackMontages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackMontages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HeavyAttackMontages;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeMontages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeMontages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DodgeMontages;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnterCombatMontages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterCombatMontages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnterCombatMontages;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitCombatMontages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitCombatMontages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExitCombatMontages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurveFloat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationCurveFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMasterAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMasterAI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMasterAI_ApplyDamage, "ApplyDamage" }, // 1328530371
		{ &Z_Construct_UFunction_AMasterAI_GetBehaviorTree, "GetBehaviorTree" }, // 277182166
		{ &Z_Construct_UFunction_AMasterAI_OnActionBegin, "OnActionBegin" }, // 2374375912
		{ &Z_Construct_UFunction_AMasterAI_OnActionEnd, "OnActionEnd" }, // 919914372
		{ &Z_Construct_UFunction_AMasterAI_OnCurrentStatUpdated, "OnCurrentStatUpdated" }, // 3657980306
		{ &Z_Construct_UFunction_AMasterAI_OnStateBegin, "OnStateBegin" }, // 3155306708
		{ &Z_Construct_UFunction_AMasterAI_OnStateEnd, "OnStateEnd" }, // 200203875
		{ &Z_Construct_UFunction_AMasterAI_PerformAction, "PerformAction" }, // 4162480064
		{ &Z_Construct_UFunction_AMasterAI_PerformAttack, "PerformAttack" }, // 688484620
		{ &Z_Construct_UFunction_AMasterAI_RotateToTarget, "RotateToTarget" }, // 1362339868
		{ &Z_Construct_UFunction_AMasterAI_TakePointDamage, "TakePointDamage" }, // 419028245
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/MasterAI.h" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACCombatComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "DisplayName", "Combat Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACCombatComponent = { "m_ACCombatComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, m_ACCombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACCombatComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACCombatComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACStateManagerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "DisplayName", "State Manager Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACStateManagerComponent = { "m_ACStateManagerComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, m_ACStateManagerComponent), Z_Construct_UClass_UStateManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACStateManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACStateManagerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACStatsComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "DisplayName", "Stats Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACStatsComponent = { "m_ACStatsComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, m_ACStatsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACStatsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACStatsComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_MainWeaponCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CollisionComp" },
		{ "DisplayName", "MainWeaponCollisionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_MainWeaponCollision = { "MainWeaponCollision", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, MainWeaponCollision), Z_Construct_UClass_UCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_MainWeaponCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_MainWeaponCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_ItemStaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Main Weapon Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_ItemStaticMesh = { "ItemStaticMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, ItemStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_ItemStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_ItemStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "AlowPrivateAccess", "true" },
		{ "Category", "Behavior Tree" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_BehaviorTree_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_MovementSpeedMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_MovementSpeedMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_MovementSpeedMode = { "MovementSpeedMode", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, MovementSpeedMode), Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_MovementSpeedMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_MovementSpeedMode_MetaData)) }; // 4257242440
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_CombatStatesToCheck_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_CombatStatesToCheck_Inner = { "CombatStatesToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_CombatStatesToCheck_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_CombatStatesToCheck = { "CombatStatesToCheck", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, CombatStatesToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_CombatStatesToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_CombatStatesToCheck_MetaData)) }; // 3357434538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeStatesToCheck_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeStatesToCheck_Inner = { "DodgeStatesToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeStatesToCheck_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeStatesToCheck = { "DodgeStatesToCheck", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, DodgeStatesToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeStatesToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeStatesToCheck_MetaData)) }; // 3357434538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_ActionToCheck_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_ActionToCheck_Inner = { "ActionToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_ActionToCheck_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_ActionToCheck = { "ActionToCheck", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, ActionToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_ActionToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_ActionToCheck_MetaData)) }; // 2246722876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fWalkingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fWalkingSpeed = { "m_fWalkingSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, m_fWalkingSpeed), METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fWalkingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fWalkingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fJoggingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fJoggingSpeed = { "m_fJoggingSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, m_fJoggingSpeed), METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fJoggingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fJoggingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fSprintingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fSprintingSpeed = { "m_fSprintingSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, m_fSprintingSpeed), METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fSprintingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fSprintingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fDamage = { "m_fDamage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, m_fDamage), METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_BoneRagdollName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_BoneRagdollName = { "BoneRagdollName", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, BoneRagdollName), METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_BoneRagdollName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_BoneRagdollName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_HitSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds | Hit Sound" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_HitSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_HitParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Particles | Hit Particle" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_HitParticles = { "HitParticles", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, HitParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_HitParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_HitParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_HitMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim Montages | Hit Montage" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_HitMontage = { "HitMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, HitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_HitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_HitMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_KnockdownMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim Montages | Knockdown Montage" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_KnockdownMontage = { "KnockdownMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, KnockdownMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_KnockdownMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_KnockdownMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_LightAttackMontages_Inner = { "LightAttackMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_LightAttackMontages_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim Montages | Light Attack Montages" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_LightAttackMontages = { "LightAttackMontages", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, LightAttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_LightAttackMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_LightAttackMontages_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_ChargeAttackMontages_Inner = { "ChargeAttackMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_ChargeAttackMontages_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim Montages | Medium Range Attack Montages" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_ChargeAttackMontages = { "ChargeAttackMontages", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, ChargeAttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_ChargeAttackMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_ChargeAttackMontages_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_HeavyAttackMontages_Inner = { "HeavyAttackMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_HeavyAttackMontages_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim Montages | Rare Attack Montages" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_HeavyAttackMontages = { "HeavyAttackMontages", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, HeavyAttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_HeavyAttackMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_HeavyAttackMontages_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeMontages_Inner = { "DodgeMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeMontages_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim Montages | Dodge Montages" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeMontages = { "DodgeMontages", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, DodgeMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeMontages_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_EnterCombatMontages_Inner = { "EnterCombatMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_EnterCombatMontages_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim Montages | Enter Combat Montages" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_EnterCombatMontages = { "EnterCombatMontages", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, EnterCombatMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_EnterCombatMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_EnterCombatMontages_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_ExitCombatMontages_Inner = { "ExitCombatMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_ExitCombatMontages_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim Montages | Exit Combat Montages" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_ExitCombatMontages = { "ExitCombatMontages", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, ExitCombatMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_ExitCombatMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_ExitCombatMontages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stats" },
		{ "DisplayName", "Damage Type Class" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMasterAI_Statics::NewProp_RotationCurveFloat_MetaData[] = {
		{ "Category", "Curve Float" },
		{ "ModuleRelativePath", "AI/MasterAI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMasterAI_Statics::NewProp_RotationCurveFloat = { "RotationCurveFloat", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMasterAI, RotationCurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::NewProp_RotationCurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::NewProp_RotationCurveFloat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMasterAI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACCombatComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACStateManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_m_ACStatsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_MainWeaponCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_ItemStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_MovementSpeedMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_MovementSpeedMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_CombatStatesToCheck_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_CombatStatesToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_CombatStatesToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeStatesToCheck_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeStatesToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeStatesToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_ActionToCheck_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_ActionToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_ActionToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fWalkingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fJoggingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fSprintingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_m_fDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_BoneRagdollName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_HitSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_HitParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_HitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_KnockdownMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_LightAttackMontages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_LightAttackMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_ChargeAttackMontages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_ChargeAttackMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_HeavyAttackMontages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_HeavyAttackMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeMontages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_DodgeMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_EnterCombatMontages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_EnterCombatMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_ExitCombatMontages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_ExitCombatMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_DamageTypeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMasterAI_Statics::NewProp_RotationCurveFloat,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMasterAI_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(AMasterAI, ICombatInterface), false },  // 859289194
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMasterAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterAI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterAI_Statics::ClassParams = {
		&AMasterAI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMasterAI_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMasterAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMasterAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMasterAI()
	{
		if (!Z_Registration_Info_UClass_AMasterAI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterAI.OuterSingleton, Z_Construct_UClass_AMasterAI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMasterAI.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<AMasterAI>()
	{
		return AMasterAI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterAI);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMasterAI, AMasterAI::StaticClass, TEXT("AMasterAI"), &Z_Registration_Info_UClass_AMasterAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterAI), 2359600104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_1974080193(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
