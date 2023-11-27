// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaFM_Planta.h"
#include "Planta_PaFM_Lanzaquizantes.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APlanta_PaFM_Lanzaquizantes : public APaFM_Planta
{
	GENERATED_BODY()
	
public:
	APlanta_PaFM_Lanzaquizantes();

	UFUNCTION()
	void Disparar();

protected:
	float TiempoEntreDisparos;
	float TiempoUltimoDisparo;

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* LanzaguisantesMesh;


};
