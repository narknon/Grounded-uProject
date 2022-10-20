#pragma once
#include "CoreMinimal.h"
#include "EOnlinePermissionDenyReason.generated.h"

UENUM(BlueprintType)
enum class EOnlinePermissionDenyReason : uint8 {
    Allowed,
    Unknown,
    NotAllowed,
    MissingPrivilege,
    PrivilegeRestrictsTarget,
    BlockListRestrictsTarget,
    MuteListRestrictsTarget,
    PrivacySettingsRestrictsTarget,
};

