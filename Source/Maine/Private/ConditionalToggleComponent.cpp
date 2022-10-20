#include "ConditionalToggleComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UConditionalToggleComponent::OnRep_Enabled() {
}

void UConditionalToggleComponent::OnHourChanged(int32 NewHour, int32 NewDay) {
}

void UConditionalToggleComponent::OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator) {
}

bool UConditionalToggleComponent::IsEnabled() const {
    return false;
}

void UConditionalToggleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UConditionalToggleComponent, bEnabled);
}

UConditionalToggleComponent::UConditionalToggleComponent() {
    this->bEnabled = false;
    this->StartHour = 0.00f;
    this->EndHour = 0.00f;
    this->ConditionalLogic = (ELogicalOperator)140698270272880;
    this->bToggleVisibility = false;
    this->bToggleCollision = false;
    this->DefaultCollisionType = ECollisionEnabled::NoCollision;
}

