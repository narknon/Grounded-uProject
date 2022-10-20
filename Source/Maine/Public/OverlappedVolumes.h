#pragma once
#include "CoreMinimal.h"
#include "OverlappedVolumes.generated.h"

class AGameZoneVolume;
class APlayerState;

USTRUCT(BlueprintType)
struct FOverlappedVolumes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGameZoneVolume*> Volumes;
    
    MAINE_API FOverlappedVolumes();
};

