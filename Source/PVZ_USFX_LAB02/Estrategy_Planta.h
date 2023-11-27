// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Estrategy_Planta.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstrategy_Planta : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB02_API IEstrategy_Planta
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void atacar(AActor* zombie) = 0;
	
};
