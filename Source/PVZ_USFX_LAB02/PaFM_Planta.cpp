// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_Planta.h"
#include "Proyectil.h"
//#include "PVZ_USFX_LAB02Projectile.h"

// Sets default values
APaFM_Planta::APaFM_Planta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlantaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Planta Mesh"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh1(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	if (PlantMesh1.Succeeded())
	{
		PlantaMesh->SetStaticMesh(PlantMesh1.Object);
	}
	RootComponent = PlantaMesh;

	PlantaMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	PlantaMesh->SetSimulatePhysics(false);
	PlantaMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = PlantaMesh;


	// Inicializando valores de Disparar


	bCanFire = true;

	GunOffset = FVector(50.f, 50.f, 0.f);
	GunOffset1 = FVector(50.f, 0.f, 0.f);
	FireRate = 0.5f;

	disparo=true;
	disparoAtras=false;

	TiempoTranscurrido = 1.5f;
	CurrentTiempoTranscurrido = 1.5f; 


}


// Called when the game starts or when spawned
void APaFM_Planta::BeginPlay()
{
	Super::BeginPlay();

	/*GetWorldTimerManager().SetTimer(MineroSalidaTimerHandle, this, &APaFM_Planta::noDisparar, 2.0f, false);
	GetWorldTimerManager().SetTimer(MineroEntradaTimerHandle, this, &APaFM_Planta::disparar, 10.0f, true);*/

	
}

// Called every frame
void APaFM_Planta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);




	if (Health <= 0)
	{
		Destroy();
	}

	if (disparo) {
	
		TiempoTranscurrido += DeltaTime;
		if (TiempoTranscurrido >= CurrentTiempoTranscurrido)
		{
			if(disparoAtras)
			FireShot(FVector(0.0f, -1.0f, 0.0f));
			
			FireShot(FVector(0.0f, 1.0f, 0.0f));
			TiempoTranscurrido = 0.0f;
		}
	}
	else {

		TiempoTranscurrido += DeltaTime;
		if (TiempoTranscurrido >= CurrentTiempoTranscurrido)
		{
			if (disparoAtras)
				FireShot(FVector(0.0f, -1.0f, 0.0f));
			 TiempoTranscurrido = 0.0f;
			
		}
	}
	/*FireShot(FVector(0.0f, 1.0f, 0.0f));
	bCanBeInCluster = false;*/

}

void APaFM_Planta::ShotTimerExpired()
{
		bCanFire = true;
}

FString APaFM_Planta::GetPlantaName()
{
	return PlantaName;
}

void APaFM_Planta::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
			//const FVector SpawnLocation1 = GetActorLocation() + FireRotation.RotateVector(GunOffset1);
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AProyectil>(SpawnLocation, FireRotation);

				/*if (DispararDoble) {
					World->SpawnActor<AProyectil>(SpawnLocation1, FireRotation);
				}*/
			}

			/*bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APaFM_Planta::ShotTimerExpired, FireRate);*/

		}
	}
}

void APaFM_Planta::disparar()
{
	bCanFire = true;
}

void APaFM_Planta::noDisparar()
{
	bCanFire = false;
}




