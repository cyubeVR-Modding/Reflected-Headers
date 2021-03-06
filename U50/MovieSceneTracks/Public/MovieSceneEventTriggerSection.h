#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "MovieSceneEventSectionBase.h"
#include "MovieSceneEventChannel.h"
#include "MovieSceneEventTriggerSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneEventChannel EventChannel;
    
    UMovieSceneEventTriggerSection();
    
    // Fix for true pure virtual functions not being implemented
};

