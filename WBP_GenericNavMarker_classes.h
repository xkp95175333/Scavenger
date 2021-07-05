// WidgetBlueprintGeneratedClass WBP_GenericNavMarker.WBP_GenericNavMarker_C
// Size: 0x619 (Inherited: 0x5c0)
struct UWBP_GenericNavMarker_C : US_WidgetWaypoint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct TMap<enum class ES_AutoPingType, struct UTexture2D*> WaypointImageMap; // 0x5c8(0x50)
	enum class ES_AutoPingType CurrentWaypointType; // 0x618(0x01)

	void SetGenericWaypointType(enum class ES_AutoPingType CurrentWaypointType); // Function WBP_GenericNavMarker.WBP_GenericNavMarker_C.SetGenericWaypointType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void PreConstruct(bool IsDesignTime); // Function WBP_GenericNavMarker.WBP_GenericNavMarker_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void HandleAutoPingTypeSet_BP(enum class ES_AutoPingType oldAutoPingType, enum class ES_AutoPingType newAutoPingType); // Function WBP_GenericNavMarker.WBP_GenericNavMarker_C.HandleAutoPingTypeSet_BP // (Event|Public|BlueprintEvent) // @ game+0xffff8008e4a10000
	void ExecuteUbergraph_WBP_GenericNavMarker(int32_t EntryPoint); // Function WBP_GenericNavMarker.WBP_GenericNavMarker_C.ExecuteUbergraph_WBP_GenericNavMarker // (Final|UbergraphFunction) // @ game+0xffff8008e4a10000
};

