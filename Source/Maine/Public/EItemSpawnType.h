#pragma once
#include "CoreMinimal.h"
#include "EItemSpawnType.generated.h"

UENUM(BlueprintType)
enum class EItemSpawnType : uint8 {
    World,
    Equippable,
    Cooking,
    Drying,
    Processing,
};

