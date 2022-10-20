#include "MaineTriggerBase.h"
#include "ObsidianIDComponent.h"
#include "PersistenceComponent.h"

class AActor;

void AMaineTriggerBase::ResetTriggerCount() {
}


void AMaineTriggerBase::OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* ActorInstigator) {
}

int32 AMaineTriggerBase::GetTriggerCount() const {
    return 0;
}

AMaineTriggerBase::AMaineTriggerBase() {
    this->MaxTriggerCount = 0.00f;
    this->bPlayersOnly = true;
    this->TriggerType = (ETriggerType)140698270272880;
    this->CollisionComponent = NULL;
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
}

