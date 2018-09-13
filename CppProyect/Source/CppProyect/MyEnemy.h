// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "MyEnemy.generated.h"


UCLASS()
class CPPPROYECT_API AMyEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UMaterial * EnemyMaterial;
	UMaterialInstanceDynamic* MaterialInstance;
	UPROPERTY(EditAnywhere)
		USceneComponent* OurVisibleComponent;
	void PostInitializeComponents();
	// Called every frame	
	virtual void Tick(float DeltaTime) override;

	void SetColor(FLinearColor color);
	
	
};
