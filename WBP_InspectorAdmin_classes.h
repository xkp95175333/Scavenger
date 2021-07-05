// WidgetBlueprintGeneratedClass WBP_InspectorAdmin.WBP_InspectorAdmin_C
// Size: 0x2f0 (Inherited: 0x270)
struct UWBP_InspectorAdmin_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UComboBoxString* ComboBoxString_292; // 0x278(0x08)
	struct UButton* Delete; // 0x280(0x08)
	struct UListView* EntityList; // 0x288(0x08)
	struct UBorder* HighlightEnd; // 0x290(0x08)
	struct UBorder* HighlightStart; // 0x298(0x08)
	struct UButton* Kick; // 0x2a0(0x08)
	struct UTextBlock* SelectedEntity; // 0x2a8(0x08)
	struct UTextBlock* SelectedEntity_4; // 0x2b0(0x08)
	struct UTextBlock* SelectedEntity_6; // 0x2b8(0x08)
	struct UTextBlock* SelectedEntity_7; // 0x2c0(0x08)
	struct UTextBlock* SelectedEntity_8; // 0x2c8(0x08)
	struct UBorder* Selection; // 0x2d0(0x08)
	struct UButton* show; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_3; // 0x2e0(0x08)
	struct AMorpheusActor* SelectedActor; // 0x2e8(0x08)

	struct FText GetActorListTitleText(); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.GetActorListTitleText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FText GetShowHideText(); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.GetShowHideText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FText GetVisibilityText(); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.GetVisibilityText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FText GetNetworkingLODText(); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.GetNetworkingLODText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FText GetRenderingLODText(); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.GetRenderingLODText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	enum class ESlateVisibility GetSelectionVisibility(); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.GetSelectionVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	struct FText GetSelectedText(); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.GetSelectedText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xffff8008e4a10000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Delete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.BndEvt__Delete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.BndEvt__Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Show_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.BndEvt__Show_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ListView_0_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.BndEvt__ListView_0_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__ComboBoxString_291_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.BndEvt__ComboBoxString_291_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_InspectorAdmin(int32_t EntryPoint); // Function WBP_InspectorAdmin.WBP_InspectorAdmin_C.ExecuteUbergraph_WBP_InspectorAdmin // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

