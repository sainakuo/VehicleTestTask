// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTestTask/VehicleTestTaskGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleTestTaskGameMode() {}
// Cross Module References
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_AVehicleTestTaskGameMode_NoRegister();
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_AVehicleTestTaskGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VehicleTestTask();
// End Cross Module References
	void AVehicleTestTaskGameMode::StaticRegisterNativesAVehicleTestTaskGameMode()
	{
	}
	UClass* Z_Construct_UClass_AVehicleTestTaskGameMode_NoRegister()
	{
		return AVehicleTestTaskGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleTestTaskGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicleTestTaskGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTestTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleTestTaskGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VehicleTestTaskGameMode.h" },
		{ "ModuleRelativePath", "VehicleTestTaskGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleTestTaskGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleTestTaskGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVehicleTestTaskGameMode_Statics::ClassParams = {
		&AVehicleTestTaskGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVehicleTestTaskGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleTestTaskGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicleTestTaskGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVehicleTestTaskGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVehicleTestTaskGameMode, 862377851);
	template<> VEHICLETESTTASK_API UClass* StaticClass<AVehicleTestTaskGameMode>()
	{
		return AVehicleTestTaskGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehicleTestTaskGameMode(Z_Construct_UClass_AVehicleTestTaskGameMode, &AVehicleTestTaskGameMode::StaticClass, TEXT("/Script/VehicleTestTask"), TEXT("AVehicleTestTaskGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleTestTaskGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
