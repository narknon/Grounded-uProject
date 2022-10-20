#pragma once
#include "CoreMinimal.h"
#include "AuraInfoBase.h"
#include "GameplayTagContainer.h"
#include "AuraOverlapCounts.h"
#include "AuraReceiverInfo.generated.h"

class UAuraReceiverComponent;

USTRUCT(BlueprintType)
struct FAuraReceiverInfo : public FAuraInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAuraOverlapCounts> AuraTagOverlapCount;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UAuraReceiverComponent> Receiver;
    
    MAINE_API FAuraReceiverInfo();
};

