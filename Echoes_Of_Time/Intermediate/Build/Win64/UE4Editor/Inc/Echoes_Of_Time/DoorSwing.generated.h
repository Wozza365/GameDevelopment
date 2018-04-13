// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ECHOES_OF_TIME_DoorSwing_generated_h
#error "DoorSwing.generated.h already included, missing '#pragma once' in DoorSwing.h"
#endif
#define ECHOES_OF_TIME_DoorSwing_generated_h

#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleDoor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_forwardVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleDoor(Z_Param_forwardVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenDoor(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CloseDoor(Z_Param_dt); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleDoor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_forwardVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleDoor(Z_Param_forwardVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenDoor(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CloseDoor(Z_Param_dt); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorSwing(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_ADoorSwing(); \
public: \
	DECLARE_CLASS(ADoorSwing, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(ADoorSwing) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADoorSwing(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_ADoorSwing(); \
public: \
	DECLARE_CLASS(ADoorSwing, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(ADoorSwing) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorSwing(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorSwing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorSwing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorSwing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorSwing(ADoorSwing&&); \
	NO_API ADoorSwing(const ADoorSwing&); \
public:


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorSwing(ADoorSwing&&); \
	NO_API ADoorSwing(const ADoorSwing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorSwing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorSwing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorSwing)


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_PRIVATE_PROPERTY_OFFSET
#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_9_PROLOG
#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_RPC_WRAPPERS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_INCLASS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_INCLASS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Echoes_Of_Time_Source_Echoes_Of_Time_DoorSwing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
