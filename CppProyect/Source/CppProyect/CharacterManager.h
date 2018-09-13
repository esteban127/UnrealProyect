#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyEnemy.h"
//#include "Engine/World.h"
#include "CharacterManager.generated.h"




class UDataInterface;

UCLASS(ClassGroup=CppExamples)
class CPPPROYECT_API ACharacterManager : public AActor
{
	GENERATED_BODY()
    
    // Must be set as property to avoid garbage collection
    UPROPERTY()
    UDataInterface* MyDataInterface;
	
public:
	ACharacterManager();	
	AMyEnemy* EnemyRef;
	TArray<AMyEnemy*> EnemyTable;

protected:
	virtual void BeginPlay() override;
	void LoadEnemys();

public:
	virtual void Tick(float DeltaTime) override;	
};
