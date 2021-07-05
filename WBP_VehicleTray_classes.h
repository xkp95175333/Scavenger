// WidgetBlueprintGeneratedClass WBP_VehicleTray.WBP_VehicleTray_C
// Size: 0x8d0 (Inherited: 0x848)
struct UWBP_VehicleTray_C : US_WidgetVehicleTray {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x848(0x08)
	struct UImage* HealthIcon; // 0x850(0x08)
	struct UImage* Image_1; // 0x858(0x08)
	struct UImage* Image_3635; // 0x860(0x08)
	struct UImage* Image_3636; // 0x868(0x08)
	struct UImage* Image_3637; // 0x870(0x08)
	struct UImage* Image_3638; // 0x878(0x08)
	struct UVerticalBox* OccupantNameplatesLeft; // 0x880(0x08)
	struct UVerticalBox* OccupantNameplatesRight; // 0x888(0x08)
	struct UUniformGridPanel* SeatGrid; // 0x890(0x08)
	struct UWBP_OccupantNameplate_C* WBP_OccupantNameplate; // 0x898(0x08)
	struct UWBP_OccupantNameplate_C* WBP_OccupantNameplate_5; // 0x8a0(0x08)
	struct UWBP_OccupantNameplate_C* WBP_OccupantNameplate_C_1; // 0x8a8(0x08)
	struct UWBP_OccupantNameplate_C* WBP_OccupantNameplate_C_2; // 0x8b0(0x08)
	float MediumPercentage; // 0x8b8(0x04)
	float LowPercentage; // 0x8bc(0x04)
	float CriticalPercentage; // 0x8c0(0x04)
	float Speed; // 0x8c4(0x04)
	struct AS_PlayerState* PlayerState; // 0x8c8(0x08)

	void UpdateOccupantAtIndex(int32_t WidgetIndex, int32_t seatIndex, struct UPanelWidget* Widget); // Function WBP_VehicleTray.WBP_VehicleTray_C.UpdateOccupantAtIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetTintModifiers(float ConsumableInput, float MediumPercentage, float LowPercentage, float CriticalPercentage, float TintValue); // Function WBP_VehicleTray.WBP_VehicleTray_C.GetTintModifiers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_VehicleTray.WBP_VehicleTray_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_VehicleTray(int32_t EntryPoint); // Function WBP_VehicleTray.WBP_VehicleTray_C.ExecuteUbergraph_WBP_VehicleTray // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

