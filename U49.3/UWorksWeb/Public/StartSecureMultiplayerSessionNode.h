#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "StartSecureMultiplayerSessionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "StartSecureMultiplayerSessionNode.generated.h"

class UStartSecureMultiplayerSessionNode;

UCLASS()
class UWORKSWEB_API UStartSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStartSecureMultiplayerSessionDelegate Completed;
    
    UStartSecureMultiplayerSessionNode();
    UFUNCTION(BlueprintCallable)
    static UStartSecureMultiplayerSessionNode* StartSecureMultiplayerSessionNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

