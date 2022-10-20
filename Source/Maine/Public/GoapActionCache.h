#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GoapActionCache.generated.h"

class UGoapAction;
class UGoapActionCacheData;

UCLASS(Blueprintable)
class MAINE_API UGoapActionCache : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGoapActionCacheData* CacheData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGoapAction*> CachedActions;
    
public:
    UGoapActionCache();
};

