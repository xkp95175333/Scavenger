// Class CableComponent.CableActor
// Size: 0x290 (Inherited: 0x288)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x288(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x500 (Inherited: 0x470)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x470(0x01)
	bool bAttachEnd; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct FComponentReference AttachEndTo; // 0x478(0x28)
	struct FName AttachEndToSocketName; // 0x4a0(0x08)
	struct FVector EndLocation; // 0x4a8(0x0c)
	float CableLength; // 0x4b4(0x04)
	int32_t NumSegments; // 0x4b8(0x04)
	float SubstepTime; // 0x4bc(0x04)
	int32_t SolverIterations; // 0x4c0(0x04)
	bool bEnableStiffness; // 0x4c4(0x01)
	bool bUseSubstepping; // 0x4c5(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0x4c6(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x4c7(0x01)
	bool bEnableCollision; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	float CollisionFriction; // 0x4cc(0x04)
	struct FVector CableForce; // 0x4d0(0x0c)
	float CableGravityScale; // 0x4dc(0x04)
	float CableWidth; // 0x4e0(0x04)
	int32_t NumSides; // 0x4e4(0x04)
	float TileMaterial; // 0x4e8(0x04)
	char pad_4EC[0x14]; // 0x4ec(0x14)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void GetCableParticleLocations(struct TArray<struct FVector> Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

