#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "SendQueryUGCRequestDelegateDelegate.h"
#include "UWorksUGCQueryHandle.h"
#include "SendQueryUGCRequestMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreSendQueryUGCRequest.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreSendQueryUGCRequest : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSendQueryUGCRequestDelegate OnRequestCompleted;
    
    UPROPERTY()
    FSendQueryUGCRequestMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreSendQueryUGCRequest();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksUGCQueryHandle UGCQueryHandle);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksUGCQueryHandle& UGCQueryHandle, EUWorksResult& Result, int32& numResultsReturned, int32& TotalMatchingResults, bool& bCachedData);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

