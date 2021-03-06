#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Spacer.generated.h"

UCLASS()
class UMG_API USpacer : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D Size;
    
    USpacer();
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector2D InSize);
    
};

