// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheArchitect_init() {}
	THEARCHITECT_API UFunction* Z_Construct_UDelegateFunction_TheArchitect_OnUnitMoveCompletedDelegate__DelegateSignature();
static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TheArchitect;
FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TheArchitect()
{
	if (!Z_Registration_Info_UPackage__Script_TheArchitect.OuterSingleton)
	{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_TheArchitect_OnUnitMoveCompletedDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/TheArchitect",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x176F202B,
			0xFC7A64CD,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TheArchitect.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_TheArchitect.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TheArchitect(Z_Construct_UPackage__Script_TheArchitect, TEXT("/Script/TheArchitect"), Z_Registration_Info_UPackage__Script_TheArchitect, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x176F202B, 0xFC7A64CD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
