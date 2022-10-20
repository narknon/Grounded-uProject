#pragma once
#include "CoreMinimal.h"
#include "EFocusRerouterChildIterationStyle.generated.h"

UENUM(BlueprintType)
enum class EFocusRerouterChildIterationStyle : uint8 {
    Forward,
    Backwards,
};

