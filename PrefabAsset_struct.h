// Enum PrefabAsset.EPrefabVariantRuleType
enum class EPrefabVariantRuleType : uint8 {
	SkipProp,
	EPrefabVariantRuleType_MAX,
};

// Enum PrefabAsset.EPTUITheme
enum class EPTUITheme : uint8 {
	Default,
	Dark,
	EPTUITheme_MAX,
};

// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8 {
	WireBox,
	WireSphere,
	EPrefabVisualizerType_MAX,
};

// ScriptStruct PrefabAsset.PrefabVariantRule
// Size: 0x20 (Inherited: 0x00)
struct FPrefabVariantRule {
	struct FName scope; // 0x00(0x08)
	struct FString Rule; // 0x08(0x10)
	enum class EPrefabVariantRuleType RuleType; // 0x18(0x01)
	bool bEnable; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct PrefabAsset.S_ComponentMaterialOverrideList
// Size: 0x50 (Inherited: 0x00)
struct FS_ComponentMaterialOverrideList {
	struct TMap<int32_t, struct UMaterialInterface*> OverridenMaterials; // 0x00(0x50)
};

