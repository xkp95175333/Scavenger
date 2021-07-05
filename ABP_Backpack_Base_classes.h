// AnimBlueprintGeneratedClass ABP_Backpack_Base.ABP_Backpack_Base_C
// Size: 0x13a0 (Inherited: 0x370)
struct UABP_Backpack_Base_C : US_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x378(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x480(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x588(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x5a8(0x30)
	char pad_5D8[0x8]; // 0x5d8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x5e0(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0xa20(0x440)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xe60(0x440)
	struct AS_CharacterBase* ScavengerCharacterBase; // 0x12a0(0x08)
	char pad_12A8[0x8]; // 0x12a8(0x08)
	struct FTransform B_Spine3_T; // 0x12b0(0x30)
	struct FTransform B_Clavical_L_T; // 0x12e0(0x30)
	struct FTransform B_Clavical_R_T; // 0x1310(0x30)
	struct FTransform B_Backpack_T; // 0x1340(0x30)
	struct FTransform B_Backpack_T_ref; // 0x1370(0x30)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Backpack_Base.ABP_Backpack_Base_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Backpack_Base.ABP_Backpack_Base_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Backpack_Base_AnimGraphNode_ModifyBone_77796A7941C4402FCB99109E17E7C69C(); // Function ABP_Backpack_Base.ABP_Backpack_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Backpack_Base_AnimGraphNode_ModifyBone_77796A7941C4402FCB99109E17E7C69C // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Backpack_Base_AnimGraphNode_ModifyBone_4FD15B044F1DF4CB5A968B860BCE844A(); // Function ABP_Backpack_Base.ABP_Backpack_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Backpack_Base_AnimGraphNode_ModifyBone_4FD15B044F1DF4CB5A968B860BCE844A // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_ABP_Backpack_Base(int32_t EntryPoint); // Function ABP_Backpack_Base.ABP_Backpack_Base_C.ExecuteUbergraph_ABP_Backpack_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

