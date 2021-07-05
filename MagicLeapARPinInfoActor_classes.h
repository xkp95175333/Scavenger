// BlueprintGeneratedClass MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
// Size: 0x32c (Inherited: 0x2a0)
struct AMagicLeapARPinInfoActor_C : AMagicLeapARPinInfoActorBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UStaticMeshComponent* Right; // 0x2a8(0x08)
	struct UStaticMeshComponent* Forward; // 0x2b0(0x08)
	struct UStaticMeshComponent* Up; // 0x2b8(0x08)
	struct USphereComponent* ValidRadiusVisualizer; // 0x2c0(0x08)
	struct USceneComponent* AxisRoot; // 0x2c8(0x08)
	struct USceneComponent* VisualizerRoot; // 0x2d0(0x08)
	struct UTextRenderComponent* TypeValue; // 0x2d8(0x08)
	struct UTextRenderComponent* TransErrValue; // 0x2e0(0x08)
	struct UTextRenderComponent* RotErrValue; // 0x2e8(0x08)
	struct UTextRenderComponent* ConfidenceValue; // 0x2f0(0x08)
	struct UTextRenderComponent* TransErrLabel; // 0x2f8(0x08)
	struct UTextRenderComponent* RotErrLabel; // 0x300(0x08)
	struct UTextRenderComponent* ConfidenceLabel; // 0x308(0x08)
	struct UTextRenderComponent* PinIDValue; // 0x310(0x08)
	struct USceneComponent* InfoRoot; // 0x318(0x08)
	struct USceneComponent* Root; // 0x320(0x08)
	float RotationSmoothSpeed; // 0x328(0x04)

	void UpdatePinState(); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UserConstructionScript(); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnUpdateARPinState(); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

