// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Strategy/StrategyPlayerController.h"

#ifdef THEARCHITECT_StrategyPlayerController_generated_h
#error "StrategyPlayerController.generated.h already included, missing '#pragma once' in StrategyPlayerController.h"
#endif
#define THEARCHITECT_StrategyPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AStrategyUnit;

// ********** Begin Class AStrategyPlayerController ************************************************
#define FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoveCompleted);


#define FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h_33_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AStrategyPlayerController_Statics;
THEARCHITECT_API UClass* Z_Construct_UClass_AStrategyPlayerController_NoRegister();

#define FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStrategyPlayerController(); \
	friend struct ::Z_Construct_UClass_AStrategyPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEARCHITECT_API UClass* ::Z_Construct_UClass_AStrategyPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AStrategyPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheArchitect"), Z_Construct_UClass_AStrategyPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AStrategyPlayerController)


#define FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AStrategyPlayerController(AStrategyPlayerController&&) = delete; \
	AStrategyPlayerController(const AStrategyPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStrategyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStrategyPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AStrategyPlayerController) \
	NO_API virtual ~AStrategyPlayerController();


#define FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h_30_PROLOG
#define FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h_33_CALLBACK_WRAPPERS \
	FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h_33_INCLASS_NO_PURE_DECLS \
	FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AStrategyPlayerController;

// ********** End Class AStrategyPlayerController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Architect_TheArchitect_Source_TheArchitect_Variant_Strategy_StrategyPlayerController_h

// ********** Begin Enum EStrategyInputMode ********************************************************
#define FOREACH_ENUM_ESTRATEGYINPUTMODE(op) \
	op(SIM_Mouse) \
	op(SIM_Touch) 

enum EStrategyInputMode : uint8;
template<> THEARCHITECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EStrategyInputMode>();
// ********** End Enum EStrategyInputMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
