#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectValueType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectValueType : uint8 {
    None,
    Add,
    Multiply,
};

