// Class ScavengersHubPlugin.MorpheusActor
// Size: 0x398 (Inherited: 0x288)
struct AMorpheusActor : AActor {
	enum class EMorpheusNetworkLevel MinimumNetworkLevel; // 0x288(0x01)
	enum class EMorpheusNetworkLevel NetworkLevel; // 0x289(0x01)
	bool HasClientAuthority; // 0x28a(0x01)
	bool KeepAliveIfClientQuits; // 0x28b(0x01)
	bool DisableBlueprintTick; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct AMorpheusConnection* ActiveConnection; // 0x290(0x08)
	enum class EMorpheusNetworkLevel RequestedNetworkLevel; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UMorpheusActorMovementComponent* MorpheusActorMovementComponent; // 0x2a0(0x08)
	struct UMorpheusActorRenderTargetComponent* MorpheusActorRenderTargetComponent; // 0x2a8(0x08)
	struct FQuantisedPosition ReplicatedPosition; // 0x2b0(0x18)
	struct FQuantisedRotation ReplicatedRotation; // 0x2c8(0x18)
	uint64_t ReplicatedMovementSenderTime; // 0x2e0(0x08)
	struct FLowFidelityQuantisedPosition LowFidelityBackgroundPosition; // 0x2e8(0x18)
	uint64_t BackgroundIsHidden; // 0x300(0x08)
	char pad_308[0x10]; // 0x308(0x10)
	struct AMorpheusConnection* CallerConnectionForCurrentRpc; // 0x318(0x08)
	char pad_320[0x8]; // 0x320(0x08)
	struct FSerialisedMorpheusActorMetadata Private_SerialisedMetadata; // 0x328(0x50)
	bool Private_MetadataHasBeenSerialised; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UMorpheusRenderTargetManager* Private_RenderTargetManager; // 0x380(0x08)
	char pad_388[0x10]; // 0x388(0x10)

	void SwitchMorpheusAuthority(enum class EMorpheusActorAuthorityState State); // Function ScavengersHubPlugin.MorpheusActor.SwitchMorpheusAuthority // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ServerSetEntityHidden(bool Hidden); // Function ScavengersHubPlugin.MorpheusActor.ServerSetEntityHidden // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct AMorpheusConnection* ServerGetTrustedRpcCallerConnection(); // Function ScavengersHubPlugin.MorpheusActor.ServerGetTrustedRpcCallerConnection // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool ServerCalledClientRpc(); // Function ScavengersHubPlugin.MorpheusActor.ServerCalledClientRpc // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void PostLoadRenderTarget_BP(); // Function ScavengersHubPlugin.MorpheusActor.PostLoadRenderTarget_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRep_LowFidelityBackgroundPosition(); // Function ScavengersHubPlugin.MorpheusActor.OnRep_LowFidelityBackgroundPosition // (Final|Native|Public) // @ game+0xffff8008e4a10000
	void OnRep_BackgroundMovement(); // Function ScavengersHubPlugin.MorpheusActor.OnRep_BackgroundMovement // (Final|Native|Public) // @ game+0xffff8008e4a10000
	void OnRep_BackgroundIsHidden(); // Function ScavengersHubPlugin.MorpheusActor.OnRep_BackgroundIsHidden // (Final|Native|Public) // @ game+0xffff8008e4a10000
	void OnRenderTargetSpawnedEvent(); // Function ScavengersHubPlugin.MorpheusActor.OnRenderTargetSpawnedEvent // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NetworkLevelChangedEvent(); // Function ScavengersHubPlugin.MorpheusActor.NetworkLevelChangedEvent // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool IsOnClient(); // Function ScavengersHubPlugin.MorpheusActor.IsOnClient // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool IsHidden(); // Function ScavengersHubPlugin.MorpheusActor.IsHidden // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	struct AMorpheusClientConnection* GetOwningClientConnection(); // Function ScavengersHubPlugin.MorpheusActor.GetOwningClientConnection // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool AuthoritativeClientCalledServerRpc(); // Function ScavengersHubPlugin.MorpheusActor.AuthoritativeClientCalledServerRpc // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.EntityObject
// Size: 0x398 (Inherited: 0x398)
struct AEntityObject : AMorpheusActor {
};

// Class ScavengersHubPlugin.MorpheusActorRenderTargetComponent
// Size: 0x130 (Inherited: 0xb0)
struct UMorpheusActorRenderTargetComponent : UActorComponent {
	struct AActor* CurrentActor; // 0xb0(0x08)
	struct AScavengersHubIsmActor* CurrentIsm; // 0xb8(0x08)
	struct FScavengersHubRenderTarget ServerRenderTarget; // 0xc0(0x18)
	struct FScavengersHubRenderTarget AuthoritativeClientRenderTarget; // 0xd8(0x18)
	struct TArray<struct FScavengersHubLodLevel> ClientLodLevels; // 0xf0(0x10)
	char pad_100[0x30]; // 0x100(0x30)

	void SetServerRenderTarget(struct FScavengersHubRenderTarget Target); // Function ScavengersHubPlugin.MorpheusActorRenderTargetComponent.SetServerRenderTarget // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAuthoritativeClientRenderTarget(struct FScavengersHubRenderTarget Target); // Function ScavengersHubPlugin.MorpheusActorRenderTargetComponent.SetAuthoritativeClientRenderTarget // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	int32_t GetClientLodLevelIndexBP(); // Function ScavengersHubPlugin.MorpheusActorRenderTargetComponent.GetClientLodLevelIndexBP // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void AddClientLodLevel(struct FScavengersHubRenderTarget Target, int32_t NumEntities); // Function ScavengersHubPlugin.MorpheusActorRenderTargetComponent.AddClientLodLevel // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.EntityObjectRenderTargetComponent
// Size: 0x130 (Inherited: 0x130)
struct UEntityObjectRenderTargetComponent : UMorpheusActorRenderTargetComponent {
};

// Class ScavengersHubPlugin.MorpheusActorMovementComponent
// Size: 0x1b8 (Inherited: 0xb0)
struct UMorpheusActorMovementComponent : UActorComponent {
	enum class EScavengersHubPropertyAuthority MovementAuthority; // 0xb0(0x01)
	bool InterpolateBackgroundMovement; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct AMorpheusActor* MorpheusActorOwner; // 0xb8(0x08)
	char pad_C0[0xf8]; // 0xc0(0xf8)

	struct FScavengersHubMovement GetCurrentMovement(); // Function ScavengersHubPlugin.MorpheusActorMovementComponent.GetCurrentMovement // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.EntityObjectMovementComponent
// Size: 0x1b8 (Inherited: 0x1b8)
struct UEntityObjectMovementComponent : UMorpheusActorMovementComponent {
};

// Class ScavengersHubPlugin.MorpheusActorComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UMorpheusActorComponent : UActorComponent {
	struct AMorpheusActor* MorpheusActor; // 0xb0(0x08)
	struct AMorpheusActor* EntityObject; // 0xb8(0x08)
};

// Class ScavengersHubPlugin.EntityObjectComponent
// Size: 0xc0 (Inherited: 0xc0)
struct UEntityObjectComponent : UMorpheusActorComponent {
};

// Class ScavengersHubPlugin.MorpheusActorMetadataDatabase
// Size: 0x30 (Inherited: 0x28)
struct UMorpheusActorMetadataDatabase : UObject {
	struct UMorpheusActorMetadataDatabaseAsset* DatabaseAsset; // 0x28(0x08)
};

// Class ScavengersHubPlugin.MorpheusActorMetadataDatabaseAsset
// Size: 0x80 (Inherited: 0x28)
struct UMorpheusActorMetadataDatabaseAsset : UObject {
	struct TMap<struct FString, struct FSerialisedMorpheusActorMetadata> SerialisedClassMetadata; // 0x28(0x50)
	bool MetadataHasBeenSerialised; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class ScavengersHubPlugin.MorpheusAnalytics
// Size: 0x290 (Inherited: 0x288)
struct AMorpheusAnalytics : AInfo {
	char pad_288[0x8]; // 0x288(0x08)
};

// Class ScavengersHubPlugin.MorpheusConnection
// Size: 0x1658 (Inherited: 0x288)
struct AMorpheusConnection : AInfo {
	char pad_288[0x68]; // 0x288(0x68)
	bool IsActiveConnection; // 0x2f0(0x01)
	char pad_2F1[0x1367]; // 0x2f1(0x1367)

	void OnConnectionFailedBP(struct FString Message); // Function ScavengersHubPlugin.MorpheusConnection.OnConnectionFailedBP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnConnectedBP(); // Function ScavengersHubPlugin.MorpheusConnection.OnConnectedBP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool IsConnected(); // Function ScavengersHubPlugin.MorpheusConnection.IsConnected // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void Connect(); // Function ScavengersHubPlugin.MorpheusConnection.Connect // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.MorpheusClientConnection
// Size: 0x1738 (Inherited: 0x1658)
struct AMorpheusClientConnection : AMorpheusConnection {
	bool IsSimulatedPlayer; // 0x1658(0x01)
	char pad_1659[0x7]; // 0x1659(0x07)
	struct AMorpheusServerConnection* ServerConnection; // 0x1660(0x08)
	bool UpdateClientLodLevels; // 0x1668(0x01)
	char pad_1669[0x3]; // 0x1669(0x03)
	struct FScavengersHubMovement ClientOriginMovement; // 0x166c(0x24)
	int64_t ClientLodLevelUpdateTickInterval; // 0x1690(0x08)
	bool IsSimulationClient; // 0x1698(0x01)
	bool ConnectionIsWeak; // 0x1699(0x01)
	char pad_169A[0x6]; // 0x169a(0x06)
	struct UMorpheusRenderTargetManager* ClientRenderTargetManager; // 0x16a0(0x08)
	struct TArray<struct FNetworkLevelBucketConfig> ForegroundNetworkLevelBuckets; // 0x16a8(0x10)
	struct TArray<struct FNetworkLevelBucketConfig> MidgroundNetworkLevelBuckets; // 0x16b8(0x10)
	struct UNetworkLevelPrioritiser* NetworkLevelPrioritiser; // 0x16c8(0x08)
	struct FString PlayerIdentityToken; // 0x16d0(0x10)
	char pad_16E0[0x38]; // 0x16e0(0x38)
	struct UMorpheusClientEntityManager* EntityManager; // 0x1718(0x08)
	char pad_1720[0x18]; // 0x1720(0x18)

	void UploadCurrentRecording(struct FString Name); // Function ScavengersHubPlugin.MorpheusClientConnection.UploadCurrentRecording // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetReplayingEnabled(bool Enabled); // Function ScavengersHubPlugin.MorpheusClientConnection.SetReplayingEnabled // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetRecordingEnabled(bool Enabled); // Function ScavengersHubPlugin.MorpheusClientConnection.SetRecordingEnabled // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void LoopSpecificRecording(struct FString Name); // Function ScavengersHubPlugin.MorpheusClientConnection.LoopSpecificRecording // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.MorpheusClientEntityManager
// Size: 0x200 (Inherited: 0x28)
struct UMorpheusClientEntityManager : UObject {
	char pad_28[0x40]; // 0x28(0x40)
	struct AMorpheusClientConnection* ActiveConnection; // 0x68(0x08)
	struct AMorpheusServerConnection* ServerConnection; // 0x70(0x08)
	struct UMorpheusRenderTargetManager* ClientRenderTargetManager; // 0x78(0x08)
	struct UNetworkLevelPrioritiser* NetworkLevelPrioritiser; // 0x80(0x08)
	struct UMorpheusReplicationDatabase* ReplicationDatabase; // 0x88(0x08)
	struct UMorpheusClientMarkView* MarkView; // 0x90(0x08)
	struct UMorpheusClientForegroundView* ForegroundView; // 0x98(0x08)
	struct UMorpheusClientInterestUpdater* InterestUpdater; // 0xa0(0x08)
	struct UMorpheusPackageMap* PackageMap; // 0xa8(0x08)
	char pad_B0[0x18]; // 0xb0(0x18)
	struct TMap<int64_t, struct FMorpheusActorClientTracker> Entities; // 0xc8(0x50)
	struct TSet<int64_t> AuthoritativeEntities; // 0x118(0x50)
	char pad_168[0x98]; // 0x168(0x98)

	void StreamingLevelUnloaded(); // Function ScavengersHubPlugin.MorpheusClientEntityManager.StreamingLevelUnloaded // (Final|Native|Private) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.MorpheusClientForegroundView
// Size: 0x30 (Inherited: 0x28)
struct UMorpheusClientForegroundView : UObject {
	struct UMorpheusClientEntityManager* EntityManager; // 0x28(0x08)
};

// Class ScavengersHubPlugin.MorpheusClientInterestUpdater
// Size: 0x88 (Inherited: 0x28)
struct UMorpheusClientInterestUpdater : UObject {
	struct UMorpheusClientEntityManager* EntityManager; // 0x28(0x08)
	char pad_30[0x58]; // 0x30(0x58)
};

// Class ScavengersHubPlugin.MorpheusClientMarkView
// Size: 0x48 (Inherited: 0x28)
struct UMorpheusClientMarkView : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UMorpheusClientEntityManager* EntityManager; // 0x30(0x08)
	struct UMorpheusReplicationDatabase* ReplicationDatabase; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class ScavengersHubPlugin.MorpheusInspectorAdmin
// Size: 0x3d0 (Inherited: 0x398)
struct AMorpheusInspectorAdmin : AMorpheusActor {
	enum class EMorpheusInspectorAdminListFilter ActorListFilter; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct TArray<struct AMorpheusActor*> ActorList; // 0x3a0(0x10)
	char pad_3B0[0x20]; // 0x3b0(0x20)

	void ShowActor(struct AMorpheusActor* Actor); // Function ScavengersHubPlugin.MorpheusInspectorAdmin.ShowActor // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xffff8008e4a10000
	void HideActor(struct AMorpheusActor* Actor); // Function ScavengersHubPlugin.MorpheusInspectorAdmin.HideActor // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct AMorpheusInspectorAdmin* GetAuthoritativeInstance(struct UObject* WorldContextObject); // Function ScavengersHubPlugin.MorpheusInspectorAdmin.GetAuthoritativeInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void DisconnectOwnerOfActor(struct AMorpheusActor* Actor); // Function ScavengersHubPlugin.MorpheusInspectorAdmin.DisconnectOwnerOfActor // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xffff8008e4a10000
	void DeleteActor(struct AMorpheusActor* Actor); // Function ScavengersHubPlugin.MorpheusInspectorAdmin.DeleteActor // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.MorpheusInspectorAdminSingleton
// Size: 0x3b0 (Inherited: 0x398)
struct AMorpheusInspectorAdminSingleton : AMorpheusActor {
	struct AMorpheusInspectorAdmin* AdminClass; // 0x398(0x08)
	struct TArray<struct AMorpheusClientConnection*> AllowedClientClasses; // 0x3a0(0x10)

	void RequestEnterAdmin(); // Function ScavengersHubPlugin.MorpheusInspectorAdminSingleton.RequestEnterAdmin // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ExitAdmin(); // Function ScavengersHubPlugin.MorpheusInspectorAdminSingleton.ExitAdmin // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.MorpheusInspectorOverlay
// Size: 0x300 (Inherited: 0x288)
struct AMorpheusInspectorOverlay : AActor {
	float OverlayEnabled; // 0x288(0x04)
	float OverlayDistance; // 0x28c(0x04)
	char pad_290[0x68]; // 0x290(0x68)
	struct UInstancedStaticMeshComponent* ISM; // 0x2f8(0x08)
};

// Class ScavengersHubPlugin.MorpheusLocalNetworking
// Size: 0x448 (Inherited: 0x288)
struct AMorpheusLocalNetworking : AActor {
	char pad_288[0x1c0]; // 0x288(0x1c0)
};

// Class ScavengersHubPlugin.MorpheusMain
// Size: 0x2f0 (Inherited: 0x288)
struct AMorpheusMain : AActor {
	struct TArray<struct AMorpheusClientConnection*> EditorClientConnectionTypes; // 0x288(0x10)
	enum class EMorpheusConnectionStrategy EditorConnectionStrategy; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct AMorpheusServerConnection* ServerConnectionType; // 0x2a0(0x08)
	struct AMorpheusClientConnection* DefaultClientConnectionType; // 0x2a8(0x08)
	struct TArray<struct FMorpheusClientConnectionSettings> ClientConnectionTypes; // 0x2b0(0x10)
	struct AMorpheusClientConnection* SimulatedPlayerConnectionType; // 0x2c0(0x08)
	bool Initialized; // 0x2c8(0x01)
	char pad_2C9[0x27]; // 0x2c9(0x27)
};

// Class ScavengersHubPlugin.MorpheusRenderTargetManager
// Size: 0x98 (Inherited: 0x28)
struct UMorpheusRenderTargetManager : UObject {
	char pad_28[0x70]; // 0x28(0x70)
};

// Class ScavengersHubPlugin.MorpheusReplicationDatabase
// Size: 0x88 (Inherited: 0x28)
struct UMorpheusReplicationDatabase : UObject {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class ScavengersHubPlugin.MorpheusServerConnection
// Size: 0x1728 (Inherited: 0x1658)
struct AMorpheusServerConnection : AMorpheusConnection {
	struct TMap<int64_t, struct AMorpheusClientConnection*> ClientConnections; // 0x1658(0x50)
	char pad_16A8[0x60]; // 0x16a8(0x60)
	struct UMorpheusServerEntityManager* EntityManager; // 0x1708(0x08)
	char pad_1710[0x18]; // 0x1710(0x18)
};

// Class ScavengersHubPlugin.MorpheusServerEntityManager
// Size: 0x248 (Inherited: 0x28)
struct UMorpheusServerEntityManager : UObject {
	char pad_28[0x38]; // 0x28(0x38)
	struct AMorpheusServerConnection* ActiveConnection; // 0x60(0x08)
	struct UMorpheusReplicationDatabase* ReplicationDatabase; // 0x68(0x08)
	struct UMorpheusServerMarkView* MarkView; // 0x70(0x08)
	struct UMorpheusServerForegroundView* ForegroundView; // 0x78(0x08)
	struct UMorpheusPackageMap* PackageMap; // 0x80(0x08)
	char pad_88[0x18]; // 0x88(0x18)
	struct TMap<int64_t, struct FMorpheusActorServerTracker> Entities; // 0xa0(0x50)
	char pad_F0[0xb0]; // 0xf0(0xb0)
	struct TMap<int64_t, struct AMorpheusClientConnection*> BootstrapEntityIdToClientConnection; // 0x1a0(0x50)
	char pad_1F0[0x58]; // 0x1f0(0x58)

	void StreamingLevelUnloaded(); // Function ScavengersHubPlugin.MorpheusServerEntityManager.StreamingLevelUnloaded // (Final|Native|Public) // @ game+0xffff8008e4a10000
	void EnsureAllNetStartupActorsAreTracked(); // Function ScavengersHubPlugin.MorpheusServerEntityManager.EnsureAllNetStartupActorsAreTracked // (Final|Native|Public) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.MorpheusServerForegroundView
// Size: 0x30 (Inherited: 0x28)
struct UMorpheusServerForegroundView : UObject {
	struct UMorpheusServerEntityManager* EntityManager; // 0x28(0x08)
};

// Class ScavengersHubPlugin.MorpheusServerMarkView
// Size: 0x40 (Inherited: 0x28)
struct UMorpheusServerMarkView : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UMorpheusServerEntityManager* EntityManager; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class ScavengersHubPlugin.NetworkLevelPrioritiser
// Size: 0x48 (Inherited: 0x28)
struct UNetworkLevelPrioritiser : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class ScavengersHubPlugin.MorpheusPackageMap
// Size: 0x190 (Inherited: 0xe0)
struct UMorpheusPackageMap : UPackageMap {
	char pad_E0[0xb0]; // 0xe0(0xb0)
};

// Class ScavengersHubPlugin.ScavengersHubCharacterObject
// Size: 0x3b8 (Inherited: 0x398)
struct AScavengersHubCharacterObject : AEntityObject {
	enum class EAutoReceiveInput AutoPossessPlayerOnClientAuthority; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FPackedMovementData PackedMovementData; // 0x3a0(0x08)
	struct APlayerController* SimulatedPlayerControllerClass; // 0x3a8(0x08)
	char pad_3B0[0x8]; // 0x3b0(0x08)

	struct ACharacter* GetCharacter(); // Function ScavengersHubPlugin.ScavengersHubCharacterObject.GetCharacter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.ScavengersHubBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UScavengersHubBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct AMorpheusActor* SpawnMorpheusActorWithClientAuthority(struct UObject* WorldContext, struct UObject* Class, struct AMorpheusClientConnection* ClientConnection, struct FTransform Transform); // Function ScavengersHubPlugin.ScavengersHubBlueprintFunctionLibrary.SpawnMorpheusActorWithClientAuthority // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct AMorpheusActor* SpawnEntityObjectWithClientAuthority(struct UObject* WorldContext, struct UObject* Class, struct AMorpheusClientConnection* ClientConnection, struct FTransform Transform); // Function ScavengersHubPlugin.ScavengersHubBlueprintFunctionLibrary.SpawnEntityObjectWithClientAuthority // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct AMorpheusActor* GetMorpheusActor(struct AActor* Actor); // Function ScavengersHubPlugin.ScavengersHubBlueprintFunctionLibrary.GetMorpheusActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct AMorpheusActor* GetEntityObject(struct AActor* Actor); // Function ScavengersHubPlugin.ScavengersHubBlueprintFunctionLibrary.GetEntityObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.ScavengersHubIsmActor
// Size: 0x320 (Inherited: 0x288)
struct AScavengersHubIsmActor : AActor {
	bool bUseCustomInstancedStaticMeshComponent; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UScavengersHubIsmComponent* CustomInstancedStaticMeshComponent; // 0x290(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMeshComponent; // 0x298(0x08)
	struct UInstancedStaticMeshComponent* UsedIsmComponent; // 0x2a0(0x08)
	char pad_2A8[0x78]; // 0x2a8(0x78)
};

// Class ScavengersHubPlugin.ScavengersHubIsmComponent
// Size: 0x5a0 (Inherited: 0x590)
struct UScavengersHubIsmComponent : UInstancedStaticMeshComponent {
	char pad_590[0x10]; // 0x590(0x10)
};

// Class ScavengersHubPlugin.ScavengersHubLiveConfig
// Size: 0x380 (Inherited: 0x288)
struct AScavengersHubLiveConfig : AInfo {
	struct FString BaseUrl; // 0x288(0x10)
	struct FString Branch; // 0x298(0x10)
	struct FString EditorBranch; // 0x2a8(0x10)
	struct TArray<struct FLiveConfigSettings> LiveConfigs; // 0x2b8(0x10)
	float UpdateInterval; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TMap<struct FString, struct FLiveConfig> LiveConfigOverrides; // 0x2d0(0x50)
	char pad_320[0x8]; // 0x320(0x08)
	struct FTimerHandle UpdateTimeHandle; // 0x328(0x08)
	char pad_330[0x50]; // 0x330(0x50)

	void UpdateAllLiveConfigs(); // Function ScavengersHubPlugin.ScavengersHubLiveConfig.UpdateAllLiveConfigs // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct FString GetLiveConfigString(struct FString Config, struct FString Value, struct FString Default); // Function ScavengersHubPlugin.ScavengersHubLiveConfig.GetLiveConfigString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	int32_t GetLiveConfigInt32(struct FString Config, struct FString Value, int32_t Default); // Function ScavengersHubPlugin.ScavengersHubLiveConfig.GetLiveConfigInt32 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	float GetLiveConfigFloat(struct FString Config, struct FString Value, float Default); // Function ScavengersHubPlugin.ScavengersHubLiveConfig.GetLiveConfigFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool GetLiveConfigBool(struct FString Config, struct FString Value, bool Default); // Function ScavengersHubPlugin.ScavengersHubLiveConfig.GetLiveConfigBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.ScavengersHubPooledActor
// Size: 0x28 (Inherited: 0x28)
struct UScavengersHubPooledActor : UInterface {

	void OnEndPlayToPool(); // Function ScavengersHubPlugin.ScavengersHubPooledActor.OnEndPlayToPool // (Native|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnBeginPlayFromPool(); // Function ScavengersHubPlugin.ScavengersHubPooledActor.OnBeginPlayFromPool // (Native|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.ScavengersHubRenderedResourcePool
// Size: 0x358 (Inherited: 0x288)
struct AScavengersHubRenderedResourcePool : AActor {
	SoftClassProperty IsmActorClass; // 0x288(0x28)
	char pad_2B0[0xa8]; // 0x2b0(0xa8)
};

// Class ScavengersHubPlugin.ScavengersHubGameSettings
// Size: 0xa0 (Inherited: 0x38)
struct UScavengersHubGameSettings : UDeveloperSettings {
	struct FBackgroundEncoderTrainingData BackgroundEncoderTrainingData; // 0x38(0x68)
};

// Class ScavengersHubPlugin.ScavengersHubSimulatedController
// Size: 0x620 (Inherited: 0x5f0)
struct AScavengersHubSimulatedController : APlayerController {
	char pad_5F0[0x30]; // 0x5f0(0x30)
};

// Class ScavengersHubPlugin.TestClientConnection
// Size: 0x1738 (Inherited: 0x1738)
struct ATestClientConnection : AMorpheusClientConnection {
};

// Class ScavengersHubPlugin.TestMorpheusActor
// Size: 0x3d8 (Inherited: 0x398)
struct ATestMorpheusActor : AMorpheusActor {
	struct UStaticMesh* TestMesh; // 0x398(0x08)
	bool AlwaysSendMovementUpdate; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	int32_t TestIntServerAuth; // 0x3a4(0x04)
	int32_t TestIntClientAuth; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct ATestMorpheusActor* MorpheusActorPointer; // 0x3b0(0x08)
	struct UObject* NonMorpheusActorPointer; // 0x3b8(0x08)
	struct FName NameProperty; // 0x3c0(0x08)
	char pad_3C8[0x10]; // 0x3c8(0x10)

	void TestServerRPC(int32_t Value); // Function ScavengersHubPlugin.TestMorpheusActor.TestServerRPC // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xffff8008e4a10000
	void TestNetMulticastRpc(int32_t Value); // Function ScavengersHubPlugin.TestMorpheusActor.TestNetMulticastRpc // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0xffff8008e4a10000
	void TestClientRpc(int32_t Value); // Function ScavengersHubPlugin.TestMorpheusActor.TestClientRpc // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xffff8008e4a10000
	void OnRep_TestIntServerAuth(); // Function ScavengersHubPlugin.TestMorpheusActor.OnRep_TestIntServerAuth // (Final|Native|Public) // @ game+0xffff8008e4a10000
	void OnRep_TestIntClientAuth(); // Function ScavengersHubPlugin.TestMorpheusActor.OnRep_TestIntClientAuth // (Final|Native|Public) // @ game+0xffff8008e4a10000
};

// Class ScavengersHubPlugin.ServerActor
// Size: 0x530 (Inherited: 0x530)
struct AServerActor : ACharacter {
};

// Class ScavengersHubPlugin.AuthoritativeClientActor
// Size: 0x530 (Inherited: 0x530)
struct AAuthoritativeClientActor : ACharacter {
};

// Class ScavengersHubPlugin.FirstClientActor
// Size: 0x530 (Inherited: 0x530)
struct AFirstClientActor : ACharacter {
};

// Class ScavengersHubPlugin.RenderTargetTestMorpheusActor
// Size: 0x3d8 (Inherited: 0x3d8)
struct ARenderTargetTestMorpheusActor : ATestMorpheusActor {
};

