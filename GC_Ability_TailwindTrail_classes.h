// BlueprintGeneratedClass GC_Ability_TailwindTrail.GC_Ability_TailwindTrail_C
// Size: 0x540 (Inherited: 0x530)
struct AGC_Ability_TailwindTrail_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* PS_Sprint_DashLines; // 0x538(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Ability_TailwindTrail.GC_Ability_TailwindTrail_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Check Velocity(); // Function GC_Ability_TailwindTrail.GC_Ability_TailwindTrail_C.Check Velocity // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Ability_TailwindTrail(int32_t EntryPoint); // Function GC_Ability_TailwindTrail.GC_Ability_TailwindTrail_C.ExecuteUbergraph_GC_Ability_TailwindTrail // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

