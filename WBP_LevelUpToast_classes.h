// WidgetBlueprintGeneratedClass WBP_LevelUpToast.WBP_LevelUpToast_C
// Size: 0x4f0 (Inherited: 0x4b8)
struct UWBP_LevelUpToast_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* LEVELUPANIM; // 0x4c0(0x08)
	struct US_RichTextBlock* Level; // 0x4c8(0x08)
	struct US_RichTextBlock* LevelUp; // 0x4d0(0x08)
	struct UImage* LongSeperator; // 0x4d8(0x08)
	struct UEditableTextBox* NewVar_1; // 0x4e0(0x08)
	struct UWidgetAnimation* NewVar_2; // 0x4e8(0x08)

	void BP_HandleOnLevelUp(int32_t NewExperienceLevel); // Function WBP_LevelUpToast.WBP_LevelUpToast_C.BP_HandleOnLevelUp // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyConstructed_BP(); // Function WBP_LevelUpToast.WBP_LevelUpToast_C.NotifyConstructed_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function WBP_LevelUpToast.WBP_LevelUpToast_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_LevelUpToast(int32_t EntryPoint); // Function WBP_LevelUpToast.WBP_LevelUpToast_C.ExecuteUbergraph_WBP_LevelUpToast // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

