#include "GlobalItemData.h"
#include "Templates/SubclassOf.h"

class USurvivalDamageType;

FRecipeModData UGlobalItemData::GetRecipeModData(FDataTableRowHandle ItemRowHandle) const {
    return FRecipeModData{};
}

float UGlobalItemData::GetBonusStatModifier(int32 BonusEnhancementLevel, FGameplayTag BonusEnhancementType) const {
    return 0.0f;
}

TArray<FGameplayTag> UGlobalItemData::GetBonusEnhancementTypes() const {
    return TArray<FGameplayTag>();
}

FDataTableRowHandle UGlobalItemData::GetBonusEnhancementRepairItem(FGameplayTag BonusEnhancementType) const {
    return FDataTableRowHandle{};
}

int32 UGlobalItemData::GetBonusEnhancementItemCost(int32 BonusEnhancementLevel) const {
    return 0;
}

FDataTableRowHandle UGlobalItemData::GetBonusEnhancementItem(FGameplayTag BonusEnhancementType, int32 BonusEnhancementLevel) const {
    return FDataTableRowHandle{};
}

TSubclassOf<USurvivalDamageType> UGlobalItemData::GetBonusEnhancementDamageType(FGameplayTag BonusEnhancementType) const {
    return NULL;
}

float UGlobalItemData::GetBaseStatModifier(int32 EnhancementLevel) const {
    return 0.0f;
}

int32 UGlobalItemData::GetBaseEnhancementItemCost(int32 EnhancementLevel) const {
    return 0;
}

int32 UGlobalItemData::GetArmorBonusEnhancementItemCost(int32 BonusEnhancementLevel) const {
    return 0;
}

int32 UGlobalItemData::GetArmorBaseEnhancementItemCost(int32 EnhancementLevel) const {
    return 0;
}

bool UGlobalItemData::DoesBonusEnhancementUnlockStatusEffects(FGameplayTag BonusEnhancementType) const {
    return false;
}

UGlobalItemData::UGlobalItemData() {
    this->DefaultWorldItem = NULL;
    this->DefaultEquippedItem = NULL;
    this->DefaultAIBiteEffect = NULL;
    this->DefaultAIEatEffect = NULL;
    this->AttackDurability = 0.00f;
    this->BlockDurability = 0.00f;
    this->ThrowDurability = 0.00f;
    this->AddChargesDurability = 0.00f;
    this->TotalSpoilingTimeInHours = 0.00f;
    this->TotalFireBurnTimeInHours = 0.00f;
    this->ItemStackBonusPerTier = 0.00f;
    this->MaxItemStackTier = 0.00f;
    this->SciencePerResearch = 0.00f;
    this->ItemUseCooldown = 0.00f;
    this->DefaultCraftingSound = NULL;
    this->LootBag = NULL;
    this->BuildingLootBag = NULL;
    this->MaxBaseEnhancementLevel = 0.00f;
    this->BaseEnhancementBaseCost = 0.00f;
    this->BaseArmorEnhancementBaseCost = 0.00f;
    this->BaseStatModifierPerLevel = 0.00f;
    this->MaxBonusEnhancementLevel = 0.00f;
    this->NumBonusEnhancementTiers = 0.00f;
    this->BonusStatModifierPerLevel = 0.00f;
    this->BonusDamageTypeStatModifierPerLevel = 0.00f;
    this->BonusEnhancementBaseCost = 0.00f;
    this->BonusArmorEnhancementBaseCost = 0.00f;
    this->ImpactEffectDelay = 0.00f;
    this->MinImpactThreshold = 0.00f;
    this->MaxImpactThreshold = 0.00f;
    this->MinImpactVolume = 0.00f;
    this->MaxImpactVolume = 0.00f;
    this->StashDepositSound = NULL;
    this->GasMaskReverb = NULL;
}

