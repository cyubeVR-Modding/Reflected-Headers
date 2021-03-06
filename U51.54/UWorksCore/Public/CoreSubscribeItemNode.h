#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "SubscribeItemDelegateDelegate.h"
#include "CoreSubscribeItemNode.generated.h"

class UCoreSubscribeItemNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreSubscribeItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubscribeItemDelegate Completed;
    
    UCoreSubscribeItemNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSubscribeItemNode* SubscribeItemNode(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
    
};

