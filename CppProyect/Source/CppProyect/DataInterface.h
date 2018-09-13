// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DataInterface.generated.h"

/** Character classes **/
UENUM(BlueprintType)
enum class ECharacterClasses : uint8
{
    Human = 0,
    Goblin,
    Dwarf,
    Wizard,
    Nerd
};

/** Structure to store lookup data */
USTRUCT(BlueprintType)
struct FCharacterDataTable : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()
    
public:
    
    UPROPERTY(BlueprintReadOnly, Category = "Basic")
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, Category = "Basic")
    FText Bio;
    
    UPROPERTY(BlueprintReadOnly, Category = "Attributes")
    uint8 Level;
    
    UPROPERTY(BlueprintReadOnly, Category = "Attributes")
    ECharacterClasses Class;
    
    UPROPERTY(BlueprintReadOnly, Category = "Skills")
    int32 Experience;
};

UCLASS(ClassGroup=CppExamples)
class CPPPROYECT_API UDataInterface : public UObject
{
    GENERATED_BODY()
    
    // Declare the lookup table	
    UDataTable* MyCharacters;
    
public:
	UDataInterface();
	~UDataInterface();
    
    void Load();
	FString BuildLookUpString(FString Name, int32 Index);
	TArray<FName> GetRowNames();
	TArray<FCharacterDataTable> GetAllCharacters();
	FCharacterDataTable* FindRow(int32 Index);
};
