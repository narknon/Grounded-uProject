#include "PlayFabLocalizationAPI.h"

class UObject;
class UPlayFabLocalizationAPI;

void UPlayFabLocalizationAPI::HelperGetLanguageList(FPlayFabBaseModel response, UObject* customData, bool successful) {
}

UPlayFabLocalizationAPI* UPlayFabLocalizationAPI::GetLanguageList(FLocalizationGetLanguageListRequest Request, UPlayFabLocalizationAPI::FDelegateOnSuccessGetLanguageList onSuccess, UPlayFabLocalizationAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData) {
    return NULL;
}

UPlayFabLocalizationAPI::UPlayFabLocalizationAPI() {
    this->CallAuthenticationContext = NULL;
    this->RequestJsonObj = NULL;
    this->ResponseJsonObj = NULL;
}

