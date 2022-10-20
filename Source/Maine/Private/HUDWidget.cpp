#include "HUDWidget.h"

class UItem;
class UHUDMarkerData;
class UHUDMarkerWidget;
class APawn;
class UHaulingComponent;
class UPlayerNameplateWidget;



void UHUDWidget::SetNotificationsSupressed(bool bSurpressed) {
}

void UHUDWidget::RemovePlayerNameplateWidget(UHUDMarkerData* HUDMarkerData) {
}

void UHUDWidget::RemoveHUDMarkerWidget(UHUDMarkerData* HUDMarkerData) {
}







void UHUDWidget::OnSittingChangedImpl(bool bIsSitting) {
}


void UHUDWidget::OnRevived() {
}

void UHUDWidget::OnPlayerNewPawn(APawn* Pawn) {
}

void UHUDWidget::OnPlayerDeathOrIncap(const FDamageInfo& DamageInfo) {
}





void UHUDWidget::OnHaulingChangedImpl(UHaulingComponent* Sender) {
}





void UHUDWidget::OnEquipmentChanged(UItem* Item, EEquipmentSlot EquipmentSlot) {
}






bool UHUDWidget::IsPlayerNameplateDataActive(UHUDMarkerData* HUDMarkerData) {
    return false;
}

bool UHUDWidget::IsHUDMarkerDataActive(UHUDMarkerData* HUDMarkerData) {
    return false;
}


void UHUDWidget::AddPlayerNameplateWidget(UPlayerNameplateWidget* PlayerNameplateWidget) {
}

void UHUDWidget::AddHUDMarkerWidget(UHUDMarkerWidget* HUDMarkerWidget) {
}

UHUDWidget::UHUDWidget() {
    this->UIInteract = NULL;
    this->SlotsUsed = NULL;
    this->TemporaryNotificationLog = NULL;
    this->bNotificationsSurpressed = false;
}

