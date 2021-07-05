// BlueprintGeneratedClass BP_AutoPing.BP_AutoPing_C
// Size: 0x209 (Inherited: 0x200)
struct UBP_AutoPing_C : US_AutoPingComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	bool IsForcedPing; // 0x208(0x01)

	bool EvaluatePing_BP(struct AS_PlayerController* PlayerController); // Function BP_AutoPing.BP_AutoPing_C.EvaluatePing_BP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_AutoPing.BP_AutoPing_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_AutoPing(int32_t EntryPoint); // Function BP_AutoPing.BP_AutoPing_C.ExecuteUbergraph_BP_AutoPing // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

