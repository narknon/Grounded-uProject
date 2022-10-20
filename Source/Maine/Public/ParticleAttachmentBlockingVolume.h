#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "EParticleBlockingVolumeType.h"
#include "ParticleAttachmentBlockingVolume.generated.h"

class USphereComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class MAINE_API AParticleAttachmentBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* InnerBlockingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OuterBlockingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* KillVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParticleBlockingVolumeType Type;
    
    AParticleAttachmentBlockingVolume();
};

