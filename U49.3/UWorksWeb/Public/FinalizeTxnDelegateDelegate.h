#pragma once
#include "CoreMinimal.h"
#include "FinalizeTxnDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFinalizeTxnDelegate, bool, bSuccessful, const FString&, Content);

