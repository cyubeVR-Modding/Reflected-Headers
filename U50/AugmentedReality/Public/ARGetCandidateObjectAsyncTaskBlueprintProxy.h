#pragma once
#include "CoreMinimal.h"
#include "ARGetCandidateObjectPinDelegate.h"
#include "ARBaseAsyncTaskBlueprintProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ARGetCandidateObjectAsyncTaskBlueprintProxy.generated.h"

class UARGetCandidateObjectAsyncTaskBlueprintProxy;
class UObject;

UCLASS()
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FARGetCandidateObjectPin OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FARGetCandidateObjectPin OnFailed;
    
    UARGetCandidateObjectAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable)
    static UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent);
    
};

