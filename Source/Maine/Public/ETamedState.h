#pragma once
#include "CoreMinimal.h"
#include "ETamedState.generated.h"

UENUM(BlueprintType)
enum class ETamedState : uint8 {
    None,
    New,
    Tame,
};

