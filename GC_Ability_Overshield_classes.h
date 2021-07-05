// BlueprintGeneratedClass GC_Ability_Overshield.GC_Ability_Overshield_C
// Size: 0x53c (Inherited: 0x530)
struct AGC_Ability_Overshield_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	int32_t Shell Id 2; // 0x538(0x04)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Ability_Overshield.GC_Ability_Overshield_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Ability_Overshield(int32_t EntryPoint); // Function GC_Ability_Overshield.GC_Ability_Overshield_C.ExecuteUbergraph_GC_Ability_Overshield // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

