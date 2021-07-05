// BlueprintGeneratedClass GC_Keyword_HealDuration.GC_Keyword_HealDuration_C
// Size: 0x538 (Inherited: 0x530)
struct AGC_Keyword_HealDuration_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)

	void ReceiveBeginPlay(); // Function GC_Keyword_HealDuration.GC_Keyword_HealDuration_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Keyword_HealDuration.GC_Keyword_HealDuration_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Keyword_HealDuration(int32_t EntryPoint); // Function GC_Keyword_HealDuration.GC_Keyword_HealDuration_C.ExecuteUbergraph_GC_Keyword_HealDuration // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

