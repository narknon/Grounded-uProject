#pragma once
#include "CoreMinimal.h"
#include "EMoveToType.generated.h"

UENUM(BlueprintType)
enum class EMoveToType : uint8 {
    None,
    MoveToActor,
    MoveToLocation,
};

