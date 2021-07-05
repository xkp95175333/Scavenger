// Class MaterialSmelter.MaterialSmelterLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMaterialSmelterLibrary : UBlueprintFunctionLibrary {

	void SmeltSingleMaterialAtRuntime(struct UMaterialInterface* Material, struct TMap<enum class EPackedMaterialProperty, struct FMaterialSmelterRuntimeOutput> RuntimeOutputs); // Function MaterialSmelter.MaterialSmelterLibrary.SmeltSingleMaterialAtRuntime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SmeltLayerStackAtRuntime(struct TArray<struct FMaterialSmelterRuntimeLayer> LayerStack, struct TMap<enum class EPackedMaterialProperty, struct FMaterialSmelterRuntimeOutput> RuntimeOutputs); // Function MaterialSmelter.MaterialSmelterLibrary.SmeltLayerStackAtRuntime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UMaterialInstanceDynamic* SetupSmeltedLiveMaterial(struct UMaterialInterface* LiveBaseMaterial, struct TMap<enum class EPackedMaterialProperty, struct UTexture*> SmeltedTextures); // Function MaterialSmelter.MaterialSmelterLibrary.SetupSmeltedLiveMaterial // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UTexture2D* CreateTexture2DFromRenderTarget(struct UTextureRenderTarget2D* RenderTarget, enum class EPackedMaterialProperty PackedMaterialProperty, bool bUseAlpha, bool bGenerateMips); // Function MaterialSmelter.MaterialSmelterLibrary.CreateTexture2DFromRenderTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct TMap<enum class EPackedMaterialProperty, struct UTexture2D*> ConvertRuntimeOutputsToTexture2D(struct TMap<enum class EPackedMaterialProperty, struct FMaterialSmelterRuntimeOutput> RuntimeOutputs, bool bGenerateMipMaps, bool bFlushRenderTarget); // Function MaterialSmelter.MaterialSmelterLibrary.ConvertRuntimeOutputsToTexture2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class MaterialSmelter.MaterialSmelterAssetUserData
// Size: 0x28 (Inherited: 0x28)
struct UMaterialSmelterAssetUserData : UAssetUserData {
};

