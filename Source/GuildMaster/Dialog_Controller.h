// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dialog_Controller.generated.h"

UCLASS()
class GUILDMASTER_API ADialog_Controller : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADialog_Controller();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void NextDialog();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ChangeDialog();

protected:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	int32 DialogIndex = -1;

};
