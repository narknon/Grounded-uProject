#pragma once
#include "CoreMinimal.h"
#include "EEquipmentChangeFailureFromFullInventoryStimulus.generated.h"

UENUM(BlueprintType)
enum class EEquipmentChangeFailureFromFullInventoryStimulus : uint8 {
    Unequip,
    EquipTwoHandedWeapon,
};

