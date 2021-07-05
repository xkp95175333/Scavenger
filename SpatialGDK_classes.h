// Class SpatialGDK.AbstractLBStrategy
// Size: 0x30 (Inherited: 0x28)
struct UAbstractLBStrategy : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class SpatialGDK.AbstractLockingPolicy
// Size: 0x28 (Inherited: 0x28)
struct UAbstractLockingPolicy : UObject {
};

// Class SpatialGDK.ActorInterestComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UActorInterestComponent : UActorComponent {
	bool bUseNetCullDistanceSquaredForCheckoutRadius; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct FQueryData> Queries; // 0xb8(0x10)
};

// Class SpatialGDK.DebugLBStrategy
// Size: 0x40 (Inherited: 0x30)
struct UDebugLBStrategy : UAbstractLBStrategy {
	struct UAbstractLBStrategy* WrappedStrategy; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class SpatialGDK.EntityPool
// Size: 0x68 (Inherited: 0x28)
struct UEntityPool : UObject {
	struct USpatialNetDriver* NetDriver; // 0x28(0x08)
	struct USpatialReceiver* Receiver; // 0x30(0x08)
	char pad_38[0x30]; // 0x38(0x30)
};

// Class SpatialGDK.GlobalStateManager
// Size: 0x80 (Inherited: 0x28)
struct UGlobalStateManager : UObject {
	char pad_28[0x28]; // 0x28(0x28)
	struct USpatialNetDriver* NetDriver; // 0x50(0x08)
	struct USpatialStaticComponentView* StaticComponentView; // 0x58(0x08)
	struct USpatialSender* Sender; // 0x60(0x08)
	struct USpatialReceiver* Receiver; // 0x68(0x08)
	char pad_70[0x10]; // 0x70(0x10)
};

// Class SpatialGDK.GridBasedLBStrategy
// Size: 0x70 (Inherited: 0x30)
struct UGridBasedLBStrategy : UAbstractLBStrategy {
	uint32_t Rows; // 0x30(0x04)
	uint32_t Cols; // 0x34(0x04)
	float WorldWidth; // 0x38(0x04)
	float WorldHeight; // 0x3c(0x04)
	float InterestBorder; // 0x40(0x04)
	char pad_44[0x2c]; // 0x44(0x2c)
};

// Class SpatialGDK.SingleWorkerStrategy
// Size: 0x70 (Inherited: 0x70)
struct USingleWorkerStrategy : UGridBasedLBStrategy {
};

// Class SpatialGDK.SpatialAwaitable
// Size: 0x28 (Inherited: 0x28)
struct USpatialAwaitable : UInterface {
};

// Class SpatialGDK.LayeredLBStrategy
// Size: 0x130 (Inherited: 0x30)
struct ULayeredLBStrategy : UAbstractLBStrategy {
	char pad_30[0xb0]; // 0x30(0xb0)
	struct TMap<struct FName, struct UAbstractLBStrategy*> LayerNameToLBStrategy; // 0xe0(0x50)
};

// Class SpatialGDK.OwnershipLockingPolicy
// Size: 0x170 (Inherited: 0x28)
struct UOwnershipLockingPolicy : UAbstractLockingPolicy {
	char pad_28[0x148]; // 0x28(0x148)

	void OnHierarchyRootActorDeleted(struct AActor* DestroyedActorRoot); // Function SpatialGDK.OwnershipLockingPolicy.OnHierarchyRootActorDeleted // (Final|Native|Private) // @ game+0xffff8008e4a10000
	void OnExplicitlyLockedActorDeleted(struct AActor* DestroyedActor); // Function SpatialGDK.OwnershipLockingPolicy.OnExplicitlyLockedActorDeleted // (Final|Native|Private) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SchemaDatabase
// Size: 0x2b0 (Inherited: 0x30)
struct USchemaDatabase : UDataAsset {
	struct TMap<struct FString, struct FActorSchemaData> ActorClassPathToSchema; // 0x30(0x50)
	struct TMap<struct FString, struct FSubobjectSchemaData> SubobjectClassPathToSchema; // 0x80(0x50)
	struct TMap<struct FString, uint32_t> LevelPathToComponentId; // 0xd0(0x50)
	struct TMap<float, uint32_t> NetCullDistanceToComponentId; // 0x120(0x50)
	struct TSet<uint32_t> NetCullDistanceComponentIds; // 0x170(0x50)
	struct TMap<uint32_t, struct FString> ComponentIdToClassPath; // 0x1c0(0x50)
	struct TArray<uint32_t> DataComponentIds; // 0x210(0x10)
	struct TArray<uint32_t> OwnerOnlyComponentIds; // 0x220(0x10)
	struct TArray<uint32_t> HandoverComponentIds; // 0x230(0x10)
	struct TArray<uint32_t> LevelComponentIds; // 0x240(0x10)
	uint32_t NextAvailableComponentId; // 0x250(0x04)
	uint32_t SchemaBundleHash; // 0x254(0x04)
	struct TMap<uint32_t, struct FComponentIDs> ComponentSetIdToComponentIds; // 0x258(0x50)
	enum class ESchemaDatabaseVersion SchemaDatabaseVersion; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
};

// Class SpatialGDK.SimPlayerBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USimPlayerBPFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsSimulatedPlayer(struct UObject* WorldContextObject); // Function SpatialGDK.SimPlayerBPFunctionLibrary.IsSimulatedPlayer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SnapshotGenerationTemplate
// Size: 0x28 (Inherited: 0x28)
struct USnapshotGenerationTemplate : UObject {
};

// Class SpatialGDK.SpatialActorChannel
// Size: 0x3f0 (Inherited: 0x298)
struct USpatialActorChannel : UActorChannel {
	char pad_298[0xb8]; // 0x298(0xb8)
	struct USpatialNetDriver* NetDriver; // 0x350(0x08)
	struct USpatialSender* Sender; // 0x358(0x08)
	struct USpatialReceiver* Receiver; // 0x360(0x08)
	char pad_368[0x88]; // 0x368(0x88)
};

// Class SpatialGDK.SpatialBasicAwaiter
// Size: 0xb8 (Inherited: 0x28)
struct USpatialBasicAwaiter : UObject {
	char pad_28[0x90]; // 0x28(0x90)

	void Reset(); // Function SpatialGDK.SpatialBasicAwaiter.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void Ready(); // Function SpatialGDK.SpatialBasicAwaiter.Ready // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialClassInfoManager
// Size: 0x178 (Inherited: 0x28)
struct USpatialClassInfoManager : UObject {
	struct USchemaDatabase* SchemaDatabase; // 0x28(0x08)
	struct USpatialNetDriver* NetDriver; // 0x30(0x08)
	char pad_38[0x140]; // 0x38(0x140)
};

// Class SpatialGDK.SpatialConnectionManager
// Size: 0x670 (Inherited: 0x28)
struct USpatialConnectionManager : UObject {
	char pad_28[0x560]; // 0x28(0x560)
	struct USpatialWorkerConnection* WorkerConnection; // 0x588(0x08)
	char pad_590[0xe0]; // 0x590(0xe0)
};

// Class SpatialGDK.SpatialDebugger
// Size: 0x518 (Inherited: 0x288)
struct ASpatialDebugger : AInfo {
	struct FKey ConfigUIToggleKey; // 0x288(0x18)
	struct FKey SelectActorKey; // 0x2a0(0x18)
	struct FKey HighlightActorKey; // 0x2b8(0x18)
	struct USpatialDebuggerConfigUI* ConfigUIClass; // 0x2d0(0x08)
	char pad_2D8[0x10]; // 0x2d8(0x10)
	int32_t PlayerPanelStartX; // 0x2e8(0x04)
	int32_t PlayerPanelStartY; // 0x2ec(0x04)
	float MaxRange; // 0x2f0(0x04)
	enum class EActorTagDrawMode ActorTagDrawMode; // 0x2f4(0x01)
	bool bShowPlayerHierarchy; // 0x2f5(0x01)
	bool bShowAuth; // 0x2f6(0x01)
	bool bShowAuthIntent; // 0x2f7(0x01)
	bool bShowLock; // 0x2f8(0x01)
	bool bShowEntityId; // 0x2f9(0x01)
	bool bShowActorName; // 0x2fa(0x01)
	bool bShowHighlight; // 0x2fb(0x01)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct TArray<enum class ECollisionChannel> SelectCollisionTypesToQuery; // 0x300(0x10)
	bool bAutoStart; // 0x310(0x01)
	bool bShowWorkerRegions; // 0x311(0x01)
	char pad_312[0x2]; // 0x312(0x02)
	float WorkerRegionHeight; // 0x314(0x04)
	float WorkerRegionVerticalScale; // 0x318(0x04)
	float WorkerRegionOpacity; // 0x31c(0x04)
	struct UTexture2D* AuthTexture; // 0x320(0x08)
	struct UTexture2D* AuthIntentTexture; // 0x328(0x08)
	struct UTexture2D* UnlockedTexture; // 0x330(0x08)
	struct UTexture2D* LockedTexture; // 0x338(0x08)
	struct UTexture2D* BoxTexture; // 0x340(0x08)
	struct UTexture2D* CrosshairTexture; // 0x348(0x08)
	struct FVector WorldSpaceActorTagOffset; // 0x350(0x0c)
	struct FColor InvalidServerTintColor; // 0x35c(0x04)
	struct TArray<struct FWorkerRegionInfo> WorkerRegions; // 0x360(0x10)
	char pad_370[0x178]; // 0x370(0x178)
	struct UMaterialInterface* WireframeMaterial; // 0x4e8(0x08)
	char pad_4F0[0x28]; // 0x4f0(0x28)

	void ToggleSelectActor(); // Function SpatialGDK.SpatialDebugger.ToggleSelectActor // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SpatialToggleDebugger(); // Function SpatialGDK.SpatialDebugger.SpatialToggleDebugger // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetShowWorkerRegions(bool bNewShow); // Function SpatialGDK.SpatialDebugger.SetShowWorkerRegions // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void OnToggleConfigUI(); // Function SpatialGDK.SpatialDebugger.OnToggleConfigUI // (Final|Native|Public) // @ game+0xffff8008e4a10000
	void OnSelectActor(); // Function SpatialGDK.SpatialDebugger.OnSelectActor // (Final|Native|Public) // @ game+0xffff8008e4a10000
	void OnRep_SetWorkerRegions(); // Function SpatialGDK.SpatialDebugger.OnRep_SetWorkerRegions // (Native|Public) // @ game+0xffff8008e4a10000
	void OnHighlightActor(); // Function SpatialGDK.SpatialDebugger.OnHighlightActor // (Final|Native|Public) // @ game+0xffff8008e4a10000
	bool IsSelectActorEnabled(); // Function SpatialGDK.SpatialDebugger.IsSelectActorEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsEnabled(); // Function SpatialGDK.SpatialDebugger.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void DefaultOnConfigUIClosed(); // Function SpatialGDK.SpatialDebugger.DefaultOnConfigUIClosed // (Final|Native|Private) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialDebuggerConfigUI
// Size: 0x278 (Inherited: 0x270)
struct USpatialDebuggerConfigUI : UUserWidget {
	struct ASpatialDebugger* SpatialDebugger; // 0x270(0x08)

	void SetSpatialDebugger(struct ASpatialDebugger* InDebugger); // Function SpatialGDK.SpatialDebuggerConfigUI.SetSpatialDebugger // (Native|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnShow(); // Function SpatialGDK.SpatialDebuggerConfigUI.OnShow // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialEngineMetricsSettings
// Size: 0x38 (Inherited: 0x28)
struct USpatialEngineMetricsSettings : UObject {
	float InitialDelaySeconds; // 0x28(0x04)
	bool bSendMetricsOnSpatialConnection; // 0x2c(0x01)
	bool bEnableFps; // 0x2d(0x01)
	bool bEnableNumPlayers; // 0x2e(0x01)
	bool bEnableNumAI; // 0x2f(0x01)
	bool bEnableFrameTimeHistogram; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class SpatialGDK.SpatialEngineMetrics
// Size: 0xa0 (Inherited: 0x28)
struct USpatialEngineMetrics : UObject {
	char pad_28[0x78]; // 0x28(0x78)

	void RegisterTick(); // Function SpatialGDK.SpatialEngineMetrics.RegisterTick // (Final|Native|Private) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialEventTracerUserInterface
// Size: 0x28 (Inherited: 0x28)
struct USpatialEventTracerUserInterface : UBlueprintFunctionLibrary {

	void TraceRPC(struct UObject* WorldContextObject, struct FDelegate Delegate, struct FUserSpanId SpanId); // Function SpatialGDK.SpatialEventTracerUserInterface.TraceRPC // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void TraceProperty(struct UObject* WorldContextObject, struct UObject* Object, struct FUserSpanId UserSpanId); // Function SpatialGDK.SpatialEventTracerUserInterface.TraceProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FUserSpanId TraceEventWithCauses(struct UObject* WorldContextObject, struct FSpatialTraceEvent SpatialTraceEvent, struct TArray<struct FUserSpanId> Causes); // Function SpatialGDK.SpatialEventTracerUserInterface.TraceEventWithCauses // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FUserSpanId TraceEvent(struct UObject* WorldContextObject, struct FSpatialTraceEvent SpatialTraceEvent); // Function SpatialGDK.SpatialEventTracerUserInterface.TraceEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool GetActiveSpanId(struct UObject* WorldContextObject, struct FUserSpanId OutUserSpanId); // Function SpatialGDK.SpatialEventTracerUserInterface.GetActiveSpanId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialGameInstance
// Size: 0x298 (Inherited: 0x1d0)
struct USpatialGameInstance : UGameInstance {
	struct FMulticastInlineDelegate OnSpatialConnected; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnSpatialConnectionFailed; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnSpatialPlayerSpawnFailed; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnPrepareShutdown; // 0x200(0x10)
	struct USpatialConnectionManager* SpatialConnectionManager; // 0x210(0x08)
	char pad_218[0x8]; // 0x218(0x08)
	struct USpatialLatencyTracer* SpatialLatencyTracer; // 0x220(0x08)
	struct USpatialEngineMetrics* SpatialEngineMetrics; // 0x228(0x08)
	struct UGlobalStateManager* GlobalStateManager; // 0x230(0x08)
	struct USpatialStaticComponentView* StaticComponentView; // 0x238(0x08)
	struct TSet<struct ULevel*> CachedLevelsForNetworkIntialize; // 0x240(0x50)
	char pad_290[0x8]; // 0x290(0x08)

	void OnLevelInitializedNetworkActors(struct ULevel* LoadedLevel, struct UWorld* OwningWorld); // Function SpatialGDK.SpatialGameInstance.OnLevelInitializedNetworkActors // (Final|Native|Private|Const) // @ game+0xffff8008e4a10000
	void HandlePrepareShutdownWorkerFlagUpdated(struct FString FlagName, struct FString FlagValue); // Function SpatialGDK.SpatialGameInstance.HandlePrepareShutdownWorkerFlagUpdated // (Final|Native|Public) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialGDKSettings
// Size: 0x260 (Inherited: 0x28)
struct USpatialGDKSettings : UObject {
	uint32_t EntityPoolInitialReservationCount; // 0x28(0x04)
	uint32_t EntityPoolRefreshThreshold; // 0x2c(0x04)
	uint32_t EntityPoolRefreshCount; // 0x30(0x04)
	float HeartbeatIntervalSeconds; // 0x34(0x04)
	float HeartbeatTimeoutSeconds; // 0x38(0x04)
	float HeartbeatTimeoutWithEditorSeconds; // 0x3c(0x04)
	uint32_t ActorReplicationRateLimit; // 0x40(0x04)
	uint32_t EntityCreationRateLimit; // 0x44(0x04)
	bool bUseIsActorRelevantForConnection; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float OpsUpdateRate; // 0x4c(0x04)
	float MaxNetCullDistanceSquared; // 0x50(0x04)
	float QueuedIncomingRPCWaitTime; // 0x54(0x04)
	float QueuedIncomingRPCRetryTime; // 0x58(0x04)
	float QueuedOutgoingRPCRetryTime; // 0x5c(0x04)
	float PositionUpdateLowerThresholdSeconds; // 0x60(0x04)
	float PositionUpdateLowerThresholdCentimeters; // 0x64(0x04)
	float PositionUpdateThresholdMaxSeconds; // 0x68(0x04)
	float PositionUpdateThresholdMaxCentimeters; // 0x6c(0x04)
	bool bEnableMetrics; // 0x70(0x01)
	bool bEnableMetricsDisplay; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float MetricsReportRate; // 0x74(0x04)
	bool bUseFrameTimeAsLoad; // 0x78(0x01)
	bool bBatchSpatialPositionUpdates; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	uint32_t MaxDynamicallyAttachedSubobjectsPerClass; // 0x7c(0x04)
	struct FString DefaultReceptionistHost; // 0x80(0x10)
	bool bPreventClientCloudDeploymentAutoConnect; // 0x90(0x01)
	enum class EServicesRegion ServicesRegion; // 0x91(0x01)
	enum class ESettingsWorkerLogVerbosity WorkerLogLevel; // 0x92(0x01)
	enum class ESettingsWorkerLogVerbosity LocalWorkerLogLevel; // 0x93(0x01)
	enum class ESettingsWorkerLogVerbosity CloudWorkerLogLevel; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct ASpatialDebugger* SpatialDebugger; // 0x98(0x08)
	bool bEnableMultiWorker; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	uint32_t DefaultRPCRingBufferSize; // 0xa4(0x04)
	struct TMap<enum class ERPCType, uint32_t> RPCRingBufferSizeMap; // 0xa8(0x50)
	uint32_t MaxRPCRingBufferSize; // 0xf8(0x04)
	bool bTcpNoDelay; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	uint32_t UdpServerDownstreamUpdateIntervalMS; // 0x100(0x04)
	uint32_t UdpClientDownstreamUpdateIntervalMS; // 0x104(0x04)
	bool bWorkerFlushAfterOutgoingNetworkOp; // 0x108(0x01)
	bool bAsyncLoadNewClassesOnEntityCheckout; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct TMap<enum class ERPCResult, float> RPCQueueWarningTimeouts; // 0x110(0x50)
	float RPCQueueWarningDefaultTimeout; // 0x160(0x04)
	bool bEnableNetCullDistanceInterest; // 0x164(0x01)
	bool bEnableNetCullDistanceFrequency; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
	float FullFrequencyNetCullDistanceRatio; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct TArray<struct FDistanceFrequencyPair> InterestRangeFrequencyPairs; // 0x170(0x10)
	bool bUseSecureClientConnection; // 0x180(0x01)
	bool bUseSecureServerConnection; // 0x181(0x01)
	bool bEnableClientQueriesOnServer; // 0x182(0x01)
	char pad_183[0x1d]; // 0x183(0x1d)
	bool bEnableCrossLayerActorSpawning; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct TMap<enum class ERPCType, bool> RPCTypeAllowUnresolvedParamMap; // 0x1a8(0x50)
	float StartupLogRate; // 0x1f8(0x04)
	float ActorMigrationLogRate; // 0x1fc(0x04)
	bool bEventTracingEnabled; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float SamplingProbability; // 0x204(0x04)
	struct TMap<struct FName, double> EventSamplingModeOverrides; // 0x208(0x50)
	uint64_t MaxEventTracingFileSizeBytes; // 0x258(0x08)
};

// Class SpatialGDK.AbstractQueryConstraint
// Size: 0x28 (Inherited: 0x28)
struct UAbstractQueryConstraint : UObject {
};

// Class SpatialGDK.OrConstraint
// Size: 0x38 (Inherited: 0x28)
struct UOrConstraint : UAbstractQueryConstraint {
	struct TArray<struct UAbstractQueryConstraint*> Constraints; // 0x28(0x10)
};

// Class SpatialGDK.AndConstraint
// Size: 0x38 (Inherited: 0x28)
struct UAndConstraint : UAbstractQueryConstraint {
	struct TArray<struct UAbstractQueryConstraint*> Constraints; // 0x28(0x10)
};

// Class SpatialGDK.SphereConstraint
// Size: 0x38 (Inherited: 0x28)
struct USphereConstraint : UAbstractQueryConstraint {
	struct FVector Center; // 0x28(0x0c)
	float Radius; // 0x34(0x04)
};

// Class SpatialGDK.CylinderConstraint
// Size: 0x38 (Inherited: 0x28)
struct UCylinderConstraint : UAbstractQueryConstraint {
	struct FVector Center; // 0x28(0x0c)
	float Radius; // 0x34(0x04)
};

// Class SpatialGDK.BoxConstraint
// Size: 0x40 (Inherited: 0x28)
struct UBoxConstraint : UAbstractQueryConstraint {
	struct FVector Center; // 0x28(0x0c)
	struct FVector EdgeLengths; // 0x34(0x0c)
};

// Class SpatialGDK.RelativeSphereConstraint
// Size: 0x30 (Inherited: 0x28)
struct URelativeSphereConstraint : UAbstractQueryConstraint {
	float Radius; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class SpatialGDK.RelativeCylinderConstraint
// Size: 0x30 (Inherited: 0x28)
struct URelativeCylinderConstraint : UAbstractQueryConstraint {
	float Radius; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class SpatialGDK.RelativeBoxConstraint
// Size: 0x38 (Inherited: 0x28)
struct URelativeBoxConstraint : UAbstractQueryConstraint {
	struct FVector EdgeLengths; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class SpatialGDK.CheckoutRadiusConstraint
// Size: 0x38 (Inherited: 0x28)
struct UCheckoutRadiusConstraint : UAbstractQueryConstraint {
	struct AActor* ActorClass; // 0x28(0x08)
	float Radius; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class SpatialGDK.ActorClassConstraint
// Size: 0x38 (Inherited: 0x28)
struct UActorClassConstraint : UAbstractQueryConstraint {
	struct AActor* ActorClass; // 0x28(0x08)
	bool bIncludeDerivedClasses; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class SpatialGDK.ComponentClassConstraint
// Size: 0x38 (Inherited: 0x28)
struct UComponentClassConstraint : UAbstractQueryConstraint {
	struct UActorComponent* ComponentClass; // 0x28(0x08)
	bool bIncludeDerivedClasses; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class SpatialGDK.SpatialLatencyTracer
// Size: 0x28 (Inherited: 0x28)
struct USpatialLatencyTracer : UObject {

	bool SetTraceMetadata(struct UObject* WorldContextObject, struct FString NewTraceMetadata); // Function SpatialGDK.SpatialLatencyTracer.SetTraceMetadata // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FSpatialLatencyPayload RetrievePayload(struct UObject* WorldContextObject, struct AActor* Actor, struct FString Tag); // Function SpatialGDK.SpatialLatencyTracer.RetrievePayload // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RegisterProject(struct UObject* WorldContextObject, struct FString ProjectID); // Function SpatialGDK.SpatialLatencyTracer.RegisterProject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FString GetTraceMetadata(struct UObject* WorldContextObject); // Function SpatialGDK.SpatialLatencyTracer.GetTraceMetadata // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool EndLatencyTrace(struct UObject* WorldContextObject, struct FSpatialLatencyPayload LatencyPayload); // Function SpatialGDK.SpatialLatencyTracer.EndLatencyTrace // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void Debug_SendTestTrace(); // Function SpatialGDK.SpatialLatencyTracer.Debug_SendTestTrace // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool ContinueLatencyTraceTagged(struct UObject* WorldContextObject, struct AActor* Actor, struct FString Tag, struct FString TraceDesc, struct FSpatialLatencyPayload LatencyPayload, struct FSpatialLatencyPayload OutContinuedLatencyPayload); // Function SpatialGDK.SpatialLatencyTracer.ContinueLatencyTraceTagged // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool ContinueLatencyTraceRPC(struct UObject* WorldContextObject, struct AActor* Actor, struct FString Function, struct FString TraceDesc, struct FSpatialLatencyPayload LatencyPayload, struct FSpatialLatencyPayload OutContinuedLatencyPayload); // Function SpatialGDK.SpatialLatencyTracer.ContinueLatencyTraceRPC // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool ContinueLatencyTraceProperty(struct UObject* WorldContextObject, struct AActor* Actor, struct FString Property, struct FString TraceDesc, struct FSpatialLatencyPayload LatencyPayload, struct FSpatialLatencyPayload OutContinuedLatencyPayload); // Function SpatialGDK.SpatialLatencyTracer.ContinueLatencyTraceProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool BeginLatencyTrace(struct UObject* WorldContextObject, struct FString TraceDesc, struct FSpatialLatencyPayload OutLatencyPayload); // Function SpatialGDK.SpatialLatencyTracer.BeginLatencyTrace // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialMetrics
// Size: 0x1d8 (Inherited: 0x28)
struct USpatialMetrics : UObject {
	char pad_28[0xc8]; // 0x28(0xc8)
	struct USpatialWorkerConnection* Connection; // 0xf0(0x08)
	char pad_F8[0xe0]; // 0xf8(0xe0)

	void SpatialStopRPCMetrics(); // Function SpatialGDK.SpatialMetrics.SpatialStopRPCMetrics // (Final|Exec|Native|Public) // @ game+0xffff8008e4a10000
	void SpatialStartRPCMetrics(); // Function SpatialGDK.SpatialMetrics.SpatialStartRPCMetrics // (Final|Exec|Native|Public) // @ game+0xffff8008e4a10000
	void SpatialModifySetting(struct FString Name, float Value); // Function SpatialGDK.SpatialMetrics.SpatialModifySetting // (Final|Exec|Native|Public) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialMetricsDisplay
// Size: 0x310 (Inherited: 0x288)
struct ASpatialMetricsDisplay : AInfo {
	char pad_288[0x8]; // 0x288(0x08)
	struct TArray<struct FWorkerStats> WorkerStats; // 0x290(0x10)
	char pad_2A0[0x70]; // 0x2a0(0x70)

	void SpatialToggleStatDisplay(); // Function SpatialGDK.SpatialMetricsDisplay.SpatialToggleStatDisplay // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ServerUpdateWorkerStats(float Time, struct FWorkerStats OneWorkerStats); // Function SpatialGDK.SpatialMetricsDisplay.ServerUpdateWorkerStats // (Final|Net|Native|Event|Private|NetValidate) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.AbstractSpatialMultiWorkerSettings
// Size: 0x48 (Inherited: 0x30)
struct UAbstractSpatialMultiWorkerSettings : UDataAsset {
	struct TArray<struct FLayerInfo> WorkerLayers; // 0x30(0x10)
	struct UAbstractLockingPolicy* LockingPolicy; // 0x40(0x08)
};

// Class SpatialGDK.SpatialMultiWorkerSettings
// Size: 0x48 (Inherited: 0x48)
struct USpatialMultiWorkerSettings : UAbstractSpatialMultiWorkerSettings {
};

// Class SpatialGDK.SpatialNetConnection
// Size: 0x1bb8 (Inherited: 0x1b90)
struct USpatialNetConnection : UIpConnection {
	bool bReliableSpatialConnection; // 0x1b90(0x01)
	char pad_1B91[0x27]; // 0x1b91(0x27)

	void OnControllerDestroyed(struct AActor* DestroyedActor); // Function SpatialGDK.SpatialNetConnection.OnControllerDestroyed // (Final|Native|Public) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialNetDriver
// Size: 0xc40 (Inherited: 0x7d8)
struct USpatialNetDriver : UIpNetDriver {
	struct USpatialWorkerConnection* Connection; // 0x7d8(0x08)
	struct USpatialConnectionManager* ConnectionManager; // 0x7e0(0x08)
	struct USpatialSender* Sender; // 0x7e8(0x08)
	struct USpatialReceiver* Receiver; // 0x7f0(0x08)
	struct USpatialClassInfoManager* ClassInfoManager; // 0x7f8(0x08)
	struct UGlobalStateManager* GlobalStateManager; // 0x800(0x08)
	struct USpatialPlayerSpawner* PlayerSpawner; // 0x808(0x08)
	struct USpatialPackageMapClient* PackageMap; // 0x810(0x08)
	struct USpatialStaticComponentView* StaticComponentView; // 0x818(0x08)
	struct USpatialMetrics* SpatialMetrics; // 0x820(0x08)
	struct ASpatialMetricsDisplay* SpatialMetricsDisplay; // 0x828(0x08)
	struct ASpatialDebugger* SpatialDebugger; // 0x830(0x08)
	struct USpatialBasicAwaiter* SpatialDebuggerReady; // 0x838(0x08)
	struct UAbstractLBStrategy* LoadBalanceStrategy; // 0x840(0x08)
	struct UAbstractLockingPolicy* LockingPolicy; // 0x848(0x08)
	struct USpatialWorkerFlags* SpatialWorkerFlags; // 0x850(0x08)
	struct USpatialNetDriverDebugContext* DebugCtx; // 0x858(0x08)
	char pad_860[0x3e0]; // 0x860(0x3e0)

	void OnMapLoaded(struct UWorld* LoadedWorld); // Function SpatialGDK.SpatialNetDriver.OnMapLoaded // (Final|Native|Private) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialNetDriverDebugContext
// Size: 0x180 (Inherited: 0x28)
struct USpatialNetDriverDebugContext : UObject {
	struct UDebugLBStrategy* DebugStrategy; // 0x28(0x08)
	char pad_30[0x150]; // 0x30(0x150)
};

// Class SpatialGDK.SpatialPackageMapClient
// Size: 0x4f8 (Inherited: 0x3f8)
struct USpatialPackageMapClient : UPackageMapClient {
	char pad_3F8[0x50]; // 0x3f8(0x50)
	struct UEntityPool* EntityPool; // 0x448(0x08)
	char pad_450[0xa8]; // 0x450(0xa8)
};

// Class SpatialGDK.SpatialPendingNetGame
// Size: 0xc0 (Inherited: 0xc0)
struct USpatialPendingNetGame : UPendingNetGame {
};

// Class SpatialGDK.SpatialPingComponent
// Size: 0x128 (Inherited: 0xb0)
struct USpatialPingComponent : UActorComponent {
	bool bStartWithPingEnabled; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float MinPingInterval; // 0xb4(0x04)
	float TimeoutLimit; // 0xb8(0x04)
	int32_t PingMeasurementsWindowSize; // 0xbc(0x04)
	struct FMulticastInlineDelegate OnRecordPing; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
	uint16_t ReplicatedPingID; // 0xe0(0x02)
	char pad_E2[0x1e]; // 0xe2(0x1e)
	struct APlayerController* OwningController; // 0x100(0x08)
	char pad_108[0x20]; // 0x108(0x20)

	void SetPingEnabled(bool bSetEnabled); // Function SpatialGDK.SpatialPingComponent.SetPingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SendServerWorkerPingID(uint16_t PingID); // Function SpatialGDK.SpatialPingComponent.SendServerWorkerPingID // (Final|Net|Native|Event|Private|NetServer|NetValidate) // @ game+0xffff8008e4a10000
	void OnRep_ReplicatedPingID(); // Function SpatialGDK.SpatialPingComponent.OnRep_ReplicatedPingID // (Final|Native|Private) // @ game+0xffff8008e4a10000
	float GetPing(); // Function SpatialGDK.SpatialPingComponent.GetPing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetIsPingEnabled(); // Function SpatialGDK.SpatialPingComponent.GetIsPingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FSpatialPingAverageData GetAverageData(); // Function SpatialGDK.SpatialPingComponent.GetAverageData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialPlayerSpawner
// Size: 0xe0 (Inherited: 0x28)
struct USpatialPlayerSpawner : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct USpatialNetDriver* NetDriver; // 0x38(0x08)
	char pad_40[0xa0]; // 0x40(0xa0)
};

// Class SpatialGDK.SpatialReceiver
// Size: 0x560 (Inherited: 0x28)
struct USpatialReceiver : UObject {
	char pad_28[0x88]; // 0x28(0x88)
	struct USpatialNetDriver* NetDriver; // 0xb0(0x08)
	struct USpatialStaticComponentView* StaticComponentView; // 0xb8(0x08)
	struct USpatialSender* Sender; // 0xc0(0x08)
	struct USpatialPackageMapClient* PackageMap; // 0xc8(0x08)
	struct USpatialClassInfoManager* ClassInfoManager; // 0xd0(0x08)
	struct UGlobalStateManager* GlobalStateManager; // 0xd8(0x08)
	char pad_E0[0x480]; // 0xe0(0x480)
};

// Class SpatialGDK.SpatialReplicationGraph
// Size: 0x4f0 (Inherited: 0x4f0)
struct USpatialReplicationGraph : UReplicationGraph {
};

// Class SpatialGDK.SpatialSender
// Size: 0x188 (Inherited: 0x28)
struct USpatialSender : UObject {
	struct USpatialNetDriver* NetDriver; // 0x28(0x08)
	struct USpatialStaticComponentView* StaticComponentView; // 0x30(0x08)
	struct USpatialWorkerConnection* Connection; // 0x38(0x08)
	struct USpatialReceiver* Receiver; // 0x40(0x08)
	struct USpatialPackageMapClient* PackageMap; // 0x48(0x08)
	struct USpatialClassInfoManager* ClassInfoManager; // 0x50(0x08)
	char pad_58[0x130]; // 0x58(0x130)

	void CreateServerWorkerEntity(); // Function SpatialGDK.SpatialSender.CreateServerWorkerEntity // (Final|Native|Public) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialStaticComponentView
// Size: 0xc8 (Inherited: 0x28)
struct USpatialStaticComponentView : UObject {
	char pad_28[0xa0]; // 0x28(0xa0)
};

// Class SpatialGDK.SpatialStatics
// Size: 0x28 (Inherited: 0x28)
struct USpatialStatics : UBlueprintFunctionLibrary {

	void SpatialDebuggerSetOnConfigUIClosedCallback(struct UObject* WorldContextObject, struct FDelegate Delegate); // Function SpatialGDK.SpatialStatics.SpatialDebuggerSetOnConfigUIClosedCallback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ReleaseLock(struct AActor* Actor, struct FLockingToken LockToken); // Function SpatialGDK.SpatialStatics.ReleaseLock // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void PrintTextSpatial(struct UObject* WorldContextObject, struct FText InText, bool bPrintToScreen, struct FLinearColor TextColor, float Duration); // Function SpatialGDK.SpatialStatics.PrintTextSpatial // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void PrintStringSpatial(struct UObject* WorldContextObject, struct FString inString, bool bPrintToScreen, struct FLinearColor TextColor, float Duration); // Function SpatialGDK.SpatialStatics.PrintStringSpatial // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsSpatialOffloadingEnabled(struct UWorld* World); // Function SpatialGDK.SpatialStatics.IsSpatialOffloadingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsSpatialNetworkingEnabled(); // Function SpatialGDK.SpatialStatics.IsSpatialNetworkingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsMultiWorkerEnabled(); // Function SpatialGDK.SpatialStatics.IsMultiWorkerEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsLocked(struct AActor* Actor); // Function SpatialGDK.SpatialStatics.IsLocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsHandoverEnabled(struct UObject* WorldContextObject); // Function SpatialGDK.SpatialStatics.IsHandoverEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsActorGroupOwnerForClass(struct UObject* WorldContextObject, struct AActor* ActorClass); // Function SpatialGDK.SpatialStatics.IsActorGroupOwnerForClass // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsActorGroupOwnerForActor(struct AActor* Actor); // Function SpatialGDK.SpatialStatics.IsActorGroupOwnerForActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool GetWorkerFlag(struct UObject* WorldContextObject, struct FString InFlagName, struct FString OutFlagValue); // Function SpatialGDK.SpatialStatics.GetWorkerFlag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UAbstractSpatialMultiWorkerSettings* GetSpatialMultiWorkerClass(struct UObject* WorldContextObject, bool bForceNonEditorSettings); // Function SpatialGDK.SpatialStatics.GetSpatialMultiWorkerClass // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct TArray<struct FDistanceFrequencyPair> GetNCDDistanceRatios(); // Function SpatialGDK.SpatialStatics.GetNCDDistanceRatios // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FName GetLayerName(struct UObject* WorldContextObject); // Function SpatialGDK.SpatialStatics.GetLayerName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FColor GetInspectorColorForWorkerName(struct FString WorkerName); // Function SpatialGDK.SpatialStatics.GetInspectorColorForWorkerName // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	float GetFullFrequencyNetCullDistanceRatio(); // Function SpatialGDK.SpatialStatics.GetFullFrequencyNetCullDistanceRatio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FString GetActorEntityIdAsString(struct AActor* Actor); // Function SpatialGDK.SpatialStatics.GetActorEntityIdAsString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	int64_t GetActorEntityId(struct AActor* Actor); // Function SpatialGDK.SpatialStatics.GetActorEntityId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FString EntityIdToString(int64_t EntityID); // Function SpatialGDK.SpatialStatics.EntityIdToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FLockingToken AcquireLock(struct AActor* Actor, struct FString DebugString); // Function SpatialGDK.SpatialStatics.AcquireLock // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialWorkerConnection
// Size: 0x78 (Inherited: 0x28)
struct USpatialWorkerConnection : UObject {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class SpatialGDK.SpatialWorkerFlags
// Size: 0xd8 (Inherited: 0x28)
struct USpatialWorkerFlags : UObject {
	char pad_28[0xb0]; // 0x28(0xb0)

	void UnregisterFlagUpdatedCallback(struct FString InFlagName, struct FDelegate InDelegate); // Function SpatialGDK.SpatialWorkerFlags.UnregisterFlagUpdatedCallback // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UnregisterAnyFlagUpdatedCallback(struct FDelegate InDelegate); // Function SpatialGDK.SpatialWorkerFlags.UnregisterAnyFlagUpdatedCallback // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RegisterFlagUpdatedCallback(struct FString InFlagName, struct FDelegate InDelegate); // Function SpatialGDK.SpatialWorkerFlags.RegisterFlagUpdatedCallback // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RegisterAnyFlagUpdatedCallback(struct FDelegate InDelegate); // Function SpatialGDK.SpatialWorkerFlags.RegisterAnyFlagUpdatedCallback // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RegisterAndInvokeFlagUpdatedCallback(struct FString InFlagName, struct FDelegate InDelegate); // Function SpatialGDK.SpatialWorkerFlags.RegisterAndInvokeFlagUpdatedCallback // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void RegisterAndInvokeAnyFlagUpdatedCallback(struct FDelegate InDelegate); // Function SpatialGDK.SpatialWorkerFlags.RegisterAndInvokeAnyFlagUpdatedCallback // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.SpatialWorldSettings
// Size: 0x440 (Inherited: 0x430)
struct ASpatialWorldSettings : AWorldSettings {
	struct USpatialMultiWorkerSettings* MultiWorkerSettingsClass; // 0x430(0x08)
	struct USpatialMultiWorkerSettings* EditorMultiWorkerSettingsOverride; // 0x438(0x08)
};

// Class SpatialGDK.TestActor
// Size: 0x288 (Inherited: 0x288)
struct ATestActor : AActor {

	void TestServerRPC(); // Function SpatialGDK.TestActor.TestServerRPC // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xffff8008e4a10000
};

// Class SpatialGDK.WorkerRegion
// Size: 0x2c8 (Inherited: 0x288)
struct AWorkerRegion : AActor {
	struct UStaticMeshComponent* Mesh; // 0x288(0x08)
	struct UMaterialInstanceDynamic* BackgroundMaterialInstance; // 0x290(0x08)
	struct UMaterialInstanceDynamic* CombinedMaterialInstance; // 0x298(0x08)
	struct UMaterial* CombinedMaterial; // 0x2a0(0x08)
	struct UCanvasRenderTarget2D* CanvasRenderTarget; // 0x2a8(0x08)
	struct UFont* WorkerInfoFont; // 0x2b0(0x08)
	struct FString WorkerInfo; // 0x2b8(0x10)

	void DrawToCanvasRenderTarget(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function SpatialGDK.WorkerRegion.DrawToCanvasRenderTarget // (Final|Native|Public) // @ game+0xffff8008e4a10000
};

