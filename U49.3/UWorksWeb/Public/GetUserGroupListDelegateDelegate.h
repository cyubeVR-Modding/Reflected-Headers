#pragma once
#include "CoreMinimal.h"
#include "GetUserGroupListDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetUserGroupListDelegate, bool, bSuccessful, const FString&, Content);

