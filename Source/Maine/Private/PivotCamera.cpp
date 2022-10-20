#include "PivotCamera.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

FTransform APivotCamera::GetCameraViewTransform() {
    return FTransform{};
}

APivotCamera::APivotCamera() {
    this->OscillationRangeDegrees = 0.00f;
    this->OscillationSpeed = 0.00f;
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
}

