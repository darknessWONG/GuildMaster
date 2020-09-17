// Fill out your copyright notice in the Description page of Project Settings.


#include "Dialog_Controller.h"

// Sets default values
ADialog_Controller::ADialog_Controller()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SetActorTickEnabled(false);
}

// Called when the game starts or when spawned
void ADialog_Controller::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADialog_Controller::NextDialog()
{
	DialogIndex++;
}

// Called every frame
void ADialog_Controller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

