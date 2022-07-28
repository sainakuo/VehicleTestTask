// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTestTask/Garage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGarage() {}
// Cross Module References
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_AGarage_NoRegister();
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_AGarage();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VehicleTestTask();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_ACar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGarage::execOnCarSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCarSpawn();
		P_NATIVE_END;
	}
	void AGarage::StaticRegisterNativesAGarage()
	{
		UClass* Class = AGarage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCarSpawn", &AGarage::execOnCarSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGarage_OnCarSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGarage_OnCarSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Garage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGarage_OnCarSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGarage, nullptr, "OnCarSpawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGarage_OnCarSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGarage_OnCarSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGarage_OnCarSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGarage_OnCarSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGarage_NoRegister()
	{
		return AGarage::StaticClass();
	}
	struct Z_Construct_UClass_AGarage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildingMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CarClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPointTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetPointTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGarage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTestTask,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGarage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGarage_OnCarSpawn, "OnCarSpawn" }, // 1008754030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGarage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Garage.h" },
		{ "ModuleRelativePath", "Garage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGarage_Statics::NewProp_BuildingMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Garage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGarage_Statics::NewProp_BuildingMesh = { "BuildingMesh", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGarage, BuildingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGarage_Statics::NewProp_BuildingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGarage_Statics::NewProp_BuildingMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGarage_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Garage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGarage_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGarage, SpawnPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGarage_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGarage_Statics::NewProp_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGarage_Statics::NewProp_CarClass_MetaData[] = {
		{ "Category", "Car" },
		{ "ModuleRelativePath", "Garage.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGarage_Statics::NewProp_CarClass = { "CarClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGarage, CarClass), Z_Construct_UClass_ACar_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGarage_Statics::NewProp_CarClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGarage_Statics::NewProp_CarClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGarage_Statics::NewProp_TargetPointTag_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Garage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGarage_Statics::NewProp_TargetPointTag = { "TargetPointTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGarage, TargetPointTag), METADATA_PARAMS(Z_Construct_UClass_AGarage_Statics::NewProp_TargetPointTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGarage_Statics::NewProp_TargetPointTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGarage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGarage_Statics::NewProp_BuildingMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGarage_Statics::NewProp_SpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGarage_Statics::NewProp_CarClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGarage_Statics::NewProp_TargetPointTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGarage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGarage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGarage_Statics::ClassParams = {
		&AGarage::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGarage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGarage_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGarage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGarage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGarage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGarage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGarage, 3699541877);
	template<> VEHICLETESTTASK_API UClass* StaticClass<AGarage>()
	{
		return AGarage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGarage(Z_Construct_UClass_AGarage, &AGarage::StaticClass, TEXT("/Script/VehicleTestTask"), TEXT("AGarage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGarage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
