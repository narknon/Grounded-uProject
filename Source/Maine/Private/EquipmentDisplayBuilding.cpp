#include "EquipmentDisplayBuilding.h"
#include "InventoryComponent.h"
#include "EquipmentComponent.h"

class UItem;
class USkeletalMeshComponent;
class UMeshComponent;

bool AEquipmentDisplayBuilding::IsValidItem(UItem* Item) const {
    return false;
}

bool AEquipmentDisplayBuilding::IsValidEquipmentSlot(EEquipmentSlot Slot) const {
    return false;
}

UMeshComponent* AEquipmentDisplayBuilding::GetEquipmentMeshComponent_Implementation() const {
    return NULL;
}

USkeletalMeshComponent* AEquipmentDisplayBuilding::GetArmorMeshComponent_Implementation(EEquipmentSlot Slot) const {
    return NULL;
}

AEquipmentDisplayBuilding::AEquipmentDisplayBuilding() {
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
    this->EquipmentComponent = CreateDefaultSubobject<UEquipmentComponent>(TEXT("EquipmentComponent"));
}

