#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticMeshImportOptions.h"
#include "EDatasmithImportScene.h"
#include "DatasmithAssetImportOptions.h"
#include "DatasmithImportBaseOptions.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithImportBaseOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportScene SceneHandling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeGeometry;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeLight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeCamera;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeAnimation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDatasmithAssetImportOptions AssetOptions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithStaticMeshImportOptions StaticMeshOptions;
    
    FDatasmithImportBaseOptions();
};

