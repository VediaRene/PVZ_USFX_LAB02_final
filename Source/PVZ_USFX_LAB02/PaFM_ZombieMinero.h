// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaFM_Zombie.h"
#include "PaFM_ZombieMinero.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APaFM_ZombieMinero : public APaFM_Zombie
{
	GENERATED_BODY()
	
public:

	APaFM_ZombieMinero();


protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ZombiemirerolMesh;
};
