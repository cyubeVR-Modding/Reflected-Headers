#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonID -FallbackName=PolygonID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonGroupID -FallbackName=PolygonGroupID
#include "VertexAndAttributes.h"
#include "EPolygonEdgeHardness.h"
#include "PolygonToCreate.generated.h"

USTRUCT(BlueprintType)
struct FPolygonToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPolygonGroupID PolygonGroupID;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVertexAndAttributes> PerimeterVertices;
    
    UPROPERTY(BlueprintReadWrite)
    FPolygonID OriginalPolygonID;
    
    UPROPERTY(BlueprintReadWrite)
    EPolygonEdgeHardness PolygonEdgeHardness;
    
    EDITABLEMESH_API FPolygonToCreate();
};

