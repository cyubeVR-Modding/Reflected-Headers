#pragma once
#include "CoreMinimal.h"
#include "JoinClanChatRoomDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "JoinClanChatRoomMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestCoreJoinClanChatRoom.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreJoinClanChatRoom : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FJoinClanChatRoomDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FJoinClanChatRoomMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreJoinClanChatRoom();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksSteamID& SteamIDClanChat, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

