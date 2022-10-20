#pragma once
#include "CoreMinimal.h"
#include "PartyComponentPlayerDelegateDelegate.generated.h"

class UPartyComponent;
class ASurvivalPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPartyComponentPlayerDelegate, UPartyComponent*, Sender, ASurvivalPlayerCharacter*, Player);

