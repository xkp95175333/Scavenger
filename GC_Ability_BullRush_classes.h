// BlueprintGeneratedClass GC_Ability_BullRush.GC_Ability_BullRush_C
// Size: 0x548 (Inherited: 0x530)
struct AGC_Ability_BullRush_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* PS_Sluka_Bullrush_Infection_Trail; // 0x538(0x08)
	struct UParticleSystemComponent* PS_SlukaSnowPlough; // 0x540(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Ability_BullRush.GC_Ability_BullRush_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Update(); // Function GC_Ability_BullRush.GC_Ability_BullRush_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Ability_BullRush(int32_t EntryPoint); // Function GC_Ability_BullRush.GC_Ability_BullRush_C.ExecuteUbergraph_GC_Ability_BullRush // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

