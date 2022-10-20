#include "BaseBuildingData.h"

FBaseBuildingData::FBaseBuildingData() {
    this->Icon = NULL;
    this->ModIcon = NULL;
    this->Heat = 0.00f;
    this->bBaseBuilding = false;
    this->WaveDamageScore = 0.00f;
    this->SlotType = (EBuildingSlotType)140698270272880;
    this->bUseAlternateSlotType = false;
    this->AlternateSlotType = (EBuildingSlotType)140698270272880;
    this->EmbedMode = (EBuildingGroundEmbedMode)140698270272880;
    this->bPlaceAtPlayerRotation = false;
    this->bRotateRandom = false;
    this->bAllowPlaceInWater = false;
    this->BuoyantPlacement = (EBuildingBuoyantPlacementMode)140698270272880;
    this->FreeBuildingPlacementDistance = 0.00f;
    this->BuildingWallMountPlacementDistance = 0.00f;
    this->BuildingCeilingMountPlacementDistance = 0.00f;
    this->bDoOverrideAllowedWallNormal = false;
    this->CozinessContribution = 0.00f;
    this->CozinessAdditionalContribution = 0.00f;
    this->bCozinessStructural = false;
    this->bModelViewerAddOverheadSpotlight = false;
}

