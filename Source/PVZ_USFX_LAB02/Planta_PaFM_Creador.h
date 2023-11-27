// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaFM_Planta.h"
#include "Planta_PaFM_Creador.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API APlanta_PaFM_Creador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanta_PaFM_Creador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Crea una posion y la devuelve y es vitual pura
	virtual APaFM_Planta* construyendoPlanta(FString PlantaSKU, FVector Location) PURE_VIRTUAL(APlanta_PaFM_Creador::construyendoPlanta, return nullptr;);

	//Order, concoct and returns a Potion of a specific Category
	APaFM_Planta* OrderPlanta(FString Category, FVector Location);

};
