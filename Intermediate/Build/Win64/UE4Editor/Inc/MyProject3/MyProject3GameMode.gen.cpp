// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject3/MyProject3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject3GameMode() {}
// Cross Module References
	MYPROJECT3_API UClass* Z_Construct_UClass_AMyProject3GameMode_NoRegister();
	MYPROJECT3_API UClass* Z_Construct_UClass_AMyProject3GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject3();
// End Cross Module References
	void AMyProject3GameMode::StaticRegisterNativesAMyProject3GameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyProject3GameMode_NoRegister()
	{
		return AMyProject3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyProject3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProject3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProject3GameMode.h" },
		{ "ModuleRelativePath", "MyProject3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProject3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject3GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProject3GameMode_Statics::ClassParams = {
		&AMyProject3GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProject3GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProject3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProject3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject3GameMode, 4039803489);
	template<> MYPROJECT3_API UClass* StaticClass<AMyProject3GameMode>()
	{
		return AMyProject3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject3GameMode(Z_Construct_UClass_AMyProject3GameMode, &AMyProject3GameMode::StaticClass, TEXT("/Script/MyProject3"), TEXT("AMyProject3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
