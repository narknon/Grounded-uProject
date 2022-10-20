#pragma once
#include "CoreMinimal.h"
#include "MotionEaterCharacterEventDelegate.generated.h"

class UCharacterMotionEaterComponent;
class ASurvivalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMotionEaterCharacterEvent, UCharacterMotionEaterComponent*, Sender, ASurvivalCharacter*, Character);

