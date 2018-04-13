// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADoorKeySwing;
class UPhysicsHandleComponent;
class AActor;
#ifdef ECHOES_OF_TIME_DoorKeyControl_generated_h
#error "DoorKeyControl.generated.h already included, missing '#pragma once' in DoorKeyControl.h"
#endif
#define ECHOES_OF_TIME_DoorKeyControl_generated_h

#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(ADoorKeySwing,Z_Param_door); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_door); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKeyPressed) \
	{ \
		P_GET_OBJECT(UPhysicsHandleComponent,Z_Param_physicsHandle); \
		P_GET_OBJECT(AActor,Z_Param_actorHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OnKeyPressed(Z_Param_physicsHandle,Z_Param_actorHeld); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(ADoorKeySwing,Z_Param_door); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_door); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnKeyPressed) \
	{ \
		P_GET_OBJECT(UPhysicsHandleComponent,Z_Param_physicsHandle); \
		P_GET_OBJECT(AActor,Z_Param_actorHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OnKeyPressed(Z_Param_physicsHandle,Z_Param_actorHeld); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorKeyControl(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_UDoorKeyControl(); \
public: \
	DECLARE_CLASS(UDoorKeyControl, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(UDoorKeyControl) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDoorKeyControl(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_UDoorKeyControl(); \
public: \
	DECLARE_CLASS(UDoorKeyControl, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(UDoorKeyControl) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorKeyControl(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorKeyControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorKeyControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorKeyControl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorKeyControl(UDoorKeyControl&&); \
	NO_API UDoorKeyControl(const UDoorKeyControl&); \
public:


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorKeyControl(UDoorKeyControl&&); \
	NO_API UDoorKeyControl(const UDoorKeyControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorKeyControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorKeyControl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorKeyControl)


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_PRIVATE_PROPERTY_OFFSET
#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_10_PROLOG
#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_RPC_WRAPPERS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_INCLASS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_INCLASS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Echoes_Of_Time_Source_Echoes_Of_Time_DoorKeyControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
