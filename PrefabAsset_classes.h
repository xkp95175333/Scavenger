// Class PrefabAsset.PrefabActor
// Size: 0x290 (Inherited: 0x288)
struct APrefabActor : AActor {
	struct UPrefabComponent* PrefabComponent; // 0x288(0x08)

	void SetPrefab(struct UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected); // Function PrefabAsset.PrefabActor.SetPrefab // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetMobility(enum class EComponentMobility InMobility); // Function PrefabAsset.PrefabActor.SetMobility // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UPrefabAsset* GetPrefab(); // Function PrefabAsset.PrefabActor.GetPrefab // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void DestroyPrefabActor(bool bDestroyAttachedChildren); // Function PrefabAsset.PrefabActor.DestroyPrefabActor // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class PrefabAsset.PrefabSnowActor
// Size: 0x298 (Inherited: 0x288)
struct APrefabSnowActor : AActor {
	struct TArray<struct AActor*> TargetPrefabs; // 0x288(0x10)
};

// Class PrefabAsset.PrefabAsset
// Size: 0xf0 (Inherited: 0x28)
struct UPrefabAsset : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	bool ForceStaticMerge; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t ForcedMergeCollisionLOD; // 0x3c(0x04)
	bool IsAutomerged; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TMap<struct FString, struct FSoftObjectPath> AssetReferences; // 0x48(0x50)
	struct FSoftObjectPath GeneratedBlueprintAssetReference; // 0x98(0x18)
	struct FGuid PrefabId; // 0xb0(0x10)
	struct FString PrefabContent; // 0xc0(0x10)
	struct FString PrefabHash; // 0xd0(0x10)
	int32_t NumActors; // 0xe0(0x04)
	struct FVector PrefabPivot; // 0xe4(0x0c)
};

// Class PrefabAsset.PrefabVariantAsset
// Size: 0xf8 (Inherited: 0xf0)
struct UPrefabVariantAsset : UPrefabAsset {
	struct UPrefabAsset* Parent; // 0xf0(0x08)
};

// Class PrefabAsset.PrefabComponent
// Size: 0x5f0 (Inherited: 0x450)
struct UPrefabComponent : UPrimitiveComponent {
	char bConnected : 1; // 0x448(0x01)
	char bLockSelection : 1; // 0x448(0x01)
	struct UPrefabAsset* Prefab; // 0x450(0x08)
	struct UBlueprint* GeneratedBlueprint; // 0x458(0x08)
	struct TMap<struct FName, struct AActor*> PrefabInstancesMap; // 0x460(0x50)
	struct TArray<struct FPrefabVariantRule> VariantRulesOverwrite; // 0x4b0(0x10)
	char bTransient : 1; // 0x4c0(0x01)
	char pad_4C0_3 : 5; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct TMap<struct UMaterialInterface*, struct UMaterialInterface*> OverrideMaterials; // 0x4c8(0x50)
	struct TMap<struct UMaterialInterface*, struct UMaterialInterface*> CurrentOverrideMaterials; // 0x518(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FS_ComponentMaterialOverrideList> OverriddenComponentMaterials; // 0x568(0x50)
	struct TArray<float> SnowHeightModTargets; // 0x5b8(0x10)
	struct TArray<float> SnowHeightMods; // 0x5c8(0x10)
	struct TArray<float> SnowHeightModsInternal; // 0x5d8(0x10)
	bool DoNotCook; // 0x5e8(0x01)
	char pad_5E9[0x7]; // 0x5e9(0x07)
};

// Class PrefabAsset.PrefabFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPrefabFunctionLibrary : UBlueprintFunctionLibrary {

	struct APrefabActor* SpawnPrefab(struct UObject* WorldContextObject, struct UPrefabAsset* PrefabAsset, struct FTransform SpawnTransform, struct TArray<struct AActor*> OutSpawnPrefabInstances, bool bSpawnInstancesOnly, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner); // Function PrefabAsset.PrefabFunctionLibrary.SpawnPrefab // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class PrefabAsset.PrefabExporter
// Size: 0x78 (Inherited: 0x78)
struct UPrefabExporter : UExporter {
};

// Class PrefabAsset.PrefabLevelExporter
// Size: 0x88 (Inherited: 0x78)
struct UPrefabLevelExporter : UPrefabExporter {
	char pad_78[0x10]; // 0x78(0x10)
};

// Class PrefabAsset.PrefabObjectExporterT3D
// Size: 0x78 (Inherited: 0x78)
struct UPrefabObjectExporterT3D : UPrefabExporter {
};

// Class PrefabAsset.PrefabToolSettings
// Size: 0x100 (Inherited: 0x28)
struct UPrefabToolSettings : UObject {
	bool bReplaceActorsWithCreatedPrefab; // 0x28(0x01)
	bool bAutoIncludeAttachedActorsWhenCreateNewPrefab; // 0x29(0x01)
	bool bNestedPrefabSupport; // 0x2a(0x01)
	bool bRestorePrefabActorCollapseStatusAfterPIE; // 0x2b(0x01)
	bool bCollapseAllPrefabActorsAfterMapOpened; // 0x2c(0x01)
	bool bMoveActorsInWorldAfterSetPrefabPivot; // 0x2d(0x01)
	bool bDuplicateNoRevertWithOffset; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
	struct FString NewPrefabNamePattern; // 0x30(0x10)
	enum class EPTUITheme UITheme; // 0x40(0x04)
	bool bUpdateAllPrefabActorsWhenOpenMap; // 0x44(0x01)
	bool bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap; // 0x45(0x01)
	bool bUpdateAllPrefabActorsWhenApply; // 0x46(0x01)
	bool bApplyToNestedPrefab; // 0x47(0x01)
	bool bEnableApplyFromDisconnectedPrefabActor; // 0x48(0x01)
	bool bAutoAddRemoveVariantActorPrefix; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct FString VariantActorPrefix; // 0x50(0x10)
	bool bEnablePrefabComponentVisualizer; // 0x60(0x01)
	enum class EPrefabVisualizerType PrefabComponentVisualizerType; // 0x61(0x01)
	bool bDisplayPrefabComponentVisualizerEvenNotSelected; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	struct FColor PrefabViewVisualizerColor; // 0x64(0x04)
	struct FColor TargetActorColor; // 0x68(0x04)
	struct FColor UnLockedConnectedColor; // 0x6c(0x04)
	struct FColor LockedConnectedColor; // 0x70(0x04)
	struct FColor UnLockedDisConnectedColor; // 0x74(0x04)
	struct FColor LockedDisConnectedColor; // 0x78(0x04)
	struct FColor UnLockedNoPrefabAssignedColor; // 0x7c(0x04)
	struct FColor LockedNoPrefabAssignedColor; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FSoftObjectPath PrefabMaterialPath; // 0x88(0x18)
	char pad_A0[0x28]; // 0xa0(0x28)
	bool bShadedPrefabViewVisualizer; // 0xc8(0x01)
	bool bLockPrefabSelectionByDefault; // 0xc9(0x01)
	bool bDisableLockPrefabSelectionFeature; // 0xca(0x01)
	bool bForceApplyPerInstanceVertexColor; // 0xcb(0x01)
	bool bHideChildActorsInPIEIfHiddenInEditor; // 0xcc(0x01)
	bool bCanToggleChildActorVisibilityInPIE; // 0xcd(0x01)
	char pad_CE[0x1]; // 0xce(0x01)
	bool bIgnoreLayersInPrefab; // 0xcf(0x01)
	bool bSupportGenerateBlueprint; // 0xd0(0x01)
	bool bHarvestComponentsWhenGeneratingBlueprint; // 0xd1(0x01)
	bool bUseActorNameAsVariableNameWhenGeneratingBlueprint; // 0xd2(0x01)
	bool bForceMobilityToMovableWhenGeneratingBlueprint; // 0xd3(0x01)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct AActor*> IgnoreActorClassesWhenGeneratingBlueprint; // 0xd8(0x10)
	struct TArray<struct FName> IgnoreActorTagsWhenGeneratingBlueprint; // 0xe8(0x10)
	bool bFlashPrefabWindowForTargetPrefabActor; // 0xf8(0x01)
	bool bEnablePrefabTextEditor; // 0xf9(0x01)
	bool bDebugMode; // 0xfa(0x01)
	bool bDisableThumbnailRender; // 0xfb(0x01)
	bool bShowPrefabInstanceTagInPrefabToolWindow; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
};

