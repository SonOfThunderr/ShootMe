// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootMe/MyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SHOOTME_API UClass* Z_Construct_UClass_AMyCharacter();
	SHOOTME_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootMe();
// End Cross Module References
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacter);
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_arms_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_arms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootMe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyCharacter, rotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_rotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_rotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_cam_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_cam = { "cam", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyCharacter, cam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_cam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_cam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_arms_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_arms = { "arms", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyCharacter, arms), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_arms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_arms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_weapon_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyCharacter, weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_weapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_rotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_cam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_arms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_weapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
		&AMyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
	}
	template<> SHOOTME_API UClass* StaticClass<AMyCharacter>()
	{
		return AMyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
	AMyCharacter::~AMyCharacter() {}
	struct Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_MyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_MyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 2236783649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_MyCharacter_h_2533180183(TEXT("/Script/ShootMe"),
		Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_MyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_MyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
