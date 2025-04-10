// Fill out your copyright notice in the Description page of Project Settings.


#include "Runner_GameMode.h"
#include "GameFramework/Actor.h"



ARunner_GameMode::ARunner_GameMode() {
	PrimaryActorTick.bCanEverTick = true;
}


void ARunner_GameMode::BeginPlay() {
	Super::BeginPlay();
	FTimerHandle UnsedHandle;
	GetWorldTimerManager().SetTimer(
		UnsedHandle, this, &ARunner_GameMode::SpawnPlayerRecharge, FMath::RandRange(2,5), true
	);
}

void ARunner_GameMode::SpawnPlayerRecharge()
{
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}

void ARunner_GameMode::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}