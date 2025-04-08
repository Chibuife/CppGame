// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject3/Runnner_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunnner_GameMode() {}
// Cross Module References
	MYPROJECT3_API UClass* Z_Construct_UClass_ARunnner_GameMode_NoRegister();
	MYPROJECT3_API UClass* Z_Construct_UClass_ARunnner_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_MyProject3();
// End Cross Module References
	void ARunnner_GameMode::StaticRegisterNativesARunnner_GameMode()
	{
	}
	UClass* Z_Construct_UClass_ARunnner_GameMode_NoRegister()
	{
		return ARunnner_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARunnner_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunnner_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnner_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Runnner_GameMode.h" },
		{ "ModuleRelativePath", "Runnner_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunnner_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunnner_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunnner_GameMode_Statics::ClassParams = {
		&ARunnner_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARunnner_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunnner_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunnner_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunnner_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunnner_GameMode, 3267719225);
	template<> MYPROJECT3_API UClass* StaticClass<ARunnner_GameMode>()
	{
		return ARunnner_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunnner_GameMode(Z_Construct_UClass_ARunnner_GameMode, &ARunnner_GameMode::StaticClass, TEXT("/Script/MyProject3"), TEXT("ARunnner_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunnner_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
