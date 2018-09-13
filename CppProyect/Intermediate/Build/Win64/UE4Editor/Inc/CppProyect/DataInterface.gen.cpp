// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DataInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataInterface() {}
// Cross Module References
	CPPPROYECT_API UEnum* Z_Construct_UEnum_CppProyect_ECharacterClasses();
	UPackage* Z_Construct_UPackage__Script_CppProyect();
	CPPPROYECT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDataTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CPPPROYECT_API UClass* Z_Construct_UClass_UDataInterface_NoRegister();
	CPPPROYECT_API UClass* Z_Construct_UClass_UDataInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECharacterClasses_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CppProyect_ECharacterClasses, Z_Construct_UPackage__Script_CppProyect(), TEXT("ECharacterClasses"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterClasses(ECharacterClasses_StaticEnum, TEXT("/Script/CppProyect"), TEXT("ECharacterClasses"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CppProyect_ECharacterClasses_CRC() { return 3750150849U; }
	UEnum* Z_Construct_UEnum_CppProyect_ECharacterClasses()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CppProyect();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterClasses"), 0, Get_Z_Construct_UEnum_CppProyect_ECharacterClasses_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterClasses::Human", (int64)ECharacterClasses::Human },
				{ "ECharacterClasses::Goblin", (int64)ECharacterClasses::Goblin },
				{ "ECharacterClasses::Dwarf", (int64)ECharacterClasses::Dwarf },
				{ "ECharacterClasses::Wizard", (int64)ECharacterClasses::Wizard },
				{ "ECharacterClasses::Nerd", (int64)ECharacterClasses::Nerd },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "DataInterface.h" },
				{ "ToolTip", "Character classes *" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CppProyect,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECharacterClasses",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECharacterClasses",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCharacterDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CPPPROYECT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterDataTable_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterDataTable, Z_Construct_UPackage__Script_CppProyect(), TEXT("CharacterDataTable"), sizeof(FCharacterDataTable), Get_Z_Construct_UScriptStruct_FCharacterDataTable_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterDataTable(FCharacterDataTable::StaticStruct, TEXT("/Script/CppProyect"), TEXT("CharacterDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_CppProyect_StaticRegisterNativesFCharacterDataTable
{
	FScriptStruct_CppProyect_StaticRegisterNativesFCharacterDataTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterDataTable")),new UScriptStruct::TCppStructOps<FCharacterDataTable>);
	}
} ScriptStruct_CppProyect_StaticRegisterNativesFCharacterDataTable;
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterDataTable_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CppProyect();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterDataTable"), sizeof(FCharacterDataTable), Get_Z_Construct_UScriptStruct_FCharacterDataTable_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "DataInterface.h" },
				{ "ToolTip", "Structure to store lookup data" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterDataTable>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[] = {
				{ "Category", "Skills" },
				{ "ModuleRelativePath", "DataInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Experience = { UE4CodeGen_Private::EPropertyClass::Int, "Experience", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCharacterDataTable, Experience), METADATA_PARAMS(NewProp_Experience_MetaData, ARRAY_COUNT(NewProp_Experience_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
				{ "Category", "Attributes" },
				{ "ModuleRelativePath", "DataInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Class = { UE4CodeGen_Private::EPropertyClass::Enum, "Class", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCharacterDataTable, Class), Z_Construct_UEnum_CppProyect_ECharacterClasses, METADATA_PARAMS(NewProp_Class_MetaData, ARRAY_COUNT(NewProp_Class_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Class_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
				{ "Category", "Attributes" },
				{ "ModuleRelativePath", "DataInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Byte, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCharacterDataTable, Level), nullptr, METADATA_PARAMS(NewProp_Level_MetaData, ARRAY_COUNT(NewProp_Level_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bio_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "DataInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Bio = { UE4CodeGen_Private::EPropertyClass::Text, "Bio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCharacterDataTable, Bio), METADATA_PARAMS(NewProp_Bio_MetaData, ARRAY_COUNT(NewProp_Bio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "DataInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FCharacterDataTable, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Experience,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Class,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Class_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CppProyect,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CharacterDataTable",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCharacterDataTable),
				alignof(FCharacterDataTable),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterDataTable_CRC() { return 1360371252U; }
	void UDataInterface::StaticRegisterNativesUDataInterface()
	{
	}
	UClass* Z_Construct_UClass_UDataInterface_NoRegister()
	{
		return UDataInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UDataInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_CppProyect,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "CppExamples" },
				{ "IncludePath", "DataInterface.h" },
				{ "ModuleRelativePath", "DataInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDataInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDataInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UDataInterface, 1348308459);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataInterface(Z_Construct_UClass_UDataInterface, &UDataInterface::StaticClass, TEXT("/Script/CppProyect"), TEXT("UDataInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
