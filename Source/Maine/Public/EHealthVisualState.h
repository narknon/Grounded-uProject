#pragma once
#include "CoreMinimal.h"
#include "EHealthVisualState.generated.h"

UENUM(BlueprintType)
enum class EHealthVisualState : uint8 {
    Pristine,
    BarelyDamaged,
    Damaged,
    HeavilyDamaged,
    Destroyed,
};

