// Class GamepadUMGPlugin.GamepadCursorSettings
// Size: 0x68 (Inherited: 0x38)
struct UGamepadCursorSettings : UDeveloperSettings {
	float MaxAnalogCursorSpeed; // 0x38(0x04)
	float CursorFrictionFactor; // 0x3c(0x04)
	float MinAnalogCursorSpeed; // 0x40(0x04)
	float AnalogCursorDeadZone; // 0x44(0x04)
	float AnalogCursorDragFactor; // 0x48(0x04)
	float AnalogCursorSize; // 0x4c(0x04)
	float RightStickScrollDeadzone; // 0x50(0x04)
	float RightStickScrollRate; // 0x54(0x04)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class GamepadUMGPlugin.VirtualCursorFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVirtualCursorFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsCursorOverInteractableWidget(); // Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	void EnableVirtualCursor(struct APlayerController* PC); // Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	void DisableVirtualCursor(struct APlayerController* PC); // Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
};

