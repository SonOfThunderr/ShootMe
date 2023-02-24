// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootMe/ShootMeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootMeGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHOOTME_API UClass* Z_Construct_UClass_AShootMeGameModeBase();
	SHOOTME_API UClass* Z_Construct_UClass_AShootMeGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootMe();
// End Cross Module References
	void AShootMeGameModeBase::StaticRegisterNativesAShootMeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootMeGameModeBase);
	UClass* Z_Construct_UClass_AShootMeGameModeBase_NoRegister()
	{
		return AShootMeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShootMeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootMeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootMe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootMeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShootMeGameModeBase.h" },
		{ "ModuleRelativePath", "ShootMeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootMeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootMeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootMeGameModeBase_Statics::ClassParams = {
		&AShootMeGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShootMeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootMeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootMeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AShootMeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootMeGameModeBase.OuterSingleton, Z_Construct_UClass_AShootMeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootMeGameModeBase.OuterSingleton;
	}
	template<> SHOOTME_API UClass* StaticClass<AShootMeGameModeBase>()
	{
		return AShootMeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootMeGameModeBase);
	AShootMeGameModeBase::~AShootMeGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_ShootMeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_ShootMeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootMeGameModeBase, AShootMeGameModeBase::StaticClass, TEXT("AShootMeGameModeBase"), &Z_Registration_Info_UClass_AShootMeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootMeGameModeBase), 2394714678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_ShootMeGameModeBase_h_4131257364(TEXT("/Script/ShootMe"),
		Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_ShootMeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_ShootMeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
