// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTestTask/CarAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarAIController() {}
// Cross Module References
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_ACarAIController_NoRegister();
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_ACarAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_VehicleTestTask();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_ACar_NoRegister();
// End Cross Module References
	void ACarAIController::StaticRegisterNativesACarAIController()
	{
	}
	UClass* Z_Construct_UClass_ACarAIController_NoRegister()
	{
		return ACarAIController::StaticClass();
	}
	struct Z_Construct_UClass_ACarAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPointTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetPointTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPointVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPointVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementAccuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Car_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Car;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTestTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CarAIController.h" },
		{ "ModuleRelativePath", "CarAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarAIController_Statics::NewProp_TargetPointTag_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "CarAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACarAIController_Statics::NewProp_TargetPointTag = { "TargetPointTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarAIController, TargetPointTag), METADATA_PARAMS(Z_Construct_UClass_ACarAIController_Statics::NewProp_TargetPointTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarAIController_Statics::NewProp_TargetPointTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarAIController_Statics::NewProp_TargetPointVector_MetaData[] = {
		{ "Category", "AI|Move" },
		{ "MekeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "CarAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACarAIController_Statics::NewProp_TargetPointVector = { "TargetPointVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarAIController, TargetPointVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACarAIController_Statics::NewProp_TargetPointVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarAIController_Statics::NewProp_TargetPointVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarAIController_Statics::NewProp_MovementAccuracy_MetaData[] = {
		{ "Category", "AI|Move" },
		{ "ModuleRelativePath", "CarAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarAIController_Statics::NewProp_MovementAccuracy = { "MovementAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarAIController, MovementAccuracy), METADATA_PARAMS(Z_Construct_UClass_ACarAIController_Statics::NewProp_MovementAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarAIController_Statics::NewProp_MovementAccuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarAIController_Statics::NewProp_Car_MetaData[] = {
		{ "ModuleRelativePath", "CarAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarAIController_Statics::NewProp_Car = { "Car", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarAIController, Car), Z_Construct_UClass_ACar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarAIController_Statics::NewProp_Car_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarAIController_Statics::NewProp_Car_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACarAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarAIController_Statics::NewProp_TargetPointTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarAIController_Statics::NewProp_TargetPointVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarAIController_Statics::NewProp_MovementAccuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarAIController_Statics::NewProp_Car,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACarAIController_Statics::ClassParams = {
		&ACarAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACarAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACarAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACarAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACarAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarAIController, 4024820299);
	template<> VEHICLETESTTASK_API UClass* StaticClass<ACarAIController>()
	{
		return ACarAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarAIController(Z_Construct_UClass_ACarAIController, &ACarAIController::StaticClass, TEXT("/Script/VehicleTestTask"), TEXT("ACarAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
