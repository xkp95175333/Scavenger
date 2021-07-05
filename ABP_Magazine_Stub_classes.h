// AnimBlueprintGeneratedClass ABP_Magazine_Stub.ABP_Magazine_Stub_C
// Size: 0x520 (Inherited: 0x370)
struct UABP_Magazine_Stub_C : US_AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x378(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3a8(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4b0(0x20)
	struct AS_CharacterBase* ScavengerCharacterBase; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)
	struct FTransform LeftHandTransform; // 0x4e0(0x30)
	enum class ES_WeaponClass WeaponEnum; // 0x510(0x01)
	bool Mag to Hand IK; // 0x511(0x01)
	bool IsCrouching; // 0x512(0x01)
	bool ADS is Active; // 0x513(0x01)
	char pad_514[0x4]; // 0x514(0x04)
	struct UAnimInstance* ABP_Human_Ref; // 0x518(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Magazine_Stub.ABP_Magazine_Stub_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Magazine_Stub_AnimGraphNode_ModifyBone_BFEA13964A25991F42EF6884CD41E66A(); // Function ABP_Magazine_Stub.ABP_Magazine_Stub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Magazine_Stub_AnimGraphNode_ModifyBone_BFEA13964A25991F42EF6884CD41E66A // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Magazine_Stub.ABP_Magazine_Stub_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_ABP_Magazine_Stub(int32_t EntryPoint); // Function ABP_Magazine_Stub.ABP_Magazine_Stub_C.ExecuteUbergraph_ABP_Magazine_Stub // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

