#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneGeometryCollectionSectionTemplateParameters.h"
#include "MovieSceneGeometryCollectionSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneGeometryCollectionSectionTemplateParameters Params;
    
    GEOMETRYCOLLECTIONTRACKS_API FMovieSceneGeometryCollectionSectionTemplate();
};

