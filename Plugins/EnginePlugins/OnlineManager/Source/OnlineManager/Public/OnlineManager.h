#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnlineManager.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config = Engine)
class ONLINEMANAGER_API UOnlineManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubsystemToLink;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDevModeDisplayName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceDevModeDisplayName;
    
    UOnlineManager();
};

