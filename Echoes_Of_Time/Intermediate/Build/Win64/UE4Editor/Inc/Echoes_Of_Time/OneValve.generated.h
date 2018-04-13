// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECHOES_OF_TIME_OneValve_generated_h
#error "OneValve.generated.h already included, missing '#pragma once' in OneValve.h"
#endif
#define ECHOES_OF_TIME_OneValve_generated_h

#define Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseValve) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CloseValve(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleValve) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleValve(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenValve) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenValve(Z_Param_dt); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseValve) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CloseValve(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleValve) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleValve(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenValve) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenValve(Z_Param_dt); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOneValve(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_AOneValve(); \
public: \
	DECLARE_CLASS(AOneValve, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(AOneValve) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOneValve(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_AOneValve(); \
public: \
	DECLARE_CLASS(AOneValve, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(AOneValve) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOneValve(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOneValve) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOneValve); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOneValve); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOneValve(AOneValve&&); \
	NO_API AOneValve(const AOneValve&); \
public:


#define Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOneValve(AOneValve&&); \
	NO_API AOneValve(const AOneValve&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOneValve); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOneValve); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOneValve)


#define Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_PRIVATE_PROPERTY_OFFSET
#define Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_9_PROLOG
#define Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_RPC_WRAPPERS \
	Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_INCLASS \
	Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_INCLASS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Echoes_Of_Time_Source_Echoes_Of_Time_OneValve_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
