// BlueprintGeneratedClass GC_Keyword_Sprint.GC_Keyword_Sprint_C
// Size: 0x540 (Inherited: 0x530)
struct AGC_Keyword_Sprint_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* PS_Sprint_DashLines; // 0x538(0x08)

	void ReceiveBeginPlay(); // Function GC_Keyword_Sprint.GC_Keyword_Sprint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Keyword_Sprint.GC_Keyword_Sprint_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Keyword_Sprint(int32_t EntryPoint); // Function GC_Keyword_Sprint.GC_Keyword_Sprint_C.ExecuteUbergraph_GC_Keyword_Sprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

