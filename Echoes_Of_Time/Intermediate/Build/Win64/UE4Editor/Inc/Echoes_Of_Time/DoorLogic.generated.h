// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADoorSwing;
class UCameraComponent;
class AActor;
#ifdef ECHOES_OF_TIME_DoorLogic_generated_h
#error "DoorLogic.generated.h already included, missing '#pragma once' in DoorLogic.h"
#endif
#define ECHOES_OF_TIME_DoorLogic_generated_h

#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ADoorSwing**)Z_Param__Result=this->GetCurrentDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAction) \
	{ \
		P_GET_OBJECT(UCameraComponent,Z_Param_camComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAction(Z_Param_camComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(ADoorSwing,Z_Param_other); \
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


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ADoorSwing**)Z_Param__Result=this->GetCurrentDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAction) \
	{ \
		P_GET_OBJECT(UCameraComponent,Z_Param_camComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnAction(Z_Param_camComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(ADoorSwing,Z_Param_other); \
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


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorLogic(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_UDoorLogic(); \
public: \
	DECLARE_CLASS(UDoorLogic, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(UDoorLogic) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDoorLogic(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_UDoorLogic(); \
public: \
	DECLARE_CLASS(UDoorLogic, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(UDoorLogic) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorLogic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorLogic(UDoorLogic&&); \
	NO_API UDoorLogic(const UDoorLogic&); \
public:


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorLogic(UDoorLogic&&); \
	NO_API UDoorLogic(const UDoorLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorLogic)


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerCapsule() { return STRUCT_OFFSET(UDoorLogic, TriggerCapsule); }


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_11_PROLOG
#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_RPC_WRAPPERS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_INCLASS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_INCLASS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Echoes_Of_Time_Source_Echoes_Of_Time_DoorLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
