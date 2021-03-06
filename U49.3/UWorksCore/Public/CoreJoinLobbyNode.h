#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "JoinLobbyDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksChatRoomEnterResponse.h"
#include "CoreJoinLobbyNode.generated.h"

class UCoreJoinLobbyNode;

UCLASS()
class UWORKSCORE_API UCoreJoinLobbyNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FJoinLobbyDelegate Completed;
    
    UCoreJoinLobbyNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    
    UFUNCTION(BlueprintCallable)
    static UCoreJoinLobbyNode* JoinLobbyNode(FUWorksSteamID SteamIDLobby);
    
};

