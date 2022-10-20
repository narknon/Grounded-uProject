#include "DamageInfoBlueprintFunction.h"

class AActor;
class UBaseLODActor;
class APlayerState;

UBaseLODActor* UDamageInfoBlueprintFunction::GetLODActorDamageSource(const FDamageInfo& DamageInfo) {
    return NULL;
}

void UDamageInfoBlueprintFunction::GetDeathMessage(APlayerState* OwnerPlayerState, const FDeathInfo& DeathInfo, FString& OutText, bool bForceDeathMessage) {
}

AActor* UDamageInfoBlueprintFunction::GetActorDamageSource(const FDamageInfo& DamageInfo) {
    return NULL;
}

UDamageInfoBlueprintFunction::UDamageInfoBlueprintFunction() {
}

