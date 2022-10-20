#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LODableActorInterface.h"
#include "BuoyantProp.generated.h"

class UActorLiteData;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API ABuoyantProp : public AActor, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPhysicsAsleep: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorLiteData* LiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PropMesh;
    
public:
    ABuoyantProp();
    
    // Fix for true pure virtual functions not being implemented
};

