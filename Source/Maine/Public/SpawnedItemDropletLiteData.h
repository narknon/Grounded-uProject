#pragma once
#include "CoreMinimal.h"
#include "SpawnedItemLiteData.h"
#include "SpawnedItemDropletLiteData.generated.h"

class ASpawnedItemDroplet;

UCLASS(Blueprintable)
class MAINE_API USpawnedItemDropletLiteData : public USpawnedItemLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASpawnedItemDroplet> UnfrozenReplacement;
    
    USpawnedItemDropletLiteData();
};

