#pragma once
#include "CoreMinimal.h"
#include "GetServerIPsBySteamIDDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetServerIPsBySteamIDDelegate, bool, bSuccessful, const FString&, Content);

