// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeatherEnum.h"
#include "CommonFunctions.h"
#include "WeatherController.generated.h"

UCLASS()
class GUILDMASTER_API AWeatherController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeatherController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void NextWeather();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ChangeImage();
public:
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	UWeatherEnum nowWeather;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	int32 weatherChangeRate;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	TArray<int32> weatherRate;
};
