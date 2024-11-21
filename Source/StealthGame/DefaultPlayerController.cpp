// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultPlayerController.h"

// Sets default values
ADefaultPlayerController::ADefaultPlayerController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADefaultPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADefaultPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADefaultPlayerController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

