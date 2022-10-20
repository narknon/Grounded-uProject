#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "ArmorEquipmentSlot.h"
#include "EEquipmentSlot.h"
#include "HUDArmorWidget.generated.h"

class UItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UHUDArmorWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorEquipmentSlot HeadSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorEquipmentSlot ChestSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorEquipmentSlot LegSlot;
    
public:
    UHUDArmorWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGameModeChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipmentChangedImpl(UItem* Item, EEquipmentSlot EquipmentSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquipmentChanged(const FArmorEquipmentSlot& EquipmentSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDurabilityChanged(const FArmorEquipmentSlot& SlotStruct);
    
};

