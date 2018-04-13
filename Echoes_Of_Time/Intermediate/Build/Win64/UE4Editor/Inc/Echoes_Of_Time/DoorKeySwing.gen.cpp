// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DoorKeySwing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorKeySwing() {}
// Cross Module References
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_ADoorKeySwing_NoRegister();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_ADoorKeySwing();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Echoes_Of_Time();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_ADoorKeySwing_CloseDoor();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_ADoorKeySwing_KeyMovement();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_ADoorKeySwing_OnActionKeyPressed();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_ADoorKey_NoRegister();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_ADoorKeySwing_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_ADoorKeySwing_OnOverlapEnd();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_ADoorKeySwing_OpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ADoorKeySwing::StaticRegisterNativesADoorKeySwing()
	{
		UClass* Class = ADoorKeySwing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", (Native)&ADoorKeySwing::execCloseDoor },
			{ "KeyMovement", (Native)&ADoorKeySwing::execKeyMovement },
			{ "OnActionKeyPressed", (Native)&ADoorKeySwing::execOnActionKeyPressed },
			{ "OnOverlapBegin", (Native)&ADoorKeySwing::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&ADoorKeySwing::execOnOverlapEnd },
			{ "OpenDoor", (Native)&ADoorKeySwing::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ADoorKeySwing_CloseDoor()
	{
		struct DoorKeySwing_eventCloseDoor_Parms
		{
			float dt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventCloseDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DoorKeySwing.h" },
				{ "ToolTip", "Functions for closing and opening doors" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKeySwing, "CloseDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(DoorKeySwing_eventCloseDoor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoorKeySwing_KeyMovement()
	{
		struct DoorKeySwing_eventKeyMovement_Parms
		{
			float dt;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((DoorKeySwing_eventKeyMovement_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DoorKeySwing_eventKeyMovement_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventKeyMovement_Parms, dt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DoorKeySwing.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKeySwing, "KeyMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(DoorKeySwing_eventKeyMovement_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoorKeySwing_OnActionKeyPressed()
	{
		struct DoorKeySwing_eventOnActionKeyPressed_Parms
		{
			ADoorKey* key;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key = { UE4CodeGen_Private::EPropertyClass::Object, "key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOnActionKeyPressed_Parms, key), Z_Construct_UClass_ADoorKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DoorKeySwing.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKeySwing, "OnActionKeyPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(DoorKeySwing_eventOnActionKeyPressed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoorKeySwing_OnOverlapBegin()
	{
		struct DoorKeySwing_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((DoorKeySwing_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DoorKeySwing_eventOnOverlapBegin_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(NewProp_OverlappedComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DoorKeySwing.h" },
				{ "ToolTip", "Overlap Events" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKeySwing, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(DoorKeySwing_eventOnOverlapBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoorKeySwing_OnOverlapEnd()
	{
		struct DoorKeySwing_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(NewProp_OverlappedComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DoorKeySwing.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKeySwing, "OnOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(DoorKeySwing_eventOnOverlapEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoorKeySwing_OpenDoor()
	{
		struct DoorKeySwing_eventOpenDoor_Parms
		{
			float dt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKeySwing_eventOpenDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DoorKeySwing.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKeySwing, "OpenDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(DoorKeySwing_eventOpenDoor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoorKeySwing_NoRegister()
	{
		return ADoorKeySwing::StaticClass();
	}
	UClass* Z_Construct_UClass_ADoorKeySwing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Echoes_Of_Time,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADoorKeySwing_CloseDoor, "CloseDoor" }, // 3052111215
				{ &Z_Construct_UFunction_ADoorKeySwing_KeyMovement, "KeyMovement" }, // 1470828792
				{ &Z_Construct_UFunction_ADoorKeySwing_OnActionKeyPressed, "OnActionKeyPressed" }, // 635007530
				{ &Z_Construct_UFunction_ADoorKeySwing_OnOverlapBegin, "OnOverlapBegin" }, // 3323479562
				{ &Z_Construct_UFunction_ADoorKeySwing_OnOverlapEnd, "OnOverlapEnd" }, // 4276711659
				{ &Z_Construct_UFunction_ADoorKeySwing_OpenDoor, "OpenDoor" }, // 2480539079
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DoorKeySwing.h" },
				{ "ModuleRelativePath", "DoorKeySwing.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[] = {
				{ "Category", "Box Comps" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorKeySwing.h" },
				{ "ToolTip", "Pointer Box Component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp = { UE4CodeGen_Private::EPropertyClass::Object, "boxComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ADoorKeySwing, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_boxComp_MetaData, ARRAY_COUNT(NewProp_boxComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyEndPoint_MetaData[] = {
				{ "Category", "Box Comps" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorKeySwing.h" },
				{ "ToolTip", "Pointer to door 2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_keyEndPoint = { UE4CodeGen_Private::EPropertyClass::Object, "keyEndPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ADoorKeySwing, keyEndPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_keyEndPoint_MetaData, ARRAY_COUNT(NewProp_keyEndPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyStartPoint_MetaData[] = {
				{ "Category", "Box Comps" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorKeySwing.h" },
				{ "ToolTip", "Pointer to door 2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_keyStartPoint = { UE4CodeGen_Private::EPropertyClass::Object, "keyStartPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ADoorKeySwing, keyStartPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_keyStartPoint_MetaData, ARRAY_COUNT(NewProp_keyStartPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorLeft_MetaData[] = {
				{ "Category", "Box Comps" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorKeySwing.h" },
				{ "ToolTip", "Pointer to door 2" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_doorLeft = { UE4CodeGen_Private::EPropertyClass::Object, "doorLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ADoorKeySwing, doorLeft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_doorLeft_MetaData, ARRAY_COUNT(NewProp_doorLeft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorRight_MetaData[] = {
				{ "Category", "Box Comps" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorKeySwing.h" },
				{ "ToolTip", "Pointer to door component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_doorRight = { UE4CodeGen_Private::EPropertyClass::Object, "doorRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ADoorKeySwing, doorRight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_doorRight_MetaData, ARRAY_COUNT(NewProp_doorRight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[] = {
				{ "Category", "Box Comps" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorKeySwing.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root = { UE4CodeGen_Private::EPropertyClass::Object, "root", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ADoorKeySwing, root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_root_MetaData, ARRAY_COUNT(NewProp_root_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_boxComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_keyEndPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_keyStartPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_doorLeft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_doorRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_root,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADoorKeySwing>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADoorKeySwing::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoorKeySwing, 438081752);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorKeySwing(Z_Construct_UClass_ADoorKeySwing, &ADoorKeySwing::StaticClass, TEXT("/Script/Echoes_Of_Time"), TEXT("ADoorKeySwing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorKeySwing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
