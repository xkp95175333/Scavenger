// AnimBlueprintGeneratedClass ABP_Rifle_Base.ABP_Rifle_Base_C
// Size: 0x47a (Inherited: 0x370)
struct UABP_Rifle_Base_C : US_WeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x378(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x3a8(0x48)
	struct AS_CharacterBase* ScavengerCharacterBase; // 0x3f0(0x08)
	struct US_HumanAnimInstance* ABP_Human_Ref; // 0x3f8(0x08)
	enum class ES_WeaponClass WeaponEnum; // 0x400(0x01)
	bool WeaponReadied; // 0x401(0x01)
	char pad_402[0x2]; // 0x402(0x02)
	struct FName WeaponLocationName; // 0x404(0x08)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct FTransform WeaponLocation; // 0x410(0x30)
	struct FTransform WeaponStowLocation; // 0x440(0x30)
	struct AS_WeaponBase* WeaponInstance; // 0x470(0x08)
	bool IsAI; // 0x478(0x01)
	bool WeaponReadiedSecondary; // 0x479(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Rifle_Base.ABP_Rifle_Base_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Rifle_Base.ABP_Rifle_Base_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_ABP_Rifle_Base(int32_t EntryPoint); // Function ABP_Rifle_Base.ABP_Rifle_Base_C.ExecuteUbergraph_ABP_Rifle_Base // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

