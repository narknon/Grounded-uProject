#include "AnimNode_PowerIK_Walk.h"

FAnimNode_PowerIK_Walk::FAnimNode_PowerIK_Walk() {
    this->RootRotationMultiplier = 0.00f;
    this->StepMaxReachDistance = 0.00f;
    this->StepDurationMultiplier = 0.00f;
    this->StepHeightMultiplier = 0.00f;
    this->StepHeightCurve = NULL;
    this->StepSpeedCurve = NULL;
    this->TeleportDistance = 0.00f;
    this->PrintTeleportWarning = false;
    this->CollisionChannel = ECC_WorldStatic;
    this->TraceComplex = false;
    this->MaxSquashIterations = 0.00f;
    this->MaxStretchIterations = 0.00f;
    this->MaxFinalIterations = 0.00f;
    this->AllowBoneTranslation = false;
    this->SolverAlpha = 0.00f;
    this->DebugDrawSize = 0.00f;
}

