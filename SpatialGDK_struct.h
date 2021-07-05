// Enum SpatialGDK.ERPCResult
enum class ERPCResult : uint8 {
	Success,
	UnresolvedTargetObject,
	MissingFunctionInfo,
	UnresolvedParameters,
	NoAuthority,
	NoActorChannel,
	SpatialActorChannelNotListening,
	NoNetConnection,
	InvalidRPCType,
	NoOwningController,
	NoControllerChannel,
	ControllerChannelNotListening,
	RPCServiceFailure,
	Unknown,
	ERPCResult_MAX,
};

// Enum SpatialGDK.ESchemaDatabaseVersion
enum class ESchemaDatabaseVersion : uint8 {
	BeforeVersionSupportAdded,
	VersionSupportAdded,
	LatestVersionPlusOne,
	LatestVersion,
	ESchemaDatabaseVersion_MAX,
};

// Enum SpatialGDK.ERPCType
enum class ERPCType : uint8 {
	Invalid,
	ClientReliable,
	ClientUnreliable,
	ServerReliable,
	ServerUnreliable,
	NetMulticast,
	CrossServer,
	ERPCType_MAX,
};

// Enum SpatialGDK.EActorTagDrawMode
enum class EActorTagDrawMode : uint8 {
	None,
	LocalPlayer,
	All,
	EActorTagDrawMode_MAX,
};

// Enum SpatialGDK.EServicesRegion
enum class EServicesRegion : uint8 {
	Default,
	CN,
	EServicesRegion_MAX,
};

// Enum SpatialGDK.ESettingsWorkerLogVerbosity
enum class ESettingsWorkerLogVerbosity : uint8 {
	NoLogging,
	Fatal,
	Error,
	Warning,
	Display,
	Log,
	Verbose,
	VeryVerbose,
	ESettingsWorkerLogVerbosity_MAX,
};

// Enum SpatialGDK.ETraceType
enum class ETraceType : uint8 {
	RPC,
	Property,
	Tagged,
	ETraceType_MAX,
};

// Enum SpatialGDK.EMapTestingMode
enum class EMapTestingMode : uint8 {
	Detect,
	ForceNativeOffline,
	ForceNativeAsListenServer,
	ForceNativeAsClient,
	ForceSpatial,
	UseCurrentSettings,
	EMapTestingMode_MAX,
};

// ScriptStruct SpatialGDK.SpatialAwaitableDelegateHandleBPWrapper
// Size: 0x08 (Inherited: 0x00)
struct FSpatialAwaitableDelegateHandleBPWrapper {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SpatialGDK.LayerInfo
// Size: 0x60 (Inherited: 0x00)
struct FLayerInfo {
	struct FName Name; // 0x00(0x08)
	struct TSet<SoftClassProperty> ActorClasses; // 0x08(0x50)
	struct UAbstractLBStrategy* LoadBalanceStrategy; // 0x58(0x08)
};

// ScriptStruct SpatialGDK.ComponentIDs
// Size: 0x10 (Inherited: 0x00)
struct FComponentIDs {
	struct TArray<uint32_t> ComponentIDs; // 0x00(0x10)
};

// ScriptStruct SpatialGDK.SubobjectSchemaData
// Size: 0x20 (Inherited: 0x00)
struct FSubobjectSchemaData {
	struct FString GeneratedSchemaName; // 0x00(0x10)
	struct TArray<struct FDynamicSubobjectSchemaData> DynamicSubobjectComponents; // 0x10(0x10)
};

// ScriptStruct SpatialGDK.DynamicSubobjectSchemaData
// Size: 0x0c (Inherited: 0x00)
struct FDynamicSubobjectSchemaData {
	uint32_t SchemaComponents[0x3]; // 0x00(0x0c)
};

// ScriptStruct SpatialGDK.ActorSchemaData
// Size: 0x70 (Inherited: 0x00)
struct FActorSchemaData {
	struct FString GeneratedSchemaName; // 0x00(0x10)
	uint32_t SchemaComponents[0x3]; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<uint32_t, struct FActorSpecificSubobjectSchemaData> SubobjectData; // 0x20(0x50)
};

// ScriptStruct SpatialGDK.ActorSpecificSubobjectSchemaData
// Size: 0x28 (Inherited: 0x00)
struct FActorSpecificSubobjectSchemaData {
	struct FString ClassPath; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	uint32_t SchemaComponents[0x3]; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct SpatialGDK.ClassInfo
// Size: 0x100 (Inherited: 0x00)
struct FClassInfo {
	char pad_0[0x100]; // 0x00(0x100)
};

// ScriptStruct SpatialGDK.WorkerRegionInfo
// Size: 0x30 (Inherited: 0x00)
struct FWorkerRegionInfo {
	struct FColor Color; // 0x00(0x04)
	struct FBox2D Extents; // 0x04(0x14)
	struct FString WorkerName; // 0x18(0x10)
	uint32_t VirtualWorkerID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct SpatialGDK.DistanceFrequencyPair
// Size: 0x08 (Inherited: 0x00)
struct FDistanceFrequencyPair {
	float DistanceRatio; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
};

// ScriptStruct SpatialGDK.QueryData
// Size: 0x10 (Inherited: 0x00)
struct FQueryData {
	struct UAbstractQueryConstraint* Constraint; // 0x00(0x08)
	float Frequency; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct SpatialGDK.SpatialLatencyPayload
// Size: 0x28 (Inherited: 0x00)
struct FSpatialLatencyPayload {
	struct TArray<char> TraceId; // 0x00(0x10)
	struct TArray<char> SpanId; // 0x10(0x10)
	int32_t Key; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct SpatialGDK.WorkerStats
// Size: 0x20 (Inherited: 0x00)
struct FWorkerStats {
	struct FString WorkerName; // 0x00(0x10)
	float AverageFPS; // 0x10(0x04)
	float ServerMovementCorrections; // 0x14(0x04)
	int32_t ServerConsiderListSize; // 0x18(0x04)
	uint32_t ServerReplicationLimit; // 0x1c(0x04)
};

// ScriptStruct SpatialGDK.SpatialPingAverageData
// Size: 0x28 (Inherited: 0x00)
struct FSpatialPingAverageData {
	float LastMeasurementsWindowAvg; // 0x00(0x04)
	float LastMeasurementsWindowMin; // 0x04(0x04)
	float LastMeasurementsWindowMax; // 0x08(0x04)
	float LastMeasurementsWindow50thPercentile; // 0x0c(0x04)
	float LastMeasurementsWindow90thPercentile; // 0x10(0x04)
	int32_t WindowSize; // 0x14(0x04)
	float TotalAvg; // 0x18(0x04)
	float TotalMin; // 0x1c(0x04)
	float TotalMax; // 0x20(0x04)
	int32_t TotalNum; // 0x24(0x04)
};

// ScriptStruct SpatialGDK.LockingToken
// Size: 0x08 (Inherited: 0x00)
struct FLockingToken {
	int64_t Token; // 0x00(0x08)
};

// ScriptStruct SpatialGDK.SpatialTraceEvent
// Size: 0x28 (Inherited: 0x00)
struct FSpatialTraceEvent {
	struct FName Type; // 0x00(0x08)
	struct FString Message; // 0x08(0x10)
	struct TArray<struct FTraceData> Data; // 0x18(0x10)
};

// ScriptStruct SpatialGDK.TraceData
// Size: 0x20 (Inherited: 0x00)
struct FTraceData {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct SpatialGDK.MapTestingSettings
// Size: 0x01 (Inherited: 0x00)
struct FMapTestingSettings {
	enum class EMapTestingMode TestingMode; // 0x00(0x01)
};

// ScriptStruct SpatialGDK.UserSpanId
// Size: 0x10 (Inherited: 0x00)
struct FUserSpanId {
	struct TArray<char> Data; // 0x00(0x10)
};

