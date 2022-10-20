#pragma once
#include "CoreMinimal.h"
#include "EContextMenuType.generated.h"

UENUM(BlueprintType)
enum class EContextMenuType : uint8 {
    INVALID,
    Item,
    Canteen,
    Mountable,
};

