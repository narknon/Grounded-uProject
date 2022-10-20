#pragma once
#include "CoreMinimal.h"
#include "EQuestionNodeDisplayType.generated.h"

UENUM(BlueprintType)
enum class EQuestionNodeDisplayType : uint8 {
    ShowOnce,
    ShowAlways,
    ShowNever,
};

