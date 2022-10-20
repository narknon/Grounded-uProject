#include "MultiplayerGetBuildResponse.h"

FMultiplayerGetBuildResponse::FMultiplayerGetBuildResponse() {
    this->AreAssetsReadonly = false;
    this->ContainerFlavor = (EContainerFlavor)140698270272880;
    this->CustomGameContainerImage = NULL;
    this->InstrumentationConfiguration = NULL;
    this->MetaData = NULL;
    this->MultiplayerServerCountPerVm = 0.00f;
    this->UseStreamingForAssetDownloads = false;
    this->VmSize = (EAzureVmSize)140698270272880;
}

