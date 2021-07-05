// Class MRMesh.MeshReconstructorBase
// Size: 0x28 (Inherited: 0x28)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // @ game+0xffff8008e4a10000
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // @ game+0xffff8008e4a10000
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x270 (Inherited: 0x200)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x1f8(0x10)
	bool ScanWorld; // 0x208(0x01)
	bool RequestNormals; // 0x209(0x01)
	bool RequestVertexConfidence; // 0x20a(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x20b(0x01)
	struct TArray<struct FColor> BlockVertexColors; // 0x210(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x220(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x230(0x10)
	float UpdateInterval; // 0x240(0x04)
	struct UMRMeshComponent* MRMesh; // 0x248(0x08)
	char pad_250[0x20]; // 0x250(0x20)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<float> Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xffff8008e4a10000
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

// Class MRMesh.MRMeshComponent
// Size: 0x500 (Inherited: 0x450)
struct UMRMeshComponent : UPrimitiveComponent {
	char pad_450[0x8]; // 0x450(0x08)
	struct UMaterialInterface* Material; // 0x458(0x08)
	struct UMaterialInterface* WireframeMaterial; // 0x460(0x08)
	bool bCreateMeshProxySections; // 0x468(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x469(0x01)
	bool bNeverCreateCollisionMesh; // 0x46a(0x01)
	char pad_46B[0x5]; // 0x46b(0x05)
	struct UBodySetup* CachedBodySetup; // 0x470(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x478(0x10)
	char pad_488[0x78]; // 0x488(0x78)

	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // Function MRMesh.MRMeshComponent.SetWireframeMaterial // (Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetWireframeColor(struct FLinearColor InColor); // Function MRMesh.MRMeshComponent.SetWireframeColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetUseWireframe(bool bUseWireframe); // Function MRMesh.MRMeshComponent.SetUseWireframe // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetEnableMeshOcclusion(bool bEnable); // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	struct FLinearColor GetWireframeColor(); // Function MRMesh.MRMeshComponent.GetWireframeColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetUseWireframe(); // Function MRMesh.MRMeshComponent.GetUseWireframe // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	bool GetEnableMeshOcclusion(); // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

