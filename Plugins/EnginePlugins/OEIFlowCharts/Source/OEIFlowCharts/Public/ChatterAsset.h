#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChatterBundle.h"
#include "ChatterAsset.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UChatterAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatterBundle ChatterBundle;
    
public:
    UChatterAsset();
};

