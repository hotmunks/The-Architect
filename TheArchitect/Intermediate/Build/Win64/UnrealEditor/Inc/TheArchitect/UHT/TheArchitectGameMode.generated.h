// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheArchitectGameMode.h"

#ifdef THEARCHITECT_TheArchitectGameMode_generated_h
#error "TheArchitectGameMode.generated.h already included, missing '#pragma once' in TheArchitectGameMode.h"
#endif
#define THEARCHITECT_TheArchitectGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATheArchitectGameMode ****************************************************
struct Z_Construct_UClass_ATheArchitectGameMode_Statics;
THEARCHITECT_API UClass* Z_Construct_UClass_ATheArchitectGameMode_NoRegister();

#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheArchitectGameMode(); \
	friend struct ::Z_Construct_UClass_ATheArchitectGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEARCHITECT_API UClass* ::Z_Construct_UClass_ATheArchitectGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheArchitectGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheArchitect"), Z_Construct_UClass_ATheArchitectGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATheArchitectGameMode)


#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheArchitectGameMode(ATheArchitectGameMode&&) = delete; \
	ATheArchitectGameMode(const ATheArchitectGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheArchitectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheArchitectGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATheArchitectGameMode) \
	NO_API virtual ~ATheArchitectGameMode();


#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h_14_PROLOG
#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheArchitectGameMode;

// ********** End Class ATheArchitectGameMode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
