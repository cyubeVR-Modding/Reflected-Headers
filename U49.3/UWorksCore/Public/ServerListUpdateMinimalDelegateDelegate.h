#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
#include "ServerListUpdateMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FServerListUpdateMinimalDelegate, bool, bSuccessful, FUWorksServerInfo, Server);

