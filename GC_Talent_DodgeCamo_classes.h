// BlueprintGeneratedClass GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C
// Size: 0x3a8 (Inherited: 0x2e8)
struct AGC_Talent_DodgeCamo_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f0(0x08)
	float Timeline_1_NewTrack_0_8373BFE542FA807D31189EB694782DB8; // 0x2f8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_8373BFE542FA807D31189EB694782DB8; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UTimelineComponent* Timeline_2; // 0x300(0x08)
	float Timeline_0_NewTrack_0_AE0BB58D4223C72538285BB7B641B238; // 0x308(0x04)
	enum class ETimelineDirection Timeline_0__Direction_AE0BB58D4223C72538285BB7B641B238; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x310(0x08)
	struct UMaterialInterface* Camo Material; // 0x318(0x08)
	struct FName PostProcessName; // 0x320(0x08)
	struct USceneComponent* TargetRootComponent; // 0x328(0x08)
	struct TArray<int32_t> SkinIds; // 0x330(0x10)
	struct US_VFXManagerComponent* VFX Manager; // 0x340(0x08)
	struct AS_PlayerCharacter* S_PlayerChar; // 0x348(0x08)
	struct ABP_PlayerCharacter_C* PlayerChar; // 0x350(0x08)
	float Activate Duration; // 0x358(0x04)
	float Deactivate Duration; // 0x35c(0x04)
	struct UMaterialInstanceDynamic* ShellMID; // 0x360(0x08)
	struct UMaterialInstanceDynamic* Status Effect MID; // 0x368(0x08)
	struct AActor* My Target; // 0x370(0x08)
	enum class EGameplayCueEvent Event Type; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	int32_t Shell ID; // 0x37c(0x04)
	int32_t Shell Id 2; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct FGameplayTagContainer Tag Container; // 0x388(0x20)

	void Spawn A Shell(float AnimationDuration, int32_t Shell ID); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.Spawn A Shell // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Create Skin for All Meshes(struct USceneComponent* SceneComponent, struct UMaterialInterface* Material, struct AS_PlayerCharacter* Player Character); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.Create Skin for All Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.OnRemove // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Timeline_0__FinishedFunc(); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Timeline_0__UpdateFunc(); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Timeline_1__FinishedFunc(); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Timeline_1__UpdateFunc(); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void CustomEvent(enum class ES_WeaponSlot weaponSlot, struct AS_WeaponBase* OldValue, struct AS_WeaponBase* NewValue); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnSkeletalMeshChanged(struct USkeletalMeshComponent* SkeletalMeshComponent, struct USkeletalMesh* OldSkeletalMesh, struct USkeletalMesh* NewSkeletalMesh); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.Event OnSkeletalMeshChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_GC_Talent_DodgeCamo(int32_t EntryPoint); // Function GC_Talent_DodgeCamo.GC_Talent_DodgeCamo_C.ExecuteUbergraph_GC_Talent_DodgeCamo // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

