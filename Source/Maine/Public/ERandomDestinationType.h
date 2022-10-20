#pragma once
#include "CoreMinimal.h"
#include "ERandomDestinationType.generated.h"

UENUM(BlueprintType)
enum class ERandomDestinationType : uint8 {
    Wander,
    Explore,
    Investigate,
    ConeWander,
};

