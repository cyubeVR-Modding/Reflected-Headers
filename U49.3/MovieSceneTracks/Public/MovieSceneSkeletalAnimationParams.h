#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneSkeletalAnimationParams.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FMovieSceneSkeletalAnimationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber FirstLoopStartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber EndFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bReverse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SlotName;
    
    UPROPERTY()
    FMovieSceneFloatChannel Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSkipAnimNotifiers;
    
    UPROPERTY(EditAnywhere)
    bool bForceCustomMode;
    
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float EndOffset;
    
    MOVIESCENETRACKS_API FMovieSceneSkeletalAnimationParams();
};

