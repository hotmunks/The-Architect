// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheArchitectGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTheArchitectGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THEARCHITECT_API UClass* Z_Construct_UClass_ATheArchitectGameMode();
THEARCHITECT_API UClass* Z_Construct_UClass_ATheArchitectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheArchitect();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATheArchitectGameMode ****************************************************
void ATheArchitectGameMode::StaticRegisterNativesATheArchitectGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATheArchitectGameMode;
UClass* ATheArchitectGameMode::GetPrivateStaticClass()
{
	using TClass = ATheArchitectGameMode;
	if (!Z_Registration_Info_UClass_ATheArchitectGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TheArchitectGameMode"),
			Z_Registration_Info_UClass_ATheArchitectGameMode.InnerSingleton,
			StaticRegisterNativesATheArchitectGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATheArchitectGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATheArchitectGameMode_NoRegister()
{
	return ATheArchitectGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATheArchitectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheArchitectGameMode.h" },
		{ "ModuleRelativePath", "TheArchitectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheArchitectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATheArchitectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheArchitect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheArchitectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheArchitectGameMode_Statics::ClassParams = {
	&ATheArchitectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheArchitectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheArchitectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheArchitectGameMode()
{
	if (!Z_Registration_Info_UClass_ATheArchitectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheArchitectGameMode.OuterSingleton, Z_Construct_UClass_ATheArchitectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheArchitectGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATheArchitectGameMode);
ATheArchitectGameMode::~ATheArchitectGameMode() {}
// ********** End Class ATheArchitectGameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h__Script_TheArchitect_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheArchitectGameMode, ATheArchitectGameMode::StaticClass, TEXT("ATheArchitectGameMode"), &Z_Registration_Info_UClass_ATheArchitectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheArchitectGameMode), 2448802170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h__Script_TheArchitect_283116457(TEXT("/Script/TheArchitect"),
	Z_CompiledInDeferFile_FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h__Script_TheArchitect_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The_Architect_TheArchitect_Source_TheArchitect_TheArchitectGameMode_h__Script_TheArchitect_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
