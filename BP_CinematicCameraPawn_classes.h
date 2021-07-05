// BlueprintGeneratedClass BP_CinematicCameraPawn.BP_CinematicCameraPawn_C
// Size: 0x42c (Inherited: 0x3e8)
struct ABP_CinematicCameraPawn_C : AS_CinematicSpectatorPlayerPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	float RollResetDelay; // 0x3f0(0x04)
	bool RollLeftPressed; // 0x3f4(0x01)
	bool RollRightPressed; // 0x3f5(0x01)
	bool ResettingRoll; // 0x3f6(0x01)
	bool IsHUDVisible; // 0x3f7(0x01)
	float CurrentSetting_ChangeDirection; // 0x3f8(0x04)
	bool CurrentSetting_UpPressed; // 0x3fc(0x01)
	bool CurrentSetting_DownPressed; // 0x3fd(0x01)
	bool CurrentSetting_IsScalar; // 0x3fe(0x01)
	char pad_3FF[0x1]; // 0x3ff(0x01)
	float Setting1_ChangeDirection; // 0x400(0x04)
	bool Setting1_UpPressed; // 0x404(0x01)
	bool Setting1_DownPressed; // 0x405(0x01)
	bool RemappingSetting1; // 0x406(0x01)
	bool Setting1_IsScalar; // 0x407(0x01)
	float Setting2_ChangeDirection; // 0x408(0x04)
	bool Setting2_UpPressed; // 0x40c(0x01)
	bool Setting2_DownPressed; // 0x40d(0x01)
	bool RemappingSetting2; // 0x40e(0x01)
	bool Setting2_IsScalar; // 0x40f(0x01)
	float AxisLockX; // 0x410(0x04)
	float AxisLockY; // 0x414(0x04)
	float AxisLockZ; // 0x418(0x04)
	bool LockingX; // 0x41c(0x01)
	bool LockingY; // 0x41d(0x01)
	bool LockingZ; // 0x41e(0x01)
	char pad_41F[0x1]; // 0x41f(0x01)
	struct FVector PrevTrackedActorLoc; // 0x420(0x0c)

	void LockMovementAxis(); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.LockMovementAxis // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateNonScalarSetting(enum class ES_SettingCategory SettingCategory, int32_t SettingIndex, int32_t change); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.UpdateNonScalarSetting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateSetting(bool UpdateCondition, float SettingChangeDirection, enum class ES_SettingCategory SettingCategory, int32_t SettingIndex); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.UpdateSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreProcessOrientationInput(float Axis, float ProcessedAxis); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.PreProcessOrientationInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ApplyDeadZone(float Axis, float DeadZone, float AxisOut); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.ApplyDeadZone // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetAxisDirection(float Axis, float Direction); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.GetAxisDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateWorldTimeSettings(); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.UpdateWorldTimeSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateLensSettings(); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.UpdateLensSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateLookSettings(); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.UpdateLookSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateMovementSettings(); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.UpdateMovementSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SyncHUDVisibility(struct US_UMGHUD* HUD); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.SyncHUDVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_ToggleUI_K2Node_InputActionEvent_20(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_ToggleUI_K2Node_InputActionEvent_20 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_MenuLeft_K2Node_InputActionEvent_19(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_MenuLeft_K2Node_InputActionEvent_19 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_MenuLeft_K2Node_InputActionEvent_18(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_MenuLeft_K2Node_InputActionEvent_18 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_MenuRight_K2Node_InputActionEvent_17(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_MenuRight_K2Node_InputActionEvent_17 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_MenuRight_K2Node_InputActionEvent_16(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_MenuRight_K2Node_InputActionEvent_16 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_RollRight_K2Node_InputActionEvent_15(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_RollRight_K2Node_InputActionEvent_15 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_RollRight_K2Node_InputActionEvent_14(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_RollRight_K2Node_InputActionEvent_14 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_Setting1_Up_K2Node_InputActionEvent_13(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_Setting1_Up_K2Node_InputActionEvent_13 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_Setting1_Up_K2Node_InputActionEvent_12(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_Setting1_Up_K2Node_InputActionEvent_12 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_Setting1_Down_K2Node_InputActionEvent_11(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_Setting1_Down_K2Node_InputActionEvent_11 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_Setting1_Down_K2Node_InputActionEvent_10(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_Setting1_Down_K2Node_InputActionEvent_10 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_Setting2_Up_K2Node_InputActionEvent_9(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_Setting2_Up_K2Node_InputActionEvent_9 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_Setting2_Up_K2Node_InputActionEvent_8(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_Setting2_Up_K2Node_InputActionEvent_8 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_Setting2_Down_K2Node_InputActionEvent_7(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_Setting2_Down_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_Setting2_Down_K2Node_InputActionEvent_6(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_Setting2_Down_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_MenuUp_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_MenuUp_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_MenuDown_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_MenuDown_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_RollLeft_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_RollLeft_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_RollLeft_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_RollLeft_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpActEvt_CineCam_ToggleFollowTarget_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpActEvt_CineCam_ToggleFollowTarget_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpAxisEvt_CineCam_MoveForward_K2Node_InputAxisEvent_5(float AxisValue); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpAxisEvt_CineCam_MoveForward_K2Node_InputAxisEvent_5 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpAxisEvt_CineCam_MoveRight_K2Node_InputAxisEvent_1(float AxisValue); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpAxisEvt_CineCam_MoveRight_K2Node_InputAxisEvent_1 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpAxisEvt_CineCam_MoveUp_K2Node_InputAxisEvent_3(float AxisValue); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpAxisEvt_CineCam_MoveUp_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpAxisEvt_CineCam_Turn_K2Node_InputAxisEvent_4(float AxisValue); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpAxisEvt_CineCam_Turn_K2Node_InputAxisEvent_4 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpAxisEvt_CineCam_LookUp_K2Node_InputAxisEvent_6(float AxisValue); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpAxisEvt_CineCam_LookUp_K2Node_InputAxisEvent_6 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void InpAxisEvt_CineCam_Roll_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.InpAxisEvt_CineCam_Roll_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateServerPos(); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.UpdateServerPos // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Server_SetPosition(struct FVector Position, struct FRotator Rotation); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.Server_SetPosition // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_CinematicCameraPawn(int32_t EntryPoint); // Function BP_CinematicCameraPawn.BP_CinematicCameraPawn_C.ExecuteUbergraph_BP_CinematicCameraPawn // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

