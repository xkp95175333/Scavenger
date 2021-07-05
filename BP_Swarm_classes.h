// BlueprintGeneratedClass BP_Swarm.BP_Swarm_C
// Size: 0x360 (Inherited: 0x288)
struct ABP_Swarm_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USplineMeshComponent* Spline; // 0x290(0x08)
	struct UStaticMeshComponent* Visual Mesh; // 0x298(0x08)
	struct UParticleSystemComponent* Locator; // 0x2a0(0x08)
	struct UParticleSystemComponent* Swarm; // 0x2a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	float Dematerialize_Fade_0F1BBA134E738617D68319A89033F68A; // 0x2b8(0x04)
	float Dematerialize_HeightLerp_0F1BBA134E738617D68319A89033F68A; // 0x2bc(0x04)
	float Dematerialize_Pixelize_0F1BBA134E738617D68319A89033F68A; // 0x2c0(0x04)
	enum class ETimelineDirection Dematerialize__Direction_0F1BBA134E738617D68319A89033F68A; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* Dematerialize; // 0x2c8(0x08)
	struct AActor* Actor To Emit From; // 0x2d0(0x08)
	struct FName Actor To Emit From Particle Param; // 0x2d8(0x08)
	float Scrap Search Radius; // 0x2e0(0x04)
	struct FVector PlayerPosition; // 0x2e4(0x0c)
	struct FName Player Position Param; // 0x2f0(0x08)
	struct FName Attractor Radius; // 0x2f8(0x08)
	bool ReTrigger Effect; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	struct FName SwarmPos; // 0x304(0x08)
	int32_t ItemValue; // 0x30c(0x04)
	float ScrapScatterRadius; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct ABP_Pickup_i_resource_scrap_C* BP_Rseource_Input; // 0x318(0x08)
	struct FVector PlayerVelocity; // 0x320(0x0c)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct USC_SkeletalMeshComponent* NewVar_1; // 0x330(0x08)
	bool NewVar_2; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct UMaterialInstanceDynamic* Visual Mesh MID; // 0x340(0x08)
	int32_t Number of Meshes; // 0x348(0x04)
	float Item Valuse Scale; // 0x34c(0x04)
	struct FLinearColor Item Color; // 0x350(0x10)

	struct FParticleProperties SpawnParticle(struct FParticleProperties currentParticleProperties); // Function BP_Swarm.BP_Swarm_C.SpawnParticle // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	struct FParticleProperties UpdateParticle(struct FParticleProperties currentParticleProperties); // Function BP_Swarm.BP_Swarm_C.UpdateParticle // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	struct FForcePoints GetForcePoints(); // Function BP_Swarm.BP_Swarm_C.GetForcePoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	void BeginPlayPostStreamingCalledWithNotification(bool StreamingCalled, bool StreamingCalledOut); // Function BP_Swarm.BP_Swarm_C.BeginPlayPostStreamingCalledWithNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsFreezing(bool IsFreezing); // Function BP_Swarm.BP_Swarm_C.GetIsFreezing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsStarving(bool IsStarving); // Function BP_Swarm.BP_Swarm_C.GetIsStarving // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetLastHitByAbiltiyActor(struct AActor* LastHitByAbilityActor); // Function BP_Swarm.BP_Swarm_C.GetLastHitByAbiltiyActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetLastHitByAbilityActor(struct AActor* ActorPerformingTheHIt, struct AActor* Actor); // Function BP_Swarm.BP_Swarm_C.SetLastHitByAbilityActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetCharacterAbility(bool NewParam); // Function BP_Swarm.BP_Swarm_C.GetCharacterAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetGameVars(struct UBP_PlayerCharacterGameVarsTemplate_C* NewParam); // Function BP_Swarm.BP_Swarm_C.GetGameVars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	int32_t GetDataRevision(); // Function BP_Swarm.BP_Swarm_C.GetDataRevision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	void UserConstructionScript(); // Function BP_Swarm.BP_Swarm_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Dematerialize__FinishedFunc(); // Function BP_Swarm.BP_Swarm_C.Dematerialize__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Dematerialize__UpdateFunc(); // Function BP_Swarm.BP_Swarm_C.Dematerialize__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Dematerialize__Trigger Spawn__EventFunc(); // Function BP_Swarm.BP_Swarm_C.Dematerialize__Trigger Spawn__EventFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void GearUpgrade(struct USkeletalMesh* New Skeletal Mesh, struct FActiveGameplayEffectHandle Gameplay Effect); // Function BP_Swarm.BP_Swarm_C.GearUpgrade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void 1upFX(); // Function BP_Swarm.BP_Swarm_C.1upFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_Swarm.BP_Swarm_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_Swarm.BP_Swarm_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FreedFromCocoon(); // Function BP_Swarm.BP_Swarm_C.FreedFromCocoon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void StartCollection(); // Function BP_Swarm.BP_Swarm_C.StartCollection // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BankingFX(); // Function BP_Swarm.BP_Swarm_C.BankingFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Update(); // Function BP_Swarm.BP_Swarm_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Swarm(int32_t EntryPoint); // Function BP_Swarm.BP_Swarm_C.ExecuteUbergraph_BP_Swarm // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

