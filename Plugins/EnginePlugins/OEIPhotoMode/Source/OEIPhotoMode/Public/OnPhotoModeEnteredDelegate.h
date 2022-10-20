#pragma once
#include "CoreMinimal.h"
#include "OnPhotoModeEnteredDelegate.generated.h"

class APhotoPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPhotoModeEntered, APhotoPawn*, PhotoPawn);

