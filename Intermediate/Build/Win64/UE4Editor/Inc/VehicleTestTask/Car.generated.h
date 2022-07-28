// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLETESTTASK_Car_generated_h
#error "Car.generated.h already included, missing '#pragma once' in Car.h"
#endif
#define VEHICLETESTTASK_Car_generated_h

#define VehicleTestTask__Source_VehicleTestTask_Car_h_14_SPARSE_DATA
#define VehicleTestTask__Source_VehicleTestTask_Car_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveForward);


#define VehicleTestTask__Source_VehicleTestTask_Car_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveForward);


#define VehicleTestTask__Source_VehicleTestTask_Car_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACar(); \
	friend struct Z_Construct_UClass_ACar_Statics; \
public: \
	DECLARE_CLASS(ACar, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleTestTask"), NO_API) \
	DECLARE_SERIALIZER(ACar)


#define VehicleTestTask__Source_VehicleTestTask_Car_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACar(); \
	friend struct Z_Construct_UClass_ACar_Statics; \
public: \
	DECLARE_CLASS(ACar, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleTestTask"), NO_API) \
	DECLARE_SERIALIZER(ACar)


#define VehicleTestTask__Source_VehicleTestTask_Car_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACar(ACar&&); \
	NO_API ACar(const ACar&); \
public:


#define VehicleTestTask__Source_VehicleTestTask_Car_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACar(ACar&&); \
	NO_API ACar(const ACar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACar)


#define VehicleTestTask__Source_VehicleTestTask_Car_h_14_PRIVATE_PROPERTY_OFFSET
#define VehicleTestTask__Source_VehicleTestTask_Car_h_11_PROLOG
#define VehicleTestTask__Source_VehicleTestTask_Car_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleTestTask__Source_VehicleTestTask_Car_h_14_PRIVATE_PROPERTY_OFFSET \
	VehicleTestTask__Source_VehicleTestTask_Car_h_14_SPARSE_DATA \
	VehicleTestTask__Source_VehicleTestTask_Car_h_14_RPC_WRAPPERS \
	VehicleTestTask__Source_VehicleTestTask_Car_h_14_INCLASS \
	VehicleTestTask__Source_VehicleTestTask_Car_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleTestTask__Source_VehicleTestTask_Car_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleTestTask__Source_VehicleTestTask_Car_h_14_PRIVATE_PROPERTY_OFFSET \
	VehicleTestTask__Source_VehicleTestTask_Car_h_14_SPARSE_DATA \
	VehicleTestTask__Source_VehicleTestTask_Car_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleTestTask__Source_VehicleTestTask_Car_h_14_INCLASS_NO_PURE_DECLS \
	VehicleTestTask__Source_VehicleTestTask_Car_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLETESTTASK_API UClass* StaticClass<class ACar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleTestTask__Source_VehicleTestTask_Car_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
