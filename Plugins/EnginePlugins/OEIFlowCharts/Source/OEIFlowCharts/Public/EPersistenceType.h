#pragma once
#include "CoreMinimal.h"
#include "EPersistenceType.generated.h"

UENUM(BlueprintType)
enum class EPersistenceType : uint8 {
    None,
    OnceEver,
    OncePerConversation,
    MarkAsRead,
};

