#pragma once
#include "CoreMinimal.h"
#include "EExceptionRestoreOption.generated.h"

UENUM(BlueprintType)
enum class EExceptionRestoreOption : uint8 {
    DynamicAndPreplacedActors,
    DynamicActors,
    PreplacedActors,
};

