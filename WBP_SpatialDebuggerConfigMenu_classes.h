// WidgetBlueprintGeneratedClass WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C
// Size: 0x368 (Inherited: 0x278)
struct UWBP_SpatialDebuggerConfigMenu_C : USpatialDebuggerConfigUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UCheckBox* ActorNameToggle; // 0x280(0x08)
	struct UBorder* ActorNameVis; // 0x288(0x08)
	struct UCheckBox* AuthToggle; // 0x290(0x08)
	struct UBorder* AuthVis; // 0x298(0x08)
	struct UBorder* Border_65; // 0x2a0(0x08)
	struct UCheckBox* EntityIDToggle; // 0x2a8(0x08)
	struct UBorder* EntityIDVis; // 0x2b0(0x08)
	struct UCheckBox* HierarchyToggle; // 0x2b8(0x08)
	struct UImage* Image_91; // 0x2c0(0x08)
	struct UCheckBox* IntentToggle; // 0x2c8(0x08)
	struct UBorder* IntentVis; // 0x2d0(0x08)
	struct UCheckBox* LockToggle; // 0x2d8(0x08)
	struct UBorder* LockVis; // 0x2e0(0x08)
	struct UEditableTextBox* RangeInput; // 0x2e8(0x08)
	struct UImage* ShowAuthBoxIcon; // 0x2f0(0x08)
	struct UImage* ShowAuthIcon; // 0x2f8(0x08)
	struct UImage* ShowIntentBoxIcon; // 0x300(0x08)
	struct UImage* ShowIntentIcon; // 0x308(0x08)
	struct UComboBoxString* TagDrawModeDropdown; // 0x310(0x08)
	struct UTextBlock* TextBlock_8; // 0x318(0x08)
	struct UTextBlock* TextBlock_162; // 0x320(0x08)
	struct UButton* ToggleDebuggerButton; // 0x328(0x08)
	struct UButton* ToggleSelectActorsButton; // 0x330(0x08)
	struct UCheckBox* WorkerRegionsToggle; // 0x338(0x08)
	struct FText LastRangeText; // 0x340(0x18)
	struct FLinearColor InactiveTintColor; // 0x358(0x10)

	struct FText GetActorSelectedText(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.GetActorSelectedText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FEventReply ActorNameVis_OnMouseDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.ActorNameVis_OnMouseDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply EntityIDVis_OnMouseDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.EntityIDVis_OnMouseDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply IntentVis_OnMouseDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.IntentVis_OnMouseDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FEventReply AuthVis_OnMouseDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.AuthVis_OnMouseDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FLinearColor GetActorNameTint(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.GetActorNameTint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FLinearColor GetEntityIDTint(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.GetEntityIDTint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FLinearColor GetIntentTint(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.GetIntentTint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FLinearColor GetAuthTint(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.GetAuthTint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FLinearColor GetLockTint(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.GetLockTint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FEventReply LockVis_OnMouseDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.LockVis_OnMouseDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	struct FText GetRangeText(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.GetRangeText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FText GetEnabledText(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.GetEnabledText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void BndEvt__WorkerRegionsToggle_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__WorkerRegionsToggle_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__TagDrawModeDropdown_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__TagDrawModeDropdown_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__RangeInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__RangeInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__RangeInput_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__RangeInput_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__LockToggle_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__LockToggle_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__AuthToggle_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__AuthToggle_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__IntentToggle_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__IntentToggle_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__EntityIDToggle_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__EntityIDToggle_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ActorNameToggle_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__ActorNameToggle_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ToggleDebuggerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__ToggleDebuggerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void OnShow(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.OnShow // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__HierarchyToggle_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__HierarchyToggle_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ToggleDebuggerButton_1_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.BndEvt__ToggleDebuggerButton_1_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_SpatialDebuggerConfigMenu(int32_t EntryPoint); // Function WBP_SpatialDebuggerConfigMenu.WBP_SpatialDebuggerConfigMenu_C.ExecuteUbergraph_WBP_SpatialDebuggerConfigMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

