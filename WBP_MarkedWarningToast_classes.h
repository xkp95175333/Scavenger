// WidgetBlueprintGeneratedClass WBP_MarkedWarningToast.WBP_MarkedWarningToast_C
// Size: 0x508 (Inherited: 0x4b8)
struct UWBP_MarkedWarningToast_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* WidgetActivated; // 0x4c0(0x08)
	struct UImage* Border_Left_Image; // 0x4c8(0x08)
	struct UImage* Border_Middle_Image; // 0x4d0(0x08)
	struct UImage* Border_Right_Image; // 0x4d8(0x08)
	struct UImage* Fill_Left_Image_2; // 0x4e0(0x08)
	struct UImage* Fill_Middle_Image_2; // 0x4e8(0x08)
	struct UImage* Fill_Right_Image_2; // 0x4f0(0x08)
	struct UImage* MarkedIcon; // 0x4f8(0x08)
	struct US_RichTextBlock* YouAreMarkedText; // 0x500(0x08)

	void NotifyVisibilityChanged_BP(enum class ESlateVisibility newVisibility); // Function WBP_MarkedWarningToast.WBP_MarkedWarningToast_C.NotifyVisibilityChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_MarkedWarningToast(int32_t EntryPoint); // Function WBP_MarkedWarningToast.WBP_MarkedWarningToast_C.ExecuteUbergraph_WBP_MarkedWarningToast // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

