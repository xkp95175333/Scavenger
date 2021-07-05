// BlueprintGeneratedClass BP_PROJ_BowCompound_Base.BP_PROJ_BowCompound_Base_C
// Size: 0x4c4 (Inherited: 0x490)
struct ABP_PROJ_BowCompound_Base_C : ABP_PROJ_Bow_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float Time Elapsed; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct UCurveFloat* Homing Acceleration Curve; // 0x4a0(0x08)
	float StartingDistToTarget; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct AActor* HomingTarget; // 0x4b0(0x08)
	struct FRotator New Rotation; // 0x4b8(0x0c)

	void SetHomingTarget(struct AActor* Target Actor); // Function BP_PROJ_BowCompound_Base.BP_PROJ_BowCompound_Base_C.SetHomingTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_PROJ_BowCompound_Base.BP_PROJ_BowCompound_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_PROJ_BowCompound_Base.BP_PROJ_BowCompound_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PROJ_BowCompound_Base(int32_t EntryPoint); // Function BP_PROJ_BowCompound_Base.BP_PROJ_BowCompound_Base_C.ExecuteUbergraph_BP_PROJ_BowCompound_Base // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

