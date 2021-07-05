// BlueprintGeneratedClass BP_BloatbileVomit.BP_BloatbileVomit_C
// Size: 0x518 (Inherited: 0x4e8)
struct ABP_BloatbileVomit_C : AS_GrenadeProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UAkComponent* AkVomitSound; // 0x4f0(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x4f8(0x10)
	struct AS_AICharacter* aiCharacter; // 0x508(0x08)
	struct AS_AIController* AIController; // 0x510(0x08)

	void SpawnGroundMiasma(struct FVector Location); // Function BP_BloatbileVomit.BP_BloatbileVomit_C.SpawnGroundMiasma // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnImpact(struct FHitResult ImpactResult); // Function BP_BloatbileVomit.BP_BloatbileVomit_C.OnImpact // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_BloatbileVomit.BP_BloatbileVomit_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SpawnGroundGoop(struct FVector Location); // Function BP_BloatbileVomit.BP_BloatbileVomit_C.SpawnGroundGoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnImpactWithLandscape(struct FHitResult ImpactResult, float SnowDepth); // Function BP_BloatbileVomit.BP_BloatbileVomit_C.OnImpactWithLandscape // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_BloatbileVomit(int32_t EntryPoint); // Function BP_BloatbileVomit.BP_BloatbileVomit_C.ExecuteUbergraph_BP_BloatbileVomit // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void NewEventDispatcher_0__DelegateSignature(); // Function BP_BloatbileVomit.BP_BloatbileVomit_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

