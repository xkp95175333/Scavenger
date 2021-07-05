// BlueprintGeneratedClass BP_CameraEffects.BP_CameraEffects_C
// Size: 0x4a8 (Inherited: 0x330)
struct ABP_CameraEffects_C : AS_CameraEffectsSystem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UPostProcessComponent* SpectatePostProcess; // 0x338(0x08)
	struct UStaticMeshComponent* SM_DirectionalDamage_Blood; // 0x340(0x08)
	struct UPostProcessComponent* PostProcess; // 0x348(0x08)
	struct UStaticMeshComponent* SM_StormSphere; // 0x350(0x08)
	float Timeline_1_NewTrack_0_2FDEA26C4873CDC4BF0F06B78546F42D; // 0x358(0x04)
	enum class ETimelineDirection Timeline_1__Direction_2FDEA26C4873CDC4BF0F06B78546F42D; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x360(0x08)
	float Enter_Storm_Darken_Focal_Distance_0FF7B4934D7DB0694A41F098F0F68811; // 0x368(0x04)
	float Enter_Storm_Darken_ExposureMultiply_0FF7B4934D7DB0694A41F098F0F68811; // 0x36c(0x04)
	enum class ETimelineDirection Enter_Storm_Darken__Direction_0FF7B4934D7DB0694A41F098F0F68811; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UTimelineComponent* Enter Storm Darken; // 0x378(0x08)
	float Exit_Storm_Lighten_Focal_Distance_F11EBB7743B4AA519B8086AAD95C778E; // 0x380(0x04)
	float Exit_Storm_Lighten_Exposure_Multiply_F11EBB7743B4AA519B8086AAD95C778E; // 0x384(0x04)
	enum class ETimelineDirection Exit_Storm_Lighten__Direction_F11EBB7743B4AA519B8086AAD95C778E; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UTimelineComponent* Exit Storm Lighten; // 0x390(0x08)
	bool IsUnderCeiling; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	float WispyFogGeneratorRingSize; // 0x39c(0x04)
	struct UMaterialInstanceDynamic* MI_StormOverlay; // 0x3a0(0x08)
	float StormOverlayOpacity; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct UCurveLinearColor* Storm Overlay Color Curve; // 0x3b0(0x08)
	float TargetIndoorAOIntensity; // 0x3b8(0x04)
	float TargetOutdoorAOIntensity; // 0x3bc(0x04)
	float TargetOutdoorExposure_Day; // 0x3c0(0x04)
	float TargetOutdoorExposure_Night; // 0x3c4(0x04)
	bool printDebugInfo; // 0x3c8(0x01)
	bool HasBeenInStormPost; // 0x3c9(0x01)
	char pad_3CA[0x6]; // 0x3ca(0x06)
	struct UCurveFloat* Exposurecontrolfordayandnight; // 0x3d0(0x08)
	struct TArray<int32_t> Storm IDs; // 0x3d8(0x10)
	struct UCurveFloat* Time of Day Multiplier; // 0x3e8(0x08)
	bool DesiredDOFState; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float DOFTimer; // 0x3f4(0x04)
	float DOFFadeTime; // 0x3f8(0x04)
	float DOFApertureMin; // 0x3fc(0x04)
	float DOFApertureMax; // 0x400(0x04)
	float DOFFocalLength; // 0x404(0x04)
	float DOFMinFocalLength; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct UCurveFloat* DOFTransitionCurve; // 0x410(0x08)
	struct US_SpringArmComponent* CameraStick; // 0x418(0x08)
	float Target Exposure Min; // 0x420(0x04)
	float WindSpinLerpValue; // 0x424(0x04)
	struct UCurveFloat* minexpcurve; // 0x428(0x08)
	float MaxExp Day; // 0x430(0x04)
	float MaxExpNight; // 0x434(0x04)
	struct UCurveFloat* Night Exterior Curve; // 0x438(0x08)
	float Target Exposure Max; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UCurveFloat* Night Interior Curve; // 0x448(0x08)
	struct UCurveFloat* Day Exterior Curve; // 0x450(0x08)
	struct UCurveFloat* Day Interior Curve; // 0x458(0x08)
	float Night Exterior Min Exp; // 0x460(0x04)
	float Night Exterior Max Exp; // 0x464(0x04)
	float Day Exterior Min Exp; // 0x468(0x04)
	float Day Exterior Max Exp; // 0x46c(0x04)
	float Day Interior Max Exp; // 0x470(0x04)
	float Day Interior Min Exp; // 0x474(0x04)
	float Night Interior Max Exp; // 0x478(0x04)
	float Night Interior Min Exp; // 0x47c(0x04)
	float Storm Overlay Sheltered Lerp; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct UMaterialInstance* UberPostMaterialDefault; // 0x488(0x08)
	struct UMaterialInstance* UberPostMaterialFrost; // 0x490(0x08)
	struct UMaterialInstance* UberPostMaterialFrostHealth; // 0x498(0x08)
	struct UMaterialInstance* UberPostMaterialHealth; // 0x4a0(0x08)

	void InStormLightningOnCollision2(struct FDelegate InputPin); // Function BP_CameraEffects.BP_CameraEffects_C.InStormLightningOnCollision2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InStormLightningOnNoCollision2(struct FDelegate InputPin); // Function BP_CameraEffects.BP_CameraEffects_C.InStormLightningOnNoCollision2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void SetPostProcessMaterial(struct UMaterialInstance* Material); // Function BP_CameraEffects.BP_CameraEffects_C.SetPostProcessMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Get Pawn with Validation(int32_t Player Index, struct APawn* Valid Pawn, struct FVector Pawn Location, struct FVector Pawn Velocity); // Function BP_CameraEffects.BP_CameraEffects_C.Get Pawn with Validation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UpdateDOF(); // Function BP_CameraEffects.BP_CameraEffects_C.UpdateDOF // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetPawnFromLocalController0(struct APawn* PawnOut); // Function BP_CameraEffects.BP_CameraEffects_C.GetPawnFromLocalController0 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void UserConstructionScript(); // Function BP_CameraEffects.BP_CameraEffects_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Timeline_1__FinishedFunc(); // Function BP_CameraEffects.BP_CameraEffects_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Timeline_1__UpdateFunc(); // Function BP_CameraEffects.BP_CameraEffects_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Exit Storm Lighten__FinishedFunc(); // Function BP_CameraEffects.BP_CameraEffects_C.Exit Storm Lighten__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Exit Storm Lighten__UpdateFunc(); // Function BP_CameraEffects.BP_CameraEffects_C.Exit Storm Lighten__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Enter Storm Darken__FinishedFunc(); // Function BP_CameraEffects.BP_CameraEffects_C.Enter Storm Darken__FinishedFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void Enter Storm Darken__UpdateFunc(); // Function BP_CameraEffects.BP_CameraEffects_C.Enter Storm Darken__UpdateFunc // (BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveTick(float DeltaSeconds); // Function BP_CameraEffects.BP_CameraEffects_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Exited Storm(); // Function BP_CameraEffects.BP_CameraEffects_C.Exited Storm // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void Entered Storm(); // Function BP_CameraEffects.BP_CameraEffects_C.Entered Storm // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InStormLightningOnNoCollision(); // Function BP_CameraEffects.BP_CameraEffects_C.InStormLightningOnNoCollision // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void InStormLightningOnCollision(); // Function BP_CameraEffects.BP_CameraEffects_C.InStormLightningOnCollision // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void In Shelter Changed(bool isInShelter); // Function BP_CameraEffects.BP_CameraEffects_C.In Shelter Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void In Storm Changed(bool isInStorm); // Function BP_CameraEffects.BP_CameraEffects_C.In Storm Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ReceiveBeginPlay(); // Function BP_CameraEffects.BP_CameraEffects_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_BP_CameraEffects(int32_t EntryPoint); // Function BP_CameraEffects.BP_CameraEffects_C.ExecuteUbergraph_BP_CameraEffects // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff8008e4a10000
};

