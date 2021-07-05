// BlueprintGeneratedClass BP_InspectorAdminPawn.BP_InspectorAdminPawn_C
// Size: 0x320 (Inherited: 0x310)
struct ABP_InspectorAdminPawn_C : ASpectatorPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UWBP_InspectorAdmin_C* GUI; // 0x318(0x08)

	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_InspectorAdminPawn.BP_InspectorAdminPawn_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_InspectorAdminPawn.BP_InspectorAdminPawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_InspectorAdminPawn.BP_InspectorAdminPawn_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_InspectorAdminPawn(int32_t EntryPoint); // Function BP_InspectorAdminPawn.BP_InspectorAdminPawn_C.ExecuteUbergraph_BP_InspectorAdminPawn // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

