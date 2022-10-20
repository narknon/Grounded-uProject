#pragma once
#include "CoreMinimal.h"
#include "EAbilityTargetType.generated.h"

UENUM(BlueprintType)
enum class EAbilityTargetType : uint8 {
    Enemy,
    Self,
    Scripted,
};

