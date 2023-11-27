// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Planta_PaFM_Creador.h"
#include "Planta_PaFM_Generador.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APlanta_PaFM_Generador : public APlanta_PaFM_Creador
{
	GENERATED_BODY()
	
public:
	//Preparando la posion seleccionada 
	virtual APaFM_Planta* construyendoPlanta(FString PlantaSKU, FVector Location) override;
};
