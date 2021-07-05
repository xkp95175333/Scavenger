// BlueprintGeneratedClass BP_ChainLightning_Visuals.BP_ChainLightning_Visuals_C
// Size: 0x340 (Inherited: 0x288)
struct ABP_ChainLightning_Visuals_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UAkComponent* ElectricShockAudio; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct AActor* PreviousActor; // 0x2a0(0x08)
	struct AActor* TargetActor; // 0x2a8(0x08)
	struct TArray<struct UParticleSystemComponent*> LightningEmitterArray; // 0x2b0(0x10)
	float Lifetime; // 0x2c0(0x04)
	float EmitterSpacing; // 0x2c4(0x04)
	struct FVector TargetLoc; // 0x2c8(0x0c)
	float TimePassed; // 0x2d4(0x04)
	float IntensityVariance; // 0x2d8(0x04)
	float Intensity Start; // 0x2dc(0x04)
	float SpeedFactor; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct USkeletalMeshComponent* End Mesh; // 0x2e8(0x08)
	struct USkeletalMeshComponent* Start Mesh; // 0x2f0(0x08)
	struct UParticleSystemComponent* Chain Effect; // 0x2f8(0x08)
	struct TArray<struct FName> Bone Locations; // 0x300(0x10)
	struct TArray<int32_t> Bone Index; // 0x310(0x10)
	int32_t Bone 2 index; // 0x320(0x04)
	struct FVector StartLocation; // 0x324(0x0c)
	struct FVector EndLocation; // 0x330(0x0c)
	int32_t LightningChainMaxCount; // 0x33c(0x04)

	void DestroyLightningFX(struct UParticleSystemComponent* LightningChainToDestroy); // Function BP_ChainLightning_Visuals.BP_ChainLightning_Visuals_C.DestroyLightningFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Set Beam Points(int32_t EmitterIndex, int32_t Start Bone Index, int32_t End_Bone Index); // Function BP_ChainLightning_Visuals.BP_ChainLightning_Visuals_C.Set Beam Points // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetElectrifiedTargets(struct AActor* StartActor, struct AActor* EndActor, struct USkeletalMeshComponent* StartMesh, struct USkeletalMeshComponent* EndMesh); // Function BP_ChainLightning_Visuals.BP_ChainLightning_Visuals_C.SetElectrifiedTargets // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveDestroyed(); // Function BP_ChainLightning_Visuals.BP_ChainLightning_Visuals_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_ChainLightning_Visuals.BP_ChainLightning_Visuals_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_ChainLightning_Visuals.BP_ChainLightning_Visuals_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_ChainLightning_Visuals(int32_t EntryPoint); // Function BP_ChainLightning_Visuals.BP_ChainLightning_Visuals_C.ExecuteUbergraph_BP_ChainLightning_Visuals // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

