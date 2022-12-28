// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECharacterState : uint8;
enum class ECharacterActions : uint8;
#ifdef TPMELEECOMBAT_StateManagerComponent_generated_h
#error "StateManagerComponent.generated.h already included, missing '#pragma once' in StateManagerComponent.h"
#endif
#define TPMELEECOMBAT_StateManagerComponent_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_12_DELEGATE \
struct _Script_TPMeleeCombat_eventOnStateBegin_Parms \
{ \
	ECharacterState CharacterState; \
}; \
static inline void FOnStateBegin_DelegateWrapper(const FMulticastScriptDelegate& OnStateBegin, ECharacterState CharacterState) \
{ \
	_Script_TPMeleeCombat_eventOnStateBegin_Parms Parms; \
	Parms.CharacterState=CharacterState; \
	OnStateBegin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_13_DELEGATE \
struct _Script_TPMeleeCombat_eventOnStateEnd_Parms \
{ \
	ECharacterState CharacterState; \
}; \
static inline void FOnStateEnd_DelegateWrapper(const FMulticastScriptDelegate& OnStateEnd, ECharacterState CharacterState) \
{ \
	_Script_TPMeleeCombat_eventOnStateEnd_Parms Parms; \
	Parms.CharacterState=CharacterState; \
	OnStateEnd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_14_DELEGATE \
struct _Script_TPMeleeCombat_eventOnActionBegin_Parms \
{ \
	ECharacterActions CurrentAction; \
}; \
static inline void FOnActionBegin_DelegateWrapper(const FMulticastScriptDelegate& OnActionBegin, ECharacterActions CurrentAction) \
{ \
	_Script_TPMeleeCombat_eventOnActionBegin_Parms Parms; \
	Parms.CurrentAction=CurrentAction; \
	OnActionBegin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_15_DELEGATE \
struct _Script_TPMeleeCombat_eventOnActionEnd_Parms \
{ \
	ECharacterActions CurrentAction; \
}; \
static inline void FOnActionEnd_DelegateWrapper(const FMulticastScriptDelegate& OnActionEnd, ECharacterActions CurrentAction) \
{ \
	_Script_TPMeleeCombat_eventOnActionEnd_Parms Parms; \
	Parms.CurrentAction=CurrentAction; \
	OnActionEnd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateManagerComponent(); \
	friend struct Z_Construct_UClass_UStateManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UStateManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UStateManagerComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUStateManagerComponent(); \
	friend struct Z_Construct_UClass_UStateManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UStateManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UStateManagerComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateManagerComponent(UStateManagerComponent&&); \
	NO_API UStateManagerComponent(const UStateManagerComponent&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateManagerComponent(UStateManagerComponent&&); \
	NO_API UStateManagerComponent(const UStateManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateManagerComponent)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_17_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class UStateManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_Components_StateManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
