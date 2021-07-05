// WidgetBlueprintGeneratedClass WBP_SettingsNavBar.WBP_SettingsNavBar_C
// Size: 0xa28 (Inherited: 0x580)
struct UWBP_SettingsNavBar_C : US_WidgetNavBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWBP_TopNavBarButton_C* AudioButton; // 0x588(0x08)
	struct UWBP_TopNavBarButton_C* ControlsButton; // 0x590(0x08)
	struct UWBP_TopNavBarButton_C* GameplayButton; // 0x598(0x08)
	struct UWBP_TopNavBarButton_C* VideoButton; // 0x5a0(0x08)
	struct US_WidgetCommonScavengerButton* ActiveButton; // 0x5a8(0x08)
	struct FS_ButtonStyle NewVar_1; // 0x5b0(0x200)
	struct FButtonStyle NewVar_2; // 0x7b0(0x278)

	void Construct(); // Function WBP_SettingsNavBar.WBP_SettingsNavBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SettingsNavBar(int32_t EntryPoint); // Function WBP_SettingsNavBar.WBP_SettingsNavBar_C.ExecuteUbergraph_WBP_SettingsNavBar // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

