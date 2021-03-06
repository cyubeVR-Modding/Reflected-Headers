#pragma once
#include "CoreMinimal.h"
#include "ESnapshotSourceMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseSnapshot -FallbackName=PoseSnapshot
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
#include "AnimNode_PoseSnapshot.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_PoseSnapshot : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SnapshotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseSnapshot Snapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESnapshotSourceMode Mode;
    
    FAnimNode_PoseSnapshot();
};

