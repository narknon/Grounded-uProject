#pragma once
#include "CoreMinimal.h"
#include "VitalStatChangedDelegateDelegate.generated.h"

class UInterestCore;
class UBaseVitalStat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVitalStatChangedDelegate, UInterestCore*, Sender, const UBaseVitalStat*, Stat);

