#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetTradeHistoryDelegateDelegate.h"
#include "GetTradeHistoryMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetTradeHistory.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetTradeHistory : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetTradeHistoryDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetTradeHistoryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetTradeHistory();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 MaxTrades, int32 StartAfterTime, const FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const FString& Language, bool bIncludeFailed, bool bIncludeTotal);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

