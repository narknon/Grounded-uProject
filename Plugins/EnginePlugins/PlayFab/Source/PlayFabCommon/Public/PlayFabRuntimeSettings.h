#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayFabRuntimeSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig)
class PLAYFABCOMMON_API UPlayFabRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductionEnvironmentURL;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeveloperSecretKey;
    
    UPlayFabRuntimeSettings();
};

