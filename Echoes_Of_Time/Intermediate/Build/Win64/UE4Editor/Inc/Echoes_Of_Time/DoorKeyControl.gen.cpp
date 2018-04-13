// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DoorKeyControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorKeyControl() {}
// Cross Module References
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_UDoorKeyControl_NoRegister();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_UDoorKeyControl();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Echoes_Of_Time();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_UDoorKeyControl_OnKeyPressed();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_UDoorKeyControl_OnOverlapBegin();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_ADoorKeySwing_NoRegister();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_UDoorKeyControl_OnOverlapEnd();
// End Cross Module References
	void UDoorKeyControl::StaticRegisterNativesUDoorKeyControl()
	{
		UClass* Class = UDoorKeyControl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKeyPressed", (Native)&UDoorKeyControl::execOnKeyPressed },
			{ "OnOverlapBegin", (Native)&UDoorKeyControl::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&UDoorKeyControl::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDoorKeyControl_OnKeyPressed()
	{
		struct DoorKeyControl_eventOnKeyPressed_Parms
		{
			UPhysicsHandleComponent* physicsHandle;
			AActor* actorHeld;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((DoorKeyControl_eventOnKeyPressed_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DoorKeyControl_eventOnKeyPressed_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorHeld = { UE4CodeGen_Private::EPropertyClass::Object, "actorHeld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKeyControl_eventOnKeyPressed_Parms, actorHeld), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physicsHandle_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicsHandle = { UE4CodeGen_Private::EPropertyClass::Object, "physicsHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(DoorKeyControl_eventOnKeyPressed_Parms, physicsHandle), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(NewProp_physicsHandle_MetaData, ARRAY_COUNT(NewProp_physicsHandle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_actorHeld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_physicsHandle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Door Key Control" },
				{ "ModuleRelativePath", "DoorKeyControl.h" },
				{ "ToolTip", "OnEvent\nif is inside trigger box release key and pass it to swing class" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorKeyControl, "OnKeyPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DoorKeyControl_eventOnKeyPressed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDoorKeyControl_OnOverlapBegin()
	{
		struct DoorKeyControl_eventOnOverlapBegin_Parms
		{
			ADoorKeySwing* door;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_door = { UE4CodeGen_Private::EPropertyClass::Object, "door", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorKeyControl_eventOnOverlapBegin_Parms, door), Z_Construct_UClass_ADoorKeySwing_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_door,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Door Key Control" },
				{ "ModuleRelativePath", "DoorKeyControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorKeyControl, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DoorKeyControl_eventOnOverlapBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDoorKeyControl_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Door Key Control" },
				{ "ModuleRelativePath", "DoorKeyControl.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorKeyControl, "OnOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDoorKeyControl_NoRegister()
	{
		return UDoorKeyControl::StaticClass();
	}
	UClass* Z_Construct_UClass_UDoorKeyControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Echoes_Of_Time,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDoorKeyControl_OnKeyPressed, "OnKeyPressed" }, // 3017616148
				{ &Z_Construct_UFunction_UDoorKeyControl_OnOverlapBegin, "OnOverlapBegin" }, // 2891281636
				{ &Z_Construct_UFunction_UDoorKeyControl_OnOverlapEnd, "OnOverlapEnd" }, // 3272812039
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "DoorKeyControl.h" },
				{ "ModuleRelativePath", "DoorKeyControl.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDoorKeyControl>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDoorKeyControl::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorKeyControl, 1126544067);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorKeyControl(Z_Construct_UClass_UDoorKeyControl, &UDoorKeyControl::StaticClass, TEXT("/Script/Echoes_Of_Time"), TEXT("UDoorKeyControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorKeyControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
