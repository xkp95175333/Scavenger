// Enum ARUtilities.EARLiveLinkSourceType
enum class EARLiveLinkSourceType : uint8 {
	None,
	ARKitPoseTracking,
	EARLiveLinkSourceType_MAX,
};

// ScriptStruct ARUtilities.ARKitPoseTrackingConfig
// Size: 0x18 (Inherited: 0x00)
struct FARKitPoseTrackingConfig {
	struct FVector HumanForward; // 0x00(0x0c)
	struct FVector MeshForward; // 0x0c(0x0c)
};

