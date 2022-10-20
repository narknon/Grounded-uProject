#pragma once
#include "CoreMinimal.h"
#include "EWaveSpawnState.generated.h"

UENUM(BlueprintType)
enum class EWaveSpawnState : uint8 {
    None,
    ChooseStartLocation,
    SpawnWave,
    Waiting,
};

