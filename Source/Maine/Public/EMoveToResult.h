#pragma once
#include "CoreMinimal.h"
#include "EMoveToResult.generated.h"

UENUM(BlueprintType)
enum class EMoveToResult : uint8 {
    Pending,
    Success,
    Blocked,
    UnexpectedFailure,
    OffNavMesh,
};

