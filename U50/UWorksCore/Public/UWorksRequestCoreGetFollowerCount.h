#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "GetFollowerCountDelegateDelegate.h"
#include "GetFollowerCountMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestCoreGetFollowerCount.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreGetFollowerCount : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetFollowerCountDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetFollowerCountMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreGetFollowerCount();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32& Count);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

