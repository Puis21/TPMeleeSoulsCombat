// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EAIBehavior : uint8;
#ifdef TPMELEECOMBAT_MasterAIController_generated_h
#error "MasterAIController.generated.h already included, missing '#pragma once' in MasterAIController.h"
#endif
#define TPMELEECOMBAT_MasterAIController_generated_h

#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_SPARSE_DATA
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnUpdated); \
	DECLARE_FUNCTION(execStartAIBehaviorSwitch);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUpdated); \
	DECLARE_FUNCTION(execStartAIBehaviorSwitch);


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasterAIController(); \
	friend struct Z_Construct_UClass_AMasterAIController_Statics; \
public: \
	DECLARE_CLASS(AMasterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(AMasterAIController)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAMasterAIController(); \
	friend struct Z_Construct_UClass_AMasterAIController_Statics; \
public: \
	DECLARE_CLASS(AMasterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(AMasterAIController)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterAIController(AMasterAIController&&); \
	NO_API AMasterAIController(const AMasterAIController&); \
public:


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterAIController(AMasterAIController&&); \
	NO_API AMasterAIController(const AMasterAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMasterAIController)


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_34_PROLOG
#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_RPC_WRAPPERS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_INCLASS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_SPARSE_DATA \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_INCLASS_NO_PURE_DECLS \
	FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPMELEECOMBAT_API UClass* StaticClass<class AMasterAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SoulsMeleeCombat_Source_TPMeleeCombat_AI_MasterAIController_h


#define FOREACH_ENUM_EAIBEHAVIOR(op) \
	op(EAIBehavior::EAB_Nothing) \
	op(EAIBehavior::EAB_Patrolling) \
	op(EAIBehavior::EAB_Chasing) \
	op(EAIBehavior::EAB_Combat) \
	op(EAIBehavior::EAB_Attacking) \
	op(EAIBehavior::EAB_Hit) 

enum class EAIBehavior : uint8;
template<> TPMELEECOMBAT_API UEnum* StaticEnum<EAIBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
