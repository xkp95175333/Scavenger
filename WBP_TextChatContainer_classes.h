// WidgetBlueprintGeneratedClass WBP_TextChatContainer.WBP_TextChatContainer_C
// Size: 0x650 (Inherited: 0x620)
struct UWBP_TextChatContainer_C : US_WidgetTextChatLineContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UBorder* ChatFeedBorder; // 0x628(0x08)
	struct FMulticastInlineDelegate TextChatActive; // 0x630(0x10)
	struct FMulticastInlineDelegate ChatMessageReceived; // 0x640(0x10)

	void SetBorderBrushAlpha(struct UBorder* Border, float Alpha); // Function WBP_TextChatContainer.WBP_TextChatContainer_C.SetBorderBrushAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_TextChatContainer.WBP_TextChatContainer_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyChatContainerOpacityChanged(float Opacity); // Function WBP_TextChatContainer.WBP_TextChatContainer_C.NotifyChatContainerOpacityChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void NotifyChatFocusChanged(bool isInFocus); // Function WBP_TextChatContainer.WBP_TextChatContainer_C.NotifyChatFocusChanged // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_TextChatContainer.WBP_TextChatContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Event OnTextChatMessageReceived(struct FS_ReceivedTextChatMessage Message); // Function WBP_TextChatContainer.WBP_TextChatContainer_C.Event OnTextChatMessageReceived // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_TextChatContainer(int32_t EntryPoint); // Function WBP_TextChatContainer.WBP_TextChatContainer_C.ExecuteUbergraph_WBP_TextChatContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
	void ChatMessageReceived__DelegateSignature(); // Function WBP_TextChatContainer.WBP_TextChatContainer_C.ChatMessageReceived__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TextChatActive__DelegateSignature(); // Function WBP_TextChatContainer.WBP_TextChatContainer_C.TextChatActive__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

