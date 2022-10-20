#pragma once
#include "CoreMinimal.h"
#include "EPlayerCharacterIdentity.h"
#include "PlayerIdentityStruct.generated.h"

class UProgressBar;

USTRUCT(BlueprintType)
struct FPlayerIdentityStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerCharacterIdentity Identity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar;
    
    MAINE_API FPlayerIdentityStruct();
};

