#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnimSharingAdditiveInstance.generated.h"

class USkeletalMeshComponent;
class UAnimSequence;

UCLASS(NonTransient)
class UAnimSharingAdditiveInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> BaseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimSequence> AdditiveAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bStateBool;
    
public:
    UAnimSharingAdditiveInstance();
};

