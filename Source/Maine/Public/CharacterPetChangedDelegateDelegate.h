#pragma once
#include "CoreMinimal.h"
#include "CharacterPetChangedDelegateDelegate.generated.h"

class ASurvivalCreature;
class ASurvivalPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterPetChangedDelegate, ASurvivalPlayerCharacter*, Sender, ASurvivalCreature*, Pet);

