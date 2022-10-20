#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "OEIVoiceOverSectionTemplate.generated.h"

class UOEIVoiceOverSection;

USTRUCT(BlueprintType)
struct FOEIVoiceOverSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEIVoiceOverSection* Section;
    
    OEIVOICEOVER_API FOEIVoiceOverSectionTemplate();
};

