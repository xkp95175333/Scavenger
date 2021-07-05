// AnimBlueprintGeneratedClass ABP_Keeper_02.ABP_Keeper_02_C
// Size: 0x722 (Inherited: 0x370)
struct UABP_Keeper_02_C : US_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x378(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x3a8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3f0(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x470(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x510(0x80)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x590(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x698(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x6b8(0x20)
	struct AS_Keeper* KeeperInstance; // 0x6d8(0x08)
	struct AS_CharacterBase* ScavengerCharacterBase; // 0x6e0(0x08)
	char pad_6E8[0x8]; // 0x6e8(0x08)
	struct FTransform R_HandLocation; // 0x6f0(0x30)
	bool GameStart; // 0x720(0x01)
	bool Keeper_R_Hand; // 0x721(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Keeper_02.ABP_Keeper_02_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Keeper_02_AnimGraphNode_ModifyBone_C732F42147600376C09F04B159ED8A06(); // Function ABP_Keeper_02.ABP_Keeper_02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Keeper_02_AnimGraphNode_ModifyBone_C732F42147600376C09F04B159ED8A06 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Keeper_02.ABP_Keeper_02_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_ABP_Keeper_02(int32_t EntryPoint); // Function ABP_Keeper_02.ABP_Keeper_02_C.ExecuteUbergraph_ABP_Keeper_02 // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

