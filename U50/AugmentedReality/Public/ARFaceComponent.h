#pragma once
#include "CoreMinimal.h"
#include "EARFaceTransformMixing.h"
#include "ARComponent.h"
#include "EFaceComponentDebugMode.h"
#include "ARFaceUpdatePayload.h"
#include "ARFaceComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARFaceComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARFaceTransformMixing TransformSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateVertexNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFaceOutOfScreen;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_Payload, meta=(AllowPrivateAccess=true))
    FARFaceUpdatePayload ReplicatedPayload;
    
public:
    UARFaceComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARFaceUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdate(const FARFaceUpdatePayload& Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAdd(const FARFaceUpdatePayload& Payload);
    
};

