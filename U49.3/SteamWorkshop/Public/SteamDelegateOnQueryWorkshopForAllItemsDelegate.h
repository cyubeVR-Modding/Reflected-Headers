#pragma once
#include "CoreMinimal.h"
#include "QueryWorkshopForAllItemsResult.h"
#include "SteamDelegateOnQueryWorkshopForAllItemsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnQueryWorkshopForAllItems, FQueryWorkshopForAllItemsResult, Result);

