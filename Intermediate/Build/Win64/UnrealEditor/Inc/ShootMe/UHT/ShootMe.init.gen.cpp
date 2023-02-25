// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootMe_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShootMe;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShootMe()
	{
		if (!Z_Registration_Info_UPackage__Script_ShootMe.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShootMe",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4023CACD,
				0xE6A592EB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShootMe.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShootMe.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShootMe(Z_Construct_UPackage__Script_ShootMe, TEXT("/Script/ShootMe"), Z_Registration_Info_UPackage__Script_ShootMe, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4023CACD, 0xE6A592EB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
