// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_PaFM_Generador.h"
#include "Planta_PaFM_Lanzaquizantes.h"
#include "Planta_PaFM_Repetidora.h"
#include "Planta_PaFM_Girasol.h"
#include "Planta_PaFM_Carrinivora.h"
#include "Planta_PaFM_Nuez.h"



APaFM_Planta* APlanta_PaFM_Generador::construyendoPlanta(FString PlantaSKU, FVector Location)
{
	//Select which potion to spawn depending on the passed string
	if (PlantaSKU.Equals("Lanzaquizantes")) {
		return GetWorld()->SpawnActor<APlanta_PaFM_Lanzaquizantes>(APlanta_PaFM_Lanzaquizantes::StaticClass(), Location, FRotator::ZeroRotator);
	}
	else if (PlantaSKU.Equals("Girasol")) {
		return GetWorld()->SpawnActor<APlanta_PaFM_Girasol>(APlanta_PaFM_Girasol::StaticClass(), Location, FRotator::ZeroRotator);
	}
	else if (PlantaSKU.Equals("Nuez")) {
		return GetWorld()->SpawnActor<APlanta_PaFM_Nuez>(APlanta_PaFM_Nuez::StaticClass(), Location, FRotator::ZeroRotator);
	}
	else if (PlantaSKU.Equals("Repetidora")) {
		return GetWorld()->SpawnActor<APlanta_PaFM_Repetidora>(APlanta_PaFM_Repetidora::StaticClass(), Location, FRotator::ZeroRotator);
	}
	else if (PlantaSKU.Equals("Carrinivora")) {
		return GetWorld()->SpawnActor<APlanta_PaFM_Carrinivora>(APlanta_PaFM_Carrinivora::StaticClass(), Location, FRotator::ZeroRotator);
	}
	else return nullptr; //Return null if the string isn't valid
}
