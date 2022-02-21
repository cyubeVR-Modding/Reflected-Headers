#pragma once
#include "CoreMinimal.h"
#include "SteamShutdownDelegateDelegate.h"
#include "UWorksInterfaceCore.h"
#include "EUWorksGamepadTextInputLineMode.h"
#include "EUWorksNotificationPosition.h"
#include "IPCountryDelegateDelegate.h"
#include "LowBatteryPowerDelegateDelegate.h"
#include "GamepadTextInputDismissedDelegateDelegate.h"
#include "EUWorksGamepadTextInputMode.h"
#include "EUWorksUniverse.h"
#include "UWorksInterfaceCoreUtils.generated.h"

class UUWorksInterfaceCoreUtils;

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksInterfaceCoreUtils : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIPCountryDelegate IPCountry;
    
    UPROPERTY(BlueprintAssignable)
    FLowBatteryPowerDelegate LowBatteryPower;
    
    UPROPERTY(BlueprintAssignable)
    FSteamShutdownDelegate SteamShutdown;
    
    UPROPERTY(BlueprintAssignable)
    FGamepadTextInputDismissedDelegate GamepadTextInputDismissed;
    
    UUWorksInterfaceCoreUtils();
    UFUNCTION(BlueprintCallable)
    void StartVRDashboard();
    
    UFUNCTION(BlueprintCallable)
    bool ShowGamepadTextInput(EUWorksGamepadTextInputMode InputMode, EUWorksGamepadTextInputLineMode LineInputMode, const FString& Description, int32 CharMax, const FString& ExistingText);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayNotificationPosition(EUWorksNotificationPosition NotificationPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset);
    
    UFUNCTION(BlueprintCallable)
    bool IsSteamRunningInVR();
    
    UFUNCTION(BlueprintCallable)
    bool IsSteamInBigPictureMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsOverlayEnabled();
    
    UFUNCTION(BlueprintPure)
    static UUWorksInterfaceCoreUtils* GetUtils();
    
    UFUNCTION(BlueprintCallable)
    FString GetSteamUILanguage();
    
    UFUNCTION(BlueprintCallable)
    int32 GetServerRealTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSecondsSinceComputerActive();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSecondsSinceAppActive();
    
    UFUNCTION(BlueprintCallable)
    FString GetIPCountry();
    
    UFUNCTION(BlueprintCallable)
    int32 GetIPCCallCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnteredGamepadTextLength();
    
    UFUNCTION(BlueprintCallable)
    bool GetEnteredGamepadTextInput(FString& Text, int32 TextMaxLength);
    
    UFUNCTION(BlueprintCallable)
    uint8 GetCurrentBatteryPower();
    
    UFUNCTION(BlueprintCallable)
    EUWorksUniverse GetConnectedUniverse();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppID();
    
    UFUNCTION(BlueprintCallable)
    bool BOverlayNeedsPresent();
    
};

