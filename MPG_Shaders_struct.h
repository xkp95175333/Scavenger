// ScriptStruct MPG_Shaders.MasterMaterialDisplayData
// Size: 0x30 (Inherited: 0x00)
struct FMasterMaterialDisplayData {
	struct FString DisplayName; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct FLinearColor EntryColour; // 0x20(0x10)
};

// ScriptStruct MPG_Shaders.FoundMaterialParameter
// Size: 0x08 (Inherited: 0x00)
struct FFoundMaterialParameter {
	struct FName OldParameterName; // 0x00(0x08)
};

// ScriptStruct MPG_Shaders.FoundMaterialTextureParameter
// Size: 0x10 (Inherited: 0x08)
struct FFoundMaterialTextureParameter : FFoundMaterialParameter {
	struct UTexture* Value; // 0x08(0x08)
};

// ScriptStruct MPG_Shaders.FoundMaterialVectorParameter
// Size: 0x18 (Inherited: 0x08)
struct FFoundMaterialVectorParameter : FFoundMaterialParameter {
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct MPG_Shaders.FoundMaterialScalarParameter
// Size: 0x0c (Inherited: 0x08)
struct FFoundMaterialScalarParameter : FFoundMaterialParameter {
	float Value; // 0x08(0x04)
};

// ScriptStruct MPG_Shaders.MaterialParameterMap
// Size: 0x10 (Inherited: 0x00)
struct FMaterialParameterMap {
	struct TArray<struct FName> Parameters; // 0x00(0x10)
};

// ScriptStruct MPG_Shaders.TextureTemplatePattern
// Size: 0x20 (Inherited: 0x08)
struct FTextureTemplatePattern : FTableRowBase {
	struct UTexture2D* TextureTemplate; // 0x08(0x08)
	struct TArray<struct FString> PostfixPatterns; // 0x10(0x10)
};

