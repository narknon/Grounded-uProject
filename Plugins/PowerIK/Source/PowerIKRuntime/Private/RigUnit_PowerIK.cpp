#include "RigUnit_PowerIK.h"

FRigUnit_PowerIK::FRigUnit_PowerIK() {
    this->RootRotationMultiplier = 0.00f;
    this->MaxSquashIterations = 0.00f;
    this->MaxStretchIterations = 0.00f;
    this->MaxFinalIterations = 0.00f;
    this->AllowBoneTranslation = false;
    this->SolverAlpha = 0.00f;
}

