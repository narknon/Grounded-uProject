#pragma once
#include "CoreMinimal.h"
#include "EPlayerStatType.generated.h"

UENUM(BlueprintType)
enum class EPlayerStatType : uint8 {
    None,
    Kill,
    CraftItem,
    PickupItem,
    Revive,
    Discover,
    Stamina,
    BasketballShot,
    TamePet,
    ProcessItem,
    ZiplineDistance,
    UseItem,
    Block,
    Scripted,
    TakePhoto,
    RangedAttack,
    DefensePoint,
    Death,
};

