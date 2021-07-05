// AnimBlueprintGeneratedClass ABP_Melee_Base.ABP_Melee_Base_C
// Size: 0x991 (Inherited: 0x370)
struct UABP_Melee_Base_C : US_WeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x378(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x398(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x3c8(0x108)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x4d0(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x518(0x158)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x670(0xc0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x730(0x108)
	struct AS_CharacterBase* ScavengerCharacterBase; // 0x838(0x08)
	struct US_HumanAnimInstance* ABP_Human_Ref; // 0x840(0x08)
	enum class ES_WeaponClass WeaponEnum; // 0x848(0x01)
	bool Ready; // 0x849(0x01)
	bool AttachedStow; // 0x84a(0x01)
	char pad_84B[0x5]; // 0x84b(0x05)
	struct AS_WeaponBase* WeaponInstance; // 0x850(0x08)
	bool WeaponReadied; // 0x858(0x01)
	char pad_859[0x3]; // 0x859(0x03)
	struct FName WeaponLocationName; // 0x85c(0x08)
	bool IsAI; // 0x864(0x01)
	char pad_865[0xb]; // 0x865(0x0b)
	struct FTransform WeaponLocation; // 0x870(0x30)
	struct FTransform WeaponStowLocation; // 0x8a0(0x30)
	struct FTransform B_Hand_L_T; // 0x8d0(0x30)
	struct FTransform B_Hand_R_T; // 0x900(0x30)
	struct FTransform B_PropHand_L_T; // 0x930(0x30)
	struct FTransform B_PropHand_R_T; // 0x960(0x30)
	bool IsDual; // 0x990(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Melee_Base.ABP_Melee_Base_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Melee_Base.ABP_Melee_Base_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Melee_Base_AnimGraphNode_ModifyBone_5CA270BB44A23742BAAC33BB18D3CCE3(); // Function ABP_Melee_Base.ABP_Melee_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Melee_Base_AnimGraphNode_ModifyBone_5CA270BB44A23742BAAC33BB18D3CCE3 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Melee_Base_AnimGraphNode_ModifyBone_9E799C0343E42EB345C786826E306DD8(); // Function ABP_Melee_Base.ABP_Melee_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Melee_Base_AnimGraphNode_ModifyBone_9E799C0343E42EB345C786826E306DD8 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BlueprintInitializeAnimation(); // Function ABP_Melee_Base.ABP_Melee_Base_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_ABP_Melee_Base(int32_t EntryPoint); // Function ABP_Melee_Base.ABP_Melee_Base_C.ExecuteUbergraph_ABP_Melee_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

