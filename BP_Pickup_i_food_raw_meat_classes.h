// BlueprintGeneratedClass BP_Pickup_i_food_raw_meat.BP_Pickup_i_food_raw_meat_C
// Size: 0x5ec (Inherited: 0x5e0)
struct ABP_Pickup_i_food_raw_meat_C : ABP_pickup_i_food_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e0(0x08)
	int32_t DynamicOpportunityPointID; // 0x5e8(0x04)

	void SwitchTeamOnConsume(bool TRUE); // Function BP_Pickup_i_food_raw_meat.BP_Pickup_i_food_raw_meat_C.SwitchTeamOnConsume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_Pickup_i_food_raw_meat.BP_Pickup_i_food_raw_meat_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Consume(bool Consumed); // Function BP_Pickup_i_food_raw_meat.BP_Pickup_i_food_raw_meat_C.Consume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Pickup_i_food_raw_meat.BP_Pickup_i_food_raw_meat_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Pickup_i_food_raw_meat(int32_t EntryPoint); // Function BP_Pickup_i_food_raw_meat.BP_Pickup_i_food_raw_meat_C.ExecuteUbergraph_BP_Pickup_i_food_raw_meat // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

