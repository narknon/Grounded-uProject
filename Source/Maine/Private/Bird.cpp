#include "Bird.h"
#include "Net/UnrealNetwork.h"
#include "ObsidianIDComponent.h"
#include "PersistenceComponent.h"

class ABirdLandSpot;

void ABird::OnTimelapseChange(bool bActive) {
}

void ABird::OnRep_CurrentState() {
}



EBirdState ABird::GetState() const {
    return EBirdState::Despawned;
}

ABirdLandSpot* ABird::GetCurrentLandSpot() const {
    return NULL;
}

void ABird::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABird, CurrentState);
    DOREPLIFETIME(ABird, CurrentLandSpot);
}

ABird::ABird() {
    this->FlySpeed = 0.00f;
    this->LandingDistance = 0.00f;
    this->TakeOffDistance = 0.00f;
    this->CurrentState = (EBirdState)140698270272880;
    this->CurrentLandSpot = NULL;
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
    this->Progress = 0.00f;
    this->TotalProgress = 0.00f;
    this->HiddenForTimelapse = false;
}

