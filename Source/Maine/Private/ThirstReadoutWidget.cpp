#include "ThirstReadoutWidget.h"

class USurvivalComponent;


void UThirstReadoutWidget::CheckWaterChange(USurvivalComponent* Sender, float OldValue, float NewValue) {
}

UThirstReadoutWidget::UThirstReadoutWidget() {
    this->LastPlayerThirst = 0.00f;
    this->CurrentDisplayedThirst = 0.00f;
    this->ThirstRatio = 0.00f;
}

