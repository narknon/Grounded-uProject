#pragma once
#include "CoreMinimal.h"
#include "EOnlineUserPrivilegeDenyReason.generated.h"

UENUM(BlueprintType)
enum class EOnlineUserPrivilegeDenyReason : uint8 {
    None,
    PurchaseRequired,
    Restricted,
    Banned,
    UpdateRequired,
    ServiceVersionMismatch,
    ServiceMaintenance,
    Unknown = 0xFF,
};

