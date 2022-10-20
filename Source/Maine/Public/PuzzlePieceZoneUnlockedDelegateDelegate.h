#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PuzzlePieceZoneUnlockedDelegateDelegate.generated.h"

class UMapComponent;
class ASurvivalPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPuzzlePieceZoneUnlockedDelegate, UMapComponent*, Sender, ASurvivalPlayerState*, Unlocker, const FDataTableRowHandle&, UnlockedPuzzlePieceZone);

