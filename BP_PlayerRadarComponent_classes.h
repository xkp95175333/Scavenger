// BlueprintGeneratedClass BP_PlayerRadarComponent.BP_PlayerRadarComponent_C
// Size: 0x409 (Inherited: 0x338)
struct UBP_PlayerRadarComponent_C : US_PlayerRadarComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct FS_KRADLEnemyInfo ChampionKRADLEnemyInfo; // 0x340(0x40)
	struct FS_KRADLEnemyInfo outEnemyInfo; // 0x380(0x40)
	struct AActor* EnemyToTrack; // 0x3c0(0x08)
	int32_t Owner Team; // 0x3c8(0x04)
	struct FVector ScanningPlayerLocation; // 0x3cc(0x0c)
	struct AActor* OwnerCharacter; // 0x3d8(0x08)
	float ClosestEnemyDist; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct AActor* ClosestEnemy; // 0x3e8(0x08)
	bool TrackingEnabled; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct TArray<int32_t> Top3TeamIndexes; // 0x3f8(0x10)
	bool DoesModeSupportRadar; // 0x408(0x01)

	void TopTeamsTracking(); // Function BP_PlayerRadarComponent.BP_PlayerRadarComponent_C.TopTeamsTracking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool IsVisibleToKRADLScan(); // Function BP_PlayerRadarComponent.BP_PlayerRadarComponent_C.IsVisibleToKRADLScan // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void FindNearestEnemy(); // Function BP_PlayerRadarComponent.BP_PlayerRadarComponent_C.FindNearestEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool OnAddEnemyInfo(struct FS_KRADLEnemyInfo inEnemyInfo, struct FS_KRADLEnemyInfo outEnemyInfo); // Function BP_PlayerRadarComponent.BP_PlayerRadarComponent_C.OnAddEnemyInfo // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnRadarFoundEnemy Event(struct FS_KRADLEnemyInfo EnemyInfo); // Function BP_PlayerRadarComponent.BP_PlayerRadarComponent_C.OnRadarFoundEnemy Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_PlayerRadarComponent(int32_t EntryPoint); // Function BP_PlayerRadarComponent.BP_PlayerRadarComponent_C.ExecuteUbergraph_BP_PlayerRadarComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

