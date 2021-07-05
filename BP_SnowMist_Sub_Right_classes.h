// BlueprintGeneratedClass BP_SnowMist_Sub_Right.BP_SnowMist_Sub_Right_C
// Size: 0x2b0 (Inherited: 0x288)
struct ABP_SnowMist_Sub_Right_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	float Mist Radius Scale; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UParticleSystem* Particle System Played Within Radius; // 0x2a0(0x08)
	bool Is in Shelter; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	float Storminess; // 0x2ac(0x04)

	void Milliseconds(); // Function BP_SnowMist_Sub_Right.BP_SnowMist_Sub_Right_C.Milliseconds // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Custom Tick(); // Function BP_SnowMist_Sub_Right.BP_SnowMist_Sub_Right_C.Custom Tick // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_SnowMist_Sub_Right.BP_SnowMist_Sub_Right_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_SnowMist_Sub_Right(int32_t EntryPoint); // Function BP_SnowMist_Sub_Right.BP_SnowMist_Sub_Right_C.ExecuteUbergraph_BP_SnowMist_Sub_Right // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

