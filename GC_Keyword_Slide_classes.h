// BlueprintGeneratedClass GC_Keyword_Slide.GC_Keyword_Slide_C
// Size: 0x541 (Inherited: 0x530)
struct AGC_Keyword_Slide_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* PS_Sprint_DashLines; // 0x538(0x08)
	bool Sliding; // 0x540(0x01)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Keyword_Slide.GC_Keyword_Slide_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Update(); // Function GC_Keyword_Slide.GC_Keyword_Slide_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function GC_Keyword_Slide.GC_Keyword_Slide_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Keyword_Slide(int32_t EntryPoint); // Function GC_Keyword_Slide.GC_Keyword_Slide_C.ExecuteUbergraph_GC_Keyword_Slide // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

