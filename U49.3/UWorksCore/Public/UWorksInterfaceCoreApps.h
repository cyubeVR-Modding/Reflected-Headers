#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceCore.h"
#include "DlcInstalledDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "NewUrlLaunchParametersDelegateDelegate.h"
#include "GetFileDetailsMinimalDelegateDelegate.h"
#include "UWorksInterfaceCoreApps.generated.h"

class UUWorksRequestCoreGetFileDetails;
class UUWorksInterfaceCoreApps;

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksInterfaceCoreApps : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDlcInstalledDelegate DlcInstalled;
    
    UPROPERTY(BlueprintAssignable)
    FNewUrlLaunchParametersDelegate NewUrlLaunchParameters;
    
    UUWorksInterfaceCoreApps();
    UFUNCTION(BlueprintCallable)
    void UninstallDLC(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    bool MarkContentCorrupt(bool bMissingFilesOnly);
    
    UFUNCTION(BlueprintCallable)
    void InstallDLC(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    FString GetLaunchQueryParam(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInstalledDepots(int32 AppID, TArray<int32>& Depots, int32 MaxDepots);
    
    UFUNCTION(BlueprintCallable)
    void GetFileDetailsMinimal(const FGetFileDetailsMinimalDelegate& Completed, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreGetFileDetails* GetFileDetails();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEarliestPurchaseUnixTime(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    bool GetDlcDownloadProgress(int32 AppID, int32& BytesDownloaded, int32& bytesTotal);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDLCCount();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentGameLanguage();
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentBetaName(FString& Name, int32 NameMaxLength);
    
    UFUNCTION(BlueprintCallable)
    FString GetAvailableGameLanguages();
    
    UFUNCTION(BlueprintPure)
    static UUWorksInterfaceCoreApps* GetApps();
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetAppOwner();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppInstallDir(int32 AppID, FString& Path, int32 PathMaxLength);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppBuildId();
    
    UFUNCTION(BlueprintCallable)
    bool BIsVACBanned();
    
    UFUNCTION(BlueprintCallable)
    bool BIsSubscribedFromFreeWeekend();
    
    UFUNCTION(BlueprintCallable)
    bool BIsSubscribedApp(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    bool BIsSubscribed();
    
    UFUNCTION(BlueprintCallable)
    bool BIsLowViolence();
    
    UFUNCTION(BlueprintCallable)
    bool BIsDlcInstalled(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    bool BIsCybercafe();
    
    UFUNCTION(BlueprintCallable)
    bool BIsAppInstalled(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    bool BGetDLCDataByIndex(int32 DLC, int32& AppID, bool& bAvailable, FString& Name, int32 NameMaxLength);
    
};

