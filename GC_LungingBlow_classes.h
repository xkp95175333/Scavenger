// BlueprintGeneratedClass GC_LungingBlow.GC_LungingBlow_C
// Size: 0x31c (Inherited: 0x2e8)
struct AGC_LungingBlow_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UParticleSystemComponent* EmitterHandR; // 0x2f0(0x08)
	struct UParticleSystemComponent* EmitterHandL; // 0x2f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x300(0x08)
	struct UParticleSystem* ParticleSystemClass; // 0x308(0x08)
	float EmitterScale; // 0x310(0x04)
	struct FName EffectName; // 0x314(0x08)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GC_LungingBlow.GC_LungingBlow_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_LungingBlow.GC_LungingBlow_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_LungingBlow(int32_t EntryPoint); // Function GC_LungingBlow.GC_LungingBlow_C.ExecuteUbergraph_GC_LungingBlow // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

