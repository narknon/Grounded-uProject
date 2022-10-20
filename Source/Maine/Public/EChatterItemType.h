#pragma once
#include "CoreMinimal.h"
#include "EChatterItemType.generated.h"

UENUM(BlueprintType)
enum class EChatterItemType : uint8 {
    None,
    Generic,
    Axe,
    Hammer,
    Spear,
    Bow,
};

