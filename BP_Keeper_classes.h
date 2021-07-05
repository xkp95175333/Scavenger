// BlueprintGeneratedClass BP_Keeper.BP_Keeper_C
// Size: 0x4b0 (Inherited: 0x2b8)
struct ABP_Keeper_C : AS_Keeper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UAkComponent* AK_KeeperComponent; // 0x2c0(0x08)
	struct USkeletalMeshComponent* SK_Keeper_Core; // 0x2c8(0x08)
	bool CurrentlyPreoccupied; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UCurveFloat* KeeperLightCurve; // 0x2d8(0x08)
	float LightOnTimer; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FS_CosmeticItemMetadata cosmeticMetadata; // 0x2e8(0x1c8)

	void UpdateMeshFromOwnerCosmeticLoadout(); // Function BP_Keeper.BP_Keeper_C.UpdateMeshFromOwnerCosmeticLoadout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UserConstructionScript(); // Function BP_Keeper.BP_Keeper_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_Keeper.BP_Keeper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnCosmeticLoadoutChanged(struct AS_CharacterBase* Character); // Function BP_Keeper.BP_Keeper_C.OnCosmeticLoadoutChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Keeper(int32_t EntryPoint); // Function BP_Keeper.BP_Keeper_C.ExecuteUbergraph_BP_Keeper // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

