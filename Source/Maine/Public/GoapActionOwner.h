#pragma once
#include "CoreMinimal.h"
#include "GoapActionOwner.generated.h"

USTRUCT(BlueprintType)
struct FGoapActionOwner {
    GENERATED_BODY()
public:
    MAINE_API FGoapActionOwner();
};

FORCEINLINE uint32 GetTypeHash(const FGoapActionOwner) { return 0; };