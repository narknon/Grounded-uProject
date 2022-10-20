#pragma once
#include "CoreMinimal.h"
#include "ETriggerSourceType.generated.h"

UENUM(BlueprintType)
enum class ETriggerSourceType : uint8 {
    Node,
    Programmatic,
};

