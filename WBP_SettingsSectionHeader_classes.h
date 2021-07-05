// WidgetBlueprintGeneratedClass WBP_SettingsSectionHeader.WBP_SettingsSectionHeader_C
// Size: 0x5b0 (Inherited: 0x558)
struct UWBP_SettingsSectionHeader_C : US_WidgetGenericSettingsSlot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UImage* DivLineImage; // 0x560(0x08)
	struct US_RichTextBlock* OptionRichText; // 0x568(0x08)
	struct FText OptionName; // 0x570(0x18)
	struct FMulticastInlineDelegate BarUpdated; // 0x588(0x10)
	struct FText richTextLabel; // 0x598(0x18)

	void PreConstruct(bool IsDesignTime); // Function WBP_SettingsSectionHeader.WBP_SettingsSectionHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SettingsSectionHeader(int32_t EntryPoint); // Function WBP_SettingsSectionHeader.WBP_SettingsSectionHeader_C.ExecuteUbergraph_WBP_SettingsSectionHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void BarUpdated__DelegateSignature(float NewPercent); // Function WBP_SettingsSectionHeader.WBP_SettingsSectionHeader_C.BarUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

