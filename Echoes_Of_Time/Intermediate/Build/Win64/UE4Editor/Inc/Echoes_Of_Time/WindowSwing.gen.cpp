// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WindowSwing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowSwing() {}
// Cross Module References
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_AWindowSwing_NoRegister();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_AWindowSwing();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Echoes_Of_Time();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_AWindowSwing_CloseWindow();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_AWindowSwing_OpenWindow();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_AWindowSwing_ToggleWindow();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWindowSwing::StaticRegisterNativesAWindowSwing()
	{
		UClass* Class = AWindowSwing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseWindow", (Native)&AWindowSwing::execCloseWindow },
			{ "OpenWindow", (Native)&AWindowSwing::execOpenWindow },
			{ "ToggleWindow", (Native)&AWindowSwing::execToggleWindow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AWindowSwing_CloseWindow()
	{
		struct WindowSwing_eventCloseWindow_Parms
		{
			float dt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WindowSwing_eventCloseWindow_Parms, dt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "WindowSwing.h" },
				{ "ToolTip", "Functions for closing and opening doors" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindowSwing, "CloseWindow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(WindowSwing_eventCloseWindow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWindowSwing_OpenWindow()
	{
		struct WindowSwing_eventOpenWindow_Parms
		{
			float dt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WindowSwing_eventOpenWindow_Parms, dt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "WindowSwing.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindowSwing, "OpenWindow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(WindowSwing_eventOpenWindow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWindowSwing_ToggleWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "WindowSwing.h" },
				{ "ToolTip", "Main Logic" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindowSwing, "ToggleWindow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWindowSwing_NoRegister()
	{
		return AWindowSwing::StaticClass();
	}
	UClass* Z_Construct_UClass_AWindowSwing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Echoes_Of_Time,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AWindowSwing_CloseWindow, "CloseWindow" }, // 2175143273
				{ &Z_Construct_UFunction_AWindowSwing_OpenWindow, "OpenWindow" }, // 3693010194
				{ &Z_Construct_UFunction_AWindowSwing_ToggleWindow, "ToggleWindow" }, // 802588481
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "WindowSwing.h" },
				{ "ModuleRelativePath", "WindowSwing.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSolution_MetaData[] = {
				{ "Category", "WindowSwing" },
				{ "ModuleRelativePath", "WindowSwing.h" },
			};
#endif
			auto NewProp_isSolution_SetBit = [](void* Obj){ ((AWindowSwing*)Obj)->isSolution = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSolution = { UE4CodeGen_Private::EPropertyClass::Bool, "isSolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWindowSwing), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isSolution_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isSolution_MetaData, ARRAY_COUNT(NewProp_isSolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[] = {
				{ "Category", "Box Comps" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WindowSwing.h" },
				{ "ToolTip", "Pointer to Box Component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp = { UE4CodeGen_Private::EPropertyClass::Object, "boxComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AWindowSwing, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_boxComp_MetaData, ARRAY_COUNT(NewProp_boxComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_window_MetaData[] = {
				{ "Category", "Window Comp" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WindowSwing.h" },
				{ "ToolTip", "Pointer to door component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_window = { UE4CodeGen_Private::EPropertyClass::Object, "window", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AWindowSwing, window), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_window_MetaData, ARRAY_COUNT(NewProp_window_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isSolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_boxComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_window,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWindowSwing>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWindowSwing::StaticClass,
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
	IMPLEMENT_CLASS(AWindowSwing, 725220211);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWindowSwing(Z_Construct_UClass_AWindowSwing, &AWindowSwing::StaticClass, TEXT("/Script/Echoes_Of_Time"), TEXT("AWindowSwing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWindowSwing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
