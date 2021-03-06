#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshRenderableMeshData.h"
#include "RuntimeMeshProviderTargetInterface.h"
#include "RuntimeMeshCollisionSettings.h"
#include "RuntimeMeshCollisionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "RuntimeMeshSectionData.h"
#include "RuntimeMeshProvider.generated.h"

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProvider : public URuntimeMeshProviderTargetInterface {
    GENERATED_BODY()
public:
    URuntimeMeshProvider();
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable)
    bool IsThreadSafe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBound() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    bool HasCollisionMesh();
    
    UFUNCTION(BlueprintCallable)
    bool GetSectionMeshForLOD(int32 LODIndex, int32 SectionId, FRuntimeMeshRenderableMeshData& MeshData);
    
    UFUNCTION(BlueprintCallable)
    FRuntimeMeshCollisionSettings GetCollisionSettings();
    
    UFUNCTION(BlueprintCallable)
    bool GetCollisionMesh(FRuntimeMeshCollisionData& CollisionData);
    
    UFUNCTION(BlueprintCallable)
    FBoxSphereBounds GetBounds();
    
    UFUNCTION(BlueprintCallable)
    bool GetAllSectionsMeshForLOD(int32 LODIndex, TMap<int32, FRuntimeMeshSectionData>& MeshDatas);
    
    UFUNCTION(BlueprintCallable)
    void CollisionUpdateCompleted();
    
};

