// AnimBlueprintGeneratedClass ABP_Kali_Classic_Dynamics.ABP_Kali_Classic_Dynamics_C
// Size: 0x1240 (Inherited: 0x2c0)
struct UABP_Kali_Classic_Dynamics_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2c8(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3e0(0x20)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_3; // 0x400(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0x528(0x128)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier; // 0x650(0xf0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x740(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x760(0x30)
	struct FAnimNode_Trail AnimGraphNode_Trail_4; // 0x790(0x260)
	struct FAnimNode_Trail AnimGraphNode_Trail_3; // 0x9f0(0x260)
	struct FAnimNode_Trail AnimGraphNode_Trail_2; // 0xc50(0x260)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0xeb0(0x128)
	char pad_FD8[0x8]; // 0xfd8(0x08)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0xfe0(0x260)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function ABP_Kali_Classic_Dynamics.ABP_Kali_Classic_Dynamics_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_ABP_Kali_Classic_Dynamics(int32_t EntryPoint); // Function ABP_Kali_Classic_Dynamics.ABP_Kali_Classic_Dynamics_C.ExecuteUbergraph_ABP_Kali_Classic_Dynamics // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

