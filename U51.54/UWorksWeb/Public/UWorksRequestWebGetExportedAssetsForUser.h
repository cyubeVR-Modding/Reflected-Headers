#pragma once
#include "CoreMinimal.h"
#include "GetExportedAssetsForUserMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetExportedAssetsForUserDelegateDelegate.h"
#include "UWorksRequestWebGetExportedAssetsForUser.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetExportedAssetsForUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetExportedAssetsForUserDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetExportedAssetsForUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetExportedAssetsForUser();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

