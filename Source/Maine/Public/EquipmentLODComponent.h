#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "PersistentInterface.h"
#include "ItemContainerInterface.h"
#include "EEquipmentSlot.h"
#include "EquipmentLODComponent.generated.h"

class UProxyEquipmentComponent;
class UEquipmentComponent;
class UItem;

UCLASS(Blueprintable)
class MAINE_API UEquipmentLODComponent : public UBaseLODComponent, public IPersistentInterface, public IItemContainerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItem*> SerializedEquippedItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProxyEquipmentComponent* ProxyEquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentComponent* FullEquipmentComponent;
    
public:
    UEquipmentLODComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetItemInSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EEquipmentSlot> GetEquipmentSlots() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

