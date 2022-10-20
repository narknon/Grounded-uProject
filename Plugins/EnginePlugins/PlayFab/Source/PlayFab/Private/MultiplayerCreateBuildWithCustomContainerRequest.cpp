#include "MultiplayerCreateBuildWithCustomContainerRequest.h"

FMultiplayerCreateBuildWithCustomContainerRequest::FMultiplayerCreateBuildWithCustomContainerRequest() {
    this->AreAssetsReadonly = false;
    this->ContainerFlavor = (EContainerFlavor)140698270272880;
    this->ContainerImageReference = NULL;
    this->CustomTags = NULL;
    this->LinuxInstrumentationConfiguration = NULL;
    this->MetaData = NULL;
    this->MultiplayerServerCountPerVm = 0.00f;
    this->UseStreamingForAssetDownloads = false;
    this->VmSize = (EAzureVmSize)140698270272880;
}

