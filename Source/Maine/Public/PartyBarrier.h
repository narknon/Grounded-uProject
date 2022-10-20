#pragma once
#include "CoreMinimal.h"
#include "PartyBarrier.generated.h"

USTRUCT(BlueprintType)
struct FPartyBarrier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BarrierName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxActiveTime;
    
    MAINE_API FPartyBarrier();
};

