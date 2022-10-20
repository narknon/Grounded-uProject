#include "VisualEffect.h"

UVisualEffect::UVisualEffect() {
    this->ParticleSystem = NULL;
    this->VFXBlueprint = NULL;
    this->bAttachedToActor = true;
    this->SocketMeshType = (EVisualEffectMeshType)140698270272880;
    this->ShadowCastingEnabled = true;
    this->bInheritScale = false;
}

