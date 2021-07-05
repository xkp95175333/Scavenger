// WidgetBlueprintGeneratedClass WBP_CursorMouse.WBP_CursorMouse_C
// Size: 0x550 (Inherited: 0x4b8)
struct UWBP_CursorMouse_C : US_UMGMouseCursor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* OnPress; // 0x4c0(0x08)
	struct UWidgetAnimation* HoverTransitionOut; // 0x4c8(0x08)
	struct UWidgetAnimation* HoverTransitionIn; // 0x4d0(0x08)
	struct UWidgetAnimation* Hover; // 0x4d8(0x08)
	struct UWidgetAnimation* Normal; // 0x4e0(0x08)
	struct UCanvasPanel* CursorCanvasPanel; // 0x4e8(0x08)
	struct UImage* CursorMouse_Base_Image; // 0x4f0(0x08)
	struct UImage* CursorMouse_Color_Image; // 0x4f8(0x08)
	struct UImage* CursorMouse_Hover_Image; // 0x500(0x08)
	struct UImage* Image_1; // 0x508(0x08)
	struct UImage* Image_Hovered; // 0x510(0x08)
	struct UCanvasPanel* MouseCanvasPanel; // 0x518(0x08)
	struct FTimerHandle ControllerUpdate; // 0x520(0x08)
	struct TSoftObjectPtr<struct APlayerController> SoftReferencePC; // 0x528(0x28)

	void WidgetAnimationEvt_HoverTransitionIn_K2Node_WidgetAnimationEvent_1(); // Function WBP_CursorMouse.WBP_CursorMouse_C.WidgetAnimationEvt_HoverTransitionIn_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCursorHoverIn_BP(); // Function WBP_CursorMouse.WBP_CursorMouse_C.NotifyCursorHoverIn_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCursorHoverOut_BP(); // Function WBP_CursorMouse.WBP_CursorMouse_C.NotifyCursorHoverOut_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCursorPressed_BP(); // Function WBP_CursorMouse.WBP_CursorMouse_C.NotifyCursorPressed_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCursorReleased_BP(); // Function WBP_CursorMouse.WBP_CursorMouse_C.NotifyCursorReleased_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyCursorInputTypeChanged_BP(bool bIsUsingGamepadInput); // Function WBP_CursorMouse.WBP_CursorMouse_C.NotifyCursorInputTypeChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_CursorMouse(int32_t EntryPoint); // Function WBP_CursorMouse.WBP_CursorMouse_C.ExecuteUbergraph_WBP_CursorMouse // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

