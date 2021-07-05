// BlueprintGeneratedClass BP_ChainLightningManager.BP_ChainLightningManager_C
// Size: 0x2e8 (Inherited: 0x288)
struct ABP_ChainLightningManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USphereComponent* JumpDistanceCollision; // 0x290(0x08)
	struct UStaticMeshComponent* Sphere; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	struct AS_CharacterBase* CurrentTarget; // 0x2a8(0x08)
	float TimeBetweenJumps; // 0x2b0(0x04)
	int32_t MaxJumps; // 0x2b4(0x04)
	int32_t JumpsPerformed; // 0x2b8(0x04)
	float BaseDamage; // 0x2bc(0x04)
	float JumpDistance; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct AS_CharacterBase*> PreviouslyShockedActors; // 0x2c8(0x10)
	struct AS_CharacterBase* InstigatorCharacter; // 0x2d8(0x08)
	struct AActor* OriginActor; // 0x2e0(0x08)

	void JumpToFirstTarget(struct AActor* PreviousTarget, struct AS_CharacterBase* NextTarget); // Function BP_ChainLightningManager.BP_ChainLightningManager_C.JumpToFirstTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FindFirstTarget(struct AS_CharacterBase* NextTarget); // Function BP_ChainLightningManager.BP_ChainLightningManager_C.FindFirstTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FindNextTarget(struct AS_CharacterBase* NextTarget); // Function BP_ChainLightningManager.BP_ChainLightningManager_C.FindNextTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void JumpToTarget(struct AS_CharacterBase* PreviousTarget, struct AS_CharacterBase* NextTarget); // Function BP_ChainLightningManager.BP_ChainLightningManager_C.JumpToTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_ChainLightningManager.BP_ChainLightningManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void JumpLightning(); // Function BP_ChainLightningManager.BP_ChainLightningManager_C.JumpLightning // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Cross Server Spawn FX(struct AS_CharacterBase* PreviouseTarget, struct AS_CharacterBase* NextTarget); // Function BP_ChainLightningManager.BP_ChainLightningManager_C.Cross Server Spawn FX // (Net|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_ChainLightningManager(int32_t EntryPoint); // Function BP_ChainLightningManager.BP_ChainLightningManager_C.ExecuteUbergraph_BP_ChainLightningManager // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

