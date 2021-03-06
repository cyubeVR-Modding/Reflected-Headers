#pragma once
#include "CoreMinimal.h"
#include "BlueprintSessionResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "BlueprintFindSessionsResultDelegateDelegate.h"
#include "FindSessionsCallbackProxy.generated.h"

class UObject;
class APlayerController;
class UFindSessionsCallbackProxy;

UCLASS(MinimalAPI)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBlueprintFindSessionsResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FBlueprintFindSessionsResultDelegate OnFailure;
    
    UFindSessionsCallbackProxy();
    UFUNCTION(BlueprintPure)
    static FString GetServerName(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static int32 GetPingInMs(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMaxPlayers(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static int32 GetCurrentPlayers(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
    
};

