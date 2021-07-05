// AnimBlueprintGeneratedClass ABP_KeeperHarvest_Base_01.ABP_KeeperHarvest_Base_01_C
// Size: 0x4a0 (Inherited: 0x2c0)
struct UABP_KeeperHarvest_Base_01_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x378(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3a8(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x458(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_KeeperHarvest_Base_01.ABP_KeeperHarvest_Base_01_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_ABP_KeeperHarvest_Base_01(int32_t EntryPoint); // Function ABP_KeeperHarvest_Base_01.ABP_KeeperHarvest_Base_01_C.ExecuteUbergraph_ABP_KeeperHarvest_Base_01 // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

