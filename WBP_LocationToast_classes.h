// WidgetBlueprintGeneratedClass WBP_LocationToast.WBP_LocationToast_C
// Size: 0x510 (Inherited: 0x4b8)
struct UWBP_LocationToast_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* DisplayToast; // 0x4c0(0x08)
	struct US_RichTextBlock* difficulty; // 0x4c8(0x08)
	struct UBorder* DifficultyBorder; // 0x4d0(0x08)
	struct UImage* Image_76; // 0x4d8(0x08)
	struct US_RichTextBlock* Location; // 0x4e0(0x08)
	float BufferTime; // 0x4e8(0x04)
	bool Triggered; // 0x4ec(0x01)
	char pad_4ED[0x3]; // 0x4ed(0x03)
	struct FText CurrentLocation; // 0x4f0(0x18)
	struct FName CurrentLocationName; // 0x508(0x08)

	void SetLocationData_ByMetaData(struct FS_NamedLocationMetadata LocationMetadata); // Function WBP_LocationToast.WBP_LocationToast_C.SetLocationData_ByMetaData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ResetTrigger(); // Function WBP_LocationToast.WBP_LocationToast_C.ResetTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetLocationData(struct FText LocationText, enum class ES_LocationType LocType, enum class ES_LocationDifficultyTier difficulty); // Function WBP_LocationToast.WBP_LocationToast_C.SetLocationData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function WBP_LocationToast.WBP_LocationToast_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_LocationToast(int32_t EntryPoint); // Function WBP_LocationToast.WBP_LocationToast_C.ExecuteUbergraph_WBP_LocationToast // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

