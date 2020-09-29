// Fill out your copyright notice in the Description page of Project Settings.


#include "WeatherController.h"

// Sets default values
AWeatherController::AWeatherController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeatherController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeatherController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeatherController::NextWeather()
{
	//if (UCommonFunctions::RandomSuccess(weatherChangeRate)) return;

	//nowWeather = (UWeatherEnum)UCommonFunctions::RandomLevel(weatherRate);

	nowWeather = UWeatherEnum::RAIN;
	ChangeImage();
}

