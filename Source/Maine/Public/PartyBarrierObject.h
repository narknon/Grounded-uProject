#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PartyBarrierObject.generated.h"

UCLASS(Blueprintable)
class MAINE_API UPartyBarrierObject : public UObject {
    GENERATED_BODY()
public:
    UPartyBarrierObject();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldExecuteBarrier() const;
    
};

