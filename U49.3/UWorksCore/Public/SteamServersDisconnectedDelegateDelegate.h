#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "SteamServersDisconnectedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamServersDisconnectedDelegate, EUWorksResult, Result);

