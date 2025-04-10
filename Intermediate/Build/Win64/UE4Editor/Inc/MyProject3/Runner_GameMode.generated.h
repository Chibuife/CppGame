// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT3_Runner_GameMode_generated_h
#error "Runner_GameMode.generated.h already included, missing '#pragma once' in Runner_GameMode.h"
#endif
#define MYPROJECT3_Runner_GameMode_generated_h

#define MyProject3_Source_MyProject3_Runner_GameMode_h_16_SPARSE_DATA
#define MyProject3_Source_MyProject3_Runner_GameMode_h_16_RPC_WRAPPERS
#define MyProject3_Source_MyProject3_Runner_GameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject3_Source_MyProject3_Runner_GameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunner_GameMode(); \
	friend struct Z_Construct_UClass_ARunner_GameMode_Statics; \
public: \
	DECLARE_CLASS(ARunner_GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(ARunner_GameMode)


#define MyProject3_Source_MyProject3_Runner_GameMode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARunner_GameMode(); \
	friend struct Z_Construct_UClass_ARunner_GameMode_Statics; \
public: \
	DECLARE_CLASS(ARunner_GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(ARunner_GameMode)


#define MyProject3_Source_MyProject3_Runner_GameMode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunner_GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunner_GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunner_GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunner_GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunner_GameMode(ARunner_GameMode&&); \
	NO_API ARunner_GameMode(const ARunner_GameMode&); \
public:


#define MyProject3_Source_MyProject3_Runner_GameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunner_GameMode(ARunner_GameMode&&); \
	NO_API ARunner_GameMode(const ARunner_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunner_GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunner_GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunner_GameMode)


#define MyProject3_Source_MyProject3_Runner_GameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerRecharge() { return STRUCT_OFFSET(ARunner_GameMode, PlayerRecharge); } \
	FORCEINLINE static uint32 __PPO__Spawn_X_Min() { return STRUCT_OFFSET(ARunner_GameMode, Spawn_X_Min); } \
	FORCEINLINE static uint32 __PPO__Spawn_X_Max() { return STRUCT_OFFSET(ARunner_GameMode, Spawn_X_Max); } \
	FORCEINLINE static uint32 __PPO__Spawn_Y_Min() { return STRUCT_OFFSET(ARunner_GameMode, Spawn_Y_Min); } \
	FORCEINLINE static uint32 __PPO__Spawn_Y_Max() { return STRUCT_OFFSET(ARunner_GameMode, Spawn_Y_Max); }


#define MyProject3_Source_MyProject3_Runner_GameMode_h_13_PROLOG
#define MyProject3_Source_MyProject3_Runner_GameMode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_Runner_GameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject3_Source_MyProject3_Runner_GameMode_h_16_SPARSE_DATA \
	MyProject3_Source_MyProject3_Runner_GameMode_h_16_RPC_WRAPPERS \
	MyProject3_Source_MyProject3_Runner_GameMode_h_16_INCLASS \
	MyProject3_Source_MyProject3_Runner_GameMode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject3_Source_MyProject3_Runner_GameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_Runner_GameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject3_Source_MyProject3_Runner_GameMode_h_16_SPARSE_DATA \
	MyProject3_Source_MyProject3_Runner_GameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_Runner_GameMode_h_16_INCLASS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_Runner_GameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT3_API UClass* StaticClass<class ARunner_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject3_Source_MyProject3_Runner_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
