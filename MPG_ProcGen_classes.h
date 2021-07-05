// Class MPG_ProcGen.ProceduralActor
// Size: 0x290 (Inherited: 0x288)
struct AProceduralActor : AActor {
	char pad_288[0x8]; // 0x288(0x08)

	void Unlock(); // Function MPG_ProcGen.ProceduralActor.Unlock // (Final|Native|Public) // @ game+0xffff8008e4a10000
	void SetLocked(bool bInIsLocked); // Function MPG_ProcGen.ProceduralActor.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void Lock(); // Function MPG_ProcGen.ProceduralActor.Lock // (Final|Native|Public) // @ game+0xffff8008e4a10000
	bool IsLocked(); // Function MPG_ProcGen.ProceduralActor.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsGenerating(); // Function MPG_ProcGen.ProceduralActor.IsGenerating // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct UObject* GetStaticMeshOuter(); // Function MPG_ProcGen.ProceduralActor.GetStaticMeshOuter // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void ForceClear(bool bRegenerate); // Function MPG_ProcGen.ProceduralActor.ForceClear // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class MPG_ProcGen.ProceduralCableActor
// Size: 0x298 (Inherited: 0x290)
struct AProceduralCableActor : AProceduralActor {
	struct UProceduralStaticMeshComponent* CableStaticMeshComponent; // 0x290(0x08)

	void InitializeParticles(bool bResetParticles); // Function MPG_ProcGen.ProceduralCableActor.InitializeParticles // (Final|Native|Public) // @ game+0xffff8008e4a10000
};

// Class MPG_ProcGen.ProceduralComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UProceduralComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)

	bool IsLocked(); // Function MPG_ProcGen.ProceduralComponent.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsGenerating(); // Function MPG_ProcGen.ProceduralComponent.IsGenerating // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsEditing(); // Function MPG_ProcGen.ProceduralComponent.IsEditing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct USplineComponent* GetTargetSplineComponent(); // Function MPG_ProcGen.ProceduralComponent.GetTargetSplineComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct UProceduralStaticMeshComponent* GetTargetProceduralStaticMeshComponent(); // Function MPG_ProcGen.ProceduralComponent.GetTargetProceduralStaticMeshComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0xffff8008e4a10000
	void GenerateOnOwner(); // Function MPG_ProcGen.ProceduralComponent.GenerateOnOwner // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class MPG_ProcGen.ProceduralCableComponent
// Size: 0xc0 (Inherited: 0xb8)
struct UProceduralCableComponent : UProceduralComponent {
	char pad_B8[0x8]; // 0xb8(0x08)

	void InitializeParticles(bool bResetParticles); // Function MPG_ProcGen.ProceduralCableComponent.InitializeParticles // (Final|Native|Public) // @ game+0xffff8008e4a10000
	void Initialize(); // Function MPG_ProcGen.ProceduralCableComponent.Initialize // (Final|Native|Protected) // @ game+0xffff8008e4a10000
};

// Class MPG_ProcGen.ProceduralDecalActor
// Size: 0x298 (Inherited: 0x290)
struct AProceduralDecalActor : AProceduralActor {
	struct UProceduralStaticMeshComponent* DecalStaticMeshComponent; // 0x290(0x08)
};

// Class MPG_ProcGen.ProceduralDecalComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UProceduralDecalComponent : UProceduralComponent {
};

// Class MPG_ProcGen.ProceduralInterface
// Size: 0x28 (Inherited: 0x28)
struct UProceduralInterface : UInterface {

	void Regenerate(); // Function MPG_ProcGen.ProceduralInterface.Regenerate // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnGenerate(); // Function MPG_ProcGen.ProceduralInterface.OnGenerate // (Native|Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Generate(); // Function MPG_ProcGen.ProceduralInterface.Generate // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Clear(); // Function MPG_ProcGen.ProceduralInterface.Clear // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool CanGenerate(); // Function MPG_ProcGen.ProceduralInterface.CanGenerate // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

// Class MPG_ProcGen.ProceduralPowerlinesActor
// Size: 0x2a0 (Inherited: 0x290)
struct AProceduralPowerlinesActor : AProceduralActor {
	struct UStaticMeshComponent* PoleStaticMeshComponent; // 0x290(0x08)
	struct UProceduralStaticMeshComponent* CableStaticMeshComponent; // 0x298(0x08)

	void RegenerateCables(); // Function MPG_ProcGen.ProceduralPowerlinesActor.RegenerateCables // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class MPG_ProcGen.ProceduralStaticMeshComponent
// Size: 0x4f0 (Inherited: 0x4e0)
struct UProceduralStaticMeshComponent : UStaticMeshComponent {
	char pad_4E0[0x10]; // 0x4e0(0x10)

	bool HasOuterChanged(); // Function MPG_ProcGen.ProceduralStaticMeshComponent.HasOuterChanged // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void CreateStaticMeshFromProceduralRawMeshEditor(struct FProceduralRawMesh RawMesh); // Function MPG_ProcGen.ProceduralStaticMeshComponent.CreateStaticMeshFromProceduralRawMeshEditor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearProceduralRawMesh(); // Function MPG_ProcGen.ProceduralStaticMeshComponent.ClearProceduralRawMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void BakeProceduralRawMesh(bool bClearTempProxy); // Function MPG_ProcGen.ProceduralStaticMeshComponent.BakeProceduralRawMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void AddProceduralRawMeshSection(struct FProceduralRawMeshSection RawMeshSection, bool bRenderTempProxyOverride); // Function MPG_ProcGen.ProceduralStaticMeshComponent.AddProceduralRawMeshSection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class MPG_ProcGen.ProceduralUtilities
// Size: 0x28 (Inherited: 0x28)
struct UProceduralUtilities : UBlueprintFunctionLibrary {

	void SetProceduralRawMeshVertexTangents(struct FProceduralRawMeshVertex ProceduralRawMesh, struct FVector InNormal, struct FVector InTangent); // Function MPG_ProcGen.ProceduralUtilities.SetProceduralRawMeshVertexTangents // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsActorInEditor(struct AActor* Actor); // Function MPG_ProcGen.ProceduralUtilities.IsActorInEditor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	bool CreateStaticMeshFromProceduralRawMeshEditor(struct UStaticMesh* StaticMesh, struct FProceduralRawMesh ProceduralRawMesh, struct FProceduralStaticMeshParams Params); // Function MPG_ProcGen.ProceduralUtilities.CreateStaticMeshFromProceduralRawMeshEditor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
};

