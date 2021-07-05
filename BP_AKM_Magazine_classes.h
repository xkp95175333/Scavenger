// BlueprintGeneratedClass BP_AKM_Magazine.BP_AKM_Magazine_C
// Size: 0x3d9 (Inherited: 0x3c8)
struct ABP_AKM_Magazine_C : AS_WeaponMagazineAttachment {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct USkeletalMeshComponent* SK_AKM_Magazine_Stub; // 0x3d0(0x08)
	bool IK_to_Hand; // 0x3d8(0x01)

	void ReceiveTick(float DeltaSeconds); // Function BP_AKM_Magazine.BP_AKM_Magazine_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_AKM_Magazine(int32_t EntryPoint); // Function BP_AKM_Magazine.BP_AKM_Magazine_C.ExecuteUbergraph_BP_AKM_Magazine // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

