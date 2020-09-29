// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonFunctions.h"

bool UCommonFunctions::RandomSuccess(int32 successRate)
{
	FRandomStream Stream;
	Stream.GenerateNewSeed();
	int32 result = Stream.RandRange(1, 100);
	if (result > successRate) return false;
	else return true;
}

int32 UCommonFunctions::RandomLevel(TArray<int32> rateArray)
{
	FRandomStream Stream;
	Stream.GenerateNewSeed();
	int32 result = Stream.RandRange(1, 100);

	int32 i = 0;
	for (; i < rateArray.Num(); i++)
	{
		result -= rateArray[i];
		if (result <= 0) break;
	}
	return i;
}
