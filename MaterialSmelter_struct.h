// Enum MaterialSmelter.EPackedMaterialProperty
enum class EPackedMaterialProperty : uint8 {
	PMP_BaseColor,
	PMP_Normal,
	PMP_AmbientOcclusion_Roughness_Metallic,
	PMP_EmissiveColor,
	PMP_SubsurfaceColor,
	PMP_Opacity,
	PMP_MAX,
};

// ScriptStruct MaterialSmelter.MaterialSmelterOutput
// Size: 0x98 (Inherited: 0x00)
struct FMaterialSmelterOutput {
	struct TSoftObjectPtr<struct UMaterialInterface> MaterialToSmelt; // 0x00(0x28)
	struct TArray<struct FMaterialSmelterTextureOutput> TextureOutputs; // 0x28(0x10)
	struct TMap<struct FName, struct FName> ParameterMapping; // 0x38(0x50)
	bool bConvertRoughnessFromSRGB; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UMaterialInterface* MaterialInstanceOutput; // 0x90(0x08)
};

// ScriptStruct MaterialSmelter.MaterialSmelterTextureOutput
// Size: 0x58 (Inherited: 0x00)
struct FMaterialSmelterTextureOutput {
	struct UTexture2D* OutTexture; // 0x00(0x08)
	char bEnabled : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString suffix; // 0x10(0x10)
	struct FName MaterialParameterName; // 0x20(0x08)
	struct FIntPoint TextureSize; // 0x28(0x08)
	enum class TextureCompressionSettings CompressionSettings; // 0x30(0x01)
	enum class TextureGroup LODGroup; // 0x31(0x01)
	bool bSRGBEnabled; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	struct FMaterialPropertyChannel Red; // 0x34(0x08)
	struct FMaterialPropertyChannel Green; // 0x3c(0x08)
	struct FMaterialPropertyChannel Blue; // 0x44(0x08)
	struct FMaterialPropertyChannel Alpha; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct MaterialSmelter.MaterialPropertyChannel
// Size: 0x08 (Inherited: 0x00)
struct FMaterialPropertyChannel {
	char bEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	enum class EMaterialProperty MaterialProperty; // 0x01(0x01)
	enum class ETextureColorChannel TextureColorChannel; // 0x02(0x01)
	char DefaultValue; // 0x03(0x01)
	struct FColor PropertyColor; // 0x04(0x04)
};

// ScriptStruct MaterialSmelter.MaterialSmelterRuntimeOutput
// Size: 0x20 (Inherited: 0x00)
struct FMaterialSmelterRuntimeOutput {
	struct FIntPoint TargetSize; // 0x00(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x08(0x08)
	struct UTextureRenderTarget2D* RenderTargetCopy; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct MaterialSmelter.MaterialSmelterRuntimeLayer
// Size: 0x20 (Inherited: 0x00)
struct FMaterialSmelterRuntimeLayer {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x08(0x08)
	struct UTexture2D* MaskTexture; // 0x10(0x08)
	enum class ETextureColorChannel MaskChannel; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

