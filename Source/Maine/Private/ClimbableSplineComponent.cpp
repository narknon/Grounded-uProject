#include "ClimbableSplineComponent.h"

UClimbableSplineComponent::UClimbableSplineComponent() {
    this->LadderAnim = NULL;
    this->MoveSpeedMultiplier = 0.00f;
    this->RungSize = 0.00f;
    this->RungOffset = 0.00f;
    this->bLerpOnAttach = false;
    this->bAllowSlidingCollision = true;
}

