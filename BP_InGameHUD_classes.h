// BlueprintGeneratedClass BP_InGameHUD.BP_InGameHUD_C
// Size: 0x60d (Inherited: 0x5f0)
struct ABP_InGameHUD_C : AS_HUDSession {
	struct USceneComponent* DefaultSceneRoot; // 0x5f0(0x08)
	struct TArray<struct FLinearColor> WindColors; // 0x5f8(0x10)
	float MaximumWindForce; // 0x608(0x04)
	bool bMPH; // 0x60c(0x01)

	void GetWindUnits(struct FText UnitType); // Function BP_InGameHUD.BP_InGameHUD_C.GetWindUnits // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetWindDirection(float Direction, struct FText DirectionText); // Function BP_InGameHUD.BP_InGameHUD_C.GetWindDirection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetWindForceUnits(float Force, int32_t ForceUnits); // Function BP_InGameHUD.BP_InGameHUD_C.GetWindForceUnits // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetWindColor(float Force, struct FLinearColor ForceColor, float ForceSpeed); // Function BP_InGameHUD.BP_InGameHUD_C.GetWindColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

