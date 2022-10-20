#pragma once
#include "CoreMinimal.h"
#include "EImportSaveResult.generated.h"

UENUM(BlueprintType)
enum class EImportSaveResult : uint8 {
    Success,
    NotImplemented,
    MissingFile,
    Suspended,
    FileReadingFailure,
    NoFileSelected,
    FailedToOpenPath,
    SaveAlreadyImported,
    GenericFailure,
};

