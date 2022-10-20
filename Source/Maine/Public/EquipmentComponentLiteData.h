#pragma once
#include "CoreMinimal.h"
#include "EquipmentSlotsFlags.h"
#include "ComponentLiteData.h"
#include "EquipmentComponentLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UEquipmentComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentSlotsFlags HasEquipmentSlots;
    
    UEquipmentComponentLiteData();
};

