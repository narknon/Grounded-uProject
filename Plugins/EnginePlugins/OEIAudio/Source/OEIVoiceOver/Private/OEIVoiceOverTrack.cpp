#include "OEIVoiceOverTrack.h"

#include "OEIVoiceOverSection.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Evaluation/MovieScenePropertyTemplate.h"

UOEIVoiceOverTrack::UOEIVoiceOverTrack() {
}

FMovieSceneEvalTemplatePtr UOEIVoiceOverTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
 return FMovieScenePropertySectionTemplate(TEXT("None"), TEXT("None"));
}