#pragma once
#include "CoreMinimal.h"
#include "EInteractionPriority.generated.h"

UENUM(BlueprintType)
enum class EInteractionPriority : uint8 {
    Default,
    Creatures,
    Items,
    Buildings,
    Foliage,
    Water,
    Lowest,
};

