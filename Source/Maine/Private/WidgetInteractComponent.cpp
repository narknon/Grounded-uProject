#include "WidgetInteractComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UWidgetInteractComponent::OnInteractingActorHealthStateChanged(EHealthState NewHealthState) {
}

void UWidgetInteractComponent::OnInteractingActorDestroyed(AActor* Actor) {
}

bool UWidgetInteractComponent::IsBusy() const {
    return false;
}

void UWidgetInteractComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWidgetInteractComponent, bInUse);
}

UWidgetInteractComponent::UWidgetInteractComponent() {
    this->bAllowMultipleUsers = false;
    this->bAllowInteractMidCombat = true;
    /*this->DefaultInteractionType = EInteractionType::;*/
    this->bInUse = false;
}

