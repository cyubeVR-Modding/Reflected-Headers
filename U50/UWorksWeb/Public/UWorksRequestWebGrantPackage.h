#pragma once
#include "CoreMinimal.h"
#include "GrantPackageDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GrantPackageMinimalDelegateDelegate.h"
#include "UWorksRequestWebGrantPackage.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGrantPackage : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGrantPackageDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGrantPackageMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGrantPackage();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 PackageID, const FString& IPAddress, const FString& ThirdPartyKey, int32 ThirdPartyAppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

