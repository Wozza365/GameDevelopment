// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADoorSwing;
#ifdef ECHOES_OF_TIME_DoorKey_generated_h
#error "DoorKey.generated.h already included, missing '#pragma once' in DoorKey.h"
#endif
#define ECHOES_OF_TIME_DoorKey_generated_h

#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapWithDoors) \
	{ \
		P_GET_OBJECT(ADoorSwing,Z_Param_doorActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapWithDoors(Z_Param_doorActor); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapWithDoors) \
	{ \
		P_GET_OBJECT(ADoorSwing,Z_Param_doorActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapWithDoors(Z_Param_doorActor); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorKey(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_ADoorKey(); \
public: \
	DECLARE_CLASS(ADoorKey, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(ADoorKey) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADoorKey(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_ADoorKey(); \
public: \
	DECLARE_CLASS(ADoorKey, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(ADoorKey) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorKey(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorKey); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorKey(ADoorKey&&); \
	NO_API ADoorKey(const ADoorKey&); \
public:


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorKey(ADoorKey&&); \
	NO_API ADoorKey(const ADoorKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorKey); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorKey); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorKey)


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_PRIVATE_PROPERTY_OFFSET
#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_9_PROLOG
#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_RPC_WRAPPERS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_INCLASS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_INCLASS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Echoes_Of_Time_Source_Echoes_Of_Time_DoorKey_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
