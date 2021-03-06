#pragma once
#include "CoreMinimal.h"
#include "SendQueryUGCRequestDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "UWorksUGCQueryHandle.h"
#include "EUWorksResult.h"
#include "CoreSendQueryUGCRequestNode.generated.h"

class UCoreSendQueryUGCRequestNode;

UCLASS()
class UWORKSCORE_API UCoreSendQueryUGCRequestNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSendQueryUGCRequestDelegate Completed;
    
    UCoreSendQueryUGCRequestNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSendQueryUGCRequestNode* SendQueryUGCRequestNode(FUWorksUGCQueryHandle UGCQueryHandle);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksUGCQueryHandle UGCQueryHandle, EUWorksResult Result, int32 numResultsReturned, int32 TotalMatchingResults, bool bCachedData);
    
};

