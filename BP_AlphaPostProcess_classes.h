// BlueprintGeneratedClass BP_AlphaPostProcess.BP_AlphaPostProcess_C
// Size: 0x2c2 (Inherited: 0x288)
struct ABP_AlphaPostProcess_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct US_CameraManagerComponent* CameraManager; // 0x290(0x08)
	struct UChildActorComponent* ChildActor; // 0x298(0x08)
	struct US_AlphaPostProcessComponent* AlphaPostProcess; // 0x2a0(0x08)
	struct TArray<struct UMaterialInterface*> FullscreenEffects; // 0x2a8(0x10)
	int32_t StartSortIndex; // 0x2b8(0x04)
	int32_t ScreenPercentageOverride; // 0x2bc(0x04)
	bool bUsePlayerCameraManager; // 0x2c0(0x01)
	bool bSetScreenPercentage; // 0x2c1(0x01)

	void UpdateOutlines(); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.UpdateOutlines // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetScreenPercentage(float ScreenPercentage); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.SetScreenPercentage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateScreenPercentage(); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.UpdateScreenPercentage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Initialize(); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Update(struct FVector CameraPosition, struct FRotator CameraRotation, float FOVAngle); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UserConstructionScript(); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveDestroyed(); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void EditorTick(struct FVector CameraPosition, struct FRotator CameraRotation); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.EditorTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_AlphaPostProcess(int32_t EntryPoint); // Function BP_AlphaPostProcess.BP_AlphaPostProcess_C.ExecuteUbergraph_BP_AlphaPostProcess // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

