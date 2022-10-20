#include "SaveGameHeaderData.h"

bool USaveGameHeaderData::IsSharedSave() const {
    return false;
}

FString USaveGameHeaderData::GetSaveGameScreenshotPath() {
    return TEXT("");
}

USaveGameHeaderData::USaveGameHeaderData() {
    this->SaveGameVersion = 0.00f;
    this->SaveGameType = (ESaveGameType)140698270272880;
    this->AutoSaveIndex = 0.00f;
    this->GameDay = 0.00f;
    this->GameHour = 0.00f;
    this->GameMinute = 0.00f;
    this->GameMode = (EGameMode)140698270272880;
    this->GamePackageType = (EGamePackageType)140698270272880;
    this->GameContentType = (EGameContentType)140698270272880;
    this->LastSavePlayerCountType = (ESaveGamePlayerCountType)140698270272880;
    this->SaveGameValidity = (ESaveGameHeaderDataValidity)140698270272880;
    this->SharedSaveState = (ESharedSaveState)140698270272880;
    this->SharedSaveAdminLevel = (ESharedSavePermissionsLevel)140698270272880;
}

