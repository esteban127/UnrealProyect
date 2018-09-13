// Fill out your copyright notice in the Description page of Project Settings.

#include "MyEnemy.h"


// Sets default values
AMyEnemy::AMyEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateAbstractDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	OurVisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OurVisibleComponent"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("/Game/StarterContent/Shapes/Shape_Cube"));
	static_cast<UStaticMeshComponent*>(OurVisibleComponent)->SetStaticMesh(MeshObj.Object);
	OurVisibleComponent->SetupAttachment(RootComponent);

}

void AMyEnemy::PostInitializeComponents() {
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("/Game/BaseEnemyColor"));
	if (IsValid(Material.Object)) {
		EnemyMaterial = (UMaterial*)Material.Object;
		MaterialInstance = UMaterialInstanceDynamic::Create(EnemyMaterial, this);
	}

}

// Called when the game starts or when spawned
void AMyEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyEnemy::SetColor(FLinearColor Ecolor) {	
	if (IsValid(MaterialInstance)) {
		MaterialInstance->SetVectorParameterValue("Color", Ecolor);
		static_cast<UStaticMeshComponent*>(OurVisibleComponent)->SetMaterial(0, MaterialInstance);
	}
	

}

// Called every frame
void AMyEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

