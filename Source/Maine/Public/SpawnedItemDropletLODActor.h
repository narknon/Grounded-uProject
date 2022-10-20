#pragma once
#include "CoreMinimal.h"
#include "SpawnedItemLODActor.h"
#include "SwappableFoliageInterface.h"
#include "SpawnedItemDropletLODActor.generated.h"

UCLASS(Blueprintable)
class MAINE_API USpawnedItemDropletLODActor : public USpawnedItemLODActor, public ISwappableFoliageInterface {
    GENERATED_BODY()
public:
    USpawnedItemDropletLODActor();
    
    // Fix for true pure virtual functions not being implemented
};

