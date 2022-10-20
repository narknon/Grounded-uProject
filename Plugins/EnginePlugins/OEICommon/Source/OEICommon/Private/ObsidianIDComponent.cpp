#include "ObsidianIDComponent.h"

void UObsidianIDComponent::ResetID() {
}

UObsidianIDComponent::UObsidianIDComponent() {
    this->DataTag = 0.00f;
    this->bIgnoreSavingOfDestruction = false;
    this->bInstancesShareSavedState = false;
}

