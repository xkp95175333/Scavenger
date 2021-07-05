// Class AppleARKitFaceSupport.AppleARKitFaceMeshComponent
// Size: 0x5a0 (Inherited: 0x4e0)
struct UAppleARKitFaceMeshComponent : UProceduralMeshComponent {
	bool bWantsMeshUpdates; // 0x4d8(0x01)
	bool bWantsCollision; // 0x4d9(0x01)
	bool bAutoBindToLocalFaceMesh; // 0x4da(0x01)
	enum class EARFaceComponentTransformMixing TransformSetting; // 0x4db(0x01)
	bool bFlipTrackedRotation; // 0x4dc(0x01)
	struct UMaterialInterface* FaceMaterial; // 0x4e0(0x08)
	struct FName LiveLinkSubjectName; // 0x4e8(0x08)
	struct TArray<struct FNetQuantizeFaceCurve> RemoteCurves; // 0x4f0(0x10)
	char pad_505[0x9b]; // 0x505(0x9b)

	void UpdateMeshFromBlendShapes(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void UpdateMesh(struct TArray<struct FVector> Vertices); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMesh // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBlendShapes(struct TMap<enum class EARFaceBlendShape, float> InBlendShapes); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetBlendShapeAmount(enum class EARFaceBlendShape BlendShape, float Amount); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapeAmount // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void SetAutoBind(bool bAutoBind); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetAutoBind // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ServerUpdateFaceCurves(struct TArray<struct FNetQuantizeFaceCurve> ClientCurves); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.ServerUpdateFaceCurves // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xffff8008e4a10000
	void PublishViaLiveLink(struct FName SubjectName); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.PublishViaLiveLink // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void OnRep_RemoteCurves(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.OnRep_RemoteCurves // (Final|Native|Private) // @ game+0xffff8008e4a10000
	struct FTransform GetTransform(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetLastUpdateTimestamp(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	int32_t GetLastUpdateFrameNumber(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	float GetFaceBlendShapeAmount(enum class EARFaceBlendShape BlendShape); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xffff8008e4a10000
	void CreateMesh(struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector2D> UV0); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.CreateMesh // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
};

