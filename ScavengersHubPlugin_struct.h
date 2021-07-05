// Enum ScavengersHubPlugin.EMorpheusActorAuthorityState
enum class EMorpheusActorAuthorityState : uint8 {
	Server,
	AuthoritativeClient,
	Client,
	EMorpheusActorAuthorityState_MAX,
};

// Enum ScavengersHubPlugin.EScavengersHubPropertyAuthority
enum class EScavengersHubPropertyAuthority : uint8 {
	ServerAuthoritative,
	ClientAuthoritative,
	EScavengersHubPropertyAuthority_MAX,
};

// Enum ScavengersHubPlugin.EMarkLodLevel
enum class EMarkLodLevel : uint8 {
	EMarkLodLevel_Low,
	EMarkLodLevel_High,
	EMarkLodLevel_MaxValueDONOTUSE,
	EMarkLodLevel_MAX,
};

// Enum ScavengersHubPlugin.StaticMeshRenderStrategy
enum class StaticMeshRenderStrategy : uint8 {
	HISM,
	ParallelISM,
	StaticMeshRenderStrategy_MAX,
};

// Enum ScavengersHubPlugin.EMorpheusInspectorAdminListFilter
enum class EMorpheusInspectorAdminListFilter : uint8 {
	All,
	Hidden,
	Authoritative,
	EMorpheusInspectorAdminListFilter_MAX,
};

// Enum ScavengersHubPlugin.EMorpheusInitializationPhase
enum class EMorpheusInitializationPhase : uint8 {
	MorpheusPhaseBegin,
	MorpheusPhaseDownloadLiveConfig,
	MorpheusPhaseWaitForNetworking,
	MorpheusPhaseCreateConnections,
	MorpheusPhaseInitialized,
	EMorpheusInitializationPhase_MAX,
};

// Enum ScavengersHubPlugin.EMorpheusConnectionStrategy
enum class EMorpheusConnectionStrategy : uint8 {
	Local,
	LocalExternalServer,
	Cloud,
	EMorpheusConnectionStrategy_MAX,
};

// Enum ScavengersHubPlugin.EMorpheusNetworkLevel
enum class EMorpheusNetworkLevel : uint8 {
	Background,
	Midground,
	Foreground,
	EMorpheusNetworkLevel_MAX,
};

// Enum ScavengersHubPlugin.ScavengersHubConnectionMethod
enum class ScavengersHubConnectionMethod : uint8 {
	LocalReceptionist,
	CommandLineArguments,
	ScavengersHubConnectionMethod_MAX,
};

// ScriptStruct ScavengersHubPlugin.BackgroundEncoderTrainingData
// Size: 0x68 (Inherited: 0x00)
struct FBackgroundEncoderTrainingData {
	int64_t NumLodLevels; // 0x00(0x08)
	struct TMap<int64_t, int64_t> NumValuesPerEntityPerLodLevel; // 0x08(0x50)
	int64_t NumNextDiffElements; // 0x58(0x08)
	int64_t NumDictionaryElements; // 0x60(0x08)
};

// ScriptStruct ScavengersHubPlugin.SerialisedMorpheusActorMetadata
// Size: 0x50 (Inherited: 0x00)
struct FSerialisedMorpheusActorMetadata {
	struct TMap<struct FString, struct FSerialisedFieldMetadata> PropertyMetadata; // 0x00(0x50)
};

// ScriptStruct ScavengersHubPlugin.SerialisedFieldMetadata
// Size: 0x50 (Inherited: 0x00)
struct FSerialisedFieldMetadata {
	struct TMap<struct FName, struct FString> MetaData; // 0x00(0x50)
};

// ScriptStruct ScavengersHubPlugin.MorpheusActorClientTracker
// Size: 0x6b8 (Inherited: 0x00)
struct FMorpheusActorClientTracker {
	struct UMorpheusClientEntityManager* EntityManager; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct AMorpheusActor* MorpheusActor; // 0x10(0x08)
	enum class EMorpheusNetworkLevel NetworkLevel; // 0x18(0x01)
	char pad_19[0x69f]; // 0x19(0x69f)
};

// ScriptStruct ScavengersHubPlugin.MorpheusActorMovementInterpolator
// Size: 0xe0 (Inherited: 0x00)
struct FMorpheusActorMovementInterpolator {
	char pad_0[0xe0]; // 0x00(0xe0)
};

// ScriptStruct ScavengersHubPlugin.CustomMovementData
// Size: 0x08 (Inherited: 0x00)
struct FCustomMovementData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ScavengersHubPlugin.ScavengersHubPropertyParam
// Size: 0x18 (Inherited: 0x00)
struct FScavengersHubPropertyParam {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ScavengersHubPlugin.ScavengersHubLodLevel
// Size: 0x20 (Inherited: 0x00)
struct FScavengersHubLodLevel {
	struct FScavengersHubRenderTarget RenderTarget; // 0x00(0x18)
	int32_t NumEntities; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ScavengersHubPlugin.ScavengersHubRenderTarget
// Size: 0x18 (Inherited: 0x00)
struct FScavengersHubRenderTarget {
	struct UObject* ActorClass; // 0x00(0x08)
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
	enum class StaticMeshRenderStrategy StaticMeshRenderStrategy; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ScavengersHubPlugin.MorpheusActorServerTracker
// Size: 0x6b8 (Inherited: 0x00)
struct FMorpheusActorServerTracker {
	struct UMorpheusServerEntityManager* EntityManager; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct AMorpheusActor* MorpheusActor; // 0x10(0x08)
	char pad_18[0x6a0]; // 0x18(0x6a0)
};

// ScriptStruct ScavengersHubPlugin.MorpheusAnalyticsSimpleEvent
// Size: 0x10 (Inherited: 0x00)
struct FMorpheusAnalyticsSimpleEvent {
	struct FString Value; // 0x00(0x10)
};

// ScriptStruct ScavengersHubPlugin.MorpheusClientConnectionSettings
// Size: 0x28 (Inherited: 0x00)
struct FMorpheusClientConnectionSettings {
	struct FString CommandLineFlag; // 0x00(0x10)
	struct FString TravelOption; // 0x10(0x10)
	struct AMorpheusClientConnection* ConnectionType; // 0x20(0x08)
};

// ScriptStruct ScavengersHubPlugin.NetworkLevelBucket
// Size: 0xa0 (Inherited: 0x00)
struct FNetworkLevelBucket {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct ScavengersHubPlugin.NetworkLevelBucketConfig
// Size: 0x50 (Inherited: 0x00)
struct FNetworkLevelBucketConfig {
	struct AMorpheusActor* Class; // 0x00(0x08)
	int32_t MaxNumberOfEntities; // 0x08(0x04)
	char pad_C[0x44]; // 0x0c(0x44)
};

// ScriptStruct ScavengersHubPlugin.PackageMapObjectId
// Size: 0x10 (Inherited: 0x00)
struct FPackageMapObjectId {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ScavengersHubPlugin.ScavengersHubCharacterCheatDetection
// Size: 0x38 (Inherited: 0x00)
struct FScavengersHubCharacterCheatDetection {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct ScavengersHubPlugin.PackedMovementData
// Size: 0x08 (Inherited: 0x00)
struct FPackedMovementData {
	uint64_t PackedValue; // 0x00(0x08)
};

// ScriptStruct ScavengersHubPlugin.LiveConfigSettings
// Size: 0x18 (Inherited: 0x00)
struct FLiveConfigSettings {
	bool AutoUpdate; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct ScavengersHubPlugin.LiveConfigFloat
// Size: 0x30 (Inherited: 0x00)
struct FLiveConfigFloat {
	bool UseLiveConfig; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString LiveConfigFileName; // 0x08(0x10)
	struct FString LiveConfigValueName; // 0x18(0x10)
	float Default; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ScavengersHubPlugin.LiveConfigBool
// Size: 0x30 (Inherited: 0x00)
struct FLiveConfigBool {
	bool UseLiveConfig; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString LiveConfigFileName; // 0x08(0x10)
	struct FString LiveConfigValueName; // 0x18(0x10)
	bool Default; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ScavengersHubPlugin.LiveConfigInt32
// Size: 0x30 (Inherited: 0x00)
struct FLiveConfigInt32 {
	bool UseLiveConfig; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString LiveConfigFileName; // 0x08(0x10)
	struct FString LiveConfigValueName; // 0x18(0x10)
	int32_t Default; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ScavengersHubPlugin.LiveConfigString
// Size: 0x38 (Inherited: 0x00)
struct FLiveConfigString {
	bool UseLiveConfig; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString LiveConfigFileName; // 0x08(0x10)
	struct FString LiveConfigValueName; // 0x18(0x10)
	struct FString Default; // 0x28(0x10)
};

// ScriptStruct ScavengersHubPlugin.LiveConfig
// Size: 0x70 (Inherited: 0x00)
struct FLiveConfig {
	struct FString Hash; // 0x00(0x10)
	struct TMap<struct FString, struct FString> Values; // 0x10(0x50)
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct ScavengersHubPlugin.ScavengersHubMovementContainer
// Size: 0x28 (Inherited: 0x00)
struct FScavengersHubMovementContainer {
	struct FScavengersHubMovement Movement; // 0x00(0x24)
	char ForceNetUpdateValue; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ScavengersHubPlugin.ScavengersHubMovement
// Size: 0x24 (Inherited: 0x00)
struct FScavengersHubMovement {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FVector Velocity; // 0x18(0x0c)
};

// ScriptStruct ScavengersHubPlugin.LowFidelityQuantisedPosition
// Size: 0x18 (Inherited: 0x00)
struct FLowFidelityQuantisedPosition {
	uint64_t QuantisedX; // 0x00(0x08)
	uint64_t QuantisedY; // 0x08(0x08)
	uint64_t QuantisedZ; // 0x10(0x08)
};

// ScriptStruct ScavengersHubPlugin.QuantisedRotation
// Size: 0x18 (Inherited: 0x00)
struct FQuantisedRotation {
	uint64_t QuantisedPitch; // 0x00(0x08)
	uint64_t QuantisedYaw; // 0x08(0x08)
	uint64_t QuantisedRoll; // 0x10(0x08)
};

// ScriptStruct ScavengersHubPlugin.QuantisedPosition
// Size: 0x18 (Inherited: 0x00)
struct FQuantisedPosition {
	uint64_t QuantisedX; // 0x00(0x08)
	uint64_t QuantisedY; // 0x08(0x08)
	uint64_t QuantisedZ; // 0x10(0x08)
};

// ScriptStruct ScavengersHubPlugin.EntityActorClassPair
// Size: 0x10 (Inherited: 0x00)
struct FEntityActorClassPair {
	struct UObject* MorpheusActorClass; // 0x00(0x08)
	struct UObject* ActorClass; // 0x08(0x08)
};

