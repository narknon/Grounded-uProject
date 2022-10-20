#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "ActorCustomTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FActorCustomTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    MAINE_API FActorCustomTickFunction();
};


template<>
struct TStructOpsTypeTraits<FActorCustomTickFunction> : public TStructOpsTypeTraitsBase2<FActorCustomTickFunction>
{
    enum
    {
        WithCopy = false
    };
};
