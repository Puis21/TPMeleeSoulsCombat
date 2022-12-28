// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPMeleeCombat/Components/StateManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateManagerComponent() {}
// Cross Module References
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TPMeleeCombat();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterState();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature();
	TPMELEECOMBAT_API UEnum* Z_Construct_UEnum_TPMeleeCombat_ECharacterActions();
	TPMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UStateManagerComponent_NoRegister();
	TPMELEECOMBAT_API UClass* Z_Construct_UClass_UStateManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics
	{
		struct _Script_TPMeleeCombat_eventOnStateBegin_Parms
		{
			ECharacterState CharacterState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::NewProp_CharacterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::NewProp_CharacterState = { "CharacterState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TPMeleeCombat_eventOnStateBegin_Parms, CharacterState), Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::NewProp_CharacterState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::NewProp_CharacterState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat, nullptr, "OnStateBegin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::_Script_TPMeleeCombat_eventOnStateBegin_Parms), Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics
	{
		struct _Script_TPMeleeCombat_eventOnStateEnd_Parms
		{
			ECharacterState CharacterState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::NewProp_CharacterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::NewProp_CharacterState = { "CharacterState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TPMeleeCombat_eventOnStateEnd_Parms, CharacterState), Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::NewProp_CharacterState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::NewProp_CharacterState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat, nullptr, "OnStateEnd__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::_Script_TPMeleeCombat_eventOnStateEnd_Parms), Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics
	{
		struct _Script_TPMeleeCombat_eventOnActionBegin_Parms
		{
			ECharacterActions CurrentAction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::NewProp_CurrentAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::NewProp_CurrentAction = { "CurrentAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TPMeleeCombat_eventOnActionBegin_Parms, CurrentAction), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::NewProp_CurrentAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::NewProp_CurrentAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat, nullptr, "OnActionBegin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::_Script_TPMeleeCombat_eventOnActionBegin_Parms), Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics
	{
		struct _Script_TPMeleeCombat_eventOnActionEnd_Parms
		{
			ECharacterActions CurrentAction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::NewProp_CurrentAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::NewProp_CurrentAction = { "CurrentAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TPMeleeCombat_eventOnActionEnd_Parms, CurrentAction), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(nullptr, 0) }; // 2246722876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::NewProp_CurrentAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::NewProp_CurrentAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TPMeleeCombat, nullptr, "OnActionEnd__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::_Script_TPMeleeCombat_eventOnActionEnd_Parms), Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UStateManagerComponent::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	void UStateManagerComponent::StaticRegisterNativesUStateManagerComponent()
	{
		UClass* Class = UStateManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &UStateManagerComponent::execGetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics
	{
		struct StateManagerComponent_eventGetCurrentState_Parms
		{
			ECharacterState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateManagerComponent_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(nullptr, 0) }; // 3357434538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateManagerComponent, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::StateManagerComponent_eventGetCurrentState_Parms), Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateManagerComponent_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateManagerComponent_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateManagerComponent);
	UClass* Z_Construct_UClass_UStateManagerComponent_NoRegister()
	{
		return UStateManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStateManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActionBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActionEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionEnd;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TPMeleeCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateManagerComponent_GetCurrentState, "GetCurrentState" }, // 2261240622
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/StateManagerComponent.h" },
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnStateBegin_MetaData[] = {
		{ "Category", "Event Dispachers" },
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnStateBegin = { "OnStateBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateManagerComponent, OnStateBegin), Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateBegin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnStateBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnStateBegin_MetaData)) }; // 4225624055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnStateEnd_MetaData[] = {
		{ "Category", "Event Dispachers" },
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnStateEnd = { "OnStateEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateManagerComponent, OnStateEnd), Z_Construct_UDelegateFunction_TPMeleeCombat_OnStateEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnStateEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnStateEnd_MetaData)) }; // 3561324546
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnActionBegin_MetaData[] = {
		{ "Category", "Event Dispachers" },
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnActionBegin = { "OnActionBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateManagerComponent, OnActionBegin), Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionBegin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnActionBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnActionBegin_MetaData)) }; // 4177166598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnActionEnd_MetaData[] = {
		{ "Category", "Event Dispachers" },
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnActionEnd = { "OnActionEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateManagerComponent, OnActionEnd), Z_Construct_UDelegateFunction_TPMeleeCombat_OnActionEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnActionEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnActionEnd_MetaData)) }; // 858784508
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateManagerComponent, CurrentState), Z_Construct_UEnum_TPMeleeCombat_ECharacterState, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState_MetaData)) }; // 3357434538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Components/StateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentAction = { "CurrentAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateManagerComponent, CurrentAction), Z_Construct_UEnum_TPMeleeCombat_ECharacterActions, METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentAction_MetaData)) }; // 2246722876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnStateBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnStateEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnActionBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_OnActionEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateManagerComponent_Statics::NewProp_CurrentAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateManagerComponent_Statics::ClassParams = {
		&UStateManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStateManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UStateManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateManagerComponent.OuterSingleton, Z_Construct_UClass_UStateManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateManagerComponent.OuterSingleton;
	}
	template<> TPMELEECOMBAT_API UClass* StaticClass<UStateManagerComponent>()
	{
		return UStateManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateManagerComponent);
	struct Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateManagerComponent, UStateManagerComponent::StaticClass, TEXT("UStateManagerComponent"), &Z_Registration_Info_UClass_UStateManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateManagerComponent), 3287631980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_1904101053(TEXT("/Script/TPMeleeCombat"),
		Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
