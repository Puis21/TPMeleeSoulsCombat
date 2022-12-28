// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Player/TPMeleeCombatPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPMeleeCombatPlayer() {}
// Cross Module References
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ATPMeleeCombatPlayer_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_ATPMeleeCombatPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterActions();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EStats();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UStateManagerComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UTargetingComponent_NoRegister();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UCombatInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATPMeleeCombatPlayer::execTrackChargeAttack)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrackChargeAttack_Implementation(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPMeleeCombatPlayer::execTakePointDamage)
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
	DEFINE_FUNCTION(ATPMeleeCombatPlayer::execOnCurrentStatUpdated)
	{
		P_GET_ENUM(EStats,Z_Param_StatType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentStatUpdated(EStats(Z_Param_StatType),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPMeleeCombatPlayer::execOnActionEnd)
	{
		P_GET_ENUM(ECharacterActions,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionEnd(ECharacterActions(Z_Param_Action));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPMeleeCombatPlayer::execOnActionBegin)
	{
		P_GET_ENUM(ECharacterActions,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionBegin(ECharacterActions(Z_Param_Action));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPMeleeCombatPlayer::execOnStateEnd)
	{
		P_GET_ENUM(ECharacterState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateEnd(ECharacterState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPMeleeCombatPlayer::execOnStateBegin)
	{
		P_GET_ENUM(ECharacterState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateBegin(ECharacterState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPMeleeCombatPlayer::execChargeAttackEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChargeAttackEvent();
		P_NATIVE_END;
	}
	static FName NAME_ATPMeleeCombatPlayer_ClearChargeEventTimer = FName(TEXT("ClearChargeEventTimer"));
	void ATPMeleeCombatPlayer::ClearChargeEventTimer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATPMeleeCombatPlayer_ClearChargeEventTimer),NULL);
	}
	static FName NAME_ATPMeleeCombatPlayer_TrackChargeAttack = FName(TEXT("TrackChargeAttack"));
	void ATPMeleeCombatPlayer::TrackChargeAttack(FKey Key)
	{
		TPMeleeCombatPlayer_eventTrackChargeAttack_Parms Parms;
		Parms.Key=Key;
		ProcessEvent(FindFunctionChecked(NAME_ATPMeleeCombatPlayer_TrackChargeAttack),&Parms);
	}
	void ATPMeleeCombatPlayer::StaticRegisterNativesATPMeleeCombatPlayer()
	{
		UClass* Class = ATPMeleeCombatPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChargeAttackEvent", &ATPMeleeCombatPlayer::execChargeAttackEvent },
			{ "OnActionBegin", &ATPMeleeCombatPlayer::execOnActionBegin },
			{ "OnActionEnd", &ATPMeleeCombatPlayer::execOnActionEnd },
			{ "OnCurrentStatUpdated", &ATPMeleeCombatPlayer::execOnCurrentStatUpdated },
			{ "OnStateBegin", &ATPMeleeCombatPlayer::execOnStateBegin },
			{ "OnStateEnd", &ATPMeleeCombatPlayer::execOnStateEnd },
			{ "TakePointDamage", &ATPMeleeCombatPlayer::execTakePointDamage },
			{ "TrackChargeAttack", &ATPMeleeCombatPlayer::execTrackChargeAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATPMeleeCombatPlayer_ChargeAttackEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_ChargeAttackEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChargeAttack" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPMeleeCombatPlayer_ChargeAttackEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPMeleeCombatPlayer, nullptr, "ChargeAttackEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_ChargeAttackEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_ChargeAttackEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPMeleeCombatPlayer_ChargeAttackEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPMeleeCombatPlayer_ChargeAttackEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPMeleeCombatPlayer_ClearChargeEventTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_ClearChargeEventTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChargeAttack" },
		{ "Comment", "//BP IMPLEMENTED\n" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
		{ "ToolTip", "BP IMPLEMENTED" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPMeleeCombatPlayer_ClearChargeEventTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPMeleeCombatPlayer, nullptr, "ClearChargeEventTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_ClearChargeEventTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_ClearChargeEventTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPMeleeCombatPlayer_ClearChargeEventTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPMeleeCombatPlayer_ClearChargeEventTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics
	{
		struct TPMeleeCombatPlayer_eventOnActionBegin_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventOnActionBegin_Parms, Action), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPMeleeCombatPlayer, nullptr, "OnActionBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::TPMeleeCombatPlayer_eventOnActionBegin_Parms), Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics
	{
		struct TPMeleeCombatPlayer_eventOnActionEnd_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventOnActionEnd_Parms, Action), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPMeleeCombatPlayer, nullptr, "OnActionEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::TPMeleeCombatPlayer_eventOnActionEnd_Parms), Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics
	{
		struct TPMeleeCombatPlayer_eventOnCurrentStatUpdated_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventOnCurrentStatUpdated_Parms, StatType), Z_Construct_UEnum_TPMeleeCombat_EStats, METADATA_PARAMS(nullptr, 0) }; // 1281444539
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventOnCurrentStatUpdated_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::NewProp_StatType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::NewProp_StatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPMeleeCombatPlayer, nullptr, "OnCurrentStatUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::TPMeleeCombatPlayer_eventOnCurrentStatUpdated_Parms), Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics
	{
		struct TPMeleeCombatPlayer_eventOnStateBegin_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventOnStateBegin_Parms, State), Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPMeleeCombatPlayer, nullptr, "OnStateBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::TPMeleeCombatPlayer_eventOnStateBegin_Parms), Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics
	{
		struct TPMeleeCombatPlayer_eventOnStateEnd_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventOnStateEnd_Parms, State), Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPMeleeCombatPlayer, nullptr, "OnStateEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::TPMeleeCombatPlayer_eventOnStateEnd_Parms), Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics
	{
		struct TPMeleeCombatPlayer_eventTakePointDamage_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventTakePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventTakePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_FHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventTakePointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_FHitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_FHitComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventTakePointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventTakePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_FHitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_ShotFromDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Combat\") ///// DEPRECATED\n//void TakeDamage(float inDamage);\n" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Combat\")  DEPRECATED\nvoid TakeDamage(float inDamage);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPMeleeCombatPlayer, nullptr, "TakePointDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::TPMeleeCombatPlayer_eventTakePointDamage_Parms), Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TPMeleeCombatPlayer_eventTrackChargeAttack_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2615338182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChargeAttack" },
		{ "Comment", "//BP IMPLEMENTED\n" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
		{ "ToolTip", "BP IMPLEMENTED" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPMeleeCombatPlayer, nullptr, "TrackChargeAttack", nullptr, nullptr, sizeof(TPMeleeCombatPlayer_eventTrackChargeAttack_Parms), Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPMeleeCombatPlayer);
	UClass* Z_Construct_UClass_ATPMeleeCombatPlayer_NoRegister()
	{
		return ATPMeleeCombatPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ATPMeleeCombatPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_ACTargetingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ACTargetingComponent;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fHealth;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fAttackHeldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fAttackHeldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fChargeAttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fChargeAttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bIsAttackCharged_MetaData[];
#endif
		static void NewProp_m_bIsAttackCharged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bIsAttackCharged;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPMeleeCombatPlayer_ChargeAttackEvent, "ChargeAttackEvent" }, // 3365611962
		{ &Z_Construct_UFunction_ATPMeleeCombatPlayer_ClearChargeEventTimer, "ClearChargeEventTimer" }, // 2986456610
		{ &Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionBegin, "OnActionBegin" }, // 3933765657
		{ &Z_Construct_UFunction_ATPMeleeCombatPlayer_OnActionEnd, "OnActionEnd" }, // 3989668871
		{ &Z_Construct_UFunction_ATPMeleeCombatPlayer_OnCurrentStatUpdated, "OnCurrentStatUpdated" }, // 156940887
		{ &Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateBegin, "OnStateBegin" }, // 299927450
		{ &Z_Construct_UFunction_ATPMeleeCombatPlayer_OnStateEnd, "OnStateEnd" }, // 4277719704
		{ &Z_Construct_UFunction_ATPMeleeCombatPlayer_TakePointDamage, "TakePointDamage" }, // 3971914721
		{ &Z_Construct_UFunction_ATPMeleeCombatPlayer_TrackChargeAttack, "TrackChargeAttack" }, // 2203301658
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/TPMeleeCombatPlayer.h" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACCombatComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "DisplayName", "Combat Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACCombatComponent = { "m_ACCombatComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, m_ACCombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACCombatComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACCombatComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACStateManagerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "DisplayName", "State Manager Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACStateManagerComponent = { "m_ACStateManagerComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, m_ACStateManagerComponent), Z_Construct_UClass_UStateManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACStateManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACStateManagerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACStatsComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "DisplayName", "Stats Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACStatsComponent = { "m_ACStatsComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, m_ACStatsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACStatsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACStatsComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACTargetingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "DisplayName", "Targeting Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACTargetingComponent = { "m_ACTargetingComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, m_ACTargetingComponent), Z_Construct_UClass_UTargetingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACTargetingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACTargetingComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_MovementSpeedMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_MovementSpeedMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_MovementSpeedMode = { "MovementSpeedMode", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, MovementSpeedMode), Z_Construct_UEnum_TPMeleeCombat_EMovementSpeedMode, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_MovementSpeedMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_MovementSpeedMode_MetaData)) }; // 4257242440
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CombatStatesToCheck_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CombatStatesToCheck_Inner = { "CombatStatesToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CombatStatesToCheck_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CombatStatesToCheck = { "CombatStatesToCheck", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, CombatStatesToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CombatStatesToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CombatStatesToCheck_MetaData)) }; // 3357434538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_DodgeStatesToCheck_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_DodgeStatesToCheck_Inner = { "DodgeStatesToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_DodgeStatesToCheck_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_DodgeStatesToCheck = { "DodgeStatesToCheck", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, DodgeStatesToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_DodgeStatesToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_DodgeStatesToCheck_MetaData)) }; // 3357434538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_ActionToCheck_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_ActionToCheck_Inner = { "ActionToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_ActionToCheck_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_ActionToCheck = { "ActionToCheck", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, ActionToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_ActionToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_ActionToCheck_MetaData)) }; // 2246722876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fHealth = { "m_fHealth", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, m_fHealth), METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fWalkingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fWalkingSpeed = { "m_fWalkingSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, m_fWalkingSpeed), METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fWalkingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fWalkingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fJoggingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fJoggingSpeed = { "m_fJoggingSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, m_fJoggingSpeed), METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fJoggingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fJoggingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fSprintingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fSprintingSpeed = { "m_fSprintingSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, m_fSprintingSpeed), METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fSprintingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fSprintingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fAttackHeldTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fAttackHeldTime = { "m_fAttackHeldTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, m_fAttackHeldTime), METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fAttackHeldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fAttackHeldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fChargeAttackTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fChargeAttackTime = { "m_fChargeAttackTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, m_fChargeAttackTime), METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fChargeAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fChargeAttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_bIsAttackCharged_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	void Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_bIsAttackCharged_SetBit(void* Obj)
	{
		((ATPMeleeCombatPlayer*)Obj)->m_bIsAttackCharged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_bIsAttackCharged = { "m_bIsAttackCharged", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATPMeleeCombatPlayer), &Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_bIsAttackCharged_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_bIsAttackCharged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_bIsAttackCharged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_BoneRagdollName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_BoneRagdollName = { "BoneRagdollName", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, BoneRagdollName), METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_BoneRagdollName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_BoneRagdollName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds | Hit Sound" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Particles | Hit Particle" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitParticles = { "HitParticles", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, HitParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim Montages | Hit Montage" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitMontage = { "HitMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, HitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_KnockdownMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim Montages | Knockdown Montage" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_KnockdownMontage = { "KnockdownMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, KnockdownMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_KnockdownMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_KnockdownMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Player/TPMeleeCombatPlayer.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPMeleeCombatPlayer, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_TurnRateGamepad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACCombatComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACStateManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACStatsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_ACTargetingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_MovementSpeedMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_MovementSpeedMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CombatStatesToCheck_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CombatStatesToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_CombatStatesToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_DodgeStatesToCheck_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_DodgeStatesToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_DodgeStatesToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_ActionToCheck_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_ActionToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_ActionToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fWalkingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fJoggingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fSprintingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fAttackHeldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_fChargeAttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_m_bIsAttackCharged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_BoneRagdollName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_HitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_KnockdownMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::NewProp_TurnRateGamepad,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCombatInterface_NoRegister, (int32)VTABLE_OFFSET(ATPMeleeCombatPlayer, ICombatInterface), false },  // 859289194
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPMeleeCombatPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::ClassParams = {
		&ATPMeleeCombatPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPMeleeCombatPlayer()
	{
		if (!Z_Registration_Info_UClass_ATPMeleeCombatPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPMeleeCombatPlayer.OuterSingleton, Z_Construct_UClass_ATPMeleeCombatPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPMeleeCombatPlayer.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<ATPMeleeCombatPlayer>()
	{
		return ATPMeleeCombatPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPMeleeCombatPlayer);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPMeleeCombatPlayer, ATPMeleeCombatPlayer::StaticClass, TEXT("ATPMeleeCombatPlayer"), &Z_Registration_Info_UClass_ATPMeleeCombatPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPMeleeCombatPlayer), 792953724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_3806217363(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Player_TPMeleeCombatPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
