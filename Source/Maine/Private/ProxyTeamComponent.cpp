#include "ProxyTeamComponent.h"

class AActor;
class UBaseLODActor;

TEnumAsByte<ETeamAttitude::Type> UProxyTeamComponent::GetRelationshipToLODActor(const UBaseLODActor* Other) const {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> UProxyTeamComponent::GetRelationshipToActor(const AActor* Other) const {
    return ETeamAttitude::Friendly;
}

FDataTableRowHandle UProxyTeamComponent::GetCurrentTeamRowHandle() const {
    return FDataTableRowHandle{};
}

UProxyTeamComponent::UProxyTeamComponent() {
}

