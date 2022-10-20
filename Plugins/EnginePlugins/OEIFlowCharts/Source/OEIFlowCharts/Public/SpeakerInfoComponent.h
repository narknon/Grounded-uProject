#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpeakerInfo.h"
#include "SpeakerInfoComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIFLOWCHARTS_API USpeakerInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeakerInfo SpeakerInfo;
    
    USpeakerInfoComponent();
};

