// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWindowSwing;
class AActor;
#ifdef ECHOES_OF_TIME_WindowController_generated_h
#error "WindowController.generated.h already included, missing '#pragma once' in WindowController.h"
#endif
#define ECHOES_OF_TIME_WindowController_generated_h

#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AWindowSwing,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AWindowSwing,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowController(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_UWindowController(); \
public: \
	DECLARE_CLASS(UWindowController, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(UWindowController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWindowController(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_UWindowController(); \
public: \
	DECLARE_CLASS(UWindowController, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(UWindowController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowController(UWindowController&&); \
	NO_API UWindowController(const UWindowController&); \
public:


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowController(UWindowController&&); \
	NO_API UWindowController(const UWindowController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWindowController)


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_PRIVATE_PROPERTY_OFFSET
#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_10_PROLOG
#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_RPC_WRAPPERS \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_INCLASS \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_INCLASS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Echoes_Of_Time_Source_Echoes_Of_Time_WindowController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
