// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_PaFM_Creador.h"

// Sets default values
APlanta_PaFM_Creador::APlanta_PaFM_Creador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlanta_PaFM_Creador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlanta_PaFM_Creador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APaFM_Planta* APlanta_PaFM_Creador:: OrderPlanta(FString Category, FVector Location)
{
	APaFM_Planta* Planta = construyendoPlanta(Category, Location);

	return Planta;
}

