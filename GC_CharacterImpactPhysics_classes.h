// BlueprintGeneratedClass GC_CharacterImpactPhysics.GC_CharacterImpactPhysics_C
// Size: 0x2f8 (Inherited: 0x2e8)
struct AGC_CharacterImpactPhysics_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f0(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_CharacterImpactPhysics.GC_CharacterImpactPhysics_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_CharacterImpactPhysics(int32_t EntryPoint); // Function GC_CharacterImpactPhysics.GC_CharacterImpactPhysics_C.ExecuteUbergraph_GC_CharacterImpactPhysics // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

