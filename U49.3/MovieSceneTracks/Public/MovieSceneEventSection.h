#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NameCurve -FallbackName=NameCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneEventSectionData.h"
#include "MovieSceneEventSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FNameCurve Events;
    
    UPROPERTY()
    FMovieSceneEventSectionData EventData;
    
public:
    UMovieSceneEventSection();
};

