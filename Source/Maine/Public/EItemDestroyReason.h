#pragma once
#include "CoreMinimal.h"
#include "EItemDestroyReason.generated.h"

UENUM(BlueprintType)
enum class EItemDestroyReason : uint8 {
    Error,
    Power,
    Durability,
    Hatched,
};

