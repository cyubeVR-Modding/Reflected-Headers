#pragma once
#include "CoreMinimal.h"
#include "ConsumeItemDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FConsumeItemDelegate, bool, bSuccessful, const FString&, Content);

