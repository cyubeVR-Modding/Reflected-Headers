#pragma once
#include "CoreMinimal.h"
#include "QueryWorkshopForUserItemsResult.h"
#include "SteamDelegateOnQueryWorkshopForUserItemsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnQueryWorkshopForUserItems, FQueryWorkshopForUserItemsResult, Result);

