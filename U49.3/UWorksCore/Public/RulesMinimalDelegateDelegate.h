#pragma once
#include "CoreMinimal.h"
#include "UWorksRuleInfo.h"
#include "RulesMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FRulesMinimalDelegate, const TArray<FUWorksRuleInfo>&, Rules);

