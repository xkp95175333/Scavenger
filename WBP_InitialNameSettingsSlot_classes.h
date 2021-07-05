// WidgetBlueprintGeneratedClass WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C
// Size: 0x629 (Inherited: 0x578)
struct UWBP_InitialNameSettingsSlot_C : US_WidgetInitialNameSettingsSlot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)
	struct UBorder* Border_3; // 0x580(0x08)
	struct UHorizontalBox* HorizontalBox_79; // 0x588(0x08)
	struct UTextBlock* TextLength; // 0x590(0x08)
	struct UImage* ValidIcon; // 0x598(0x08)
	struct FText OptionName; // 0x5a0(0x18)
	struct TArray<struct FText> MultiOptionNames; // 0x5b8(0x10)
	struct FMulticastInlineDelegate OptionChanged; // 0x5c8(0x10)
	struct FText RichTextFormat; // 0x5d8(0x18)
	bool Indent; // 0x5f0(0x01)
	char pad_5F1[0x7]; // 0x5f1(0x07)
	struct FString TempString; // 0x5f8(0x10)
	struct FMulticastInlineDelegate EditingInProgress; // 0x608(0x10)
	struct FMulticastInlineDelegate TextEdited; // 0x618(0x10)
	bool IsEditingName; // 0x628(0x01)

	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void ValidEntry(); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.ValidEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void InvalidEntry(); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.InvalidEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void EditLoadout(); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.EditLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void Construct(); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__ButtonOverlay_K2Node_ComponentBoundEvent_0_S_OnHandleButtonInteraction__DelegateSignature(struct US_WidgetCommonScavengerButton* Button); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.BndEvt__ButtonOverlay_K2Node_ComponentBoundEvent_0_S_OnHandleButtonInteraction__DelegateSignature // (BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__NameTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xffff800928d00000
	void BndEvt__NameTextBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xffff800928d00000
	void RetainFocus(); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.RetainFocus // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void ChooseClass(); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.ChooseClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void SelectSession(int32_t SessionIndex); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.SelectSession // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void GiveFocusToTextBox(); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.GiveFocusToTextBox // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_InitialNameSettingsSlot(int32_t EntryPoint); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.ExecuteUbergraph_WBP_InitialNameSettingsSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
	void TextEdited__DelegateSignature(bool TextNotEmpty); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.TextEdited__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void EditingInProgress__DelegateSignature(bool isEditingInProgress); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.EditingInProgress__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void OptionChanged__DelegateSignature(struct FText OptionText); // Function WBP_InitialNameSettingsSlot.WBP_InitialNameSettingsSlot_C.OptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
};

