// BlueprintGeneratedClass GC_Reactor_SpeedBoost.GC_Reactor_SpeedBoost_C
// Size: 0x540 (Inherited: 0x530)
struct AGC_Reactor_SpeedBoost_C : AGC_StatusEffect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USkeletalMeshComponent* SK_Omega_01; // 0x538(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Reactor_SpeedBoost.GC_Reactor_SpeedBoost_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Reactor_SpeedBoost(int32_t EntryPoint); // Function GC_Reactor_SpeedBoost.GC_Reactor_SpeedBoost_C.ExecuteUbergraph_GC_Reactor_SpeedBoost // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

