#pragma once
#include "CoreMinimal.h"
#include "EWaveState.generated.h"

UENUM(BlueprintType)
enum class EWaveState : uint8 {
    None,
    SeekBase,
    Retreat,
    Complete,
};

