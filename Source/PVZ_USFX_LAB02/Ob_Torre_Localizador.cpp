// Fill out your copyright notice in the Description page of Project Settings.


#include "Ob_Torre_Localizador.h"

void AOb_Torre_Localizador::BeginPlay()
{
	Super::BeginPlay();
}

void AOb_Torre_Localizador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AOb_Torre_Localizador::CambiarMovimiento()
{
	NotificarSuscriptores();
}

void AOb_Torre_Localizador::SetMovimiento(FString myMovimiento)
{
	Time = myMovimiento;
	CambiarMovimiento();

}
