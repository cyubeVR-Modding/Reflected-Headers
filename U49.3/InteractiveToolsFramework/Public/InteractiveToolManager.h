#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ToolContextTransactionProvider.h"
#include "InteractiveToolManager.generated.h"

class UInteractiveTool;
class UInteractiveToolBuilder;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolManager : public UObject, public IToolContextTransactionProvider {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInteractiveTool* ActiveLeftTool;
    
    UPROPERTY()
    UInteractiveTool* ActiveRightTool;
    
protected:
    UPROPERTY()
    TMap<FString, UInteractiveToolBuilder*> ToolBuilders;
    
public:
    UInteractiveToolManager();
    
    // Fix for true pure virtual functions not being implemented
};

