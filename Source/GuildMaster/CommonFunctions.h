// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CommonFunctions.generated.h"

/**
 * 
 */
UCLASS()
class GUILDMASTER_API UCommonFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static bool RandomSuccess(int32 successRate);

	UFUNCTION(BlueprintCallable)
	static int32 RandomLevel(TArray<int32> rateArray);
};
