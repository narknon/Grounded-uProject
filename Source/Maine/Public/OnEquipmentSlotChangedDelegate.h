#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "OnEquipmentSlotChangedDelegate.generated.h"

class UItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipmentSlotChanged, UItem*, Item, EEquipmentSlot, EquipmentSlot);

