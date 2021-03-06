#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingResult.h"
#include "AIRequestID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OAISimpleDelegateDelegate.h"
#include "AIAsyncTaskBlueprintProxy.generated.h"

UCLASS(MinimalAPI)
class UAIAsyncTaskBlueprintProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOAISimpleDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOAISimpleDelegate OnFail;
    
    UAIAsyncTaskBlueprintProxy();
    UFUNCTION()
    void OnMoveCompleted(FAIRequestID requestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
};

