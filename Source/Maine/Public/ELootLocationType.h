#pragma once
#include "CoreMinimal.h"
#include "ELootLocationType.generated.h"

UENUM(BlueprintType)
enum class ELootLocationType : uint8 {
    WorldDrop,
    Inventory,
};

