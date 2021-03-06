#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "MovieSceneCameraShakeSectionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
#include "MovieSceneCameraShakeSection.generated.h"

class UMatineeCameraShake;

UCLASS(MinimalAPI)
class UMovieSceneCameraShakeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneCameraShakeSectionData ShakeData;
    
    UPROPERTY()
    TSubclassOf<UMatineeCameraShake> ShakeClass;
    
    UPROPERTY()
    float PlayScale;
    
    UPROPERTY()
    ECameraShakePlaySpace PlaySpace;
    
    UPROPERTY()
    FRotator UserDefinedPlaySpace;
    
    UMovieSceneCameraShakeSection();
};

