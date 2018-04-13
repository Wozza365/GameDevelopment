// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOneValve;
class AActor;
#ifdef ECHOES_OF_TIME_ValveControl_generated_h
#error "ValveControl.generated.h already included, missing '#pragma once' in ValveControl.h"
#endif
#define ECHOES_OF_TIME_ValveControl_generated_h

#define Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapEnd) \
	{ \
		P_GET_OBJECT(AOneValve,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverlapEnd(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverlapBegin(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAction(); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapEnd) \
	{ \
		P_GET_OBJECT(AOneValve,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverlapEnd(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverlapBegin(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAction(); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUValveControl(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_UValveControl(); \
public: \
	DECLARE_CLASS(UValveControl, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(UValveControl) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUValveControl(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_UValveControl(); \
public: \
	DECLARE_CLASS(UValveControl, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(UValveControl) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UValveControl(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UValveControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UValveControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UValveControl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UValveControl(UValveControl&&); \
	NO_API UValveControl(const UValveControl&); \
public:


#define Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UValveControl(UValveControl&&); \
	NO_API UValveControl(const UValveControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UValveControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UValveControl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UValveControl)


#define Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_PRIVATE_PROPERTY_OFFSET
#define Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_10_PROLOG
#define Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_RPC_WRAPPERS \
	Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_INCLASS \
	Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_INCLASS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Echoes_Of_Time_Source_Echoes_Of_Time_ValveControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
