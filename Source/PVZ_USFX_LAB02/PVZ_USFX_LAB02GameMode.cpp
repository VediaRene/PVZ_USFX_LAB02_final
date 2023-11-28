// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB02GameMode.h"
#include "PVZ_USFX_LAB02Pawn.h"
#include "Zombie.h"
#include "Planta.h"

#include "PaFM_Planta.h" 
#include "MyPaFM_CreadorZombieMalo.h"

#include "Girasol.h"
#include "Sol.h"



#include "BuPa_ConstructorEtapas.h"
#include "BuPa_Etapa1_OrdaZombie.h"
#include "BuPa_SemiOrda.h"

#include "Planta_PaFM_Creador.h"
#include "Planta_PaFM_Generador.h"


#include "EstrategyMovimientoMinero.h"

#include "Ob_Torre_Localizador.h"
#include "Ob_ZombieObservado.h" 

#include "Estrategy_Main.h"
#include "PaFM_Zombie.h"
#include "EstrategyMovimientoMinero.h"
#include "EstrategyMoviminetoVolar.h"


APVZ_USFX_LAB02GameMode::APVZ_USFX_LAB02GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = APVZ_USFX_LAB02Pawn::StaticClass();
	TiempoTranscurrido = 0.0f;

	estado01=true;
	estado02=true;
}

void APVZ_USFX_LAB02GameMode::BeginPlay()
{
	Super::BeginPlay();

	
	//Desarrollar un observe que controle el porcentaje de avance de un zombie desde su aparición hasta la planta mas cercana en su carril,
	//considerando que cuando supere el 75% de la distancia si el zombie es de tipo A avanzara por el aire,
	//si es de tipo B avanzara por tierra y si es de tipo C avanzara bajo tierra hasta llegar al 25%,
	//donde todos cambiaran a estrategia de despliegue por tierra.
	

	//////////////////////////////////PATRON ESTRATEGY////////////////////////////////////////

	//AEstrategy_Main* EstretegyMain = GetWorld()->SpawnActor<AEstrategy_Main>(AEstrategy_Main::StaticClass());



	////////////////////////////////////// PATRON BUILDER //////////////////////////////////////

	//// Spawn Builder and Engineer
	//EtapaBuilder = GetWorld()->SpawnActor<ABuPa_Etapa1_OrdaZombie>(ABuPa_Etapa1_OrdaZombie::StaticClass());

	//Engineer = GetWorld()->SpawnActor<ABuPa_ConstructorEtapas>(ABuPa_ConstructorEtapas::StaticClass());

	////Set the Builder for the Engineer and create the buildings

	//Engineer->SetOrdeZombie(EtapaBuilder);
	//Engineer->ConstructorOrdas();

	////Get the Engineer's Lodging and Logs the created buildings
	//
	//ABuPa_SemiOrda* BuPa_SemiOrda = Engineer->GetBuPa_SemiOrda();
	//BuPa_SemiOrda->SemiOrdaCaracteristicas();


	////////////////////////////////////// FIN PATRON  BUILDER //////////////////////////////////////

	
	/////////////////////////// PATRON FACTORY METHOD ZOMBIE ////////////////////// 

	APaFM_CreadorZombie* CreadorZombieMalo = GetWorld()->SpawnActor<AMyPaFM_CreadorZombieMalo>(AMyPaFM_CreadorZombieMalo::StaticClass());

	// creando las posiciones y  registrando nombres
	ZombieVolador = CreadorZombieMalo->OrderZombie("Volador", FVector(-800.0f, 1000.0f, 160.0f));
	ArrayZombie.Add(ZombieVolador);
	ZombieNormal = CreadorZombieMalo->OrderZombie("Normal", FVector(-400.0f, 1000.0f, 160.0f));
	ArrayZombie.Add(ZombieNormal);
	ZombieMinero = CreadorZombieMalo->OrderZombie("Minero", FVector(-600.0f, 1000.0f, 160.0f));
	ArrayZombie.Add(ZombieMinero);
	
	//AEstrategyMovimientoMinero* EstrategyMovimientoMinero = GetWorld()->SpawnActor<AEstrategyMovimientoMinero>(AEstrategyMovimientoMinero::StaticClass());
	//ZombieMinero->ArmandoEstrategia(EstrategyMovimientoMinero);
	////Engage with the current Strategy
	//ZombieMinero->ejecutarEstrategia(ZombieMinero);
	

	//AEstrategyMoviminetoVolar* EstrategyMoviminetoVolar = GetWorld()->SpawnActor<AEstrategyMoviminetoVolar>(AEstrategyMoviminetoVolar::StaticClass());
	//ZombieVolador->ArmandoEstrategia(EstrategyMoviminetoVolar);
	////Engage with the current Strategy
	//ZombieVolador->ejecutarEstrategia(ZombieVolador);
	 
	//////////////////////////////////////////PATRON OBSERVER////////////////////////////////////////

	//Spawn the Clock Tower
	Ob_Torre_Localizador = GetWorld()->SpawnActor<AOb_Torre_Localizador>(AOb_Torre_Localizador::StaticClass());
	//Spawn the first Subscriber and set its Clock Tower
	Ob_ZombieObservado = GetWorld()->SpawnActor<AOb_ZombieObservado>(AOb_ZombieObservado::StaticClass(), FVector(-600.0f, -200.0f, 160.0f), FRotator::ZeroRotator);
	Ob_ZombieObservado->SetOb_Torre_Localizador(Ob_Torre_Localizador);
	Ob_ZombieObservado->SetZombie(ArrayZombie);


	//Spawn the first Subscriber and set its Clock Tower
	Ob_ZombieObservado01 = GetWorld()->SpawnActor<AOb_ZombieObservado>(AOb_ZombieObservado::StaticClass(), FVector(-400.0f, -200.0f, 160.0f), FRotator::ZeroRotator);
	Ob_ZombieObservado01->SetOb_Torre_Localizador(Ob_Torre_Localizador);
	Ob_ZombieObservado01->SetZombie(ArrayZombie);



	//Spawn the first Subscriber and set its Clock Tower
	Ob_ZombieObservado02 = GetWorld()->SpawnActor<AOb_ZombieObservado>(AOb_ZombieObservado::StaticClass(), FVector(-800.0f, -200.0f, 160.0f), FRotator::ZeroRotator);
	Ob_ZombieObservado02->SetOb_Torre_Localizador(Ob_Torre_Localizador);
	Ob_ZombieObservado02->SetZombie(ArrayZombie);



	//Ob_Torre_Localizador->SetDisparoAtras("AtaqueNormal");

	//Ob_Torre_Localizador->SetDisparoAtras("AtaqueNormal");
	//Ob_Torre_Localizador->SetDisparoAtras("AtaqueAtras");
	//Ob_Torre_Localizador->SetDisparoAtras("AtaqueDoble");


	/////////////////////////////////////////FIN OBSERBER/////////////////////////////////////

	//Zombie = CreadorZombieMalo->OrderZombie("Cono", FVector(-400.0f, 830.0f, 160.0f));
	//Zombie = CreadorZombieMalo->OrderZombie("Balde", FVector(-200.0f, 830.0f, 160.0f));
	//Zombie = CreadorZombieMalo->OrderZombie("Pequenio", FVector(0.0f, 830.0f, 160.0f));
	//Zombie = CreadorZombieMalo->OrderZombie("Deportista", FVector(200.0f, 830.0f, 160.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("Funciono")));

	/////////////////////////// PATRON FACTORY METHOD //////////////////////
	
	///////////////////////////// PATRON FACTORY METROD PLANTA ////////////////////////////
	//APlanta_PaFM_Creador* GeneradorPlanta = GetWorld()->SpawnActor<APlanta_PaFM_Generador>(APlanta_PaFM_Generador::StaticClass());

	//// creando las posiciones y  registrando nombres
	//APaFM_Planta* Planta;
	//Planta = GeneradorPlanta->OrderPlanta("Lanzaquizantes", FVector(-600.0f, -200.0f, 160.0f));
	//Planta = GeneradorPlanta->OrderPlanta("Girasol", FVector(-400.0f, -200.0f, 160.0f));
	//Planta = GeneradorPlanta->OrderPlanta("Nuez", FVector(-200.0f, -200.0f, 160.0f));
	//Planta = GeneradorPlanta->OrderPlanta("Repetidora", FVector(0.0f, -200.0f, 160.0f));
	//Planta = GeneradorPlanta->OrderPlanta("Carrinivora", FVector(200.0f, -200.0f, 160.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("Funciono")));

	///////////////////////////// PATRON FACTORY METROD PLANTA ////////////////////////////

	///Implenementacion al video juego del patron facthory method y builder
	
	// Lugar donde quieras crear la instancia del objeto de planta
	//FVector SpawnLocation1 = FVector(-850.0f, 400.0f, 160.0f); // Cambia las coordenadas según tus necesidades

	//AZombie* NewZombieActor1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation1, FRotator::ZeroRotator);

	//FVector SpawnLocation2 = FVector(-500.0f, 200.0f, 160.0f); // Cambia las coordenadas según tus necesidades

	//AZombie* NewZombieActor2 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation2, FRotator::ZeroRotator);


	//// Lugar donde quieras crear la instancia del objeto
	//FVector MinSpawnLocation = FVector(-1000.0f, -1000.0f, 0.0f);
	//FVector MaxSpawnLocation = FVector(1000.0f, 1000.0f, 0.0f);

	//float RandomX = FMath::RandRange(MinSpawnLocation.X, MaxSpawnLocation.X);
	//float RandomY = FMath::RandRange(MinSpawnLocation.Y, MaxSpawnLocation.Y);
	//float Z = 180.0f; // Altura en Z

	//FVector SpawnLocation = FVector(RandomX, RandomY, Z);

	//AZombie* NewZombieActor3 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation, FRotator::ZeroRotator);


	//----------------------aki se generan los zombies-----------------------------------------------------------------------
	
	//FVector SpawnLocationZombie = FVector(-800.0f, 400.0f, 160.0f);

	//// Crear objetos y agregarlos al vector
	//// Se crean los Zombies dinamicamente
	//for (int i = 0; i < 5; i++) {

	//	SpawnLocationZombie.X += 200;

	//	AZombie* NuevoZombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);

	//	NuevoZombie->MovementSpeed = FMath::FRandRange(0.1, 0.5);

	//	vectorZombies.Add(NuevoZombie);
	//}

	////---------------------------------------------->Girasol<---------------------------------------------------------
	//initialPositionX = -1000.0f;
	//initialPositionY = 100.0f;
	//for (int i = 0; i < 2; i++)
	//{
	//	AGirasol* NewGirasol = SpawnPlantGirasol(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//	if (NewGirasol)
	//	{
	//		NewGirasol->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		aPlantas.Add(NewGirasol);

	//		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Energia de %s es: %i"), *NewGirasol->GetName(), NewGirasol->energia));
	//	}



	//	for (int j = 0; j < 2; j++) {
	//		APlanta* NewGirasoles = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY + j * 350.0f, 200.0f));
	//		aPlantas.Add(NewGirasoles);
	//		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Energia de %s es: %i"), *NewLanzaguisantes->GetName(), NewLanzaguisantes->energia));


	//	}
	//}


	//Se crean las plantas dinamicamente
	//FVector SpawnLocationPlant = FVector(-800.0f, -600.0f, 160.0f);
	//FVector SpawnLocationPlantTemp = SpawnLocationPlant;

	////Genera 5 plantas
	//for (int i = 0; i < 5; i++) {

	//	//Define una pocision temporal para las plantas en el eje X
	//	SpawnLocationPlantTemp.X += 200;
	//	for (int j = 0; j < 3; j++) {

	//		//Define una pocision temporal para las plantas en el eje Y
	//		SpawnLocationPlantTemp.Y += 120;

	//		//Genera u nombre para la planta
	//		FString NombrePlanta = FString::Printf(TEXT("Planta%d"), i + 1);

	//		//Crea una nueva instancia de Aplat en el mundo
	//		APaFM_Planta* NuevoPlant = GetWorld()->SpawnActor<APaFM_Planta>(APaFM_Planta::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);

	//		//Asina un valor aleatorio a la energia de la planta
	//		//->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::Printf( TEXT("Energia de % s: % i"),*NombrePlanta,NuevoPlant->energia));

	//		//Agrega la planta al contenedor de plantas
	//		//MapPlanta.Add(NombrePlanta, NuevoPlant);

	//		//Coloca las plantas en una pocision diferente 
	//		//NuevoPlant->SetActorLocation(FVector(i*100,0,0));

	//	}
	//	SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;
	//}

	//World->GetTimerManager().SetTimer(Temporizador, this, &APVZ_USFX_LAB01GameMode::aumentarVelocidad, 1, true);
////////////////////////////////////////////////////////////////////////////////////////////////

//Se crean las plantas dinamicamente
	//FVector SpawnLocationPlant = FVector(-800.0f, -600.0f, 160.0f);
	//FVector SpawnLocationPlantTemp = SpawnLocationPlant;

	////Genera 5 plantas
	//for (int i = 0; i < 5; i++) {

	//	//Define una pocision temporal para las plantas en el eje X
	//	SpawnLocationPlantTemp.X += 200;
	//	for (int j = 0; j < 3; j++) {

	//		//Define una pocision temporal para las plantas en el eje Y
	//		SpawnLocationPlantTemp.Y += 120;

	//		//Genera u nombre para la planta
	//		FString NombrePlanta = FString::Printf(TEXT("Planta%d"), i + 1);

	//		//Crea una nueva instancia de Aplat en el mundo
	//		APlanta* NuevoPlant = GetWorld()->SpawnActor<APlanta>(APlanta::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);

	//		//Asina un valor aleatorio a la energia de la planta
	//		//->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::Printf( TEXT("Energia de % s: % i"),*NombrePlanta,NuevoPlant->energia));

	//		//Agrega la planta al contenedor de plantas
	//		//MapPlanta.Add(NombrePlanta, NuevoPlant);

	//		//Coloca las plantas en una pocision diferente 
	//		//NuevoPlant->SetActorLocation(FVector(i*100,0,0));

	//	}
	//	SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;
	//}

//	//World->GetTimerManager().SetTimer(Temporizador, this, &APVZ_USFX_LAB01GameMode::aumentarVelocidad, 1, true);
}


AGirasol* APVZ_USFX_LAB02GameMode::SpawnPlantGirasol(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<AGirasol>(AGirasol::StaticClass(), SpawnLocation);
}

ASol* APVZ_USFX_LAB02GameMode::SpawnPlantSol(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), SpawnLocation);
}

void APVZ_USFX_LAB02GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
//////////////////////////////////////OBSERVER////////////////////////////////////////
	
	Ob_Torre_Localizador->SetDisparoAtras("ZombieATierra");
	//if (ZombieMinero->GetActorLocation().Y>= -200 && estado01) {
	//
	//	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Disparo Adelante")));
	//	Ob_Torre_Localizador->SetDisparoAtras("AtaqueNormal");
	//	estado01 = false;
	//}
	//if (ZombieMinero->GetActorLocation().Y <= -200 && estado02) {

	//	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Disparo Atras")));
	//	Ob_Torre_Localizador->SetDisparoAtras("AtaqueAtras");
	//	estado02 = false;
	//}
//////////////////////////////////////FIN OBSERVER////////////////////////////////////////

	TiempoTranscurrido += DeltaTime;

	if (TiempoTranscurrido > 2.0f) {
		// Iterar sobre el vector de objetos
		for (int i = 0; i < vectorZombies.Num(); i++) {
			vectorZombies[i]->MovementSpeed = FMath::FRand() * 0.1f;
			//vectorZombies[i]->MovementSpeed += i * 1.0f;
		}
		TiempoTranscurrido = 0.0f;
	}
	
}

APlanta* APVZ_USFX_LAB02GameMode::SpawnPlant(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<APlanta>(APlanta::StaticClass(), SpawnLocation);
}

void APVZ_USFX_LAB02GameMode::aumentarVelocidad()
{
	for (int i = 0; i < vectorZombies.Num(); i++) {
		vectorZombies[i]->MovementSpeed = +FMath::FRandRange(0, 0.2);
	}

}

