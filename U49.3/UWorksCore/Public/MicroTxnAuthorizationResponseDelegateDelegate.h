#pragma once
#include "CoreMinimal.h"
#include "MicroTxnAuthorizationResponseDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMicroTxnAuthorizationResponseDelegate, int32, AppID, const FString&, OrderID, bool, bAuthorized);

