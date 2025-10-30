// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheArchitectPlayerController.h"

#ifdef THEARCHITECT_TheArchitectPlayerController_generated_h
#error "TheArchitectPlayerController.generated.h already included, missing '#pragma once' in TheArchitectPlayerController.h"
#endif
#define THEARCHITECT_TheArchitectPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATheArchitectPlayerController ********************************************
struct Z_Construct_UClass_ATheArchitectPlayerController_Statics;
THEARCHITECT_API UClass* Z_Construct_UClass_ATheArchitectPlayerController_NoRegister();

#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectPlayerController_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheArchitectPlayerController(); \
	friend struct ::Z_Construct_UClass_ATheArchitectPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEARCHITECT_API UClass* ::Z_Construct_UClass_ATheArchitectPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheArchitectPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheArchitect"), Z_Construct_UClass_ATheArchitectPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ATheArchitectPlayerController)


#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectPlayerController_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheArchitectPlayerController(ATheArchitectPlayerController&&) = delete; \
	ATheArchitectPlayerController(const ATheArchitectPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheArchitectPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheArchitectPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATheArchitectPlayerController) \
	NO_API virtual ~ATheArchitectPlayerController();


#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectPlayerController_h_21_PROLOG
#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectPlayerController_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectPlayerController_h_24_INCLASS_NO_PURE_DECLS \
	FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectPlayerController_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheArchitectPlayerController;

// ********** End Class ATheArchitectPlayerController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
