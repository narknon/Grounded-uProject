#include "ConvoCameraComponent.h"

FVector UConvoCameraComponent::GetCameraInterestLocation_Implementation() const {
    return FVector{};
}

UConvoCameraComponent::UConvoCameraComponent() {
    this->HasCustomLookAtLocation = false;
    this->DesiredCameraDistance = 0.00f;
    this->DesiredCameraAngleVertical = 0.00f;
    this->LookAtOffsetVertical = 0.00f;
    this->DesiredCameraAngleHorizontalFar = 0.00f;
    this->DesiredCameraAngleHorizontalNear = 0.00f;
    this->NearDistance = 0.00f;
    this->FarDistance = 0.00f;
    this->CameraCollisionInsetDistance = 0.00f;
}

