#include "CharacterManager.h"
#include "DataInterface.h"
#include "UObject/UObjectGlobals.h"

ACharacterManager::ACharacterManager()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateAbstractDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    
    MyDataInterface = NewObject<UDataInterface>();
    MyDataInterface->Load();
}

void ACharacterManager::BeginPlay()
{
	Super::BeginPlay();	

	LoadEnemys();

}

void ACharacterManager::LoadEnemys()
{

	FLinearColor MyColor;
	/*TArray<FCharacterDataTable> CharacterArray = MyDataInterface->GetAllCharacters();
	FCharacterDataTable CurrentEnemy;*/
	for (size_t i = 0; i < 4; i++)
	{
		
		//CurrentEnemy = CharacterArray.Pop();	
		
		EnemyRef = GetWorld()->SpawnActor<AMyEnemy>(AMyEnemy::StaticClass());
		if (IsValid(EnemyRef)) 
		{		
			EnemyRef->SetActorLocation(this->GetActorLocation() + FVector(3 * i, 0, 0));
			/*switch (CurrentEnemy.Class)
			{
				case ECharacterClasses::

			default:
				break;
			}*/

			EnemyRef->SetColor(FLinearColor::Red);

			EnemyTable.Add(EnemyRef);
		}
	}

};

void ACharacterManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
