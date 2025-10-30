// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TheArchitectCharacter.h"

#ifdef THEARCHITECT_TheArchitectCharacter_generated_h
#error "TheArchitectCharacter.generated.h already included, missing '#pragma once' in TheArchitectCharacter.h"
#endif
#define THEARCHITECT_TheArchitectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATheArchitectCharacter ***************************************************
struct Z_Construct_UClass_ATheArchitectCharacter_Statics;
THEARCHITECT_API UClass* Z_Construct_UClass_ATheArchitectCharacter_NoRegister();

#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheArchitectCharacter(); \
	friend struct ::Z_Construct_UClass_ATheArchitectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THEARCHITECT_API UClass* ::Z_Construct_UClass_ATheArchitectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATheArchitectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheArchitect"), Z_Construct_UClass_ATheArchitectCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATheArchitectCharacter)


#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectCharacter_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATheArchitectCharacter(ATheArchitectCharacter&&) = delete; \
	ATheArchitectCharacter(const ATheArchitectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheArchitectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheArchitectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATheArchitectCharacter) \
	NO_API virtual ~ATheArchitectCharacter();


#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectCharacter_h_15_PROLOG
#define FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATheArchitectCharacter;

// ********** End Class ATheArchitectCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
