// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaFM_Planta.h"
#include "Planta_PaFM_Repetidora.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APlanta_PaFM_Repetidora : public APaFM_Planta
{
	GENERATED_BODY()
	
public:
	APlanta_PaFM_Repetidora();

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* repetidoraMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
