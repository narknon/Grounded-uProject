#include "GoapAction.h"

class UCharacterLODActor;

EGoapActionResult UGoapAction::ExecuteReal(UCharacterLODActor* Actor, FGoapActionOwner& Owner, FVector TargetLocation) {
    return EGoapActionResult::Failed;
}

bool UGoapAction::CanExecuteReal(const UCharacterLODActor* Actor, const FGoapActionOwner& Owner) {
    return false;
}

bool UGoapAction::CanActorExecuteEver(const UCharacterLODActor* Actor, const FGoapActionOwner& Owner) const {
    return false;
}

UGoapAction::UGoapAction() {
    this->InherentCost = 0.00f;
    this->AttractionRange = 0.00f;
    this->InteractDuration = 0.00f;
    this->bMustLand = false;
    this->bReachTestIncludesAgentRadius = true;
    this->bReachTestIncludesGoalRadius = true;
    this->IndefiniteDuration = false;
    this->bOwnerOnly = false;
    this->bObstructionTrace = false;
    this->Facing = EFaceTargetType::;
    this->InteractAnimType = EInteractAnimType::;
    this->Cooldown = 0.00f;
}

