// WidgetBlueprintGeneratedClass WBP_PlatformUserContext.WBP_PlatformUserContext_C
// Size: 0x280 (Inherited: 0x270)
struct UWBP_PlatformUserContext_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct URichTextBlock* MessageString; // 0x278(0x08)

	void Construct(); // Function WBP_PlatformUserContext.WBP_PlatformUserContext_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff800928d00000
	void OnLoggedInUserChanged(int32_t localUserId); // Function WBP_PlatformUserContext.WBP_PlatformUserContext_C.OnLoggedInUserChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xffff800928d00000
	void ExecuteUbergraph_WBP_PlatformUserContext(int32_t EntryPoint); // Function WBP_PlatformUserContext.WBP_PlatformUserContext_C.ExecuteUbergraph_WBP_PlatformUserContext // (Final|UbergraphFunction|HasDefaults) // @ game+0xffff800928d00000
};

