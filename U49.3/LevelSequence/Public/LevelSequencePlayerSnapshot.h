#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
#include "LevelSequenceSnapshotSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequenceID -FallbackName=MovieSceneSequenceID
#include "LevelSequencePlayerSnapshot.generated.h"

class UCameraComponent;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FLevelSequencePlayerSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString MasterName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FQualifiedFrameTime MasterTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FQualifiedFrameTime SourceTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString CurrentShotName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FQualifiedFrameTime CurrentShotLocalTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FQualifiedFrameTime CurrentShotSourceTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SourceTimecode;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TSoftObjectPtr<UCameraComponent> CameraComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FLevelSequenceSnapshotSettings Settings;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ULevelSequence* ActiveShot;
    
    UPROPERTY()
    FMovieSceneSequenceID ShotID;
    
    LEVELSEQUENCE_API FLevelSequencePlayerSnapshot();
};

