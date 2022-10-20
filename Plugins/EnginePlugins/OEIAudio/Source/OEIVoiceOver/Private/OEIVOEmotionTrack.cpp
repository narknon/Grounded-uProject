#include "OEIVOEmotionTrack.h"

#include "Evaluation/MovieScenePropertyTemplate.h"

UOEIVOEmotionTrack::UOEIVOEmotionTrack() {
}

FMovieSceneEvalTemplatePtr UOEIVOEmotionTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FMovieScenePropertySectionTemplate(TEXT("None"), TEXT("None"));
}