#include "HealthReadoutWidget.h"

class UHealthComponent;


void UHealthReadoutWidget::CheckHealthChange(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth) {
}

UHealthReadoutWidget::UHealthReadoutWidget() {
    this->LastPlayerHealth = 0.00f;
    this->CurrentDisplayedHealth = 0.00f;
    this->HealthRatio = 0.00f;
}

