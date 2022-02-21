#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GameLobbyJoinRequestedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameLobbyJoinRequestedDelegate, FUWorksSteamID, SteamIDLobby, FUWorksSteamID, SteamIDFriend);

