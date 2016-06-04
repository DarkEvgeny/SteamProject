// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTS_ProjectSGameMode_generated_h
#error "ProjectSGameMode.generated.h already included, missing '#pragma once' in ProjectSGameMode.h"
#endif
#define PROJECTS_ProjectSGameMode_generated_h

#define ProjectS_Source_ProjectS_ProjectSGameMode_h_14_RPC_WRAPPERS
#define ProjectS_Source_ProjectS_ProjectSGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectS_Source_ProjectS_ProjectSGameMode_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAProjectSGameMode(); \
	friend PROJECTS_API class UClass* Z_Construct_UClass_AProjectSGameMode(); \
	public: \
	DECLARE_CLASS(AProjectSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/ProjectS"), NO_API) \
	DECLARE_SERIALIZER(AProjectSGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProjectS_Source_ProjectS_ProjectSGameMode_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAProjectSGameMode(); \
	friend PROJECTS_API class UClass* Z_Construct_UClass_AProjectSGameMode(); \
	public: \
	DECLARE_CLASS(AProjectSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/ProjectS"), NO_API) \
	DECLARE_SERIALIZER(AProjectSGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProjectS_Source_ProjectS_ProjectSGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectSGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectSGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectSGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectSGameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AProjectSGameMode(const AProjectSGameMode& InCopy); \
public:


#define ProjectS_Source_ProjectS_ProjectSGameMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectSGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AProjectSGameMode(const AProjectSGameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectSGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectSGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectSGameMode)


#define ProjectS_Source_ProjectS_ProjectSGameMode_h_11_PROLOG
#define ProjectS_Source_ProjectS_ProjectSGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectS_Source_ProjectS_ProjectSGameMode_h_14_RPC_WRAPPERS \
	ProjectS_Source_ProjectS_ProjectSGameMode_h_14_INCLASS \
	ProjectS_Source_ProjectS_ProjectSGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectS_Source_ProjectS_ProjectSGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectS_Source_ProjectS_ProjectSGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectS_Source_ProjectS_ProjectSGameMode_h_14_INCLASS_NO_PURE_DECLS \
	ProjectS_Source_ProjectS_ProjectSGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectS_Source_ProjectS_ProjectSGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
