#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetFinalizedContributorsDelegateDelegate.h"
#include "GetFinalizedContributorsMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetFinalizedContributors.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetFinalizedContributors : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetFinalizedContributorsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetFinalizedContributorsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetFinalizedContributors();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 GameItemID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

