// WidgetBlueprintGeneratedClass WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C
// Size: 0x688 (Inherited: 0x640)
struct UWBP_CinematicCameraHUD_C : US_UMGCinematicCameraHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x640(0x08)
	struct UHorizontalBox* MappedToAB; // 0x648(0x08)
	struct UHorizontalBox* MappedToXY; // 0x650(0x08)
	struct UTextBlock* MenuActiveSetting; // 0x658(0x08)
	struct UTextBlock* NameOfTarget; // 0x660(0x08)
	struct UTextBlock* SettingPageName; // 0x668(0x08)
	struct UTextBlock* SettingValue; // 0x670(0x08)
	struct UScaleBox* TargetLockRoot; // 0x678(0x08)
	struct UWBP_Reticle_Dot_C* WBP_Reticle_Dot; // 0x680(0x08)

	struct FText GetNameOfTarget(); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.GetNameOfTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	enum class ESlateVisibility GetVisibilityOfTargetLock(); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.GetVisibilityOfTargetLock // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	enum class ESlateVisibility GetVisibilityOfMappedToXY(); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.GetVisibilityOfMappedToXY // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	enum class ESlateVisibility GetVisibilityOfMappedToAB(); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.GetVisibilityOfMappedToAB // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FSlateColor HighlightSetting(); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.HighlightSetting // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FSlateColor HighlightSettingCategory(); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.HighlightSettingCategory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FText GetSettingCategoryName(); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.GetSettingCategoryName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FText GetActiveSettingValue(); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.GetActiveSettingValue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FText GetActiveSettingName(); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.GetActiveSettingName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_CinematicCameraHUD(int32_t EntryPoint); // Function WBP_CinematicCameraHUD.WBP_CinematicCameraHUD_C.ExecuteUbergraph_WBP_CinematicCameraHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

