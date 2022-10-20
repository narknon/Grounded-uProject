#pragma once
#include "CoreMinimal.h"
#include "ETrackedSpawnState.generated.h"

UENUM(BlueprintType)
enum class ETrackedSpawnState : uint8 {
    NotSpawned,
    Spawned,
};

