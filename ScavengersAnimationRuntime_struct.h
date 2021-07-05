// ScriptStruct ScavengersAnimationRuntime.S_CharacterAnimInstanceProxy
// Size: 0x860 (Inherited: 0x760)
struct FS_CharacterAnimInstanceProxy : FAnimInstanceProxy {
	char pad_760[0xb0]; // 0x760(0xb0)
	struct TMap<struct FName, struct FS_SoftPingMixInfo> SoftPingMixes; // 0x810(0x50)
};

// ScriptStruct ScavengersAnimationRuntime.S_SoftPingMixInfo
// Size: 0x18 (Inherited: 0x00)
struct FS_SoftPingMixInfo {
	struct TArray<struct FS_SoftPingDescriptor> PingDescriptors; // 0x00(0x10)
	struct UCurveFloat* TimeMagnitudeScalar; // 0x10(0x08)
};

// ScriptStruct ScavengersAnimationRuntime.S_SoftPingDescriptor
// Size: 0x20 (Inherited: 0x00)
struct FS_SoftPingDescriptor {
	struct FBoneReference PhysicsBone; // 0x00(0x10)
	struct TArray<struct FS_SoftPingBoneEffects> AffectedBones; // 0x10(0x10)
};

// ScriptStruct ScavengersAnimationRuntime.S_SoftPingBoneEffects
// Size: 0x38 (Inherited: 0x00)
struct FS_SoftPingBoneEffects {
	struct FBoneReference Bone; // 0x00(0x10)
	struct FVector RotationAxis; // 0x10(0x0c)
	float BoneMagnitude; // 0x1c(0x04)
	struct FFloatInterval RotationBounds; // 0x20(0x08)
	bool bUseDistanceFromBone; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UCurveFloat* DistanceScalar; // 0x30(0x08)
};

// ScriptStruct ScavengersAnimationRuntime.S_SoftPingRuntimeInfo
// Size: 0xb0 (Inherited: 0x00)
struct FS_SoftPingRuntimeInfo {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct ScavengersAnimationRuntime.SAnimNode_SoftPing
// Size: 0xd0 (Inherited: 0xc8)
struct FSAnimNode_SoftPing : FAnimNode_SkeletalControlBase {
	struct FName SoftPingDescriptorKey; // 0xc8(0x08)
};

