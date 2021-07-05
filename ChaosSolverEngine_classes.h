// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x270 (Inherited: 0xb8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_B8[0x110]; // 0xb8(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218(0x50)
	char pad_268[0x8]; // 0x268(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x380 (Inherited: 0x288)
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; // 0x288(0x68)
	float TimeStepMultiplier; // 0x2f0(0x04)
	int32_t CollisionIterations; // 0x2f4(0x04)
	int32_t PushOutIterations; // 0x2f8(0x04)
	int32_t PushOutPairIterations; // 0x2fc(0x04)
	float ClusterConnectionFactor; // 0x300(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x304(0x01)
	bool DoGenerateCollisionData; // 0x305(0x01)
	char pad_306[0x2]; // 0x306(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x308(0x10)
	bool DoGenerateBreakingData; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x31c(0x10)
	bool DoGenerateTrailingData; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x330(0x10)
	float MassScale; // 0x340(0x04)
	bool bGenerateContactGraph; // 0x344(0x01)
	bool bHasFloor; // 0x345(0x01)
	char pad_346[0x2]; // 0x346(0x02)
	float FloorHeight; // 0x348(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x34c(0x03)
	char pad_34F[0x1]; // 0x34f(0x01)
	struct UBillboardComponent* SpriteComponent; // 0x350(0x08)
	char pad_358[0x18]; // 0x358(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x370(0x08)
	char pad_378[0x8]; // 0x378(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

