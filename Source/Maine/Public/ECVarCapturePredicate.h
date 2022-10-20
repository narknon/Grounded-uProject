#pragma once
#include "CoreMinimal.h"
#include "ECVarCapturePredicate.generated.h"

UENUM(BlueprintType)
enum class ECVarCapturePredicate : uint8 {
    Always,
    AtLeast,
    AtMost,
};

