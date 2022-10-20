#include "SaveGameHeaderData.h"

bool USaveGameHeaderData::IsSharedSave() const {
    return false;
}

FString USaveGameHeaderData::GetSaveGameScreenshotPath() {
    return TEXT("");
}

USaveGameHeaderData::USaveGameHeaderData() {
    this->SaveGameVersion = 0.00f;
    /*this->SaveGameType = ESaveGameType::;*/
    this->AutoSaveIndex = 0.00f;
    this->GameDay = 0.00f;
    this->GameHour = 0.00f;
    this->GameMinute = 0.00f;
    /*this->GameMode = EGameMode::;*/
    /*this->GamePackageType = EGamePackageType::;*/
    /*this->GameContentType = EGameContentType::;*/
    /*this->LastSavePlayerCountType = ESaveGamePlayerCountType::;*/
    /*this->SaveGameValidity = ESaveGameHeaderDataValidity::;*/
    /*this->SharedSaveState = ESharedSaveState::;*/
    /*this->SharedSaveAdminLevel = ESharedSavePermissionsLevel::;*/
}

