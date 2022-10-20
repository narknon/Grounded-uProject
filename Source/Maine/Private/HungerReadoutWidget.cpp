#include "HungerReadoutWidget.h"

class USurvivalComponent;


void UHungerReadoutWidget::CheckFoodChange(USurvivalComponent* Sender, float OldValue, float NewValue) {
}

UHungerReadoutWidget::UHungerReadoutWidget() {
    this->LastPlayerHunger = 0.00f;
    this->CurrentDisplayedHunger = 0.00f;
    this->HungerRatio = 0.00f;
}

