// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DoorKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorKey() {}
// Cross Module References
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_ADoorKey_NoRegister();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_ADoorKey();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Echoes_Of_Time();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_ADoorKey_OnOverlapWithDoors();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_ADoorSwing_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ADoorKey::StaticRegisterNativesADoorKey()
	{
		UClass* Class = ADoorKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapWithDoors", (Native)&ADoorKey::execOnOverlapWithDoors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ADoorKey_OnOverlapWithDoors()
	{
		struct DoorKey_eventOnOverlapWithDoors_Parms
		{
			ADoorSwing* doorActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_doorActor = { UE4CodeGen_Private::EPropertyClass::Object, "doorActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKey_eventOnOverlapWithDoors_Parms, doorActor), Z_Construct_UClass_ADoorSwing_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_doorActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Door Key Logic" },
				{ "ModuleRelativePath", "DoorKey.h" },
				{ "ToolTip", "On Overlap Event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKey, "OnOverlapWithDoors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DoorKey_eventOnOverlapWithDoors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoorKey_NoRegister()
	{
		return ADoorKey::StaticClass();
	}
	UClass* Z_Construct_UClass_ADoorKey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Echoes_Of_Time,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADoorKey_OnOverlapWithDoors, "OnOverlapWithDoors" }, // 1573146934
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DoorKey.h" },
				{ "ModuleRelativePath", "DoorKey.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statue_MetaData[] = {
				{ "Category", "DoorKey" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorKey.h" },
				{ "ToolTip", "Pointer to asset" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_statue = { UE4CodeGen_Private::EPropertyClass::Object, "statue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ADoorKey, statue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_statue_MetaData, ARRAY_COUNT(NewProp_statue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_statue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADoorKey>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADoorKey::StaticClass,
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
	IMPLEMENT_CLASS(ADoorKey, 731027557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorKey(Z_Construct_UClass_ADoorKey, &ADoorKey::StaticClass, TEXT("/Script/Echoes_Of_Time"), TEXT("ADoorKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
