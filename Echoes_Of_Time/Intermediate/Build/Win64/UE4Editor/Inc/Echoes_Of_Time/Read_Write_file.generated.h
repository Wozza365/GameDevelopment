// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECHOES_OF_TIME_Read_Write_file_generated_h
#error "Read_Write_file.generated.h already included, missing '#pragma once' in Read_Write_file.h"
#endif
#define ECHOES_OF_TIME_Read_Write_file_generated_h

#define Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URead_Write_file::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URead_Write_file::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URead_Write_file::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URead_Write_file::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURead_Write_file(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_URead_Write_file(); \
public: \
	DECLARE_CLASS(URead_Write_file, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(URead_Write_file) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURead_Write_file(); \
	friend ECHOES_OF_TIME_API class UClass* Z_Construct_UClass_URead_Write_file(); \
public: \
	DECLARE_CLASS(URead_Write_file, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Echoes_Of_Time"), NO_API) \
	DECLARE_SERIALIZER(URead_Write_file) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URead_Write_file(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URead_Write_file) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URead_Write_file); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URead_Write_file); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URead_Write_file(URead_Write_file&&); \
	NO_API URead_Write_file(const URead_Write_file&); \
public:


#define Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URead_Write_file(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URead_Write_file(URead_Write_file&&); \
	NO_API URead_Write_file(const URead_Write_file&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URead_Write_file); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URead_Write_file); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URead_Write_file)


#define Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_PRIVATE_PROPERTY_OFFSET
#define Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_12_PROLOG
#define Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_RPC_WRAPPERS \
	Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_INCLASS \
	Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_PRIVATE_PROPERTY_OFFSET \
	Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_INCLASS_NO_PURE_DECLS \
	Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Echoes_Of_Time_Source_Echoes_Of_Time_Read_Write_file_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
