// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ob_Publicador.h"
#include "Ob_Torre_Localizador.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AOb_Torre_Localizador : public AOb_Publicador
{
	GENERATED_BODY()
private:
	//The current time of this Clock Tower
	FString Time;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	//Called when the time of this Clock Tower has changed
	void CambiarDisparo();
	//Set the time of this Clock Tower
	void SetDisparoAtras(FString myDisparoAtras);
	//Return the time of this Clock Tower
	FORCEINLINE FString GetCambiarDisparo() { return Time; };
};
