// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleTestTask/Car.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCar() {}
// Cross Module References
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_ACar_NoRegister();
	VEHICLETESTTASK_API UClass* Z_Construct_UClass_ACar();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VehicleTestTask();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACar::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Scale);
		P_NATIVE_END;
	}
	void ACar::StaticRegisterNativesACar()
	{
		UClass* Class = ACar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &ACar::execMoveForward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACar_MoveForward_Statics
	{
		struct Car_eventMoveForward_Parms
		{
			float Scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACar_MoveForward_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Car_eventMoveForward_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACar_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACar_MoveForward_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACar_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACar_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACar, nullptr, "MoveForward", nullptr, nullptr, sizeof(Car_eventMoveForward_Parms), Z_Construct_UFunction_ACar_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACar_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACar_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACar_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACar_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACar_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACar_NoRegister()
	{
		return ACar::StaticClass();
	}
	struct Z_Construct_UClass_ACar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MovementTypeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPointTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetPointTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEffectMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEffectMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEffectBreak_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEffectBreak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEffectStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEffectStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarSpawnEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarSpawnEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarMoveEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarMoveEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarBreakEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarBreakEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleTestTask,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACar_MoveForward, "MoveForward" }, // 3710396769
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Car.h" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement|Speed" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_MovementTypeIndex_MetaData[] = {
		{ "Category", "Movement|TypeIndex" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_MovementTypeIndex = { "MovementTypeIndex", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, MovementTypeIndex), METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_MovementTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_MovementTypeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_TargetPointTag_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// 0 - forward, 1 - forward and stop, 2 - forward and back\n" },
		{ "ModuleRelativePath", "Car.h" },
		{ "ToolTip", "0 - forward, 1 - forward and stop, 2 - forward and back" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACar_Statics::NewProp_TargetPointTag = { "TargetPointTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, TargetPointTag), METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_TargetPointTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_TargetPointTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectMove_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectMove = { "AudioEffectMove", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, AudioEffectMove), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectBreak_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectBreak = { "AudioEffectBreak", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, AudioEffectBreak), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectBreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectStart_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectStart = { "AudioEffectStart", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, AudioEffectStart), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_CarSpawnEffect_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_CarSpawnEffect = { "CarSpawnEffect", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, CarSpawnEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_CarSpawnEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_CarSpawnEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_CarMoveEffect_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_CarMoveEffect = { "CarMoveEffect", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, CarMoveEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_CarMoveEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_CarMoveEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::NewProp_CarBreakEffect_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_CarBreakEffect = { "CarBreakEffect", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACar, CarBreakEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::NewProp_CarBreakEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::NewProp_CarBreakEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_MovementTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_TargetPointTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectBreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_AudioEffectStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_CarSpawnEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_CarMoveEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_CarBreakEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACar_Statics::ClassParams = {
		&ACar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACar, 3668188418);
	template<> VEHICLETESTTASK_API UClass* StaticClass<ACar>()
	{
		return ACar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACar(Z_Construct_UClass_ACar, &ACar::StaticClass, TEXT("/Script/VehicleTestTask"), TEXT("ACar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
