#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LODableActorInterface.h"
#include "LODableActor.generated.h"

class UActorLiteData;

UCLASS(Abstract, Blueprintable)
class MAINE_API ALODableActor : public AActor, public ILODableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorLiteData* LiteData;
    
public:
    ALODableActor();
    
    // Fix for true pure virtual functions not being implemented
};

