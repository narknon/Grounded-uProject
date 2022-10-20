#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InterestManagerComponent.generated.h"

class UInterestCore;
class UAttractionLODComponent;
class UAttractionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UInterestManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInterestCore*> ImmediateScanList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAttractionLODComponent*> MovingLODAdvertisements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAttractionComponent*> FullAdvertisements;
    
public:
    UInterestManagerComponent();
};

