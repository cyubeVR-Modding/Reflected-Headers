#pragma once
#include "CoreMinimal.h"
#include "DownloadItemResult.h"
#include "SteamDelegateOnWorkshopItemDownloadedDynMultiDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnWorkshopItemDownloadedDynMulti, FDownloadItemResult, Result);

