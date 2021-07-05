// AnimBlueprintGeneratedClass ABP_Handgun_Base.ABP_Handgun_Base_C
// Size: 0x6e1 (Inherited: 0x370)
struct UABP_Handgun_Base_C : US_WeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x378(0x158)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x4d0(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x518(0x48)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x560(0x30)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x590(0xc0)
	struct AS_CharacterBase* ScavengerCharacterBase; // 0x650(0x08)
	struct US_HumanAnimInstance* ABP_Human_Ref; // 0x658(0x08)
	enum class ES_WeaponClass WeaponEnum; // 0x660(0x01)
	char pad_661[0x7]; // 0x661(0x07)
	struct AS_WeaponBase* WeaponInstance; // 0x668(0x08)
	bool WeaponReadied; // 0x670(0x01)
	char pad_671[0x3]; // 0x671(0x03)
	struct FName WeaponLocationName; // 0x674(0x08)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct FTransform WeaponLocation; // 0x680(0x30)
	struct FTransform WeaponStowLocation; // 0x6b0(0x30)
	bool IsAI; // 0x6e0(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Handgun_Base.ABP_Handgun_Base_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Handgun_Base.ABP_Handgun_Base_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_ABP_Handgun_Base(int32_t EntryPoint); // Function ABP_Handgun_Base.ABP_Handgun_Base_C.ExecuteUbergraph_ABP_Handgun_Base // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

