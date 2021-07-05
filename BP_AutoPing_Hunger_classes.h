// BlueprintGeneratedClass BP_AutoPing_Hunger.BP_AutoPing_Hunger_C
// Size: 0x218 (Inherited: 0x209)
struct UBP_AutoPing_Hunger_C : UBP_AutoPing_C {
	char pad_209[0x7]; // 0x209(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x210(0x08)

	bool EvaluatePing_BP(struct AS_PlayerController* PlayerController); // Function BP_AutoPing_Hunger.BP_AutoPing_Hunger_C.EvaluatePing_BP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_AutoPing_Hunger.BP_AutoPing_Hunger_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_AutoPing_Hunger.BP_AutoPing_Hunger_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_AutoPing_Hunger(int32_t EntryPoint); // Function BP_AutoPing_Hunger.BP_AutoPing_Hunger_C.ExecuteUbergraph_BP_AutoPing_Hunger // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

