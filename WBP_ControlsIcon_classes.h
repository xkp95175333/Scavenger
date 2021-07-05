// WidgetBlueprintGeneratedClass WBP_ControlsIcon.WBP_ControlsIcon_C
// Size: 0x538 (Inherited: 0x4b8)
struct UWBP_ControlsIcon_C : US_WidgetMinimal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct US_RichTextBlock* ControlRichText; // 0x4c0(0x08)
	struct UWBP_CommonKey_C* WBP_CommonKey_C_1; // 0x4c8(0x08)
	struct FText KeyboardAndMouseLabel; // 0x4d0(0x18)
	struct FText GamepadLabel; // 0x4e8(0x18)
	struct FText ActionText; // 0x500(0x18)
	bool usingGamepad; // 0x518(0x01)
	bool HideOnGamepad; // 0x519(0x01)
	enum class ES_GameInputActionType InputActionType; // 0x51a(0x01)
	char pad_51B[0x5]; // 0x51b(0x05)
	struct FText ControlsDescriptionStyle; // 0x520(0x18)

	void UpdateIcon(); // Function WBP_ControlsIcon.WBP_ControlsIcon_C.UpdateIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_ControlsIcon.WBP_ControlsIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Construct(); // Function WBP_ControlsIcon.WBP_ControlsIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnInputTypeChanged(bool bUsingGamepad); // Function WBP_ControlsIcon.WBP_ControlsIcon_C.OnInputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_ControlsIcon(int32_t EntryPoint); // Function WBP_ControlsIcon.WBP_ControlsIcon_C.ExecuteUbergraph_WBP_ControlsIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

