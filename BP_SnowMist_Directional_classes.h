// BlueprintGeneratedClass BP_SnowMist_Directional.BP_SnowMist_Directional_C
// Size: 0x29c (Inherited: 0x288)
struct ABP_SnowMist_Directional_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	float Ring sclae; // 0x298(0x04)

	void ReceiveBeginPlay(); // Function BP_SnowMist_Directional.BP_SnowMist_Directional_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Milliseconds(); // Function BP_SnowMist_Directional.BP_SnowMist_Directional_C.Milliseconds // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Custom Tick(); // Function BP_SnowMist_Directional.BP_SnowMist_Directional_C.Custom Tick // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_SnowMist_Directional(int32_t EntryPoint); // Function BP_SnowMist_Directional.BP_SnowMist_Directional_C.ExecuteUbergraph_BP_SnowMist_Directional // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

