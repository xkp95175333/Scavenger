// BlueprintGeneratedClass BP_DropshipSpectator.BP_DropshipSpectator_C
// Size: 0x348 (Inherited: 0x310)
struct ABP_DropshipSpectator_C : ASpectatorPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct AActor* Dropship; // 0x318(0x08)
	SoftClassProperty SoftDropshipClass; // 0x320(0x28)

	void ReceiveTick(float DeltaSeconds); // Function BP_DropshipSpectator.BP_DropshipSpectator_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_DropshipSpectator(int32_t EntryPoint); // Function BP_DropshipSpectator.BP_DropshipSpectator_C.ExecuteUbergraph_BP_DropshipSpectator // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

