// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DoorLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorLogic() {}
// Cross Module References
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_UDoorLogic_NoRegister();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_UDoorLogic();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Echoes_Of_Time();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_UDoorLogic_GetCurrentDoor();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_ADoorSwing_NoRegister();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_UDoorLogic_OnAction();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_UDoorLogic_OnOverlapBegin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ECHOES_OF_TIME_API UFunction* Z_Construct_UFunction_UDoorLogic_OnOverlapEnd();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void UDoorLogic::StaticRegisterNativesUDoorLogic()
	{
		UClass* Class = UDoorLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentDoor", (Native)&UDoorLogic::execGetCurrentDoor },
			{ "OnAction", (Native)&UDoorLogic::execOnAction },
			{ "OnOverlapBegin", (Native)&UDoorLogic::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&UDoorLogic::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDoorLogic_GetCurrentDoor()
	{
		struct DoorLogic_eventGetCurrentDoor_Parms
		{
			ADoorSwing* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DoorLogic_eventGetCurrentDoor_Parms, ReturnValue), Z_Construct_UClass_ADoorSwing_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Door Logic" },
				{ "ModuleRelativePath", "DoorLogic.h" },
				{ "ToolTip", "Just for testing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorLogic, "GetCurrentDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DoorLogic_eventGetCurrentDoor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDoorLogic_OnAction()
	{
		struct DoorLogic_eventOnAction_Parms
		{
			UCameraComponent* camComp;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camComp = { UE4CodeGen_Private::EPropertyClass::Object, "camComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(DoorLogic_eventOnAction_Parms, camComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_camComp_MetaData, ARRAY_COUNT(NewProp_camComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Door Logic" },
				{ "ModuleRelativePath", "DoorLogic.h" },
				{ "ToolTip", "Action Key Pressed Event" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorLogic, "OnAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DoorLogic_eventOnAction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDoorLogic_OnOverlapBegin()
	{
		struct DoorLogic_eventOnOverlapBegin_Parms
		{
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorLogic_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Door Logic" },
				{ "ModuleRelativePath", "DoorLogic.h" },
				{ "ToolTip", "declare overlap begin function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorLogic, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DoorLogic_eventOnOverlapBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDoorLogic_OnOverlapEnd()
	{
		struct DoorLogic_eventOnOverlapEnd_Parms
		{
			ADoorSwing* other;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other = { UE4CodeGen_Private::EPropertyClass::Object, "other", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DoorLogic_eventOnOverlapEnd_Parms, other), Z_Construct_UClass_ADoorSwing_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_other,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Door Logic" },
				{ "ModuleRelativePath", "DoorLogic.h" },
				{ "ToolTip", "declare overlap end function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorLogic, "OnOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DoorLogic_eventOnOverlapEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDoorLogic_NoRegister()
	{
		return UDoorLogic::StaticClass();
	}
	UClass* Z_Construct_UClass_UDoorLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Echoes_Of_Time,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDoorLogic_GetCurrentDoor, "GetCurrentDoor" }, // 3702144308
				{ &Z_Construct_UFunction_UDoorLogic_OnAction, "OnAction" }, // 2644117708
				{ &Z_Construct_UFunction_UDoorLogic_OnOverlapBegin, "OnOverlapBegin" }, // 2097013382
				{ &Z_Construct_UFunction_UDoorLogic_OnOverlapEnd, "OnOverlapEnd" }, // 639241371
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "DoorLogic.h" },
				{ "ModuleRelativePath", "DoorLogic.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerCapsule_MetaData[] = {
				{ "Category", "Trigger Capsule" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "DoorLogic.h" },
				{ "ToolTip", "create trigger capsule" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerCapsule = { UE4CodeGen_Private::EPropertyClass::Object, "TriggerCapsule", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(UDoorLogic, TriggerCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_TriggerCapsule_MetaData, ARRAY_COUNT(NewProp_TriggerCapsule_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriggerCapsule,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDoorLogic>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDoorLogic::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UDoorLogic, 2386401775);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorLogic(Z_Construct_UClass_UDoorLogic, &UDoorLogic::StaticClass, TEXT("/Script/Echoes_Of_Time"), TEXT("UDoorLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
