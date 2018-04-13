// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DoorSwing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorSwing() {}
// Cross Module References
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_ADoorSwing_NoRegister();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_ADoorSwing();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Echoes_Of_Time();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_ADoorSwing_CloseDoor();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_ADoorSwing_OpenDoor();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_ADoorSwing_ToggleDoor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ADoorSwing::StaticRegisterNativesADoorSwing()
	{
		UClass* Class = ADoorSwing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", (Native)&ADoorSwing::execCloseDoor },
			{ "OpenDoor", (Native)&ADoorSwing::execOpenDoor },
			{ "ToggleDoor", (Native)&ADoorSwing::execToggleDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ADoorSwing_CloseDoor()
	{
		struct DoorSwing_eventCloseDoor_Parms
		{
			float dt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorSwing_eventCloseDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DoorSwing.h" },
				{ "ToolTip", "Functions for closing and opening doors" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorSwing, "CloseDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(DoorSwing_eventCloseDoor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoorSwing_OpenDoor()
	{
		struct DoorSwing_eventOpenDoor_Parms
		{
			float dt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorSwing_eventOpenDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DoorSwing.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorSwing, "OpenDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(DoorSwing_eventOpenDoor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoorSwing_ToggleDoor()
	{
		struct DoorSwing_eventToggleDoor_Parms
		{
			FVector forwardVector;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_forwardVector = { UE4CodeGen_Private::EPropertyClass::Struct, "forwardVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorSwing_eventToggleDoor_Parms, forwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_forwardVector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "DoorSwing.h" },
				{ "ToolTip", "Main Logic" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorSwing, "ToggleDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(DoorSwing_eventToggleDoor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoorSwing_NoRegister()
	{
		return ADoorSwing::StaticClass();
	}
	UClass* Z_Construct_UClass_ADoorSwing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Echoes_Of_Time,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADoorSwing_CloseDoor, "CloseDoor" }, // 3925538238
				{ &Z_Construct_UFunction_ADoorSwing_OpenDoor, "OpenDoor" }, // 2876019839
				{ &Z_Construct_UFunction_ADoorSwing_ToggleDoor, "ToggleDoor" }, // 1718801240
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DoorSwing.h" },
				{ "ModuleRelativePath", "DoorSwing.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[] = {
				{ "Category", "Box Comps" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorSwing.h" },
				{ "ToolTip", "Pointer Box Component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp = { UE4CodeGen_Private::EPropertyClass::Object, "boxComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ADoorSwing, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_boxComp_MetaData, ARRAY_COUNT(NewProp_boxComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_boxComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADoorSwing>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADoorSwing::StaticClass,
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
	IMPLEMENT_CLASS(ADoorSwing, 457155581);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorSwing(Z_Construct_UClass_ADoorSwing, &ADoorSwing::StaticClass, TEXT("/Script/Echoes_Of_Time"), TEXT("ADoorSwing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorSwing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
