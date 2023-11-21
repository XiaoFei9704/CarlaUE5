// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CarlaGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CARLA_API ACarlaGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACarlaGameModeBase(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

	virtual void RestartPlayer(AController* NewPlayer) override;

	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void Tick(float DeltaSeconds) override;
};
