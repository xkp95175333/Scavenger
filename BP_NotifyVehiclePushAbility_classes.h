// BlueprintGeneratedClass BP_NotifyVehiclePushAbility.BP_NotifyVehiclePushAbility_C
// Size: 0x50 (Inherited: 0x40)
struct UBP_NotifyVehiclePushAbility_C : US_AnimNotifyBase {
	struct FMulticastInlineDelegate EventPushVehicle; // 0x40(0x10)

	void Pushit(); // Function BP_NotifyVehiclePushAbility.BP_NotifyVehiclePushAbility_C.Pushit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function BP_NotifyVehiclePushAbility.BP_NotifyVehiclePushAbility_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xffff8008e4a10000
	void EventPushVehicle__DelegateSignature(); // Function BP_NotifyVehiclePushAbility.BP_NotifyVehiclePushAbility_C.EventPushVehicle__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

