// BlueprintGeneratedClass GC_DamageType_Bleed.GC_DamageType_Bleed_C
// Size: 0x548 (Inherited: 0x530)
struct AGC_DamageType_Bleed_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	float Bokeh_NewTrack_0_B7E7B04C4007153CAF68A48DB8B7D7FD; // 0x538(0x04)
	enum class ETimelineDirection Bokeh__Direction_B7E7B04C4007153CAF68A48DB8B7D7FD; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	struct UTimelineComponent* Bokeh; // 0x540(0x08)

	void Bokeh__FinishedFunc(); // Function GC_DamageType_Bleed.GC_DamageType_Bleed_C.Bokeh__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Bokeh__UpdateFunc(); // Function GC_DamageType_Bleed.GC_DamageType_Bleed_C.Bokeh__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_DamageType_Bleed.GC_DamageType_Bleed_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function GC_DamageType_Bleed.GC_DamageType_Bleed_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_DamageType_Bleed(int32_t EntryPoint); // Function GC_DamageType_Bleed.GC_DamageType_Bleed_C.ExecuteUbergraph_GC_DamageType_Bleed // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

