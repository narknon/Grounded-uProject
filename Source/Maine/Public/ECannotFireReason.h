#pragma once
#include "CoreMinimal.h"
#include "ECannotFireReason.generated.h"

UENUM(BlueprintType)
enum class ECannotFireReason : uint8 {
    None,
    Cooldown,
    NoAmmo,
};

