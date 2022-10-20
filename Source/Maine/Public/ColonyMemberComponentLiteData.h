#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "GameplayTagContainer.h"
#include "ColonyMemberComponentLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UColonyMemberComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultColonyTag;
    
    UColonyMemberComponentLiteData();
};

