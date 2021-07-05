// BlueprintGeneratedClass BPFL_VO_Update.BPFL_VO_Update_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFL_VO_Update_C : UBlueprintFunctionLibrary {

	void VO_Update_Slowed(struct AS_CharacterBase* Speaker, struct UObject* __WorldContext); // Function BPFL_VO_Update.BPFL_VO_Update_C.VO_Update_Slowed // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Update_TimeRunningOut(struct UObject* __WorldContext); // Function BPFL_VO_Update.BPFL_VO_Update_C.VO_Update_TimeRunningOut // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Update_LastTeam(int32_t TeamIndex, struct UObject* __WorldContext); // Function BPFL_VO_Update.BPFL_VO_Update_C.VO_Update_LastTeam // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Update_LeadLost(int32_t TeamIndex, struct UObject* __WorldContext); // Function BPFL_VO_Update.BPFL_VO_Update_C.VO_Update_LeadLost // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Update_LeadingTeam(int32_t TeamIndex, struct UObject* __WorldContext); // Function BPFL_VO_Update.BPFL_VO_Update_C.VO_Update_LeadingTeam // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Update_NightToDay(struct UObject* __WorldContext); // Function BPFL_VO_Update.BPFL_VO_Update_C.VO_Update_NightToDay // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Update_DayToNight(struct UObject* __WorldContext); // Function BPFL_VO_Update.BPFL_VO_Update_C.VO_Update_DayToNight // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VO_Update_AllTeamsDropshipLanded(struct FVector DropShipPosition, struct UObject* __WorldContext); // Function BPFL_VO_Update.BPFL_VO_Update_C.VO_Update_AllTeamsDropshipLanded // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VOHelpher_DropshipDistanceContext(struct AS_CharacterBase* Speaker, struct FVector DropShipPosition, struct UObject* __WorldContext, struct FS_DialogueContext Context); // Function BPFL_VO_Update.BPFL_VO_Update_C.VOHelpher_DropshipDistanceContext // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VOHelper_AllAnnouncementFromRandomTeamMember(struct FS_DialogueEventValue Event, struct FS_DialogueContext Context, struct US_PriorityAudioChannelDef* ChannelDef, struct FS_PriorityAudioSettings PrioritySettings, struct UObject* __WorldContext); // Function BPFL_VO_Update.BPFL_VO_Update_C.VOHelper_AllAnnouncementFromRandomTeamMember // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
	void VOHelper_TeamAnnouncementFromRandomTeamMember(struct FS_DialogueEventValue Event, struct FS_DialogueContext Context, struct US_PriorityAudioChannelDef* ChannelDef, struct FS_PriorityAudioSettings PrioritySettings, int32_t TeamIndex, struct UObject* __WorldContext); // Function BPFL_VO_Update.BPFL_VO_Update_C.VOHelper_TeamAnnouncementFromRandomTeamMember // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xffff8008e4a10000
};

