#pragma once
#include "CoreMinimal.h"
#include "ProxySpawnedItemActor.h"
#include "SwappableFoliageInterface.h"
#include "ProxySpawnedItemDropletActor.generated.h"

UCLASS(Blueprintable)
class MAINE_API UProxySpawnedItemDropletActor : public UProxySpawnedItemActor, public ISwappableFoliageInterface {
    GENERATED_BODY()
public:
    UProxySpawnedItemDropletActor();
    
    // Fix for true pure virtual functions not being implemented
};

