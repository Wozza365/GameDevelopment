// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Puzzle1Variables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzle1Variables() {}
// Cross Module References
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_APuzzle1Variables_NoRegister();
	ECHOES_OF_TIME_API UClass* Z_Construct_UClass_APuzzle1Variables();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	UPackage* Z_Construct_UPackage__Script_Echoes_Of_Time();
// End Cross Module References
	void APuzzle1Variables::StaticRegisterNativesAPuzzle1Variables()
	{
	}
	UClass* Z_Construct_UClass_APuzzle1Variables_NoRegister()
	{
		return APuzzle1Variables::StaticClass();
	}
	UClass* Z_Construct_UClass_APuzzle1Variables()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AWorldSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Echoes_Of_Time,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Utilities|Transformation" },
				{ "IncludePath", "Puzzle1Variables.h" },
				{ "ModuleRelativePath", "Puzzle1Variables.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APuzzle1Variables>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APuzzle1Variables::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				nullptr, 0,
				"game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzle1Variables, 4125865704);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzle1Variables(Z_Construct_UClass_APuzzle1Variables, &APuzzle1Variables::StaticClass, TEXT("/Script/Echoes_Of_Time"), TEXT("APuzzle1Variables"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzle1Variables);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
