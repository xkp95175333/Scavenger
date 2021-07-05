// BlueprintGeneratedClass BP_GenericLocationVolume.BP_GenericLocationVolume_C
// Size: 0x2e8 (Inherited: 0x2b0)
struct ABP_GenericLocationVolume_C : AS_GenericLocationVolume {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UStaticMeshComponent* DisplaySphere; // 0x2b8(0x08)
	struct UBillboardComponent* Billboard; // 0x2c0(0x08)
	struct USphereComponent* Sphere; // 0x2c8(0x08)
	bool bTriggerableVolume; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FName Banner Subtitle; // 0x2d4(0x08)
	enum class ES_LocationDifficultyTier Difficulty Rating; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct AS_AIOverlordActor* overlord; // 0x2e0(0x08)

	void GetIsCleared(); // Function BP_GenericLocationVolume.BP_GenericLocationVolume_C.GetIsCleared // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_GenericLocationVolume.BP_GenericLocationVolume_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_GenericLocationVolume.BP_GenericLocationVolume_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_GenericLocationVolume.BP_GenericLocationVolume_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_GenericLocationVolume(int32_t EntryPoint); // Function BP_GenericLocationVolume.BP_GenericLocationVolume_C.ExecuteUbergraph_BP_GenericLocationVolume // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

