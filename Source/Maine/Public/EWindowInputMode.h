#pragma once
#include "CoreMinimal.h"
#include "EWindowInputMode.generated.h"

UENUM(BlueprintType)
enum class EWindowInputMode : uint8 {
    UI,
    GameAndUI,
    Game,
};

