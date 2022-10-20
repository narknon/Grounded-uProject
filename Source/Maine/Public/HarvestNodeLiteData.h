#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorLiteData.h"
#include "HarvestNodeLiteData.generated.h"

class AProxyStandInActor;

UCLASS(Blueprintable)
class MAINE_API UHarvestNodeLiteData : public UActorLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameLifetimeHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowFoliageRespawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowLODNavDirtying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LODFullActorMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProxyStandInActor> ProxyStandInClass;
    
    UHarvestNodeLiteData();
};

