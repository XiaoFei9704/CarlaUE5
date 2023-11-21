// // Copyright (c) 2020 Computer Vision Center (CVC) at the Universitat Autonoma\n// de Barcelona (UAB).\n//\n// Copyright (c) 2023 Synkrotron.ai\n//\n// This work is licensed under the terms of the MIT license.\n// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LargeMapManager.generated.h"

UCLASS()
class CARLA_API ALargeMapManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALargeMapManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
