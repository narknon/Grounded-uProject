#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "WidgetBuilding.h"
#include "EquipmentDisplayBuilding.generated.h"

class USkeletalMeshComponent;
class UInventoryComponent;
class UEquipmentComponent;
class UItem;
class UMeshComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API AEquipmentDisplayBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentComponent* EquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEquipmentSlot> ValidEquipmentSlots;
    
public:
    AEquipmentDisplayBuilding();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidEquipmentSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMeshComponent* GetEquipmentMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetArmorMeshComponent(EEquipmentSlot Slot) const;
    
};

