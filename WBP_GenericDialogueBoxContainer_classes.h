// WidgetBlueprintGeneratedClass WBP_GenericDialogueBoxContainer.WBP_GenericDialogueBoxContainer_C
// Size: 0x4e0 (Inherited: 0x4b8)
struct UWBP_GenericDialogueBoxContainer_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* ContentFade; // 0x4c0(0x08)
	struct UNamedSlot* ContentSlot; // 0x4c8(0x08)
	struct FMulticastInlineDelegate ContentFadeAnimationFinished; // 0x4d0(0x10)

	void TriggerContentFade(bool FadeIn, float PlaybackSpeed); // Function WBP_GenericDialogueBoxContainer.WBP_GenericDialogueBoxContainer_C.TriggerContentFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void WidgetAnimationEvt_ContentFade_K2Node_WidgetAnimationEvent_1(); // Function WBP_GenericDialogueBoxContainer.WBP_GenericDialogueBoxContainer_C.WidgetAnimationEvt_ContentFade_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_GenericDialogueBoxContainer(int32_t EntryPoint); // Function WBP_GenericDialogueBoxContainer.WBP_GenericDialogueBoxContainer_C.ExecuteUbergraph_WBP_GenericDialogueBoxContainer // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
	void ContentFadeAnimationFinished__DelegateSignature(bool IsPlayingForward); // Function WBP_GenericDialogueBoxContainer.WBP_GenericDialogueBoxContainer_C.ContentFadeAnimationFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

