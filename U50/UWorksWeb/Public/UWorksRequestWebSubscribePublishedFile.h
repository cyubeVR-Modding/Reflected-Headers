#pragma once
#include "CoreMinimal.h"
#include "SubscribePublishedFileDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SubscribePublishedFileMinimalDelegateDelegate.h"
#include "UWorksRequestWebSubscribePublishedFile.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSubscribePublishedFile : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSubscribePublishedFileDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSubscribePublishedFileMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSubscribePublishedFile();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

