#include "BaseRecipeData.h"

FBaseRecipeData::FBaseRecipeData() {
    this->Visibility = ERecipeVisibility::;
    this->bWasCut = false;
    this->bHideInCraftingMenu = false;
    this->bQuestCritical = false;
}

