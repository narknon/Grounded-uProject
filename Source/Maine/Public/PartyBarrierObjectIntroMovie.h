#pragma once
#include "CoreMinimal.h"
#include "PartyBarrierObject.h"
#include "GlobalVariableReferenceConditional.h"
#include "PartyBarrierObjectIntroMovie.generated.h"

UCLASS(Blueprintable)
class MAINE_API UPartyBarrierObjectIntroMovie : public UPartyBarrierObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalVariableReferenceConditional IntroMoviePlayedConditional;
    
    UPartyBarrierObjectIntroMovie();
};

