#pragma once
#include "CoreMinimal.h"
#include "OnUserInterfaceInitializedDelegate.generated.h"



UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserInterfaceInitialized, UCustomPropertiesWindowWidget*, PropertiesWidget);

