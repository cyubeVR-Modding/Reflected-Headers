#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetPublisherAppOwnershipDelegateDelegate.h"
#include "GetPublisherAppOwnershipMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetPublisherAppOwnership.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPublisherAppOwnership : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPublisherAppOwnershipDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPublisherAppOwnershipMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPublisherAppOwnership();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

