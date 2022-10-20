#pragma once
#include "CoreMinimal.h"
#include "ETimeOfDay.generated.h"

UENUM(BlueprintType)
enum class ETimeOfDay : uint8 {
    Morning,
    Day,
    Evening,
    Night,
};

