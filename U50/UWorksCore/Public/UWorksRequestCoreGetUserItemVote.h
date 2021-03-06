#pragma once
#include "CoreMinimal.h"
#include "GetUserItemVoteDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "GetUserItemVoteMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "UWorksRequestCoreGetUserItemVote.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreGetUserItemVote : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserItemVoteDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserItemVoteMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreGetUserItemVote();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bVotedUp, bool& bVotedDown, bool& bVoteSkipped);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

