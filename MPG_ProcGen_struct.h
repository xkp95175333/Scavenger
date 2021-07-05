// Enum MPG_ProcGen.EProceduralStaticMeshPackageMode
enum class EProceduralStaticMeshPackageMode : uint8 {
	OuterPackage,
	LevelPackage,
	UseParentOverride,
	EProceduralStaticMeshPackageMode_MAX,
};

// ScriptStruct MPG_ProcGen.ProceduralCablePhysicsSettings
// Size: 0x30 (Inherited: 0x00)
struct FProceduralCablePhysicsSettings {
	float RestLength; // 0x00(0x04)
	int32_t NumSegments; // 0x04(0x04)
	float SubstepTime; // 0x08(0x04)
	int32_t SolverIterations; // 0x0c(0x04)
	char bEnableCollision : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	enum class ECollisionChannel ObjectType; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float CollisionFriction; // 0x14(0x04)
	char bEnableStiffnessConstraint : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float GravityScale; // 0x1c(0x04)
	struct TArray<struct FVector> Forces; // 0x20(0x10)
};

// ScriptStruct MPG_ProcGen.ProceduralCableGenerationSettings
// Size: 0x14 (Inherited: 0x00)
struct FProceduralCableGenerationSettings {
	float Radius; // 0x00(0x04)
	int32_t NumSides; // 0x04(0x04)
	char bNormalizeU : 1; // 0x08(0x01)
	char bNormalizeV : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector2D UVTiling; // 0x0c(0x08)
};

// ScriptStruct MPG_ProcGen.ProceduralCableParticle
// Size: 0x1c (Inherited: 0x00)
struct FProceduralCableParticle {
	struct FVector Position; // 0x00(0x0c)
	struct FVector OldPosition; // 0x0c(0x0c)
	bool bFree; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct MPG_ProcGen.ProceduralCableAttachment
// Size: 0x70 (Inherited: 0x00)
struct FProceduralCableAttachment {
	struct TSoftObjectPtr<struct AActor> AttachToActor; // 0x00(0x28)
	struct FName AttachToComponentName; // 0x28(0x08)
	char pad_30[0x28]; // 0x30(0x28)
	struct FName Socket; // 0x58(0x08)
	struct FVector Location; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct MPG_ProcGen.PowerlinesAttachment
// Size: 0x78 (Inherited: 0x00)
struct FPowerlinesAttachment {
	struct TSoftObjectPtr<struct AProceduralPowerlinesActor> OtherActor; // 0x00(0x28)
	struct TMap<struct FName, struct FPowerlinesCable> Cables; // 0x28(0x50)
};

// ScriptStruct MPG_ProcGen.PowerlinesCable
// Size: 0x0c (Inherited: 0x00)
struct FPowerlinesCable {
	struct FName Socket; // 0x00(0x08)
	bool bAttach; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MPG_ProcGen.ProceduralRawMesh
// Size: 0x10 (Inherited: 0x00)
struct FProceduralRawMesh {
	struct TArray<struct FProceduralRawMeshSection> MeshSections; // 0x00(0x10)
};

// ScriptStruct MPG_ProcGen.ProceduralRawMeshSection
// Size: 0x30 (Inherited: 0x00)
struct FProceduralRawMeshSection {
	struct TArray<struct FProceduralRawMeshVertex> Vertices; // 0x00(0x10)
	struct TArray<int32_t> Indices; // 0x10(0x10)
	struct UMaterialInterface* Material; // 0x20(0x08)
	char bVisible : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct MPG_ProcGen.ProceduralRawMeshVertex
// Size: 0x48 (Inherited: 0x00)
struct FProceduralRawMeshVertex {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Tangent; // 0x0c(0x0c)
	struct FVector Bitangent; // 0x18(0x0c)
	struct FVector Normal; // 0x24(0x0c)
	struct FColor Color; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FVector2D> TexCoords; // 0x38(0x10)
};

// ScriptStruct MPG_ProcGen.ProceduralStaticMeshParams
// Size: 0x78 (Inherited: 0x00)
struct FProceduralStaticMeshParams {
	struct FProceduralMeshConstructionSettings ConstructionSettings; // 0x00(0x58)
	char bGenerateMeshDistanceField : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UObject* Outer; // 0x60(0x08)
	struct FName Name; // 0x68(0x08)
	char bOptimizeMeshSections : 1; // 0x70(0x01)
	char bMakeUniqueName : 1; // 0x70(0x01)
	char bForceNewObject : 1; // 0x70(0x01)
	char pad_70_3 : 5; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct MPG_ProcGen.ProceduralMeshConstructionSettings
// Size: 0x58 (Inherited: 0x00)
struct FProceduralMeshConstructionSettings {
	struct FMeshBuildSettings BuildSettings; // 0x00(0x30)
	char bUseReduction : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FMeshReductionSettings ReductionSettings; // 0x34(0x24)
};

