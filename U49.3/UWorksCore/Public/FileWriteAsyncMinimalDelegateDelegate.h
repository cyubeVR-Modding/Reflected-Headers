#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "FileWriteAsyncMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FFileWriteAsyncMinimalDelegate, bool, bSuccessful, EUWorksResult, Result);

