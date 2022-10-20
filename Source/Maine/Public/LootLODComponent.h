#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "PersistentInterface.h"
#include "LootLODComponent.generated.h"

UCLASS(Blueprintable)
class MAINE_API ULootLODComponent : public UBaseLODComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    ULootLODComponent();
    
    // Fix for true pure virtual functions not being implemented
};

