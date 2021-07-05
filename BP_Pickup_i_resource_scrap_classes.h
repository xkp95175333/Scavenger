// BlueprintGeneratedClass BP_Pickup_i_resource_scrap.BP_Pickup_i_resource_scrap_C
// Size: 0x61c (Inherited: 0x5d8)
struct ABP_Pickup_i_resource_scrap_C : AS_ItemPickup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	float Delay VFX; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct ABP_Swarm_C* BP_Actor; // 0x5e8(0x08)
	float Delay; // 0x5f0(0x04)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct ABP_Swarm_Spline_SM_Item_C* pickup; // 0x5f8(0x08)
	int32_t Color; // 0x600(0x04)
	int32_t Epic; // 0x604(0x04)
	int32_t Legendary; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct ABP_Swarm_Spline_Spawn_SM_C* IdleFX; // 0x610(0x08)
	int32_t Random Scrap Mesh; // 0x618(0x04)

	void ReceiveBeginPlay(); // Function BP_Pickup_i_resource_scrap.BP_Pickup_i_resource_scrap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Pending Destruction(); // Function BP_Pickup_i_resource_scrap.BP_Pickup_i_resource_scrap_C.Pending Destruction // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void MakeScrapPiece(); // Function BP_Pickup_i_resource_scrap.BP_Pickup_i_resource_scrap_C.MakeScrapPiece // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandlePickup(struct AS_PlayerController* PlayerController); // Function BP_Pickup_i_resource_scrap.BP_Pickup_i_resource_scrap_C.HandlePickup // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveDestroyed(); // Function BP_Pickup_i_resource_scrap.BP_Pickup_i_resource_scrap_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Pickup_i_resource_scrap(int32_t EntryPoint); // Function BP_Pickup_i_resource_scrap.BP_Pickup_i_resource_scrap_C.ExecuteUbergraph_BP_Pickup_i_resource_scrap // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

