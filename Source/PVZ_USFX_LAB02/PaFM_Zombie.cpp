// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_Zombie.h"
#include "Components/BoxComponent.h"
#include "proyectil.h"
#include "MyPaFM_CreadorZombieMalo.h"

// Sets default values
APaFM_Zombie::APaFM_Zombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ZombieMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Zombie Mesh"));
	RootComponent = ZombieMesh;
	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	if (ZombieMeshAsset.Succeeded())
	{
		ZombieMesh->SetStaticMesh(ZombieMeshAsset.Object);
	}
	
	ZombieBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ZombieBoxComponent"));
	/*ZombieBoxComponent->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));*/
	ZombieBoxComponent->SetHiddenInGame(false);


	ZombieMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ZombieBoxComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);


	VelocityBrickBoss = 2.0f;
	MovingX = -10;

	MovementSpeed = 5.1f;

}



// Called when the game starts or when spawned
void APaFM_Zombie::BeginPlay()
{
	Super::BeginPlay();



	
}

void APaFM_Zombie::KillZombie()
{
	this->Destroy();
}

// Called every frame
void APaFM_Zombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector MoveDirection = FVector(0.0f, MovingX, 0.0f);//dandole una direccion de movimiento , Calcular movimiento
	const FVector Movement = MoveDirection * VelocityBrickBoss * DeltaTime;// la velocidad en la que se va mover



	//Si no es de tama?o cero, mueve a este actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = FRotator(0.0f, 0.0f, 0.0f);// la rotacion de la capsula

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, false, &Hit);

	}

}

FString APaFM_Zombie::GetZombibeName()
{
	return ZombieName;
}

/////////////////////////////////////////////////////////////////////

void APaFM_Zombie::ArmandoEstrategia(AActor* myEstrategia)
{
	// Try to cast the passed Strategy and set it to the current one
	Estrategy_Planta = Cast<IEstrategy_Planta>(myEstrategia);
	//Log Error if the cast failed
	if (!Estrategy_Planta)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("AlterManeuvers(): The Actor is not a BattleShipStrategy!Are you sure that the Actor implements that interface ? "));
	}
}

void APaFM_Zombie::ejecutarEstrategia(AActor* zombie)
{
	//Log Error if the current Strategy is NULL
	if (!Estrategy_Planta) {
		UE_LOG(LogTemp, Error, TEXT("Engage():BattleStrategy is NULL, make sure it's initialized."));
		return;
	}
	//Execute the current Strategy Maneuver
	Estrategy_Planta->atacar(zombie);
}
/////////////////////////////////////////////////////////////////////

void APaFM_Zombie::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	//KillZombie();
	AProyectil* Proyectil = Cast<AProyectil>(Other);
	if (Proyectil)
	{
		if (vida == 0)
		{
			this->Destroy();
		}
		vida = vida - 20;
	}
}






