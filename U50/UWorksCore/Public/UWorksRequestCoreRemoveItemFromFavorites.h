#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RemoveItemFromFavoritesDelegateDelegate.h"
#include "RemoveItemFromFavoritesMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "UWorksRequestCoreRemoveItemFromFavorites.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRemoveItemFromFavorites : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRemoveItemFromFavoritesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRemoveItemFromFavoritesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRemoveItemFromFavorites();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bWasAddRequest);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

