// BlueprintGeneratedClass GA_PlayerKeeper_Chisel.GA_PlayerKeeper_Chisel_C
// Size: 0x3d8 (Inherited: 0x3b8)
struct UGA_PlayerKeeper_Chisel_C : US_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct AS_Keeper* OwningKeeper; // 0x3c0(0x08)
	struct FName KeeperMontageTaskName; // 0x3c8(0x08)
	struct AController* PlayerCon; // 0x3d0(0x08)

	void InformPlayerAbiltiyEnded(struct AS_PlayerCharacter* Player Character); // Function GA_PlayerKeeper_Chisel.GA_PlayerKeeper_Chisel_C.InformPlayerAbiltiyEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnCancelled_0D32ACC54136BBB3A2C2D1BF453BC1A7(); // Function GA_PlayerKeeper_Chisel.GA_PlayerKeeper_Chisel_C.OnCancelled_0D32ACC54136BBB3A2C2D1BF453BC1A7 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnInterrupted_0D32ACC54136BBB3A2C2D1BF453BC1A7(); // Function GA_PlayerKeeper_Chisel.GA_PlayerKeeper_Chisel_C.OnInterrupted_0D32ACC54136BBB3A2C2D1BF453BC1A7 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnBlendOut_0D32ACC54136BBB3A2C2D1BF453BC1A7(); // Function GA_PlayerKeeper_Chisel.GA_PlayerKeeper_Chisel_C.OnBlendOut_0D32ACC54136BBB3A2C2D1BF453BC1A7 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnCompleted_0D32ACC54136BBB3A2C2D1BF453BC1A7(); // Function GA_PlayerKeeper_Chisel.GA_PlayerKeeper_Chisel_C.OnCompleted_0D32ACC54136BBB3A2C2D1BF453BC1A7 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_PlayerKeeper_Chisel.GA_PlayerKeeper_Chisel_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_ActivateAbility(); // Function GA_PlayerKeeper_Chisel.GA_PlayerKeeper_Chisel_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BP_HandleBecomeInactive(); // Function GA_PlayerKeeper_Chisel.GA_PlayerKeeper_Chisel_C.BP_HandleBecomeInactive // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GA_PlayerKeeper_Chisel(int32_t EntryPoint); // Function GA_PlayerKeeper_Chisel.GA_PlayerKeeper_Chisel_C.ExecuteUbergraph_GA_PlayerKeeper_Chisel // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

