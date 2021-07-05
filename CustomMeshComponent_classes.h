// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x480 (Inherited: 0x470)
struct UCustomMeshComponent : UMeshComponent {
	char pad_470[0x10]; // 0x470(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xffff8008e4a10000
};

