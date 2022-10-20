#pragma once
#include "CoreMinimal.h"
#include "ELODActorFilterType.generated.h"

UENUM(BlueprintType)
enum class ELODActorFilterType : uint8 {
    AllActors,
    FullActors,
    ProxyActors,
};

