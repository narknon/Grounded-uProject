#pragma once
#include "CoreMinimal.h"
#include "EGardenItemType.generated.h"

UENUM(BlueprintType)
enum class EGardenItemType : uint8 {
    None,
    Catalyst,
    Modifier,
};

