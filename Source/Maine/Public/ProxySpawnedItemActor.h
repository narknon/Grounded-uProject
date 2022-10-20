#pragma once
#include "CoreMinimal.h"
#include "ProxyActor.h"
#include "ItemContainerInterface.h"
#include "GameplayTagContainer.h"
#include "ProxySpawnedItemActor.generated.h"

class UBaseLODActor;
class UItem;

UCLASS(Blueprintable)
class MAINE_API UProxySpawnedItemActor : public UProxyActor, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItem* Item;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UBaseLODActor> DroppedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GoapRegionTag;
    
    UProxySpawnedItemActor();
    
    // Fix for true pure virtual functions not being implemented
};

