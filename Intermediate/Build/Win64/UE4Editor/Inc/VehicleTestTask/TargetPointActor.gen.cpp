// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTestTask/TargetPointActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetPointActor() {}
// Cross Module References
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_ATargetPointActor_NoRegister();
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_ATargetPointActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VehicleTestTask();
// End Cross Module References
	void ATargetPointActor::StaticRegisterNativesATargetPointActor()
	{
	}
	UClass* Z_Construct_UClass_ATargetPointActor_NoRegister()
	{
		return ATargetPointActor::StaticClass();
	}
	struct Z_Construct_UClass_ATargetPointActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetPointActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTestTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPointActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TargetPointActor.h" },
		{ "ModuleRelativePath", "TargetPointActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetPointActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetPointActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATargetPointActor_Statics::ClassParams = {
		&ATargetPointActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetPointActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPointActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetPointActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATargetPointActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATargetPointActor, 1327165752);
	template<> VEHICLETESTTASK_API UClass* StaticClass<ATargetPointActor>()
	{
		return ATargetPointActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATargetPointActor(Z_Construct_UClass_ATargetPointActor, &ATargetPointActor::StaticClass, TEXT("/Script/VehicleTestTask"), TEXT("ATargetPointActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetPointActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
