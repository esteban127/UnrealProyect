// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CharacterManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterManager() {}
// Cross Module References
	CPPPROYECT_API UClass* Z_Construct_UClass_ACharacterManager_NoRegister();
	CPPPROYECT_API UClass* Z_Construct_UClass_ACharacterManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CppProyect();
	CPPPROYECT_API UClass* Z_Construct_UClass_UDataInterface_NoRegister();
// End Cross Module References
	void ACharacterManager::StaticRegisterNativesACharacterManager()
	{
	}
	UClass* Z_Construct_UClass_ACharacterManager_NoRegister()
	{
		return ACharacterManager::StaticClass();
	}
	UClass* Z_Construct_UClass_ACharacterManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CppProyect,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "CppExamples" },
				{ "IncludePath", "CharacterManager.h" },
				{ "ModuleRelativePath", "CharacterManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyDataInterface_MetaData[] = {
				{ "ModuleRelativePath", "CharacterManager.h" },
				{ "ToolTip", "Must be set as property to avoid garbage collection" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyDataInterface = { UE4CodeGen_Private::EPropertyClass::Object, "MyDataInterface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ACharacterManager, MyDataInterface), Z_Construct_UClass_UDataInterface_NoRegister, METADATA_PARAMS(NewProp_MyDataInterface_MetaData, ARRAY_COUNT(NewProp_MyDataInterface_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyDataInterface,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACharacterManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACharacterManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ACharacterManager, 707073800);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterManager(Z_Construct_UClass_ACharacterManager, &ACharacterManager::StaticClass, TEXT("/Script/CppProyect"), TEXT("ACharacterManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
