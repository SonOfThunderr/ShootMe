// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootMe/HandsAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandsAnimation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	SHOOTME_API UClass* Z_Construct_UClass_UHandsAnimation();
	SHOOTME_API UClass* Z_Construct_UClass_UHandsAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootMe();
// End Cross Module References
	void UHandsAnimation::StaticRegisterNativesUHandsAnimation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandsAnimation);
	UClass* Z_Construct_UClass_UHandsAnimation_NoRegister()
	{
		return UHandsAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UHandsAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHandsAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootMe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandsAnimation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HandsAnimation.h" },
		{ "ModuleRelativePath", "HandsAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandsAnimation_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "HandsAnimation" },
		{ "ModuleRelativePath", "HandsAnimation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandsAnimation_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHandsAnimation, speed), METADATA_PARAMS(Z_Construct_UClass_UHandsAnimation_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHandsAnimation_Statics::NewProp_speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandsAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandsAnimation_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHandsAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandsAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandsAnimation_Statics::ClassParams = {
		&UHandsAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHandsAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHandsAnimation_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHandsAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHandsAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHandsAnimation()
	{
		if (!Z_Registration_Info_UClass_UHandsAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandsAnimation.OuterSingleton, Z_Construct_UClass_UHandsAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHandsAnimation.OuterSingleton;
	}
	template<> SHOOTME_API UClass* StaticClass<UHandsAnimation>()
	{
		return UHandsAnimation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandsAnimation);
	UHandsAnimation::~UHandsAnimation() {}
	struct Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_HandsAnimation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_HandsAnimation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHandsAnimation, UHandsAnimation::StaticClass, TEXT("UHandsAnimation"), &Z_Registration_Info_UClass_UHandsAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandsAnimation), 3611111681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_HandsAnimation_h_3932975041(TEXT("/Script/ShootMe"),
		Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_HandsAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProyects_ShootMe_Source_ShootMe_HandsAnimation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
