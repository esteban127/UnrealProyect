#include "DataInterface.h"

UDataInterface::UDataInterface()
{
}

UDataInterface::~UDataInterface()
{
}

void UDataInterface::Load()
{
    MyCharacters = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(),
                                                     NULL, TEXT("DataTable'/Game/Data/DT_Characters.DT_Characters'")));
    
    //(MyCharacters != NULL) ? (UE_LOG(LogTemp, Warning, TEXT("Loaded character data sucessfully."))) : (UE_LOG(LogTemp, Error, TEXT("Error loading character data!")));
	if (MyCharacters != NULL) {
		UE_LOG(LogTemp, Warning, TEXT("Loaded character data sucessfully."));
		FindRow(1);
		GetAllCharacters();
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("Error loading character data!"))
	}
}

FString UDataInterface::BuildLookUpString(FString Name, int32 Index) 
{
	return FString::Printf(TEXT("Character_%s_%d"), *Name, Index);
}
TArray<FName> UDataInterface::GetRowNames()
{
	TArray<FName> RowNames;

	RowNames = MyCharacters->GetRowNames();

	return RowNames;
}

TArray<FCharacterDataTable> UDataInterface::GetAllCharacters()
{
	TArray<FName> RowNames = GetRowNames();
	TArray<FCharacterDataTable> CharactersArray;
	FString ContexString;
	for(auto& Name : RowNames)
	{
		FCharacterDataTable* Row = MyCharacters->FindRow<FCharacterDataTable>(Name, ContexString);
		if (Row)
		{
			CharactersArray.Add(*Row);
			UE_LOG(LogTemp, Warning, TEXT("Character added to array: %s"), *(*Row).Name);
		}
	}
	return CharactersArray;
}


FCharacterDataTable* UDataInterface::FindRow(int32 Index)
{
	FCharacterDataTable* Row = MyCharacters->FindRow<FCharacterDataTable>(FName(*(FString::FromInt(Index))),
		FString("CPPPROYECT"), true);
	if (Row)
	{
		FString output = FString::FromInt((*Row).Experience);
		UE_LOG(LogTemp, Warning, TEXT("The experience is %s"), *output);

		return Row;
	}
	return NULL;
}