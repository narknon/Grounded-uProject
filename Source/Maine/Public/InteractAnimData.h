#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractAnimData.generated.h"

class UAnimEffect;
class AActor;

USTRUCT(BlueprintType)
struct MAINE_API FInteractAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimEffect* Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Prop;
    
    FInteractAnimData();
};

