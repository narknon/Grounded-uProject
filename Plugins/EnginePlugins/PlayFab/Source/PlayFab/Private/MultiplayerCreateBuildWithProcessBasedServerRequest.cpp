#include "MultiplayerCreateBuildWithProcessBasedServerRequest.h"

FMultiplayerCreateBuildWithProcessBasedServerRequest::FMultiplayerCreateBuildWithProcessBasedServerRequest() {
    this->AreAssetsReadonly = false;
    this->CustomTags = NULL;
    this->InstrumentationConfiguration = NULL;
    this->IsOSPreview = false;
    this->MetaData = NULL;
    this->MultiplayerServerCountPerVm = 0.00f;
    this->UseStreamingForAssetDownloads = false;
    this->VmSize = (EAzureVmSize)140698270272880;
}

