#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LocString.h"
#include "ContextEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FContextEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DisplayImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString DisplayString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTag;
    
    MAINE_API FContextEntry();
};

