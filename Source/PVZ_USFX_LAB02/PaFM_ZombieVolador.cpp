// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_ZombieVolador.h"

APaFM_ZombieVolador::APaFM_ZombieVolador()
{
	ZombieName = "Volador";

	//ZombieName = "Normal";

	ZombieVoladorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Balde Mesh"));
	RootComponent = ZombieVoladorMesh;
	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	if (ZombieMeshAsset.Succeeded())
	{
		ZombieVoladorMesh->SetStaticMesh(ZombieMeshAsset.Object);
	}

	//MovementSpeed = 0.2f;
	VelocityBrickBoss = 10.0f;

	vida = 100;
}

void APaFM_ZombieVolador::BeginPlay()
{
		Super::BeginPlay();
}
