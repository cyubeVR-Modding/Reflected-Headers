#pragma once
#include "CoreMinimal.h"
#include "GetPublisherAppOwnershipChangesDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPublisherAppOwnershipChangesDelegate, bool, bSuccessful, const FString&, Content);

