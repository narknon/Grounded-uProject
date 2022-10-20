#include "SpringArmPhotoPawn.h"

void ASpringArmPhotoPawn::SetBoomAdjustOut(float Val) {
}

void ASpringArmPhotoPawn::SetBoomAdjustIn(float Val) {
}

ASpringArmPhotoPawn::ASpringArmPhotoPawn() {
    this->BoomNearSpeed = 0.00f;
    this->BoomFarSpeed = 0.00f;
    this->BoomMaxLength = 0.00f;
    this->StartingBoomLength = 0.00f;
    this->bAutoMinBoomLength = true;
    this->BoomMinLength = 0.00f;
    this->BoomPanSpeed = 0.00f;
    this->MaxVerticalOffset = 0.00f;
    this->BoomAdjustAccumulatorIn = 0.00f;
    this->BoomAdjustAccumulatorOut = 0.00f;
}

