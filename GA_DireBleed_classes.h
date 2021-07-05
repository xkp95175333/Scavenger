// BlueprintGeneratedClass GA_DireBleed.GA_DireBleed_C
// Size: 0x3c8 (Inherited: 0x3b8)
struct UGA_DireBleed_C : UGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct FActiveGameplayEffectHandle Direbleed; // 0x3c0(0x08)

	void K2_ActivateAbility(); // Function GA_DireBleed.GA_DireBleed_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DireBleed.GA_DireBleed_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void CustomEvent_1(struct US_StatsComponent* StatsComponent, enum class ES_StatsState OldState, enum class ES_StatsState NewState); // Function GA_DireBleed.GA_DireBleed_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GA_DireBleed(int32_t EntryPoint); // Function GA_DireBleed.GA_DireBleed_C.ExecuteUbergraph_GA_DireBleed // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

