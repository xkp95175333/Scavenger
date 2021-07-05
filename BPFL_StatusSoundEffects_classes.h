// BlueprintGeneratedClass BPFL_StatusSoundEffects.BPFL_StatusSoundEffects_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFL_StatusSoundEffects_C : UBlueprintFunctionLibrary {

	void PlayStatusAlert(struct AActor* Actor, struct FS_StatusAlertSoundEffect StatusAlertInstance, float MaxPlayFrequencySeconds, struct UObject* __WorldContext, bool bDidAlert); // Function BPFL_StatusSoundEffects.BPFL_StatusSoundEffects_C.PlayStatusAlert // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StopStatusLoop(struct AActor* Actor, struct FS_StatusLoopSoundEffect StatsSoundinstance, bool ForceStop, struct UObject* __WorldContext, bool bDidStop); // Function BPFL_StatusSoundEffects.BPFL_StatusSoundEffects_C.StopStatusLoop // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StartStatusLoop(struct AActor* Actor, struct FS_StatusLoopSoundEffect StatsSoundinstance, struct UObject* __WorldContext, bool bDidStart); // Function BPFL_StatusSoundEffects.BPFL_StatusSoundEffects_C.StartStatusLoop // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

