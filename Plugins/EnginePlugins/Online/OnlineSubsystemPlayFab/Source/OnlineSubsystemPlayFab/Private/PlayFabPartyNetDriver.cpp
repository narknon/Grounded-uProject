#include "PlayFabPartyNetDriver.h"

UPlayFabPartyNetDriver::UPlayFabPartyNetDriver() : Super(FObjectInitializer::Get()) {
    this->DebugDelayAfterTravelHost = 0.00f;
    this->DebugDelayAfterTravelClient = 0.00f;
}

