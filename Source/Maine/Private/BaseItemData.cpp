#include "BaseItemData.h"

FBaseItemData::FBaseItemData() {
    this->Icon = NULL;
    this->ModIcon = NULL;
    /*this->ItemType = EItemType::;*/
    this->OnKeyItemPickupVariableValue = 0.00f;
    this->OnKeyItemTurnedInVariableValue = 0.00f;
    this->KeyItemDateDay = 0;
    this->KeyItemDateMonth = 0;
    this->KeyItemDateYear = 0;
    this->Tier = 0.00f;
    this->bWorldMarker = false;
    this->bCanEnhance = false;
    this->bHotDroppable = false;
    this->bTrashable = false;
    this->bIsFlammable = false;
    this->bWasCut = false;
    this->bDecomposeOnLoad = false;
    /*this->Slot = EEquipmentSlot::;*/
    this->TwoHanded = false;
    this->Stance = 0.00f;
    /*this->OverrideEquipSocket = ESocketName::;*/
    /*this->MarkerType = EHUDMarkerType::;*/
    this->MarkerVariation = 0.00f;
    this->bIsLightSource = false;
    this->bCanBlock = false;
    this->BlockDamageMultiplier = 0.00f;
    this->BlockStaminaCost = 0.00f;
    this->BlockStaminaRegenMultiplier = 0.00f;
    this->BlockAnim = NULL;
    this->BlockedEffectAnim = NULL;
    /*this->ConsumeChatterType = EChatterConsumableType::;*/
    this->ConsumeAudio = NULL;
    /*this->ConsumeAnimType = EInteractAnimType::;*/
    this->bBurgleQuestCanAnalyze = false;
    this->BurgleQuestAnalyzeRewardLevel = 0.00f;
    this->OverrideTemplateConsumeAction = NULL;
    this->HatchTime = 0.00f;
    this->HatchData = NULL;
    /*this->GardenModifierType = EGardenModifierType::;*/
    this->GardenModifierValue = 0.00f;
    this->bCanZipUp = false;
    this->WaveSpawnWeight = 0.00f;
    this->PickupAudio = NULL;
    /*this->InteractAnimType = EInteractAnimType::;*/
}

