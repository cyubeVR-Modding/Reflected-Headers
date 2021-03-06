#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
#include "ESynthSlateColorStyle.h"
#include "ESynthSlateSizeType.h"
#include "SynthSlateStyle.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSynthSlateStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthSlateSizeType SizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthSlateColorStyle ColorStyle;
    
    FSynthSlateStyle();
};

