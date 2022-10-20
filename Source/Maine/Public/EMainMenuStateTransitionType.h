#pragma once
#include "CoreMinimal.h"
#include "EMainMenuStateTransitionType.generated.h"

UENUM(BlueprintType)
enum class EMainMenuStateTransitionType : uint8 {
    Forwards,
    Backwards,
};

