#pragma once
#include "CoreMinimal.h"
#include "UpdateWorkshopItemResult.h"
#include "SteamDelegateOnUpdateWorkshopItemDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnUpdateWorkshopItem, FUpdateWorkshopItemResult, Result);

