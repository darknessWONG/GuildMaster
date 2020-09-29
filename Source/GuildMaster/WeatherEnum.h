// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "WeatherEnum.generated.h"

UENUM()
enum class UWeatherEnum: uint8{
	SUNNY,
	RAIN,
	CLOUDY
};