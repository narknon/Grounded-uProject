#include "VisualEffect.h"

UVisualEffect::UVisualEffect() {
    this->ParticleSystem = NULL;
    this->VFXBlueprint = NULL;
    this->bAttachedToActor = true;
    this->SocketMeshType = EVisualEffectMeshType::;
    this->ShadowCastingEnabled = true;
    this->bInheritScale = false;
}

