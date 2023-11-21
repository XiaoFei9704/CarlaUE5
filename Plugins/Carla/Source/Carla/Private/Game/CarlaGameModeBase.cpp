// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/CarlaGameModeBase.h"

ACarlaGameModeBase::ACarlaGameModeBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("CarlaGamemodeBase Constructing"));
}

void ACarlaGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	UE_LOG(LogTemp, Warning, TEXT("CarlaGamemodeBase InitGame"));
}

void ACarlaGameModeBase::RestartPlayer(AController* NewPlayer)
{
	Super::RestartPlayer(NewPlayer);
	UE_LOG(LogTemp, Warning, TEXT("CarlaGamemodeBase RestartPlayer"));
}

void ACarlaGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("CarlaGamemodeBase BeginPlay"));
}

void ACarlaGameModeBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	UE_LOG(LogTemp, Warning, TEXT("CarlaGamemodeBase EndPlay"));
}

void ACarlaGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UE_LOG(LogTemp, Warning, TEXT("CarlaGamemodeBase Tick"));
}
