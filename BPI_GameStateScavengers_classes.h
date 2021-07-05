// BlueprintGeneratedClass BPI_GameStateScavengers.BPI_GameStateScavengers_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_GameStateScavengers_C : UInterface {

	void GetClearedText_BPI(struct FName locdText); // Function BPI_GameStateScavengers.BPI_GameStateScavengers_C.GetClearedText_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetBannerData_BPI(struct FName Subtitle, enum class ES_LocationDifficultyTier Diff); // Function BPI_GameStateScavengers.BPI_GameStateScavengers_C.GetBannerData_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetPlayerStatusEffects(struct UBP_PlayerStatusEffects_C* PlayerStatusEffects); // Function BPI_GameStateScavengers.BPI_GameStateScavengers_C.GetPlayerStatusEffects // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void TutorializedCold_BPI(struct AS_PlayerController* TutorializedPlayer); // Function BPI_GameStateScavengers.BPI_GameStateScavengers_C.TutorializedCold_BPI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void GetGradListCold_BPI(struct TArray<struct AS_PlayerController*> ColdGrads); // Function BPI_GameStateScavengers.BPI_GameStateScavengers_C.GetGradListCold_BPI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

