// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYPROJECT3_Runner_generated_h
#error "Runner.generated.h already included, missing '#pragma once' in Runner.h"
#endif
#define MYPROJECT3_Runner_generated_h

#define MyProject3_Source_MyProject3_Runner_h_19_SPARSE_DATA
#define MyProject3_Source_MyProject3_Runner_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define MyProject3_Source_MyProject3_Runner_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define MyProject3_Source_MyProject3_Runner_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunner(); \
	friend struct Z_Construct_UClass_ARunner_Statics; \
public: \
	DECLARE_CLASS(ARunner, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(ARunner)


#define MyProject3_Source_MyProject3_Runner_h_19_INCLASS \
private: \
	static void StaticRegisterNativesARunner(); \
	friend struct Z_Construct_UClass_ARunner_Statics; \
public: \
	DECLARE_CLASS(ARunner, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(ARunner)


#define MyProject3_Source_MyProject3_Runner_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunner(ARunner&&); \
	NO_API ARunner(const ARunner&); \
public:


#define MyProject3_Source_MyProject3_Runner_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunner(ARunner&&); \
	NO_API ARunner(const ARunner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunner)


#define MyProject3_Source_MyProject3_Runner_h_19_PRIVATE_PROPERTY_OFFSET
#define MyProject3_Source_MyProject3_Runner_h_16_PROLOG
#define MyProject3_Source_MyProject3_Runner_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_Runner_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject3_Source_MyProject3_Runner_h_19_SPARSE_DATA \
	MyProject3_Source_MyProject3_Runner_h_19_RPC_WRAPPERS \
	MyProject3_Source_MyProject3_Runner_h_19_INCLASS \
	MyProject3_Source_MyProject3_Runner_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject3_Source_MyProject3_Runner_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_Runner_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject3_Source_MyProject3_Runner_h_19_SPARSE_DATA \
	MyProject3_Source_MyProject3_Runner_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_Runner_h_19_INCLASS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_Runner_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT3_API UClass* StaticClass<class ARunner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject3_Source_MyProject3_Runner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
