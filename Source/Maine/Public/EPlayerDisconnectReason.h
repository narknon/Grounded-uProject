#pragma once
#include "CoreMinimal.h"
#include "EPlayerDisconnectReason.generated.h"

UENUM(BlueprintType)
enum class EPlayerDisconnectReason : uint8 {
    None,
    Kicked,
};

