// BlueprintGeneratedClass BP_Tailwind_Wake_Row.BP_Tailwind_Wake_Row_C
// Size: 0x2b4 (Inherited: 0x288)
struct ABP_Tailwind_Wake_Row_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UArrowComponent* Arrow; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float Location to Trace; // 0x2a0(0x04)
	float Max Traces; // 0x2a4(0x04)
	float Completed Traces; // 0x2a8(0x04)
	float Grid Distance; // 0x2ac(0x04)
	float Seconds Between Trace; // 0x2b0(0x04)

	void UserConstructionScript(); // Function BP_Tailwind_Wake_Row.BP_Tailwind_Wake_Row_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_Tailwind_Wake_Row.BP_Tailwind_Wake_Row_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_Tailwind_Wake_Row.BP_Tailwind_Wake_Row_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Tailwind_Wake_Row(int32_t EntryPoint); // Function BP_Tailwind_Wake_Row.BP_Tailwind_Wake_Row_C.ExecuteUbergraph_BP_Tailwind_Wake_Row // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

