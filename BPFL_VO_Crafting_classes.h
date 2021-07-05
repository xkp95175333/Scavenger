// BlueprintGeneratedClass BPFL_VO_Crafting.BPFL_VO_Crafting_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFL_VO_Crafting_C : UBlueprintFunctionLibrary {

	void VO_Crafting_Blocked_Busy(struct AS_CharacterBase* Speaker, struct UObject* __WorldContext); // Function BPFL_VO_Crafting.BPFL_VO_Crafting_C.VO_Crafting_Blocked_Busy // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Crafting_Blocked_NotEnoughScrap(struct AS_CharacterBase* Speaker, struct UObject* __WorldContext); // Function BPFL_VO_Crafting.BPFL_VO_Crafting_C.VO_Crafting_Blocked_NotEnoughScrap // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Crafting_Blocked_LevelTooLow(struct AS_CharacterBase* Speaker, struct UObject* __WorldContext); // Function BPFL_VO_Crafting.BPFL_VO_Crafting_C.VO_Crafting_Blocked_LevelTooLow // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Crafting_Complete(struct AS_CharacterBase* Speaker, struct FS_RecipeMetadata RecipeMetadata, struct UObject* __WorldContext); // Function BPFL_VO_Crafting.BPFL_VO_Crafting_C.VO_Crafting_Complete // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Crafting_Begin(struct AS_CharacterBase* Speaker, struct FS_RecipeMetadata RecipeMetadata, struct UObject* __WorldContext); // Function BPFL_VO_Crafting.BPFL_VO_Crafting_C.VO_Crafting_Begin // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VOHelper_GetRecipeContext(struct FS_RecipeMetadata RecipeMetadata, struct UObject* __WorldContext, struct FS_DialogueContext RecipeContext); // Function BPFL_VO_Crafting.BPFL_VO_Crafting_C.VOHelper_GetRecipeContext // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
};

