#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "ProxyComponentTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FProxyComponentTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    MAINE_API FProxyComponentTickFunction();
};

template<>
struct TStructOpsTypeTraits<FProxyComponentTickFunction> : public TStructOpsTypeTraitsBase2<FProxyComponentTickFunction>
{
    enum
    {
        WithCopy = false
    };
};