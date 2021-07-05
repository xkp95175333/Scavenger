// AnimBlueprintGeneratedClass ABP_Bow.ABP_Bow_C
// Size: 0x212a (Inherited: 0x370)
struct UABP_Bow_C : US_WeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x378(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x3a8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x428(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x458(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x508(0x108)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_4; // 0x610(0x1b0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x7c0(0x108)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x8c8(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x968(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xa08(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0xaa8(0x158)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xc00(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0xd58(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xd80(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xda0(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_6; // 0xdc8(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xe10(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_5; // 0xe38(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xe80(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0xea8(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xef0(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0xf18(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0xf60(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xfa8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1028(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x10c8(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1110(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1268(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x1290(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1350(0x28)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x1378(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x1418(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1498(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1518(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1598(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1618(0xc0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x16d8(0x20)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_4; // 0x16f8(0xf0)
	char pad_17E8[0x8]; // 0x17e8(0x08)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_3; // 0x17f0(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_2; // 0x19a0(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1b50(0x1b0)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_3; // 0x1d00(0xf0)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_2; // 0x1df0(0xf0)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1ee0(0xf0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1fd0(0x80)
	struct AS_CharacterBase* ScavengerCharacterBase; // 0x2050(0x08)
	char pad_2058[0x8]; // 0x2058(0x08)
	struct FTransform RightHandTransform; // 0x2060(0x30)
	bool BowString; // 0x2090(0x01)
	char pad_2091[0x7]; // 0x2091(0x07)
	struct UAnimInstance* ABP_Human_Ref; // 0x2098(0x08)
	enum class ES_WeaponClass WeaponEnum; // 0x20a0(0x01)
	bool Ready; // 0x20a1(0x01)
	bool IsCrouching; // 0x20a2(0x01)
	bool ADS is Active; // 0x20a3(0x01)
	bool ArrowAttached; // 0x20a4(0x01)
	bool IsEmpty; // 0x20a5(0x01)
	char pad_20A6[0x2]; // 0x20a6(0x02)
	struct AS_WeaponBase* WeaponInstance; // 0x20a8(0x08)
	bool WeaponReadied; // 0x20b0(0x01)
	char pad_20B1[0x3]; // 0x20b1(0x03)
	struct FName WeaponLocationName; // 0x20b4(0x08)
	char pad_20BC[0x4]; // 0x20bc(0x04)
	struct FTransform WeaponLocation; // 0x20c0(0x30)
	struct FTransform WeaponStowLocation; // 0x20f0(0x30)
	bool ArrowOff; // 0x2120(0x01)
	bool IsAI; // 0x2121(0x01)
	char pad_2122[0x2]; // 0x2122(0x02)
	int32_t LoadedArrowCount; // 0x2124(0x04)
	bool ArrowAim; // 0x2128(0x01)
	bool Empty; // 0x2129(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Bow.ABP_Bow_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bow_AnimGraphNode_CopyBone_49E903E5422513293128BB940134B223(); // Function ABP_Bow.ABP_Bow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bow_AnimGraphNode_CopyBone_49E903E5422513293128BB940134B223 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bow_AnimGraphNode_ModifyBone_4E8D356D4B7FCAEFB8A5229FD363519B(); // Function ABP_Bow.ABP_Bow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bow_AnimGraphNode_ModifyBone_4E8D356D4B7FCAEFB8A5229FD363519B // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bow_AnimGraphNode_LookAt_171712064CF4D3BF20AEEDB26F1024FE(); // Function ABP_Bow.ABP_Bow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bow_AnimGraphNode_LookAt_171712064CF4D3BF20AEEDB26F1024FE // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bow_AnimGraphNode_ModifyBone_D6F1C9A74EB0233971F327A6DB2501D5(); // Function ABP_Bow.ABP_Bow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bow_AnimGraphNode_ModifyBone_D6F1C9A74EB0233971F327A6DB2501D5 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Bow.ABP_Bow_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AnimNotify_ArrowOff(); // Function ABP_Bow.ABP_Bow_C.AnimNotify_ArrowOff // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AnimNotify_ArrowOn(); // Function ABP_Bow.ABP_Bow_C.AnimNotify_ArrowOn // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AnimNotify_WPN_BowStringOn(); // Function ABP_Bow.ABP_Bow_C.AnimNotify_WPN_BowStringOn // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AnimNotify_WPN_BowStringOff(); // Function ABP_Bow.ABP_Bow_C.AnimNotify_WPN_BowStringOff // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AnimNotify_ArrowAim(); // Function ABP_Bow.ABP_Bow_C.AnimNotify_ArrowAim // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void AnimNotify_ArrowAimOff(); // Function ABP_Bow.ABP_Bow_C.AnimNotify_ArrowAimOff // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_ABP_Bow(int32_t EntryPoint); // Function ABP_Bow.ABP_Bow_C.ExecuteUbergraph_ABP_Bow // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

