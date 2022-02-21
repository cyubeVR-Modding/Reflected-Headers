#pragma once
#include "CoreMinimal.h"
#include "PathFollowingComponent.h"
#include "GridPathFollowingComponent.generated.h"

class UNavLocalGridManager;

UCLASS(meta=(BlueprintSpawnableComponent))
class AIMODULE_API UGridPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UNavLocalGridManager* GridManager;
    
public:
    UGridPathFollowingComponent();
};

