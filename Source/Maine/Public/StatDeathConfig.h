#pragma once
#include "CoreMinimal.h"
#include "PlayerStatConfig.h"
#include "StatDeathConfig.generated.h"

UCLASS(Blueprintable)
class MAINE_API UStatDeathConfig : public UPlayerStatConfig {
    GENERATED_BODY()
public:
    UStatDeathConfig();
};

