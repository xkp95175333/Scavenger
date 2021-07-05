// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// Size: 0x500 (Inherited: 0x4f0)
struct ABP_PlayerState_C : AS_PlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4f8(0x08)

	void TallyScores(); // Function BP_PlayerState.BP_PlayerState_C.TallyScores // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerState.BP_PlayerState_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PlayerState(int32_t EntryPoint); // Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

