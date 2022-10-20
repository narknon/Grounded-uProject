#pragma once
#include "CoreMinimal.h"
#include "GoapAction.h"
#include "GoapActionOwner.h"
#include "GoapActionInstance.generated.h"


USTRUCT(BlueprintType)
struct FGoapActionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoapActionOwner Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectToGround;
    
    MAINE_API FGoapActionInstance();
};

FORCEINLINE uint32 GetTypeHash(const FGoapActionInstance) { return 0; };