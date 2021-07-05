// BlueprintGeneratedClass BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C
// Size: 0x300 (Inherited: 0x288)
struct ABP_Swarm_Spline_SK_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USC_SkeletalMeshComponent* SC_SkeletalMesh; // 0x290(0x08)
	struct UParticleSystemComponent* Trail; // 0x298(0x08)
	struct USplineComponent* Spline1; // 0x2a0(0x08)
	float Dematerialize_Alpha_65DBFFDC45F951A5C60CAA94DA2AF8DD; // 0x2a8(0x04)
	enum class ETimelineDirection Dematerialize__Direction_65DBFFDC45F951A5C60CAA94DA2AF8DD; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* Dematerialize; // 0x2b0(0x08)
	float Scrap Search Radius; // 0x2b8(0x04)
	struct FVector PlayerPosition; // 0x2bc(0x0c)
	struct FLinearColor Item Color; // 0x2c8(0x10)
	float Alpha; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct USkeletalMeshComponent* Player Mesh; // 0x2e0(0x08)
	struct FName Player Mesh Socket; // 0x2e8(0x08)
	bool SkipAnimation; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct USkeletalMesh* Visual SC Mesh; // 0x2f8(0x08)

	void BeginPlayPostStreamingCalledWithNotification(bool StreamingCalled, bool StreamingCalledOut); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.BeginPlayPostStreamingCalledWithNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsFreezing(bool IsFreezing); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.GetIsFreezing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetIsStarving(bool IsStarving); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.GetIsStarving // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetLastHitByAbiltiyActor(struct AActor* LastHitByAbilityActor); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.GetLastHitByAbiltiyActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetLastHitByAbilityActor(struct AActor* ActorPerformingTheHIt, struct AActor* Actor); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.SetLastHitByAbilityActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetCharacterAbility(bool NewParam); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.GetCharacterAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetGameVars(struct UBP_PlayerCharacterGameVarsTemplate_C* NewParam); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.GetGameVars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	int32_t GetDataRevision(); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.GetDataRevision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	void Dematerialize__FinishedFunc(); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.Dematerialize__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Dematerialize__UpdateFunc(); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.Dematerialize__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Dematerialize__CollideEvent__EventFunc(); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.Dematerialize__CollideEvent__EventFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void FreedFromCocoon(); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.FreedFromCocoon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GearUpgrade(struct USkeletalMesh* New Skeletal Mesh, struct FActiveGameplayEffectHandle Gameplay Effect); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.GearUpgrade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BankingFX(); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.BankingFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void 1upFX(); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.1upFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_Swarm_Spline_SK(int32_t EntryPoint); // Function BP_Swarm_Spline_SK.BP_Swarm_Spline_SK_C.ExecuteUbergraph_BP_Swarm_Spline_SK // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

