#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "UnsubscribeItemDelegateDelegate.h"
#include "UnsubscribeItemMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "UWorksRequestCoreUnsubscribeItem.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreUnsubscribeItem : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUnsubscribeItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUnsubscribeItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreUnsubscribeItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

