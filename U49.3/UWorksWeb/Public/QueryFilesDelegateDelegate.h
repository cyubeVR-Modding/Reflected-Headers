#pragma once
#include "CoreMinimal.h"
#include "QueryFilesDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQueryFilesDelegate, bool, bSuccessful, const FString&, Content);

