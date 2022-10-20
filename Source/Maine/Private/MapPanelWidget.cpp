#include "MapPanelWidget.h"

class UWidget;
class UMapComponent;
class UHUDMarkerData;
class UBaseMapEntryWidget;

void UMapPanelWidget::SetOwnerScreen(UWidget* Owner) {
}

void UMapPanelWidget::PopulateAll() {
}


void UMapPanelWidget::OnUnlockedMapsChanged(UMapComponent* Sender) {
}

void UMapPanelWidget::OnPlayerWaypointRemoved(UHUDMarkerData* MarkerData) {
}

void UMapPanelWidget::OnPlayerWaypointAdded(UHUDMarkerData* MarkerData) {
}

void UMapPanelWidget::OnPlayerMarkerRemoved(UHUDMarkerData* MarkerData) {
}

void UMapPanelWidget::OnPlayerMarkerAdded(UHUDMarkerData* MarkerData) {
}

void UMapPanelWidget::OnMarkerRemoved(UHUDMarkerData* MarkerData) {
}

void UMapPanelWidget::OnMarkerAdded(UHUDMarkerData* MarkerData) {
}

void UMapPanelWidget::OnMapEntryMouseUnHovered(UBaseMapEntryWidget* EntryWidget) {
}

void UMapPanelWidget::OnMapEntryMouseHovered(UBaseMapEntryWidget* EntryWidget) {
}

FEventReply UMapPanelWidget::OnBorderMouseDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void UMapPanelWidget::HandleMapEntryFocusLost_Internal(bool ViaMouseHover) {
}


void UMapPanelWidget::HandleMapEntryFocused_Internal(UBaseMapEntryWidget* MapEntry, EMapEntryType EntryType, bool ViaMouseHover) {
}


FVector2D UMapPanelWidget::GetWorldPosition(FVector2D MapPosition, bool bIncludeRotation) const {
    return FVector2D{};
}

FVector2D UMapPanelWidget::GetViewCenterPosition() const {
    return FVector2D{};
}

FVector2D UMapPanelWidget::GetMapPosition(FVector WorldLocation, bool bIncludeRotation) const {
    return FVector2D{};
}

UBaseMapEntryWidget* UMapPanelWidget::GetEntryUnderCursor() const {
    return NULL;
}

UBaseMapEntryWidget* UMapPanelWidget::FindClosestValidMapEntryToMapCursor() {
    return NULL;
}

void UMapPanelWidget::CycleZoomValue() {
}

void UMapPanelWidget::CenterMapOnPlayer() {
}

void UMapPanelWidget::AdjustZoomLevel(int32 ChangeInZoom) {
}

UMapPanelWidget::UMapPanelWidget() {
    this->GridEffect = NULL;
    this->OuterCanvas = NULL;
    this->POICanvas = NULL;
    this->MapMarkerCanvas = NULL;
    this->PlayerCanvas = NULL;
    this->PlayerWaypointCanvas = NULL;
    this->ResourceWaypointCanvas = NULL;
    this->ImageCanvas = NULL;
    this->ResourceSurveyOverlay = NULL;
    this->MapSizeBox = NULL;
    this->ImageScaleBox = NULL;
    this->MapBorder = NULL;
    this->PlayerEntryClass = NULL;
    this->PointOfInterestClass = NULL;
    this->HUDMarkerClass = NULL;
    this->PlayerWaypointMarkerClass = NULL;
    this->ResourceWaypointClass = NULL;
    this->GamepadPanSensitivity = 0.00f;
    this->MapVisibleOrientationOffset = 0.00f;
    this->MinDistanceToFocusMarker = 0.00f;
    this->PanDuration = 0.00f;
    this->PanEaseExponent = 0.00f;
    this->CurrentZoomLevel = 0.00f;
}

