#pragma once
#include "CoreMinimal.h"
#include "EJoinSessionFailureResult.generated.h"

UENUM(BlueprintType)
enum class EJoinSessionFailureResult : uint8 {
    Success,
    SessionIsFull,
    SessionDoesNotExist,
    CouldNotRetrieveAddress,
    AlreadyInSession,
    UnknownError,
};

