// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaFM_Zombie.h"
#include "PaFM_ZombieVolador.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APaFM_ZombieVolador : public APaFM_Zombie
{
	GENERATED_BODY()
public:
	APaFM_ZombieVolador();


protected:


	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ZombieVoladorMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};

