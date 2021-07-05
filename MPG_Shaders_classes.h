// Class MPG_Shaders.MasterMaterialAssetUserData
// Size: 0x28 (Inherited: 0x28)
struct UMasterMaterialAssetUserData : UAssetUserData {
};

// Class MPG_Shaders.MasterMaterialCollection
// Size: 0x30 (Inherited: 0x30)
struct UMasterMaterialCollection : UPrimaryDataAsset {

	void FillMasterMaterialsFromFolder(); // Function MPG_Shaders.MasterMaterialCollection.FillMasterMaterialsFromFolder // (Final|Native|Public) // @ game+0xffff8008e4a10000
};

// Class MPG_Shaders.MaterialParameterMapping
// Size: 0x30 (Inherited: 0x30)
struct UMaterialParameterMapping : UPrimaryDataAsset {

	void FindMaterialParameters(struct UMaterialInstanceConstant* MaterialInstance, struct TMap<struct FName, struct FFoundMaterialScalarParameter> FoundScalarParameters, struct TMap<struct FName, struct FFoundMaterialVectorParameter> FoundVectorParameters, struct TMap<struct FName, struct FFoundMaterialTextureParameter> FoundTextureParameters); // Function MPG_Shaders.MaterialParameterMapping.FindMaterialParameters // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void FillParameterMapsFromMaterial(); // Function MPG_Shaders.MaterialParameterMapping.FillParameterMapsFromMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void DisableBasePropertyOverrides(struct UMaterialInstanceConstant* MaterialInstance); // Function MPG_Shaders.MaterialParameterMapping.DisableBasePropertyOverrides // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ApplyToSelectedAssets(struct TArray<struct UObject*> SelectedAssets); // Function MPG_Shaders.MaterialParameterMapping.ApplyToSelectedAssets // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ApplyMaterialParameters(struct UMaterialInstanceConstant* MaterialInstance, struct TMap<struct FName, struct FFoundMaterialScalarParameter> FoundScalarParameters, struct TMap<struct FName, struct FFoundMaterialVectorParameter> FoundVectorParameters, struct TMap<struct FName, struct FFoundMaterialTextureParameter> FoundTextureParameters); // Function MPG_Shaders.MaterialParameterMapping.ApplyMaterialParameters // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class MPG_Shaders.MaterialParameterMappingAssetUserData
// Size: 0x28 (Inherited: 0x28)
struct UMaterialParameterMappingAssetUserData : UAssetUserData {
};

// Class MPG_Shaders.TextureTemplatesUtilities
// Size: 0x28 (Inherited: 0x28)
struct UTextureTemplatesUtilities : UBlueprintFunctionLibrary {

	void EDITOR_ApplyTextureTemplate(struct UTexture2D* TextureTemplate, struct UTexture2D* DestinationTextureAsset); // Function MPG_Shaders.TextureTemplatesUtilities.EDITOR_ApplyTextureTemplate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

