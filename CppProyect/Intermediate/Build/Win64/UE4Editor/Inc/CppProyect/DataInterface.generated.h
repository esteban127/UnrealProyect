// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPPROYECT_DataInterface_generated_h
#error "DataInterface.generated.h already included, missing '#pragma once' in DataInterface.h"
#endif
#define CPPPROYECT_DataInterface_generated_h

#define CppProyect_Source_CppProyect_DataInterface_h_24_GENERATED_BODY \
	friend CPPPROYECT_API class UScriptStruct* Z_Construct_UScriptStruct_FCharacterDataTable(); \
	CPPPROYECT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


#define CppProyect_Source_CppProyect_DataInterface_h_47_RPC_WRAPPERS
#define CppProyect_Source_CppProyect_DataInterface_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define CppProyect_Source_CppProyect_DataInterface_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataInterface(); \
	friend CPPPROYECT_API class UClass* Z_Construct_UClass_UDataInterface(); \
public: \
	DECLARE_CLASS(UDataInterface, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppProyect"), NO_API) \
	DECLARE_SERIALIZER(UDataInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppProyect_Source_CppProyect_DataInterface_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUDataInterface(); \
	friend CPPPROYECT_API class UClass* Z_Construct_UClass_UDataInterface(); \
public: \
	DECLARE_CLASS(UDataInterface, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppProyect"), NO_API) \
	DECLARE_SERIALIZER(UDataInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppProyect_Source_CppProyect_DataInterface_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataInterface(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataInterface(UDataInterface&&); \
	NO_API UDataInterface(const UDataInterface&); \
public:


#define CppProyect_Source_CppProyect_DataInterface_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataInterface(UDataInterface&&); \
	NO_API UDataInterface(const UDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataInterface); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataInterface)


#define CppProyect_Source_CppProyect_DataInterface_h_47_PRIVATE_PROPERTY_OFFSET
#define CppProyect_Source_CppProyect_DataInterface_h_44_PROLOG
#define CppProyect_Source_CppProyect_DataInterface_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppProyect_Source_CppProyect_DataInterface_h_47_PRIVATE_PROPERTY_OFFSET \
	CppProyect_Source_CppProyect_DataInterface_h_47_RPC_WRAPPERS \
	CppProyect_Source_CppProyect_DataInterface_h_47_INCLASS \
	CppProyect_Source_CppProyect_DataInterface_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppProyect_Source_CppProyect_DataInterface_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppProyect_Source_CppProyect_DataInterface_h_47_PRIVATE_PROPERTY_OFFSET \
	CppProyect_Source_CppProyect_DataInterface_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	CppProyect_Source_CppProyect_DataInterface_h_47_INCLASS_NO_PURE_DECLS \
	CppProyect_Source_CppProyect_DataInterface_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppProyect_Source_CppProyect_DataInterface_h


#define FOREACH_ENUM_ECHARACTERCLASSES(op) \
	op(ECharacterClasses::Human) \
	op(ECharacterClasses::Goblin) \
	op(ECharacterClasses::Dwarf) \
	op(ECharacterClasses::Wizard) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
