// BlueprintGeneratedClass BP_ChallengeStatisticsProcessor.BP_ChallengeStatisticsProcessor_C
// Size: 0xe0 (Inherited: 0x98)
struct UBP_ChallengeStatisticsProcessor_C : US_ChallengeStatisticsProcessor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FS_ItemState Item State; // 0xa0(0x40)

	void OnItemCraftedByPlayer(int32_t RecipeIndex, struct FS_RecipeMetadata RecipeMetadata); // Function BP_ChallengeStatisticsProcessor.BP_ChallengeStatisticsProcessor_C.OnItemCraftedByPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetupCraftingCallbacks(struct AS_PlayerController* PlayerController); // Function BP_ChallengeStatisticsProcessor.BP_ChallengeStatisticsProcessor_C.SetupCraftingCallbacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnItemUsedByPlayer(struct FS_ItemState ItemState); // Function BP_ChallengeStatisticsProcessor.BP_ChallengeStatisticsProcessor_C.OnItemUsedByPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetupCallbacks_BP(struct AS_PlayerController* PlayerController); // Function BP_ChallengeStatisticsProcessor.BP_ChallengeStatisticsProcessor_C.SetupCallbacks_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_ChallengeStatisticsProcessor(int32_t EntryPoint); // Function BP_ChallengeStatisticsProcessor.BP_ChallengeStatisticsProcessor_C.ExecuteUbergraph_BP_ChallengeStatisticsProcessor // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

