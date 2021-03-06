#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneSequenceID.h"
#include "MovieSceneEvaluationOperand.generated.h"

USTRUCT()
struct FMovieSceneEvaluationOperand {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ObjectBindingId;
    
    UPROPERTY()
    FMovieSceneSequenceID SequenceID;
    
    MOVIESCENE_API FMovieSceneEvaluationOperand();
};

