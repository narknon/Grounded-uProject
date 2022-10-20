#include "ZiplineAnchor.h"
#include "Net/UnrealNetwork.h"

float UZiplineAnchor::GetMaxRange() const {
    return 0.0f;
}

bool UZiplineAnchor::AnyZiplineAttached() const {
    return false;
}

void UZiplineAnchor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UZiplineAnchor, WorldLocation);
}

UZiplineAnchor::UZiplineAnchor() {
    this->SelectModePawn = NULL;
    this->AbsMinAllowedAngleDot = 0.00f;
    this->MaxRange = 0.00f;
}

