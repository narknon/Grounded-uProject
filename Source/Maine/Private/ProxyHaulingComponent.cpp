#include "ProxyHaulingComponent.h"

int32 UProxyHaulingComponent::GetAdjustedCapacity() const {
    return 0;
}

UProxyHaulingComponent::UProxyHaulingComponent() {
    this->AdjustedCapacity = 0.00f;
}

