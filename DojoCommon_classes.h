// Class DojoCommon.DojoCommonFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDojoCommonFunctionLibrary : UBlueprintFunctionLibrary {

	void SetDojoActorLabel(struct AActor* Actor, struct FString Name); // Function DojoCommon.DojoCommonFunctionLibrary.SetDojoActorLabel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xffff8008e4a10000
	struct TMap<struct FName, SoftClassProperty> GetDojoWidgetClassMap(); // Function DojoCommon.DojoCommonFunctionLibrary.GetDojoWidgetClassMap // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	SoftClassProperty GetDojoStateMachineClass(); // Function DojoCommon.DojoCommonFunctionLibrary.GetDojoStateMachineClass // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	SoftClassProperty GetDojoObjectiveEntryClass(); // Function DojoCommon.DojoCommonFunctionLibrary.GetDojoObjectiveEntryClass // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	SoftClassProperty GetDojoObjectiveContainerClass(); // Function DojoCommon.DojoCommonFunctionLibrary.GetDojoObjectiveContainerClass // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
	SoftClassProperty GetDojoManagerClass(); // Function DojoCommon.DojoCommonFunctionLibrary.GetDojoManagerClass // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xffff8008e4a10000
};

// Class DojoCommon.DojoCommonSettings
// Size: 0x130 (Inherited: 0x28)
struct UDojoCommonSettings : UObject {
	struct FSoftClassPath EditorWidgetClass; // 0x28(0x18)
	SoftClassProperty ManagerClass; // 0x40(0x28)
	SoftClassProperty StateMachineClass; // 0x68(0x28)
	SoftClassProperty ObjectiveContainerClass; // 0x90(0x28)
	SoftClassProperty ObjectiveEntryClass; // 0xb8(0x28)
	struct TMap<struct FName, SoftClassProperty> CustomWidgetClassMap; // 0xe0(0x50)
};

