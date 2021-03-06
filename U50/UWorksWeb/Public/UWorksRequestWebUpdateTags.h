#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UpdateTagsDelegateDelegate.h"
#include "UpdateTagsMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "UWorksRequestWebUpdateTags.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebUpdateTags : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUpdateTagsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUpdateTagsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUpdateTags();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

