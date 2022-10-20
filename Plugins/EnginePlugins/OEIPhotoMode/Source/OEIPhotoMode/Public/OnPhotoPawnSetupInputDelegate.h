#pragma once
#include "CoreMinimal.h"
#include "OnPhotoPawnSetupInputDelegate.generated.h"

class APhotoPawn;
class UInputComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPhotoPawnSetupInput, APhotoPawn*, Pawn, UInputComponent*, InputComponent);

