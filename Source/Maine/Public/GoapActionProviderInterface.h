#pragma once
#include "CoreMinimal.h"
#include "GoapAction.h"
#include "SurvivalGameInstance.h"

#include "GoapActionProviderInterface.generated.h"


UINTERFACE(Blueprintable, MinimalAPI)
class UGoapActionProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IGoapActionProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UGoapAction*> AllocateGOAPActions(USurvivalGameInstance* GameInstance, UObject* InOwner) const;
    
};

