#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatEntryType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "LobbyChatMsgDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLobbyChatMsgDelegate, FUWorksSteamID, SteamIDLobby, FUWorksSteamID, SteamIDUser, EUWorksChatEntryType, ChatEntryType, int32, ChatID);

