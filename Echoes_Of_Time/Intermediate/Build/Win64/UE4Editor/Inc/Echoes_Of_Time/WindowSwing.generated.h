// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECHOES_OF_TIME_WindowSwing_generated_h
#error "WindowSwing.generated.h already included, missing '#pragma once' in WindowSwing.h"
#endif
#define ECHOES_OF_TIME_WindowSwing_generated_h

#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleWindow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleWindow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenWindow) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenWindow(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseWindow) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CloseWindow(Z_Param_dt); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleWindow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleWindow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenWindow) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenWindow(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseWindow) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CloseWindow(Z_Param_dt); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWindowSwing(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_AWindowSwing(); \
public: \
	DECLARE_CLASS(AWindowSwing, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(AWindowSwing) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWindowSwing(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_AWindowSwing(); \
public: \
	DECLARE_CLASS(AWindowSwing, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(AWindowSwing) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWindowSwing(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWindowSwing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWindowSwing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindowSwing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWindowSwing(AWindowSwing&&); \
	NO_API AWindowSwing(const AWindowSwing&); \
public:


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWindowSwing(AWindowSwing&&); \
	NO_API AWindowSwing(const AWindowSwing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWindowSwing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindowSwing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWindowSwing)


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_PRIVATE_PROPERTY_OFFSET
#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_9_PROLOG
#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_RPC_WRAPPERS \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_INCLASS \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_INCLASS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Echoes_Of_Time_Source_Echoes_Of_Time_WindowSwing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
