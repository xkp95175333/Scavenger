// Enum Scavenger.ES_WeaponSlot
enum class ES_WeaponSlot : uint8 {
	Primary,
	Secondary,
	Throwable,
	Unarmed,
	Special,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PoiseDamageType
enum class ES_PoiseDamageType : uint8 {
	Projectile,
	Melee,
	Explosion,
	Generic,
	Shock,
	Stun,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ShieldLevel
enum class ES_ShieldLevel : uint8 {
	L1,
	L2,
	L3,
	L4,
	L5,
	Count,
	Uninitialized,
	ES_MAX,
};

// Enum Scavenger.ES_StatsState
enum class ES_StatsState : uint8 {
	Alive,
	Downed,
	Terminal,
	Dead,
	Cocooned,
	Extracting,
	Extracted,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_StatType
enum class ES_StatType : uint8 {
	Armor,
	Health,
	Shield,
	HealthRecoveryLimit,
	Cold,
	Exhaustion,
	Hunger,
	Radiation,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_StatChangeCauseType
enum class ES_StatChangeCauseType : uint8 {
	Drink,
	Equipment,
	Food,
	Medicine,
	Nanotech,
	Natural,
	Bleed,
	Disease,
	Poison,
	Radiation,
	Blunt,
	Piercing,
	Sharp,
	Bullet,
	Explosive,
	Flechette,
	Impact,
	Laser,
	Plasma,
	Acid,
	Cold,
	Electric,
	Heat,
	Asphyxiation,
	Exhaustion,
	Hunger,
	Thirst,
	GameRule,
	FellOutOfWorld,
	Assassination,
	Fall,
	VehicleImpact,
	DirectAttributeChange,
	DependentAttributeChange,
	TeamWipe,
	AutoRez,
	DebugDamagePlayer,
	CrushedFromAbove,
	Talent,
	Ability,
	VehicleFire,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_ExhaustionState
enum class ES_ExhaustionState : uint8 {
	Exhausted,
	Recovered,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ActionQueueRemoveReason
enum class ES_ActionQueueRemoveReason : uint8 {
	ExternallyCancelled,
	QueueTimeExpired,
	ES_MAX,
};

// Enum Scavenger.ES_ActionID
enum class ES_ActionID : uint8 {
	Jump,
	Dodge,
	Mantle,
	Sprint,
	Crouch,
	Cocoon,
	FireGun,
	MeleeAttack,
	Reload,
	AutoReload,
	SwapWeapon,
	ADS,
	Slide,
	Interact,
	UseItem,
	Emote,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineResult
enum class ES_OnlineResult : uint8 {
	Success,
	Pending,
	Failure,
	Failure_Retry,
	Failure_Reset,
	Failure_Reauthenticate,
	Failure_Abort,
	Failure_ContactSupport,
	Failure_AccountBanned,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AbilityTimerIndex
enum class ES_AbilityTimerIndex : uint8 {
	Default,
	Camo,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_EventParameter
enum class ES_EventParameter : uint8 {
	Object,
	Actor,
	Pawn,
	PawnBase,
	Character,
	Vehicle,
	Controller,
	AIController,
	PlayerController,
	ES_MAX,
};

// Enum Scavenger.ES_EquipmentSlot
enum class ES_EquipmentSlot : uint8 {
	Head,
	Eyes,
	Face,
	Back,
	Hands,
	ChestInner,
	Chest,
	ChestOuter,
	Legs,
	Feet,
	WeaponPrimary,
	WeaponSecondary,
	WeaponThrowable,
	QuickItemOne,
	QuickItemTwo,
	QuickItemThree,
	QuickItemFour,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_GameplayEvent
enum class ES_GameplayEvent : uint8 {
	FlareDetonated,
	ES_MAX,
};

// Enum Scavenger.ES_Platform
enum class ES_Platform : uint8 {
	Windows,
	PS4,
	XboxOne,
	Linux,
	XboxOneScorpio,
	PS5,
	XSX,
	Other,
	ES_MAX,
};

// Enum Scavenger.ES_InventoryCategory
enum class ES_InventoryCategory : uint8 {
	Weapon_DEPRECATED,
	Item_DEPRECATED,
	Ammo_DEPRECATED,
	Scoring,
	Grenade_DEPRECATED,
	Currency,
	Salvage,
	AmmoArrow,
	AmmoExplosive,
	AmmoHeavy,
	AmmoLight,
	AmmoMedium,
	AmmoShell,
	ResurrectionToken,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_UIAction
enum class ES_UIAction : uint8 {
	Equip,
	Activate,
	Drop,
	Split,
	EquipDropCombo,
	Ping,
	QuickItems,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_UIAxis
enum class ES_UIAxis : uint8 {
	PadAxisX,
	PadAxisY,
	MouseAxisX,
	MouseAxisY,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_GameInputActionType
enum class ES_GameInputActionType : uint8 {
	None,
	Jump,
	Crouch,
	Dodge,
	Interact,
	InteractAndReload,
	Reload,
	CycleItemSelectionForward,
	CycleItemSelectionBackward,
	SwitchBetweenQuickItemsAndWeapons,
	SelectQuickItem,
	UseQuickItem,
	CombinedSelectOrUseQuickItem,
	StowWeapon,
	FreeLook,
	MoveForward,
	MoveBackward,
	MoveLeft,
	MoveRight,
	TurnLeft,
	TurnRight,
	LookUp,
	LookDown,
	Melee,
	PlayerAbility,
	Fire,
	Aim,
	SecondaryInteract,
	Sprint,
	Ping,
	SelectPing,
	CombinedSelectOrUsePing,
	SelectItemOne,
	SelectItemTwo,
	SelectItemThree,
	SelectItemFour,
	SelectItemFive,
	SelectItemSix,
	SelectItemSeven,
	SelectItemEight,
	CharacterPage,
	CraftingPage,
	Escape,
	GameplayMenu,
	MapPage,
	PauseMenu,
	CloseCurrentMenu,
	CycleMenuPageBackward,
	CycleMenuPageForward,
	ShowLeaderboard,
	SummonTextChatMenu,
	UI_Equip,
	UI_Activate,
	UI_Drop,
	UI_Scrap_DEPRECATED,
	UI_Split,
	UI_EquipDropCombo,
	UI_SplitScrapCombo_DEPRECATED,
	UI_RadialConfirm,
	UI_RadialCancel,
	DEBUG_ActivateCheatMenu,
	FlipKeeperFlashlight,
	PushToTalk,
	UI_Dismiss,
	Menu_Select,
	Menu_Dismiss,
	Menu_Social,
	Menu_Options,
	Menu_ResetToDefaults,
	Menu_CycleRight,
	Menu_CycleLeft,
	Menu_MuteAll_DEPRECATED,
	Menu_Quit,
	Menu_News,
	SpectateNextPlayer,
	SpectatePreviousPlayer,
	Emote1,
	Emote2,
	Emote3,
	Emote4,
	Emote5,
	Emote6,
	Research_Research,
	Research_Disassemble,
	Research_Track,
	Research_Untrack,
	Menu_Sort,
	Menu_SubCycleRight,
	Menu_SubCycleLeft,
	EmoteWheel,
	Menu_CancelMatchmaking,
	Input_AnyKey,
	Loadout_Customize,
	DEBUG_ToggleFocusDebugOverlay,
	Seasons_TierInteract,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_Slide
enum class ES_Slide : uint8 {
	Dodge,
	CustomDodge,
	FlatSlide,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_StormSpawnState
enum class ES_StormSpawnState : uint8 {
	None,
	SkyMaskGrowth,
	FunnelPreamble,
	FunnelGrowth,
	FunnelComplete,
	FunnelShrink,
	FunnelPostamble,
	SkyMaskShrink,
	Destroy,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_StormSize
enum class ES_StormSize : uint8 {
	Small,
	Medium,
	Large,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_StormCategory
enum class ES_StormCategory : uint8 {
	None,
	Border,
	Roaming,
	Collapsing,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_StormDamageZone
enum class ES_StormDamageZone : uint8 {
	Inside,
	Outside,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AttackEvent
enum class ES_AttackEvent : uint8 {
	None,
	TriggerPress,
	TriggerRelease,
	DoAttack,
	DoAttackDeferred,
	StartAttack,
	StopAttack,
	CancelAttack,
	Acquired,
	Dropped,
	Readied,
	Stowed,
	StartReload,
	StopReload,
	CancelReload,
	Readying,
	Stowing,
	ADSOn,
	ADSOff,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TriggerType
enum class ES_TriggerType : uint8 {
	Primary,
	Secondary,
	Tertiary,
	OffHandMelee,
	Grenade,
	AIGrenade,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_ShelterType
enum class ES_ShelterType : uint8 {
	None,
	Crater,
	Partial,
	Full,
	Abilities,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CameraOverrideMode
enum class ES_CameraOverrideMode : uint8 {
	Add,
	Multiply,
	Set,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CameraSettings
enum class ES_CameraSettings : uint8 {
	ThirdPersonClose,
	ThirdPersonFar,
	ThirdPersonADS,
	ThirdPersonRoll,
	ThirdPersonCrouchedClose,
	ThirdPersonCrouchedFar,
	ThirdPersonCrouchedADS,
	ThirdPersonDropPod,
	ThirdPersonDowned,
	ThirdPersonMantle,
	ThirdPersonSprint,
	ThirdPersonJump,
	ThirdPersonExecute,
	FirstPersonADS,
	FirstPersonCrouchedADS,
	DebugCamera,
	EndOfGameCamera,
	ThirdPersonSlide,
	ThirdPersonSlideADS,
	ThirdPersonPassenger,
	ThirdPersonPassengerADS,
	ThirdPersonEmote,
	Count,
	Default,
	ES_MAX,
};

// Enum Scavenger.ES_ItemRarity
enum class ES_ItemRarity : uint8 {
	Common,
	Uncommon,
	Rare,
	Epic,
	Legendary,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ScavengerResult
enum class ES_ScavengerResult : uint8 {
	Succeeded,
	Failed,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_EnemyInfoType
enum class ES_EnemyInfoType : uint8 {
	Player,
	Champion,
	Behemoth,
	ActiveVehicle,
	GenericEvent,
	ShardHarvest,
	SupplyDrop,
	VehiclGantry,
	Misc,
	EnemyVehicle,
	AllyVehicle,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ZoomType
enum class ES_ZoomType : uint8 {
	World,
	Local,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_MapIconUse
enum class ES_MapIconUse : uint8 {
	Default,
	StormIcon,
	PingIcon,
	EncounterLabel,
	NonEncounterLabel,
	PlayerIcon,
	ShardLocation,
	GenericLocation,
	EnemyIcon,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SalvageState
enum class ES_SalvageState : uint8 {
	Idle,
	Inspection,
	RequestMade,
	RequestSuccess,
	Reveal,
	Complete,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CosmeticLoadoutSlotType
enum class ES_CosmeticLoadoutSlotType : uint8 {
	Generic,
	KeeperMesh,
	Backpack,
	ExplorerMesh,
	ExplorerWeapon,
	Execution,
	WildcardWeapon,
	EmoteA,
	EmoteB,
	EmoteC,
	EmoteD,
	EmoteE,
	EmoteF,
	EmoteG,
	AccountBanner,
	AccountEmblem,
	AccountTitle,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineRewardGrantType
enum class ES_OnlineRewardGrantType : uint8 {
	None,
	Entitlement,
	Currency,
	CharacterXp,
	ES_MAX,
};

// Enum Scavenger.ES_UnseenRewardSource
enum class ES_UnseenRewardSource : uint8 {
	None,
	AccountLevelUp,
	CharacterLevelUp,
	Session,
	LegacyReward,
	ES_MAX,
};

// Enum Scavenger.ES_SavedUserSettingsVersion
enum class ES_SavedUserSettingsVersion : uint8 {
	NotSet,
	_01_Initial,
	_02_ChangeDefaultTabKeybind,
	_03_RemoveOldBinds,
	_04_QuickItemRadialWheelInput,
	_05_PingRadialWheelInput,
	_06_ResetAudioSettings,
	_07_SubtitlesSize,
	_08_ChangeDefaultCloseMenuKeybind,
	_09_GlobalMenuInputUpdates,
	_10_EmoteWheelSettingsConsistency,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SubtitleSize
enum class ES_SubtitleSize : uint8 {
	Small,
	Medium,
	Large,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_DeadzoneSize
enum class ES_DeadzoneSize : uint8 {
	None,
	Small,
	Medium,
	Large,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LoadoutSlotType
enum class ES_LoadoutSlotType : uint8 {
	Invalid,
	Gear,
	ClassWeapon,
	Item,
	Wildcard,
	Throwable,
	Backpack,
	AbilityUpgrade,
	Talent,
	GearRepair,
	Ammo,
	AggressiveTalent,
	DefensiveTalent,
	MovementTalent,
	UtilityTalent,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ImprobableTestAccountType
enum class ES_ImprobableTestAccountType : uint8 {
	Unspecified,
	Developer,
	Simplayer,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineServiceManagerLoginMethod
enum class ES_OnlineServiceManagerLoginMethod : uint8 {
	Invalid,
	TestAccountWithAuthToken,
	TestAccountAcquireAuthToken,
	Platform,
	ES_MAX,
};

// Enum Scavenger.ES_LobbyEndpointPingStatus
enum class ES_LobbyEndpointPingStatus : uint8 {
	Unknown,
	Available,
	Unreachable,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_NetworkConnectionStatus
enum class ES_NetworkConnectionStatus : uint8 {
	Normal,
	NotConnected,
	Connected,
	ConnectionDropped,
	NoNetworkConnection,
	ServiceUnavailable,
	UpdateRequired,
	ServersTooBusy,
	DuplicateLoginDetected,
	InvalidUser,
	NotAuthorized,
	InvalidSession,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_UserPrivilegeResult
enum class ES_UserPrivilegeResult : uint8 {
	Success,
	Failure,
	NotFetched,
	PatchRequired,
	AgeRestricted,
	AccountTypeFailure,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_UserPrivilege
enum class ES_UserPrivilege : uint8 {
	CanPlay,
	CanPlayOnline,
	CanCommunicateOnline,
	CanUseUserGeneratedContent,
	CanUserCrossPlay,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InterfaceColorMode
enum class ES_InterfaceColorMode : uint8 {
	Default,
	Deuteranopia,
	Protanopia,
	Tritanopia,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_WeaponSlotState
enum class ES_WeaponSlotState : uint8 {
	Empty,
	ReadyingPreAttachSwap,
	ReadyingPostAttachSwap,
	Readied,
	StowingPreAttachSwap,
	StowingPreAttachSwapLocked,
	StowingPostAttachSwap,
	Stowed,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LocationFaction
enum class ES_LocationFaction : uint8 {
	None,
	Outlander,
	Scourge,
	Other,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LocationDifficultyTier
enum class ES_LocationDifficultyTier : uint8 {
	Trivial,
	Easy,
	Moderate,
	Tough,
	Unforgiving,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LocationType
enum class ES_LocationType : uint8 {
	SmallCamp,
	MediumCamp,
	Fortress,
	ImpactCrater,
	Region,
	SpawnPoint,
	RoamingBoss,
	OrbitalDebris,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_Interaction
enum class ES_Interaction : uint8 {
	Primary,
	Secondary,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CurrencyType
enum class ES_CurrencyType : uint8 {
	Scrap,
	Alcohol,
	Chems,
	Electronics,
	Fiber,
	WeaponParts,
	Samples,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PingItemEvent
enum class ES_PingItemEvent : uint8 {
	Added,
	Repeated,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AutoPingType
enum class ES_AutoPingType : uint8 {
	None,
	ExtractionSite,
	ShardObjective,
	Cold,
	Stamina,
	ScavengeSite,
	Downed,
	Vehicle,
	Chest,
	SupplyDrop,
	Misc,
	ObjectiveEntrance,
	SpaceDebris,
	ScourgeGrowth,
	LooseShard,
	Boss,
	DataUplink,
	LightHearth,
	HordeEnemy,
	TakingDamage,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PingInfoType
enum class ES_PingInfoType : uint8 {
	Location,
	Item,
	Weapon,
	Player,
	Enemy,
	Status,
	Currency,
	Vehicle,
	InteractableActor,
	Container,
	Loot,
	Attack,
	Defend,
	Danger,
	SomeoneHasBeen,
	Destination,
	NeedAmmo,
	NeedWeapon,
	NeedScrap,
	NeedThrowables,
	VehicleGantry,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TeamGameEndReason
enum class ES_TeamGameEndReason : uint8 {
	Invalid,
	TeamEliminated,
	TeamLeftOnPlanet,
	TeamExtracted,
	TeamExfiled,
	ES_MAX,
};

// Enum Scavenger.ES_InteractIcon
enum class ES_InteractIcon : uint8 {
	Default,
	GameplayBank,
	GameplayEscape,
	GameplayInteract,
	GameplayResurrect,
	GameplayRevive,
	ItemAmmo,
	ItemConsumableBuff,
	ItemConsumableFoodDrink,
	ItemConsumableHeal,
	ItemGameplayCache,
	ItemGameplayEvent1,
	ItemGameplayEvent2,
	ItemGameplayEvent3,
	ItemGameplayEvent4,
	ItemGameplayDogTag,
	ItemGameplayReserved1,
	ItemGameplayReserved2,
	ItemGameplayReserved3,
	ItemGameplayReserved4,
	ItemGameplayShard,
	ItemGearCommon,
	ItemGearRare,
	ItemGearEpic,
	ItemGearLegendary,
	ItemJunk,
	ItemResourceAlcohol,
	ItemResourceChems,
	ItemResourceElectronics,
	ItemResourceFiber,
	ItemResourceScrap,
	ItemResourceWeaponParts,
	ItemWeaponCommon,
	ItemWeaponRare,
	ItemWeaponEpic,
	ItemWeaponLegendary,
	ObjectContainer,
	ObjectCraft,
	ObjectDoor,
	ObjectHarvest,
	ObjectInteract,
	ObjectSearchable,
	VehicleHijack,
	VehicleRepair,
	VehicleSeat,
	ItemSalvage01,
	ItemSalvage02,
	ItemSalvage03,
	ItemSalvage04,
	ItemWeaponUncommon,
	LocationShardAltar,
	LocationShardGrowth,
	LocationSpaceJunk,
	LocationStrategicChest,
	LocationDataUplink,
	LightFire,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SelectionSet
enum class ES_SelectionSet : uint8 {
	QuickItems,
	Weapons,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LifecycleState
enum class ES_LifecycleState : uint8 {
	Local,
	CreatingHost,
	WaitingForPlayersToJoin,
	WaitingForPlayersToReady,
	WaitingForHostToStart,
	CountingDownStartTimer,
	Searching,
	SelectingSession,
	Joining,
	Loading,
	Playing,
	Quitting,
	ES_MAX,
};

// Enum Scavenger.ES_StageChangeStateHint
enum class ES_StageChangeStateHint : uint8 {
	Hint_MoveAndFire,
	Hint_MoveOnly,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_StageChangeUrgency
enum class ES_StageChangeUrgency : uint8 {
	HurryHurry,
	Slow,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AIHail
enum class ES_AIHail : uint8 {
	Talking,
	TargetSpotted,
	TargetDamagedMe,
	TargetHeard,
	FiredGun,
	ShieldDown,
	Gesture,
	ShriekerAlarm,
	MyLeaderDied,
	FriendlyDied,
	None,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AIShriekerState
enum class ES_AIShriekerState : uint8 {
	Calm,
	Alert,
	Alarmed,
	Burrow,
	Unburrow,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_EnemyInfoUpdateMode
enum class ES_EnemyInfoUpdateMode : uint8 {
	ShowInSweep,
	Immediate,
	FollowActor,
	GutterInRadar,
	FollowInRadar,
	Champion,
	ES_MAX,
};

// Enum Scavenger.ES_SocialDisconnectReason
enum class ES_SocialDisconnectReason : uint8 {
	Clean,
	Error_Unreachable,
	Error_Unauthorized,
	Error_Timeout,
	Error_Unknown,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SocialPresenceStatus
enum class ES_SocialPresenceStatus : uint8 {
	Unknown,
	Disconnected,
	InLobby,
	InLobbyIdle,
	InMatch,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_RehydratePartyJoinAction
enum class ES_RehydratePartyJoinAction : uint8 {
	ShouldNotJoin,
	ShouldJoinPeer,
	ShouldJoinPartyLeader,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TextChatMessageTarget
enum class ES_TextChatMessageTarget : uint8 {
	Unknown,
	Broadcast,
	Party,
	Team,
	Match,
	Direct,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TextChatControlCommand
enum class ES_TextChatControlCommand : uint8 {
	Unknown,
	CrossRegionInvite,
	CrossRegionCancelInvite,
	CrossRegionJoinRequest,
	CrossRegionCancelJoinRequest,
	CrossRegionAcceptJoinRequest,
	RehydrateParty,
	ForceRehydrateParty,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_GameLocation
enum class ES_GameLocation : uint8 {
	PlaytestWarning,
	Eula,
	LaunchIntoMenu,
	MainMenu,
	Tutorial,
	SocialHub,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PlayerGameState
enum class ES_PlayerGameState : uint8 {
	Default,
	Loading,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_FriendState
enum class ES_FriendState : uint8 {
	NotFriends,
	OutgoingRequest,
	IncomingRequest,
	Friends,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ButtonInteractionState
enum class ES_ButtonInteractionState : uint8 {
	Active,
	Inactive,
	Disabled,
	HighlightedForFTUE,
	NotDefined,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineItemMetadataType
enum class ES_OnlineItemMetadataType : uint8 {
	Generic,
	Recipe,
	Talent,
	Cosmetic,
	SalvageItem,
	CraftingBlueprint,
	TinkerPack,
	Character,
	Resource,
	FeatureKey,
	CosmeticTinkerable,
	ResearchStation,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SocialHubPhaseState
enum class ES_SocialHubPhaseState : uint8 {
	None,
	Inactive,
	Active,
	Paused,
	Ended,
	Unloading,
	ES_MAX,
};

// Enum Scavenger.ES_CosmeticType
enum class ES_CosmeticType : uint8 {
	Generic,
	KeeperMesh,
	Backpack,
	ExplorerMesh,
	ExplorerWeapon,
	Execution,
	Emote,
	WildcardWeapon,
	AccountBanner,
	AccountEmblem,
	AccountTitle,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CosmeticTitleSize
enum class ES_CosmeticTitleSize : uint8 {
	Default,
	Small,
	Large,
	ExtraLarge,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InputActionFlag
enum class ES_InputActionFlag : uint8 {
	InputPress,
	InputHold,
	InputDoublePress,
	InputAny,
	InputRelease,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AnimationTickMode
enum class ES_AnimationTickMode : uint8 {
	InNativeTick,
	InEventTick,
	InHudTick,
	ES_MAX,
};

// Enum Scavenger.ES_SocialType
enum class ES_SocialType : uint8 {
	Invalid,
	FriendInvite,
	PartyInvite,
	PartyJoinRequest,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineResearchProjectType
enum class ES_OnlineResearchProjectType : uint8 {
	Unknown,
	Assembly,
	WildcardWeapon,
	Throwable,
	Equipment,
	SignatureWeapon,
	Talent,
	Salvage,
	Cosmetic,
	StationUpgrade,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineResourceType
enum class ES_OnlineResourceType : uint8 {
	Material,
	Component,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LobbyConnectionState
enum class ES_LobbyConnectionState : uint8 {
	Unknown,
	Disconnected,
	Connecting,
	Connected,
	Unqueued,
	Queueing,
	WaitingForServer,
	ServerFound,
	WaitingForServerAnnounce,
	WaitingForPlayers,
	InGame,
	InGameNeedMorePlayers,
	ShuttingDown,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LobbyQueueCompatibility
enum class ES_LobbyQueueCompatibility : uint8 {
	Unknown,
	Compatible,
	Incompatible,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_GameMode
enum class ES_GameMode : uint8 {
	Expedition,
	Training,
	SocialHub,
	Horde,
	ES_MAX,
};

// Enum Scavenger.ES_SocialButtonPromptAction
enum class ES_SocialButtonPromptAction : uint8 {
	InviteToParty,
	AcceptPartyInvite,
	RejectPartyInvite,
	CancelPartyInvite,
	LeaveParty,
	AddFriend,
	AcceptFriendInvite,
	RejectFriendInvite,
	CancelFriendInvite,
	RemoveFriend,
	SendPartyJoinRequest,
	AcceptPartyJoinRequest,
	RejectPartyJoinRequest,
	CancelPartyJoinRequest,
	KickFromParty,
	AddToFavorites,
	AddFriendFavorite,
	ViewStats,
	ViewGamercard,
	ReportPlayer,
	BlockPlayer,
	UnblockPlayer,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PurchaseRequestResult
enum class ES_PurchaseRequestResult : uint8 {
	CanPurchase,
	NotEnoughCurrency,
	RestrictionFailed,
	BoostAlreadyActive,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InputSourceShowMode
enum class ES_InputSourceShowMode : uint8 {
	DontShow,
	ShowAll,
	ShowGamepadOnly,
	ShowMouseAndKeyboardOnly,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_NavigationInputCategory
enum class ES_NavigationInputCategory : uint8 {
	Core,
	ScreenSpecific,
	Global,
	Bound,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_VehicleDamageState
enum class ES_VehicleDamageState : uint8 {
	Pristine,
	Worn,
	Critical,
	Wreck,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AbilityTimerState
enum class ES_AbilityTimerState : uint8 {
	None,
	Active,
	ActiveDuration,
	Cooldown,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_GameplayAbilityInputBindings
enum class ES_GameplayAbilityInputBindings : uint8 {
	Ability1,
	Ability2,
	Ability3,
	Ability4,
	Ability5,
	Ability6,
	Ability7,
	Ability8,
	Ability9,
	Ability0,
	ES_MAX,
};

// Enum Scavenger.ES_UseItemActionOrigin
enum class ES_UseItemActionOrigin : uint8 {
	Equipment,
	Inventory,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ActionQueueLength
enum class ES_ActionQueueLength : uint8 {
	None,
	Short,
	Medium,
	Long,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ActionResponse
enum class ES_ActionResponse : uint8 {
	Block,
	Simultaneous,
	InterruptSelf,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ActionStatus
enum class ES_ActionStatus : uint8 {
	Blocked,
	Queued,
	Active,
	Finished,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AIAudioState
enum class ES_AIAudioState : uint8 {
	Default,
	Idle,
	Patrol,
	Flee,
	Searching,
	Combat,
	CallForHelp,
	Burrow,
	Unborrow,
	PrepareToSelfDestruct,
	ES_MAX,
};

// Enum Scavenger.ES_AIOutlanderRallyBehaviorState
enum class ES_AIOutlanderRallyBehaviorState : uint8 {
	MoveToRally,
	RallyingIdle,
	RequestExitingRallyIdle,
	ExitRallyIdle,
	NotRallying,
	BlockRally,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AIAlertState
enum class ES_AIAlertState : uint8 {
	Idle,
	Investigating,
	Searching,
	AcquiringTarget,
	InCombat,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AITargetStateFlags
enum class ES_AITargetStateFlags : uint8 {
	Unitialized,
	Visible,
	Lost,
	Unknown_Heard,
	Unknown_Damage,
	Unknown_Partial,
	Known_Damage,
	ES_MAX,
};

// Enum Scavenger.ES_HostileTarget
enum class ES_HostileTarget : uint8 {
	Player,
	AI,
	All,
	ES_MAX,
};

// Enum Scavenger.ES_BrainDeadSource
enum class ES_BrainDeadSource : uint8 {
	HardPing,
	Blueprint,
	AnimNotify,
	AnimNotifyState,
	Spawner,
	Death,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OpportunityState
enum class ES_OpportunityState : uint8 {
	None,
	SetNew,
	MovingTo,
	Reached,
	StartedUse,
	CompleteUse,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CombatTargetAcquisition
enum class ES_CombatTargetAcquisition : uint8 {
	Unknown,
	AnalyzingStart,
	AnalyzingFreshTarget,
	AnalyzingInformed,
	FullyAcquired,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AIStage
enum class ES_AIStage : uint8 {
	Low,
	Medium,
	High,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AIIntensity
enum class ES_AIIntensity : uint8 {
	Low,
	Medium,
	High,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AILocomotionState
enum class ES_AILocomotionState : uint8 {
	Default,
	Patrol,
	Search,
	Flee,
	Enraged,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AimAssistCanBeSeenState
enum class ES_AimAssistCanBeSeenState : uint8 {
	Unknown,
	NotVisible,
	Visible,
	ES_MAX,
};

// Enum Scavenger.ES_AimAssistSystem
enum class ES_AimAssistSystem : uint8 {
	ActorUnderReticle,
	AimAssist,
	AimFriction,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AimAssistAutoAimWeightingLevel
enum class ES_AimAssistAutoAimWeightingLevel : uint8 {
	Lowest,
	Lower,
	Low,
	Default,
	High,
	Higher,
	Highest,
	ES_MAX,
};

// Enum Scavenger.ES_AmmoType
enum class ES_AmmoType : uint8 {
	Arrow,
	Medium,
	Battery_DEPRECATED,
	Fuel_DEPRECATED,
	GrenadeRound_DEPRECATED,
	Light,
	RailgunRound_DEPRECATED,
	Explosive,
	Shell,
	Heavy,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_AnimAttackEventType
enum class ES_AnimAttackEventType : uint8 {
	CanInterrupt,
	DeferredAttack,
	Finished,
	Melee,
	ResetMelee,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AnimReadyEvent
enum class ES_AnimReadyEvent : uint8 {
	Finished,
	WeaponInReadySocket,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AnimReloadEventType
enum class ES_AnimReloadEventType : uint8 {
	CanInterrupt,
	ShellLoaded,
	ClipLoaded,
	Finished,
	BlockInterrupt,
	ChainMontage,
	ShellReloadCheck,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AnimStowEvent
enum class ES_AnimStowEvent : uint8 {
	Finished,
	CannotInterrupt,
	WeaponInStowSocket,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AsyncActionState
enum class ES_AsyncActionState : uint8 {
	Pending,
	Success,
	Failure,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AttackEntryClientFlags
enum class ES_AttackEntryClientFlags : uint8 {
	StartHandled,
	StopHandled,
	MontageInfoHandled,
	LastBulletInClipHandled,
	ES_MAX,
};

// Enum Scavenger.ES_AttackEntryServerFlags
enum class ES_AttackEntryServerFlags : uint8 {
	Stopped,
	HasMontageInfo,
	LastBulletInClip,
	ES_MAX,
};

// Enum Scavenger.ES_AttackTargetInfoFlags
enum class ES_AttackTargetInfoFlags : uint8 {
	Miss,
	HitInActorBoneSpace,
	HitInActorSpace,
	HasCorrectedStartLocation,
	HasRandState,
	ES_MAX,
};

// Enum Scavenger.ES_AttributeModification
enum class ES_AttributeModification : uint8 {
	AddToBase,
	AdditiveBonusMultiplier,
	StackingMultiplier,
	Override,
	ES_MAX,
};

// Enum Scavenger.ES_BlackBoardEntryComparison
enum class ES_BlackBoardEntryComparison : uint8 {
	Empty,
	NotEmpty,
	LessChar,
	LessOrEqualChar,
	MoreChar,
	MoreOrEqualChar,
	LessPlayers,
	LessOrEqualPlayers,
	MorePlayers,
	MoreOrEqualPlayers,
	LessAI,
	LessOrEqualAI,
	MoreAI,
	MoreOrEqualAI,
	ES_MAX,
};

// Enum Scavenger.EEnvQueryPointClumpingMode
enum class EEnvQueryPointClumpingMode : uint8 {
	PenalizeClumpyPoints,
	CullClumpyPoints,
	AIClumpingIsFine,
	EEnvQueryPointClumpingMode_MAX,
};

// Enum Scavenger.ES_ScoringDistance
enum class ES_ScoringDistance : uint8 {
	Distance3D,
	Distance2D,
	DistanceZ,
	DistanceAbsoluteZ,
	ES_MAX,
};

// Enum Scavenger.ES_ChallengeTab
enum class ES_ChallengeTab : uint8 {
	Daily,
	Career,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ChallengeTrackingSetting
enum class ES_ChallengeTrackingSetting : uint8 {
	Solo,
	Team,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ProjectileSpawnPointStates
enum class ES_ProjectileSpawnPointStates : uint8 {
	Stand,
	Crouch,
	Slide,
	Vehicle,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ExecutionOverride
enum class ES_ExecutionOverride : uint8 {
	Custom,
	PlayerCharacterID,
	Weapon,
	Size,
	WeaponClass,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ExecutionSize
enum class ES_ExecutionSize : uint8 {
	Small,
	Medium,
	Large,
	ES_MAX,
};

// Enum Scavenger.ES_ExecutionDirection
enum class ES_ExecutionDirection : uint8 {
	Front,
	Back,
	Left,
	Right,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_KungFuAttackerRange
enum class ES_KungFuAttackerRange : uint8 {
	Melee,
	Medium,
	Extended,
	Invalid,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LeapState
enum class ES_LeapState : uint8 {
	None,
	Start,
	StartBlendOut,
	InAir,
	LandingSlide,
	Landed,
	ES_MAX,
};

// Enum Scavenger.ES_DerivedCharacterBaseState
enum class ES_DerivedCharacterBaseState : uint8 {
	Walking,
	Crouched,
	Prone,
	Swimming,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CharacterBodyStance
enum class ES_CharacterBodyStance : uint8 {
	Ready,
	ADS,
	WeaponDown,
	WeaponStowed,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SlideCurveMode
enum class ES_SlideCurveMode : uint8 {
	Absolute,
	Additive,
	Multiplied,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_CharacterSize
enum class ES_CharacterSize : uint8 {
	Small,
	Medium,
	Large,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CheatMenuItemType
enum class ES_CheatMenuItemType : uint8 {
	Folder,
	Command,
	Toggle,
	IntRange,
	SpawnItems,
	AddRecipes,
	AddTalents,
	OnlineItemMetadata,
	Store,
	PlayerInventory,
	Characters,
	Cosmetics,
	Power,
	Currency,
	Salvage,
	ResearchProjects,
	Disassembly,
	Assembly,
	Tinkering,
	CosmeticTestTinkering,
	WeaponTinkering,
	Teleport,
	UnseenRewards,
	Restrictions,
	XpBoost,
	Challenges,
	Leaderboards,
	MatchRecords,
	Seasons,
	IncreaseSeasonsPoints,
	ES_MAX,
};

// Enum Scavenger.ES_CheatMenuExecuteOn
enum class ES_CheatMenuExecuteOn : uint8 {
	Client,
	Server,
	ClientAndServer,
	MultiServer,
	ES_MAX,
};

// Enum Scavenger.ES_TargetLockSettings
enum class ES_TargetLockSettings : uint8 {
	MoveWithTarget,
	LookAtTarget,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AxisLockSettings
enum class ES_AxisLockSettings : uint8 {
	LockWorldX,
	LockRelativeX,
	LockWorldY,
	LockRelativeY,
	LockWorldZ,
	LockRelativeZ,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_WorldTimeSettings
enum class ES_WorldTimeSettings : uint8 {
	TimeOfDay,
	TimeScale,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LensSettings
enum class ES_LensSettings : uint8 {
	FocalLength,
	FocusDistance,
	Aperture,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OrientationSettings
enum class ES_OrientationSettings : uint8 {
	RollSensitivity,
	PanTiltSensitivity,
	PanTiltResponseCurve,
	PanTiltDeadZone,
	RotationLagSpeed,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_MovementSettings
enum class ES_MovementSettings : uint8 {
	MaxSpeed,
	Acceleration,
	Deceleration,
	BoomSensitivity,
	BoomDeadZone,
	TruckDollySensitivity,
	TruckDollyDeadZone,
	TurningBoost,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SettingCategory
enum class ES_SettingCategory : uint8 {
	Movement,
	Orientation,
	Lens,
	WorldTime,
	AxisLock,
	TargetLock,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ClientEventType
enum class ES_ClientEventType : uint8 {
	UIImportantMessage,
	UIStatusMessage,
	ES_MAX,
};

// Enum Scavenger.ES_ClientEventParameterType
enum class ES_ClientEventParameterType : uint8 {
	Float,
	Int32,
	ItemName,
	PlayerName,
	String,
	TimeInSeconds,
	ES_MAX,
};

// Enum Scavenger.ES_CommandSpecificType
enum class ES_CommandSpecificType : uint8 {
	None,
	Generic_Revive,
	Item_UseQuickItem,
	Weapon_Ready,
	Weapon_ReloadBegin,
	Weapon_UpdateAmmoCount,
	Weapon_Stow,
	Weapon_TriggerPress,
	Weapon_TriggerRelease,
	Weapon_Foo,
	CommandOp_AbortCommand,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CommandGeneralType
enum class ES_CommandGeneralType : uint8 {
	None,
	Generic,
	Item,
	Weapon,
	CommandOp,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ConsumablePackageType
enum class ES_ConsumablePackageType : uint8 {
	Bandage,
	DrinkBottle,
	DrinkCan,
	Food,
	Kit,
	Pills,
	Reactor,
	Syringe,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CharacterType
enum class ES_CharacterType : uint8 {
	Default,
	Streamer,
	ES_MAX,
};

// Enum Scavenger.ES_EmoteGameMode
enum class ES_EmoteGameMode : uint8 {
	Scavengers,
	SocialHub,
	SocialHubStreamer,
	All,
	ES_MAX,
};

// Enum Scavenger.ES_CosmeticLoadoutType
enum class ES_CosmeticLoadoutType : uint8 {
	CharacterCosmeticLoadout,
	AccountCosmeticLoadout,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CraftingSlot
enum class ES_CraftingSlot : uint8 {
	Output,
	InputOne,
	InputTwo,
	InputThree,
	InputFour,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CraftingBlockedReasonsFlag
enum class ES_CraftingBlockedReasonsFlag : uint8 {
	None,
	InvalidRecipe,
	LevelTooLow,
	MissingInput,
	NoRoomForOutput,
	QueueFull,
	QueueLimited,
	PlayerDownedOrDead,
	ES_MAX,
};

// Enum Scavenger.ES_CraftingEvent
enum class ES_CraftingEvent : uint8 {
	Queued,
	Started,
	Completed,
	Removed,
	Stopped,
	Failed,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_DamageTypeFlag
enum class ES_DamageTypeFlag : uint8 {
	ArmorBypassing,
	ArmorPiercing,
	ArmorShredding,
	NegatedByArmor,
	WeakAgainstArmor,
	HealthBypassing,
	PoiseBypassing,
	PoiseDamageIgnoresPoiseCooldown,
	PoiseDamageIgnoresPoiseLock,
	ShieldBypassing,
	ShieldPiercing,
	ShieldShredding,
	NegatedByShield,
	WeakAgainstShield,
	ES_MAX,
};

// Enum Scavenger.ES_DamageOverTimeType
enum class ES_DamageOverTimeType : uint8 {
	Acid,
	Bleed,
	Fire,
	Plasma,
	Poison,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_DamageModiferFlag
enum class ES_DamageModiferFlag : uint8 {
	ResistanceDecreasedDamage,
	BoneDecreasedDamage,
	BoneIncreasedDamage,
	GameModeDecreasedDamage,
	GameModeIncreasedDamage,
	ES_MAX,
};

// Enum Scavenger.ES_AutoJoinState
enum class ES_AutoJoinState : uint8 {
	Started,
	LoggingIn,
	LoggedIn,
	Joining,
	Joined,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_DrunkGapModelActions
enum class ES_DrunkGapModelActions : uint8 {
	Run,
	Strafe,
	Turn,
	Jump,
	Dodge,
	Sprint,
	PrimaryAttack,
	SecondaryAttack,
	OffhandMelee,
	CycleWeaponForward,
	CycleWeaponBackward,
	Reload,
	ES_MAX,
};

// Enum Scavenger.ES_RayCast
enum class ES_RayCast : uint8 {
	OneAxisDivX,
	OneAxisDivY,
	OneAxisDivZ,
	VolumeSpread,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_KillExperienceTier
enum class ES_KillExperienceTier : uint8 {
	Low,
	Mid,
	High,
	Miniboss,
	Boss,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_ExperienceTier
enum class ES_ExperienceTier : uint8 {
	Low,
	Mid,
	High,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_FoleyEvent
enum class ES_FoleyEvent : uint8 {
	Crouch,
	Walk,
	Run,
	Sprint,
	ActionShort,
	ActionLong,
	Detail,
	LandLight,
	LandHeavy,
	CustomName,
	ES_FoleyEvent_MAX,
};

// Enum Scavenger.ES_FootstepWeight
enum class ES_FootstepWeight : uint8 {
	NONE,
	Walk,
	Run,
	Sprint,
	LandLight,
	LandHeavy,
	Crouch,
	Slide,
	Encumbered,
	Downed,
	RagdollImpact,
	ES_MAX,
};

// Enum Scavenger.ES_FrontEndCharacterState
enum class ES_FrontEndCharacterState : uint8 {
	WaitingInMenu,
	TravellingToDraft,
	Drafting,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_FrontEndItemReceiverType
enum class ES_FrontEndItemReceiverType : uint8 {
	Salvage,
	ResearchProject,
	StorefrontItem,
	LoadoutItem,
	Banner,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ChallengePrerequisiteComparison
enum class ES_ChallengePrerequisiteComparison : uint8 {
	Active,
	Complete,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_FTUEStageCompletionState
enum class ES_FTUEStageCompletionState : uint8 {
	Incomplete,
	Complete,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AttributeContextADS
enum class ES_AttributeContextADS : uint8 {
	Inactive,
	Active,
	Unset,
	ES_MAX,
};

// Enum Scavenger.ES_TeamFillStrategy
enum class ES_TeamFillStrategy : uint8 {
	FavorFullTeams,
	FavorMoreTeams,
	ES_MAX,
};

// Enum Scavenger.ES_GameModeEvent
enum class ES_GameModeEvent : uint8 {
	GameStarted,
	GameObjectiveCompleted,
	GameIsTutorial,
	GameEnded,
	PlayerJoinedGame,
	PlayerAssignedIndex_IntPlayerIndex,
	PlayerAssignedToTeam_IntTeamIndex,
	PlayerSelectedClass_NameDataClassID,
	PlayerAuthenticated_NameDataAccountID,
	PlayerDisplayNameSet_NameDataDisplayName,
	PlayerBoostStatusActive,
	PlayerLeftGame,
	PlayerDidDamage_FloatAmount,
	PlayerWasDowned_ByOtherPlayer,
	PlayerWasRevived_ByOtherPlayer,
	PlayerWasKilled_ByOtherPlayer,
	PlayerWasResurrected_ByOtherPlayer,
	PlayerExtracted,
	ShardHarvested_IntAmount,
	ShardExtracted_IntAmount,
	ShardBanked_IntAmount,
	ScrapCollected_IntAmount,
	SalvageItemExtractedForPlayer_NameDataOnlineItemID,
	SalvageItemExtractedForTeam_NameDataOnlineItemID,
	TeamPlacementSet_IntAmount,
	TeamObjectiveCompleted,
	TeamEliminated,
	TeamLeftOnPlanet,
	TeamExtracted,
	TeamExfiled,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LeaderboardRankingFactorRule
enum class ES_LeaderboardRankingFactorRule : uint8 {
	PickHigher,
	PickLower,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LeaderboardRankingFactor
enum class ES_LeaderboardRankingFactor : uint8 {
	TeamIsAlive,
	SamplesHeld,
	SamplesBanked,
	SamplesHeldOrBanked,
	SamplesExtracted,
	SamplesHeldOrExtracted,
	SamplesHarvested,
	ExplorersExtracted,
	PlayersKilled,
	TeammateDeaths,
	TeamExperience,
	TeamScore,
	ObjectivesCompleted,
	TeamHasEliminationTime,
	TeamEliminationTime,
	TeamExfiled,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ResolutionState
enum class ES_ResolutionState : uint8 {
	MatchComplete,
	LeftOnPlanet,
	SuccessfulExtraction,
	Exfiled,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_FakeTeamDataMode
enum class ES_FakeTeamDataMode : uint8 {
	Disabled,
	Debug,
	Shippable,
	ES_MAX,
};

// Enum Scavenger.ES_TeamGameFlags
enum class ES_TeamGameFlags : uint8 {
	NoNewMembers,
	ES_MAX,
};

// Enum Scavenger.ES_BankingMethod
enum class ES_BankingMethod : uint8 {
	Unknown,
	DataUplink,
	Extraction,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SpecialItem
enum class ES_SpecialItem : uint8 {
	DataPoint,
	Scrap,
	ResurrectionToken,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_DlssMode
enum class ES_DlssMode : uint8 {
	Off,
	UltraPerformance,
	Performance,
	Balanced,
	Quality,
	UltraQuality,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ResolutionScalingMode
enum class ES_ResolutionScalingMode : uint8 {
	Disabled,
	Auto,
	Custom,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SupportedRHIType
enum class ES_SupportedRHIType : uint8 {
	DX11,
	DX12,
	Unsupported,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_GPUVendor
enum class ES_GPUVendor : uint8 {
	Unrecognized,
	Nvidia,
	AMD,
	Intel,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ToggleDisplayMethod
enum class ES_ToggleDisplayMethod : uint8 {
	HideSelected,
	HideUnselected,
	HideAll,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InsertType
enum class ES_InsertType : uint8 {
	SendToFront,
	SendToBack,
	AddBefore,
	AddAfter,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_WidgetEffectType
enum class ES_WidgetEffectType : uint8 {
	None,
	ParabolicEffect,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_WidgetHideMethod
enum class ES_WidgetHideMethod : uint8 {
	Remove,
	RenderOpacity,
	Visibility,
	None,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InteractableActorType
enum class ES_InteractableActorType : uint8 {
	Default,
	ShardChest,
	ShardBase,
	SupplyPod,
	VehicleGantry,
	WeaponBench,
	GearRack,
	DropshipOpener,
	Container,
	Carcass,
	ShardAltar,
	ShardGrowth,
	SpaceJunk,
	StrategicChest,
	DataUplink,
	CookingStation,
	Misc,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ItemNotification
enum class ES_ItemNotification : uint8 {
	AddedToEquipment,
	AddedToInventory,
	ChangedEquipment,
	ChangedInventory,
	Dropped,
	RemovedFromEquipment,
	RemovedFromInventory,
	SwappedWithEquipment,
	SwappedWithInventory,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ItemChangeOperation
enum class ES_ItemChangeOperation : uint8 {
	Lock,
	Unlock,
	UnlockAndResetServerTimestamp,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ItemManagerFlag
enum class ES_ItemManagerFlag : uint8 {
	None,
	AllowItemSwap,
	DropExcess,
	PartialAddOkay,
	ShareWithTeam,
	SkipEquipment,
	SkipInventory,
	ES_MAX,
};

// Enum Scavenger.ES_ItemFlag
enum class ES_ItemFlag : uint8 {
	HasLockedCount,
	HasServerTimestamp,
	HasCosmeticLoadout,
	ES_MAX,
};

// Enum Scavenger.ES_ItemType
enum class ES_ItemType : uint8 {
	Weapon,
	Consumable,
	Scoring,
	Salvage,
	Ammo,
	Currency,
	Junk_DEPRECATED,
	Grenade,
	ResurrectionToken,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ItemWidget
enum class ES_ItemWidget : uint8 {
	Ammo,
	Container,
	Crafting,
	Currency,
	Equipment,
	Hotbar,
	Inventory,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ItemStatType
enum class ES_ItemStatType : uint8 {
	AmmoCount_Primary,
	AmmoCount_Secondary,
	AmmoCount_Tertiary,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ItemPickupOrDropReason
enum class ES_ItemPickupOrDropReason : uint8 {
	Unknown,
	Explicit,
	Automatic,
	Scrapped,
	SplitOrCombine,
	TeamTrade,
	Moved,
	GameMode,
	Crafting,
	Cooked,
	Died,
	Destroyed,
	Spent,
	Cheat,
	Deprecated,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_JwtStatus
enum class ES_JwtStatus : uint8 {
	Verified,
	FailedMalformedToken,
	FailedInvalidBase64,
	FailedInvalidHeaderJson,
	FailedHeaderParsing,
	FailedInvalidPayloadJson,
	FailedExpired,
	FailedParsingPayload,
	FailedInvalidSignature,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LatencyBeacon
enum class ES_LatencyBeacon : uint8 {
	Default,
	OffloadWorker,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LevelStreamState
enum class ES_LevelStreamState : uint8 {
	Disabled,
	Unloaded,
	ShouldLoad,
	Loaded,
	Visible,
	ES_MAX,
};

// Enum Scavenger.ES_LobbyMessageType
enum class ES_LobbyMessageType : uint8 {
	QueueList,
	QueueStatus,
	ReceivedTextMessage,
	TeamState,
	PartyState,
	PlayerState,
	JoinPartyFailed,
	JoinQueueFailed,
	PartyInvite,
	ConnectToServer,
	HaveFun,
	VoiceChatCredentials,
	ChatCredentials,
	OnlinePlayers,
	StartDraft,
	NextDraftingPeriod,
	MatchManifest,
	MatchAllocated,
	ClientHello,
	RefreshQueues,
	RefreshOnlinePlayersList,
	JoinMyPartyToQueue,
	ChangeTeam,
	UpdatePlayerDetails,
	GameJoined,
	StartGame,
	ReturnToLobby,
	RequestVoiceChatCredentials,
	RequestChatCredentials,
	RequestToJoinParty,
	PlayerLeaveCurrentParty,
	RemoveMyPartyFromQueue,
	PartyLeaveCurrentTeam,
	SendPartyInvite,
	SendTextMessage,
	ServerHello,
	ServerJoinQueue,
	MatchPhaseUpdate,
	RequestTitleNews,
	TitleNews,
	PlayerReconnectState,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_MapMode
enum class ES_MapMode : uint8 {
	Default,
	MiniMap,
	ES_MAX,
};

// Enum Scavenger.ES_DetectionReason
enum class ES_DetectionReason : uint8 {
	Unknown,
	Shards,
	Rogue,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ReloadSound
enum class ES_ReloadSound : uint8 {
	Reload1,
	Reload2,
	Reload3,
	Reload4,
	Reload5,
	Reload6,
	Reload7,
	Reload8,
	Reload9,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_MeleeSoundStrength
enum class ES_MeleeSoundStrength : uint8 {
	Light,
	Normal,
	Strong,
	Lunge,
	Exhausted_Light,
	Exhausted_Heavy,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_PlayerControllerState
enum class ES_PlayerControllerState : uint8 {
	OnFoot,
	InVehicleDriver,
	InVehiclePassenger,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_MixStageExclusive
enum class ES_MixStageExclusive : uint8 {
	Launch,
	MainMenu,
	Draft,
	PostMatch,
	Cascade_DefaultStart,
	Cascade_Spectating,
	Cascade_Countdown,
	Tutorial,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_MultiActionCondition
enum class ES_MultiActionCondition : uint8 {
	OneInTotal,
	OneInQueue,
	Unlimited,
	ES_MAX,
};

// Enum Scavenger.ES_MusicCue
enum class ES_MusicCue : uint8 {
	None,
	MainTheme,
	FrontEndMusicLoop,
	MatchIntro,
	NewMissionData,
	ShardHarvested,
	LevelUp,
	ResurrectedByTeammate,
	AllShardsHarvested,
	StormCollapsing,
	DropshipArrivalAndCountdown,
	MissionSuccess,
	MissionFailureDied,
	PostGameMenuWin,
	PostGameMenuLoss,
	ScourgeEvent,
	OutlanderEvent,
	OvertimeEvent,
	MenuDraftEntering,
	MenuDraft,
	MenuResearchScreen,
	BleedingOut,
	PlayerDeath,
	WaitingToBeRevived,
	TeammateDowned,
	TeammateExecuted,
	GainedTheLead,
	LostTheLead,
	OutlanderEventElite,
	OutlanderEventBoss,
	ScourgeEventElite,
	ScourgeEventBoss,
	TimeOfDayChange,
	MenuLoading,
	CountDownBuildUp,
	TrinityDropshipsShort,
	TrinityDropshipsLong,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_DirtiedAreaReason
enum class ES_DirtiedAreaReason : uint8 {
	RegisterNavOctreeElement,
	UnregisterNavOctreeElement,
	UpdateNavOctreeElement,
	UpdateNavOctreeParentChain,
	UpdateNavOctreeElementBounds,
	AddLevelCollisionToOctree,
	RemoveLevelCollisionFromOctree,
	RebuildAll,
	Tick,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_NetMode
enum class ES_NetMode : uint8 {
	Standalone,
	DedicatedServer,
	ListenServer,
	Client,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ObjectiveFailureReason
enum class ES_ObjectiveFailureReason : uint8 {
	None,
	ActorDestroyed,
	ActorInteraction,
	GoalCompleted,
	GoalFailed,
	InsideAreaTooLong,
	OutsideAreaTooLong,
	ProgressComplete,
	ProgressFailed,
	SubGoalCompleted,
	SubGoalFailed,
	TimeExpired,
	Unknown,
	ES_MAX,
};

// Enum Scavenger.ES_ObjectiveMarkerFlag
enum class ES_ObjectiveMarkerFlag : uint8 {
	HasActor,
	UseTeamColor,
	ES_MAX,
};

// Enum Scavenger.ES_ObjectiveFlag
enum class ES_ObjectiveFlag : uint8 {
	HasActor,
	HasArea,
	HasProgress,
	HasTimer,
	MatchAllPawnCheck,
	ShowAreaOutline,
	ShowMarkerOnActor,
	ShowMarkersOnPawnsInRange,
	ShowProgressAsBar,
	ES_MAX,
};

// Enum Scavenger.ES_ObjectiveOutcomeSelector
enum class ES_ObjectiveOutcomeSelector : uint8 {
	None,
	OnDestroy,
	OnAllGoalsComplete,
	OnAnyGoalComplete,
	OnAllGoalsFailed,
	OnAnyGoalFailed,
	OnInteract,
	OnInsideAreaTimerExpire,
	OnOutsideAreaTimerExpire,
	OnProgressComplete,
	OnProgressFailed,
	OnAllSubGoalsComplete,
	OnAnySubGoalComplete,
	OnAllSubGoalsFailed,
	OnAnySubGoalFailed,
	OnTimerExpire,
	ES_MAX,
};

// Enum Scavenger.ES_ObjectiveProgressSelector
enum class ES_ObjectiveProgressSelector : uint8 {
	None,
	OnInteract,
	OnItemAcquire,
	OnItemDrop,
	OnItemUse,
	OnPawnKill,
	ES_MAX,
};

// Enum Scavenger.ES_CatalogItemContentCalculationMethod
enum class ES_CatalogItemContentCalculationMethod : uint8 {
	Minimum,
	Maximum,
	ES_MAX,
};

// Enum Scavenger.ES_LobbyPingActionState
enum class ES_LobbyPingActionState : uint8 {
	Dormant,
	Pinging,
	Waiting,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_EndpointPingActionState
enum class ES_EndpointPingActionState : uint8 {
	Dormant,
	Pinging,
	Waiting,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_EndpointPingStatus
enum class ES_EndpointPingStatus : uint8 {
	Unknown,
	Available,
	Unreachable,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ScavengersDataApiErrorCode
enum class ES_ScavengersDataApiErrorCode : uint8 {
	None,
	InternalError,
	Banned,
	InvalidArgument,
	Unauthorized,
	InvalidState,
	InvalidStateNotEnoughResource,
	InvalidOperation,
	ES_MAX,
};

// Enum Scavenger.ES_SocialHubSchedulingState
enum class ES_SocialHubSchedulingState : uint8 {
	Disabled,
	Scheduled,
	CountdownActive,
	CountdownActiveVIP,
	EventActive,
	ES_MAX,
};

// Enum Scavenger.ES_PlayerReportReason
enum class ES_PlayerReportReason : uint8 {
	Unknown,
	CommsAbuse,
	Cheating,
	LeavingTheGame,
	DisrespectfulBehavior,
	InappropriateName,
	Threats,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_StoreOfferFlags
enum class ES_StoreOfferFlags : uint8 {
	IsLocked,
	IsOwned,
	IsBoost,
	IsPlatformOffer,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineItemResearchState
enum class ES_OnlineItemResearchState : uint8 {
	Owned,
	Restricted,
	Researchable,
	ResearchInProgress,
	ResearchComplete,
	RequirementsNotMet,
	InProgressButResearchable,
	CompleteButResearchable,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineItemSortMode
enum class ES_OnlineItemSortMode : uint8 {
	Rarity,
	NameAscending,
	NameDescending,
	Availability,
	Tracked,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineLeaderboardSortOrder
enum class ES_OnlineLeaderboardSortOrder : uint8 {
	Ascending,
	Descending,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineRestrictionType
enum class ES_OnlineRestrictionType : uint8 {
	Invalid,
	Entitlement,
	EntitlementType,
	Restriction,
	AccountLevel,
	CharacterLevel,
	PlayerTag,
	ES_MAX,
};

// Enum Scavenger.ES_CharacterPointType
enum class ES_CharacterPointType : uint8 {
	CXP,
	CRP,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_VirtualCurrencyType
enum class ES_VirtualCurrencyType : uint8 {
	RM,
	VM,
	UU,
	UR,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OnlinePlatformType
enum class ES_OnlinePlatformType : uint8 {
	Unknown,
	Steam,
	Epic,
	XBox,
	Playstation,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OpportunityPointWeatherType
enum class ES_OpportunityPointWeatherType : uint8 {
	ValidInAllWeather,
	ValidInStorm,
	ValidOutsideOfStorm,
	ES_MAX,
};

// Enum Scavenger.ES_CombatState
enum class ES_CombatState : uint8 {
	Wander,
	Patrol,
	Combat,
	Investigate,
	Search,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OverlappingInputState
enum class ES_OverlappingInputState : uint8 {
	IdleUp,
	DownResolving,
	DownPressed,
	DownHeld,
	DownDoublePressed,
	ES_MAX,
};

// Enum Scavenger.ES_OverrideType
enum class ES_OverrideType : uint8 {
	String,
	Int,
	Float,
	Vector,
	Bool,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_AuditGPUSelection
enum class ES_AuditGPUSelection : uint8 {
	All,
	OnlySelected,
	SelectedAndChildren,
	ES_MAX,
};

// Enum Scavenger.ES_PhysicalSurfaceAttribMod
enum class ES_PhysicalSurfaceAttribMod : uint8 {
	AddToBase,
	AddToBaseStacking,
	MultiplyBase,
	MultiplyStacking,
	Override,
	ES_MAX,
};

// Enum Scavenger.PhysicsQuantityType
enum class PhysicsQuantityType : uint8 {
	Angular,
	Linear,
	PhysicsQuantityType_MAX,
};

// Enum Scavenger.AxisType
enum class AxisType : uint8 {
	ModelRight,
	ModelUp,
	ModelForward,
	ModelRightXZ,
	ModelForwardXZ,
	WorldRight,
	WorldUp,
	WorldForward,
	AxisType_MAX,
};

// Enum Scavenger.ES_AutoPingNotificationType
enum class ES_AutoPingNotificationType : uint8 {
	Objective,
	Suggestive,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PingItemRequestResult
enum class ES_PingItemRequestResult : uint8 {
	Failed,
	Added,
	Cleared,
	Repeated,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PingGutterState
enum class ES_PingGutterState : uint8 {
	InnerGutter,
	OuterGutter,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_KeeperAbilityTaskCompletionFunctions
enum class ES_KeeperAbilityTaskCompletionFunctions : uint8 {
	Default,
	OnCompleted,
	OnBlendOut,
	OnInterrupted,
	OnCancelled,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_KeeperCloakState
enum class ES_KeeperCloakState : uint8 {
	Uncloaked,
	Cloaking,
	Cloaked,
	Uncloaking,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CriticalHealthState
enum class ES_CriticalHealthState : uint8 {
	Off,
	FadingIn,
	FadingOut,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ScreenDamageDirection
enum class ES_ScreenDamageDirection : uint8 {
	TopRight,
	Right,
	BottomRight,
	Bottom,
	BottomLeft,
	Left,
	TopLeft,
	Top,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ScreenDamageIndicatorState
enum class ES_ScreenDamageIndicatorState : uint8 {
	Off,
	FadingIn,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_DamageCauseActor
enum class ES_DamageCauseActor : uint8 {
	None,
	Self,
	Other,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PlayerClassGender
enum class ES_PlayerClassGender : uint8 {
	Male,
	Female,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CharacterFlags
enum class ES_CharacterFlags : uint8 {
	Locked,
	ES_MAX,
};

// Enum Scavenger.ES_ClientErrorCode
enum class ES_ClientErrorCode : uint8 {
	Unknown,
	Chilalo,
	Churchill,
	Noshaq,
	Snebordet,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_ReplicatedActionResult
enum class ES_ReplicatedActionResult : uint8 {
	Completed,
	Failed,
	Stopped,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TeammateLoadoutItemType
enum class ES_TeammateLoadoutItemType : uint8 {
	Unknown,
	LoadoutRecipe,
	ES_MAX,
};

// Enum Scavenger.ES_MainMenuStartupState
enum class ES_MainMenuStartupState : uint8 {
	LoginRewards,
	Events,
	Done,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PlayerInputContext
enum class ES_PlayerInputContext : uint8 {
	None,
	MainMenu,
	Gameplay,
	GameplayMenu,
	GameplayFinished,
	SystemMenu,
	RadialMenu,
	Research,
	Loadout,
	Seasons,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InputPriorityFlag
enum class ES_InputPriorityFlag : uint8 {
	Primary,
	Secondary,
	All,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InputDeviceFlag
enum class ES_InputDeviceFlag : uint8 {
	Active,
	ControllerOnly,
	KeyboardOnly,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TeamFlag
enum class ES_TeamFlag : uint8 {
	Team1,
	Team2,
	Team3,
	Team4,
	Team5,
	Team6,
	Team7,
	Team8,
	Team9,
	Team10,
	Team11,
	Team12,
	Team13,
	Team14,
	Team15,
	Team16,
	Team17,
	Team18,
	Team19,
	Team20,
	Team21,
	Team22,
	Team23,
	Team24,
	Team25,
	Team26,
	Team27,
	Team28,
	Team29,
	Team30,
	Team31,
	Team32,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PostMatchStatType
enum class ES_PostMatchStatType : uint8 {
	Gameplay,
	Boost,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ResummonedPhaseState
enum class ES_ResummonedPhaseState : uint8 {
	Unavailable,
	Skip,
	ShowFull,
	ShowEndState,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PostMatchContext
enum class ES_PostMatchContext : uint8 {
	Session,
	MainMenu,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InterruptionUrgency
enum class ES_InterruptionUrgency : uint8 {
	ImmediateInterrupt,
	SendInterruptTrigger,
	WaitPolitely,
	ES_MAX,
};

// Enum Scavenger.ES_PrivacyRequestType
enum class ES_PrivacyRequestType : uint8 {
	Block,
	Unblock,
	UnblockAll,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ProjectileImpactResponse
enum class ES_ProjectileImpactResponse : uint8 {
	Destroy,
	Attach,
	Bounce,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ReplicatedAttackEntryType
enum class ES_ReplicatedAttackEntryType : uint8 {
	Attack,
	Reload,
	Swap,
	ES_MAX,
};

// Enum Scavenger.ES_ClassRepNodeMapping
enum class ES_ClassRepNodeMapping : uint8 {
	NotRouted,
	RelevantAllConnections,
	Spatialize_Static,
	Spatialize_Dynamic,
	Spatialize_Dormancy,
	ES_MAX,
};

// Enum Scavenger.ES_TierRewardState
enum class ES_TierRewardState : uint8 {
	None,
	InstantRewardBattlePass,
	Skippable,
	Locked,
	AccomplishedBattlePass,
	ReadyToClaim,
	Claimed,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TierRewardFooterState
enum class ES_TierRewardFooterState : uint8 {
	None,
	FooterText,
	Locked,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TierRewardHeaderState
enum class ES_TierRewardHeaderState : uint8 {
	None,
	Free,
	BattlepassIcon,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ShieldState
enum class ES_ShieldState : uint8 {
	Active,
	PartialDamage,
	Breaking,
	Rebooting,
	RebootComplete,
	Recharging,
	RechargeComplete,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SkinMaterialParameter
enum class ES_SkinMaterialParameter : uint8 {
	Scalar,
	Vector,
	Texture,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SmeltState
enum class ES_SmeltState : uint8 {
	Begin,
	InitRenderTargets,
	Smelt,
	CreateTextures,
	CreateTasks,
	CreateTexturesAndCompressionTasks,
	ReadSurfaceData,
	CompressTextures,
	CopyCompressedDataToMipMap,
	SetupMaterials,
	Done,
	None,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SkyMaterialOverride
enum class ES_SkyMaterialOverride : uint8 {
	Blend,
	Clear,
	Stormy,
	AlphaMask,
	ES_MAX,
};

// Enum Scavenger.ES_BouncerViewMode
enum class ES_BouncerViewMode : uint8 {
	All,
	Characters,
	Players,
	ES_MAX,
};

// Enum Scavenger.ES_PickupType
enum class ES_PickupType : uint8 {
	Scrap,
	Data,
	ES_MAX,
};

// Enum Scavenger.ES_SocialHubMILEState
enum class ES_SocialHubMILEState : uint8 {
	NoPhaseLoaded,
	PhaseLoading,
	PhaseLoaded,
	PhaseUnloading,
	ES_MAX,
};

// Enum Scavenger.ESimPlayerPattern
enum class ESimPlayerPattern : uint8 {
	SimPlayerFormation,
	SimPlayerWander,
	SimPlayerAttack,
	ESimPlayerPattern_MAX,
};

// Enum Scavenger.EAIAttackPattern
enum class EAIAttackPattern : uint8 {
	AIAttackAll,
	AIAttackStreamers,
	AIAttackNone,
	EAIAttackPattern_MAX,
};

// Enum Scavenger.ESocialHubEvent
enum class ESocialHubEvent : uint8 {
	DropshipArrival,
	PlayMusic,
	EndOfEvent,
	ESocialHubEvent_MAX,
};

// Enum Scavenger.ES_SocialHubWidgetCountType
enum class ES_SocialHubWidgetCountType : uint8 {
	Players,
	SimPlayers,
	PlayersAndSimPlayers,
	AIClients,
	ES_MAX,
};

// Enum Scavenger.ES_SocialHubAbilityButtonState
enum class ES_SocialHubAbilityButtonState : uint8 {
	Deactivated,
	Idle,
	Running,
	Cooldown,
	ES_MAX,
};

// Enum Scavenger.ES_SocialConnectionState
enum class ES_SocialConnectionState : uint8 {
	Disconnected,
	Connecting,
	Connected,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SpawnDescriptor
enum class ES_SpawnDescriptor : uint8 {
	Replenisher,
	InitialOnly,
	Manual,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AISpawnPhase
enum class ES_AISpawnPhase : uint8 {
	AISpawnPhase0,
	AISpawnPhase1,
	AISpawnPhase2,
	AISpawnPhase3,
	AISpawnPhase4,
	AISpawnPhase5,
	AISpawnPhase6,
	AISpawnPhase7,
	AISpawnPhase8,
	AISpawnPhase9,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_RecoilImpulseInhertienceType
enum class ES_RecoilImpulseInhertienceType : uint8 {
	None,
	Add,
	Multiply,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_RecoilSettings
enum class ES_RecoilSettings : uint8 {
	StandingHip,
	StandingADS,
	CrouchedHip,
	CrouchedADS,
	Count,
	Default,
	ES_MAX,
};

// Enum Scavenger.ES_StatsGameplayEvent
enum class ES_StatsGameplayEvent : uint8 {
	Assassination,
	AssassinationDamage,
	ExecutionDamage,
	ExtractFailed,
	ReviveNotAllowed,
	VehicleWrecked,
	FreedFromCocoon,
	PlayerExtracting,
	PlayerExtracted,
	PlayerResurrected,
	SelfDestruct,
	Count,
	Debug_Alive,
	Debug_Dead,
	Debug_Downed,
	Debug_Terminal,
	ES_MAX,
};

// Enum Scavenger.ES_StatsShieldState
enum class ES_StatsShieldState : uint8 {
	Ready,
	Rebooting,
	Regenerating,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CompassDirection
enum class ES_CompassDirection : uint8 {
	North,
	NorthEast,
	East,
	SouthEast,
	South,
	SouthWest,
	West,
	NorthWest,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_StreamerAbilityRunType
enum class ES_StreamerAbilityRunType : uint8 {
	Server,
	Client,
	Both,
	ES_MAX,
};

// Enum Scavenger.ES_StreamerAbilityUnlockType
enum class ES_StreamerAbilityUnlockType : uint8 {
	ByCharge,
	Explicit,
	ES_MAX,
};

// Enum Scavenger.ES_StreamerMenuEntryType
enum class ES_StreamerMenuEntryType : uint8 {
	Ability,
	GlobalEvent,
	Node,
	Return,
	ES_MAX,
};

// Enum Scavenger.ES_TraitGroup
enum class ES_TraitGroup : uint8 {
	Invalid,
	Base,
	Survivalist,
	Defender,
	Acrobat,
	Soldier,
	Engineer,
	Sniper,
	Ninja,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TraitGroupType
enum class ES_TraitGroupType : uint8 {
	Invalid,
	Primary,
	Secondary,
	Tertiary,
	Base,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ScavAITeams
enum class ES_ScavAITeams : uint8 {
	Explorer,
	Keeper,
	Outlander,
	Salient,
	Scourge,
	ScourgeShrieker,
	WildlifePredator,
	WildlifePrey,
	Count,
	NoTeam,
	ES_MAX,
};

// Enum Scavenger.ES_TechTreeCategory
enum class ES_TechTreeCategory : uint8 {
	Weapon,
	Skill,
	Consumable,
	ES_MAX,
};

// Enum Scavenger.ES_PartyAction
enum class ES_PartyAction : uint8 {
	Unknown,
	PartyInviteSent,
	PartyInviteReceived,
	PartyInviteAccepted,
	PartyInviteRejected,
	PartyInviteOutgoingCanceled,
	PartyInviteIncomingCanceled,
	PartyJoinRequestSent,
	PartyJoinRequestReceived,
	PartyJoinRequestAccepted,
	PartyJoinRequestRejected,
	PartyJoinRequestOutgoingCanceled,
	PartyJoinRequestIncomingCanceled,
	PartyJoinFailed,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SocialAction
enum class ES_SocialAction : uint8 {
	Unknown,
	FriendRequestSent,
	FriendRequestRevoked,
	FriendRequestReceived,
	FriendRequestAccepted,
	FriendRequestRejected,
	FriendRemoved,
	PlayerBlocked,
	PlayerUnblocked,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_FTUETelemetryReason
enum class ES_FTUETelemetryReason : uint8 {
	Started,
	Completed,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PlayerLeftMatchReason
enum class ES_PlayerLeftMatchReason : uint8 {
	Unknown,
	ClientDisconnect,
	ClientError,
	ClientIntegrity,
	ClientShutdown,
	ServerDisconnect,
	ServerError,
	ServerGameOver,
	ServerIntegrity,
	ServerShutdown,
	UserAction,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PlayerLeftMatchPlayerState
enum class ES_PlayerLeftMatchPlayerState : uint8 {
	Unknown,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PlayerTelemetryType
enum class ES_PlayerTelemetryType : uint8 {
	Human,
	DrunkGapModel,
	BotModel,
	ES_MAX,
};

// Enum Scavenger.FS_TelemetryHitchEnum
enum class FS_TelemetryHitchEnum : uint8 {
	RenderThread,
	GameThread,
	GPU,
	FS_MAX,
};

// Enum Scavenger.ES_MatchEndReason
enum class ES_MatchEndReason : uint8 {
	Unknown,
	EveryoneDied,
	MatchTimerExpired,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_MatchmakingAttemptResult
enum class ES_MatchmakingAttemptResult : uint8 {
	Unknown,
	Success,
	Failure,
	Cancel,
	COUNT,
	ES_MAX,
};

// Enum Scavenger.ES_TelemetryAttackType
enum class ES_TelemetryAttackType : uint8 {
	HipFire,
	ADS,
	Melee,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InMatchClientInputFeature
enum class ES_InMatchClientInputFeature : uint8 {
	Unknown,
	MapScreen,
	InventoryScreen,
	CraftingScreen,
	LeaderboardScreen,
	SettingsScreen,
	PushToTalkButton,
	MapPing,
	WorldPing,
	ActivateAbility,
	Dodge,
	Slide,
	Mantle,
	ExplicitReload,
	ExplicitWeaponStow,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_HarvestResult
enum class ES_HarvestResult : uint8 {
	Unknown,
	CompletedSuccessfully,
	FailedKeeperInterrupted,
	FailedTeamKilled,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TelemetryDeathSource
enum class ES_TelemetryDeathSource : uint8 {
	Player,
	AI,
	Unknown,
	ES_MAX,
};

// Enum Scavenger.ETelemetrySource
enum class ETelemetrySource : uint8 {
	Disabled,
	Server,
	Client,
	Editor,
	Services,
	Count,
	ETelemetrySource_MAX,
};

// Enum Scavenger.ES_StormCAT
enum class ES_StormCAT : uint8 {
	CAT1,
	CAT2,
	CAT3,
	CAT4,
	CAT5,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AttachmentParentType
enum class ES_AttachmentParentType : uint8 {
	Attachment,
	Weapon,
	Pawn,
	None,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CycleDirection
enum class ES_CycleDirection : uint8 {
	Forward,
	Backward,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_MutatorType
enum class ES_MutatorType : uint8 {
	None,
	GunFu,
	Arsenal,
	ES_MAX,
};

// Enum Scavenger.ES_ViewportFadeType
enum class ES_ViewportFadeType : uint8 {
	FadeIn,
	FadeOut,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_RestrictionStateTypes
enum class ES_RestrictionStateTypes : uint8 {
	Unrestricted,
	RestrictedByTier,
	RestrictedByOther,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_OnlineItemLoadoutState
enum class ES_OnlineItemLoadoutState : uint8 {
	Owned,
	Equipped,
	Locked,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InGameZOrderCategory
enum class ES_InGameZOrderCategory : uint8 {
	Default,
	Overlay,
	Notifications,
	ErrorsAndWarnings,
	FTUEOverlay,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_MessagePromptMode
enum class ES_MessagePromptMode : uint8 {
	Notification,
	Warning,
	Error,
	Confirmation,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_NamePlateHealthBarBehavior
enum class ES_NamePlateHealthBarBehavior : uint8 {
	AlwaysShow,
	ShowIfDamaged,
	NeverShow,
	ES_MAX,
};

// Enum Scavenger.ES_ButtonFocusSupport
enum class ES_ButtonFocusSupport : uint8 {
	Unfocusable,
	FocusableUnlessDisabled,
	FocusableWhenActive,
	AlwaysFocusable,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ButtonVisibility
enum class ES_ButtonVisibility : uint8 {
	Visible,
	Collapsed,
	Hidden,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ButtonType
enum class ES_ButtonType : uint8 {
	Repeatable,
	Selectable,
	Toggleable,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_UseItemNotify
enum class ES_UseItemNotify : uint8 {
	ConsumeItem,
	Finished,
	ES_MAX,
};

// Enum Scavenger.ES_ButtonState
enum class ES_ButtonState : uint8 {
	Up,
	Pressed,
	Down,
	Released,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CurveType
enum class ES_CurveType : uint8 {
	EaseInEaseOut,
	EaseIn,
	EaseOut,
	Linear,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_EulerRotation
enum class ES_EulerRotation : uint8 {
	Pitch,
	Yaw,
	Roll,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_FilterIfMatch
enum class ES_FilterIfMatch : uint8 {
	Include,
	Exclude,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AnimationDuration
enum class ES_AnimationDuration : uint8 {
	Default,
	Looping,
	Infinite,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_MaterialParameter
enum class ES_MaterialParameter : uint8 {
	Scalar,
	Vector,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_VisualEffect
enum class ES_VisualEffect : uint8 {
	Shell,
	PostProcess,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_VirtualCursorStatus
enum class ES_VirtualCursorStatus : uint8 {
	Visible,
	Hidden,
	ForceHidden,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_DisconnectBehavior
enum class ES_DisconnectBehavior : uint8 {
	AlwaysRetry,
	NeverRetry,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_VoiceChannelState
enum class ES_VoiceChannelState : uint8 {
	Disconnected,
	Disconnecting,
	Connecting,
	Connected,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_VoiceChannelCategory
enum class ES_VoiceChannelCategory : uint8 {
	Squad,
	Friend,
	EchoTest,
	Count,
	Invalid,
	ES_MAX,
};

// Enum Scavenger.ES_SquadJoinPreference
enum class ES_SquadJoinPreference : uint8 {
	Autojoin,
	Manual,
	Disabled,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_VoiceConnectionState
enum class ES_VoiceConnectionState : uint8 {
	Disconnected,
	Disconnecting,
	Connecting,
	Connected,
	PendingLoginToken,
	LoggingIn,
	LoggedIn,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CameraSettingsFlag
enum class ES_CameraSettingsFlag : uint8 {
	ThirdPersonClose,
	ThirdPersonFar,
	ThirdPersonADS,
	ThirdPersonRoll,
	ThirdPersonCrouchedClose,
	ThirdPersonCrouchedFar,
	ThirdPersonCrouchedADS,
	ThirdPersonDropPod,
	ThirdPersonDowned,
	ThirdPersonMantle,
	ThirdPersonSprint,
	ES_MAX,
};

// Enum Scavenger.ES_AIRange
enum class ES_AIRange : uint8 {
	CloseRange,
	MediumRange,
	LongRange,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ProjectileWindupFiringType
enum class ES_ProjectileWindupFiringType : uint8 {
	NONE,
	ARC_BASED,
	VELOCITY_BASED,
	VELOCITY_BASED_WITH_AIM_PITCH,
	VELOCITY_DERIVED_HIGH_LOW_ARC,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SpreadSlots
enum class ES_SpreadSlots : uint8 {
	SP_Sprint,
	SP_Reload,
	SP_Walk,
	SP_Jump,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_WeaponMontageEvent
enum class ES_WeaponMontageEvent : uint8 {
	None,
	Fire,
	Reload,
	Ready,
	Stow,
	Windup,
	OffHandMelee,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TriggerableWeaponAttachmentClass
enum class ES_TriggerableWeaponAttachmentClass : uint8 {
	BaseAttachment,
	Chainsaw,
	GrenadeLauncher,
	OffhandMelee,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_WeaponGripType
enum class ES_WeaponGripType : uint8 {
	Default,
	Angled,
	Dropped,
	Horizontal,
	Vertical,
	CustomHyena,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_WeaponModifier
enum class ES_WeaponModifier : uint8 {
	Accuracy,
	AttackExitDelayBeforeSprint,
	CameraArmLength,
	CameraArmLengthTransitionSpeed,
	CameraFieldOfView,
	CameraFieldOfViewTransitionSpeed,
	CameraRecoilMultiplier,
	CameraTargetOffsetX,
	CameraTargetOffsetY,
	CameraTargetOffsetZ,
	CameraTargetOffsetTransitionSpeed,
	CameraSocketOffsetX,
	CameraSocketOffsetY,
	CameraSocketOffsetZ,
	CameraSocketOffsetTransitionSpeed,
	CameraLagSpeedFwd,
	CameraLagSpeedSide,
	CameraLagSpeedUp,
	CameraLagSpeedDown,
	CriticalChance,
	CriticalMultiplier,
	Damage,
	FireRate,
	Flinch,
	MeleeSpeed,
	InputPitchMultiplier,
	InputYawMultiplier,
	MagazineSize,
	MovementSpeedADSMultiplier,
	MovementSpeedCrouched,
	MovementSpeedSprintBonus,
	MovementSpeedWalk,
	ReloadSpeed,
	StowSpeed,
	ReadySpeed,
	StaminaCost,
	SpreadCosmeticBloomMultiplier,
	SpreadMaxAngle,
	SpreadMinAngle,
	SpreadRecoilMultiplier,
	SpreadReloadStartTarget,
	SpreadReloadStopTarget,
	SpreadWalkStartTarget,
	SpreadWalkStopTarget,
	SprintExitAttackDelay,
	Zoom,
	AutoAimAngle,
	AutoAimFalloffNearStart,
	AutoAimFalloffNearEnd,
	AutoAimFalloffStart,
	AutoAimFalloffEnd,
	AimFrictionAngle,
	AimFrictionFalloffNearStart,
	AimFrictionFalloffNearEnd,
	AimFrictionFalloffStart,
	AimFrictionFalloffEnd,
	ActorUnderReticleMaxDistance,
	ActorUnderReticleInnerBaseFOV,
	ActorUnderReticleOuterBaseFOV,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CosmeticWeaponClass
enum class ES_CosmeticWeaponClass : uint8 {
	None,
	Bow,
	Crossbow,
	Heavy,
	Handgun,
	Melee,
	Rifle,
	Shotgun,
	SMG,
	Sniper,
	Grenade,
	GrenadeLauncher,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_WeaponClass
enum class ES_WeaponClass : uint8 {
	Unarmed,
	Blade,
	Club,
	Staff,
	Minigun,
	Pistol,
	Rifle,
	Railgun,
	Shotgun,
	SMG,
	Flamethrower,
	GrenadeLauncher,
	RocketLauncher,
	Bow,
	Crossbow,
	DualShield,
	Grenade,
	Halberd,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AttackTag
enum class ES_AttackTag : uint8 {
	Bow,
	Explosive,
	Pistol,
	Rifle,
	Shotgun,
	ArmorBypassing,
	ArmorPiercing,
	ArmorShredding,
	WeakAgainstArmor,
	ES_MAX,
};

// Enum Scavenger.ES_AudioEventEndAction
enum class ES_AudioEventEndAction : uint8 {
	None,
	Stop,
	Break,
	FadeOut,
	ES_MAX,
};

// Enum Scavenger.ES_AttackSlotState
enum class ES_AttackSlotState : uint8 {
	Ready,
	AttackWindup,
	Attacking,
	AttackingBurst,
	Reloading,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_AttackBehavior
enum class ES_AttackBehavior : uint8 {
	OnceOnPress,
	RepeatWhileHeld,
	OnceOnRelease,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_WidgetAnimationDataType
enum class ES_WidgetAnimationDataType : uint8 {
	Float,
	Vector,
	LinearColor,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ChallengeWidgetState
enum class ES_ChallengeWidgetState : uint8 {
	Uninitialized,
	Active,
	Complete,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_CompassMode
enum class ES_CompassMode : uint8 {
	Default,
	Radial,
	ES_MAX,
};

// Enum Scavenger.ES_CustomizationItemEntryType
enum class ES_CustomizationItemEntryType : uint8 {
	Uninitialized,
	CosmeticType,
	CosmeticItem,
	SubmaterialAndColorOptionPair,
	SubmaterialSlot,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SocialWidgetSorting
enum class ES_SocialWidgetSorting : uint8 {
	Alphabetical,
	AlphabeticalOnlineFirst,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_FriendListTabs
enum class ES_FriendListTabs : uint8 {
	FriendsTab,
	RecentPlayersTab,
	InvitesTab,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ScoreboardDataContext
enum class ES_ScoreboardDataContext : uint8 {
	Session,
	PreTakeoff,
	PostTakeoff,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_GutterStatus
enum class ES_GutterStatus : uint8 {
	Inside_Gutter_Shape,
	Outside_Gutter,
	InGutter_Left,
	InGutter_Top,
	InGutter_Right,
	InGutter_Bottom,
	ES_MAX,
};

// Enum Scavenger.ES_GutterShape
enum class ES_GutterShape : uint8 {
	Square,
	Elipse,
	SubWidget,
	ES_MAX,
};

// Enum Scavenger.ES_ResultOfEquipping
enum class ES_ResultOfEquipping : uint8 {
	CannotEquip,
	DropsExistingItem,
	EquipsIntoEmptySlot,
	MergesIntoExistingItem,
	SwapsWithExistingItem,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InventoryToastAction
enum class ES_InventoryToastAction : uint8 {
	Added,
	Removed,
	Swapped,
	Converted,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InventoryScreenArea
enum class ES_InventoryScreenArea : uint8 {
	None,
	Currency_DEPRECATED,
	Equipment_DEPRECATED,
	Inventory,
	QuickItem,
	Teammate_DEPRECATED,
	Vicinity,
	Weapon,
	Resources,
	Ammo,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_RecipeCardType
enum class ES_RecipeCardType : uint8 {
	Crafting,
	Loadout,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_LobbyEventTimerMode
enum class ES_LobbyEventTimerMode : uint8 {
	Disabled,
	TimerAndStatus,
	TimerAndStatusIfNotSilent,
	TimerOnly,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_NameplateType
enum class ES_NameplateType : uint8 {
	Disabled,
	Default,
	Social,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_NavBarType
enum class ES_NavBarType : uint8 {
	Primary,
	Secondary,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_NavBarCycleMode
enum class ES_NavBarCycleMode : uint8 {
	Wrap,
	Clamp,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_NavBarCycleDirection
enum class ES_NavBarCycleDirection : uint8 {
	Left,
	Right,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_RewardGrantContext
enum class ES_RewardGrantContext : uint8 {
	None,
	SessionReward,
	AccountProgressionReward,
	ContentGrant,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_StaminaThresholdEvent
enum class ES_StaminaThresholdEvent : uint8 {
	Critical,
	Low,
	Normal,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_StaminaChangeEvent
enum class ES_StaminaChangeEvent : uint8 {
	Decreasing,
	Increasing,
	Stable,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PostMatchStatDisplayType
enum class ES_PostMatchStatDisplayType : uint8 {
	Time,
	Value,
	Percentage,
	Multiplier,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_InGameRadialMenuSlot
enum class ES_InGameRadialMenuSlot : uint8 {
	Quick,
	Enemy,
	LootingHere,
	AttackingHere,
	DefendingHere,
	GoingHere,
	Danger,
	SomeoneHasBeen,
	ClearAll,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ResearchStationId
enum class ES_ResearchStationId : uint8 {
	k_research_2,
	k_research_3,
	k_research_4,
	k_research_5,
	k_research_6,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ResearchStationStatus
enum class ES_ResearchStationStatus : uint8 {
	Available,
	Locked,
	InProgress,
	Pending,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SalvageStatus
enum class ES_SalvageStatus : uint8 {
	Ready,
	Complete,
	InProgress,
	Pending,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ScoreboardRecapStep
enum class ES_ScoreboardRecapStep : uint8 {
	Initialized,
	PreTakeoff,
	PostTakeoff,
	PlacementDisplay,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SeasonsOverlay
enum class ES_SeasonsOverlay : uint8 {
	Main,
	BattlePassPurchase,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SocialNotificationType
enum class ES_SocialNotificationType : uint8 {
	PartyMemberKicked,
	PartyMemberJoined,
	PartyMemberLeft,
	PartyInviteReceived,
	PartyInviteSent,
	PartyJoinRequestReceived,
	PartyJoinRequestSent,
	FriendRequestReceived,
	FriendRequestAccepted,
	FriendRequestSent,
	YouJoinedParty,
	YouLeftParty,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_ThreatLevel
enum class ES_ThreatLevel : uint8 {
	None,
	Alerted,
	Aggro,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_TempTierState
enum class ES_TempTierState : uint8 {
	AvailableTier,
	NextTier,
	HiddenTier,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_PrimitiveNetCode
enum class ES_PrimitiveNetCode : uint8 {
	LocallySimulatedWithReplicatedInputWithForces,
	LocallySimulatedWithReplicatedInputWithTeleportation,
	Count,
	ES_MAX,
};

// Enum Scavenger.ES_SeatType
enum class ES_SeatType : uint8 {
	Driver,
	Passenger,
	Count,
	None,
	ES_MAX,
};

// Enum Scavenger.ES_SkeletalMeshTickCondition
enum class ES_SkeletalMeshTickCondition : uint8 {
	Never,
	StartDisabled,
	OnlyIfTheresAViewport,
	Always,
	AlwaysForRealEvenOfServersWithoutAuthority,
	ES_MAX,
};

// Enum Scavenger.ES_SteeringMode
enum class ES_SteeringMode : uint8 {
	Warthog,
	Ghost,
	WarthogGhostHybrid,
	ES_MAX,
};

// Enum Scavenger.RestState
enum class RestState : uint8 {
	AT_REST,
	JUST_STARTED_MOVING,
	MOVING,
	RestState_MAX,
};

// Enum Scavenger.ExtrapolationMode
enum class ExtrapolationMode : uint8 {
	UNLIMITED,
	LIMITED,
	NONE,
	ExtrapolationMode_MAX,
};

// Enum Scavenger.SyncMode
enum class SyncMode : uint8 {
	XYZ,
	XY,
	XZ,
	YZ,
	X,
	Y,
	Z,
	NONE,
	SyncMode_MAX,
};

// ScriptStruct Scavenger.S_PreTakeDamageInfo
// Size: 0x02 (Inherited: 0x00)
struct FS_PreTakeDamageInfo {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Scavenger.S_PointDamageEvent
// Size: 0xe8 (Inherited: 0xb0)
struct FS_PointDamageEvent : FPointDamageEvent {
	bool Critical; // 0xb0(0x01)
	bool HeadShot; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	struct FS_DamagePushBackInfo PushBackInfo; // 0xb4(0x1c)
	float PoiseDamage; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FS_DamagePredictionID PredictionID; // 0xd8(0x10)
};

// ScriptStruct Scavenger.S_DamagePredictionID
// Size: 0x10 (Inherited: 0x00)
struct FS_DamagePredictionID {
	struct APawn* PredictingPlayerPawn; // 0x00(0x08)
	uint32_t PredictionID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_DamagePushBackInfo
// Size: 0x1c (Inherited: 0x00)
struct FS_DamagePushBackInfo {
	struct FVector Direction; // 0x00(0x0c)
	float GroundForce; // 0x0c(0x04)
	float AirForce; // 0x10(0x04)
	float GroundDuration; // 0x14(0x04)
	float AirDuration; // 0x18(0x04)
};

// ScriptStruct Scavenger.BoneHitInfo
// Size: 0x10 (Inherited: 0x00)
struct FBoneHitInfo {
	struct FName BoneDescription; // 0x00(0x08)
	float m_damageMultiplier; // 0x08(0x04)
	bool m_bHeadShot; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Scavenger.S_ActionHandle
// Size: 0x04 (Inherited: 0x00)
struct FS_ActionHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_ActionPayload
// Size: 0x20 (Inherited: 0x00)
struct FS_ActionPayload {
	enum class ES_ActionID m_actionID; // 0x00(0x01)
	char pad_1[0x1f]; // 0x01(0x1f)
};

// ScriptStruct Scavenger.S_EventParameterVariant
// Size: 0x30 (Inherited: 0x00)
struct FS_EventParameterVariant {
	struct TWeakObjectPtr<struct UObject> Object; // 0x00(0x08)
	struct UObject* Class; // 0x08(0x08)
	enum class ES_EventParameter Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FName> Tags; // 0x18(0x10)
	char TeamId; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Scavenger.S_EventParameterControllerVariant
// Size: 0x80 (Inherited: 0x30)
struct FS_EventParameterControllerVariant : FS_EventParameterVariant {
	struct FS_EventParameterVariant ControlledPawn; // 0x30(0x30)
	int32_t AIIndex; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct US_PlayerClassData* ClassData; // 0x68(0x08)
	int32_t TeamIndex; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	int64_t TotalExperiencePoints; // 0x78(0x08)
};

// ScriptStruct Scavenger.S_ActorDownedParameters
// Size: 0x01 (Inherited: 0x00)
struct FS_ActorDownedParameters {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_ActorTerminalParameters
// Size: 0x20 (Inherited: 0x00)
struct FS_ActorTerminalParameters {
	enum class ES_StatChangeCauseType StatChangeCauseType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString InstigatorDisplayName; // 0x08(0x10)
	struct UObject* TerminalObjectClass; // 0x18(0x08)
};

// ScriptStruct Scavenger.S_ActorStatsStateChangedParameters
// Size: 0x18 (Inherited: 0x00)
struct FS_ActorStatsStateChangedParameters {
	struct TArray<struct FS_EventParameterArrayOfPlayerFloatPairs> PlayerDamagePerStatsState; // 0x00(0x10)
	enum class ES_StatChangeCauseType StatChangeCauseType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Scavenger.S_EventParameterArrayOfPlayerFloatPairs
// Size: 0x10 (Inherited: 0x00)
struct FS_EventParameterArrayOfPlayerFloatPairs {
	struct TArray<struct FS_EventParameterPlayerFloatPair> PlayerFloatPairs; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_EventParameterPlayerFloatPair
// Size: 0x88 (Inherited: 0x00)
struct FS_EventParameterPlayerFloatPair {
	struct FS_EventParameterControllerVariant PlayerController; // 0x00(0x80)
	float Value; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Scavenger.S_ItemState
// Size: 0x40 (Inherited: 0x00)
struct FS_ItemState {
	int32_t Flags; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct US_ItemData* ItemData; // 0x08(0x08)
	int32_t Count; // 0x10(0x04)
	struct FS_ItemStats ItemStats; // 0x14(0x10)
	int32_t LockedCount; // 0x24(0x04)
	float ServerTimestamp; // 0x28(0x04)
	char pad_2C[0x14]; // 0x2c(0x14)
};

// ScriptStruct Scavenger.S_ItemStats
// Size: 0x10 (Inherited: 0x00)
struct FS_ItemStats {
	bool bHasAtLeastOneValue; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Stats[0x3]; // 0x04(0x0c)
};

// ScriptStruct Scavenger.S_DeathRecap
// Size: 0x28 (Inherited: 0x00)
struct FS_DeathRecap {
	char PlayerKillerIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* KillerClassData; // 0x08(0x08)
	struct US_ItemData* KillerItem; // 0x10(0x08)
	struct UObject* KillerObjectClass; // 0x18(0x08)
	enum class ES_StatChangeCauseType DeathCauseType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Scavenger.S_PlayerCocoonedParameters
// Size: 0x01 (Inherited: 0x00)
struct FS_PlayerCocoonedParameters {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_PlayerFreedFromCocoonParameters
// Size: 0x01 (Inherited: 0x00)
struct FS_PlayerFreedFromCocoonParameters {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_PlayerKilledInCocoonParameters
// Size: 0x01 (Inherited: 0x00)
struct FS_PlayerKilledInCocoonParameters {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_PlayerExtractingParameters
// Size: 0x01 (Inherited: 0x00)
struct FS_PlayerExtractingParameters {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_PlayerExtractedParameters
// Size: 0x01 (Inherited: 0x00)
struct FS_PlayerExtractedParameters {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_StormData
// Size: 0x110 (Inherited: 0x00)
struct FS_StormData {
	bool bDirty; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector WorldLocationRealtime; // 0x04(0x0c)
	struct FVector WorldLocationReplicated; // 0x10(0x0c)
	float SpawnRadius; // 0x1c(0x04)
	float Radius; // 0x20(0x04)
	enum class ES_StormDamageZone DamageZone; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t StormId; // 0x28(0x04)
	enum class ES_StormCategory StormCategory; // 0x2c(0x01)
	enum class ES_StormSize StormSize; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float TerrainZIntersection; // 0x30(0x04)
	float Randomization; // 0x34(0x04)
	struct FVector Direction; // 0x38(0x0c)
	struct FVector TargetDirection; // 0x44(0x0c)
	float TargetDirectionTransitionDuration; // 0x50(0x04)
	float TargetRadius; // 0x54(0x04)
	float DeltaRadiusDeltaTime; // 0x58(0x04)
	float GroundSpeedRealtime; // 0x5c(0x04)
	float GroundSpeedReplicated; // 0x60(0x04)
	float TargetGroundSpeed; // 0x64(0x04)
	float DeltaGroundSpeedDeltaTimeRealtime; // 0x68(0x04)
	float DeltaGroundSpeedDeltaTimeReplicated; // 0x6c(0x04)
	float RotationalSpeedRealtime; // 0x70(0x04)
	float RotationalSpeedReplicated; // 0x74(0x04)
	float TargetRotationalSpeed; // 0x78(0x04)
	float DeltaRotationalSpeedDeltaTimeRealtime; // 0x7c(0x04)
	float DeltaRotationalSpeedDeltaTimeReplicated; // 0x80(0x04)
	float Turbulence; // 0x84(0x04)
	float TargetTurbulence; // 0x88(0x04)
	float DeltaTurbulenceDeltaTime; // 0x8c(0x04)
	struct FLinearColor Tint; // 0x90(0x10)
	struct FLinearColor TargetTint; // 0xa0(0x10)
	float TargetTintTransitionDuration; // 0xb0(0x04)
	struct FVector OutlineColor; // 0xb4(0x0c)
	struct FVector TargetOutlineColor; // 0xc0(0x0c)
	float TargetOutlineColorTransitionDuration; // 0xcc(0x04)
	float OutlineStrokeSize; // 0xd0(0x04)
	float TargetOutlineStrokeSize; // 0xd4(0x04)
	float DeltaOutlineStrokeSizeDeltaTime; // 0xd8(0x04)
	float TerrainSamplingTimer; // 0xdc(0x04)
	enum class ES_StormSpawnState SpawnState; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float SpawnStateTime; // 0xe4(0x04)
	float SkyMaskGrowthDuration; // 0xe8(0x04)
	float PreambleDuration; // 0xec(0x04)
	float GrowthDuration; // 0xf0(0x04)
	float ShrinkDuration; // 0xf4(0x04)
	float PostambleDuration; // 0xf8(0x04)
	float SkyMaskShrinkDuration; // 0xfc(0x04)
	char pad_100[0x10]; // 0x100(0x10)
};

// ScriptStruct Scavenger.S_ExecutionMontageTableRow
// Size: 0x140 (Inherited: 0x08)
struct FS_ExecutionMontageTableRow : FTableRowBase {
	struct FS_ExecutionMontageEntry Montages[0x4]; // 0x08(0x60)
	int32_t ExecutionTargetCharacterSize; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct AS_WeaponBase* WeaponOverride; // 0x70(0x08)
	struct FName PlayerCharacterExecutorNameID; // 0x78(0x08)
	struct TArray<struct AS_CharacterBase*> ExecutorCharacterTypeOverride; // 0x80(0x10)
	int32_t WeaponClassOverride; // 0x90(0x04)
	bool IsCosmeticPlayerOverride; // 0x94(0x01)
	bool bOverrideCameraSettings; // 0x95(0x01)
	char pad_96[0xa]; // 0x96(0x0a)
	struct FS_CameraSettingOverride CameraSettingsOverrides; // 0xa0(0xa0)
};

// ScriptStruct Scavenger.S_CameraSettingOverride
// Size: 0xa0 (Inherited: 0x08)
struct FS_CameraSettingOverride : FTableRowBase {
	enum class ES_CameraSettings Setting; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FS_CameraOverrideFloat SpringArmTargetLength; // 0x0c(0x08)
	struct FS_CameraOverrideFloat TargetFOV; // 0x14(0x08)
	struct FS_CameraOverrideVector SocketOffsetTranslation; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FS_CameraOverrideQuat SocketOffsetRotation; // 0x30(0x20)
	struct FS_CameraOverrideVector TargetOffset; // 0x50(0x10)
	struct FS_CameraOverrideBool AimKeepOnCameraCollision; // 0x60(0x02)
	struct FS_CameraOverrideBool HideBlockingCharacters; // 0x62(0x02)
	struct FS_CameraOverrideBool EnableCameraLag; // 0x64(0x02)
	char pad_66[0x2]; // 0x66(0x02)
	struct FS_CameraOverrideNoise NoiseTranslation; // 0x68(0x18)
	struct FS_CameraOverrideNoise NoiseRotation; // 0x80(0x18)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct Scavenger.S_CameraOverrideNoise
// Size: 0x18 (Inherited: 0x00)
struct FS_CameraOverrideNoise {
	bool bApplyOverride; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FS_CameraNoiseSettings OverrideValue; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_CameraNoiseSettings
// Size: 0x10 (Inherited: 0x00)
struct FS_CameraNoiseSettings {
	struct UCurveVector* Frequency; // 0x00(0x08)
	struct UCurveVector* Magnitude; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_CameraOverrideBool
// Size: 0x02 (Inherited: 0x00)
struct FS_CameraOverrideBool {
	bool bApplyOverride; // 0x00(0x01)
	bool OverrideValue; // 0x01(0x01)
};

// ScriptStruct Scavenger.S_CameraOverrideVector
// Size: 0x10 (Inherited: 0x00)
struct FS_CameraOverrideVector {
	bool bApplyOverride; // 0x00(0x01)
	enum class ES_CameraOverrideMode Mode; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector OverrideValue; // 0x04(0x0c)
};

// ScriptStruct Scavenger.S_CameraOverrideQuat
// Size: 0x20 (Inherited: 0x00)
struct FS_CameraOverrideQuat {
	bool bApplyOverride; // 0x00(0x01)
	enum class ES_CameraOverrideMode Mode; // 0x01(0x01)
	char pad_2[0xe]; // 0x02(0x0e)
	struct FQuat OverrideValue; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_CameraOverrideFloat
// Size: 0x08 (Inherited: 0x00)
struct FS_CameraOverrideFloat {
	bool bApplyOverride; // 0x00(0x01)
	enum class ES_CameraOverrideMode Mode; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float OverrideValue; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_ExecutionMontageEntry
// Size: 0x18 (Inherited: 0x00)
struct FS_ExecutionMontageEntry {
	struct UAnimMontage* ExecutorMontage; // 0x00(0x08)
	struct UAnimMontage* TargetMontage; // 0x08(0x08)
	float Separation; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_MetadataTableRowBase
// Size: 0x10 (Inherited: 0x08)
struct FS_MetadataTableRowBase : FTableRowBase {
	struct FName ID; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_DisplayableItemMetadata
// Size: 0x58 (Inherited: 0x10)
struct FS_DisplayableItemMetadata : FS_MetadataTableRowBase {
	struct FDataTableRowHandle LocalizedNameHandle; // 0x10(0x10)
	struct FDataTableRowHandle LocalizedDescriptionHandle; // 0x20(0x10)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x30(0x28)
};

// ScriptStruct Scavenger.S_DisplayableItemWithRarityMetadata
// Size: 0x60 (Inherited: 0x58)
struct FS_DisplayableItemWithRarityMetadata : FS_DisplayableItemMetadata {
	enum class ES_ItemRarity Rarity; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct Scavenger.S_EmoteMontageTableRow
// Size: 0x150 (Inherited: 0x60)
struct FS_EmoteMontageTableRow : FS_DisplayableItemWithRarityMetadata {
	struct UAnimMontage* EmoteMontage; // 0x60(0x08)
	bool bUsableInScavengers; // 0x68(0x01)
	bool bUsableInSocialHub; // 0x69(0x01)
	bool bUsableInSocialHubStreamerMode; // 0x6a(0x01)
	bool bOverrideCameraSettings; // 0x6b(0x01)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FS_CameraSettingOverride CameraSettingsOverrides; // 0x70(0xa0)
	bool bLockCharacterRotation; // 0x110(0x01)
	bool bCancelEmoteOnMovement; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	float MontageBlendOutTime; // 0x114(0x04)
	float EndOfEmoteRotationBlendTime; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UAnimMontage* EndOfEmoteBlendOutMontage; // 0x120(0x08)
	bool bIgnoreLoadoutCheck; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float VATScaleX; // 0x12c(0x04)
	float VATScaleY; // 0x130(0x04)
	int32_t GlowstickColor; // 0x134(0x04)
	struct FName CrowdAudioOneShotName; // 0x138(0x08)
	float VelocityModifier; // 0x140(0x04)
	char pad_144[0xc]; // 0x144(0x0c)
};

// ScriptStruct Scavenger.S_MapDisplayData
// Size: 0x78 (Inherited: 0x00)
struct FS_MapDisplayData {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct UTexture2D* AltTexture; // 0x08(0x08)
	float AltTextureSize; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UMaterialInstance* MaterialOverride; // 0x18(0x08)
	struct FVector2D WorldLocation; // 0x20(0x08)
	char Direction; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float WorldSize; // 0x2c(0x04)
	struct FLinearColor Color; // 0x30(0x10)
	struct FName DisplayText; // 0x40(0x08)
	struct FS_LocationLabel LocationLabel; // 0x48(0x04)
	enum class ES_MapIconUse MapIconUse; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t SlotIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	enum class ES_ZoomType ZoomType; // 0x58(0x01)
	char TeamIndex; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float ZoomLevel; // 0x5c(0x04)
	char ZOrder; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t PlayerId; // 0x64(0x04)
	enum class ES_EnemyInfoType EnemyInfoType; // 0x68(0x01)
	bool bAllowGuttering; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	struct FS_PingItemHandle PingHandle; // 0x6c(0x04)
	enum class ES_StatsState StatsState; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float IconOpacity; // 0x74(0x04)
};

// ScriptStruct Scavenger.S_PingItemHandle
// Size: 0x04 (Inherited: 0x00)
struct FS_PingItemHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_LocationLabel
// Size: 0x04 (Inherited: 0x00)
struct FS_LocationLabel {
	uint32_t LocationLabelIndexField; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_OnlineServiceManagerPlayerState
// Size: 0x9a8 (Inherited: 0x00)
struct FS_OnlineServiceManagerPlayerState {
	bool bIsLoggedIn; // 0x00(0x01)
	bool bServerExtendedPlayerInfoReceived; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FS_OnlineServiceManagerLoginMethod LoginMethod; // 0x08(0x50)
	struct FString PlayerPlatform; // 0x58(0x10)
	struct FText AccountName; // 0x68(0x18)
	int32_t AccountLevel; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TMap<struct FString, struct FS_OnlineCharacterState> MapOfCharacterIdToCharacterState; // 0x88(0x50)
	struct TArray<struct FS_OnlineInventoryItem> InventoryItems; // 0xd8(0x10)
	struct TMap<struct FString, struct FS_OnlineFileMetadata> PlayerFiles; // 0xe8(0x50)
	struct FS_UserSettings UserSettings; // 0x138(0x1b8)
	struct TMap<struct FName, int32_t> MapOfCurrencyIdToBalance; // 0x2f0(0x50)
	struct FS_OnlineServiceAuthenticationData AuthenticationData; // 0x340(0x4f0)
	struct FS_OnlinePowerGenerationState PowerGenerationState; // 0x830(0x18)
	struct TArray<struct FString> OwnedResearchStationIds; // 0x848(0x10)
	struct TArray<struct FS_OnlineResearchProjectState> ResearchProjectStates; // 0x858(0x10)
	struct TMap<struct FName, int32_t> PlayerFlags; // 0x868(0x50)
	struct TArray<struct FS_OnlineUnseenRewardGrants> UnseenRewards; // 0x8b8(0x10)
	struct FS_CosmeticLoadout AccountCosmeticLoadout; // 0x8c8(0x50)
	struct TArray<struct FS_OnlineChallengeInstance> ChallengeInstances; // 0x918(0x10)
	struct TArray<struct FS_OnlineSeasonState> SeasonStates; // 0x928(0x10)
	char pad_938[0x70]; // 0x938(0x70)
};

// ScriptStruct Scavenger.S_OnlineSeasonState
// Size: 0x30 (Inherited: 0x00)
struct FS_OnlineSeasonState {
	struct FName ID; // 0x00(0x08)
	int32_t Progress; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> TiersPendingClaim; // 0x10(0x10)
	struct TArray<int32_t> BattlePassTiersPendingClaim; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_OnlineChallengeInstance
// Size: 0x40 (Inherited: 0x00)
struct FS_OnlineChallengeInstance {
	struct FString ID; // 0x00(0x10)
	struct FName SlotType; // 0x10(0x08)
	struct FName ChallengeDefinitionId; // 0x18(0x08)
	struct FDateTime ExpiresOn; // 0x20(0x08)
	int32_t Progress; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<int32_t> PendingClaim; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_CosmeticLoadout
// Size: 0x50 (Inherited: 0x00)
struct FS_CosmeticLoadout {
	struct TMap<enum class ES_CosmeticLoadoutSlotType, struct FS_CosmeticLoadoutSlot> SlotTypeToSelectedItems; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_CosmeticLoadoutSlot
// Size: 0x28 (Inherited: 0x00)
struct FS_CosmeticLoadoutSlot {
	struct FName ItemMetadataId; // 0x00(0x08)
	struct FString ItemInstanceId; // 0x08(0x10)
	struct TArray<struct FS_CosmeticLoadoutSubMaterialSelection> SubMaterialSelections; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_CosmeticLoadoutSubMaterialSelection
// Size: 0x08 (Inherited: 0x00)
struct FS_CosmeticLoadoutSubMaterialSelection {
	struct FName SubMaterialMetadataId; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_OnlineUnseenRewardGrants
// Size: 0x50 (Inherited: 0x00)
struct FS_OnlineUnseenRewardGrants {
	struct FString ID; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	enum class ES_UnseenRewardSource Source; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString ContextString; // 0x28(0x10)
	int32_t ContextInt; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FS_OnlineRewardGrant> Grants; // 0x40(0x10)
};

// ScriptStruct Scavenger.S_OnlineRewardGrant
// Size: 0x20 (Inherited: 0x00)
struct FS_OnlineRewardGrant {
	enum class ES_OnlineRewardGrantType GrantType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString GrantId; // 0x08(0x10)
	int32_t GrantAmount; // 0x18(0x04)
	int32_t GrantStartingValue; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_OnlineResearchProjectState
// Size: 0x38 (Inherited: 0x00)
struct FS_OnlineResearchProjectState {
	struct FName ProjectID; // 0x00(0x08)
	struct FString ResearchStationId; // 0x08(0x10)
	int64_t StartTimeSeconds; // 0x18(0x08)
	int64_t CompletionTimeSeconds; // 0x20(0x08)
	struct FDateTime StartTime; // 0x28(0x08)
	struct FDateTime CompletionTime; // 0x30(0x08)
};

// ScriptStruct Scavenger.S_OnlinePowerGenerationState
// Size: 0x18 (Inherited: 0x00)
struct FS_OnlinePowerGenerationState {
	int32_t LastNotifiedBalance; // 0x00(0x04)
	int32_t PowerCap; // 0x04(0x04)
	struct FDateTime LastGenerationTime; // 0x08(0x08)
	struct FTimespan GenerationTimespan; // 0x10(0x08)
};

// ScriptStruct Scavenger.S_OnlineServiceAuthenticationData
// Size: 0x4f0 (Inherited: 0x00)
struct FS_OnlineServiceAuthenticationData {
	char pad_0[0x4a0]; // 0x00(0x4a0)
	struct FString PlayerId; // 0x4a0(0x10)
	struct FString AuthenticationToken; // 0x4b0(0x10)
	struct FString AccountLogin; // 0x4c0(0x10)
	struct FString PlayerEntityId; // 0x4d0(0x10)
	struct FString PlayerEntityType; // 0x4e0(0x10)
};

// ScriptStruct Scavenger.S_UserSettings
// Size: 0x1b8 (Inherited: 0x00)
struct FS_UserSettings {
	struct FS_UserGameSettings GameSettings; // 0x00(0x38)
	struct FS_UserInputSettings InputSettings; // 0x38(0x88)
	struct FS_UserAudioSettings AudioSettings; // 0xc0(0x30)
	struct FS_UserAccessibilitySettings AccessibilitySettings; // 0xf0(0x14)
	char pad_104[0x4]; // 0x104(0x04)
	struct FS_UserOnlineClientSettings OnlineClientSettings; // 0x108(0xa0)
	struct FDateTime OnlineStorageTimestamp; // 0x1a8(0x08)
	enum class ES_SavedUserSettingsVersion Version; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
};

// ScriptStruct Scavenger.S_UserOnlineClientSettings
// Size: 0xa0 (Inherited: 0x00)
struct FS_UserOnlineClientSettings {
	struct TMap<struct FString, int32_t> UserFlags; // 0x00(0x50)
	struct TMap<struct FString, struct FString> UserStrings; // 0x50(0x50)
};

// ScriptStruct Scavenger.S_UserAccessibilitySettings
// Size: 0x14 (Inherited: 0x00)
struct FS_UserAccessibilitySettings {
	int32_t ColorblindMode; // 0x00(0x04)
	int32_t SubtitleMode; // 0x04(0x04)
	enum class ES_SubtitleSize SubtitleSize; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MenuWrapMode; // 0x0c(0x04)
	int32_t MenuNarrationMode; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_UserAudioSettings
// Size: 0x30 (Inherited: 0x00)
struct FS_UserAudioSettings {
	float MasterVolume; // 0x00(0x04)
	float MusicVolume; // 0x04(0x04)
	float SoundFXVolume; // 0x08(0x04)
	float VoiceVolume; // 0x0c(0x04)
	struct FString VoiceInputDevice; // 0x10(0x10)
	int32_t ChatInputMode; // 0x20(0x04)
	int32_t ChatJoinMode; // 0x24(0x04)
	float ChatInputVolume; // 0x28(0x04)
	float ChatOutputVolume; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_UserInputSettings
// Size: 0x88 (Inherited: 0x00)
struct FS_UserInputSettings {
	struct TMap<enum class ES_GameInputActionType, struct FS_UserKeybindSetting> Keybinds; // 0x00(0x50)
	bool bMouseInvertY; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float MousePitchSensitivity; // 0x54(0x04)
	float MouseTurnSensitivity; // 0x58(0x04)
	float MousePitchRelativeSensitivity; // 0x5c(0x04)
	struct FName GamepadLayoutName; // 0x60(0x08)
	struct FName GamepadResponseCurveName; // 0x68(0x08)
	int32_t GamepadSensitivitySelection; // 0x70(0x04)
	enum class ES_DeadzoneSize GamepadMoveDeadzone; // 0x74(0x01)
	enum class ES_DeadzoneSize GamepadAimDeadzone; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	float GamepadPitchRelativeSensitivity; // 0x78(0x04)
	float GamepadADSSensitivityMultiplier; // 0x7c(0x04)
	bool bGamepadInvertY; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct Scavenger.S_UserKeybindSetting
// Size: 0x30 (Inherited: 0x00)
struct FS_UserKeybindSetting {
	struct FKey PrimaryKey; // 0x00(0x18)
	struct FKey SecondaryKey; // 0x18(0x18)
};

// ScriptStruct Scavenger.S_UserGameSettings
// Size: 0x38 (Inherited: 0x00)
struct FS_UserGameSettings {
	struct FString PreferredRegion; // 0x00(0x10)
	int32_t DamageNumberMode; // 0x10(0x04)
	int32_t CrouchMode; // 0x14(0x04)
	float FOV; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Culture; // 0x20(0x10)
	int32_t StreamerMode; // 0x30(0x04)
	int32_t CrossPlatformPlay; // 0x34(0x04)
};

// ScriptStruct Scavenger.S_OnlineFileMetadata
// Size: 0x40 (Inherited: 0x00)
struct FS_OnlineFileMetadata {
	struct FString Checksum; // 0x00(0x10)
	struct FString DownloadUrl; // 0x10(0x10)
	struct FString Filename; // 0x20(0x10)
	struct FDateTime LastModified; // 0x30(0x08)
	int32_t Size; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Scavenger.S_OnlineInventoryItem
// Size: 0x70 (Inherited: 0x00)
struct FS_OnlineInventoryItem {
	struct FName ID; // 0x00(0x08)
	struct FString InstanceID; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<struct FString, struct FString> customData; // 0x20(0x50)
};

// ScriptStruct Scavenger.S_OnlineCharacterState
// Size: 0xe0 (Inherited: 0x00)
struct FS_OnlineCharacterState {
	struct FString CharacterId; // 0x00(0x10)
	struct FName ClassId; // 0x10(0x08)
	struct FS_CharacterLoadout Loadout; // 0x18(0x50)
	struct FS_CosmeticLoadout CosmeticLoadout; // 0x68(0x50)
	struct TArray<struct FS_OnlineInventoryItem> InventoryItems; // 0xb8(0x10)
	struct TArray<int32_t> CharacterPoints; // 0xc8(0x10)
	int32_t CharacterLevel; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct Scavenger.S_CharacterLoadout
// Size: 0x50 (Inherited: 0x00)
struct FS_CharacterLoadout {
	struct TMap<enum class ES_LoadoutSlotType, struct FS_CharacterLoadoutSlot> SlotTypeToSelectedItems; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_CharacterLoadoutSlot
// Size: 0x20 (Inherited: 0x00)
struct FS_CharacterLoadoutSlot {
	struct TArray<struct FName> ItemMetadataIds; // 0x00(0x10)
	struct TArray<struct FString> ItemInstanceIds; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_OnlineServiceManagerLoginMethod
// Size: 0x50 (Inherited: 0x00)
struct FS_OnlineServiceManagerLoginMethod {
	enum class ES_OnlineServiceManagerLoginMethod MethodType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Identifier; // 0x08(0x10)
	struct FString Password; // 0x18(0x10)
	struct FString AccountId; // 0x28(0x10)
	enum class ES_ImprobableTestAccountType AccountType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString AccountAccessToken; // 0x40(0x10)
};

// ScriptStruct Scavenger.S_OnlineAssemblyRecipe
// Size: 0x38 (Inherited: 0x10)
struct FS_OnlineAssemblyRecipe : FS_MetadataTableRowBase {
	struct TArray<struct FS_OnlineAssemblyRecipeComponent> Inputs; // 0x10(0x10)
	int32_t InputPowerAmount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FS_OnlineAssemblyRecipeComponent> Outputs; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_OnlineAssemblyRecipeComponent
// Size: 0x18 (Inherited: 0x00)
struct FS_OnlineAssemblyRecipeComponent {
	struct FString CurrencyTypeName; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_LobbyEndpoint
// Size: 0x50 (Inherited: 0x00)
struct FS_LobbyEndpoint {
	struct FString EndpointUri; // 0x00(0x10)
	struct FString EndpointPingRegionCode; // 0x10(0x10)
	struct FString EndpointRegionTitle; // 0x20(0x10)
	struct FString EndpointDisplayTitle; // 0x30(0x10)
	bool bIsEnabled; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t MedianPingTimeMs; // 0x44(0x04)
	enum class ES_LobbyEndpointPingStatus PingStatus; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Scavenger.S_OnlineTitleNewsItem
// Size: 0x28 (Inherited: 0x00)
struct FS_OnlineTitleNewsItem {
	struct FString Title; // 0x00(0x10)
	struct FString Body; // 0x10(0x10)
	struct FDateTime Timestamp; // 0x20(0x08)
};

// ScriptStruct Scavenger.S_OnlinePlayerInventoryDelta
// Size: 0x60 (Inherited: 0x00)
struct FS_OnlinePlayerInventoryDelta {
	struct TArray<struct FS_OnlinePlayerInventoryItemDelta> OnlineItemDeltas; // 0x00(0x10)
	struct TMap<struct FName, int32_t> CurrencyIdToDelta; // 0x10(0x50)
};

// ScriptStruct Scavenger.S_OnlinePlayerInventoryItemDelta
// Size: 0x20 (Inherited: 0x00)
struct FS_OnlinePlayerInventoryItemDelta {
	struct FName OnlineItemId; // 0x00(0x08)
	struct FString ItemInstanceId; // 0x08(0x10)
	int32_t CountDelta; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_NamedLocationMetadata
// Size: 0x28 (Inherited: 0x10)
struct FS_NamedLocationMetadata : FS_MetadataTableRowBase {
	struct FName LocationDisplayName; // 0x10(0x08)
	struct FName LocationDescription; // 0x18(0x08)
	enum class ES_LocationType LocationType; // 0x20(0x01)
	enum class ES_LocationDifficultyTier LocationDifficulty; // 0x21(0x01)
	enum class ES_LocationFaction LocationFaction; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
};

// ScriptStruct Scavenger.S_PlayerObjectiveBase
// Size: 0x4c (Inherited: 0x00)
struct FS_PlayerObjectiveBase {
	uint32_t ReplicationKey; // 0x00(0x04)
	int32_t UniqueId; // 0x04(0x04)
	int32_t ParentUniqueId; // 0x08(0x04)
	struct FName LabelId; // 0x0c(0x08)
	struct FName DescriptionId; // 0x14(0x08)
	uint32_t InternalFlags; // 0x1c(0x04)
	int32_t Flags; // 0x20(0x04)
	int32_t ProgressCompleteValue; // 0x24(0x04)
	int32_t ProgressFailureValue; // 0x28(0x04)
	int32_t ProgressInitialValue; // 0x2c(0x04)
	struct FVector AreaCenter; // 0x30(0x0c)
	float AreaRadius; // 0x3c(0x04)
	float AreaTimeLimitInSeconds; // 0x40(0x04)
	float TimeLimitInSeconds; // 0x44(0x04)
	int32_t RewardScore; // 0x48(0x04)
};

// ScriptStruct Scavenger.S_PlayerObjectiveDelta
// Size: 0x0c (Inherited: 0x00)
struct FS_PlayerObjectiveDelta {
	int32_t UniqueId; // 0x00(0x04)
	bool bIsInvalid; // 0x04(0x01)
	bool bIsComplete; // 0x05(0x01)
	bool bIsFailed; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	int32_t ProgressValue; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_TeammateInfo
// Size: 0x120 (Inherited: 0x00)
struct FS_TeammateInfo {
	struct TArray<struct FS_PingItemInstance> PingItemInstances; // 0x00(0x10)
	struct FS_TeammateInfoGroupCore TeammateInfoGroupCore; // 0x10(0x70)
	char pad_80[0xa0]; // 0x80(0xa0)
};

// ScriptStruct Scavenger.S_TeammateInfoGroupCore
// Size: 0x70 (Inherited: 0x00)
struct FS_TeammateInfoGroupCore {
	bool bIsInStorm; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Direction; // 0x04(0x04)
	float HealthPercentage; // 0x08(0x04)
	float HealthRecoveryLimitMaximumPercentage; // 0x0c(0x04)
	float HealthRecoveryLimitPercentage; // 0x10(0x04)
	int32_t HeldPointCount; // 0x14(0x04)
	float NextExperienceLevelProgressPercentage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct APawn* Pawn; // 0x20(0x08)
	struct US_PlayerClassData* PlayerClassData; // 0x28(0x08)
	struct AS_PlayerController* PlayerController; // 0x30(0x08)
	struct AS_PlayerState* PlayerState; // 0x38(0x08)
	float RespawnTimestamp; // 0x40(0x04)
	enum class ES_ShieldLevel ShieldLevel; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float ShieldPercentage; // 0x48(0x04)
	float StaminaPercentage; // 0x4c(0x04)
	enum class ES_StatsState StatsState; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float TemperaturePercentage; // 0x54(0x04)
	struct FVector_NetQuantize WorldLocation; // 0x58(0x0c)
	int32_t HeldResurrectionTokenCount; // 0x64(0x04)
	uint32_t m_replicationKey; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Scavenger.S_PingItemInstance
// Size: 0x60 (Inherited: 0x00)
struct FS_PingItemInstance {
	struct APlayerController* NetOwningPlayerController; // 0x00(0x08)
	uint32_t PingReplicationKey; // 0x08(0x04)
	enum class ES_PingInfoType PingType; // 0x0c(0x01)
	enum class ES_AutoPingType AutoPingType; // 0x0d(0x01)
	enum class ES_PingItemEvent PingEvent; // 0x0e(0x01)
	enum class ES_StatType StatType; // 0x0f(0x01)
	enum class ES_CurrencyType CurrencyType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector PingLocation; // 0x14(0x0c)
	float Lifetime; // 0x20(0x04)
	float StartTimestamp; // 0x24(0x04)
	bool FollowPingedActor; // 0x28(0x01)
	bool bCanSendActor; // 0x29(0x01)
	bool bSerializeActor; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float OffscreenTracking; // 0x2c(0x04)
	struct AActor* PingedActor; // 0x30(0x08)
	struct US_ItemData* PingedItemData; // 0x38(0x08)
	struct UTexture2D* PingTexture; // 0x40(0x08)
	struct UMaterialInterface* PingMaterial; // 0x48(0x08)
	char pad_50[0x10]; // 0x50(0x10)
};

// ScriptStruct Scavenger.S_GameReportCardForPlayer
// Size: 0x118 (Inherited: 0x00)
struct FS_GameReportCardForPlayer {
	bool bValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FS_PlayerReportCard MyReportCard; // 0x08(0x60)
	struct FS_TeamReportCard MyTeamReportCard; // 0x68(0x38)
	struct TArray<struct FS_PlayerReportCard> MyTeammateReportCards; // 0xa0(0x10)
	struct FS_GameModeReportCard GameModeReportCard; // 0xb0(0x20)
	struct FS_GameRewardReceipt GameRewardReceipt; // 0xd0(0x48)
};

// ScriptStruct Scavenger.S_GameRewardReceipt
// Size: 0x48 (Inherited: 0x00)
struct FS_GameRewardReceipt {
	struct FString MatchID; // 0x00(0x10)
	bool bValid; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName PlayerClass; // 0x14(0x08)
	int32_t AwardCXP; // 0x1c(0x04)
	float BoostMultiplierGlobal; // 0x20(0x04)
	float BoostMultiplierPersonal; // 0x24(0x04)
	struct TArray<struct FS_BoostMultiplierContext> BoostMultiplierTeam; // 0x28(0x10)
	struct TArray<struct FName> SalvageItemRewards; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_BoostMultiplierContext
// Size: 0x18 (Inherited: 0x00)
struct FS_BoostMultiplierContext {
	struct FString Context; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_GameModeReportCard
// Size: 0x20 (Inherited: 0x00)
struct FS_GameModeReportCard {
	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TeamsInSession; // 0x04(0x04)
	int32_t TeamsExtracted; // 0x08(0x04)
	int32_t ExplorerCount; // 0x0c(0x04)
	int32_t ExplorersExtracted; // 0x10(0x04)
	int32_t ShardsHarvested; // 0x14(0x04)
	int32_t ShardsExtracted; // 0x18(0x04)
	bool bTutorialGame; // 0x1c(0x01)
	bool bObjectiveComplete; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Scavenger.S_PlayerReportCard
// Size: 0x60 (Inherited: 0x00)
struct FS_PlayerReportCard {
	bool bValid; // 0x00(0x01)
	char pad_1[0xb]; // 0x01(0x0b)
	struct FName AccountId; // 0x0c(0x08)
	struct FName PlayerClass; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString DisplayName; // 0x20(0x10)
	bool BoostStatusActive; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t TeamIndex; // 0x34(0x04)
	int32_t PlayerIndex; // 0x38(0x04)
	float TimeSurvived; // 0x3c(0x04)
	float LifestreakSeconds; // 0x40(0x04)
	float LifestreakGameLengthFraction; // 0x44(0x04)
	float DamageDone; // 0x48(0x04)
	bool bExtracted; // 0x4c(0x01)
	bool bExitedEarly; // 0x4d(0x01)
	bool bStayedUntilEndOfGame; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct TArray<struct FName> ExtractedSalvage; // 0x50(0x10)
};

// ScriptStruct Scavenger.S_TeamReportCard
// Size: 0x38 (Inherited: 0x00)
struct FS_TeamReportCard {
	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ShardsHarvested; // 0x04(0x04)
	int32_t ScrapCollected; // 0x08(0x04)
	int32_t ExplorersExtracted; // 0x0c(0x04)
	int32_t ObjectivesCompleted; // 0x10(0x04)
	int32_t ShardsExtracted; // 0x14(0x04)
	int32_t ShardsBanked; // 0x18(0x04)
	bool bTeamExtracted; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TArray<struct FName> ExtractedSalvage; // 0x20(0x10)
	int32_t TeamPlacement; // 0x30(0x04)
	bool TeamVictory; // 0x34(0x01)
	enum class ES_TeamGameEndReason GameEndReason; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct Scavenger.S_KRADLRadarClientData
// Size: 0xd8 (Inherited: 0x00)
struct FS_KRADLRadarClientData {
	char pad_0[0xd8]; // 0x00(0xd8)
};

// ScriptStruct Scavenger.S_KRADLRadarSettings
// Size: 0x28 (Inherited: 0x00)
struct FS_KRADLRadarSettings {
	float UpdateFrequency; // 0x00(0x04)
	float UpdateDistance; // 0x04(0x04)
	float PersistTime; // 0x08(0x04)
	float FadeTime; // 0x0c(0x04)
	bool bIsActive; // 0x10(0x01)
	bool bShowInStorms; // 0x11(0x01)
	bool bSyncPingTime; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float StartTime; // 0x14(0x04)
	struct FVector_NetQuantize WorldPosition; // 0x18(0x0c)
	int32_t RadarID; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_InteractableItem
// Size: 0x40 (Inherited: 0x00)
struct FS_InteractableItem {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x08(0x08)
	int32_t instanceIndex; // 0x10(0x04)
	enum class ES_InteractIcon IconType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FVector DebugLocation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UPrimitiveComponent*> ComponentsToHighlight; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_LobbyQueue
// Size: 0x70 (Inherited: 0x00)
struct FS_LobbyQueue {
	struct FString QueueId; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Status; // 0x20(0x10)
	int32_t NumPlayers; // 0x30(0x04)
	bool IsCustomQueue; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t AutoStartSeconds; // 0x38(0x04)
	int32_t AutoStartTimeLeft; // 0x3c(0x04)
	int32_t EstimatedQueueTime; // 0x40(0x04)
	int32_t MinGameSessionSize; // 0x44(0x04)
	int32_t MaxGameSessionSize; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FJsonObjectWrapper MetaData; // 0x50(0x20)
};

// ScriptStruct Scavenger.S_TrackedResearchProject
// Size: 0x28 (Inherited: 0x00)
struct FS_TrackedResearchProject {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Scavenger.S_RecipeMetadata
// Size: 0x150 (Inherited: 0x58)
struct FS_RecipeMetadata : FS_DisplayableItemMetadata {
	enum class ES_LoadoutSlotType LoadoutSlot; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FDataTableRowHandle NextTierRecipeData; // 0x60(0x10)
	struct TSoftObjectPtr<struct US_RecipeData> RecipeData; // 0x70(0x28)
	struct TArray<struct FString> LabelIds; // 0x98(0x10)
	struct TArray<struct TSoftObjectPtr<struct US_PlayerClassData>> RestrictedToCharacters; // 0xa8(0x10)
	int32_t RequiredLevel; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FS_RecipeInput> Inputs; // 0xc0(0x10)
	struct FDataTableRowHandle OutputItemMetadata; // 0xd0(0x10)
	struct TSoftObjectPtr<struct US_ItemData> OutputItemHandle; // 0xe0(0x28)
	int32_t OutputItemCount; // 0x108(0x04)
	float CreationTimeInSeconds; // 0x10c(0x04)
	struct FS_AbilitySet GrantedAbilities; // 0x110(0x10)
	struct TArray<struct UGameplayEffect*> GrantedEffects; // 0x120(0x10)
	int32_t CraftingLimit; // 0x130(0x04)
	struct FS_ItemViewerSettings FrontEndItemViewerSettings; // 0x134(0x1c)
};

// ScriptStruct Scavenger.S_ItemViewerSettings
// Size: 0x1c (Inherited: 0x00)
struct FS_ItemViewerSettings {
	struct FRotator RotationOffset; // 0x00(0x0c)
	struct FVector PositionOffset; // 0x0c(0x0c)
	float SizeScalar; // 0x18(0x04)
};

// ScriptStruct Scavenger.S_AbilitySet
// Size: 0x10 (Inherited: 0x00)
struct FS_AbilitySet {
	struct TArray<struct FS_AbilitySpecifier> Abilities; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_AbilitySpecifier
// Size: 0x38 (Inherited: 0x00)
struct FS_AbilitySpecifier {
	char bIsTriggerable : 1; // 0x00(0x01)
	char bActivateOnceOnGive : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName AbilityTriggerID; // 0x04(0x08)
	int32_t AbilityLevel; // 0x0c(0x04)
	SoftClassProperty AbilityClass; // 0x10(0x28)
};

// ScriptStruct Scavenger.S_RecipeInput
// Size: 0x40 (Inherited: 0x00)
struct FS_RecipeInput {
	struct FDataTableRowHandle InputItemMetadata; // 0x00(0x10)
	struct TSoftObjectPtr<struct US_ItemData> InputItemData; // 0x10(0x28)
	int32_t InputItemQuantity; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Scavenger.S_ObjectiveHandle
// Size: 0x08 (Inherited: 0x00)
struct FS_ObjectiveHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_KRADLEnemyInfo
// Size: 0x40 (Inherited: 0x00)
struct FS_KRADLEnemyInfo {
	struct AActor* Actor; // 0x00(0x08)
	struct FVector_NetQuantize WorldPosition; // 0x08(0x0c)
	float FadeTime; // 0x14(0x04)
	float DetectionDistance; // 0x18(0x04)
	float PersistTime; // 0x1c(0x04)
	enum class ES_EnemyInfoType EnemyInfoType; // 0x20(0x01)
	enum class ES_EnemyInfoUpdateMode EnemyInfoUpdateMode; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	int32_t EnemyIconID; // 0x28(0x04)
	char pad_2C[0x14]; // 0x2c(0x14)
};

// ScriptStruct Scavenger.S_PlayerPresenceStatus
// Size: 0x88 (Inherited: 0x00)
struct FS_PlayerPresenceStatus {
	struct FString PlayerId; // 0x00(0x10)
	struct FS_PlatformInformation PlatformInformation; // 0x10(0x18)
	struct FString DisplayName; // 0x28(0x10)
	struct FString PartyId; // 0x38(0x10)
	int32_t CurrentPartyPlayerCount; // 0x48(0x04)
	bool IsPartyLeader; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t PlayerLevel; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString LobbyEndpointUri; // 0x58(0x10)
	bool CrossplayEnabled; // 0x68(0x01)
	enum class ES_SocialPresenceStatus PresenceStatus; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct FString ClientChangelist; // 0x70(0x10)
	bool HasBeenSent; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct Scavenger.S_PlatformInformation
// Size: 0x18 (Inherited: 0x00)
struct FS_PlatformInformation {
	enum class ES_Platform Platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString PlatformId; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_ReceivedTextChatMessage
// Size: 0x48 (Inherited: 0x00)
struct FS_ReceivedTextChatMessage {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Scavenger.S_FriendEntry
// Size: 0xb0 (Inherited: 0x00)
struct FS_FriendEntry {
	struct FString PlayerId; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	enum class ES_FriendState FriendState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FS_PlayerPresenceStatus Presence; // 0x28(0x88)
};

// ScriptStruct Scavenger.S_OnlineItemMetadata
// Size: 0x88 (Inherited: 0x58)
struct FS_OnlineItemMetadata : FS_DisplayableItemMetadata {
	enum class ES_OnlineItemMetadataType ItemType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FDataTableRowHandle ItemMetadataHandle; // 0x60(0x10)
	bool AllowUnrestrictedAccess; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FDataTableRowHandle> AvailableCosmetics; // 0x78(0x10)
};

// ScriptStruct Scavenger.S_ActiveGameplayEffect
// Size: 0x3c8 (Inherited: 0x00)
struct FS_ActiveGameplayEffect {
	struct FActiveGameplayEffect ActiveGameplayEffect; // 0x00(0x370)
	char bIsMetadataValid : 1; // 0x370(0x01)
	char pad_370_1 : 7; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct FS_GameplayEffectMetadata GameplayEffectMetadata; // 0x378(0x50)
};

// ScriptStruct Scavenger.S_GameplayEffectMetadata
// Size: 0x50 (Inherited: 0x00)
struct FS_GameplayEffectMetadata {
	struct FText Name; // 0x00(0x18)
	struct FText NameCapitalized; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct UTexture2D* Icon; // 0x48(0x08)
};

// ScriptStruct Scavenger.S_CrowdStats
// Size: 0xe0 (Inherited: 0x00)
struct FS_CrowdStats {
	struct US_SocialHubCrowdAudioData* CrowdAudioData; // 0x00(0x08)
	struct TArray<struct FS_CrowdMemberGroup> MemberGroups; // 0x08(0x10)
	struct TArray<struct FS_CrowdStatsDirectionalBin> NearDirectionalBins; // 0x18(0x10)
	struct TArray<struct FS_CrowdStatsDirectionalBin> FarDirectionalBins; // 0x28(0x10)
	struct TMap<struct FName, struct FS_CrowdStatsForLoopingState> LoopingStateStats; // 0x38(0x50)
	struct TMap<struct FName, struct FS_CrowdOneShotClusterArray> OneShotClusters; // 0x88(0x50)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct Scavenger.S_CrowdOneShotClusterArray
// Size: 0x10 (Inherited: 0x00)
struct FS_CrowdOneShotClusterArray {
	struct TArray<struct FS_CrowdOneShotCluster> Clusters; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_CrowdOneShotCluster
// Size: 0x58 (Inherited: 0x00)
struct FS_CrowdOneShotCluster {
	struct FBox BoundingBox; // 0x00(0x1c)
	int32_t Count; // 0x1c(0x04)
	struct FVector AverageLocation; // 0x20(0x0c)
	char pad_2C[0x1c]; // 0x2c(0x1c)
	float CreationTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ClusterId; // 0x50(0x08)
};

// ScriptStruct Scavenger.S_CrowdStatsForLoopingState
// Size: 0x28 (Inherited: 0x00)
struct FS_CrowdStatsForLoopingState {
	int32_t Count; // 0x00(0x04)
	struct FVector AverageLocation; // 0x04(0x0c)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Scavenger.S_CrowdStatsDirectionalBin
// Size: 0x60 (Inherited: 0x00)
struct FS_CrowdStatsDirectionalBin {
	int32_t Count; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, int32_t> LoopingStateCounts; // 0x08(0x50)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Scavenger.S_CrowdMemberGroup
// Size: 0x18 (Inherited: 0x00)
struct FS_CrowdMemberGroup {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct US_SocialHubCrowdAudioComponent*> CrowdMembers; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_MILEDataBank
// Size: 0x20 (Inherited: 0x00)
struct FS_MILEDataBank {
	int32_t TotalMILEData; // 0x00(0x04)
	int32_t TotalPhaseData; // 0x04(0x04)
	int32_t CurrentDataTarget; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FS_DataScore> HighScores; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_DataScore
// Size: 0x18 (Inherited: 0x00)
struct FS_DataScore {
	int32_t Score; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString PlayerName; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_CosmeticItemMetadata
// Size: 0x1c8 (Inherited: 0x60)
struct FS_CosmeticItemMetadata : FS_DisplayableItemWithRarityMetadata {
	enum class ES_CosmeticType CosmeticType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct TSoftObjectPtr<struct USkeletalMesh>> ReplacementMeshes; // 0x68(0x10)
	struct TMap<struct TSoftObjectPtr<struct US_ItemData>, struct FS_CosmeticItemMetadataItemSpecificCustomization> MapOfItemDataToAdditionalCustomization; // 0x78(0x50)
	struct TArray<struct FS_CosmeticItemSubMaterialSlotMetadata> SubMaterialSlots; // 0xc8(0x10)
	struct TArray<struct FDataTableRowHandle> TinkerPacks; // 0xd8(0x10)
	struct TArray<struct FString> CharacterRestriction; // 0xe8(0x10)
	struct FName MontageTableID; // 0xf8(0x08)
	struct TMap<enum class ES_CosmeticTitleSize, struct FDataTableRowHandle> TitleStyleSetHandles; // 0x100(0x50)
	struct TMap<enum class ES_CosmeticTitleSize, struct FSlateBrush> TitleBackerBrushes; // 0x150(0x50)
	struct TSoftObjectPtr<struct UTexture2D> BannerEmblemTexture; // 0x1a0(0x28)
};

// ScriptStruct Scavenger.S_CosmeticItemSubMaterialSlotMetadata
// Size: 0x40 (Inherited: 0x00)
struct FS_CosmeticItemSubMaterialSlotMetadata {
	struct FName SlotId; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FDataTableRowHandle LocalizedNameHandle; // 0x20(0x10)
	struct TArray<struct FS_CosmeticItemSubMaterialSlotTargetMetadata> MaterialTargets; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_CosmeticItemSubMaterialSlotTargetMetadata
// Size: 0x18 (Inherited: 0x00)
struct FS_CosmeticItemSubMaterialSlotTargetMetadata {
	struct FName MaterialSlotName; // 0x00(0x08)
	struct FString MaterialParamPrefix; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_CosmeticItemMetadataItemSpecificCustomization
// Size: 0x88 (Inherited: 0x00)
struct FS_CosmeticItemMetadataItemSpecificCustomization {
	struct TSoftObjectPtr<struct USkeletalMesh> AdditionalAttachmentMesh; // 0x00(0x28)
	struct TMap<struct TSoftObjectPtr<struct USkeletalMesh>, struct FS_CosmeticItemMetadataSkeletalMeshSpecificCustomization> SkeletalMeshToAdditionalCustomization; // 0x28(0x50)
	struct TArray<struct FS_CosmeticItemMetadataItemSocketAttachmentCustomization> SocketAttachmentCustomizations; // 0x78(0x10)
};

// ScriptStruct Scavenger.S_CosmeticItemMetadataItemSocketAttachmentCustomization
// Size: 0x40 (Inherited: 0x00)
struct FS_CosmeticItemMetadataItemSocketAttachmentCustomization {
	struct FName SocketName; // 0x00(0x08)
	bool HideOriginalSocketAttachment; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<struct USkeletalMesh> AdditionalAttachmentMesh; // 0x10(0x28)
	struct FName SocketToAttachToOnTargetComponent; // 0x38(0x08)
};

// ScriptStruct Scavenger.S_CosmeticItemMetadataSkeletalMeshSpecificCustomization
// Size: 0x60 (Inherited: 0x00)
struct FS_CosmeticItemMetadataSkeletalMeshSpecificCustomization {
	struct FName MaskTextureParameter; // 0x00(0x08)
	struct TSoftObjectPtr<struct UTexture2D> MaskTexture; // 0x08(0x28)
	struct FName NormalTextureParameter; // 0x30(0x08)
	struct TSoftObjectPtr<struct UTexture2D> NormalTexture; // 0x38(0x28)
};

// ScriptStruct Scavenger.S_UnseenObjectBadgeConfig
// Size: 0xc0 (Inherited: 0x00)
struct FS_UnseenObjectBadgeConfig {
	bool bManuallySetMetadataTypes; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class ES_OnlineItemMetadataType> MetadataTypes; // 0x08(0x10)
	bool bManuallySetResourceTypes; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<enum class ES_OnlineResourceType> ResourceTypes; // 0x20(0x10)
	bool bManuallySetResearchProjectTypes; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<enum class ES_OnlineResearchProjectType> ResearchProjectTypes; // 0x38(0x10)
	bool bManuallySetLoadoutSlotTypes; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<enum class ES_LoadoutSlotType> LoadoutSlotTypes; // 0x50(0x10)
	struct TArray<struct FName> OnlineItemIds; // 0x60(0x10)
	struct TArray<struct FName> ResearchProjectIds; // 0x70(0x10)
	bool bManuallySetCosmeticTypes; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<enum class ES_CosmeticType> CosmeticTypes; // 0x88(0x10)
	bool bManuallySetSocialTypes; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<enum class ES_SocialType> SocialTypes; // 0xa0(0x10)
	struct TArray<struct FName> SeasonsTierIds; // 0xb0(0x10)
};

// ScriptStruct Scavenger.S_LobbyPlayer
// Size: 0x108 (Inherited: 0x00)
struct FS_LobbyPlayer {
	struct FString PlayerId; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString PlatformDisplayName; // 0x20(0x10)
	struct FString Platform; // 0x30(0x10)
	struct FString PlatformId; // 0x40(0x10)
	struct FString CurrentPartyId; // 0x50(0x10)
	int32_t DraftState; // 0x60(0x04)
	int32_t DraftPeriodStartTime; // 0x64(0x04)
	struct FS_LobbyPlayerCharacter SelectedCharacter; // 0x68(0x80)
	struct TArray<struct FS_LobbyCustomizationItem> AccountCustomizationItems; // 0xe8(0x10)
	int32_t PlayerLevel; // 0xf8(0x04)
	int32_t PartySlotsAvailable; // 0xfc(0x04)
	bool IsLocked; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct Scavenger.S_LobbyCustomizationItem
// Size: 0x48 (Inherited: 0x00)
struct FS_LobbyCustomizationItem {
	int32_t SlotType; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SlotTypeName; // 0x08(0x10)
	struct FString ItemInstanceId; // 0x18(0x10)
	struct FString ItemId; // 0x28(0x10)
	struct TArray<struct FS_LobbyCustomizationItemSubMaterialSelection> SubMaterials; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_LobbyCustomizationItemSubMaterialSelection
// Size: 0x28 (Inherited: 0x00)
struct FS_LobbyCustomizationItemSubMaterialSelection {
	struct FString SubMaterialId; // 0x00(0x10)
	struct FString PaletteId; // 0x10(0x10)
	int32_t ColorIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_LobbyPlayerCharacter
// Size: 0x80 (Inherited: 0x00)
struct FS_LobbyPlayerCharacter {
	struct FString Character; // 0x00(0x10)
	struct TArray<struct FS_LobbyInventoryItem> LoadoutItems; // 0x10(0x10)
	struct TArray<struct FS_LobbyCustomizationItem> CustomizationItems; // 0x20(0x10)
	struct TMap<struct FString, int32_t> CharacterPoints; // 0x30(0x50)
};

// ScriptStruct Scavenger.S_LobbyInventoryItem
// Size: 0x38 (Inherited: 0x00)
struct FS_LobbyInventoryItem {
	int32_t SlotType; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SlotTypeName; // 0x08(0x10)
	struct FString ItemInstanceId; // 0x18(0x10)
	struct FString ItemId; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_LobbyConnectToServer
// Size: 0x58 (Inherited: 0x00)
struct FS_LobbyConnectToServer {
	struct FString ServerIp; // 0x00(0x10)
	struct FString Protocol; // 0x10(0x10)
	int32_t TeamIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FJsonObjectWrapper MetaData; // 0x28(0x20)
	struct FString ChatRoom; // 0x48(0x10)
};

// ScriptStruct Scavenger.S_LobbyStartDraft
// Size: 0x20 (Inherited: 0x00)
struct FS_LobbyStartDraft {
	int32_t DraftPeriodTime; // 0x00(0x04)
	int32_t DraftInitialCountdownTimeMs; // 0x04(0x04)
	int32_t DraftTransitionFadeTimeMs; // 0x08(0x04)
	int32_t DraftStartingCountdownTimeMs; // 0x0c(0x04)
	struct TArray<struct FString> TeamDraftOrder; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_LobbyTeamState
// Size: 0x68 (Inherited: 0x00)
struct FS_LobbyTeamState {
	struct FS_LobbyTeam TeamState; // 0x00(0x48)
	int32_t AutoStartSeconds; // 0x48(0x04)
	int32_t SpawnIndex; // 0x4c(0x04)
	struct FString CurrentQueueId; // 0x50(0x10)
	int32_t SpawnScenario; // 0x60(0x04)
	int32_t ServerPlayerCount; // 0x64(0x04)
};

// ScriptStruct Scavenger.S_LobbyTeam
// Size: 0x48 (Inherited: 0x00)
struct FS_LobbyTeam {
	struct FString TeamId; // 0x00(0x10)
	struct FString ServerName; // 0x10(0x10)
	struct TArray<struct FS_LobbyParty> Parties; // 0x20(0x10)
	int32_t TeamIndex; // 0x30(0x04)
	int32_t SpawnIndex; // 0x34(0x04)
	struct FString ChatRoom; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_LobbyParty
// Size: 0x60 (Inherited: 0x00)
struct FS_LobbyParty {
	struct FString PartyId; // 0x00(0x10)
	struct FString LeaderId; // 0x10(0x10)
	struct TArray<struct FS_LobbyPlayer> Members; // 0x20(0x10)
	struct FString QueueId; // 0x30(0x10)
	struct FString TeamId; // 0x40(0x10)
	struct FString ChatRoom; // 0x50(0x10)
};

// ScriptStruct Scavenger.S_PendingPartyInvite
// Size: 0x70 (Inherited: 0x00)
struct FS_PendingPartyInvite {
	struct FString PlayerId; // 0x00(0x10)
	struct FString PartyId; // 0x10(0x10)
	struct FS_LobbyEndpoint lobbyEndpoint; // 0x20(0x50)
};

// ScriptStruct Scavenger.S_NavigationInputData
// Size: 0x40 (Inherited: 0x08)
struct FS_NavigationInputData : FTableRowBase {
	enum class ES_GameInputActionType InputAction; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText DisplayText; // 0x10(0x18)
	enum class ES_InputActionFlag ActionFlag; // 0x28(0x01)
	enum class ES_NavigationInputCategory NavigationCategory; // 0x29(0x01)
	enum class ES_InputSourceShowMode InputSourceShowMode; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct UAkAudioEvent* InputAudioEvent; // 0x30(0x08)
	bool EnabledByDefault; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Scavenger.S_AbilityTimer
// Size: 0x0c (Inherited: 0x00)
struct FS_AbilityTimer {
	float RemainingTime; // 0x00(0x04)
	float MaxTime; // 0x04(0x04)
	enum class ES_AbilityTimerState State; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Scavenger.S_AbilityHandleNamePair
// Size: 0x0c (Inherited: 0x00)
struct FS_AbilityHandleNamePair {
	struct FName AbilityKey; // 0x00(0x08)
	struct FGameplayAbilitySpecHandle AbilityHandle; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_GameplayEffectMetadataTableRow
// Size: 0x60 (Inherited: 0x08)
struct FS_GameplayEffectMetadataTableRow : FTableRowBase {
	struct FGameplayTag Tag; // 0x08(0x08)
	struct FS_GameplayEffectMetadata MetaData; // 0x10(0x50)
};

// ScriptStruct Scavenger.S_ActionActivationMetadata
// Size: 0x01 (Inherited: 0x00)
struct FS_ActionActivationMetadata {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_ActionConfig
// Size: 0x20 (Inherited: 0x00)
struct FS_ActionConfig {
	enum class ES_ActionResponse m_responseList[0x10]; // 0x00(0x10)
	float m_maxQueueTime; // 0x10(0x04)
	float m_maxRemoteQueueTime; // 0x14(0x04)
	enum class ES_MultiActionCondition m_multiActionCondition; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float m_cooldownTime; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_SlideActionData
// Size: 0x03 (Inherited: 0x00)
struct FS_SlideActionData {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct Scavenger.S_EmoteActionData
// Size: 0x08 (Inherited: 0x00)
struct FS_EmoteActionData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_UseItemActionData
// Size: 0x18 (Inherited: 0x00)
struct FS_UseItemActionData {
	char pad_0[0x8]; // 0x00(0x08)
	struct US_ItemData* m_itemData; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Scavenger.S_ActionTableRow
// Size: 0x20 (Inherited: 0x08)
struct FS_ActionTableRow : FTableRowBase {
	char pad_8[0x1]; // 0x08(0x01)
	enum class ES_ActionResponse Jump; // 0x09(0x01)
	enum class ES_ActionResponse Dodge; // 0x0a(0x01)
	enum class ES_ActionResponse Mantle; // 0x0b(0x01)
	enum class ES_ActionResponse Sprint; // 0x0c(0x01)
	enum class ES_ActionResponse Crouch; // 0x0d(0x01)
	enum class ES_ActionResponse Cocoon; // 0x0e(0x01)
	enum class ES_ActionResponse FireGun; // 0x0f(0x01)
	enum class ES_ActionResponse MeleeAttack; // 0x10(0x01)
	enum class ES_ActionResponse Reload; // 0x11(0x01)
	enum class ES_ActionResponse AutoReload; // 0x12(0x01)
	enum class ES_ActionResponse SwapWeapon; // 0x13(0x01)
	enum class ES_ActionResponse ADS; // 0x14(0x01)
	enum class ES_ActionResponse Slide; // 0x15(0x01)
	enum class ES_ActionResponse Interact; // 0x16(0x01)
	enum class ES_ActionResponse UseItem; // 0x17(0x01)
	enum class ES_ActionResponse Emote; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Scavenger.S_ActiveAction
// Size: 0x98 (Inherited: 0x00)
struct FS_ActiveAction {
	char pad_0[0x8]; // 0x00(0x08)
	struct FS_ActionPayload m_actionPayload; // 0x08(0x20)
	char pad_28[0x70]; // 0x28(0x70)
};

// ScriptStruct Scavenger.S_AISound
// Size: 0x30 (Inherited: 0x00)
struct FS_AISound {
	struct UAkAudioEvent* Event; // 0x00(0x08)
	int32_t Priority; // 0x08(0x04)
	uint32_t IsManaged; // 0x0c(0x04)
	float TriggerProbability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct US_AIAudioManagedGroup*> ManagedGroups; // 0x18(0x10)
	int32_t RepetitionLimitNum; // 0x28(0x04)
	float RepetitionLimitTimeWindowS; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_AIStateSound
// Size: 0x40 (Inherited: 0x30)
struct FS_AIStateSound : FS_AISound {
	enum class ES_AIAudioState State; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MinLoopOffsetS; // 0x34(0x04)
	float MaxLoopOffsetS; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Scavenger.S_EventSoundGroup
// Size: 0x18 (Inherited: 0x00)
struct FS_EventSoundGroup {
	enum class ES_AIAudioState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FS_AIEventSound> Sounds; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_AIEventSound
// Size: 0x38 (Inherited: 0x30)
struct FS_AIEventSound : FS_AISound {
	struct US_AIAudioEventType* Type; // 0x30(0x08)
};

// ScriptStruct Scavenger.S_AITransitionStateSound
// Size: 0x38 (Inherited: 0x30)
struct FS_AITransitionStateSound : FS_AISound {
	enum class ES_AIAudioState From; // 0x30(0x01)
	enum class ES_AIAudioState To; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Scavenger.S_PlayingAISound
// Size: 0x38 (Inherited: 0x30)
struct FS_PlayingAISound : FS_AISound {
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Scavenger.S_ClientQueuedAISound
// Size: 0x38 (Inherited: 0x30)
struct FS_ClientQueuedAISound : FS_AISound {
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Scavenger.S_ServerQueuedAISound
// Size: 0x40 (Inherited: 0x30)
struct FS_ServerQueuedAISound : FS_AISound {
	uint64_t SoundId; // 0x30(0x08)
	float triggerTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Scavenger.S_GroupPlayingSound
// Size: 0x38 (Inherited: 0x00)
struct FS_GroupPlayingSound {
	char pad_0[0x8]; // 0x00(0x08)
	struct FS_AISound Sound; // 0x08(0x30)
};

// ScriptStruct Scavenger.S_DirectionlessHardPingTableRow
// Size: 0x18 (Inherited: 0x08)
struct FS_DirectionlessHardPingTableRow : FTableRowBase {
	enum class ES_PoiseDamageType PoiseDamageType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName MontageKeyName; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_AITargetingWeights
// Size: 0x20 (Inherited: 0x00)
struct FS_AITargetingWeights {
	float ScoringBonusForCurrentTarget; // 0x00(0x04)
	float ThreatFromEnemyAIInMyMinWeaponRange; // 0x04(0x04)
	float ThreatFromMeBeingInEnemyWeaponRange; // 0x08(0x04)
	float ThreatFromPlayerDamagedMe; // 0x0c(0x04)
	float ThreatFromLastAIToDamageMe; // 0x10(0x04)
	float ThreatFromDistanceBetweenus; // 0x14(0x04)
	float ThreatFromAvailableKungFu; // 0x18(0x04)
	float ThreatFromPerExecutionBonus; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_DebugAIHitData
// Size: 0x8c (Inherited: 0x00)
struct FS_DebugAIHitData {
	struct FS_DebugDoAttackWillLikelyHitTargetData m_likelyHitData; // 0x00(0x5c)
	bool m_isInWeaponRange; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float m_weaponMaxRange; // 0x60(0x04)
	struct FVector m_characterEyeLoc; // 0x64(0x0c)
	struct FVector m_bulletStart; // 0x70(0x0c)
	struct FVector m_targetLocation; // 0x7c(0x0c)
	bool m_likelyHit; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
};

// ScriptStruct Scavenger.S_DebugDoAttackWillLikelyHitTargetData
// Size: 0x5c (Inherited: 0x00)
struct FS_DebugDoAttackWillLikelyHitTargetData {
	struct FVector m_startLocationSphere; // 0x00(0x0c)
	struct FVector m_targetLocationSphere; // 0x0c(0x0c)
	struct FVector m_targetTestLocationSphere; // 0x18(0x0c)
	struct FVector m_targetTestLocationLineStart; // 0x24(0x0c)
	bool m_isArcWeapon; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector m_traceHitResultStart; // 0x34(0x0c)
	struct FVector m_traceHitResultEnd; // 0x40(0x0c)
	bool m_traceHitSuccessful; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FVector m_impactPoint; // 0x50(0x0c)
};

// ScriptStruct Scavenger.S_DebugAIData
// Size: 0x100 (Inherited: 0x00)
struct FS_DebugAIData {
	struct FString m_behaviorTreeStr; // 0x00(0x10)
	float m_oldestSightQuery; // 0x10(0x04)
	float m_youngestSightQuery; // 0x14(0x04)
	float m_damageAge; // 0x18(0x04)
	float m_sightAge; // 0x1c(0x04)
	float m_hearingAge; // 0x20(0x04)
	float m_threat; // 0x24(0x04)
	float m_distToTarget; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString m_targetName; // 0x30(0x10)
	struct FString m_targetAcquisitionState; // 0x40(0x10)
	struct FString m_squadName; // 0x50(0x10)
	struct FString m_squadStageName; // 0x60(0x10)
	float m_visibility; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FVector> m_navPoints; // 0x78(0x10)
	int32_t m_currentSegment; // 0x88(0x04)
	bool m_isUsingHeadLook; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	int32_t m_headLookSegment; // 0x90(0x04)
	float m_headLookYaw; // 0x94(0x04)
	float m_headLookPitch; // 0x98(0x04)
	bool m_isCalcVelSpineBend; // 0x9c(0x01)
	bool m_isCalcPathFindSpineBend; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	float m_velSpineBendAngle; // 0xa0(0x04)
	float m_pathFindSpinePreBendAngle; // 0xa4(0x04)
	float m_pathFindSpinePostBendAngle; // 0xa8(0x04)
	float m_acceptanceRadius; // 0xac(0x04)
	bool m_isCurrentSegmentNavigationLink; // 0xb0(0x01)
	bool m_hasNavData; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct FString m_navDataName; // 0xb8(0x10)
	struct FString m_currentMovementMode; // 0xc8(0x10)
	struct FVector m_pawnRotation; // 0xd8(0x0c)
	struct FVector m_controllerRotation; // 0xe4(0x0c)
	uint64_t m_actorServerAddress; // 0xf0(0x08)
	int32_t m_numNearbyFiringPoints; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct Scavenger.S_AIAndWeaponInteraction
// Size: 0x48 (Inherited: 0x00)
struct FS_AIAndWeaponInteraction {
	SoftClassProperty WeaponClass; // 0x00(0x28)
	int32_t m_currentPatternIndex; // 0x28(0x04)
	char pad_2C[0xc]; // 0x2c(0x0c)
	struct TArray<struct FS_AIFiringPattern> FiringPatterns; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_AIFiringPattern
// Size: 0x10 (Inherited: 0x00)
struct FS_AIFiringPattern {
	struct FVector2D TimeRange; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
	bool TriggerDown; // 0x0c(0x01)
	bool OnlyExecuteFirstTime; // 0x0d(0x01)
	enum class ES_TriggerType triggerType; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct Scavenger.S_AIAndHeadInteraction
// Size: 0x18 (Inherited: 0x00)
struct FS_AIAndHeadInteraction {
	struct TArray<struct FS_AIHeadLookPattern> m_headLookPatterns; // 0x00(0x10)
	char pad_10[0x4]; // 0x10(0x04)
	bool m_loop; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Scavenger.S_AIHeadLookPattern
// Size: 0x28 (Inherited: 0x00)
struct FS_AIHeadLookPattern {
	struct FVector2D m_timeToReachDestination; // 0x00(0x08)
	struct FVector2D m_timeToStay; // 0x08(0x08)
	float m_finalRotationAngle; // 0x10(0x04)
	char pad_14[0x14]; // 0x14(0x14)
};

// ScriptStruct Scavenger.S_AimAssistRelevantPawnRecord
// Size: 0x10 (Inherited: 0x00)
struct FS_AimAssistRelevantPawnRecord {
	struct AS_CharacterBase* Character; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_AimAssistCameraTransform
// Size: 0x18 (Inherited: 0x00)
struct FS_AimAssistCameraTransform {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Scavenger.S_AimAssistSystemRanges
// Size: 0x18 (Inherited: 0x00)
struct FS_AimAssistSystemRanges {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Scavenger.S_AimAssistTargetRaycastRecord
// Size: 0x20 (Inherited: 0x00)
struct FS_AimAssistTargetRaycastRecord {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Scavenger.S_WeaponAimAssistSettings
// Size: 0x5c (Inherited: 0x00)
struct FS_WeaponAimAssistSettings {
	struct FS_WeaponAimAssistValues AimAssistValues; // 0x00(0x2c)
	bool bADSScaleByMagnification; // 0x2c(0x01)
	bool bADSOverrideEnabled; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct FS_WeaponAimAssistValues ADSOverrideAimAssistValues; // 0x30(0x2c)
};

// ScriptStruct Scavenger.S_WeaponAimAssistValues
// Size: 0x2c (Inherited: 0x00)
struct FS_WeaponAimAssistValues {
	float AutoAimAngle; // 0x00(0x04)
	float AutoAimFalloffNearStart; // 0x04(0x04)
	float AutoAimFalloffNearEnd; // 0x08(0x04)
	float AutoAimFalloffStart; // 0x0c(0x04)
	float AutoAimFalloffEnd; // 0x10(0x04)
	float AimFrictionAngle; // 0x14(0x04)
	float AimFrictionFalloffNearStart; // 0x18(0x04)
	float AimFrictionFalloffNearEnd; // 0x1c(0x04)
	float AimFrictionFalloffStart; // 0x20(0x04)
	float AimFrictionFalloffEnd; // 0x24(0x04)
	bool bEnableLeadVectorCalculation; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct Scavenger.S_AimAssistGlobalSettings
// Size: 0x5c (Inherited: 0x00)
struct FS_AimAssistGlobalSettings {
	float AngleFalloffRatio; // 0x00(0x04)
	float AimFrictionFactor; // 0x04(0x04)
	float AimFriction_TurnAccelerationDampingFactor; // 0x08(0x04)
	float MovementStickiness_MaxYawScale; // 0x0c(0x04)
	float MovementStickiness_MaxPitchScale; // 0x10(0x04)
	float MovementStickiness_MaxYawDeltaRate; // 0x14(0x04)
	float MovementStickiness_MaxPitchDeltaRate; // 0x18(0x04)
	float ActorUnderReticle_MaxDistance; // 0x1c(0x04)
	float ActorUnderReticle_InnerBaseFOV; // 0x20(0x04)
	float ActorUnderReticle_OuterBaseFOV; // 0x24(0x04)
	float ActorUnderReticle_BaseFOV_MagnificationExponent; // 0x28(0x04)
	float ActorUnderReticle_MaxDistance_MagnificationExponent; // 0x2c(0x04)
	float ActorUnderReticle_SelectionFactor_OverlapAmount; // 0x30(0x04)
	float ActorUnderReticle_SelectionFactor_DistanceFromCamera; // 0x34(0x04)
	float ActorUnderReticle_SelectionFactor_DownedMultiplier; // 0x38(0x04)
	float ActorUnderReticle_SelectionFactor_HostileMultiplier; // 0x3c(0x04)
	bool AutoAim_EnabledOnMouse; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float AutoAimSelectionFactor_DistanceFromCamera; // 0x44(0x04)
	float AutoAimSelectionFactor_OverlapAmount; // 0x48(0x04)
	float AutoAimSelectionFactor_AngularDistance; // 0x4c(0x04)
	float AutoAimSelectionFactor_SphereWeighting; // 0x50(0x04)
	float AutoAimEdgeSnappingFudgeFactor; // 0x54(0x04)
	float LeadVectorMaxOffset; // 0x58(0x04)
};

// ScriptStruct Scavenger.S_AimAssistSphereConfig
// Size: 0x08 (Inherited: 0x00)
struct FS_AimAssistSphereConfig {
	float SphereRadius; // 0x00(0x04)
	enum class ES_AimAssistAutoAimWeightingLevel AutoAimWeighting; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Scavenger.S_OverlordReference
// Size: 0x10 (Inherited: 0x00)
struct FS_OverlordReference {
	struct FName OverlordName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_OverlordSquad
// Size: 0x70 (Inherited: 0x00)
struct FS_OverlordSquad {
	struct FName SquadName; // 0x00(0x08)
	struct TArray<struct FS_SpawnerReference> SpawnerReferences; // 0x08(0x10)
	struct FS_StageReference InitialStage; // 0x18(0x08)
	struct FString CurrentStage; // 0x20(0x10)
	char pad_30[0x10]; // 0x30(0x10)
	int32_t AliveCount_HighWatermark; // 0x40(0x04)
	int32_t CurrentLivingCount; // 0x44(0x04)
	float LastSquadLeapTime; // 0x48(0x04)
	struct FVector2D SquadLeapBlockTimer; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	float LastSquadGrenadeTime; // 0x58(0x04)
	struct FVector2D SquadGrenadeBlockTimer; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	float MaxPatrolsRatio; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Scavenger.S_StageReference
// Size: 0x08 (Inherited: 0x00)
struct FS_StageReference {
	struct FName StageName; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_SpawnerReference
// Size: 0x10 (Inherited: 0x00)
struct FS_SpawnerReference {
	struct FName SpawnerName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_OverlordSquadStage
// Size: 0x28 (Inherited: 0x00)
struct FS_OverlordSquadStage {
	struct FName StageName; // 0x00(0x08)
	struct TArray<struct FS_AreaReference> AreaReference; // 0x08(0x10)
	int32_t m_maxAiCount; // 0x18(0x04)
	int32_t m_currentAiCount; // 0x1c(0x04)
	int32_t MaxDeadAiCount; // 0x20(0x04)
	int32_t CurrentDeadAiCount; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_AreaReference
// Size: 0x10 (Inherited: 0x00)
struct FS_AreaReference {
	struct FName AreaName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_OverlordSmatterAudioVolume
// Size: 0x50 (Inherited: 0x00)
struct FS_OverlordSmatterAudioVolume {
	struct FName TriggerName; // 0x00(0x08)
	struct TWeakObjectPtr<struct AS_AISmatterVolume> TriggerVolume; // 0x08(0x08)
	struct FS_SmatterReference SmatterVolume; // 0x10(0x10)
	struct FVector2D OnEnterCooldownTime; // 0x20(0x08)
	struct US_AIAudioEventType* OnEnterAudioEvent; // 0x28(0x08)
	struct FVector2D PeriodicCooldownTime; // 0x30(0x08)
	struct US_AIAudioEventType* PeriodicAudioEvent; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct Scavenger.S_SmatterReference
// Size: 0x10 (Inherited: 0x00)
struct FS_SmatterReference {
	struct FName SmatterName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_TriggerReference
// Size: 0x10 (Inherited: 0x00)
struct FS_TriggerReference {
	struct FName TriggerName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_SquadReference
// Size: 0x08 (Inherited: 0x00)
struct FS_SquadReference {
	struct FName SquadName; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_AIPoint
// Size: 0x40 (Inherited: 0x00)
struct FS_AIPoint {
	struct TArray<struct FName> TagsDeprecatedToBeRemoved; // 0x00(0x10)
	struct FVector Location; // 0x10(0x0c)
	char pad_1C[0x8]; // 0x1c(0x08)
	float QueryScore; // 0x24(0x04)
	bool bLowCover; // 0x28(0x01)
	bool bHighCover; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FVector CoverDirection; // 0x2c(0x0c)
	float DistanceToCover; // 0x38(0x04)
	float LockOutTimeInSeconds; // 0x3c(0x04)
};

// ScriptStruct Scavenger.S_AIHailEvent
// Size: 0x18 (Inherited: 0x00)
struct FS_AIHailEvent {
	struct AActor* m_instigator; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_EQSExecutionRequest
// Size: 0x20 (Inherited: 0x00)
struct FS_EQSExecutionRequest {
	struct UEnvQuery* QueryTemplate; // 0x00(0x08)
	enum class EEnvQueryRunMode RunMode; // 0x08(0x01)
	char pad_9[0x17]; // 0x09(0x17)
};

// ScriptStruct Scavenger.S_AmbianceEmitterData
// Size: 0x10 (Inherited: 0x00)
struct FS_AmbianceEmitterData {
	struct UAkAudioEvent* m_EmitterAudioEvent; // 0x00(0x08)
	float m_EmitFrequencyMin; // 0x08(0x04)
	float m_EmitFrequencyMax; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_AmbianceBedData
// Size: 0x10 (Inherited: 0x00)
struct FS_AmbianceBedData {
	struct UAkAudioEvent* m_BedAudioEvent; // 0x00(0x08)
	struct UAkAudioEvent* m_BedStopEvent; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_MontageCatalogue
// Size: 0x50 (Inherited: 0x00)
struct FS_MontageCatalogue {
	struct TMap<struct FName, struct FS_MontageVariationContainer> AnimCatalogue; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_MontageVariationContainer
// Size: 0x10 (Inherited: 0x00)
struct FS_MontageVariationContainer {
	struct TArray<struct UAnimMontage*> AnimVariations; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_OriginalMagazineAttachInfo
// Size: 0x60 (Inherited: 0x00)
struct FS_OriginalMagazineAttachInfo {
	struct AS_WeaponMagazineAttachment* Magazine; // 0x00(0x08)
	struct USceneComponent* OriginalParent; // 0x08(0x08)
	char pad_10[0x50]; // 0x10(0x50)
};

// ScriptStruct Scavenger.S_WeaponAssassinationMontages
// Size: 0x58 (Inherited: 0x00)
struct FS_WeaponAssassinationMontages {
	struct UAnimMontage* AttackerMontage; // 0x00(0x08)
	struct TMap<SoftClassProperty, struct UAnimMontage*> VictimMontages; // 0x08(0x50)
};

// ScriptStruct Scavenger.S_AttackArray
// Size: 0x28 (Inherited: 0x00)
struct FS_AttackArray {
	struct TArray<struct FS_AttackEntry> Entries; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
	uint32_t LastServerId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_AttackEntry
// Size: 0x30 (Inherited: 0x00)
struct FS_AttackEntry {
	enum class ES_ReplicatedAttackEntryType AttackType; // 0x00(0x01)
	char ServerFlags; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32_t ServerEntryId; // 0x04(0x04)
	enum class ES_WeaponSlot weaponSlot; // 0x08(0x01)
	enum class ES_TriggerType triggerType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	uint32_t StartID; // 0x0c(0x04)
	struct TArray<struct FS_DoAttackEntry> Attacks; // 0x10(0x10)
	struct UAnimMontage* StartMontage; // 0x20(0x08)
	bool attackCanceled; // 0x28(0x01)
	char shellsLoaded; // 0x29(0x01)
	bool StopReloadAnimation; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float ServerTimestamp; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_DoAttackEntry
// Size: 0x88 (Inherited: 0x00)
struct FS_DoAttackEntry {
	struct FS_AttackTargetInfo TargetInfo; // 0x00(0x70)
	char DoAttackID; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct TWeakObjectPtr<struct UAnimMontage> OwnerMontage; // 0x74(0x08)
	struct TWeakObjectPtr<struct UAnimMontage> WeaponMontage; // 0x7c(0x08)
	float ServerTimestamp; // 0x84(0x04)
};

// ScriptStruct Scavenger.S_AttackTargetInfo
// Size: 0x70 (Inherited: 0x00)
struct FS_AttackTargetInfo {
	char Flags; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector HitPoint; // 0x04(0x0c)
	struct FVector HitNormal; // 0x10(0x0c)
	struct FVector HitPointWS; // 0x1c(0x0c)
	struct FVector HitNormalWS; // 0x28(0x0c)
	char HitSurfaceTypeIndex; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct AActor* HitActor; // 0x38(0x08)
	uint32_t HitBoneIndex; // 0x40(0x04)
	struct FVector CorrectedStartLocation; // 0x44(0x0c)
	struct FS_RandState RandState; // 0x50(0x18)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Scavenger.S_RandState
// Size: 0x18 (Inherited: 0x00)
struct FS_RandState {
	char pad_0[0x8]; // 0x00(0x08)
	bool m_initialized; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32_t m_randCount; // 0x0c(0x04)
	int32_t m_seed; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_AttackDataQueue
// Size: 0x10 (Inherited: 0x00)
struct FS_AttackDataQueue {
	struct TArray<struct FS_AttackDataQueueEntry> AttackDataQueue; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_AttackDataQueueEntry
// Size: 0xa8 (Inherited: 0x00)
struct FS_AttackDataQueueEntry {
	struct FS_AttackTargetInfo AttackTargetInfo; // 0x00(0x70)
	struct TArray<struct FS_QueuedDamageRequest> QueuedDamageRequests; // 0x70(0x10)
	struct TArray<struct FS_QueuedExplosionRequest> QueuedExplosionRequests; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
};

// ScriptStruct Scavenger.S_QueuedExplosionRequest
// Size: 0xc8 (Inherited: 0x00)
struct FS_QueuedExplosionRequest {
	char pad_0[0x20]; // 0x00(0x20)
	struct UObject* DamageType; // 0x20(0x08)
	char pad_28[0xa0]; // 0x28(0xa0)
};

// ScriptStruct Scavenger.S_QueuedDamageRequest
// Size: 0x30 (Inherited: 0x00)
struct FS_QueuedDamageRequest {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct FS_PointDamageRequest> PointDamageRequests; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Scavenger.S_PointDamageRequest
// Size: 0x128 (Inherited: 0x00)
struct FS_PointDamageRequest {
	struct AActor* m_damagedActor; // 0x00(0x08)
	struct FS_PointDamageEvent m_damageEvent; // 0x08(0xe8)
	struct FS_PointDamageValidation m_validationData; // 0xf0(0x38)
};

// ScriptStruct Scavenger.S_PointDamageValidation
// Size: 0x38 (Inherited: 0x00)
struct FS_PointDamageValidation {
	struct FVector m_victimHitOffset; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AS_WeaponBase* m_causeWeapon; // 0x10(0x08)
	enum class ES_TriggerType m_triggerType; // 0x18(0x01)
	bool m_bCritical; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FS_RandState m_criticalRandState; // 0x20(0x18)
};

// ScriptStruct Scavenger.S_CharacterBaseMontagePackage
// Size: 0x50 (Inherited: 0x00)
struct FS_CharacterBaseMontagePackage {
	struct TMap<enum class ES_WeaponMontageEvent, struct FS_WeaponAttachmentOverridePackages> EventMontagePackages; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_WeaponAttachmentOverridePackages
// Size: 0xf8 (Inherited: 0x00)
struct FS_WeaponAttachmentOverridePackages {
	struct TMap<SoftClassProperty, struct US_AttackEventMontagePackage*> TriggerableAttachmentOverride; // 0x00(0x50)
	struct TMap<enum class ES_TriggerableWeaponAttachmentClass, struct US_AttackEventMontagePackage*> TriggerableAttachmentClassOverride; // 0x50(0x50)
	struct TMap<SoftClassProperty, struct US_AttackEventMontagePackage*> WeaponAttachmentOverride; // 0xa0(0x50)
	struct US_AttackEventMontagePackage* DefaultMontagePackage; // 0xf0(0x08)
};

// ScriptStruct Scavenger.S_WeaponBaseMontagePackage
// Size: 0x50 (Inherited: 0x00)
struct FS_WeaponBaseMontagePackage {
	struct TMap<enum class ES_WeaponMontageEvent, struct FS_WeaponAttachmentOverridePackages> EventMontagePackages; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_CharacterStanceContainer
// Size: 0x40 (Inherited: 0x00)
struct FS_CharacterStanceContainer {
	struct FS_AttackEventMontageVariationContainer Stances[0x4]; // 0x00(0x40)
};

// ScriptStruct Scavenger.S_AttackEventMontageVariationContainer
// Size: 0x10 (Inherited: 0x00)
struct FS_AttackEventMontageVariationContainer {
	struct TArray<struct UAnimMontage*> MontageVariations; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_AttackParameters
// Size: 0x38 (Inherited: 0x00)
struct FS_AttackParameters {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Scavenger.S_SwapWeaponPayload
// Size: 0x04 (Inherited: 0x00)
struct FS_SwapWeaponPayload {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_CancelReloadPayload
// Size: 0x10 (Inherited: 0x00)
struct FS_CancelReloadPayload {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_StopReloadPayload
// Size: 0x10 (Inherited: 0x00)
struct FS_StopReloadPayload {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_StartReloadPayload
// Size: 0x0c (Inherited: 0x00)
struct FS_StartReloadPayload {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_CancelAttackPayload
// Size: 0x0c (Inherited: 0x00)
struct FS_CancelAttackPayload {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_StopAttackPayload
// Size: 0x0c (Inherited: 0x00)
struct FS_StopAttackPayload {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_DoAttackPayload
// Size: 0xc8 (Inherited: 0x00)
struct FS_DoAttackPayload {
	char pad_0[0xc8]; // 0x00(0xc8)
};

// ScriptStruct Scavenger.S_StartAttackPayload
// Size: 0x0c (Inherited: 0x00)
struct FS_StartAttackPayload {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_AttackSlotState
// Size: 0xc0 (Inherited: 0x00)
struct FS_AttackSlotState {
	char pad_0[0x18]; // 0x00(0x18)
	struct FS_AttackDataQueueEntry AttackDataQueueEntry; // 0x18(0xa8)
};

// ScriptStruct Scavenger.S_AttributeSetTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FS_AttributeSetTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Scavenger.S_GameplayAttributeData
// Size: 0x90 (Inherited: 0x10)
struct FS_GameplayAttributeData : FGameplayAttributeData {
	char pad_10[0x68]; // 0x10(0x68)
	bool m_replicates; // 0x78(0x01)
	char pad_79[0x17]; // 0x79(0x17)
};

// ScriptStruct Scavenger.S_AttributeData
// Size: 0x30 (Inherited: 0x00)
struct FS_AttributeData {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Scavenger.S_IsUsingADSAttributeModifiers
// Size: 0x50 (Inherited: 0x00)
struct FS_IsUsingADSAttributeModifiers {
	struct TMap<bool, struct FS_AttributeModifierContainer> MapOfIsUsingADSToModifierContainer; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_AttributeModifierContainer
// Size: 0x10 (Inherited: 0x00)
struct FS_AttributeModifierContainer {
	struct TArray<struct FS_AttributeModifier> Modifiers; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_AttributeModifier
// Size: 0x0c (Inherited: 0x00)
struct FS_AttributeModifier {
	enum class ES_AttributeModification ModificationType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ModifyingAttributeName; // 0x04(0x08)
};

// ScriptStruct Scavenger.S_ChangeCauseAttributeModifiers
// Size: 0x50 (Inherited: 0x00)
struct FS_ChangeCauseAttributeModifiers {
	struct TMap<enum class ES_StatChangeCauseType, struct FS_AttributeModifierContainer> MapOfChangeCauseToModifierContainer; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_WeaponClassAttributeModifiers
// Size: 0x50 (Inherited: 0x00)
struct FS_WeaponClassAttributeModifiers {
	struct TMap<enum class ES_WeaponClass, struct FS_AttributeModifierContainer> MapOfWeaponClassToModifierContainer; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_AttributeInitialization
// Size: 0x30 (Inherited: 0x08)
struct FS_AttributeInitialization : FTableRowBase {
	float InitialValue; // 0x08(0x04)
	bool bShouldClampMinimum; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName MinimumAttributeName; // 0x10(0x08)
	float MinimumValue; // 0x18(0x04)
	bool bShouldClampMaximum; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName MaximumAttributeName; // 0x20(0x08)
	float MaximumValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_AudioImpactRow
// Size: 0x10 (Inherited: 0x08)
struct FS_AudioImpactRow : FTableRowBase {
	struct UAkAudioEvent* Event; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_AutoPingReprocessData
// Size: 0xa0 (Inherited: 0x00)
struct FS_AutoPingReprocessData {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Scavenger.S_AutoPingCounts
// Size: 0xa0 (Inherited: 0x00)
struct FS_AutoPingCounts {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Scavenger.S_AutoPingChannel
// Size: 0x58 (Inherited: 0x00)
struct FS_AutoPingChannel {
	struct TMap<enum class ES_AutoPingType, int32_t> MaxAutoPingCounts; // 0x00(0x50)
	int32_t MaxPingCount; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Scavenger.S_AutoPingPriorityContainer
// Size: 0x68 (Inherited: 0x00)
struct FS_AutoPingPriorityContainer {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<enum class ES_AutoPingType, struct FS_AutoPingTypeContainer> m_mapOfAutoPingTypeToAutoPingTypeContainer; // 0x08(0x50)
	char pad_58[0x10]; // 0x58(0x10)
};

// ScriptStruct Scavenger.S_AutoPingTypeContainer
// Size: 0xa8 (Inherited: 0x00)
struct FS_AutoPingTypeContainer {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct AS_PlayerController*, struct FS_AutoPingCollection> m_mapOfPlayerControllerToAutoPingCollection; // 0x08(0x50)
	struct TMap<int32_t, struct FS_AutoPingCollection> m_mapOfTeamIndexToAutoPingCollection; // 0x58(0x50)
};

// ScriptStruct Scavenger.S_AutoPingCollection
// Size: 0x20 (Inherited: 0x00)
struct FS_AutoPingCollection {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FS_AutoPingDistancePair> m_sortedAutoPingDistancePairs; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_AutoPingDistancePair
// Size: 0x10 (Inherited: 0x00)
struct FS_AutoPingDistancePair {
	char pad_0[0x8]; // 0x00(0x08)
	struct US_AutoPingComponent* m_autoPingComponent; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_BloodSplat
// Size: 0x18 (Inherited: 0x00)
struct FS_BloodSplat {
	struct UDecalComponent* Decal; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x10(0x08)
};

// ScriptStruct Scavenger.BodyPingRegion
// Size: 0xb0 (Inherited: 0x00)
struct FBodyPingRegion {
	struct FTransform BoundsTransform; // 0x00(0x30)
	struct TMap<struct FName, struct FVector> BoundsDirection; // 0x30(0x50)
	struct FName RegionName; // 0x80(0x08)
	struct FName ForwardsAnimDirectionMontageKey; // 0x88(0x08)
	struct FName BackwardsAnimDirectionMontageKey; // 0x90(0x08)
	struct FName RightAnimDirectionMontageKey; // 0x98(0x08)
	struct FName LeftAnimDirectionMontageKey; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct Scavenger.AimAssistInfo
// Size: 0x14 (Inherited: 0x00)
struct FAimAssistInfo {
	struct FName BoneDescription; // 0x00(0x08)
	float m_radius; // 0x08(0x04)
	float m_attraction; // 0x0c(0x04)
	float m_friction; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_DerezVisualGuidesData
// Size: 0x10 (Inherited: 0x00)
struct FS_DerezVisualGuidesData {
	bool bIsAnEnd; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StartingLength; // 0x04(0x04)
	float EndingLength; // 0x08(0x04)
	float Width; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_SplineBoxData
// Size: 0x1c (Inherited: 0x00)
struct FS_SplineBoxData {
	struct FVector WorldStartLocation; // 0x00(0x0c)
	struct FVector WorldEndLocation; // 0x0c(0x0c)
	float Width; // 0x18(0x04)
};

// ScriptStruct Scavenger.S_OpenSpanwerObjectBool
// Size: 0x02 (Inherited: 0x00)
struct FS_OpenSpanwerObjectBool {
	bool UpdateThis; // 0x00(0x01)
	bool Set; // 0x01(0x01)
};

// ScriptStruct Scavenger.S_InactiveRadiusFloat
// Size: 0x08 (Inherited: 0x00)
struct FS_InactiveRadiusFloat {
	bool UpdateThis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NewValue; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_ActiveRadiusFloat
// Size: 0x08 (Inherited: 0x00)
struct FS_ActiveRadiusFloat {
	bool UpdateThis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NewValue; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_FallbackSpawnHeightFloat
// Size: 0x08 (Inherited: 0x00)
struct FS_FallbackSpawnHeightFloat {
	bool UpdateThis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NewValue; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_FallbackSpawnRadiusFloat
// Size: 0x08 (Inherited: 0x00)
struct FS_FallbackSpawnRadiusFloat {
	bool UpdateThis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NewValue; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_AllowSpawnWithPlayersInsideBool
// Size: 0x02 (Inherited: 0x00)
struct FS_AllowSpawnWithPlayersInsideBool {
	bool UpdateThis; // 0x00(0x01)
	bool Set; // 0x01(0x01)
};

// ScriptStruct Scavenger.S_MaxReplenishmentCountInt
// Size: 0x08 (Inherited: 0x00)
struct FS_MaxReplenishmentCountInt {
	bool UpdateThis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t NewValue; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_ReplenishmentActiveBool
// Size: 0x02 (Inherited: 0x00)
struct FS_ReplenishmentActiveBool {
	bool UpdateThis; // 0x00(0x01)
	bool Set; // 0x01(0x01)
};

// ScriptStruct Scavenger.S_MinimumTimeAfterInitalSpawnsFVector2D
// Size: 0x0c (Inherited: 0x00)
struct FS_MinimumTimeAfterInitalSpawnsFVector2D {
	bool UpdateThis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D NewValues; // 0x04(0x08)
};

// ScriptStruct Scavenger.S_MinimumTimeBetweenSpawnsFVector2D
// Size: 0x0c (Inherited: 0x00)
struct FS_MinimumTimeBetweenSpawnsFVector2D {
	bool UpdateThis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D NewValues; // 0x04(0x08)
};

// ScriptStruct Scavenger.S_MaximumNumberInitiallySpawnedActorsInt
// Size: 0x08 (Inherited: 0x00)
struct FS_MaximumNumberInitiallySpawnedActorsInt {
	bool UpdateThis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t NewValue; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_MaximumNumberOfSpawnedActorsInt
// Size: 0x08 (Inherited: 0x00)
struct FS_MaximumNumberOfSpawnedActorsInt {
	bool UpdateThis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t NewValue; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_OnlyUsePointsForReplenishBool
// Size: 0x02 (Inherited: 0x00)
struct FS_OnlyUsePointsForReplenishBool {
	bool UpdateThis; // 0x00(0x01)
	bool Set; // 0x01(0x01)
};

// ScriptStruct Scavenger.S_OnlyUsePointsForSpawningBool
// Size: 0x02 (Inherited: 0x00)
struct FS_OnlyUsePointsForSpawningBool {
	bool UpdateThis; // 0x00(0x01)
	bool Set; // 0x01(0x01)
};

// ScriptStruct Scavenger.S_SpawnOneByOneBool
// Size: 0x02 (Inherited: 0x00)
struct FS_SpawnOneByOneBool {
	bool UpdateThis; // 0x00(0x01)
	bool Set; // 0x01(0x01)
};

// ScriptStruct Scavenger.S_SleepingBool
// Size: 0x02 (Inherited: 0x00)
struct FS_SleepingBool {
	bool UpdateThis; // 0x00(0x01)
	bool Set; // 0x01(0x01)
};

// ScriptStruct Scavenger.S_CarouselMetadata
// Size: 0x110 (Inherited: 0x10)
struct FS_CarouselMetadata : FS_MetadataTableRowBase {
	struct FDataTableRowHandle TitleFormatHandle; // 0x10(0x10)
	struct FDataTableRowHandle LocalizedTitleHandle; // 0x20(0x10)
	struct FDataTableRowHandle SubtitleFormatHandle; // 0x30(0x10)
	struct FDataTableRowHandle LocalizedSubtitleHandle; // 0x40(0x10)
	struct FDataTableRowHandle DescriptionFormatHandle; // 0x50(0x10)
	struct FDataTableRowHandle LocalizedDescriptionHandle; // 0x60(0x10)
	struct TSoftObjectPtr<struct UTexture2D> CarouselImage; // 0x70(0x28)
	struct US_WidgetCarouselItem* CarouselClass; // 0x98(0x08)
	struct US_WidgetCarouselItem* CarouselDetailsClass; // 0xa0(0x08)
	struct FDataTableRowHandle DetailsDescriptionFormatHandle; // 0xa8(0x10)
	struct FDataTableRowHandle LocalizedDetailsDescription; // 0xb8(0x10)
	struct FDataTableRowHandle DetailsTitleFormatHandle; // 0xc8(0x10)
	struct FDataTableRowHandle LocalizedDetailsTitle; // 0xd8(0x10)
	struct TSoftObjectPtr<struct UTexture2D> DetailsImage; // 0xe8(0x28)
};

// ScriptStruct Scavenger.S_WeaponScaleTableRow
// Size: 0x20 (Inherited: 0x08)
struct FS_WeaponScaleTableRow : FTableRowBase {
	struct AS_WeaponBase* weapon; // 0x08(0x08)
	struct FVector Scale; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_ProjectileSpawnPointInfo
// Size: 0x30 (Inherited: 0x00)
struct FS_ProjectileSpawnPointInfo {
	struct FVector PivotPoint; // 0x00(0x0c)
	struct FVector OffsetHipFire; // 0x0c(0x0c)
	struct FVector OffsetADS; // 0x18(0x0c)
	struct FVector OffsetGrenade; // 0x24(0x0c)
};

// ScriptStruct Scavenger.S_TimeBasedDamageTracker
// Size: 0x28 (Inherited: 0x00)
struct FS_TimeBasedDamageTracker {
	float TimeInterval; // 0x00(0x04)
	char pad_4[0x24]; // 0x04(0x24)
};

// ScriptStruct Scavenger.S_Visibility
// Size: 0x14 (Inherited: 0x00)
struct FS_Visibility {
	float CloakedVisibilty; // 0x00(0x04)
	float DayNightVisibilty; // 0x04(0x04)
	float MovementVisibilty; // 0x08(0x04)
	float StormVisibilty; // 0x0c(0x04)
	float TotalVisibilty; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_CachedLastDamageInfo
// Size: 0xa8 (Inherited: 0x00)
struct FS_CachedLastDamageInfo {
	struct AController* m_instigatorController; // 0x00(0x08)
	struct AActor* m_causeActor; // 0x08(0x08)
	char pad_10[0x98]; // 0x10(0x98)
};

// ScriptStruct Scavenger.S_LookAtInfo
// Size: 0x10 (Inherited: 0x00)
struct FS_LookAtInfo {
	bool ShouldLookAtTarget; // 0x00(0x01)
	bool ShouldLookTargetActor; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector LookAtTargetPosition; // 0x04(0x0c)
};

// ScriptStruct Scavenger.S_RepMontageState
// Size: 0x18 (Inherited: 0x00)
struct FS_RepMontageState {
	struct UAnimMontage* MontagePlaying; // 0x00(0x08)
	char AnimPlayCount; // 0x08(0x01)
	char AnimStopCount; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float AbortBlendTime; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_LeapCache
// Size: 0x18 (Inherited: 0x00)
struct FS_LeapCache {
	enum class ES_LeapState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector trajectory; // 0x04(0x0c)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Scavenger.AnimMontages
// Size: 0x500 (Inherited: 0x00)
struct FAnimMontages {
	struct FStateData StateData[0x4]; // 0x00(0x500)
};

// ScriptStruct Scavenger.StateData
// Size: 0x140 (Inherited: 0x00)
struct FStateData {
	struct FMontageContainer MontageContainer[0x4]; // 0x00(0x140)
};

// ScriptStruct Scavenger.MontageContainer
// Size: 0x50 (Inherited: 0x00)
struct FMontageContainer {
	struct TMap<struct AS_CharacterBase*, struct UAnimMontage*> Montages; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_CharacterMontageTableRow
// Size: 0xb8 (Inherited: 0x08)
struct FS_CharacterMontageTableRow : FTableRowBase {
	struct TArray<struct UAnimMontage*> DefaultMontageVariations; // 0x08(0x10)
	struct TMap<enum class ES_WeaponClass, struct FS_WeaponClassMontageContainer> WeaponClassOverrides; // 0x18(0x50)
	struct TMap<SoftClassProperty, struct FS_WeaponClassMontageContainer> WeaponOverrides; // 0x68(0x50)
};

// ScriptStruct Scavenger.S_WeaponClassMontageContainer
// Size: 0x60 (Inherited: 0x00)
struct FS_WeaponClassMontageContainer {
	struct TArray<struct UAnimMontage*> DefaultMontageVariations; // 0x00(0x10)
	struct TMap<enum class ES_DerivedCharacterBaseState, struct FS_BodyStateMontageContainer> StateOverrides; // 0x10(0x50)
};

// ScriptStruct Scavenger.S_BodyStateMontageContainer
// Size: 0x60 (Inherited: 0x00)
struct FS_BodyStateMontageContainer {
	struct TArray<struct UAnimMontage*> DefaultMontageVariations; // 0x00(0x10)
	struct TMap<enum class ES_CharacterBodyStance, struct FS_BodyStanceMontageContainer> StanceOverrides; // 0x10(0x50)
};

// ScriptStruct Scavenger.S_BodyStanceMontageContainer
// Size: 0x10 (Inherited: 0x00)
struct FS_BodyStanceMontageContainer {
	struct TArray<struct UAnimMontage*> MontageVariations; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_SlideState
// Size: 0x40 (Inherited: 0x00)
struct FS_SlideState {
	enum class ES_Slide CurrentSlide; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CurrentCustomSlideIdx; // 0x04(0x04)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Scavenger.CharMoveDebugInfo
// Size: 0x54 (Inherited: 0x00)
struct FCharMoveDebugInfo {
	char pad_0[0x4]; // 0x00(0x04)
	int32_t ID; // 0x04(0x04)
	bool wantToSprint; // 0x08(0x01)
	bool canSprint; // 0x09(0x01)
	bool movementCanSprint; // 0x0a(0x01)
	bool movementWantsToSprint; // 0x0b(0x01)
	bool movementIsSprinting; // 0x0c(0x01)
	bool movementAdsActive; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FS_MoveSpeed movementCurrSpeed; // 0x10(0x18)
	struct FS_MoveSpeed movementRepSpeed; // 0x28(0x18)
	enum class EPhysicalSurface movementSurfaceType; // 0x40(0x01)
	bool movementSlideActive; // 0x41(0x01)
	enum class ES_Slide movementCurrentSlide; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t movementCurrentSlideIdx; // 0x44(0x04)
	int32_t movementNumCustomDodges; // 0x48(0x04)
	float movementCurrentSlideSpeed; // 0x4c(0x04)
	float movementCurrentSlideTimer; // 0x50(0x04)
};

// ScriptStruct Scavenger.S_MoveSpeed
// Size: 0x18 (Inherited: 0x00)
struct FS_MoveSpeed {
	float m_walkSpeed; // 0x00(0x04)
	float m_sprintSpeed; // 0x04(0x04)
	float m_crouchedSpeed; // 0x08(0x04)
	float m_walkSpeedADS; // 0x0c(0x04)
	float m_sprintSpeedADS; // 0x10(0x04)
	float m_crouchedSpeedADS; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_CharacterMovementOverrides
// Size: 0x168 (Inherited: 0x00)
struct FS_CharacterMovementOverrides {
	struct UCurveFloat* ClientMaxAcceleration; // 0x00(0x08)
	struct UCurveFloat* ClientMaxInAirAcceleration; // 0x08(0x08)
	bool OverrideDodge; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FS_SlideSettings Dodge; // 0x18(0x98)
	bool OverrideFlatSlide; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FS_SlideSettings FlatSlide; // 0xb8(0x98)
	bool OverrideCustomDodge; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct TArray<struct FS_SlideSettings> CustomDodge; // 0x158(0x10)
};

// ScriptStruct Scavenger.S_SlideSettings
// Size: 0x98 (Inherited: 0x00)
struct FS_SlideSettings {
	float CooldownTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveFloat* SlideCurve; // 0x08(0x08)
	struct UCurveFloat* FallingSlideCurve; // 0x10(0x08)
	struct UCurveFloat* JumpSlideCurve; // 0x18(0x08)
	struct UCurveFloat* PerfectSlideCurve; // 0x20(0x08)
	enum class ES_SlideCurveMode SlideCurveMode; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UCurveFloat* SteerCurve; // 0x30(0x08)
	struct UCurveFloat* SpeedMultiCurve; // 0x38(0x08)
	struct UCurveFloat* PlaybackSpeedMultiplierCurve; // 0x40(0x08)
	bool bCrouchDuringSlide; // 0x48(0x01)
	bool bAbortIfStuck; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float TimeFacingSlideDirection; // 0x4c(0x04)
	float FaceDirOffset; // 0x50(0x04)
	float SlideDirBlendTime; // 0x54(0x04)
	bool bLoopingSlide; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float LoopStartTime; // 0x5c(0x04)
	float LoopStopTime; // 0x60(0x04)
	float LoopBreakOutAngle; // 0x64(0x04)
	float LoopBreakOutSpeed; // 0x68(0x04)
	float LoopBreakOutSpeedFraction; // 0x6c(0x04)
	bool bLoopBreakOutWhenEitherAngleOrSpeedFails; // 0x70(0x01)
	bool bLoopInAir; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float SlideBreakOutSpeed; // 0x74(0x04)
	float MinSlideTime; // 0x78(0x04)
	float SlideSpeedMultiStartBlendTime; // 0x7c(0x04)
	float SlideSpeedMultiEndBlendTime; // 0x80(0x04)
	float SlideAccLerpSpeed; // 0x84(0x04)
	float SlideBreakLerpSpeed; // 0x88(0x04)
	bool bAllowJumpDuringSlide; // 0x8c(0x01)
	bool bNoMoveInputAbortSlide; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	float TimeToSlideAfterAbort; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Scavenger.S_MantleSettings
// Size: 0x40 (Inherited: 0x00)
struct FS_MantleSettings {
	float MantleHeight; // 0x00(0x04)
	float MaxSpeedForMantling; // 0x04(0x04)
	float MinSpeedForMantling; // 0x08(0x04)
	float MaxHorizontalDistToLedge; // 0x0c(0x04)
	struct UAnimMontage* MontageLedge; // 0x10(0x08)
	struct TArray<struct FS_MantleMontage> ConditionalLedgeMontages; // 0x18(0x10)
	struct UAnimMontage* MontageFence; // 0x28(0x08)
	struct TArray<struct FS_MantleMontage> ConditionalFenceMontages; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_MantleMontage
// Size: 0x20 (Inherited: 0x00)
struct FS_MantleMontage {
	struct UAnimMontage* Montage; // 0x00(0x08)
	struct TArray<struct FS_MantleMontageCondition> ProbeConditions; // 0x08(0x10)
	bool DebugMe; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Scavenger.S_MantleMontageCondition
// Size: 0x10 (Inherited: 0x00)
struct FS_MantleMontageCondition {
	float ProbeOffset; // 0x00(0x04)
	float ProbeDistance; // 0x04(0x04)
	float ProbeRadius; // 0x08(0x04)
	bool ProbeMissForSucess; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Scavenger.S_CharacterWeaponMontageTableRow
// Size: 0x48 (Inherited: 0x08)
struct FS_CharacterWeaponMontageTableRow : FTableRowBase {
	enum class ES_WeaponMontageEvent WeaponEvent; // 0x08(0x01)
	enum class ES_DerivedCharacterBaseState CharacterState; // 0x09(0x01)
	enum class ES_CharacterBodyStance CharacterStance; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	SoftClassProperty CharacterClass; // 0x10(0x28)
	struct TArray<struct UAnimMontage*> MontageVariations; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_CheatMenuConfigEntry
// Size: 0x38 (Inherited: 0x00)
struct FS_CheatMenuConfigEntry {
	struct FString Path; // 0x00(0x10)
	enum class ES_CheatMenuItemType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Command; // 0x18(0x10)
	int32_t MinValue; // 0x28(0x04)
	int32_t MaxValue; // 0x2c(0x04)
	enum class ES_CheatMenuExecuteOn ExecuteOn; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Scavenger.S_CheatMenuHUDConfig
// Size: 0x64 (Inherited: 0x00)
struct FS_CheatMenuHUDConfig {
	struct FLinearColor LineColor; // 0x00(0x10)
	struct FLinearColor CursorLineColor; // 0x10(0x10)
	struct FLinearColor FolderColor; // 0x20(0x10)
	struct FLinearColor CursorFolderColor; // 0x30(0x10)
	struct FLinearColor FlashColor; // 0x40(0x10)
	float FlashTime; // 0x50(0x04)
	float DrawXStart; // 0x54(0x04)
	float DrawYStart; // 0x58(0x04)
	int32_t WindowSize; // 0x5c(0x04)
	int32_t PageLineCount; // 0x60(0x04)
};

// ScriptStruct Scavenger.S_CheatMenuHUDLayout
// Size: 0x50 (Inherited: 0x00)
struct FS_CheatMenuHUDLayout {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_CheatMenuHUDLayoutItem
// Size: 0x48 (Inherited: 0x00)
struct FS_CheatMenuHUDLayoutItem {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Scavenger.S_CheatMenuHUDItem
// Size: 0x08 (Inherited: 0x00)
struct FS_CheatMenuHUDItem {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_CheatMenuHUDItem_Favorite
// Size: 0x20 (Inherited: 0x08)
struct FS_CheatMenuHUDItem_Favorite : FS_CheatMenuHUDItem {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Scavenger.S_CheatMenuHUDItem_CVarIntRange
// Size: 0x30 (Inherited: 0x08)
struct FS_CheatMenuHUDItem_CVarIntRange : FS_CheatMenuHUDItem {
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct Scavenger.S_CheatMenuHUDItem_CVarToggle
// Size: 0x28 (Inherited: 0x08)
struct FS_CheatMenuHUDItem_CVarToggle : FS_CheatMenuHUDItem {
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct Scavenger.S_CheatMenuHUDItem_ConsoleCommand
// Size: 0x20 (Inherited: 0x08)
struct FS_CheatMenuHUDItem_ConsoleCommand : FS_CheatMenuHUDItem {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Scavenger.S_CheatMenuHUDState
// Size: 0x78 (Inherited: 0x00)
struct FS_CheatMenuHUDState {
	struct FString CursorLocation; // 0x00(0x10)
	int32_t WindowStartLine; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSet<struct FString> ExpandedFolders; // 0x18(0x50)
	struct TArray<struct FString> Favorites; // 0x68(0x10)
};

// ScriptStruct Scavenger.S_CineCamSnapshot
// Size: 0x38 (Inherited: 0x00)
struct FS_CineCamSnapshot {
	struct FString Name; // 0x00(0x10)
	struct FVector SnapLoc; // 0x10(0x0c)
	struct FRotator SnapRot; // 0x1c(0x0c)
	float FocalLength; // 0x28(0x04)
	float FocusDistance; // 0x2c(0x04)
	float Aperture; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Scavenger.S_CineCamConfigToggleSetting
// Size: 0x10 (Inherited: 0x00)
struct FS_CineCamConfigToggleSetting {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_CineCamConfigScalarSetting
// Size: 0x20 (Inherited: 0x00)
struct FS_CineCamConfigScalarSetting {
	struct FString Name; // 0x00(0x10)
	float InitVal; // 0x10(0x04)
	float Min; // 0x14(0x04)
	float Max; // 0x18(0x04)
	float ChangeRate; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_ClientEvent
// Size: 0x28 (Inherited: 0x08)
struct FS_ClientEvent : FTableRowBase {
	enum class ES_ClientEventType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText MessageWithFormatting; // 0x10(0x18)
};

// ScriptStruct Scavenger.S_ClientEventParameters
// Size: 0x10 (Inherited: 0x00)
struct FS_ClientEventParameters {
	struct TArray<struct FS_ClientEventParameter> Parameters; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ClientEventParameter
// Size: 0x28 (Inherited: 0x00)
struct FS_ClientEventParameter {
	enum class ES_ClientEventParameterType ParameterType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FloatValue; // 0x04(0x04)
	int32_t Int32Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString StringValue; // 0x10(0x10)
	struct TWeakObjectPtr<struct UObject> ObjectValue; // 0x20(0x08)
};

// ScriptStruct Scavenger.S_CommandContainer
// Size: 0x1a4 (Inherited: 0x00)
struct FS_CommandContainer {
	uint32_t Timeline[0x8]; // 0x00(0x20)
	struct FS_CommandEntry Entries[0x8]; // 0x20(0x180)
	char pad_1A0[0x4]; // 0x1a0(0x04)
};

// ScriptStruct Scavenger.S_Command
// Size: 0x24 (Inherited: 0x00)
struct FS_Command {
	float ServerTimestamp; // 0x00(0x04)
	struct FS_CommandHandle Handle; // 0x04(0x04)
	char pad_8[0x1]; // 0x08(0x01)
	enum class ES_CommandSpecificType Type; // 0x09(0x01)
	char pad_A[0x1a]; // 0x0a(0x1a)
};

// ScriptStruct Scavenger.S_CommandHandle
// Size: 0x04 (Inherited: 0x00)
struct FS_CommandHandle {
	int32_t m_ID; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_CommandEntry
// Size: 0x30 (Inherited: 0x24)
struct FS_CommandEntry : FS_Command {
	char pad_24[0x4]; // 0x24(0x04)
	uint32_t ServerReplicationKey; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_CommandBase
// Size: 0x10 (Inherited: 0x00)
struct FS_CommandBase {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_CommandOpCommand
// Size: 0x18 (Inherited: 0x10)
struct FS_CommandOpCommand : FS_CommandBase {
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Scavenger.S_CosmeticBlueprintMetadata
// Size: 0x58 (Inherited: 0x58)
struct FS_CosmeticBlueprintMetadata : FS_DisplayableItemMetadata {
};

// ScriptStruct Scavenger.S_SalvageItemMetadata
// Size: 0x98 (Inherited: 0x60)
struct FS_SalvageItemMetadata : FS_DisplayableItemWithRarityMetadata {
	struct TArray<struct FS_SalvageItemDropTable> Tables; // 0x60(0x10)
	struct TSoftObjectPtr<struct UStaticMesh> Mesh; // 0x70(0x28)
};

// ScriptStruct Scavenger.S_SalvageItemDropTable
// Size: 0x10 (Inherited: 0x00)
struct FS_SalvageItemDropTable {
	struct TArray<struct FS_SalvageItemDropType> Drops; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_SalvageItemDropType
// Size: 0x18 (Inherited: 0x00)
struct FS_SalvageItemDropType {
	int32_t Weight; // 0x00(0x04)
	int32_t DropCount; // 0x04(0x04)
	struct FDataTableRowHandle DropType; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_CosmeticSkinningComponentRecord
// Size: 0x150 (Inherited: 0x00)
struct FS_CosmeticSkinningComponentRecord {
	struct TArray<struct UMeshComponent*> MeshComponents; // 0x00(0x10)
	struct TMap<struct TSoftObjectPtr<struct USkeletalMesh>, struct FS_CosmeticSkinningComponentMeshSpecificOverrides> MeshSpecificOverrides; // 0x10(0x50)
	struct FS_CosmeticLoadoutSlot CosmeticLoadout; // 0x60(0x28)
	struct TArray<struct UMeshComponent*> MeshComponentsWithSkinId; // 0x88(0x10)
	struct TArray<struct UMeshComponent*> MeshComponentsPendingSkinId; // 0x98(0x10)
	char pad_A8[0xa8]; // 0xa8(0xa8)
};

// ScriptStruct Scavenger.S_CosmeticSkinningComponentMeshSpecificOverrides
// Size: 0x50 (Inherited: 0x00)
struct FS_CosmeticSkinningComponentMeshSpecificOverrides {
	struct TMap<struct FName, struct TSoftObjectPtr<struct UTexture2D>> ParameterNameToTextureParameterValue; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_CosmeticSetMetadata
// Size: 0x70 (Inherited: 0x60)
struct FS_CosmeticSetMetadata : FS_DisplayableItemWithRarityMetadata {
	struct TArray<struct FDataTableRowHandle> AvailableCosmetics; // 0x60(0x10)
};

// ScriptStruct Scavenger.S_CustomizationStagingObject
// Size: 0x2d0 (Inherited: 0x00)
struct FS_CustomizationStagingObject {
	enum class ES_CosmeticType CosmeticType; // 0x00(0x01)
	enum class ES_CosmeticLoadoutSlotType CosmeticLoadoutSlotType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FS_CosmeticItemMetadata CosmeticItemMetadata; // 0x08(0x1c8)
	int32_t SubmaterialSlotIndex; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct FS_CosmeticItemSubMaterialMetadata SubMaterialMetadata; // 0x1d8(0xf8)
};

// ScriptStruct Scavenger.S_CosmeticItemSubMaterialMetadata
// Size: 0xf8 (Inherited: 0x60)
struct FS_CosmeticItemSubMaterialMetadata : FS_DisplayableItemWithRarityMetadata {
	struct FLinearColor Color; // 0x60(0x10)
	struct TSoftObjectPtr<struct UTexture2D> DiffuseTexture; // 0x70(0x28)
	struct TSoftObjectPtr<struct UTexture2D> PackedNormalMap; // 0x98(0x28)
	float Roughness; // 0xc0(0x04)
	float Metallic; // 0xc4(0x04)
	float Tiling; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TSoftObjectPtr<struct UMaterialInstance> SourceMaterialInstance; // 0xd0(0x28)
};

// ScriptStruct Scavenger.S_CosmeticItemTinkerPackMetadata
// Size: 0xb8 (Inherited: 0x60)
struct FS_CosmeticItemTinkerPackMetadata : FS_DisplayableItemWithRarityMetadata {
	struct TMap<struct FName, struct FName> SubMaterialSlotToSubMaterialId; // 0x60(0x50)
	bool Development; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct Scavenger.S_CosmeticLoadoutForReplication
// Size: 0x10 (Inherited: 0x00)
struct FS_CosmeticLoadoutForReplication {
	struct TArray<struct FS_CosmeticLoadoutSelectionForReplication> Selections; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_CosmeticLoadoutSelectionForReplication
// Size: 0x18 (Inherited: 0x00)
struct FS_CosmeticLoadoutSelectionForReplication {
	enum class ES_CosmeticLoadoutSlotType SlotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t OnlineItemMetadataReplicationKey; // 0x04(0x04)
	struct TArray<uint32_t> SubMaterialSelectionReplicationKeys; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_ReplicatedCraftingEvent
// Size: 0x10 (Inherited: 0x00)
struct FS_ReplicatedCraftingEvent {
	enum class ES_CraftingEvent CraftingEvent; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ReplicationKey; // 0x04(0x04)
	float ServerTimestamp; // 0x08(0x04)
	uint32_t ID; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_CraftingRecipeData
// Size: 0x10 (Inherited: 0x00)
struct FS_CraftingRecipeData {
	struct US_RecipeData* RecipeData; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_CraftingQueueEntry
// Size: 0x28 (Inherited: 0x00)
struct FS_CraftingQueueEntry {
	struct US_RecipeData* RecipeData; // 0x00(0x08)
	int32_t RecipeIndex; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
	uint32_t ReplicationKey; // 0x18(0x04)
	float TimeRemaining; // 0x1c(0x04)
	float TimeTotal; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_PointDamageMulticast
// Size: 0x108 (Inherited: 0x00)
struct FS_PointDamageMulticast {
	float m_damageAmount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FS_PointDamageEvent m_damageEvent; // 0x08(0xe8)
	struct APawn* m_instigatorPawn; // 0xf0(0x08)
	struct AActor* m_causeActor; // 0xf8(0x08)
	enum class ES_TriggerType m_triggerType; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct Scavenger.S_DamageParameters
// Size: 0xa8 (Inherited: 0x00)
struct FS_DamageParameters {
	uint32_t ReplicationKey; // 0x00(0x04)
	char pad_4[0xa4]; // 0x04(0xa4)
};

// ScriptStruct Scavenger.S_TeamBelongingDamageMultipliers
// Size: 0x2c (Inherited: 0x00)
struct FS_TeamBelongingDamageMultipliers {
	float PlayerVsSelfMultiplier; // 0x00(0x04)
	float PlayerVsPlayerSameTeamMultiplier; // 0x04(0x04)
	float PlayerVsPlayerDifferentTeamMultiplier; // 0x08(0x04)
	float PlayerVsAIMultiplier; // 0x0c(0x04)
	float AIVsPlayerMultiplier; // 0x10(0x04)
	float AIVsAISameTeamMultiplier; // 0x14(0x04)
	float AIVsAISameTeamGrenadeMultiplier; // 0x18(0x04)
	float AIVsAIDifferentTeamMultiplier; // 0x1c(0x04)
	float AIVsBotTeamMultiplier; // 0x20(0x04)
	float BotVsAITeamMultiplier; // 0x24(0x04)
	float BotVsPlayerDifferentTeamMultiplier; // 0x28(0x04)
};

// ScriptStruct Scavenger.S_DataTableReplicationKeyMap
// Size: 0xa0 (Inherited: 0x00)
struct FS_DataTableReplicationKeyMap {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Scavenger.S_DefaultWeaponMontageTableRow
// Size: 0x20 (Inherited: 0x08)
struct FS_DefaultWeaponMontageTableRow : FTableRowBase {
	enum class ES_WeaponClass WeaponClass; // 0x08(0x01)
	enum class ES_WeaponMontageEvent WeaponEvent; // 0x09(0x01)
	enum class ES_DerivedCharacterBaseState CharacterState; // 0x0a(0x01)
	enum class ES_CharacterBodyStance CharacterStance; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UAnimMontage*> MontageVariations; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_DialogueEntryRow
// Size: 0x78 (Inherited: 0x08)
struct FS_DialogueEntryRow : FTableRowBase {
	struct FS_DialogueVoiceValue DialogueVoice; // 0x08(0x08)
	struct FS_DialogueEventValue DialogueEvent; // 0x10(0x08)
	struct FString WwiseEventName; // 0x18(0x10)
	struct FS_DialogueEntryContext Context; // 0x28(0x50)
};

// ScriptStruct Scavenger.S_DialogueEntryContext
// Size: 0x50 (Inherited: 0x00)
struct FS_DialogueEntryContext {
	struct TSet<struct FS_DialogueContextValue> ContextSet; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_DialogueValueBase
// Size: 0x08 (Inherited: 0x00)
struct FS_DialogueValueBase {
	struct FName Value; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_DialogueContextValue
// Size: 0x08 (Inherited: 0x08)
struct FS_DialogueContextValue : FS_DialogueValueBase {
};

// ScriptStruct Scavenger.S_DialogueEventValue
// Size: 0x08 (Inherited: 0x08)
struct FS_DialogueEventValue : FS_DialogueValueBase {
};

// ScriptStruct Scavenger.S_DialogueVoiceValue
// Size: 0x08 (Inherited: 0x08)
struct FS_DialogueVoiceValue : FS_DialogueValueBase {
};

// ScriptStruct Scavenger.S_DialogueContext
// Size: 0x50 (Inherited: 0x00)
struct FS_DialogueContext {
	struct TSet<struct FS_DialogueContextValue> ContextSet; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_ComponentOverlapData
// Size: 0x50 (Inherited: 0x00)
struct FS_ComponentOverlapData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_ComponentPair
// Size: 0x10 (Inherited: 0x00)
struct FS_ComponentPair {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_RayCastSettings
// Size: 0x0c (Inherited: 0x00)
struct FS_RayCastSettings {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_DynamicallySpawnedClass
// Size: 0x18 (Inherited: 0x00)
struct FS_DynamicallySpawnedClass {
	struct AS_AICharacter* AICharacterClass; // 0x00(0x08)
	struct UBehaviorTree* BehaviourTree; // 0x08(0x08)
	float normalizedChance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_EquipmentStateComponent
// Size: 0x228 (Inherited: 0x00)
struct FS_EquipmentStateComponent {
	struct FS_EquipmentSlotState Slots[0x11]; // 0x00(0x220)
	char pad_220[0x8]; // 0x220(0x08)
};

// ScriptStruct Scavenger.S_EquipmentSlotState
// Size: 0x20 (Inherited: 0x00)
struct FS_EquipmentSlotState {
	struct US_ItemData* EquipmentData; // 0x00(0x08)
	struct TArray<int32_t> EquippedEffectHandles; // 0x08(0x10)
	struct AActor* EquippedActor; // 0x18(0x08)
};

// ScriptStruct Scavenger.S_EventDelegateDummyBugWorkaround
// Size: 0x01 (Inherited: 0x00)
struct FS_EventDelegateDummyBugWorkaround {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_AITeamExperienceData
// Size: 0x18 (Inherited: 0x00)
struct FS_AITeamExperienceData {
	float ExperienceOnKill[0x5]; // 0x00(0x14)
	float EliteExperienceMultiplier; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_FeatureFlagConfigEntry
// Size: 0x0c (Inherited: 0x00)
struct FS_FeatureFlagConfigEntry {
	struct FName Name; // 0x00(0x08)
	int32_t Value; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_FlinchInterpolator
// Size: 0xc8 (Inherited: 0x00)
struct FS_FlinchInterpolator {
	struct FS_FlinchRotationalInterpolator Rotation; // 0x00(0x60)
	struct FS_FlinchTranslationalInterpolator Translation; // 0x60(0x60)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct Scavenger.S_FlinchTranslationalInterpolator
// Size: 0x60 (Inherited: 0x00)
struct FS_FlinchTranslationalInterpolator {
	struct FS_FlinchTranslationAxisInterpolator XAxis; // 0x00(0x20)
	struct FS_FlinchTranslationAxisInterpolator YAxis; // 0x20(0x20)
	struct FS_FlinchTranslationAxisInterpolator ZAxis; // 0x40(0x20)
};

// ScriptStruct Scavenger.S_FlinchTranslationAxisInterpolator
// Size: 0x20 (Inherited: 0x00)
struct FS_FlinchTranslationAxisInterpolator {
	struct UCurveFloat* TimeIntensityCurve; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	float BaseTranslationUnits; // 0x10(0x04)
	struct FFloatInterval MaxTranslationInterval; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_FlinchRotationalInterpolator
// Size: 0x60 (Inherited: 0x00)
struct FS_FlinchRotationalInterpolator {
	struct FS_FlinchRotationAxisInterpolator Yaw; // 0x00(0x20)
	struct FS_FlinchRotationAxisInterpolator Pitch; // 0x20(0x20)
	struct FS_FlinchRotationAxisInterpolator Roll; // 0x40(0x20)
};

// ScriptStruct Scavenger.S_FlinchRotationAxisInterpolator
// Size: 0x20 (Inherited: 0x00)
struct FS_FlinchRotationAxisInterpolator {
	struct UCurveFloat* TimeIntensityCurve; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	float BaseRotationDegrees; // 0x10(0x04)
	struct FFloatInterval MaxRotationInterval; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_FoleyTaggedAudioEvent
// Size: 0x18 (Inherited: 0x00)
struct FS_FoleyTaggedAudioEvent {
	struct UAkAudioEvent* Event; // 0x00(0x08)
	enum class ES_FoleyEvent FoleyType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName CustomName; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_MaterialTaggedAudioEvent
// Size: 0x20 (Inherited: 0x00)
struct FS_MaterialTaggedAudioEvent {
	struct UAkAudioEvent* Event; // 0x00(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString WwiseSurfaceSwitch; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_FrontEndCameraTarget
// Size: 0x68 (Inherited: 0x00)
struct FS_FrontEndCameraTarget {
	struct AActor* Target; // 0x00(0x08)
	struct FDataTableRowHandle ConfigHandle; // 0x08(0x10)
	struct TMap<struct FName, struct FS_FrontEndCameraOverride> TargetOverrides; // 0x18(0x50)
};

// ScriptStruct Scavenger.S_FrontEndCameraOverride
// Size: 0x18 (Inherited: 0x00)
struct FS_FrontEndCameraOverride {
	struct AActor* Target; // 0x00(0x08)
	struct FDataTableRowHandle ConfigHandle; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_FrontEndCameraConfig
// Size: 0x30 (Inherited: 0x08)
struct FS_FrontEndCameraConfig : FTableRowBase {
	bool bShouldBlend; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float BlendTime; // 0x0c(0x04)
	enum class EViewTargetBlendFunction Blend; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BlendExponent; // 0x14(0x04)
	bool bLockOutgoing; // 0x18(0x01)
	bool bOverrideCharacterRotator; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FRotator CharacterRotatorOverride; // 0x1c(0x0c)
	bool TeammateLightsEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Scavenger.S_ItemViewerObject
// Size: 0x60 (Inherited: 0x00)
struct FS_ItemViewerObject {
	struct FS_ItemState ItemState; // 0x00(0x40)
	struct FS_ItemViewerSettings ViewerSettings; // 0x40(0x1c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Scavenger.S_FTUEStageData
// Size: 0x30 (Inherited: 0x08)
struct FS_FTUEStageData : FTableRowBase {
	SoftClassProperty FTUEStage; // 0x08(0x28)
};

// ScriptStruct Scavenger.S_FTUEOverlayData
// Size: 0xa8 (Inherited: 0x00)
struct FS_FTUEOverlayData {
	bool OverlayMaskVisible; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D MaskPosition; // 0x04(0x08)
	struct FVector2D MaskSize; // 0x0c(0x08)
	struct FVector2D ViewportSize; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FSlateBrush MaskBrush; // 0x20(0x88)
};

// ScriptStruct Scavenger.S_ResponseCurveInfo
// Size: 0x20 (Inherited: 0x00)
struct FS_ResponseCurveInfo {
	struct FText DisplayName; // 0x00(0x18)
	struct UCurveFloat* ResponseCurve; // 0x18(0x08)
};

// ScriptStruct Scavenger.S_GameInputTable
// Size: 0x50 (Inherited: 0x08)
struct FS_GameInputTable : FTableRowBase {
	enum class ES_GameInputActionType GameInputAction; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText DisplayName; // 0x10(0x18)
	struct TArray<struct FName> Actions; // 0x28(0x10)
	bool bKeyboardBind; // 0x38(0x01)
	bool bGamepadBind; // 0x39(0x01)
	bool bShowOnKeyboardSettings; // 0x3a(0x01)
	enum class ES_PlayerInputContext KeybindContext; // 0x3b(0x01)
	bool bIsAxisMapping; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float AxisMappingValue; // 0x40(0x04)
	struct FName FeatureFlag; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Scavenger.S_PlatformCultureCodes
// Size: 0x48 (Inherited: 0x08)
struct FS_PlatformCultureCodes : FTableRowBase {
	struct FString SteamId; // 0x08(0x10)
	struct FString EgsId; // 0x18(0x10)
	struct FString PsnId; // 0x28(0x10)
	struct FString XblId; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_DamageOverTimeConfigurationData
// Size: 0x50 (Inherited: 0x08)
struct FS_DamageOverTimeConfigurationData : FTableRowBase {
	enum class ES_DamageOverTimeType DamageOverTimeType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float DamagePerTick; // 0x0c(0x04)
	struct UCurveFloat* DamagePerTickCurve; // 0x10(0x08)
	struct US_DamageTypeBase* DamageTypeClass; // 0x18(0x08)
	SoftClassProperty GameplayAbility; // 0x20(0x28)
	float MaximumPendingDamage; // 0x48(0x04)
	float TickIntervalInSeconds; // 0x4c(0x04)
};

// ScriptStruct Scavenger.S_SpawnLocationData
// Size: 0x18 (Inherited: 0x08)
struct FS_SpawnLocationData : FTableRowBase {
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_PerLevelPlayerData
// Size: 0x04 (Inherited: 0x00)
struct FS_PerLevelPlayerData {
	int32_t ScrapInventoryCapacity; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_ArmorGlobals
// Size: 0x10 (Inherited: 0x00)
struct FS_ArmorGlobals {
	struct TArray<float> DamageResistance; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_WeaponGlobals
// Size: 0xa8 (Inherited: 0x00)
struct FS_WeaponGlobals {
	float SoftRecoverAngle; // 0x00(0x04)
	float softRecoverVelocityThreshold; // 0x04(0x04)
	float SoftRecoverExponent; // 0x08(0x04)
	float BounceElasticity; // 0x0c(0x04)
	float RecenterDivisor; // 0x10(0x04)
	float FightRecoilResetThreshold; // 0x14(0x04)
	float FollowRecoilResetThreshold; // 0x18(0x04)
	float AimKeepRecoilThreshold; // 0x1c(0x04)
	struct FS_WeaponAimAssistValues DefaultAimAssistValues; // 0x20(0x2c)
	struct FS_AimAssistGlobalSettings GlobalAimAssistSettings; // 0x4c(0x5c)
};

// ScriptStruct Scavenger.S_SoftPingSkeletonSetup
// Size: 0x120 (Inherited: 0x00)
struct FS_SoftPingSkeletonSetup {
	int32_t AffectedBoneRange; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> RequiredPinnedBones; // 0x08(0x10)
	struct UCurveFloat* BlendWeightTrack; // 0x18(0x08)
	float ImpulseMagnitudeAI; // 0x20(0x04)
	float ImpulseMagnitudePlayer; // 0x24(0x04)
	struct UCurveFloat* BoneRangeImpulseBlend; // 0x28(0x08)
	struct TSet<struct FName> ForceAppliedBones; // 0x30(0x50)
	struct TSet<struct FName> FullPhysicsBlendedBones; // 0x80(0x50)
	struct TSet<struct FName> NoPhysicsBlendedBones; // 0xd0(0x50)
};

// ScriptStruct Scavenger.S_CollisionPair
// Size: 0x10 (Inherited: 0x00)
struct FS_CollisionPair {
	struct AActor* m_lowActor; // 0x00(0x08)
	struct AActor* m_highActor; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_AttributeContext
// Size: 0x04 (Inherited: 0x00)
struct FS_AttributeContext {
	enum class ES_StatChangeCauseType ChangeCauseType; // 0x00(0x01)
	enum class ES_AttributeContextADS ADS; // 0x01(0x01)
	enum class ES_CameraSettings CameraSettings; // 0x02(0x01)
	enum class ES_TriggerType triggerType; // 0x03(0x01)
};

// ScriptStruct Scavenger.S_BotNameTableRow
// Size: 0x18 (Inherited: 0x08)
struct FS_BotNameTableRow : FTableRowBase {
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_StatStatesCountedAsLiving
// Size: 0x04 (Inherited: 0x00)
struct FS_StatStatesCountedAsLiving {
	bool DownedIsLiving; // 0x00(0x01)
	bool CocoonedIsLiving; // 0x01(0x01)
	bool ExtractingIsLiving; // 0x02(0x01)
	bool ExtractedIsLiving; // 0x03(0x01)
};

// ScriptStruct Scavenger.S_ReviveExecuteInteractableData
// Size: 0x120 (Inherited: 0x00)
struct FS_ReviveExecuteInteractableData {
	struct FS_InteractableData ReviveData; // 0x00(0x90)
	struct FS_InteractableData ExecuteData; // 0x90(0x90)
};

// ScriptStruct Scavenger.S_InteractableData
// Size: 0x90 (Inherited: 0x00)
struct FS_InteractableData {
	char bIsTimedInteraction : 1; // 0x00(0x01)
	char bPartialActivationIsOkay : 1; // 0x00(0x01)
	char bRequireMinimumTimeForPartialActivation : 1; // 0x00(0x01)
	char bStopDistanceChecksOnceStarted : 1; // 0x00(0x01)
	char bCalculateInteractionPercentageBetweenMinimumAndMaximumTimes : 1; // 0x00(0x01)
	char bConsumesRequiredItems : 1; // 0x00(0x01)
	char bUseReticuleAimTestForInteraction : 1; // 0x00(0x01)
	char bFullSphereInteraction : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t InteractionPriority; // 0x04(0x04)
	float MinimumInteractionTimeRequired; // 0x08(0x04)
	float MaximumInteractionTimeAllowed; // 0x0c(0x04)
	enum class ES_InteractIcon IconType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FName InitialInteractTextId; // 0x20(0x08)
	struct FName InProgressTextId; // 0x28(0x08)
	struct US_ItemData* RequiredItemData; // 0x30(0x08)
	int32_t RequiredItemCount; // 0x38(0x04)
	struct FDelegate DoInteractDelegate; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct UPrimitiveComponent*> ComponentsToHighlight; // 0x50(0x10)
	char pad_60[0x30]; // 0x60(0x30)
};

// ScriptStruct Scavenger.S_AISpawnPhaseTable
// Size: 0x18 (Inherited: 0x00)
struct FS_AISpawnPhaseTable {
	char pad_0[0x10]; // 0x00(0x10)
	int32_t m_currentPhaseIdx; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_AISpawnRow
// Size: 0x0c (Inherited: 0x00)
struct FS_AISpawnRow {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_AISpawnPhaseDescriptorTableRow
// Size: 0x10 (Inherited: 0x08)
struct FS_AISpawnPhaseDescriptorTableRow : FTableRowBase {
	enum class ES_AISpawnPhase SpawnPhase; // 0x08(0x01)
	bool UseDuration; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float PhaseDurationInMinutes; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_OnlineGameModePlayerSessionData
// Size: 0x38 (Inherited: 0x00)
struct FS_OnlineGameModePlayerSessionData {
	struct FString ClientTelemetrySessionId; // 0x00(0x10)
	struct FString PlayerType; // 0x10(0x10)
	int32_t ClientMatchIndex; // 0x20(0x04)
	int32_t DraftOrder; // 0x24(0x04)
	struct FString PartyId; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_SquadInfo
// Size: 0x04 (Inherited: 0x00)
struct FS_SquadInfo {
	int32_t MaxSquadCount; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_PawnAndPlayerControllerWeakObjectWrapper
// Size: 0x10 (Inherited: 0x00)
struct FS_PawnAndPlayerControllerWeakObjectWrapper {
	struct TWeakObjectPtr<struct APawn> Pawn; // 0x00(0x08)
	struct TWeakObjectPtr<struct APlayerController> PlayerController; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_GameModeEvent
// Size: 0x24 (Inherited: 0x00)
struct FS_GameModeEvent {
	enum class ES_GameModeEvent EventType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName PlayerId; // 0x04(0x08)
	int32_t TeamIndex; // 0x0c(0x04)
	float ServerTimestamp; // 0x10(0x04)
	float FloatData; // 0x14(0x04)
	int32_t IntData; // 0x18(0x04)
	struct FName NameData; // 0x1c(0x08)
};

// ScriptStruct Scavenger.S_LeaderboardRankingRequirement
// Size: 0x20 (Inherited: 0x00)
struct FS_LeaderboardRankingRequirement {
	struct TArray<enum class ES_LeaderboardRankingFactor> RequiredToBeScored_AcceptAny; // 0x00(0x10)
	struct TArray<enum class ES_LeaderboardRankingFactor> RequiredToBeScored_RequireAll; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_LeaderboardRankingRule
// Size: 0x02 (Inherited: 0x00)
struct FS_LeaderboardRankingRule {
	enum class ES_LeaderboardRankingFactor Factor; // 0x00(0x01)
	enum class ES_LeaderboardRankingFactorRule Rule; // 0x01(0x01)
};

// ScriptStruct Scavenger.S_GameModeMetadata
// Size: 0xc8 (Inherited: 0x58)
struct FS_GameModeMetadata : FS_DisplayableItemMetadata {
	enum class ES_GameMode GameMode; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName MapName; // 0x5c(0x08)
	bool ShowCountdownTimer; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FDataTableRowHandle LocalizedBriefHandle; // 0x68(0x10)
	struct TSoftObjectPtr<struct UTexture2D> BackgroundSmall; // 0x78(0x28)
	struct TSoftObjectPtr<struct UTexture2D> BackgroundLarge; // 0xa0(0x28)
};

// ScriptStruct Scavenger.S_GamepadMultiButtonToGameActionMapping
// Size: 0x18 (Inherited: 0x00)
struct FS_GamepadMultiButtonToGameActionMapping {
	struct TArray<struct FKey> Buttons; // 0x00(0x10)
	enum class ES_GameInputActionType action; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t RequiredButtonCount; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_GamepadButtonToGameActionMapping
// Size: 0x10 (Inherited: 0x00)
struct FS_GamepadButtonToGameActionMapping {
	enum class ES_GameInputActionType PressAction; // 0x00(0x01)
	enum class ES_GameInputActionType HoldAction; // 0x01(0x01)
	bool AllowPressActionInHoldWindow; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float HoldTimeOverride; // 0x04(0x04)
	enum class ES_GameInputActionType DoublePressAction; // 0x08(0x01)
	bool AllowPressActionInDoublePressFirstTap; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float DoublePressTimeOverride; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_GameplayEffectVolumeState
// Size: 0x10 (Inherited: 0x00)
struct FS_GameplayEffectVolumeState {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_GameplayEffectVolumeParameters
// Size: 0x18 (Inherited: 0x00)
struct FS_GameplayEffectVolumeParameters {
	char bApplyToFriendlyActors : 1; // 0x00(0x01)
	char bApplyToNeutralActors : 1; // 0x00(0x01)
	char bApplyToHostileActors : 1; // 0x00(0x01)
	char bApplyToAICharacters : 1; // 0x00(0x01)
	char bApplyToPlayerCharacters : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FS_GameplayEffectClassAndSettings> GameplayEffectsToApply; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_GameplayEffectClassAndSettings
// Size: 0x10 (Inherited: 0x00)
struct FS_GameplayEffectClassAndSettings {
	struct UGameplayEffect* GameplayEffectClass; // 0x00(0x08)
	float Level; // 0x08(0x04)
	char bApplyOnExitInsteadOfEnter : 1; // 0x0c(0x01)
	char bRemoveOnExit : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Scavenger.S_GameScoreSnapshot
// Size: 0x10 (Inherited: 0x00)
struct FS_GameScoreSnapshot {
	struct TArray<struct FS_TeamScoreSnapshot> TeamScores; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_TeamScoreSnapshot
// Size: 0x20 (Inherited: 0x00)
struct FS_TeamScoreSnapshot {
	int8_t TeamIndex; // 0x00(0x01)
	char Placement; // 0x01(0x01)
	uint16_t HeldDataPoints; // 0x02(0x02)
	uint16_t BankedDataPoints; // 0x04(0x02)
	uint16_t ExtractedDataPoints; // 0x06(0x02)
	float TeamEliminationTime; // 0x08(0x04)
	bool TeamExfiled; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FS_PlayerScoreSnapshot> PlayerScoreSnapshots; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_PlayerScoreSnapshot
// Size: 0x10 (Inherited: 0x00)
struct FS_PlayerScoreSnapshot {
	int32_t PlayerIndex; // 0x00(0x04)
	bool IsDisconnected; // 0x04(0x01)
	bool IsAlive; // 0x05(0x01)
	enum class ES_StatsState StatsState; // 0x06(0x01)
	bool Extracted; // 0x07(0x01)
	uint16_t HeldDataPoints; // 0x08(0x02)
	uint16_t TotalBankedDataPoints; // 0x0a(0x02)
	uint16_t ExtractedDataPoints; // 0x0c(0x02)
	uint16_t LostDataPointsAfterExtraction; // 0x0e(0x02)
};

// ScriptStruct Scavenger.S_TeamGameStaticState
// Size: 0x10 (Inherited: 0x00)
struct FS_TeamGameStaticState {
	struct TArray<struct FS_PlayerGameStaticState> PlayerStates; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_PlayerGameStaticState
// Size: 0x40 (Inherited: 0x00)
struct FS_PlayerGameStaticState {
	struct FString DisplayName; // 0x00(0x10)
	char PlayerIndex; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString PlayerId; // 0x18(0x10)
	enum class ES_OnlinePlatformType Platform; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString PlatformId; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_TeamGameState
// Size: 0xa8 (Inherited: 0x00)
struct FS_TeamGameState {
	int32_t ShardsBanked; // 0x00(0x04)
	int32_t ShardsHeld; // 0x04(0x04)
	int32_t ShardsExtracted; // 0x08(0x04)
	int32_t ExplorersExtracted; // 0x0c(0x04)
	int32_t ObjectivesCompleted; // 0x10(0x04)
	int32_t TeamPlacement; // 0x14(0x04)
	int32_t TotalTeamXP; // 0x18(0x04)
	int32_t OtherExplorersKilled; // 0x1c(0x04)
	int32_t TeammateDeaths; // 0x20(0x04)
	float TeamEliminationTimeSeconds; // 0x24(0x04)
	int32_t LiveCount; // 0x28(0x04)
	bool TeamExfiled; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t TeamResurrectionTokensEarned; // 0x30(0x04)
	char Flags; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct TArray<struct AS_PlayerStateBase*> PlayerStates; // 0x38(0x10)
	struct TSet<struct AS_PlayerController*> PlayerControllers; // 0x48(0x50)
	struct TArray<struct FS_TeamPlayerGameState> PlayerGameState; // 0x98(0x10)
};

// ScriptStruct Scavenger.S_TeamPlayerGameState
// Size: 0x10 (Inherited: 0x00)
struct FS_TeamPlayerGameState {
	int32_t ShardsBankedTotal; // 0x00(0x04)
	int32_t ShardsBankedAtUplink; // 0x04(0x04)
	int32_t ShardsExtracted; // 0x08(0x04)
	int32_t ShardsLeftOnPlanet; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_TeamDefinition
// Size: 0x38 (Inherited: 0x00)
struct FS_TeamDefinition {
	struct FText Name; // 0x00(0x18)
	struct FLinearColor PrimaryColor; // 0x18(0x10)
	struct FLinearColor SecondaryColor; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_ResolutionLock
// Size: 0x28 (Inherited: 0x00)
struct FS_ResolutionLock {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Scavenger.S_HarvestedFoliageArray
// Size: 0x120 (Inherited: 0x108)
struct FS_HarvestedFoliageArray : FFastArraySerializer {
	struct TArray<struct FS_HarvestedFoliageItem> Items; // 0x108(0x10)
	bool pendingProcessAdd; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// ScriptStruct Scavenger.S_HarvestedFoliageItem
// Size: 0x80 (Inherited: 0x0c)
struct FS_HarvestedFoliageItem : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct ULevel* Level; // 0x10(0x08)
	struct FName LevelStreamingPackageName; // 0x18(0x08)
	int32_t ComponentIndex; // 0x20(0x04)
	bool pendingProcessAdd; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector InstanceLocation; // 0x28(0x0c)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FTransform OriginalInstanceTransform; // 0x40(0x30)
	struct AActor* ReplacementActor; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Scavenger.S_HarvestConfiguration
// Size: 0x128 (Inherited: 0x00)
struct FS_HarvestConfiguration {
	struct UFoliageType* HarvestableFoliageType; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FS_InteractableData InteractableData; // 0x20(0x90)
	struct FS_ItemState HarvestOutput; // 0xb0(0x40)
	char SkipCreationOfAutoHarvestedFoliageActor : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct AActor* HarvestedActorClass; // 0xf8(0x08)
	float HarvestedActorZAdjustment; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct AActor* ReplacementActorClass; // 0x108(0x08)
	float ReplacementActorZAdjustment; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct UFoliageType* ReplacementFoliageType; // 0x118(0x08)
	float ReplacementFoliageZAdjustment; // 0x120(0x04)
	float XPBonusAward; // 0x124(0x04)
};

// ScriptStruct Scavenger.S_WeakLevelReferenceWrapper
// Size: 0x08 (Inherited: 0x00)
struct FS_WeakLevelReferenceWrapper {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_FeedbackAudio
// Size: 0x100 (Inherited: 0x00)
struct FS_FeedbackAudio {
	struct FS_FeedbackAudioEvents MeleeFeedback; // 0x00(0x40)
	struct FS_FeedbackAudioEvents ProjectileFeedback; // 0x40(0x40)
	struct FS_FeedbackAudioEvents ExplosionFeedback; // 0x80(0x40)
	struct FS_FeedbackAudioEvents FallDamageFeedback; // 0xc0(0x40)
};

// ScriptStruct Scavenger.S_FeedbackAudioEvents
// Size: 0x40 (Inherited: 0x00)
struct FS_FeedbackAudioEvents {
	struct UAkAudioEvent* NoArmorHitEvent; // 0x00(0x08)
	struct UAkAudioEvent* ArmorHitEvent; // 0x08(0x08)
	struct UAkAudioEvent* ArmorBreakEvent; // 0x10(0x08)
	struct UAkAudioEvent* ShieldHitEvent; // 0x18(0x08)
	struct UAkAudioEvent* ShieldBreakEvent; // 0x20(0x08)
	struct UAkAudioEvent* CriticalHitEvent; // 0x28(0x08)
	struct UAkAudioEvent* HeadShotEvent; // 0x30(0x08)
	struct UAkAudioEvent* KilledEvent; // 0x38(0x08)
};

// ScriptStruct Scavenger.S_3PFeedbackAudio
// Size: 0x140 (Inherited: 0x100)
struct FS_3PFeedbackAudio : FS_FeedbackAudio {
	struct FS_FeedbackAudioEvents AcidFeedback; // 0x100(0x40)
};

// ScriptStruct Scavenger.S_HordeWaveDefinition
// Size: 0x10 (Inherited: 0x00)
struct FS_HordeWaveDefinition {
	struct TArray<struct FS_HordeSquadDefinition> SquadDefinitions; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_HordeSquadDefinition
// Size: 0x28 (Inherited: 0x00)
struct FS_HordeSquadDefinition {
	struct FName SpawnerName; // 0x00(0x08)
	struct FString SquadName; // 0x08(0x10)
	struct UDataTable* SpawnTable; // 0x18(0x08)
	struct AS_AIOverlordActor* OverlordType; // 0x20(0x08)
};

// ScriptStruct Scavenger.S_NotificationQueue
// Size: 0x18 (Inherited: 0x00)
struct FS_NotificationQueue {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FS_NotificationCenterItem> Notifications; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_NotificationCenterItem
// Size: 0x10 (Inherited: 0x00)
struct FS_NotificationCenterItem {
	struct US_WidgetNotificationCenterItem* NotificationWidget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.SRankIcon
// Size: 0x10 (Inherited: 0x08)
struct FSRankIcon : FTableRowBase {
	struct UTexture2D* RankIcon; // 0x08(0x08)
};

// ScriptStruct Scavenger.STargetIcon
// Size: 0x18 (Inherited: 0x08)
struct FSTargetIcon : FTableRowBase {
	struct FScavengerTeamID TeamId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture2D* TeamIcon; // 0x10(0x08)
};

// ScriptStruct Scavenger.ScavengerTeamID
// Size: 0x01 (Inherited: 0x00)
struct FScavengerTeamID {
	enum class ES_ScavAITeams ScavengerTeam; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_HudToggleDisplayMethod
// Size: 0x08 (Inherited: 0x00)
struct FS_HudToggleDisplayMethod {
	enum class ES_WidgetHideMethod WidgetHideMethod; // 0x00(0x01)
	enum class ES_ToggleDisplayMethod ToggleDisplayMethod; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t SortOrderToHide; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_HudInsertMethod
// Size: 0x10 (Inherited: 0x00)
struct FS_HudInsertMethod {
	enum class ES_InsertType InsertType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct US_UMGHUD* InsertAroundThisHudClass; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_ImpactEffectTemplateTableRow
// Size: 0x150 (Inherited: 0x08)
struct FS_ImpactEffectTemplateTableRow : FTableRowBase {
	struct FName Default; // 0x08(0x08)
	struct FName Bone; // 0x10(0x08)
	struct FName Brick; // 0x18(0x08)
	struct FName Cloth; // 0x20(0x08)
	struct FName Concrete; // 0x28(0x08)
	struct FName Dirt; // 0x30(0x08)
	struct FName Drywall; // 0x38(0x08)
	struct FName Electronics_Generic; // 0x40(0x08)
	struct FName Electronics_Monitor; // 0x48(0x08)
	struct FName Flesh_Human; // 0x50(0x08)
	struct FName Flesh_Keeper; // 0x58(0x08)
	struct FName Flesh_Scourge; // 0x60(0x08)
	struct FName Fur; // 0x68(0x08)
	struct FName Glass_Breakable; // 0x70(0x08)
	struct FName Glass_Unbreakable; // 0x78(0x08)
	struct FName Ice; // 0x80(0x08)
	struct FName Leather; // 0x88(0x08)
	struct FName Metal_Heavy; // 0x90(0x08)
	struct FName Metal_Light; // 0x98(0x08)
	struct FName Metal_Medium; // 0xa0(0x08)
	struct FName Mud; // 0xa8(0x08)
	struct FName Paper; // 0xb0(0x08)
	struct FName Plaster; // 0xb8(0x08)
	struct FName Plastic_Heavy; // 0xc0(0x08)
	struct FName Plastic_Light; // 0xc8(0x08)
	struct FName Plastic_Medium; // 0xd0(0x08)
	struct FName Rock; // 0xd8(0x08)
	struct FName Sand; // 0xe0(0x08)
	struct FName Snow_Heavy; // 0xe8(0x08)
	struct FName Snow_Light; // 0xf0(0x08)
	struct FName Snow_Medium; // 0xf8(0x08)
	struct FName Water; // 0x100(0x08)
	struct FName Wood_Heavy; // 0x108(0x08)
	struct FName Wood_Light; // 0x110(0x08)
	struct FName Wood_Medium; // 0x118(0x08)
	struct FName Projectile; // 0x120(0x08)
	struct FName Melee; // 0x128(0x08)
	struct FName Flesh_Scourge_Critical; // 0x130(0x08)
	struct FName Flesh_Spitter_Stomach; // 0x138(0x08)
	struct FName Aegis_Shield_Incoming; // 0x140(0x08)
	struct FName Aegis_Shield_Outgoing; // 0x148(0x08)
};

// ScriptStruct Scavenger.S_ImpactEffectTemplate
// Size: 0x40 (Inherited: 0x00)
struct FS_ImpactEffectTemplate {
	struct UAkAudioEvent* Event; // 0x00(0x08)
	bool particleSystemShouldAttach; // 0x08(0x01)
	bool AllowParticleFrustumCulling; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UParticleSystem* ParticleSystemTemplate; // 0x10(0x08)
	struct UMaterialInterface* DecalMaterialA; // 0x18(0x08)
	struct UMaterialInterface* DecalMaterialB; // 0x20(0x08)
	float DecalRollRandomOffset; // 0x28(0x04)
	struct FVector DecalSize; // 0x2c(0x0c)
	float DecalSizeRandomScaleFactor; // 0x38(0x04)
	float DecalFadeScreenSize; // 0x3c(0x04)
};

// ScriptStruct Scavenger.S_InteractionFeedbackState
// Size: 0x30 (Inherited: 0x00)
struct FS_InteractionFeedbackState {
	char bConsumesRequiredItems : 1; // 0x00(0x01)
	char bHasCompletedLocally : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ReplicationKey; // 0x04(0x04)
	int32_t InteractableIndex; // 0x08(0x04)
	struct FName InteractTextId; // 0x0c(0x08)
	struct FName InProgressTextId; // 0x14(0x08)
	float MaximumInteractionTime; // 0x1c(0x04)
	struct US_ItemData* RequiredItemData; // 0x20(0x08)
	int32_t RequiredItemCount; // 0x28(0x04)
	float InteractionTime; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_PotentialInteractionData
// Size: 0x30 (Inherited: 0x00)
struct FS_PotentialInteractionData {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Scavenger.S_InteractionPlayerState
// Size: 0xd0 (Inherited: 0x00)
struct FS_InteractionPlayerState {
	char pad_0[0x30]; // 0x00(0x30)
	struct FS_InteractableData InteractableData; // 0x30(0x90)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct Scavenger.S_InteractableDataWrapper
// Size: 0x98 (Inherited: 0x00)
struct FS_InteractableDataWrapper {
	struct FS_InteractableData Data; // 0x00(0x90)
	char pad_90[0x8]; // 0x90(0x08)
};

// ScriptStruct Scavenger.S_InteractableTuple
// Size: 0x24 (Inherited: 0x00)
struct FS_InteractableTuple {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct Scavenger.S_FlashpointSettings
// Size: 0x18 (Inherited: 0x08)
struct FS_FlashpointSettings : FTableRowBase {
	float DetectionDistance; // 0x08(0x04)
	float PersistTime; // 0x0c(0x04)
	float FadeTime; // 0x10(0x04)
	bool AllowBlipFromUse; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Scavenger.S_ItemMetadata
// Size: 0x320 (Inherited: 0x60)
struct FS_ItemMetadata : FS_DisplayableItemWithRarityMetadata {
	struct TSet<struct FName> Tags; // 0x60(0x50)
	enum class ES_ItemType Type; // 0xb0(0x01)
	enum class ES_InteractIcon InteractIcon; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct TSoftObjectPtr<struct US_ItemData> ItemDataAsset; // 0xb8(0x28)
	SoftClassProperty ItemPickupClass; // 0xe0(0x28)
	struct FS_DialogueContext DialogueContext; // 0x108(0x50)
	bool bStackable; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	int32_t MaximumStackSize; // 0x15c(0x04)
	int32_t StackDropSize; // 0x160(0x04)
	bool bSharedWithTeam; // 0x164(0x01)
	enum class ES_AmmoType AmmoType; // 0x165(0x01)
	enum class ES_ConsumablePackageType ConsumablePackageType; // 0x166(0x01)
	char pad_167[0x1]; // 0x167(0x01)
	float ConsumableApplicationTime; // 0x168(0x04)
	enum class ES_StatChangeCauseType ConsumableStatsEffectChangeCauseType; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	SoftClassProperty ConsumableStatsEffectArrayClass; // 0x170(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> ConsumableMontage; // 0x198(0x28)
	struct TArray<SoftClassProperty> GameplayEffectsOnConsume; // 0x1c0(0x10)
	enum class ES_CurrencyType CurrencyType; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	SoftClassProperty EquipmentClass; // 0x1d8(0x28)
	int32_t WeaponBackpackAmmoCount; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct TSoftObjectPtr<struct USkeletalMesh> EquipmentMesh; // 0x208(0x28)
	struct FName EquipmentSocketName; // 0x230(0x08)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UPhysicalMaterial>> EquippedBonePhysicsMaterialOverrides; // 0x238(0x50)
	SoftClassProperty EquippedStatsEffectArrayClass; // 0x288(0x28)
	SoftClassProperty GrenadeProjectileAttachment; // 0x2b0(0x28)
	bool bConvertsOnPickup; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct TSoftObjectPtr<struct US_ItemData> ConvertedIntoItemData; // 0x2e0(0x28)
	int32_t NumberOfConvertedItemsPerOriginalItem; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FDataTableRowHandle ExtractionOnlineItemReward; // 0x310(0x10)
};

// ScriptStruct Scavenger.S_ScrapDescriptorSoft
// Size: 0x30 (Inherited: 0x00)
struct FS_ScrapDescriptorSoft {
	struct TSoftObjectPtr<struct US_ItemData> ScrapResourceItemData; // 0x00(0x28)
	int32_t ResourceAmount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_ScrapDescriptor
// Size: 0x10 (Inherited: 0x00)
struct FS_ScrapDescriptor {
	struct US_ItemData* ScrapResourceItemData; // 0x00(0x08)
	int32_t ResourceAmount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_ItemPickupAdditionalMeshRecord
// Size: 0x10 (Inherited: 0x00)
struct FS_ItemPickupAdditionalMeshRecord {
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshComponents; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_SkeletalMeshAndSocketNamePair
// Size: 0x10 (Inherited: 0x00)
struct FS_SkeletalMeshAndSocketNamePair {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_ItemMetadataTableRowReference
// Size: 0x20 (Inherited: 0x00)
struct FS_ItemMetadataTableRowReference {
	struct FDataTableRowHandle TableRowHandle; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_TurnAccelerationParams
// Size: 0x18 (Inherited: 0x00)
struct FS_TurnAccelerationParams {
	float PitchFactor; // 0x00(0x04)
	float YawFactor; // 0x04(0x04)
	float DegreesFromHorizontalThreshold; // 0x08(0x04)
	float InputThreshold; // 0x0c(0x04)
	float StartTime; // 0x10(0x04)
	float RampUpTime; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_JoystickProcessingParams
// Size: 0x58 (Inherited: 0x00)
struct FS_JoystickProcessingParams {
	struct FName InputXAxisName; // 0x00(0x08)
	struct FName InputYAxisName; // 0x08(0x08)
	bool bInputInvertX; // 0x10(0x01)
	bool bInputInvertY; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FName OutputXAxisName; // 0x14(0x08)
	struct FName OutputYAxisName; // 0x1c(0x08)
	float OutputScaleX; // 0x24(0x04)
	float OutputScaleY; // 0x28(0x04)
	bool bOutputInvertX; // 0x2c(0x01)
	bool bOutputInvertY; // 0x2d(0x01)
	bool bEnableRadialDeadzone; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
	float InnerDeadzone; // 0x30(0x04)
	float OuterDeadzone; // 0x34(0x04)
	bool bEnableAngularDeadzone; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float AngularDeadzoneInDegrees; // 0x3c(0x04)
	bool bAngularDeadzoneTop; // 0x40(0x01)
	bool bAngularDeadzoneBottom; // 0x41(0x01)
	bool bAngularDeadzoneLeft; // 0x42(0x01)
	bool bAngularDeadzoneRight; // 0x43(0x01)
	bool bEnableMagnitudeCurve; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct UCurveFloat* MagnitudeCurve; // 0x48(0x08)
	float DirectionBlockAngleThresholdDegrees; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Scavenger.S_LandscapeDeformationTrace
// Size: 0x130 (Inherited: 0x00)
struct FS_LandscapeDeformationTrace {
	char pad_0[0x130]; // 0x00(0x130)
};

// ScriptStruct Scavenger.S_LandscapeDeformationAgentBone
// Size: 0x28 (Inherited: 0x00)
struct FS_LandscapeDeformationAgentBone {
	struct FName BoneName; // 0x00(0x08)
	float FootprintSize; // 0x08(0x04)
	float ZOffset; // 0x0c(0x04)
	int32_t DrawPriority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	bool bGenerateParticleEffects; // 0x18(0x01)
	char pad_19[0xf]; // 0x19(0x0f)
};

// ScriptStruct Scavenger.S_SnowLayer
// Size: 0x10 (Inherited: 0x00)
struct FS_SnowLayer {
	struct UPhysicalMaterial* Material; // 0x00(0x08)
	float SnowHeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_LandscapeDeformerGaitData
// Size: 0x20 (Inherited: 0x08)
struct FS_LandscapeDeformerGaitData : FTableRowBase {
	struct FS_LandscapeDeformerGait Gait; // 0x08(0x14)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_LandscapeDeformerGait
// Size: 0x14 (Inherited: 0x00)
struct FS_LandscapeDeformerGait {
	float Stride; // 0x00(0x04)
	float FootSeparation; // 0x04(0x04)
	float FootprintSize; // 0x08(0x04)
	float FootprintTrailLength; // 0x0c(0x04)
	int32_t FootprintsPerTrail; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_LandscapeDeformerQuantizedPath
// Size: 0x20 (Inherited: 0x00)
struct FS_LandscapeDeformerQuantizedPath {
	struct FVector2D CellOriginXY; // 0x00(0x08)
	struct TArray<uint16_t> QuantizedPositions; // 0x08(0x10)
	char GaitID; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Scavenger.S_LandscapeDeformerPath
// Size: 0x18 (Inherited: 0x00)
struct FS_LandscapeDeformerPath {
	struct TArray<struct FVector> Positions; // 0x00(0x10)
	char GaitID; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Scavenger.S_LandscapeDeformerFootprint
// Size: 0x10 (Inherited: 0x00)
struct FS_LandscapeDeformerFootprint {
	struct FVector2D Position; // 0x00(0x08)
	float Size; // 0x08(0x04)
	float Depth; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_StreamingLevelDebugInfo
// Size: 0x68 (Inherited: 0x00)
struct FS_StreamingLevelDebugInfo {
	char pad_0[0x18]; // 0x00(0x18)
	int32_t NumActors; // 0x18(0x04)
	struct FBox2D LevelBounds; // 0x1c(0x14)
	struct FString TileLayer; // 0x30(0x10)
	int32_t TotalLevelSize; // 0x40(0x04)
	int32_t LevelTextureSize; // 0x44(0x04)
	int32_t LevelMeshSize; // 0x48(0x04)
	int32_t LevelPhysicsSize; // 0x4c(0x04)
	struct TArray<struct FS_StreamingLevelBorderDebugInfo> BorderLevels; // 0x50(0x10)
	enum class ES_LevelStreamState StreamingState; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Scavenger.S_StreamingLevelBorderDebugInfo
// Size: 0x08 (Inherited: 0x00)
struct FS_StreamingLevelBorderDebugInfo {
	int32_t LevelIndex; // 0x00(0x04)
	int32_t AdditionalLevelLoadCost; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_LevelStreamingDebugTableRow
// Size: 0x10 (Inherited: 0x08)
struct FS_LevelStreamingDebugTableRow : FTableRowBase {
	int32_t WarningSize; // 0x08(0x04)
	int32_t ErrorSize; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_LoadingScreenTemplateRow
// Size: 0x37d0 (Inherited: 0x08)
struct FS_LoadingScreenTemplateRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FVector4 GlobalPadding; // 0x10(0x10)
	float GradientOpacity; // 0x20(0x04)
	float FooterGlobalHeight; // 0x24(0x04)
	struct FSlateBrush MainBackgroundImage; // 0x28(0x88)
	struct TSoftObjectPtr<struct UTexture2D> MainBackgroundImageAsset; // 0xb0(0x28)
	struct FSlateBrush MainBackgroundGradient; // 0xd8(0x88)
	struct TSoftObjectPtr<struct UMaterialInstance> MainBackgroundGradientAsset; // 0x160(0x28)
	enum class EStretch MainBackgroundStretchType; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct FSlateBrush TutorialBackgroundImage; // 0x190(0x88)
	struct TSoftObjectPtr<struct UTexture2D> TutorialBackgroundImageAsset; // 0x218(0x28)
	struct FSlateBrush TutorialBackgroundGradient; // 0x240(0x88)
	struct TSoftObjectPtr<struct UMaterialInstance> TutorialBackgroundGradientAsset; // 0x2c8(0x28)
	struct FSlateBrush OptionalOverlayImage; // 0x2f0(0x88)
	struct TSoftObjectPtr<struct UTexture2D> OptionalOverlayImageAsset; // 0x378(0x28)
	struct FDataTableRowHandle Objective1_TitleHandle; // 0x3a0(0x10)
	struct FDataTableRowHandle Objective1_DescriptionHandle; // 0x3b0(0x10)
	struct FSlateBrush Objective1_Image; // 0x3c0(0x88)
	struct TSoftObjectPtr<struct UTexture2D> Objective1_ImageAsset; // 0x448(0x28)
	struct FDataTableRowHandle Objective2_TitleHandle; // 0x470(0x10)
	struct FDataTableRowHandle Objective2_DescriptionHandle; // 0x480(0x10)
	struct FSlateBrush Objective2_Image; // 0x490(0x88)
	struct TSoftObjectPtr<struct UTexture2D> Objective2_ImageAsset; // 0x518(0x28)
	struct FDataTableRowHandle Objective3_TitleHandle; // 0x540(0x10)
	struct FDataTableRowHandle Objective3_DescriptionHandle; // 0x550(0x10)
	struct FSlateBrush Objective3_Image; // 0x560(0x88)
	struct TSoftObjectPtr<struct UTexture2D> Objective3_ImageAsset; // 0x5e8(0x28)
	struct FSlateBrush ScavengersLogo; // 0x610(0x88)
	struct TSoftObjectPtr<struct UTexture2D> ScavengersLogoAsset; // 0x698(0x28)
	float ScavengersLogoHeight; // 0x6c0(0x04)
	enum class EHorizontalAlignment ScavengersLogoHorizontalAlignment; // 0x6c4(0x01)
	enum class EVerticalAlignment ScavengersLogoVerticalAlignment; // 0x6c5(0x01)
	char pad_6C6[0xa]; // 0x6c6(0x0a)
	struct FVector4 ScavengersLogoPadding; // 0x6d0(0x10)
	struct FDataTableRowHandle NoRecordingMessageHandle; // 0x6e0(0x10)
	struct FTextBlockStyle NoRecordingNoteStyle; // 0x6f0(0x270)
	struct FVector4 NoRecordingNotePadding; // 0x960(0x10)
	enum class ETextJustify NoRecordingNoteJustification; // 0x970(0x01)
	enum class EHorizontalAlignment NoRecordingNoteHorizontalAlignment; // 0x971(0x01)
	enum class EVerticalAlignment NoRecordingNoteVerticalAlignment; // 0x972(0x01)
	char pad_973[0x5]; // 0x973(0x05)
	struct FSlateBrush Throbber; // 0x978(0x88)
	struct TSoftObjectPtr<struct UMaterialInstance> ThrobberAsset; // 0xa00(0x28)
	float ThrobberSlotWidth; // 0xa28(0x04)
	enum class EHorizontalAlignment ThrobberHorizontalAlignment; // 0xa2c(0x01)
	enum class EVerticalAlignment ThrobberVerticalAlignment; // 0xa2d(0x01)
	char pad_A2E[0x2]; // 0xa2e(0x02)
	struct FVector4 ThrobberPadding; // 0xa30(0x10)
	struct FDataTableRowHandle LoadingTextHandle; // 0xa40(0x10)
	struct FTextBlockStyle LoadingMessageStyle; // 0xa50(0x270)
	struct FVector4 LoadingMessagePadding; // 0xcc0(0x10)
	enum class ETextJustify LoadingMessageJustification; // 0xcd0(0x01)
	enum class EHorizontalAlignment LoadingMessageHorizontalAlignment; // 0xcd1(0x01)
	enum class EVerticalAlignment LoadingMessageVerticalAlignment; // 0xcd2(0x01)
	char pad_CD3[0x1]; // 0xcd3(0x01)
	float LoadingMessageSlotWidth; // 0xcd4(0x04)
	struct FDataTableRowHandle BuildNameHandle; // 0xcd8(0x10)
	struct FTextBlockStyle BuildNameStyle; // 0xce8(0x270)
	char pad_F58[0x8]; // 0xf58(0x08)
	struct FVector4 BuildNamePadding; // 0xf60(0x10)
	enum class ETextJustify BuildNameJustification; // 0xf70(0x01)
	enum class EHorizontalAlignment BuildNameHorizontalAlignment; // 0xf71(0x01)
	enum class EVerticalAlignment BuildNameVerticalAlignment; // 0xf72(0x01)
	char pad_F73[0x5]; // 0xf73(0x05)
	struct FDataTableRowHandle BuildNoteHandle; // 0xf78(0x10)
	struct FTextBlockStyle BuildNoteStyle; // 0xf88(0x270)
	char pad_11F8[0x8]; // 0x11f8(0x08)
	struct FVector4 BuildNotePadding; // 0x1200(0x10)
	enum class ETextJustify BuildNoteJustification; // 0x1210(0x01)
	enum class EHorizontalAlignment BuildNoteHorizontalAlignment; // 0x1211(0x01)
	enum class EVerticalAlignment BuildNoteVerticalAlignment; // 0x1212(0x01)
	char pad_1213[0x1]; // 0x1213(0x01)
	int32_t CountdownTimer; // 0x1214(0x04)
	struct FTextBlockStyle CountdownStyle; // 0x1218(0x270)
	char pad_1488[0x8]; // 0x1488(0x08)
	struct FVector4 CountdownPadding; // 0x1490(0x10)
	enum class ETextJustify CountdownJustification; // 0x14a0(0x01)
	enum class EHorizontalAlignment CountdownHorizontalAlignment; // 0x14a1(0x01)
	enum class EVerticalAlignment CountdownVerticalAlignment; // 0x14a2(0x01)
	char pad_14A3[0x1]; // 0x14a3(0x01)
	float ObjectivesGlobalHeight; // 0x14a4(0x04)
	float ObjectiveImageHeight; // 0x14a8(0x04)
	float ObjectiveTitleHeight; // 0x14ac(0x04)
	float ObjectiveDescriptionHeight; // 0x14b0(0x04)
	char pad_14B4[0x4]; // 0x14b4(0x04)
	struct FTextBlockStyle ObjectiveTitleStyle; // 0x14b8(0x270)
	char pad_1728[0x8]; // 0x1728(0x08)
	struct FVector4 ObjectiveTitlePadding; // 0x1730(0x10)
	enum class ETextJustify ObjectiveTitleJustification; // 0x1740(0x01)
	char pad_1741[0x3]; // 0x1741(0x03)
	float ObjectiveTitleMinWidth; // 0x1744(0x04)
	struct FTextBlockStyle ObjectiveDescriptionStyle; // 0x1748(0x270)
	char pad_19B8[0x8]; // 0x19b8(0x08)
	struct FVector4 ObjectiveDescriptionPadding; // 0x19c0(0x10)
	enum class ETextJustify ObjectiveDescriptionJustification; // 0x19d0(0x01)
	bool ObjectiveDescriptionAutoWrapText; // 0x19d1(0x01)
	char pad_19D2[0x2]; // 0x19d2(0x02)
	float ObjectiveDescriptionWrapTextWidth; // 0x19d4(0x04)
	struct FDataTableRowHandle TutorialTitleHandle; // 0x19d8(0x10)
	struct FTextBlockStyle TutorialTitleStyle; // 0x19e8(0x270)
	char pad_1C58[0x8]; // 0x1c58(0x08)
	struct FVector4 TutorialTitlePadding; // 0x1c60(0x10)
	enum class EHorizontalAlignment TutorialTitleHorizontalAlignment; // 0x1c70(0x01)
	enum class EVerticalAlignment TutorialTitleVerticalAlignment; // 0x1c71(0x01)
	char pad_1C72[0x6]; // 0x1c72(0x06)
	struct FSlateBrush SocialHubBackgroundImage; // 0x1c78(0x88)
	struct TSoftObjectPtr<struct UTexture2D> SocialHubBackgroundImageAsset; // 0x1d00(0x28)
	struct FSlateBrush SocialHubBackgroundGradient; // 0x1d28(0x88)
	struct TSoftObjectPtr<struct UMaterialInstance> SocialHubBackgroundGradientAsset; // 0x1db0(0x28)
	struct FDataTableRowHandle SocialHubObjective1_TitleHandle; // 0x1dd8(0x10)
	struct FDataTableRowHandle SocialHubObjective1_DescriptionHandle; // 0x1de8(0x10)
	struct FSlateBrush SocialHubObjective1_Image; // 0x1df8(0x88)
	struct TSoftObjectPtr<struct UTexture2D> SocialHubObjective1_ImageAsset; // 0x1e80(0x28)
	struct FDataTableRowHandle SocialHubObjective2_TitleHandle; // 0x1ea8(0x10)
	struct FDataTableRowHandle SocialHubObjective2_DescriptionHandle; // 0x1eb8(0x10)
	struct FSlateBrush SocialHubObjective2_Image; // 0x1ec8(0x88)
	struct TSoftObjectPtr<struct UTexture2D> SocialHubObjective2_ImageAsset; // 0x1f50(0x28)
	struct FDataTableRowHandle SocialHubObjective3_TitleHandle; // 0x1f78(0x10)
	struct FDataTableRowHandle SocialHubObjective3_DescriptionHandle; // 0x1f88(0x10)
	struct FSlateBrush SocialHubObjective3_Image; // 0x1f98(0x88)
	struct TSoftObjectPtr<struct UTexture2D> SocialHubObjective3_ImageAsset; // 0x2020(0x28)
	struct FSlateBrush LoadingScreenBackground_Image; // 0x2048(0x88)
	struct TSoftObjectPtr<struct UTexture2D> LoadingScreenBackground_ImageAsset; // 0x20d0(0x28)
	struct FSlateBrush MutatorArsenalBackground_Image; // 0x20f8(0x88)
	struct TSoftObjectPtr<struct UTexture2D> MutatorArsenalBackground_ImageAsset; // 0x2180(0x28)
	struct FSlateBrush MutatorGunFuBackground_Image; // 0x21a8(0x88)
	struct TSoftObjectPtr<struct UTexture2D> MutatorGunFuBackground_ImageAsset; // 0x2230(0x28)
	struct FSlateBrush LoadingScreenGradient_Image; // 0x2258(0x88)
	struct TSoftObjectPtr<struct UMaterialInstance> LoadingScreenGradient_ImageAsset; // 0x22e0(0x28)
	char pad_2308[0x8]; // 0x2308(0x08)
	struct FVector4 LoadingScreen_MutatorRow_Padding; // 0x2310(0x10)
	struct FSlateBrush MutatorPanel_Image; // 0x2320(0x88)
	struct TSoftObjectPtr<struct UTexture2D> MutatorPanel_ImageAsset; // 0x23a8(0x28)
	struct FSlateBrush ObjectivesPanel_Image; // 0x23d0(0x88)
	struct TSoftObjectPtr<struct UTexture2D> ObjectivesPanel_ImageAsset; // 0x2458(0x28)
	struct FSlateBrush TutorialPanel_Image; // 0x2480(0x88)
	struct TSoftObjectPtr<struct UTexture2D> TutorialPanel_ImageAsset; // 0x2508(0x28)
	struct FVector4 TutorialPanel_Padding; // 0x2530(0x10)
	struct FVector4 MutatorPanel_Padding; // 0x2540(0x10)
	struct FVector4 ObjectivesPanel_Padding; // 0x2550(0x10)
	struct FVector4 ObjectivesRow_Padding; // 0x2560(0x10)
	struct FSlateBrush MutatorDNAIcon_Image; // 0x2570(0x88)
	struct TSoftObjectPtr<struct UTexture2D> MutatorDNAIcon_ImageAsset; // 0x25f8(0x28)
	struct FVector4 LoadingScreen_DNAIconLeft_Padding; // 0x2620(0x10)
	struct FVector4 LoadingScreen_DNAIconRight_Padding; // 0x2630(0x10)
	float LoadingScreen_DNAIcon_SlotWidth; // 0x2640(0x04)
	char pad_2644[0x4]; // 0x2644(0x04)
	struct FDataTableRowHandle MutatorTutorialTitleHandle; // 0x2648(0x10)
	struct FTextBlockStyle MutatorTutorialTitleStyle; // 0x2658(0x270)
	char pad_28C8[0x8]; // 0x28c8(0x08)
	struct FVector4 MutatorTutorialTitlePadding; // 0x28d0(0x10)
	enum class ETextJustify MutatorTutorialTitleJustification; // 0x28e0(0x01)
	char pad_28E1[0x3]; // 0x28e1(0x03)
	float MutatorTutorialTitleMinWidth; // 0x28e4(0x04)
	struct FDataTableRowHandle MutatorTitleHandle_Arsenal; // 0x28e8(0x10)
	struct FDataTableRowHandle MutatorTitleHandle_GunFu; // 0x28f8(0x10)
	struct FTextBlockStyle MutatorTitleStyle; // 0x2908(0x270)
	char pad_2B78[0x8]; // 0x2b78(0x08)
	struct FVector4 MutatorTitlePadding; // 0x2b80(0x10)
	enum class ETextJustify MutatorTitleJustification; // 0x2b90(0x01)
	char pad_2B91[0x3]; // 0x2b91(0x03)
	float MutatorTitleMinWidth; // 0x2b94(0x04)
	struct FDataTableRowHandle MutatorDescriptionHandle_GunFu; // 0x2b98(0x10)
	struct FDataTableRowHandle MutatorDescriptionHandle_Arsenal; // 0x2ba8(0x10)
	struct FTextBlockStyle MutatorDescriptionStyle; // 0x2bb8(0x270)
	char pad_2E28[0x8]; // 0x2e28(0x08)
	struct FVector4 MutatorDescriptionPadding; // 0x2e30(0x10)
	enum class ETextJustify MutatorDescriptionJustification; // 0x2e40(0x01)
	bool MutatorDescriptionAutoWrapText; // 0x2e41(0x01)
	char pad_2E42[0x2]; // 0x2e42(0x02)
	float MutatorDescriptionWrapTextWidth; // 0x2e44(0x04)
	struct FSlateBrush MutatorObjective1Icon_Image; // 0x2e48(0x88)
	struct TSoftObjectPtr<struct UTexture2D> MutatorObjective1Icon_ImageAsset; // 0x2ed0(0x28)
	struct FSlateBrush MutatorObjective2Icon_Image; // 0x2ef8(0x88)
	struct TSoftObjectPtr<struct UTexture2D> MutatorObjective2Icon_ImageAsset; // 0x2f80(0x28)
	struct FSlateBrush MutatorObjective3Icon_Image; // 0x2fa8(0x88)
	struct TSoftObjectPtr<struct UTexture2D> MutatorObjective3Icon_ImageAsset; // 0x3030(0x28)
	char pad_3058[0x8]; // 0x3058(0x08)
	struct FVector4 MutatorObjectiveIcon_Padding; // 0x3060(0x10)
	float MutatorObjectiveIconHeight; // 0x3070(0x04)
	char pad_3074[0x4]; // 0x3074(0x04)
	struct FTextBlockStyle GameplayHintStyle; // 0x3078(0x270)
	char pad_32E8[0x8]; // 0x32e8(0x08)
	struct FVector4 GameplayHintPadding; // 0x32f0(0x10)
	enum class ETextJustify GameplayHintJustification; // 0x3300(0x01)
	bool GameplayHintAutoWrapText; // 0x3301(0x01)
	char pad_3302[0x2]; // 0x3302(0x02)
	float GameplayHintWrapTextWidth; // 0x3304(0x04)
	float GameplayHintSlotWidth; // 0x3308(0x04)
	char pad_330C[0x4]; // 0x330c(0x04)
	struct FText MutatorTitle_GunFu; // 0x3310(0x18)
	struct FText MutatorTitle_Arsenal; // 0x3328(0x18)
	bool MutatorTitle_ForceUppercase; // 0x3340(0x01)
	char pad_3341[0x7]; // 0x3341(0x07)
	struct FText MutatorDescription_Arsenal; // 0x3348(0x18)
	struct FText MutatorDescription_GunFu; // 0x3360(0x18)
	bool MutatorDescription_ForceUppercase; // 0x3378(0x01)
	char pad_3379[0x7]; // 0x3379(0x07)
	struct FSlateBrush ScavengersLogo_Image; // 0x3380(0x88)
	struct TSoftObjectPtr<struct UTexture2D> ScavengersLogo_ImageAsset; // 0x3408(0x28)
	struct FVector4 ScavengersLogo_Padding; // 0x3430(0x10)
	struct TArray<struct FText> GameplayHintList; // 0x3440(0x10)
	char pad_3450[0x20]; // 0x3450(0x20)
	bool Objective1_Title_ForceUppercase; // 0x3470(0x01)
	char pad_3471[0x1f]; // 0x3471(0x1f)
	bool Objective1_Description_ForceUppercase; // 0x3490(0x01)
	char pad_3491[0x1f]; // 0x3491(0x1f)
	bool Objective2_Title_ForceUppercase; // 0x34b0(0x01)
	char pad_34B1[0x1f]; // 0x34b1(0x1f)
	bool Objective2_Description_ForceUppercase; // 0x34d0(0x01)
	char pad_34D1[0x1f]; // 0x34d1(0x1f)
	bool Objective3_Title_ForceUppercase; // 0x34f0(0x01)
	char pad_34F1[0x1f]; // 0x34f1(0x1f)
	bool Objective3_Description_ForceUppercase; // 0x3510(0x01)
	char pad_3511[0x1f]; // 0x3511(0x1f)
	bool NoRecordingMessage_ForceUppercase; // 0x3530(0x01)
	char pad_3531[0x1f]; // 0x3531(0x1f)
	bool LoadingText_ForceUppercase; // 0x3550(0x01)
	char pad_3551[0x7]; // 0x3551(0x07)
	struct FText BuildName; // 0x3558(0x18)
	bool BuildName_ForceUppercase; // 0x3570(0x01)
	char pad_3571[0x1f]; // 0x3571(0x1f)
	bool BuildNote_ForceUppercase; // 0x3590(0x01)
	char pad_3591[0x1f]; // 0x3591(0x1f)
	bool TutorialTitle_ForceUppercase; // 0x35b0(0x01)
	char pad_35B1[0x3]; // 0x35b1(0x03)
	float FadeIn; // 0x35b4(0x04)
	float HoldOnBackground; // 0x35b8(0x04)
	float FadeInContent; // 0x35bc(0x04)
	float HoldOnContent; // 0x35c0(0x04)
	float FadeOut; // 0x35c4(0x04)
	float FadeInTutorial; // 0x35c8(0x04)
	float HoldOnTutorial; // 0x35cc(0x04)
	float FadeOutTutorial; // 0x35d0(0x04)
	float TimeBetweenHints; // 0x35d4(0x04)
	char pad_35D8[0x1f8]; // 0x35d8(0x1f8)
};

// ScriptStruct Scavenger.S_LoadoutSlotData
// Size: 0x48 (Inherited: 0x08)
struct FS_LoadoutSlotData : FTableRowBase {
	enum class ES_LoadoutSlotType SlotType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText DisplayName; // 0x10(0x18)
	struct FText SlotDescription; // 0x28(0x18)
	int32_t ItemCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Scavenger.S_LoadoutForReplication
// Size: 0x10 (Inherited: 0x00)
struct FS_LoadoutForReplication {
	struct TArray<struct FS_LoadoutSelectionForReplication> Selections; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LoadoutSelectionForReplication
// Size: 0x0c (Inherited: 0x00)
struct FS_LoadoutSelectionForReplication {
	int32_t SlotType; // 0x00(0x04)
	struct FName ItemMetadataId; // 0x04(0x08)
};

// ScriptStruct Scavenger.S_LobbyPlayerReconnectState
// Size: 0x240 (Inherited: 0x00)
struct FS_LobbyPlayerReconnectState {
	struct FS_LobbyPlayerState PlayerState; // 0x00(0x118)
	struct FS_LobbyPartyState PartyState; // 0x118(0x60)
	struct FS_LobbyTeamState TeamState; // 0x178(0x68)
	struct FS_LobbyVoiceChatCredentials VoiceChatCredentials; // 0x1e0(0x50)
	struct FS_LobbyQueueList QueueList; // 0x230(0x10)
};

// ScriptStruct Scavenger.S_LobbyQueueList
// Size: 0x10 (Inherited: 0x00)
struct FS_LobbyQueueList {
	struct TArray<struct FS_LobbyQueue> Queues; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LobbyVoiceChatCredentials
// Size: 0x50 (Inherited: 0x00)
struct FS_LobbyVoiceChatCredentials {
	struct FString LoginToken; // 0x00(0x10)
	struct FString ChannelName; // 0x10(0x10)
	struct FString ChannelJoinToken; // 0x20(0x10)
	struct TArray<struct FString> BackupLoginTokens; // 0x30(0x10)
	struct TArray<struct FString> BackupChannelJoinTokens; // 0x40(0x10)
};

// ScriptStruct Scavenger.S_LobbyPartyState
// Size: 0x60 (Inherited: 0x00)
struct FS_LobbyPartyState {
	struct FS_LobbyParty party; // 0x00(0x60)
};

// ScriptStruct Scavenger.S_LobbyPlayerState
// Size: 0x118 (Inherited: 0x00)
struct FS_LobbyPlayerState {
	struct FS_LobbyPlayer Player; // 0x00(0x108)
	struct FString State; // 0x108(0x10)
};

// ScriptStruct Scavenger.S_LobbyTitleNews
// Size: 0x10 (Inherited: 0x00)
struct FS_LobbyTitleNews {
	struct TArray<struct FS_LobbyTitleNewsItem> NewsItems; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LobbyTitleNewsItem
// Size: 0x48 (Inherited: 0x00)
struct FS_LobbyTitleNewsItem {
	struct FString Title; // 0x00(0x10)
	struct FString Body; // 0x10(0x10)
	struct FDateTime Timestamp; // 0x20(0x08)
	struct FString Locale; // 0x28(0x10)
	struct FString ImageUrl; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_LobbyRequestTitleNews
// Size: 0x18 (Inherited: 0x00)
struct FS_LobbyRequestTitleNews {
	int32_t Count; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Locale; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_LobbyMatchPhaseUpdate
// Size: 0x10 (Inherited: 0x00)
struct FS_LobbyMatchPhaseUpdate {
	struct FString Phase; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LobbyServerJoinQueue
// Size: 0x10 (Inherited: 0x00)
struct FS_LobbyServerJoinQueue {
	struct FString QueueId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LobbyServerHello
// Size: 0x48 (Inherited: 0x00)
struct FS_LobbyServerHello {
	struct FString ServerDisplayName; // 0x00(0x10)
	struct FString OverrideIpAddress; // 0x10(0x10)
	struct FString ServerVersion; // 0x20(0x10)
	struct FString SpatialDeploymentName; // 0x30(0x10)
	int32_t MaxPlayers; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Scavenger.S_LobbySendTextMessage
// Size: 0x20 (Inherited: 0x00)
struct FS_LobbySendTextMessage {
	struct FString Message; // 0x00(0x10)
	struct FString Context; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_LobbySendPartyInvite
// Size: 0x10 (Inherited: 0x00)
struct FS_LobbySendPartyInvite {
	struct FString PlayerId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LobbyPartyLeaveCurrentTeam
// Size: 0x01 (Inherited: 0x00)
struct FS_LobbyPartyLeaveCurrentTeam {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_RemoveMyPartyFromQueue
// Size: 0x01 (Inherited: 0x00)
struct FS_RemoveMyPartyFromQueue {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_LobbyPlayerLeaveCurrentParty
// Size: 0x01 (Inherited: 0x00)
struct FS_LobbyPlayerLeaveCurrentParty {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_LobbyRequestToJoinParty
// Size: 0x10 (Inherited: 0x00)
struct FS_LobbyRequestToJoinParty {
	struct FString PartyId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LobbyRequestChatCredentials
// Size: 0x01 (Inherited: 0x00)
struct FS_LobbyRequestChatCredentials {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_LobbyRequestVoiceChatCredentials
// Size: 0x01 (Inherited: 0x00)
struct FS_LobbyRequestVoiceChatCredentials {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_LobbyReturnToLobby
// Size: 0x10 (Inherited: 0x00)
struct FS_LobbyReturnToLobby {
	struct FString Reason; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LobbyStartGame
// Size: 0x01 (Inherited: 0x00)
struct FS_LobbyStartGame {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_LobbyGameJoined
// Size: 0x108 (Inherited: 0x00)
struct FS_LobbyGameJoined {
	struct FS_LobbyPlayer Player; // 0x00(0x108)
};

// ScriptStruct Scavenger.S_LobbyUpdatePlayerDetails
// Size: 0x110 (Inherited: 0x00)
struct FS_LobbyUpdatePlayerDetails {
	struct FS_LobbyPlayer Player; // 0x00(0x108)
	bool LockedIn; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// ScriptStruct Scavenger.S_LobbyChangeTeam
// Size: 0x04 (Inherited: 0x00)
struct FS_LobbyChangeTeam {
	int32_t NewTeamIndex; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_LobbyJoinMyPartyToQueue
// Size: 0x10 (Inherited: 0x00)
struct FS_LobbyJoinMyPartyToQueue {
	struct FString QueueId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LobbyRefreshOnlinePlayersList
// Size: 0x18 (Inherited: 0x00)
struct FS_LobbyRefreshOnlinePlayersList {
	int32_t MaxResults; // 0x00(0x04)
	int32_t Offset; // 0x04(0x04)
	struct FString Search; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_LobbyRefreshQueues
// Size: 0x01 (Inherited: 0x00)
struct FS_LobbyRefreshQueues {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_LobbyClientHello
// Size: 0x148 (Inherited: 0x00)
struct FS_LobbyClientHello {
	struct FString Platform; // 0x00(0x10)
	struct FString ClientVersion; // 0x10(0x10)
	struct FString KeyFingerprint; // 0x20(0x10)
	struct FString ChallengeResponse; // 0x30(0x10)
	struct FS_LobbyPlayer Player; // 0x40(0x108)
};

// ScriptStruct Scavenger.S_LobbyMatchAllocated
// Size: 0x18 (Inherited: 0x00)
struct FS_LobbyMatchAllocated {
	int32_t TeamIndex; // 0x00(0x04)
	int32_t expectedPlayerCount; // 0x04(0x04)
	int32_t expectedTeamCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t RandomSeed; // 0x10(0x08)
};

// ScriptStruct Scavenger.S_LobbyMatchManifest
// Size: 0x40 (Inherited: 0x00)
struct FS_LobbyMatchManifest {
	int32_t expectedPlayerCount; // 0x00(0x04)
	int32_t expectedTeamCount; // 0x04(0x04)
	int64_t RandomSeed; // 0x08(0x08)
	struct TArray<struct FS_LobbyTeam> AllTeams; // 0x10(0x10)
	struct FJsonObjectWrapper MetaData; // 0x20(0x20)
};

// ScriptStruct Scavenger.S_LobbyNextDraftingPeriod
// Size: 0x10 (Inherited: 0x00)
struct FS_LobbyNextDraftingPeriod {
	struct FString draftingPlayerId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LobbyOnlinePlayers
// Size: 0x18 (Inherited: 0x00)
struct FS_LobbyOnlinePlayers {
	int32_t TotalOnlinePlayers; // 0x00(0x04)
	int32_t Offset; // 0x04(0x04)
	struct TArray<struct FS_LobbyPlayer> OnlinePlayerResults; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_LobbyChatCredentials
// Size: 0x80 (Inherited: 0x00)
struct FS_LobbyChatCredentials {
	struct FString Host; // 0x00(0x10)
	struct FString XmppEndpoint; // 0x10(0x10)
	struct FString WsEndpoint; // 0x20(0x10)
	struct FString Jid; // 0x30(0x10)
	struct FString Username; // 0x40(0x10)
	struct FString Password; // 0x50(0x10)
	struct FString LobbyChatRoom; // 0x60(0x10)
	struct FString Resource; // 0x70(0x10)
};

// ScriptStruct Scavenger.S_LobbyHaveFun
// Size: 0x01 (Inherited: 0x00)
struct FS_LobbyHaveFun {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_LobbyPartyInvite
// Size: 0x168 (Inherited: 0x00)
struct FS_LobbyPartyInvite {
	struct FS_LobbyParty party; // 0x00(0x60)
	struct FS_LobbyPlayer InviteSentBy; // 0x60(0x108)
};

// ScriptStruct Scavenger.S_LobbyJoinQueueFailed
// Size: 0x20 (Inherited: 0x00)
struct FS_LobbyJoinQueueFailed {
	struct FString QueueId; // 0x00(0x10)
	struct FString ErrorCode; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_LobbyJoinPartyFailed
// Size: 0x20 (Inherited: 0x00)
struct FS_LobbyJoinPartyFailed {
	struct FString PartyId; // 0x00(0x10)
	struct FString ErrorCode; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_LobbyReceivedTextMessage
// Size: 0x40 (Inherited: 0x00)
struct FS_LobbyReceivedTextMessage {
	struct FString fromPlayerId; // 0x00(0x10)
	struct FString FromPlayerDisplayName; // 0x10(0x10)
	struct FString Message; // 0x20(0x10)
	struct FString Context; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_LobbyQueueStatus
// Size: 0x78 (Inherited: 0x00)
struct FS_LobbyQueueStatus {
	struct FS_LobbyQueue queue; // 0x00(0x70)
	int32_t PlayersSearching; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Scavenger.S_LocalGameJoinParameters
// Size: 0x120 (Inherited: 0x00)
struct FS_LocalGameJoinParameters {
	struct FName ClassName; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	int32_t TeamIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString PlayerId; // 0x20(0x10)
	struct FS_CharacterLoadout GameplayLoadout; // 0x30(0x50)
	struct FS_CosmeticLoadout CosmeticLoadout; // 0x80(0x50)
	struct FS_CosmeticLoadout AccountCosmeticLoadout; // 0xd0(0x50)
};

// ScriptStruct Scavenger.S_LocalizedTextTableRow
// Size: 0x20 (Inherited: 0x08)
struct FS_LocalizedTextTableRow : FTableRowBase {
	struct FText Text; // 0x08(0x18)
};

// ScriptStruct Scavenger.S_LootAudioTypeInfo
// Size: 0x30 (Inherited: 0x00)
struct FS_LootAudioTypeInfo {
	int32_t Priority; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* AudioEventsByRarity[0x5]; // 0x08(0x28)
};

// ScriptStruct Scavenger.S_LootAudioEvent
// Size: 0x10 (Inherited: 0x00)
struct FS_LootAudioEvent {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LootSpawnSettings
// Size: 0x30 (Inherited: 0x00)
struct FS_LootSpawnSettings {
	char bEvenlyDistributeImpulseVectors : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector ConeDirection; // 0x04(0x0c)
	struct FVector ConeOffsetLocation; // 0x10(0x0c)
	float ConeRadius; // 0x1c(0x04)
	float ImpulseStrength; // 0x20(0x04)
	float ImpulseStrengthRandomVariance; // 0x24(0x04)
	float TimeBetweenSpawns; // 0x28(0x04)
	float TimeBetweenSpawnsRandomVariance; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_LootDescriptor
// Size: 0x28 (Inherited: 0x08)
struct FS_LootDescriptor : FTableRowBase {
	char bDuplicateItemsOkay : 1; // 0x08(0x01)
	char bDuplicateLootSelectorsOkay : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MinimumNumberOfSelections; // 0x0c(0x04)
	int32_t MaximumNumberOfSelections; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FS_LootSelector> LootSelectors; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_SelectorBase
// Size: 0x04 (Inherited: 0x00)
struct FS_SelectorBase {
	float RelativeChance; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_LootSelector
// Size: 0x28 (Inherited: 0x04)
struct FS_LootSelector : FS_SelectorBase {
	char bDuplicateTableSelectorsOkay : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FS_LootQuantitySelector> ItemQuantitySelectors; // 0x08(0x10)
	struct TArray<struct FS_LootTableSelector> LootTableSelectors; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_LootTableSelector
// Size: 0x48 (Inherited: 0x04)
struct FS_LootTableSelector : FS_SelectorBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftObjectPtr<struct US_LootTableDescriptorData> LootTableDescriptorData; // 0x08(0x28)
	struct FS_LootTableDescriptor LootTableDescriptor; // 0x30(0x10)
	struct US_LootTableDescriptorData* LoadedLootTableDescriptorData; // 0x40(0x08)
};

// ScriptStruct Scavenger.S_LootTableDescriptor
// Size: 0x10 (Inherited: 0x00)
struct FS_LootTableDescriptor {
	struct TArray<struct FS_LootTableEntry> Entries; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_LootTableEntry
// Size: 0x40 (Inherited: 0x04)
struct FS_LootTableEntry : FS_SelectorBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftObjectPtr<struct US_ItemData> ItemData; // 0x08(0x28)
	int32_t MinimumQuantity; // 0x30(0x04)
	int32_t MaximumQuantity; // 0x34(0x04)
	struct US_ItemData* LoadedItemData; // 0x38(0x08)
};

// ScriptStruct Scavenger.S_LootQuantitySelector
// Size: 0x0c (Inherited: 0x04)
struct FS_LootQuantitySelector : FS_SelectorBase {
	int32_t MinimumNumberOfItems; // 0x04(0x04)
	int32_t MaximumNumberOfItems; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_InternalMapServerData
// Size: 0x10 (Inherited: 0x00)
struct FS_InternalMapServerData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_NamedLocationMetadataTableRowReference
// Size: 0x20 (Inherited: 0x00)
struct FS_NamedLocationMetadataTableRowReference {
	struct FDataTableRowHandle TableRowHandle; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_OverrideMapDisplayDataTableRowReference
// Size: 0x20 (Inherited: 0x00)
struct FS_OverrideMapDisplayDataTableRowReference {
	struct FDataTableRowHandle TableRowHandle; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_OverrideMapDisplayData
// Size: 0x68 (Inherited: 0x08)
struct FS_OverrideMapDisplayData : FTableRowBase {
	struct UTexture2D* Texture; // 0x08(0x08)
	bool OverrideTexture; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UTexture2D* AltTexture; // 0x18(0x08)
	bool OverrideAltTexture; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float AltTextureSize; // 0x24(0x04)
	bool OverrideAltTextureSize; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UMaterialInstance* MaterialOverride; // 0x30(0x08)
	bool OverrideMaterialOverride; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FLinearColor Color; // 0x3c(0x10)
	bool OverrideColor; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FName DisplayText; // 0x50(0x08)
	bool OverrideDisplayText; // 0x58(0x01)
	enum class ES_ZoomType ZoomType; // 0x59(0x01)
	bool OverrideZoomType; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	float ZoomLevel; // 0x5c(0x04)
	bool OverrideZoomLevel; // 0x60(0x01)
	char ZOrder; // 0x61(0x01)
	bool OverrideZOrder; // 0x62(0x01)
	enum class ES_EnemyInfoType EnemyInfoType; // 0x63(0x01)
	bool OverrideEnemyInfoType; // 0x64(0x01)
	bool bAllowGuttering; // 0x65(0x01)
	bool OverrideAllowGuttering; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
};

// ScriptStruct Scavenger.S_DetectedActorLocationData
// Size: 0x20 (Inherited: 0x00)
struct FS_DetectedActorLocationData {
	struct FVector2D WorldLocation2D; // 0x00(0x08)
	enum class ES_DetectionReason DetectionReason; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float PingSizeWorldUnits; // 0x0c(0x04)
	float SpawnGameTime; // 0x10(0x04)
	float Lifetime; // 0x14(0x04)
	struct US_MapDetectableComponent* Owner; // 0x18(0x08)
};

// ScriptStruct Scavenger.S_DetectionTypeConfigItem
// Size: 0x14 (Inherited: 0x00)
struct FS_DetectionTypeConfigItem {
	int32_t Score; // 0x00(0x04)
	float DetectionDistance; // 0x04(0x04)
	float UpdatePeriodSeconds; // 0x08(0x04)
	float PingSizeWorldUnits; // 0x0c(0x04)
	float JitterRadius; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_MatchRecordHolder
// Size: 0x10 (Inherited: 0x00)
struct FS_MatchRecordHolder {
	struct TArray<struct FS_MatchRecord> MatchRecords; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_MatchRecord
// Size: 0x180 (Inherited: 0x00)
struct FS_MatchRecord {
	char pad_0[0x180]; // 0x00(0x180)
};

// ScriptStruct Scavenger.S_StartOfMatchRecord
// Size: 0x18 (Inherited: 0x00)
struct FS_StartOfMatchRecord {
	struct FString MatchID; // 0x00(0x10)
	int32_t PlayerIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_MeleeAttackerInfo
// Size: 0x20 (Inherited: 0x00)
struct FS_MeleeAttackerInfo {
	struct AActor* AttackerTargetingMe; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Scavenger.S_MeleeAttackState
// Size: 0x50 (Inherited: 0x00)
struct FS_MeleeAttackState {
	struct AActor* CurrentTarget; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
	struct FS_MeleeHitPlaybackState meleeHitPlaybackState; // 0x28(0x28)
};

// ScriptStruct Scavenger.S_MeleeHitPlaybackState
// Size: 0x28 (Inherited: 0x00)
struct FS_MeleeHitPlaybackState {
	struct US_MeleeHitPlaybackSettings* playbackSettings; // 0x00(0x08)
	struct UAnimMontage* meleeMontage; // 0x08(0x08)
	struct UMatineeCameraShake* meleeCameraShake; // 0x10(0x08)
	struct UCameraAnimInst* meleeCameraAnim; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Scavenger.S_MeleeMontageData
// Size: 0x50 (Inherited: 0x00)
struct FS_MeleeMontageData {
	struct TMap<struct AS_CharacterBase*, struct FS_MeleeCatalogue> Catalogues; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_MeleeCatalogue
// Size: 0xd0 (Inherited: 0x00)
struct FS_MeleeCatalogue {
	struct TMap<struct FName, struct FS_MeleeMontage> MontageMasterList; // 0x00(0x50)
	struct FS_CharacterStateMontageContainer StateTree; // 0x50(0x80)
};

// ScriptStruct Scavenger.S_CharacterStateMontageContainer
// Size: 0x80 (Inherited: 0x00)
struct FS_CharacterStateMontageContainer {
	struct FS_CharacterStanceMontageContainer StateContainers[0x4]; // 0x00(0x80)
};

// ScriptStruct Scavenger.S_CharacterStanceMontageContainer
// Size: 0x20 (Inherited: 0x00)
struct FS_CharacterStanceMontageContainer {
	struct FName StanceMontages[0x4]; // 0x00(0x20)
};

// ScriptStruct Scavenger.S_MeleeMontage
// Size: 0x28 (Inherited: 0x00)
struct FS_MeleeMontage {
	struct UAnimMontage* WindupMontage; // 0x00(0x08)
	struct UAnimMontage* LightMontage; // 0x08(0x08)
	struct UAnimMontage* HeavyMontage; // 0x10(0x08)
	struct UAnimMontage* LightRecoil; // 0x18(0x08)
	struct UAnimMontage* HeavyRecoil; // 0x20(0x08)
};

// ScriptStruct Scavenger.S_MeleeMontageStateMachine
// Size: 0x50 (Inherited: 0x00)
struct FS_MeleeMontageStateMachine {
	struct TMap<struct FName, struct FS_MeleeMontage> MeleeMontages; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_DryFireSound
// Size: 0x08 (Inherited: 0x00)
struct FS_DryFireSound {
	struct UAkAudioEvent* Event; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_WhizBySound
// Size: 0x28 (Inherited: 0x00)
struct FS_WhizBySound {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAkAudioEvent* EnterEvent; // 0x08(0x08)
	struct UAkAudioEvent* ClosestEvent; // 0x10(0x08)
	struct UAkAudioEvent* ExitEvent; // 0x18(0x08)
	bool TestWhizByOnTick; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Scavenger.S_ReloadSound
// Size: 0x08 (Inherited: 0x00)
struct FS_ReloadSound {
	struct UAkAudioEvent* Event; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_MeleeSound
// Size: 0x08 (Inherited: 0x00)
struct FS_MeleeSound {
	struct UAkAudioEvent* Event; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_MessengerAbilityInfo
// Size: 0x10 (Inherited: 0x00)
struct FS_MessengerAbilityInfo {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct AS_StreamerAbility* AbilityClass; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_MixStateManager
// Size: 0x410 (Inherited: 0x00)
struct FS_MixStateManager {
	char pad_0[0x410]; // 0x00(0x410)
};

// ScriptStruct Scavenger.S_MontageCatalogueIndex
// Size: 0x0c (Inherited: 0x00)
struct FS_MontageCatalogueIndex {
	struct FName Key; // 0x00(0x08)
	int32_t VariationIndex; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_MontageCatalogueTableRow
// Size: 0x18 (Inherited: 0x08)
struct FS_MontageCatalogueTableRow : FTableRowBase {
	struct TArray<struct UAnimMontage*> Montage; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_MusicEvent
// Size: 0x20 (Inherited: 0x00)
struct FS_MusicEvent {
	struct UAkAudioEvent* Event; // 0x00(0x08)
	struct UAkAudioEvent* StopEvent; // 0x08(0x08)
	enum class ES_MusicCue Cue; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Priority; // 0x14(0x04)
	bool bStinger; // 0x18(0x01)
	bool bIgnoreLevelChangeStop; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Scavenger.S_TrackedDirtiedAreaInfo
// Size: 0x18 (Inherited: 0x00)
struct FS_TrackedDirtiedAreaInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Scavenger.S_ObjectiveState
// Size: 0x128 (Inherited: 0x00)
struct FS_ObjectiveState {
	struct FS_ObjectiveSharedState ObjectiveState; // 0x00(0x108)
	struct TArray<struct FS_GoalState> GoalStates; // 0x108(0x10)
	struct TArray<struct FS_MarkerState> MarkerStates; // 0x118(0x10)
};

// ScriptStruct Scavenger.S_MarkerState
// Size: 0x48 (Inherited: 0x00)
struct FS_MarkerState {
	char pad_0[0x18]; // 0x00(0x18)
	struct AActor* Actor; // 0x18(0x08)
	char pad_20[0x28]; // 0x20(0x28)
};

// ScriptStruct Scavenger.S_GoalState
// Size: 0x128 (Inherited: 0x00)
struct FS_GoalState {
	char pad_0[0x10]; // 0x00(0x10)
	struct FS_ObjectiveSharedState GoalState; // 0x10(0x108)
	struct TArray<struct FS_SubGoalState> SubGoalStates; // 0x118(0x10)
};

// ScriptStruct Scavenger.S_SubGoalState
// Size: 0x120 (Inherited: 0x00)
struct FS_SubGoalState {
	char pad_0[0x18]; // 0x00(0x18)
	struct FS_ObjectiveSharedState SubGoalState; // 0x18(0x108)
};

// ScriptStruct Scavenger.S_ObjectiveSharedState
// Size: 0x108 (Inherited: 0x00)
struct FS_ObjectiveSharedState {
	char pad_0[0x20]; // 0x00(0x20)
	struct AS_PlayerController* PlayerController; // 0x20(0x08)
	char pad_28[0x50]; // 0x28(0x50)
	struct UObject* PawnClass; // 0x78(0x08)
	char pad_80[0x10]; // 0x80(0x10)
	struct AActor* Actor; // 0x90(0x08)
	char pad_98[0x70]; // 0x98(0x70)
};

// ScriptStruct Scavenger.S_SubGoalHandle
// Size: 0x14 (Inherited: 0x00)
struct FS_SubGoalHandle {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Scavenger.S_GoalHandle
// Size: 0x0c (Inherited: 0x00)
struct FS_GoalHandle {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_GoalDescriptor
// Size: 0xe8 (Inherited: 0x00)
struct FS_GoalDescriptor {
	struct FS_ObjectiveDescriptor Descriptor; // 0x00(0xd8)
	struct TArray<struct FS_ObjectiveDescriptor> SubGoalDescriptors; // 0xd8(0x10)
};

// ScriptStruct Scavenger.S_ObjectiveDescriptor
// Size: 0xd8 (Inherited: 0x00)
struct FS_ObjectiveDescriptor {
	struct FName LabelId; // 0x00(0x08)
	struct FName DescriptionId; // 0x08(0x08)
	int32_t Flags; // 0x10(0x04)
	enum class ES_ObjectiveOutcomeSelector AutoCompleteType; // 0x14(0x01)
	enum class ES_ObjectiveOutcomeSelector AutoFailureType; // 0x15(0x01)
	enum class ES_ObjectiveProgressSelector ProgressAutoIncrementType; // 0x16(0x01)
	enum class ES_ObjectiveProgressSelector ProgressAutoDecrementType; // 0x17(0x01)
	int32_t ProgressCompleteValue; // 0x18(0x04)
	int32_t ProgressFailureValue; // 0x1c(0x04)
	int32_t ProgressInitialValue; // 0x20(0x04)
	struct FName InteractActorTag; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TSoftObjectPtr<struct US_ItemData> ItemData; // 0x30(0x28)
	struct APawn* PawnClass; // 0x58(0x08)
	struct FName PawnTag; // 0x60(0x08)
	enum class ES_ScavAITeams PawnTeamId; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float PawnMarkerRange; // 0x6c(0x04)
	struct AActor* Actor; // 0x70(0x08)
	struct FVector AreaCenter; // 0x78(0x0c)
	float AreaRadius; // 0x84(0x04)
	float AreaTimeLimitInSeconds; // 0x88(0x04)
	float TimeLimitInSeconds; // 0x8c(0x04)
	struct FS_MarkerDescriptor MarkerDescriptor; // 0x90(0x40)
	int32_t RewardScore; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct Scavenger.S_MarkerDescriptor
// Size: 0x40 (Inherited: 0x00)
struct FS_MarkerDescriptor {
	struct FName LabelId; // 0x00(0x08)
	int32_t Flags; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* Actor; // 0x10(0x08)
	struct FLinearColor Color; // 0x18(0x10)
	struct FVector Location; // 0x28(0x0c)
	struct FVector Offset; // 0x34(0x0c)
};

// ScriptStruct Scavenger.S_MarkerHandle
// Size: 0x0c (Inherited: 0x00)
struct FS_MarkerHandle {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_ObjectiveContainer
// Size: 0x68 (Inherited: 0x00)
struct FS_ObjectiveContainer {
	char pad_0[0x8]; // 0x00(0x08)
	struct TSet<struct AS_PlayerController*> SetOfPlayersNotifiedAboutStart; // 0x08(0x50)
	char pad_58[0x8]; // 0x58(0x08)
	struct US_Objective* objective; // 0x60(0x08)
};

// ScriptStruct Scavenger.S_OnlineCatalogItemContents
// Size: 0xa0 (Inherited: 0x00)
struct FS_OnlineCatalogItemContents {
	struct TMap<struct FName, int32_t> CurrencyIdToCount; // 0x00(0x50)
	struct TMap<struct FName, int32_t> EntitlementIdToCount; // 0x50(0x50)
};

// ScriptStruct Scavenger.S_OnlineEventMetadata
// Size: 0x50 (Inherited: 0x10)
struct FS_OnlineEventMetadata : FS_MetadataTableRowBase {
	struct FDataTableRowHandle CarouselMetadata; // 0x10(0x10)
	struct FText Name; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
};

// ScriptStruct Scavenger.S_OnlineGameTuningValues
// Size: 0x14 (Inherited: 0x00)
struct FS_OnlineGameTuningValues {
	struct FName SalvageTypeNameAwardedForExtraction; // 0x00(0x08)
	int32_t CloneBackupAmount3man; // 0x08(0x04)
	int32_t CloneBackupAmount2man; // 0x0c(0x04)
	int32_t CloneBackupIncrement; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_LobbyMessageHistoryEntry
// Size: 0x20 (Inherited: 0x00)
struct FS_LobbyMessageHistoryEntry {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Scavenger.S_SteamTokenInfo
// Size: 0x428 (Inherited: 0x00)
struct FS_SteamTokenInfo {
	char pad_0[0x428]; // 0x00(0x428)
};

// ScriptStruct Scavenger.S_OnlineResearchProjectDefinition
// Size: 0x80 (Inherited: 0x00)
struct FS_OnlineResearchProjectDefinition {
	struct FName ID; // 0x00(0x08)
	bool IsAssembly; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<struct FName, int32_t> ResourceCost; // 0x10(0x50)
	int32_t PowerCost; // 0x60(0x04)
	int32_t ResearchTimeSecs; // 0x64(0x04)
	struct FName OutputOnlineItemId; // 0x68(0x08)
	struct FName RestrictionId; // 0x70(0x08)
	struct FName ViewRestrictionId; // 0x78(0x08)
};

// ScriptStruct Scavenger.S_OnlineResearchProjectMetadata
// Size: 0x60 (Inherited: 0x58)
struct FS_OnlineResearchProjectMetadata : FS_DisplayableItemMetadata {
	enum class ES_OnlineResearchProjectType Type; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct Scavenger.S_OnlineDisassemblyProjectDefinition
// Size: 0x10 (Inherited: 0x00)
struct FS_OnlineDisassemblyProjectDefinition {
	struct FName InputOnlineItemId; // 0x00(0x08)
	struct FName OutputOnlineItemId; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_OnlineServiceManagerDataApiClientConnectionState
// Size: 0x128 (Inherited: 0x00)
struct FS_OnlineServiceManagerDataApiClientConnectionState {
	struct US_OnlineClientRequestQueue* RequestQueue; // 0x00(0x08)
	char pad_8[0x120]; // 0x08(0x120)
};

// ScriptStruct Scavenger.S_OnlineServiceEndpointConfigs
// Size: 0x10 (Inherited: 0x00)
struct FS_OnlineServiceEndpointConfigs {
	struct TArray<struct FS_OnlineServiceEndpointConfig> Endpoints; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_OnlineServiceEndpointConfig
// Size: 0x88 (Inherited: 0x00)
struct FS_OnlineServiceEndpointConfig {
	struct FString Identifier; // 0x00(0x10)
	struct FString EndpointPingAddress; // 0x10(0x10)
	struct FString ClientDataApiEndpointAddress; // 0x20(0x10)
	struct FString ServerDataApiEndpointAddress; // 0x30(0x10)
	struct FString ClientStaticContentBaseUrl; // 0x40(0x10)
	struct FString AuthEndpointUrl; // 0x50(0x10)
	int32_t MedianPingTimeMs; // 0x60(0x04)
	enum class ES_EndpointPingStatus PingStatus; // 0x64(0x01)
	char pad_65[0x23]; // 0x65(0x23)
};

// ScriptStruct Scavenger.S_ScavengersDataApiEmptyRequest
// Size: 0x01 (Inherited: 0x00)
struct FS_ScavengersDataApiEmptyRequest {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerResponseAck
// Size: 0x01 (Inherited: 0x00)
struct FS_ScavengersDataApiServerResponseAck {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_PlatformPurchaseRequest
// Size: 0x20 (Inherited: 0x00)
struct FS_PlatformPurchaseRequest {
	struct TArray<struct FString> SDAOfferIds; // 0x00(0x10)
	struct TArray<struct FString> PlatformSKUs; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_OnlineItemSortModeMetadata
// Size: 0x20 (Inherited: 0x08)
struct FS_OnlineItemSortModeMetadata : FTableRowBase {
	enum class ES_OnlineItemSortMode SortMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FDataTableRowHandle LocalizedActionHandle; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_PlayerInstanceState
// Size: 0x150 (Inherited: 0x00)
struct FS_PlayerInstanceState {
	struct FString PlayerId; // 0x00(0x10)
	struct US_PlayerClassData* ClassData; // 0x10(0x08)
	struct FString DisplayName; // 0x18(0x10)
	enum class ES_OnlinePlatformType Platform; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString PlatformId; // 0x30(0x10)
	int32_t TeamIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FS_CharacterLoadout GameplayLoadout; // 0x48(0x50)
	struct FS_CosmeticLoadout CosmeticLoadout; // 0x98(0x50)
	struct FS_CosmeticLoadout AccountCosmeticLoadout; // 0xe8(0x50)
	struct FString PartyId; // 0x138(0x10)
	bool bIsPartyLeader; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// ScriptStruct Scavenger.S_FeedbackQuestionContainer
// Size: 0x70 (Inherited: 0x00)
struct FS_FeedbackQuestionContainer {
	struct TArray<struct FS_FeedbackQuestionFivePoint> DetailedFeedbackFivePointQuestions; // 0x00(0x10)
	struct TArray<struct FS_FeedbackQuestionFreeText> DetailedFeedbackFreeTextQuestions; // 0x10(0x10)
	struct TArray<struct FS_FeedbackQuestionFivePoint> PostMatchFivePointQuestions; // 0x20(0x10)
	struct FS_FeedbackQuestionFreeText PostMatchFreeTextQuestion; // 0x30(0x10)
	struct TArray<struct FS_FeedbackQuestionMultiChoice> PostMatchMultiChoiceQuestions; // 0x40(0x10)
	struct TArray<struct FS_FeedbackQuestionFreeText> SocialHubFreeTextQuestions; // 0x50(0x10)
	struct TArray<struct FS_FeedbackQuestionMultiChoice> SocialHubMultiChoiceQuestions; // 0x60(0x10)
};

// ScriptStruct Scavenger.S_FeedbackQuestionMultiChoice
// Size: 0x20 (Inherited: 0x00)
struct FS_FeedbackQuestionMultiChoice {
	struct FString Question; // 0x00(0x10)
	struct TArray<struct FString> Choices; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_FeedbackQuestionFreeText
// Size: 0x10 (Inherited: 0x00)
struct FS_FeedbackQuestionFreeText {
	struct FString Question; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_FeedbackQuestionFivePoint
// Size: 0x30 (Inherited: 0x00)
struct FS_FeedbackQuestionFivePoint {
	struct FString Question; // 0x00(0x10)
	struct FString LowRatingLabel; // 0x10(0x10)
	struct FString HighRatingLabel; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_PingEndpoint
// Size: 0x48 (Inherited: 0x00)
struct FS_PingEndpoint {
	struct FString RegionCode; // 0x00(0x10)
	struct FString EndpointAddress; // 0x10(0x10)
	int32_t MedianPingTimeMs; // 0x20(0x04)
	enum class ES_LobbyEndpointPingStatus PingStatus; // 0x24(0x01)
	char pad_25[0x23]; // 0x25(0x23)
};

// ScriptStruct Scavenger.S_OnlinePlayerDataForceStateUpdateParams
// Size: 0x06 (Inherited: 0x00)
struct FS_OnlinePlayerDataForceStateUpdateParams {
	char pad_0[0x6]; // 0x00(0x06)
};

// ScriptStruct Scavenger.S_OnlineCosmeticSelectionHistory
// Size: 0x50 (Inherited: 0x00)
struct FS_OnlineCosmeticSelectionHistory {
	struct TMap<struct FName, struct FS_OnlineCosmeticSelectionHistoryForCharacter> CharacterIdToCosmeticSelectionHistory; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_OnlineCosmeticSelectionHistoryForCharacter
// Size: 0xf0 (Inherited: 0x00)
struct FS_OnlineCosmeticSelectionHistoryForCharacter {
	struct TMap<enum class ES_LoadoutSlotType, struct FName> LoadoutSlotTypeToCosmeticSelections; // 0x00(0x50)
	struct TMap<struct FName, struct FName> LoadoutItemIdToCosmeticItemId; // 0x50(0x50)
	struct TMap<struct FName, struct FS_OnlineCosmeticSelectionHistoryForCosmeticItem> CosmeticItemIdToSubmaterialSelections; // 0xa0(0x50)
};

// ScriptStruct Scavenger.S_OnlineCosmeticSelectionHistoryForCosmeticItem
// Size: 0x10 (Inherited: 0x00)
struct FS_OnlineCosmeticSelectionHistoryForCosmeticItem {
	struct TArray<struct FS_CosmeticLoadoutSubMaterialSelection> SubMaterialSelections; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_OnlineSeasonRewardDefinition
// Size: 0x70 (Inherited: 0x00)
struct FS_OnlineSeasonRewardDefinition {
	struct FName ID; // 0x00(0x08)
	struct FName entitlementId; // 0x08(0x08)
	struct FString BaseAssetPath; // 0x10(0x10)
	struct TMap<struct FString, struct FS_OnlineSeasonRewardLocalizationStrings> LocaleIdToLocalizationStrings; // 0x20(0x50)
};

// ScriptStruct Scavenger.S_OnlineSeasonRewardLocalizationStrings
// Size: 0x60 (Inherited: 0x00)
struct FS_OnlineSeasonRewardLocalizationStrings {
	struct FText Name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FText Subtitle; // 0x30(0x18)
	struct FText Detail; // 0x48(0x18)
};

// ScriptStruct Scavenger.S_OnlineSeasonDefinition
// Size: 0x80 (Inherited: 0x00)
struct FS_OnlineSeasonDefinition {
	struct FName ID; // 0x00(0x08)
	struct FDateTime SeasonStart; // 0x08(0x08)
	struct FDateTime SeasonEnd; // 0x10(0x08)
	int32_t PointsPerTier; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FS_OnlineSeasonTierDefinition> Tiers; // 0x20(0x10)
	struct TMap<struct FString, struct FS_OnlineSeasonLocalizationStrings> LocaleIdToLocalizationStrings; // 0x30(0x50)
};

// ScriptStruct Scavenger.S_OnlineSeasonLocalizationStrings
// Size: 0x30 (Inherited: 0x00)
struct FS_OnlineSeasonLocalizationStrings {
	struct FText Title; // 0x00(0x18)
	struct FText Subtitle; // 0x18(0x18)
};

// ScriptStruct Scavenger.S_OnlineSeasonTierDefinition
// Size: 0x14 (Inherited: 0x00)
struct FS_OnlineSeasonTierDefinition {
	int32_t Tier; // 0x00(0x04)
	struct FName RewardId; // 0x04(0x08)
	struct FName BattlePassRewardId; // 0x0c(0x08)
};

// ScriptStruct Scavenger.S_OnlineLeaderboardContents
// Size: 0x30 (Inherited: 0x00)
struct FS_OnlineLeaderboardContents {
	struct FString ID; // 0x00(0x10)
	struct FName StatName; // 0x10(0x08)
	struct FDateTime LastUpdated; // 0x18(0x08)
	struct TArray<struct FS_OnlineLeaderboardEntry> Entries; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_OnlineLeaderboardEntry
// Size: 0x28 (Inherited: 0x00)
struct FS_OnlineLeaderboardEntry {
	struct FString PlayerId; // 0x00(0x10)
	struct FString playerDisplayName; // 0x10(0x10)
	int32_t Position; // 0x20(0x04)
	int32_t Score; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_OnlineLeaderboardDefinition
// Size: 0x28 (Inherited: 0x00)
struct FS_OnlineLeaderboardDefinition {
	struct FString ID; // 0x00(0x10)
	struct FName StatName; // 0x10(0x08)
	enum class ES_OnlineLeaderboardSortOrder OrderAscDec; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t NumEntries; // 0x1c(0x04)
	int32_t TimespanHours; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_OnlineChallengeDefinition
// Size: 0x30 (Inherited: 0x00)
struct FS_OnlineChallengeDefinition {
	struct FName ID; // 0x00(0x08)
	struct FName LocalizationID; // 0x08(0x08)
	struct TArray<struct FS_OnlineChallengeCriteriaDefinition> Criteria; // 0x10(0x10)
	struct TArray<struct FS_OnlineChallengeMilestoneDefinition> Milestones; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_OnlineChallengeMilestoneDefinition
// Size: 0x18 (Inherited: 0x00)
struct FS_OnlineChallengeMilestoneDefinition {
	int32_t Target; // 0x00(0x04)
	struct FName RewardEntitlementId; // 0x04(0x08)
	struct FName BattlePassRewardEntitlementId; // 0x0c(0x08)
	int32_t SeasonPoints; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_OnlineChallengeCriteriaDefinition
// Size: 0x20 (Inherited: 0x00)
struct FS_OnlineChallengeCriteriaDefinition {
	struct FName CriteriaScope; // 0x00(0x08)
	struct FName CriteriaType; // 0x08(0x08)
	struct FName ParamId; // 0x10(0x08)
	int32_t ParamMin; // 0x18(0x04)
	int32_t ParamMax; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_OnlineRestrictionMetadata
// Size: 0x58 (Inherited: 0x58)
struct FS_OnlineRestrictionMetadata : FS_DisplayableItemMetadata {
};

// ScriptStruct Scavenger.S_OnlineRestrictionDefinition
// Size: 0x18 (Inherited: 0x00)
struct FS_OnlineRestrictionDefinition {
	struct FName ID; // 0x00(0x08)
	struct TArray<struct FS_OnlineRestrictionTerm> Terms; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_OnlineRestrictionTerm
// Size: 0x30 (Inherited: 0x00)
struct FS_OnlineRestrictionTerm {
	enum class ES_OnlineRestrictionType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ParamId; // 0x08(0x10)
	struct FString ParamTag; // 0x18(0x10)
	int32_t ParamMin; // 0x28(0x04)
	int32_t ParamMax; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_EquippedRecipe
// Size: 0x0c (Inherited: 0x00)
struct FS_EquippedRecipe {
	int32_t Index; // 0x00(0x04)
	struct FName ID; // 0x04(0x08)
};

// ScriptStruct Scavenger.S_OnlineCharacterDefinition
// Size: 0xc8 (Inherited: 0x00)
struct FS_OnlineCharacterDefinition {
	struct FName ClassId; // 0x00(0x08)
	struct TArray<struct FName> ValidUnlocks; // 0x08(0x10)
	struct TArray<struct FName> CosmeticDefaults; // 0x18(0x10)
	struct FS_CosmeticLoadout DefaultCosmeticLoadout; // 0x28(0x50)
	struct TMap<int32_t, struct FName> CharacterLevelToCatalogItemId; // 0x78(0x50)
};

// ScriptStruct Scavenger.S_OnlineStoreFrontMetadata
// Size: 0x48 (Inherited: 0x10)
struct FS_OnlineStoreFrontMetadata : FS_MetadataTableRowBase {
	struct FDataTableRowHandle LocalizedTitleHandle; // 0x10(0x10)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x20(0x28)
};

// ScriptStruct Scavenger.S_OnlineStoreOfferMetadata
// Size: 0x48 (Inherited: 0x10)
struct FS_OnlineStoreOfferMetadata : FS_MetadataTableRowBase {
	struct FDataTableRowHandle LocalizedTitleHandle; // 0x10(0x10)
	struct FDataTableRowHandle LocalizedSubtitleHandle; // 0x20(0x10)
	struct FDataTableRowHandle LocalizedDescriptionHandle; // 0x30(0x10)
	struct FName PurchaseRestrictionId; // 0x40(0x08)
};

// ScriptStruct Scavenger.S_OnlineStoreFrontDefinition
// Size: 0x88 (Inherited: 0x00)
struct FS_OnlineStoreFrontDefinition {
	struct FName ID; // 0x00(0x08)
	struct TArray<struct FName> SortedOfferIds; // 0x08(0x10)
	int32_t SortOrder; // 0x18(0x04)
	struct FName ViewRestrictionId; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<struct FString, struct FS_OnlineStoreFrontLocalizationStrings> LocaleIdToLocalizationStrings; // 0x28(0x50)
	struct FString Layout; // 0x78(0x10)
};

// ScriptStruct Scavenger.S_OnlineStoreFrontLocalizationStrings
// Size: 0x18 (Inherited: 0x00)
struct FS_OnlineStoreFrontLocalizationStrings {
	struct FText Title; // 0x00(0x18)
};

// ScriptStruct Scavenger.S_OnlineStoreOfferDefinition
// Size: 0x100 (Inherited: 0x00)
struct FS_OnlineStoreOfferDefinition {
	struct FName ID; // 0x00(0x08)
	bool IsOfferBundle; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName CatalogEntryId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FName> OfferBundleOfferList; // 0x18(0x10)
	struct TMap<struct FName, int32_t> CurrencyCost; // 0x28(0x50)
	int32_t DisplayWeight; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString BaseAssetPath; // 0x80(0x10)
	struct FString PlatformSku; // 0x90(0x10)
	struct TMap<struct FString, struct FS_OnlineStoreOfferLocalizationStrings> LocaleIdToLocalizationStrings; // 0xa0(0x50)
	struct FName PurchaseRestrictionId; // 0xf0(0x08)
	struct FName ViewRestrictionId; // 0xf8(0x08)
};

// ScriptStruct Scavenger.S_OnlineStoreOfferLocalizationStrings
// Size: 0x60 (Inherited: 0x00)
struct FS_OnlineStoreOfferLocalizationStrings {
	struct FText Name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FText Subtitle; // 0x30(0x18)
	struct FText Detail; // 0x48(0x18)
};

// ScriptStruct Scavenger.S_OnlineDropTableDefinition
// Size: 0x18 (Inherited: 0x00)
struct FS_OnlineDropTableDefinition {
	struct FName ID; // 0x00(0x08)
	struct TArray<struct FS_OnlineDropTableDropEntry> Entries; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_OnlineDropTableDropEntry
// Size: 0x10 (Inherited: 0x00)
struct FS_OnlineDropTableDropEntry {
	int32_t DropWeight; // 0x00(0x04)
	struct FName OutputOnlineItemId; // 0x04(0x08)
	int32_t Quantity; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_OnlineResourceItemMetadata
// Size: 0x68 (Inherited: 0x60)
struct FS_OnlineResourceItemMetadata : FS_DisplayableItemWithRarityMetadata {
	enum class ES_OnlineResourceType Type; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Scavenger.S_OnlineCurrencyDefinition
// Size: 0x08 (Inherited: 0x00)
struct FS_OnlineCurrencyDefinition {
	struct FName ID; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_OnlineCurrencyMetadata
// Size: 0x60 (Inherited: 0x60)
struct FS_OnlineCurrencyMetadata : FS_DisplayableItemWithRarityMetadata {
};

// ScriptStruct Scavenger.S_OnlineCatalogItemDefinition
// Size: 0x68 (Inherited: 0x00)
struct FS_OnlineCatalogItemDefinition {
	struct FName ID; // 0x00(0x08)
	struct FString BackendId; // 0x08(0x10)
	struct TArray<struct FString> Tags; // 0x18(0x10)
	struct FName ItemClass; // 0x28(0x08)
	bool IsBundle; // 0x30(0x01)
	bool IsUnique; // 0x31(0x01)
	bool IsStackable; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct FS_OnlineCatalogBundleDefinition BundleContents; // 0x38(0x30)
};

// ScriptStruct Scavenger.S_OnlineCatalogBundleDefinition
// Size: 0x30 (Inherited: 0x00)
struct FS_OnlineCatalogBundleDefinition {
	struct TArray<struct FS_OnlineCatalogBundleCurrencyDraw> CurrencyDraws; // 0x00(0x10)
	struct TArray<struct FS_OnlineCatalogBundleOnlineItemDraw> FixedDraws; // 0x10(0x10)
	struct TArray<struct FS_OnlineCatalogBundleDropTableDraw> DropTableDraws; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_OnlineCatalogBundleDropTableDraw
// Size: 0x0c (Inherited: 0x00)
struct FS_OnlineCatalogBundleDropTableDraw {
	struct FName DropTableId; // 0x00(0x08)
	float Draws; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_OnlineCatalogBundleOnlineItemDraw
// Size: 0x0c (Inherited: 0x00)
struct FS_OnlineCatalogBundleOnlineItemDraw {
	struct FName OnlineItemId; // 0x00(0x08)
	float Draws; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_OnlineCatalogBundleCurrencyDraw
// Size: 0x10 (Inherited: 0x00)
struct FS_OnlineCatalogBundleCurrencyDraw {
	struct FName CurrencyId; // 0x00(0x08)
	int32_t QuantityGranted; // 0x08(0x04)
	float Draws; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_BakedOpportunityPointPtrWrapper
// Size: 0x08 (Inherited: 0x00)
struct FS_BakedOpportunityPointPtrWrapper {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_BakedOpportunityPoint
// Size: 0xc0 (Inherited: 0x00)
struct FS_BakedOpportunityPoint {
	struct FS_OpportunityPointInfo OpportunityPoint; // 0x00(0x70)
	struct FTransform PointTransform; // 0x70(0x30)
	float LastUsedGameTimeSeconds; // 0xa0(0x04)
	struct TWeakObjectPtr<struct AS_AIController> ReservedByController; // 0xa4(0x08)
	struct TWeakObjectPtr<struct UObject> UserData; // 0xac(0x08)
	bool HasBeenUsedEver; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32_t OpportunityPointID; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Scavenger.S_OpportunityPointInfo
// Size: 0x70 (Inherited: 0x00)
struct FS_OpportunityPointInfo {
	bool NeedsMontageKey; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName MontageKey; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString TextOpportunityType; // 0x10(0x10)
	enum class ES_OpportunityPointWeatherType OpportunityPointWeather; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float CooldownTime; // 0x24(0x04)
	float TimeBeforeActive; // 0x28(0x04)
	float UseRadius; // 0x2c(0x04)
	bool OnlyActiveDuringTimeOfDay; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float TimeOfDayStartActive; // 0x34(0x04)
	float TimeOfDayStopActive; // 0x38(0x04)
	bool LoopForever; // 0x3c(0x01)
	bool UseOnce; // 0x3d(0x01)
	bool AbortOnDamage; // 0x3e(0x01)
	bool CharacterShouldRunToUse; // 0x3f(0x01)
	bool NonStateMachine; // 0x40(0x01)
	bool ForceStowWeapon; // 0x41(0x01)
	bool OverlordMustAssign; // 0x42(0x01)
	bool Enabled; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<enum class ES_CombatState> ValidCombatStates; // 0x48(0x10)
	int32_t Priority; // 0x58(0x04)
	bool StoreParentInUserData; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<SoftClassProperty> AllowedCharacterList; // 0x60(0x10)
};

// ScriptStruct Scavenger.S_OverrideConfig
// Size: 0x68 (Inherited: 0x08)
struct FS_OverrideConfig : FTableRowBase {
	struct FString TableName; // 0x08(0x10)
	struct FString TableRow; // 0x18(0x10)
	struct FString ColumnName; // 0x28(0x10)
	enum class ES_OverrideType ValueType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float asFloat; // 0x3c(0x04)
	int32_t asInt; // 0x40(0x04)
	struct FVector asVector; // 0x44(0x0c)
	struct FString AsString; // 0x50(0x10)
	bool AsBool; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Scavenger.S_PhysicalSurfaceData
// Size: 0x40 (Inherited: 0x08)
struct FS_PhysicalSurfaceData : FTableRowBase {
	enum class EPhysicalSurface PhysicalSurface; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FS_PhysicalSurfaceAttribute CharacterSprintSpeedMax; // 0x0c(0x08)
	struct FS_PhysicalSurfaceAttribute CharacterWalkSpeedMax; // 0x14(0x08)
	struct FS_PhysicalSurfaceAttribute CharacterWalkSpeedCrouchedMax; // 0x1c(0x08)
	struct FS_PhysicalSurfaceAttribute CharacterSlideSpeedMultiplier; // 0x24(0x08)
	struct FS_PhysicalSurfaceAttribute CharacterSlideAccLerpSpeed; // 0x2c(0x08)
	struct FS_PhysicalSurfaceAttribute CharacterSlideBreakLerpSpeed; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Scavenger.S_PhysicalSurfaceAttribute
// Size: 0x08 (Inherited: 0x00)
struct FS_PhysicalSurfaceAttribute {
	bool bApplyAttribute; // 0x00(0x01)
	enum class ES_PhysicalSurfaceAttribMod ModType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Value; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_AutoPingDisplayData
// Size: 0xc8 (Inherited: 0x00)
struct FS_AutoPingDisplayData {
	struct FS_PingDisplayData PingDisplayData; // 0x00(0x78)
	struct TMap<enum class ES_PingInfoType, struct FS_PingDisplayData> PingDisplayDataOverrides; // 0x78(0x50)
};

// ScriptStruct Scavenger.S_PingDisplayData
// Size: 0x78 (Inherited: 0x00)
struct FS_PingDisplayData {
	struct FVector2D Scale[0x2]; // 0x00(0x10)
	struct UMaterialInterface* Materials[0x2]; // 0x10(0x10)
	struct FText PingMessageOverride; // 0x20(0x18)
	bool AlwaysDisplayIcon; // 0x38(0x01)
	bool bShouldSendToMessageFeed; // 0x39(0x01)
	bool bShouldDisplayOnMap; // 0x3a(0x01)
	bool bShouldGutterOnMap; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FDataTableRowHandle LocalizedPingNameHandle; // 0x40(0x10)
	struct TSoftObjectPtr<struct UTexture2D> PingMenuIcon; // 0x50(0x28)
};

// ScriptStruct Scavenger.S_PingChannel
// Size: 0x38 (Inherited: 0x00)
struct FS_PingChannel {
	struct TArray<enum class ES_PingInfoType> PingTypes; // 0x00(0x10)
	struct TArray<enum class ES_AutoPingType> AutoPingTypes; // 0x10(0x10)
	float Lifetime; // 0x20(0x04)
	bool FollowActor; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t MaxPingCount; // 0x28(0x04)
	float RepeatPingDelay; // 0x2c(0x04)
	bool SameTargetClearsPing; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Scavenger.S_PingItemInfo
// Size: 0x28 (Inherited: 0x00)
struct FS_PingItemInfo {
	struct FVector PingLocation; // 0x00(0x0c)
	enum class ES_PingInfoType PingType; // 0x0c(0x01)
	enum class ES_AutoPingType AutoPingType; // 0x0d(0x01)
	bool bCanSendActor; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float OffscreenTracking; // 0x10(0x04)
	float LifetimeOverride; // 0x14(0x04)
	struct AActor* PingedActor; // 0x18(0x08)
	enum class ES_StatType StatType; // 0x20(0x01)
	enum class ES_CurrencyType CurrencyType; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Scavenger.S_KeeperAbilityTaskState
// Size: 0x18 (Inherited: 0x00)
struct FS_KeeperAbilityTaskState {
	struct FString TaskInstanceName; // 0x00(0x10)
	bool HasFinished; // 0x10(0x01)
	enum class ES_KeeperAbilityTaskCompletionFunctions OutgoingFunctionDelegate; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Scavenger.S_KeeperStateInfo
// Size: 0x20 (Inherited: 0x00)
struct FS_KeeperStateInfo {
	struct UActorComponent* attachmentComponent; // 0x00(0x08)
	struct FName attachmentSocketName; // 0x08(0x08)
	struct AS_InteractableActor* itemInteractingWith; // 0x10(0x08)
	bool usingAbility; // 0x18(0x01)
	char pad_19[0x1]; // 0x19(0x01)
	enum class ES_KeeperCloakState CloakState; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
};

// ScriptStruct Scavenger.S_CriticalHealth
// Size: 0x0c (Inherited: 0x00)
struct FS_CriticalHealth {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_CriticalHealthConfig
// Size: 0x18 (Inherited: 0x00)
struct FS_CriticalHealthConfig {
	float CriticalThreshold; // 0x00(0x04)
	float FadeInDuration; // 0x04(0x04)
	float HoldDuration; // 0x08(0x04)
	float FadeOutDuration; // 0x0c(0x04)
	struct UMaterialParameterCollection* ParameterCollection; // 0x10(0x08)
};

// ScriptStruct Scavenger.S_ScreenDamageIndicators
// Size: 0x80 (Inherited: 0x00)
struct FS_ScreenDamageIndicators {
	char pad_0[0x60]; // 0x00(0x60)
	float FadeInDuration; // 0x60(0x04)
	float HoldDuration; // 0x64(0x04)
	float FadeOutDuration; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UMaterialParameterCollection* SeepCollection; // 0x70(0x08)
	struct UMaterialParameterCollection* FadeCollection; // 0x78(0x08)
};

// ScriptStruct Scavenger.S_InteractableSound
// Size: 0x18 (Inherited: 0x00)
struct FS_InteractableSound {
	enum class ES_InteractIcon interactionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAkAudioEvent* StartInteractionSound; // 0x08(0x08)
	struct UAkAudioEvent* StopInteractionSound; // 0x10(0x08)
};

// ScriptStruct Scavenger.S_InputQueue
// Size: 0x08 (Inherited: 0x00)
struct FS_InputQueue {
	char pad_0[0x4]; // 0x00(0x04)
	float QueueMaxTime; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_InteractionState
// Size: 0x48 (Inherited: 0x00)
struct FS_InteractionState {
	struct FS_InteractableItem InteractableItem; // 0x00(0x40)
	enum class ES_Interaction interactionType; // 0x40(0x01)
	bool isTimedInteraction; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct Scavenger.S_PlayerClassMetadataTableRowReference
// Size: 0x20 (Inherited: 0x00)
struct FS_PlayerClassMetadataTableRowReference {
	struct FDataTableRowHandle Handle; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_PlayerClassMetadata
// Size: 0x2d0 (Inherited: 0x08)
struct FS_PlayerClassMetadata : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	struct FText ClassName; // 0x10(0x18)
	struct FText ClassNameCapitalized; // 0x28(0x18)
	struct FText CharacterName; // 0x40(0x18)
	struct FText CharacterNameCapitalized; // 0x58(0x18)
	struct FText Description; // 0x70(0x18)
	int32_t CharacterFlags; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FDataTableRowHandle AbilityMetadataHandle; // 0x90(0x10)
	struct FS_RecipeMetadataHandle RecipeMetadata; // 0xa0(0x20)
	struct FS_RecipeMetadataHandle ClassWeaponRecipeMetadata; // 0xc0(0x20)
	struct UTexture2D* ActiveTalentPanelBackgroundImage; // 0xe0(0x08)
	struct TSoftObjectPtr<struct US_PlayerClassData> PlayerClassData; // 0xe8(0x28)
	struct FS_CharacterMovementOverrides CharacterMovement; // 0x110(0x168)
	struct TMap<enum class ES_TraitGroupType, enum class ES_TraitGroup> Traits; // 0x278(0x50)
	struct US_PlayerClassAvatarData* PlayerClassAvatarData; // 0x2c8(0x08)
};

// ScriptStruct Scavenger.S_RecipeMetadataHandle
// Size: 0x20 (Inherited: 0x00)
struct FS_RecipeMetadataHandle {
	struct FDataTableRowHandle Handle; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_KeeperInteractionState
// Size: 0x0c (Inherited: 0x00)
struct FS_KeeperInteractionState {
	struct TWeakObjectPtr<struct AS_InteractableActor> InteractableActor; // 0x00(0x08)
	float ServerEndTime; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_ReplicatedActionResult
// Size: 0x08 (Inherited: 0x00)
struct FS_ReplicatedActionResult {
	uint32_t ReplicationKey; // 0x00(0x04)
	enum class ES_ReplicatedActionResult ReplicatedActionResult; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Scavenger.S_ActorUnderReticle
// Size: 0x18 (Inherited: 0x00)
struct FS_ActorUnderReticle {
	struct AActor* Actor; // 0x00(0x08)
	float Strength; // 0x08(0x04)
	float Distance; // 0x0c(0x04)
	float CylinderOverlap; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ServerHeartbeatResponse
// Size: 0x08 (Inherited: 0x00)
struct FS_ServerHeartbeatResponse {
	int32_t m_echoedHeartbeatValue; // 0x00(0x04)
	float m_serverRealTimeAtSend; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_CinematicCameraSettings
// Size: 0x08 (Inherited: 0x00)
struct FS_CinematicCameraSettings {
	struct ASpectatorPawn* PawnClass; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_ReviveState
// Size: 0x14 (Inherited: 0x00)
struct FS_ReviveState {
	struct TWeakObjectPtr<struct APawn> ReviverPawn; // 0x00(0x08)
	struct TWeakObjectPtr<struct AS_PlayerState> ReviverPlayerState; // 0x08(0x08)
	float ReviveTimeLeft; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_PlayerObjectiveMarkerBase
// Size: 0x48 (Inherited: 0x00)
struct FS_PlayerObjectiveMarkerBase {
	int32_t UniqueId; // 0x00(0x04)
	int32_t ParentUniqueId; // 0x04(0x04)
	struct FName LabelId; // 0x08(0x08)
	uint32_t InternalFlags; // 0x10(0x04)
	int32_t Flags; // 0x14(0x04)
	struct AActor* Actor; // 0x18(0x08)
	struct FLinearColor Color; // 0x20(0x10)
	struct FVector Location; // 0x30(0x0c)
	struct FVector Offset; // 0x3c(0x0c)
};

// ScriptStruct Scavenger.S_PlayerObjective
// Size: 0x58 (Inherited: 0x00)
struct FS_PlayerObjective {
	struct FS_PlayerObjectiveBase Base; // 0x00(0x4c)
	struct FS_PlayerObjectiveDelta Delta; // 0x4c(0x0c)
};

// ScriptStruct Scavenger.S_TeammateState
// Size: 0x30 (Inherited: 0x00)
struct FS_TeammateState {
	struct APlayerState* PlayerState; // 0x00(0x08)
	struct US_PlayerClassData* ClassData; // 0x08(0x08)
	struct TArray<struct FS_TeammateLoadoutItem> Loadout; // 0x10(0x10)
	struct FString AccountId; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_TeammateLoadoutItem
// Size: 0x0c (Inherited: 0x00)
struct FS_TeammateLoadoutItem {
	enum class ES_TeammateLoadoutItemType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ID; // 0x04(0x08)
};

// ScriptStruct Scavenger.S_PlayerSpawnPoint
// Size: 0x40 (Inherited: 0x00)
struct FS_PlayerSpawnPoint {
	char pad_0[0x10]; // 0x00(0x10)
	struct FTransform SpawnTransform; // 0x10(0x30)
};

// ScriptStruct Scavenger.S_PostMatchStatRowData
// Size: 0x40 (Inherited: 0x00)
struct FS_PostMatchStatRowData {
	struct FDataTableRowHandle TextHandle; // 0x00(0x10)
	struct FS_RewardPresentationStatScore StatScore; // 0x10(0x28)
	enum class ES_PostMatchStatType StatType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Scavenger.S_RewardPresentationStatScore
// Size: 0x28 (Inherited: 0x00)
struct FS_RewardPresentationStatScore {
	struct FString StatId; // 0x00(0x10)
	int32_t DisplayedCount; // 0x10(0x04)
	int32_t TotalReward; // 0x14(0x04)
	struct FString Context; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_PostMatchPhases
// Size: 0x10 (Inherited: 0x00)
struct FS_PostMatchPhases {
	struct TArray<SoftClassProperty> PostMatchPhases; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_EndOfGameRankRecord
// Size: 0x08 (Inherited: 0x00)
struct FS_EndOfGameRankRecord {
	int32_t TeamPlacement; // 0x00(0x04)
	int32_t ScoredDataPoints; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_TestPostMatchSummaryScreenParams
// Size: 0x98 (Inherited: 0x00)
struct FS_TestPostMatchSummaryScreenParams {
	int32_t NumTeams; // 0x00(0x04)
	int32_t NumPlayersPerTeam; // 0x04(0x04)
	int32_t GameShards; // 0x08(0x04)
	int32_t ForceStartingLevel; // 0x0c(0x04)
	struct FName PlayerCharacterClass; // 0x10(0x08)
	float DamageDoneMin; // 0x18(0x04)
	float DamageDoneMax; // 0x1c(0x04)
	float TimeSurvivedMin; // 0x20(0x04)
	float TimeSurvivedMax; // 0x24(0x04)
	float LifestreakPercentageMin; // 0x28(0x04)
	float LifestreakPercentageMax; // 0x2c(0x04)
	bool PlayerExtracted; // 0x30(0x01)
	bool PlayerLeftEarly; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float TeamShardsHarvestedFractionMin; // 0x34(0x04)
	float TeamShardsHarvestedFractionMax; // 0x38(0x04)
	float TeamShardsExtractedFractionMin; // 0x3c(0x04)
	float TeamShardsExtractedFractionMax; // 0x40(0x04)
	int32_t TeamScrapCollectedMin; // 0x44(0x04)
	int32_t TeamScrapCollectedMax; // 0x48(0x04)
	int32_t TeamObjectivesCompletedMin; // 0x4c(0x04)
	int32_t TeamObjectivesCompletedMax; // 0x50(0x04)
	bool TeamVictory; // 0x54(0x01)
	bool ShardTargetReached; // 0x55(0x01)
	bool GlobalBoostMultiplierActive; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FName GlobalBoostId; // 0x58(0x08)
	bool PersonalBoostMultiplierActive; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t NumTeammateBoostMultipliers; // 0x64(0x04)
	struct TArray<struct FString> TeammateNames; // 0x68(0x10)
	struct TArray<struct FName> ExtractedSalvageItemRewards; // 0x78(0x10)
	struct TArray<struct FS_OnlineUnseenRewardGrants> UnseenRewardGrantsOverride; // 0x88(0x10)
};

// ScriptStruct Scavenger.S_RewardPresentation
// Size: 0x78 (Inherited: 0x00)
struct FS_RewardPresentation {
	struct TArray<struct FS_RewardPresentationStatScore> StatScores; // 0x00(0x10)
	struct TArray<struct FS_RewardPresentationChallengeProgress> ChallengeCompletion; // 0x10(0x10)
	struct TArray<struct FS_RewardPresentationProgressBarFill> ProgressBarFills; // 0x20(0x10)
	int32_t TeamPlacement; // 0x30(0x04)
	int32_t TeamCount; // 0x34(0x04)
	int32_t BaseScore; // 0x38(0x04)
	int32_t TotalScore; // 0x3c(0x04)
	float BoostMultiplierGlobal; // 0x40(0x04)
	float BoostMultiplierPersonal; // 0x44(0x04)
	struct TArray<struct FS_BoostMultiplierContext> BoostMultiplierTeam; // 0x48(0x10)
	struct TArray<struct FName> ExtractedSalvage; // 0x58(0x10)
	struct TArray<struct FS_OnlineRewardGrant> SessionRewards; // 0x68(0x10)
};

// ScriptStruct Scavenger.S_RewardPresentationProgressBarFill
// Size: 0x40 (Inherited: 0x00)
struct FS_RewardPresentationProgressBarFill {
	int32_t StartingLevel; // 0x00(0x04)
	int32_t LevelStartingCXP; // 0x04(0x04)
	int32_t NextLevelStartingCXP; // 0x08(0x04)
	int32_t PlayerStartingCXP; // 0x0c(0x04)
	int32_t PlayerFinalCXP; // 0x10(0x04)
	bool LeveledUp; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t NewAccountLevel; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FS_OnlineRewardGrant> CharacterLevelUpRewards; // 0x20(0x10)
	struct TArray<struct FS_OnlineRewardGrant> AccountLevelUpRewards; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_RewardPresentationChallengeProgress
// Size: 0x28 (Inherited: 0x00)
struct FS_RewardPresentationChallengeProgress {
	struct FText ChallengeName; // 0x00(0x18)
	int32_t CXPReward; // 0x18(0x04)
	int32_t StartingCompletion; // 0x1c(0x04)
	int32_t TargetCompletion; // 0x20(0x04)
	int32_t CompletedThisGame; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_PlayingEventInfo
// Size: 0x78 (Inherited: 0x00)
struct FS_PlayingEventInfo {
	struct FS_QueuedEventSettings Settings; // 0x00(0x58)
	char pad_58[0x10]; // 0x58(0x10)
	struct UMovieSceneSequencePlayer* SequencePlayer; // 0x68(0x08)
	struct ALevelSequenceActor* SequenceActor; // 0x70(0x08)
};

// ScriptStruct Scavenger.S_QueuedEventSettings
// Size: 0x58 (Inherited: 0x00)
struct FS_QueuedEventSettings {
	struct FString EventName; // 0x00(0x10)
	struct ULevelSequence* Sequence; // 0x10(0x08)
	int32_t Priority; // 0x18(0x04)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Tag; // 0x28(0x10)
	struct FDateTime ExpireTime; // 0x38(0x08)
	int32_t MaxPlayCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FDateTime DesiredStartTime; // 0x48(0x08)
	float SnoozeTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Scavenger.S_PriorityAudioTrim
// Size: 0x30 (Inherited: 0x00)
struct FS_PriorityAudioTrim {
	int32_t TeamIndex; // 0x00(0x04)
	bool TeamOnly; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString Tag; // 0x08(0x10)
	bool ByTag; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct AActor* Instigator; // 0x20(0x08)
	bool ByInstigator; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Scavenger.S_PriorityAudioSettings
// Size: 0x40 (Inherited: 0x00)
struct FS_PriorityAudioSettings {
	enum class ES_InterruptionUrgency Urgency; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Priority; // 0x04(0x04)
	struct FString Tag; // 0x08(0x10)
	float MaxQueueTimeSeconds; // 0x18(0x04)
	bool UseMaxQueueTime; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t MaxQueueLength; // 0x20(0x04)
	bool UseMaxQueueLength; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float MaxDistance; // 0x28(0x04)
	bool UseMaxDistance; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float StartDelaySeconds; // 0x30(0x04)
	float PlayProbability; // 0x34(0x04)
	float SnoozeTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Scavenger.S_ProceduralLandmarkProp
// Size: 0x30 (Inherited: 0x00)
struct FS_ProceduralLandmarkProp {
	struct AActor* ActorClass; // 0x00(0x08)
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
	struct FVector WorldOffset; // 0x10(0x0c)
	struct FVector RandomRotationLimits; // 0x1c(0x0c)
	bool AdhereToSurfaceNormal; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Scavenger.ProgressionTableRow
// Size: 0x10 (Inherited: 0x08)
struct FProgressionTableRow : FTableRowBase {
	int32_t XPToNextLevel; // 0x08(0x04)
	int32_t ScrapInventoryCapacity; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_ActorContainer
// Size: 0x10 (Inherited: 0x00)
struct FS_ActorContainer {
	struct TArray<struct AS_ProjectileBase*> Actors; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_QueuedAction
// Size: 0xd0 (Inherited: 0x00)
struct FS_QueuedAction {
	char pad_0[0x8]; // 0x00(0x08)
	struct FS_ActionPayload m_actionPayload; // 0x08(0x20)
	char pad_28[0xa8]; // 0x28(0xa8)
};

// ScriptStruct Scavenger.S_LoadedRecipes
// Size: 0x50 (Inherited: 0x00)
struct FS_LoadedRecipes {
	struct TMap<enum class ES_LoadoutSlotType, struct FS_LoadedRecipesForSlot> LoadedRecipesForSlots; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_LoadedRecipesForSlot
// Size: 0x10 (Inherited: 0x00)
struct FS_LoadedRecipesForSlot {
	struct TArray<struct US_RecipeData*> Data; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_GameScoreCardForPlayer
// Size: 0x60 (Inherited: 0x00)
struct FS_GameScoreCardForPlayer {
	struct FS_PlayerScoreCard PlayerScoreCard; // 0x00(0x10)
	int32_t TeamShardsHarvested; // 0x10(0x04)
	int32_t TeamScrapCollected; // 0x14(0x04)
	int32_t TeamExplorersExtracted; // 0x18(0x04)
	int32_t TeamObjectivesCompleted; // 0x1c(0x04)
	int32_t TeamShardsExtracted; // 0x20(0x04)
	int32_t TeamShardsBanked; // 0x24(0x04)
	int32_t TeamPlacement; // 0x28(0x04)
	int32_t TeamVictory; // 0x2c(0x04)
	int32_t CollectiveObjectiveComplete; // 0x30(0x04)
	int32_t Total; // 0x34(0x04)
	int32_t BoostedTotal; // 0x38(0x04)
	float BoostMultiplierGlobal; // 0x3c(0x04)
	struct FName GlobalBoostId; // 0x40(0x08)
	float BoostMultiplierPersonal; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FS_BoostMultiplierContext> BoostMultiplierTeam; // 0x50(0x10)
};

// ScriptStruct Scavenger.S_PlayerScoreCard
// Size: 0x10 (Inherited: 0x00)
struct FS_PlayerScoreCard {
	int32_t PersonalTimeSurvived; // 0x00(0x04)
	int32_t PersonalLifestreak; // 0x04(0x04)
	int32_t PersonalDamageDone; // 0x08(0x04)
	bool LeftEarly; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Scavenger.S_GameScoringCondition
// Size: 0x08 (Inherited: 0x00)
struct FS_GameScoringCondition {
	int32_t FailedCondition; // 0x00(0x04)
	int32_t MetCondition; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_GameScoringMap
// Size: 0x58 (Inherited: 0x00)
struct FS_GameScoringMap {
	struct TMap<int32_t, int32_t> ScoringMap; // 0x00(0x50)
	int32_t DefaultScore; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Scavenger.S_GameScoringMultiplier
// Size: 0x0c (Inherited: 0x00)
struct FS_GameScoringMultiplier {
	int32_t Base; // 0x00(0x04)
	float Multiplier; // 0x04(0x04)
	int32_t Cap; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_PlatformToKeyMetadata
// Size: 0x58 (Inherited: 0x08)
struct FS_PlatformToKeyMetadata : FTableRowBase {
	struct TMap<enum class ES_Platform, struct FSlateBrush> imageSetByPlatform; // 0x08(0x50)
};

// ScriptStruct Scavenger.S_ScavengersDataApiPlatformLoginData
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiPlatformLoginData {
	struct FS_ScavengersDataApiPlatformXboxData Xbox; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiPlatformXboxData
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiPlatformXboxData {
	struct FString UserToken; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerResponseLeaderboardDefinitions
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiServerResponseLeaderboardDefinitions {
	struct TArray<struct FS_ScavengersDataApiLeaderboardDefinition> Leaderboards; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiLeaderboardDefinition
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiLeaderboardDefinition {
	struct FString ID; // 0x00(0x10)
	struct FString StatName; // 0x10(0x10)
	struct FString OrderAscDec; // 0x20(0x10)
	int32_t NumEntries; // 0x30(0x04)
	int32_t TimespanHours; // 0x34(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerResponseEvaluation
// Size: 0x01 (Inherited: 0x00)
struct FS_ScavengersDataApiServerResponseEvaluation {
	bool Pass; // 0x00(0x01)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientAnalyticsEventResponse
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientAnalyticsEventResponse {
	struct FString EventId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerResponseDeletionRequest
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiServerResponseDeletionRequest {
	struct FString DeletionRequestId; // 0x00(0x10)
	struct FString PlayerId; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerResponseAuth
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiServerResponseAuth {
	struct FString PlayerId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerResponsePlayer
// Size: 0x128 (Inherited: 0x00)
struct FS_ScavengersDataApiServerResponsePlayer {
	struct FS_ScavengersDataApiPlayerState PlayerState; // 0x00(0xf0)
	struct FS_ScavengersDataApiBanInfo Ban; // 0xf0(0x28)
	struct FString PlayerSettings; // 0x118(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiBanInfo
// Size: 0x28 (Inherited: 0x00)
struct FS_ScavengersDataApiBanInfo {
	struct FString Reason; // 0x00(0x10)
	int32_t Created; // 0x10(0x04)
	int32_t Expires; // 0x14(0x04)
	struct FString RequestorId; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiPlayerState
// Size: 0xf0 (Inherited: 0x00)
struct FS_ScavengersDataApiPlayerState {
	struct FString PlayerId; // 0x00(0x10)
	int32_t AccountCreatedTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DisplayName; // 0x18(0x10)
	int32_t Level; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString LastPlayedMatchId; // 0x30(0x10)
	struct FS_ScavengersDataApiDailyOfferTemp DailyOfferTemp; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FS_ScavengersDataApiKvpInt> PlayerFlags; // 0x48(0x10)
	struct TArray<struct FS_ScavengersDataApiCosmeticSlot> PlayerCosmeticLoadout; // 0x58(0x10)
	struct TArray<struct FS_ScavengersDataApiInventoryItem> Inventory; // 0x68(0x10)
	struct TArray<struct FS_ScavengersDataApiPlayerCurrencyStatus> CurrencyStatus; // 0x78(0x10)
	struct TArray<struct FS_ScavengersDataApiCharacterState> Characters; // 0x88(0x10)
	struct TArray<struct FS_ScavengersDataApiResearchProjectInstance> ResearchProjects; // 0x98(0x10)
	struct TArray<struct FS_ScavengersDataApiPlayerRewardInstance> UnseenRewards; // 0xa8(0x10)
	struct FS_ScavengersDataApiXpBoosterStatus XpBooster; // 0xb8(0x18)
	struct TArray<struct FS_ScavengersDataApiChallengeInstance> Challenges; // 0xd0(0x10)
	struct TArray<struct FS_ScavengersDataApiSeasonState> seasons; // 0xe0(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiSeasonState
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiSeasonState {
	struct FString ID; // 0x00(0x10)
	int32_t Progress; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> TiersPendingClaim; // 0x18(0x10)
	struct TArray<int32_t> BattlePassTiersPendingClaim; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiChallengeInstance
// Size: 0x48 (Inherited: 0x00)
struct FS_ScavengersDataApiChallengeInstance {
	struct FString ID; // 0x00(0x10)
	struct FString SlotType; // 0x10(0x10)
	struct FString ChallengeDefId; // 0x20(0x10)
	int32_t ExpiresOn; // 0x30(0x04)
	int32_t Progress; // 0x34(0x04)
	struct TArray<int32_t> PendingClaim; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiXpBoosterStatus
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiXpBoosterStatus {
	struct FString ID; // 0x00(0x10)
	int32_t ExpiresOn; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiPlayerRewardInstance
// Size: 0x58 (Inherited: 0x00)
struct FS_ScavengersDataApiPlayerRewardInstance {
	struct FString ID; // 0x00(0x10)
	struct FString Source; // 0x10(0x10)
	struct FString ContextStr; // 0x20(0x10)
	int32_t ContextInt; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString MatchID; // 0x38(0x10)
	struct TArray<struct FS_ScavengersDataApiPlayerRewardGrant> Grants; // 0x48(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiPlayerRewardGrant
// Size: 0x28 (Inherited: 0x00)
struct FS_ScavengersDataApiPlayerRewardGrant {
	struct FString GrantType; // 0x00(0x10)
	struct FString GrantId; // 0x10(0x10)
	int32_t GrantAmount; // 0x20(0x04)
	int32_t GrantStartingValue; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiResearchProjectInstance
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiResearchProjectInstance {
	struct FString ResearchStationId; // 0x00(0x10)
	struct FString ProjectDefinitionId; // 0x10(0x10)
	int32_t StartTimeStampMs; // 0x20(0x04)
	int32_t CompletionTimeStampMs; // 0x24(0x04)
	struct TArray<struct FS_ScavengersDataApiKvpInt> ResourcesSpent; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiKvpInt
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiKvpInt {
	struct FString Key; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiCharacterState
// Size: 0x60 (Inherited: 0x00)
struct FS_ScavengersDataApiCharacterState {
	struct FString ClassId; // 0x00(0x10)
	struct FString CharacterId; // 0x10(0x10)
	bool IsOwned; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t CharacterXP; // 0x24(0x04)
	int32_t CharacterLevel; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FS_ScavengersDataApiInventoryItem> Inventory; // 0x30(0x10)
	struct TArray<struct FS_ScavengersDataApiLoadoutSlot> Loadout; // 0x40(0x10)
	struct TArray<struct FS_ScavengersDataApiCosmeticSlot> CosmeticLoadout; // 0x50(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiCosmeticSlot
// Size: 0x40 (Inherited: 0x00)
struct FS_ScavengersDataApiCosmeticSlot {
	struct FString ItemSlot; // 0x00(0x10)
	struct FString CatalogEntryId; // 0x10(0x10)
	struct FString ItemInstanceId; // 0x20(0x10)
	struct TArray<struct FS_ScavengersDataApiCosmeticSubMaterialSelection> SubMaterialSelections; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiCosmeticSubMaterialSelection
// Size: 0x28 (Inherited: 0x00)
struct FS_ScavengersDataApiCosmeticSubMaterialSelection {
	struct FString SubMaterialMetaId; // 0x00(0x10)
	struct FString PaletteMetadataId; // 0x10(0x10)
	int32_t ColorIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiLoadoutSlot
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiLoadoutSlot {
	struct FString SlotId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiLoadoutSlotEntry> Entries; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiLoadoutSlotEntry
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiLoadoutSlotEntry {
	struct FString CatalogEntryId; // 0x00(0x10)
	struct FString InstanceID; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiInventoryItem
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiInventoryItem {
	struct FString CatalogEntryId; // 0x00(0x10)
	struct FString InstanceID; // 0x10(0x10)
	int32_t Count; // 0x20(0x04)
	int32_t ExpirationDate; // 0x24(0x04)
	struct TArray<struct FS_ScavengersDataApiKvpString> ItemStrings; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiKvpString
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiKvpString {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiPlayerCurrencyStatus
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiPlayerCurrencyStatus {
	struct FString CurrencyId; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FS_ScavengersDataApiPlatformBalance> PlatformBalance; // 0x18(0x10)
	int32_t RechargeMax; // 0x28(0x04)
	int32_t RechargeRatePerDay; // 0x2c(0x04)
	int32_t LastGrantTime; // 0x30(0x04)
	int32_t LifetimeSpend; // 0x34(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiPlatformBalance
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiPlatformBalance {
	int32_t Quantity; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Platform; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiDailyOfferTemp
// Size: 0x04 (Inherited: 0x00)
struct FS_ScavengersDataApiDailyOfferTemp {
	int32_t NextAvailableTime; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerResponseLookupPlayer
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiServerResponseLookupPlayer {
	struct FString PlayerId; // 0x00(0x10)
	int32_t AccountCreatedTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DisplayName; // 0x18(0x10)
	int32_t Level; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerResponseCharacters
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiServerResponseCharacters {
	struct TArray<struct FS_ScavengersDataApiCosmeticSlot> PlayerCosmeticLoadout; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiCharacterState> Characters; // 0x10(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpInt> PlayerFlags; // 0x20(0x10)
	bool XpBoosterActive; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseLeaderboard
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseLeaderboard {
	struct FString leaderboardId; // 0x00(0x10)
	struct FString StatName; // 0x10(0x10)
	int32_t TimeLastRefreshed; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FS_ScavengersDataApiLeaderboardEntry> Entries; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiLeaderboardEntry
// Size: 0x28 (Inherited: 0x00)
struct FS_ScavengersDataApiLeaderboardEntry {
	struct FString PlayerId; // 0x00(0x10)
	struct FString playerDisplayName; // 0x10(0x10)
	int32_t Position; // 0x20(0x04)
	int32_t Score; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseSetDisplayName
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseSetDisplayName {
	struct FString DisplayName; // 0x00(0x10)
	struct FString PlayerStateHash; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerResponseImportData
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiServerResponseImportData {
	struct FString Error; // 0x00(0x10)
	struct FString SheetTitle; // 0x10(0x10)
	struct TArray<struct FString> Log; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseRefreshPlatformLogin
// Size: 0x04 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseRefreshPlatformLogin {
	int32_t Expiry; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseGetPrivateConfigFile
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseGetPrivateConfigFile {
	struct TArray<struct FS_ScavengersDataApiConfigEntry> ConfigEntries; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiConfigEntry
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiConfigEntry {
	struct FString ConfigEntryName; // 0x00(0x10)
	struct TArray<struct FString> Config; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseClaimChallenge
// Size: 0x50 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseClaimChallenge {
	struct TArray<struct FS_ScavengersDataApiChallengeInstance> Challenges; // 0x00(0x10)
	struct FS_ScavengersDataApiStateUpdate StateUpdate; // 0x10(0x40)
};

// ScriptStruct Scavenger.S_ScavengersDataApiStateUpdate
// Size: 0x40 (Inherited: 0x00)
struct FS_ScavengersDataApiStateUpdate {
	struct TArray<struct FS_ScavengersDataApiInventoryItemTransaction> Items; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiCurrencyTransaction> Currencies; // 0x10(0x10)
	struct TArray<struct FS_ScavengersDataApiChallengeInstance> ChallengesUpdate; // 0x20(0x10)
	struct FString PlayerStateHash; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiCurrencyTransaction
// Size: 0x28 (Inherited: 0x00)
struct FS_ScavengersDataApiCurrencyTransaction {
	struct FString CurrencyId; // 0x00(0x10)
	int32_t BalanceDelta; // 0x10(0x04)
	int32_t NewBalance; // 0x14(0x04)
	int32_t Rate; // 0x18(0x04)
	int32_t Max; // 0x1c(0x04)
	int32_t LastGrantTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiInventoryItemTransaction
// Size: 0x28 (Inherited: 0x00)
struct FS_ScavengersDataApiInventoryItemTransaction {
	struct FString CatalogEntryId; // 0x00(0x10)
	struct FString InstanceID; // 0x10(0x10)
	int32_t BalanceDelta; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseActivateXpBooster
// Size: 0x58 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseActivateXpBooster {
	struct FS_ScavengersDataApiXpBoosterStatus XpBoosterState; // 0x00(0x18)
	struct FS_ScavengersDataApiStateUpdate StateUpdate; // 0x18(0x40)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseResearchProjectHurry
// Size: 0x78 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseResearchProjectHurry {
	struct FS_ScavengersDataApiResearchProjectInstance ProjectInstance; // 0x00(0x38)
	struct FS_ScavengersDataApiStateUpdate StateUpdate; // 0x38(0x40)
};

// ScriptStruct Scavenger.S_ScavengersDataApiItemUnlock
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiItemUnlock {
	int32_t Level; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> ItemList; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientTitlePlayerEvent
// Size: 0x90 (Inherited: 0x00)
struct FS_ScavengersDataApiClientTitlePlayerEvent {
	struct FString PlayerId; // 0x00(0x10)
	struct FString PlayerInternalId; // 0x10(0x10)
	struct FString Platform; // 0x20(0x10)
	struct FString PlatformId; // 0x30(0x10)
	struct FString LastPlayedMatchId; // 0x40(0x10)
	int32_t AccountLevel; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString Body; // 0x58(0x10)
	struct FString EventName; // 0x68(0x10)
	struct FString Timestamp; // 0x78(0x10)
	bool IsSda; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientTitleEvent
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiClientTitleEvent {
	struct FString Body; // 0x00(0x10)
	struct FString EventName; // 0x10(0x10)
	struct FString Timestamp; // 0x20(0x10)
	bool IsSda; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientPlayerEvent
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiClientPlayerEvent {
	struct FString Body; // 0x00(0x10)
	struct FString EventName; // 0x10(0x10)
	struct FString Timestamp; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerUpgradeAccount
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiServerUpgradeAccount {
	struct FString PlayerId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerDeleteStats
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiServerDeleteStats {
	struct FString StatName; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerInvalidateLeaderboard
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiServerInvalidateLeaderboard {
	struct FString leaderboardId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerUnbanPlayer
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiServerUnbanPlayer {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Reason; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerBanPlayer
// Size: 0x40 (Inherited: 0x00)
struct FS_ScavengersDataApiServerBanPlayer {
	struct FString PlayerId; // 0x00(0x10)
	struct FString RequestorId; // 0x10(0x10)
	int32_t DurationInHours; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Reason; // 0x28(0x10)
	struct FS_ScavengersDataApiBanOptions BanOptions; // 0x38(0x02)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Scavenger.S_ScavengersDataApiBanOptions
// Size: 0x02 (Inherited: 0x00)
struct FS_ScavengersDataApiBanOptions {
	bool IpAddress; // 0x00(0x01)
	bool DeviceID; // 0x01(0x01)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerUpdateDisplayName
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiServerUpdateDisplayName {
	struct FString PlayerId; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerSetPlayerTags
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiServerSetPlayerTags {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Tags; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerDeletePlayerForever
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiServerDeletePlayerForever {
	struct FString PlayerId; // 0x00(0x10)
	struct FString DeletionRequestId; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerRequestPlayerDeletion
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiServerRequestPlayerDeletion {
	struct FString PlayerId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerGetPlayer
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiServerGetPlayer {
	struct FString PlayerId; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerImportData
// Size: 0x28 (Inherited: 0x00)
struct FS_ScavengersDataApiServerImportData {
	struct FString SheetId; // 0x00(0x10)
	struct FString DataJson; // 0x10(0x10)
	struct FS_ScavengersDataApiImportDataOptions Params; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiImportDataOptions
// Size: 0x04 (Inherited: 0x00)
struct FS_ScavengersDataApiImportDataOptions {
	bool ValidateOnly; // 0x00(0x01)
	bool MacrogameData; // 0x01(0x01)
	bool ConfigData; // 0x02(0x01)
	bool LocalizationData; // 0x03(0x01)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerEvaluateRestriction
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiServerEvaluateRestriction {
	struct FString PlayerId; // 0x00(0x10)
	struct FString RestrictionId; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerMigrateImprobableAccount
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiServerMigrateImprobableAccount {
	struct FString CurrentImprobableId; // 0x00(0x10)
	struct FString NewImprobableId; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerGetCharacterStateForPlayer
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiServerGetCharacterStateForPlayer {
	struct FString PlayerId; // 0x00(0x10)
	struct FString characterClassId; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerGetCharactersForPlayer
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiServerGetCharactersForPlayer {
	struct FString PlayerId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerValidateLoadout
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiServerValidateLoadout {
	struct FString Todo; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerReportMatchEndResult
// Size: 0x58 (Inherited: 0x00)
struct FS_ScavengersDataApiServerReportMatchEndResult {
	struct FString MatchID; // 0x00(0x10)
	struct FString PlayerId; // 0x10(0x10)
	struct FString CharacterId; // 0x20(0x10)
	int32_t Xp; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FS_ScavengersDataApiKvpInt> ItemsToGrant; // 0x38(0x10)
	struct TArray<struct FS_ScavengersDataApiPlayerStat> Stats; // 0x48(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiPlayerStat
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiPlayerStat {
	struct FString Name; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerGrantCurrency
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiServerGrantCurrency {
	struct FString PlayerId; // 0x00(0x10)
	struct FString CurrencyId; // 0x10(0x10)
	int32_t Amount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Reason; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerGrantItems
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiServerGrantItems {
	struct FString PlayerId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpInt> ItemsToGrant; // 0x10(0x10)
	struct FString Reason; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerValidateAuth
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiServerValidateAuth {
	struct FString Token; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerResponseConfigurationData
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiServerResponseConfigurationData {
	struct TArray<struct FS_ScavengersDataApiKvpInt> FeatureFlags; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> TitleStrings; // 0x10(0x10)
	struct TArray<struct FString> CharacterRoster; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiServerGetConfigurationData
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiServerGetConfigurationData {
	struct FString Build; // 0x00(0x10)
	struct FString Version; // 0x10(0x10)
	struct FString VersionApi; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiErrorResponse
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiErrorResponse {
	struct FString ID; // 0x00(0x10)
	int32_t Code; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ActionHint; // 0x18(0x10)
	struct FString Description; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseAck
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseAck {
	struct FString PlayerStateHash; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponse
// Size: 0x338 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponse {
	struct FS_ScavengersDataApiLoginResult LoginResult; // 0x00(0x30)
	struct FS_ScavengersDataApiStateHashes StateHashes; // 0x30(0x60)
	struct FS_ScavengersDataApiConfigData ConfigData; // 0x90(0x20)
	struct FS_ScavengersDataApiTitleData TitleData; // 0xb0(0xf0)
	struct FS_ScavengersDataApiCatalogDefinition CatalogData; // 0x1a0(0x30)
	struct FS_ScavengersDataApiStoreData StoreData; // 0x1d0(0x30)
	struct FS_ScavengersDataApiPlayerState PlayerState; // 0x200(0xf0)
	struct TArray<struct FS_ScavengersDataApiProgressRewardInstance> ProgressRewards; // 0x2f0(0x10)
	struct TArray<struct FS_ScavengersDataApiLeaderboardDefinition> LeaderboardDefinitions; // 0x300(0x10)
	struct TArray<struct FS_ScavengersDataApiReportReasonDefinition> ReportReasonDefinitions; // 0x310(0x10)
	int32_t CurrentTimeMs; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FString PlayerPlatform; // 0x328(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiReportReasonDefinition
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiReportReasonDefinition {
	struct FString Reason; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiProgressRewardInstance
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiProgressRewardInstance {
	struct FString InstanceID; // 0x00(0x10)
	struct FString Source; // 0x10(0x10)
	struct FString RewardType; // 0x20(0x10)
	int32_t Amount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiStoreData
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiStoreData {
	struct TArray<struct FS_ScavengersDataApiStoreOffer> Offers; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiStoreOfferBundle> OfferBundles; // 0x10(0x10)
	struct TArray<struct FS_ScavengersDataApiStoreFront> StoreFronts; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiStoreFront
// Size: 0x58 (Inherited: 0x00)
struct FS_ScavengersDataApiStoreFront {
	struct FString storefrontId; // 0x00(0x10)
	int32_t SortOrder; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FString> OfferTags; // 0x18(0x10)
	struct FString Layout; // 0x28(0x10)
	struct FString ViewRestriction; // 0x38(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedTitle; // 0x48(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiStoreOfferBundle
// Size: 0xb8 (Inherited: 0x00)
struct FS_ScavengersDataApiStoreOfferBundle {
	struct FString OfferBundleId; // 0x00(0x10)
	struct TArray<struct FString> OfferList; // 0x10(0x10)
	int32_t Weight; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FS_ScavengersDataApiKvpInt> Price; // 0x28(0x10)
	struct TArray<struct FString> Tags; // 0x38(0x10)
	struct FString VisibilityRestriction; // 0x48(0x10)
	struct FString PurchaseRestriction; // 0x58(0x10)
	struct FString BaseAssetPath; // 0x68(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedDescriptions; // 0x78(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedNames; // 0x88(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedSubtitles; // 0x98(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedDetail; // 0xa8(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiStoreOffer
// Size: 0xc8 (Inherited: 0x00)
struct FS_ScavengersDataApiStoreOffer {
	struct FString OfferId; // 0x00(0x10)
	struct FString CatalogEntryId; // 0x10(0x10)
	int32_t Weight; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FS_ScavengersDataApiKvpInt> Price; // 0x28(0x10)
	struct TArray<struct FString> Tags; // 0x38(0x10)
	struct FString VisibilityRestriction; // 0x48(0x10)
	struct FString PurchaseRestriction; // 0x58(0x10)
	struct FString BaseAssetPath; // 0x68(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedDescriptions; // 0x78(0x10)
	struct FString PlatformSku; // 0x88(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedNames; // 0x98(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedSubtitles; // 0xa8(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedDetail; // 0xb8(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiCatalogDefinition
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiCatalogDefinition {
	struct TArray<struct FS_ScavengersDataApiCatalogEntry> Entries; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiDropTable> DropTables; // 0x10(0x10)
	struct TArray<struct FS_ScavengersDataApiCurrency> Currencies; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiCurrency
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiCurrency {
	struct FString CurrencyCode; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	int32_t BaseRatePerDay; // 0x20(0x04)
	int32_t BaseRechargeMax; // 0x24(0x04)
	int32_t InitialLoad; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiDropTable
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiDropTable {
	struct FString DropTableId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiDropTableEntry> Drops; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiDropTableEntry
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiDropTableEntry {
	int32_t DropWeight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString CatalogEntryId; // 0x08(0x10)
	int32_t Quantity; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiCatalogEntry
// Size: 0x110 (Inherited: 0x00)
struct FS_ScavengersDataApiCatalogEntry {
	struct FString CatalogEntryId; // 0x00(0x10)
	struct FString CatalogVersion; // 0x10(0x10)
	struct FString LocalizedDisplayName; // 0x20(0x10)
	struct FString LocalizedDescription; // 0x30(0x10)
	struct TArray<struct FString> Tags; // 0x40(0x10)
	struct FString Image; // 0x50(0x10)
	struct FString ItemClass; // 0x60(0x10)
	struct FString DisplayName; // 0x70(0x10)
	struct FString Description; // 0x80(0x10)
	struct FS_ScavengersDataApiConsumableInfo ConsumableInfo; // 0x90(0x18)
	struct TArray<struct FS_ScavengersDataApiKvpInt> Prices; // 0xa8(0x10)
	bool Stackable; // 0xb8(0x01)
	bool Bundle; // 0xb9(0x01)
	bool Unique; // 0xba(0x01)
	char pad_BB[0x5]; // 0xbb(0x05)
	struct FS_ScavengersDataApiCatalogContents Contents; // 0xc0(0x30)
	struct TArray<struct FString> RestrictionDefinitions; // 0xf0(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> AdditionalProperties; // 0x100(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiCatalogContents
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiCatalogContents {
	struct TArray<struct FS_ScavengersDataApiCurrencyDraw> CurrencyDraws; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiFixedDraw> FixedDraws; // 0x10(0x10)
	struct TArray<struct FS_ScavengersDataApiDropTableDraw> DropTableDraws; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiDropTableDraw
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiDropTableDraw {
	struct FString DropTableId; // 0x00(0x10)
	int32_t Draws; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiFixedDraw
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiFixedDraw {
	struct FString CatalogEntryId; // 0x00(0x10)
	int32_t Draws; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiCurrencyDraw
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiCurrencyDraw {
	struct FString CurrencyCode; // 0x00(0x10)
	int32_t QuantityGranted; // 0x10(0x04)
	int32_t Draws; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiConsumableInfo
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiConsumableInfo {
	int32_t UsageCount; // 0x00(0x04)
	int32_t UsagePeriod; // 0x04(0x04)
	struct FString UsagePeriodGroup; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiTitleData
// Size: 0xf0 (Inherited: 0x00)
struct FS_ScavengersDataApiTitleData {
	struct TArray<struct FS_ScavengersDataApiKvpString> TitleStrings; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiLevelDefinition> AccountLevels; // 0x10(0x10)
	struct TArray<struct FS_ScavengersDataApiCharacterDefinition> CharacterDefinitions; // 0x20(0x10)
	struct TArray<struct FS_ScavengersDataApiResearchProjectDefinition> ResearchProjectDefinitions; // 0x30(0x10)
	struct TArray<struct FS_ScavengersDataApiResearchProjectHurryCost> ResearchProjectHurryCosts; // 0x40(0x10)
	struct TArray<struct FS_ScavengersDataApiRestrictionDefinition> RestrictionDefinitions; // 0x50(0x10)
	struct TArray<struct FS_ScavengersDataApiCurrency> Currencies; // 0x60(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> DisassemblyDefinitions; // 0x70(0x10)
	struct TArray<struct FS_ScavengersDataApiAssemblyDefinition> AssemblyDefinitions; // 0x80(0x10)
	struct TArray<struct FS_ScavengersDataApiXpBoosterDefinition> XpBoosterDefinitions; // 0x90(0x10)
	struct FS_ScavengersDataApiTinkerData TinkerDefinitions; // 0xa0(0x20)
	struct TArray<struct FS_ScavengersDataApiChallengeDefinition> ChallengeDefinitions; // 0xc0(0x10)
	struct TArray<struct FS_ScavengersDataApiSeasonDefinition> SeasonDefinitions; // 0xd0(0x10)
	struct TArray<struct FS_ScavengersDataApiSeasonRewardDefinition> SeasonRewardDefinitions; // 0xe0(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiSeasonRewardDefinition
// Size: 0x70 (Inherited: 0x00)
struct FS_ScavengersDataApiSeasonRewardDefinition {
	struct FString ID; // 0x00(0x10)
	struct FString entitlementId; // 0x10(0x10)
	struct FString BaseAssetPath; // 0x20(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedDescriptions; // 0x30(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedNames; // 0x40(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedSubtitles; // 0x50(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedDetail; // 0x60(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiSeasonDefinition
// Size: 0x60 (Inherited: 0x00)
struct FS_ScavengersDataApiSeasonDefinition {
	struct FString SeasonId; // 0x00(0x10)
	int32_t SeasonStart; // 0x10(0x04)
	int32_t SeasonEnd; // 0x14(0x04)
	int32_t PointsPerTier; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString BattlePassCatalogEntryId; // 0x20(0x10)
	struct TArray<struct FS_ScavengersDataApiSeasonTierDefinition> Tiers; // 0x30(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedTitles; // 0x40(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> LocalizedSubtitles; // 0x50(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiSeasonTierDefinition
// Size: 0x28 (Inherited: 0x00)
struct FS_ScavengersDataApiSeasonTierDefinition {
	int32_t Tier; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString RewardId; // 0x08(0x10)
	struct FString BattlePassRewardId; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiChallengeDefinition
// Size: 0x40 (Inherited: 0x00)
struct FS_ScavengersDataApiChallengeDefinition {
	struct FString ChallengeID; // 0x00(0x10)
	struct FString LocalizationID; // 0x10(0x10)
	struct TArray<struct FS_ScavengersDataApiChallengeCriteriaDefinition> Criteria; // 0x20(0x10)
	struct TArray<struct FS_ScavengersDataApiChallengeMilestoneDefinition> Milestones; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiChallengeMilestoneDefinition
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiChallengeMilestoneDefinition {
	int32_t Target; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString RewardEntitlementId; // 0x08(0x10)
	struct FString BattlePassRewardEntitlementId; // 0x18(0x10)
	int32_t SeasonPoints; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiChallengeCriteriaDefinition
// Size: 0x38 (Inherited: 0x00)
struct FS_ScavengersDataApiChallengeCriteriaDefinition {
	struct FString CriteriaScope; // 0x00(0x10)
	struct FString CriteriaType; // 0x10(0x10)
	struct FString ParamId; // 0x20(0x10)
	int32_t ParamMin; // 0x30(0x04)
	int32_t ParamMax; // 0x34(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiTinkerData
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiTinkerData {
	struct TArray<struct FS_ScavengersDataApiTinkerAssignment> TinkerAssignments; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiTinkerPack> TinkerPacks; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiTinkerPack
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiTinkerPack {
	struct FString TinkerPackId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiTinkerPackSlot> Slots; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiTinkerPackSlot
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiTinkerPackSlot {
	struct FString SlotId; // 0x00(0x10)
	struct FString SubMatId; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiTinkerAssignment
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiTinkerAssignment {
	struct FString entitlementId; // 0x00(0x10)
	struct FString DefaultTinkerPackId; // 0x10(0x10)
	struct TArray<struct FString> AllowedTinkerPackIdList; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiXpBoosterDefinition
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiXpBoosterDefinition {
	struct FString ID; // 0x00(0x10)
	int32_t DurationSeconds; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiAssemblyDefinition
// Size: 0x58 (Inherited: 0x00)
struct FS_ScavengersDataApiAssemblyDefinition {
	struct FString RecipeId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpInt> ResourceCost; // 0x10(0x10)
	int32_t PowerCost; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString OutputCatalogEntryId; // 0x28(0x10)
	struct FString RestrictionId; // 0x38(0x10)
	struct FString ViewRestrictionId; // 0x48(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiRestrictionDefinition
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiRestrictionDefinition {
	struct FString RestrictionId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiRestrictionTerm> Terms; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiRestrictionTerm
// Size: 0x50 (Inherited: 0x00)
struct FS_ScavengersDataApiRestrictionTerm {
	struct FString RestrictionType; // 0x00(0x10)
	bool ClientVisible; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString StringId; // 0x18(0x10)
	struct FString ParamId; // 0x28(0x10)
	struct FString ParamTag; // 0x38(0x10)
	int32_t ParamMin; // 0x48(0x04)
	int32_t ParamMax; // 0x4c(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiResearchProjectHurryCost
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiResearchProjectHurryCost {
	int32_t TimePeriodSeconds; // 0x00(0x04)
	int32_t Cost; // 0x04(0x04)
	struct FString Currency; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiResearchProjectDefinition
// Size: 0x58 (Inherited: 0x00)
struct FS_ScavengersDataApiResearchProjectDefinition {
	struct FString RecipeId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpInt> ResourceCost; // 0x10(0x10)
	int32_t PowerCost; // 0x20(0x04)
	int32_t ResearchTimeSecs; // 0x24(0x04)
	struct FString OutputCatalogEntryId; // 0x28(0x10)
	struct FString RestrictionId; // 0x38(0x10)
	struct FString ViewRestrictionId; // 0x48(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiCharacterDefinition
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiCharacterDefinition {
	struct FString ClassId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpString> CharacterStrings; // 0x10(0x10)
	struct TArray<struct FS_ScavengersDataApiLevelDefinition> CharacterLevels; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiLevelDefinition
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiLevelDefinition {
	int32_t Level; // 0x00(0x04)
	int32_t LevelUpXp; // 0x04(0x04)
	struct FString CatalogEntryId; // 0x08(0x10)
	int32_t MaxPower; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiConfigData
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiConfigData {
	struct TArray<struct FS_ScavengersDataApiKvpString> TitleStrings; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpInt> FeatureFlags; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiStateHashes
// Size: 0x60 (Inherited: 0x00)
struct FS_ScavengersDataApiStateHashes {
	struct FString PlayerStateHash; // 0x00(0x10)
	struct FString ConfigDataHash; // 0x10(0x10)
	struct FString TitleDataHash; // 0x20(0x10)
	struct FString CatalogDataHash; // 0x30(0x10)
	struct FString StoreDataHash; // 0x40(0x10)
	struct FString DownloadableDataHash; // 0x50(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiLoginResult
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiLoginResult {
	struct FString PlayerId; // 0x00(0x10)
	struct FString AuthenticationToken; // 0x10(0x10)
	struct FString UserSettings; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientGetLeaderboard
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientGetLeaderboard {
	struct FString leaderboardId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientCheatSetXpBoosterExpiration
// Size: 0x04 (Inherited: 0x00)
struct FS_ScavengersDataApiClientCheatSetXpBoosterExpiration {
	int32_t NewExpirationTime; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientSetUserSettings
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientSetUserSettings {
	struct FString Settings; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientCheatProgressSeason
// Size: 0x04 (Inherited: 0x00)
struct FS_ScavengersDataApiClientCheatProgressSeason {
	int32_t ProgressInc; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientCheatProgressChallenge
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiClientCheatProgressChallenge {
	struct FString ChallengeInstanceId; // 0x00(0x10)
	int32_t ProgressInc; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientCheatSpeedResearch
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientCheatSpeedResearch {
	struct FString ResearchStationId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientCheatAddPlayerCurrency
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiClientCheatAddPlayerCurrency {
	struct FString CurrencyId; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientCheatRevokeItems
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientCheatRevokeItems {
	struct TArray<struct FS_ScavengersDataApiKvpInt> ItemsToRevoke; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientCheatGrantPlatformPurchases
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientCheatGrantPlatformPurchases {
	struct TArray<struct FS_ScavengersDataApiPlatformPurchaseItem> ItemsToGrant; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiPlatformPurchaseItem
// Size: 0x28 (Inherited: 0x00)
struct FS_ScavengersDataApiPlatformPurchaseItem {
	struct FString ItemId; // 0x00(0x10)
	struct FString InstanceID; // 0x10(0x10)
	int32_t Count; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientCheatGrantItems
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientCheatGrantItems {
	struct TArray<struct FS_ScavengersDataApiKvpInt> ItemsToGrant; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientCheatSetCharacterXp
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiClientCheatSetCharacterXp {
	struct FString CharacterId; // 0x00(0x10)
	int32_t Xp; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientSubmitPlayerReport
// Size: 0x40 (Inherited: 0x00)
struct FS_ScavengersDataApiClientSubmitPlayerReport {
	struct FString MatchID; // 0x00(0x10)
	struct TArray<struct FString> MatchTeam; // 0x10(0x10)
	struct FString ReportedPlayerId; // 0x20(0x10)
	struct FString ReportReasonCategory; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientSubmitChallengeStats
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientSubmitChallengeStats {
	struct TArray<struct FS_ScavengersDataApiPlayerStat> Stats; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientClaimChallenge
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiClientClaimChallenge {
	struct FString ChallengeInstanceId; // 0x00(0x10)
	int32_t ClaimTarget; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientActivateXpBooster
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientActivateXpBooster {
	struct FString XpBoosterInstanceId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResearchProjectHurry
// Size: 0x28 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResearchProjectHurry {
	struct FString ResearchStationId; // 0x00(0x10)
	int32_t ExpectedCost; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ExpectedCurrency; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResearchProjectComplete
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResearchProjectComplete {
	struct FString ResearchStationId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResearchProjectCancel
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResearchProjectCancel {
	struct FString ResearchStationId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseResearchProjectStart
// Size: 0x78 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseResearchProjectStart {
	struct FS_ScavengersDataApiResearchProjectInstance ProjectInstance; // 0x00(0x38)
	struct FS_ScavengersDataApiStateUpdate StateUpdate; // 0x38(0x40)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResearchProjectStart
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResearchProjectStart {
	struct FString ResearchStationId; // 0x00(0x10)
	struct FString ProjectDefinitionId; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseStateUpdate
// Size: 0x40 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseStateUpdate {
	struct FS_ScavengersDataApiStateUpdate StateUpdate; // 0x00(0x40)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientItemAssembly
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiClientItemAssembly {
	struct FString AssemblyRecipeId; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientItemDisassembly
// Size: 0x18 (Inherited: 0x00)
struct FS_ScavengersDataApiClientItemDisassembly {
	struct FString ItemInstanceId; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientOpenBundle
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientOpenBundle {
	struct FString ItemInstanceId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientPurchaseDetails
// Size: 0x48 (Inherited: 0x00)
struct FS_ScavengersDataApiClientPurchaseDetails {
	struct FString PlatformTransactionId; // 0x00(0x10)
	struct FString OfferId; // 0x10(0x10)
	struct FString PlayerCurrencyCode; // 0x20(0x10)
	int32_t PlayerCurrencyValue; // 0x30(0x04)
	bool Failure; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FString FailureReason; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientSyncPlatformPurchases
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientSyncPlatformPurchases {
	struct FString TransactionId; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientPurchaseOfferBundle
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiClientPurchaseOfferBundle {
	struct FString StoreOfferBundleId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpInt> ExpectedPrice; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientPurchaseOffer
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiClientPurchaseOffer {
	struct FString StoreOfferId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiKvpInt> ExpectedPrice; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientSetCosmeticLoadoutForCharacter
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiClientSetCosmeticLoadoutForCharacter {
	struct FString CharacterId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiCosmeticSlot> Loadout; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientSetCosmeticLoadoutForPlayer
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientSetCosmeticLoadoutForPlayer {
	struct TArray<struct FS_ScavengersDataApiCosmeticSlot> Loadout; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientSetLoadoutForCharacter
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiClientSetLoadoutForCharacter {
	struct FString CharacterId; // 0x00(0x10)
	struct TArray<struct FS_ScavengersDataApiLoadoutSlot> Loadout; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientSetDisplayName
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientSetDisplayName {
	struct FString DisplayName; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientUnseenRewardAck
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientUnseenRewardAck {
	struct TArray<struct FString> RewardList; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientHeartbeat
// Size: 0x60 (Inherited: 0x00)
struct FS_ScavengersDataApiClientHeartbeat {
	struct FS_ScavengersDataApiStateHashes StateHashes; // 0x00(0x60)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientLoginWithImprobable
// Size: 0x20 (Inherited: 0x00)
struct FS_ScavengersDataApiClientLoginWithImprobable {
	struct FString AccessToken; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientResponseConfiguration
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientResponseConfiguration {
	struct TArray<struct FS_ScavengersDataApiKvpInt> FeatureFlags; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientRefreshPlatformLogin
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientRefreshPlatformLogin {
	struct FString PlatformToken; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientGetPrivateConfigFile
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientGetPrivateConfigFile {
	struct FString Filename; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientGetConfiguration
// Size: 0x30 (Inherited: 0x00)
struct FS_ScavengersDataApiClientGetConfiguration {
	struct FString Build; // 0x00(0x10)
	struct FString Version; // 0x10(0x10)
	struct FString VersionApi; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ScavengersDataApiClientGetCatalog
// Size: 0x10 (Inherited: 0x00)
struct FS_ScavengersDataApiClientGetCatalog {
	struct FString Version; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ShelterInterfaceData
// Size: 0x98 (Inherited: 0x00)
struct FS_ShelterInterfaceData {
	char pad_0[0x10]; // 0x00(0x10)
	bool CameraInShelter; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct AS_ShelterVolume*> m_ShelterVolumes; // 0x18(0x10)
	struct TArray<struct US_ShelterVolumeComponent*> m_ShelterVolumeComponents; // 0x28(0x10)
	struct TMap<uint32_t, struct FS_StencilEntry> m_StencilEntries; // 0x38(0x50)
	struct TArray<struct AS_StormShellActor*> m_StormShellActors; // 0x88(0x10)
};

// ScriptStruct Scavenger.S_StencilEntry
// Size: 0x10 (Inherited: 0x00)
struct FS_StencilEntry {
	struct TWeakObjectPtr<struct UPrimitiveComponent> primComponent; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_ShieldLevelConfig
// Size: 0x38 (Inherited: 0x00)
struct FS_ShieldLevelConfig {
	enum class ES_ShieldLevel ShieldLevel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor ShellColor; // 0x04(0x10)
	struct FLinearColor ShellImpactColor; // 0x14(0x10)
	float TransitionDurationFromPreviousLevel; // 0x24(0x04)
	struct UAkAudioEvent* UpgradeAudioEvent; // 0x28(0x08)
	struct UParticleSystem* UpgradeParticles; // 0x30(0x08)
};

// ScriptStruct Scavenger.S_ShieldStateConfig
// Size: 0x30 (Inherited: 0x00)
struct FS_ShieldStateConfig {
	struct UMaterialInterface* ShellMaterial; // 0x00(0x08)
	struct UAkAudioEvent* AudioEvent; // 0x08(0x08)
	struct UParticleSystem* Particles; // 0x10(0x08)
	struct UCurveFloat* Curve; // 0x18(0x08)
	float ShieldStateSampleTime; // 0x20(0x04)
	float ShieldStateValue; // 0x24(0x04)
	struct UParticleSystemComponent* ActiveParticleSystemComponent; // 0x28(0x08)
};

// ScriptStruct Scavenger.S_Skin
// Size: 0x80 (Inherited: 0x00)
struct FS_Skin {
	int32_t SkinId; // 0x00(0x04)
	int32_t CompoundSkinId; // 0x04(0x04)
	struct TWeakObjectPtr<struct AActor> BaseObject; // 0x08(0x08)
	struct FName BaseObjectName; // 0x10(0x08)
	struct TWeakObjectPtr<struct UMeshComponent> TargetMeshComp; // 0x18(0x08)
	struct FName MeshName; // 0x20(0x08)
	struct TMap<struct FName, struct FS_SkinMaterial> SkinMaterials; // 0x28(0x50)
	bool bNeedsSmelting; // 0x78(0x01)
	bool bHasBeenSmelted; // 0x79(0x01)
	bool bIsSmeltingInProgress; // 0x7a(0x01)
	bool bDirty; // 0x7b(0x01)
	bool bStale; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// ScriptStruct Scavenger.S_SkinMaterial
// Size: 0x1a8 (Inherited: 0x00)
struct FS_SkinMaterial {
	struct FName MaterialName; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	int32_t MaterialIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FName, struct FS_SkinMaterialParameter> MaterialParms; // 0x18(0x50)
	struct TSoftObjectPtr<struct UMaterialInterface> MaterialOverride; // 0x68(0x28)
	struct UMaterialInstanceDynamic* Mid; // 0x90(0x08)
	struct UMaterialInstanceDynamic* SmeltingMID; // 0x98(0x08)
	struct TSoftObjectPtr<struct UMaterialInterface> SmeltingMasterLiveMaterial; // 0xa0(0x28)
	struct TArray<struct FMaterialSmelterRuntimeLayer> SmeltingLayerStack; // 0xc8(0x10)
	struct TMap<enum class EPackedMaterialProperty, struct FMaterialSmelterRuntimeOutput> SmeltingRuntimeOutputs; // 0xd8(0x50)
	struct TArray<struct FS_SkinMaterialSmeltingTask> SmeltingCompressionTasks; // 0x128(0x10)
	struct TArray<struct FS_SkinMaterialSmeltingTask> SmeltingMipMemcpyTasks; // 0x138(0x10)
	struct TMap<enum class EPackedMaterialProperty, struct UTexture2D*> SmeltingCompressedTextures; // 0x148(0x50)
	enum class ES_SmeltState SmeltState; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	uint32_t SmeltStateTimeStamp; // 0x19c(0x04)
	bool bSupportsSmelting; // 0x1a0(0x01)
	bool bNeedsSmelting; // 0x1a1(0x01)
	bool bHasBeenSmelted; // 0x1a2(0x01)
	bool bUsingCachedSmeltedMaterial; // 0x1a3(0x01)
	bool bDirty; // 0x1a4(0x01)
	bool bStale; // 0x1a5(0x01)
	char pad_1A6[0x2]; // 0x1a6(0x02)
};

// ScriptStruct Scavenger.S_SkinMaterialSmeltingTask
// Size: 0x58 (Inherited: 0x00)
struct FS_SkinMaterialSmeltingTask {
	int32_t TaskId; // 0x00(0x04)
	enum class EPackedMaterialProperty TextureProperty; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UTexture2D* Texture; // 0x08(0x08)
	struct TArray<struct FColor> ColorData; // 0x10(0x10)
	struct TArray<char> CompressedData; // 0x20(0x10)
	int32_t CompressedDataSize; // 0x30(0x04)
	int32_t MipIndex; // 0x34(0x04)
	int32_t NumMips; // 0x38(0x04)
	int32_t Width; // 0x3c(0x04)
	int32_t Height; // 0x40(0x04)
	int32_t AlphaMultiplier; // 0x44(0x04)
	struct UTextureRenderTarget2D* RenderTarget; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Scavenger.S_SkinMaterialParameter
// Size: 0x50 (Inherited: 0x00)
struct FS_SkinMaterialParameter {
	struct FName ParameterName; // 0x00(0x08)
	enum class ES_SkinMaterialParameter ParameterType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ScalarValue; // 0x0c(0x04)
	struct FLinearColor VectorValue; // 0x10(0x10)
	struct TSoftObjectPtr<struct UTexture2D> TexValue; // 0x20(0x28)
	bool bIsReady; // 0x48(0x01)
	bool bDirty; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Scavenger.S_ToDIntervalDefinitionNative
// Size: 0x1490 (Inherited: 0x00)
struct FS_ToDIntervalDefinitionNative {
	struct FString DislpayName; // 0x00(0x10)
	float StartTime; // 0x10(0x04)
	float BlendLength; // 0x14(0x04)
	float Dayness; // 0x18(0x04)
	bool EaseIn; // 0x1c(0x01)
	bool EaseOut; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FS_ToDIntervalSettingsNative Settings; // 0x20(0x1470)
};

// ScriptStruct Scavenger.S_ToDIntervalSettingsNative
// Size: 0x1470 (Inherited: 0x00)
struct FS_ToDIntervalSettingsNative {
	struct FS_ToDIntervalSunSettingsNative SunSettings; // 0x00(0x190)
	struct FS_ToDIntervalSkylightSettingsNative SkylightSettings; // 0x190(0x120)
	struct FS_ToDIntervalFogSettingsNative FogSettings; // 0x2b0(0x300)
	struct FS_ToDIntervalPostProcessSettingsNative PostProcessSettings; // 0x5b0(0x240)
	struct FS_ToDIntervalMaterialSettingsNative MaterialSettings; // 0x7f0(0xa10)
	struct FS_ToDIntervalRimLightSettingsNative RimLightSettings; // 0x1200(0x270)
};

// ScriptStruct Scavenger.S_ToDIntervalRimLightSettingsNative
// Size: 0x270 (Inherited: 0x00)
struct FS_ToDIntervalRimLightSettingsNative {
	struct FS_ToDIntervalProp_Color RimLightPlayerRadience; // 0x00(0x9c)
	struct FS_ToDIntervalProp_Color RimLightNPCRadience; // 0x9c(0x9c)
	struct FS_ToDIntervalProp_Color RimLightWeaponRadience; // 0x138(0x9c)
	struct FS_ToDIntervalProp_Color FillLightRadience; // 0x1d4(0x9c)
};

// ScriptStruct Scavenger.S_ToDIntervalProp_Color
// Size: 0x9c (Inherited: 0x00)
struct FS_ToDIntervalProp_Color {
	struct FLinearColor BaseValue; // 0x00(0x10)
	struct FS_ToDIntervalPropOverride_Color Storm; // 0x10(0x14)
	struct FS_ToDIntervalPropOverride_Color Shelter; // 0x24(0x14)
	struct FS_ToDIntervalPropOverride_Color ShelterStorm; // 0x38(0x14)
	struct FS_ToDIntervalPropOverride_Color PartialShelter; // 0x4c(0x14)
	struct FS_ToDIntervalPropOverride_Color PartialShelterStorm; // 0x60(0x14)
	struct FS_ToDIntervalPropOverride_Color Crater; // 0x74(0x14)
	struct FS_ToDIntervalPropOverride_Color CraterStorm; // 0x88(0x14)
};

// ScriptStruct Scavenger.S_ToDIntervalPropOverride_Color
// Size: 0x14 (Inherited: 0x00)
struct FS_ToDIntervalPropOverride_Color {
	bool Override; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Value; // 0x04(0x10)
};

// ScriptStruct Scavenger.S_ToDIntervalMaterialSettingsNative
// Size: 0xa10 (Inherited: 0x00)
struct FS_ToDIntervalMaterialSettingsNative {
	struct FS_ToDIntervalProp_Color HorizonBaseColor; // 0x00(0x9c)
	struct FS_ToDIntervalProp_Color ZenithBaseColor; // 0x9c(0x9c)
	struct FS_ToDIntervalProp_Color CloudLightColor; // 0x138(0x9c)
	struct FS_ToDIntervalProp_Color CloudDarkColor; // 0x1d4(0x9c)
	struct FS_ToDIntervalProp_Float CloudOpacity; // 0x270(0x3c)
	struct FS_ToDIntervalProp_Float CloudDensity; // 0x2ac(0x3c)
	struct FS_ToDIntervalProp_Float BaseCloudSpeed; // 0x2e8(0x3c)
	struct FS_ToDIntervalProp_Float BaseCloudiness; // 0x324(0x3c)
	struct FS_ToDIntervalProp_Float StormyIntensity; // 0x360(0x3c)
	struct FS_ToDIntervalProp_Float FogStormyDesaturationFractionDensity; // 0x39c(0x3c)
	struct FS_ToDIntervalProp_Color StormyColorMultiply; // 0x3d8(0x9c)
	struct FS_ToDIntervalProp_Float ShineIntensity; // 0x474(0x3c)
	struct FS_ToDIntervalProp_Rotator SunPosition; // 0x4b0(0x7c)
	struct FS_ToDIntervalProp_Color SunColor; // 0x52c(0x9c)
	struct FS_ToDIntervalProp_Float SunHighlightRadius; // 0x5c8(0x3c)
	struct FS_ToDIntervalProp_Rotator MoonPosition; // 0x604(0x7c)
	struct FS_ToDIntervalProp_Float SunDiscBrightness; // 0x680(0x3c)
	struct FS_ToDIntervalProp_Float MoonRotation; // 0x6bc(0x3c)
	struct FS_ToDIntervalProp_Float MoonOpacity; // 0x6f8(0x3c)
	struct FS_ToDIntervalProp_Color MoonColorMultiply; // 0x734(0x9c)
	struct FS_ToDIntervalProp_Float MoonBrightnessExponent; // 0x7d0(0x3c)
	struct FS_ToDIntervalProp_Float MoonGlowScale; // 0x80c(0x3c)
	struct FS_ToDIntervalProp_Color MoonGlowColor; // 0x848(0x9c)
	struct FS_ToDIntervalProp_Float MoonGlowIntensity; // 0x8e4(0x3c)
	struct FS_ToDIntervalProp_Float MoonHighlightRadius; // 0x920(0x3c)
	struct FS_ToDIntervalProp_Float StarsIntensity; // 0x95c(0x3c)
	struct FS_ToDIntervalProp_Float AuroraSpeed; // 0x998(0x3c)
	struct FS_ToDIntervalProp_Float AuroraIntensity; // 0x9d4(0x3c)
};

// ScriptStruct Scavenger.S_ToDIntervalProp_Float
// Size: 0x3c (Inherited: 0x00)
struct FS_ToDIntervalProp_Float {
	float BaseValue; // 0x00(0x04)
	struct FS_ToDIntervalPropOverride_Float Storm; // 0x04(0x08)
	struct FS_ToDIntervalPropOverride_Float Shelter; // 0x0c(0x08)
	struct FS_ToDIntervalPropOverride_Float ShelterStorm; // 0x14(0x08)
	struct FS_ToDIntervalPropOverride_Float PartialShelter; // 0x1c(0x08)
	struct FS_ToDIntervalPropOverride_Float PartialShelterStorm; // 0x24(0x08)
	struct FS_ToDIntervalPropOverride_Float Crater; // 0x2c(0x08)
	struct FS_ToDIntervalPropOverride_Float CraterStorm; // 0x34(0x08)
};

// ScriptStruct Scavenger.S_ToDIntervalPropOverride_Float
// Size: 0x08 (Inherited: 0x00)
struct FS_ToDIntervalPropOverride_Float {
	bool Override; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_ToDIntervalProp_Rotator
// Size: 0x7c (Inherited: 0x00)
struct FS_ToDIntervalProp_Rotator {
	struct FRotator BaseValue; // 0x00(0x0c)
	struct FS_ToDIntervalPropOverride_Rotator Storm; // 0x0c(0x10)
	struct FS_ToDIntervalPropOverride_Rotator Shelter; // 0x1c(0x10)
	struct FS_ToDIntervalPropOverride_Rotator ShelterStorm; // 0x2c(0x10)
	struct FS_ToDIntervalPropOverride_Rotator PartialShelter; // 0x3c(0x10)
	struct FS_ToDIntervalPropOverride_Rotator PartialShelterStorm; // 0x4c(0x10)
	struct FS_ToDIntervalPropOverride_Rotator Crater; // 0x5c(0x10)
	struct FS_ToDIntervalPropOverride_Rotator CraterStorm; // 0x6c(0x10)
};

// ScriptStruct Scavenger.S_ToDIntervalPropOverride_Rotator
// Size: 0x10 (Inherited: 0x00)
struct FS_ToDIntervalPropOverride_Rotator {
	bool Override; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FRotator Value; // 0x04(0x0c)
};

// ScriptStruct Scavenger.S_ToDIntervalPostProcessSettingsNative
// Size: 0x240 (Inherited: 0x00)
struct FS_ToDIntervalPostProcessSettingsNative {
	struct FS_ToDIntervalProp_Float ExposureMin; // 0x00(0x3c)
	struct FS_ToDIntervalProp_Float ExposureMax; // 0x3c(0x3c)
	struct FS_ToDIntervalProp_Float WhiteBalanceTemp; // 0x78(0x3c)
	struct FS_ToDIntervalProp_Color ShadowsGain; // 0xb4(0x9c)
	struct FS_ToDIntervalProp_Float Slope; // 0x150(0x3c)
	struct FS_ToDIntervalProp_Float Shoulder; // 0x18c(0x3c)
	struct FS_ToDIntervalProp_Float BloomIntensity; // 0x1c8(0x3c)
	struct FS_ToDIntervalProp_Float DirtMaskIntensity; // 0x204(0x3c)
};

// ScriptStruct Scavenger.S_ToDIntervalFogSettingsNative
// Size: 0x300 (Inherited: 0x00)
struct FS_ToDIntervalFogSettingsNative {
	struct FS_ToDIntervalProp_Float FogDensity; // 0x00(0x3c)
	struct FS_ToDIntervalProp_Float FogHeightFalloff; // 0x3c(0x3c)
	struct FS_ToDIntervalProp_Color FogInscatterColor; // 0x78(0x9c)
	struct FS_ToDIntervalProp_Float DirectionalInscatterExponent; // 0x114(0x3c)
	struct FS_ToDIntervalProp_Color DirectionalInscatterColor; // 0x150(0x9c)
	struct FS_ToDIntervalProp_Float VolumetricScatteringDistribution; // 0x1ec(0x3c)
	struct FS_ToDIntervalProp_Color VolumetricAlbedo; // 0x228(0x9c)
	struct FS_ToDIntervalProp_Float VolumetricExtinctionScale; // 0x2c4(0x3c)
};

// ScriptStruct Scavenger.S_ToDIntervalSkylightSettingsNative
// Size: 0x120 (Inherited: 0x00)
struct FS_ToDIntervalSkylightSettingsNative {
	struct UTextureCube* Cubemap; // 0x00(0x08)
	struct FS_ToDIntervalProp_Float Intensity; // 0x08(0x3c)
	struct FS_ToDIntervalProp_Color Color; // 0x44(0x9c)
	struct FS_ToDIntervalProp_Float DFAOExponent; // 0xe0(0x3c)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct Scavenger.S_ToDIntervalSunSettingsNative
// Size: 0x190 (Inherited: 0x00)
struct FS_ToDIntervalSunSettingsNative {
	struct FS_ToDIntervalProp_Float Intensity; // 0x00(0x3c)
	struct FS_ToDIntervalProp_Color LightColor; // 0x3c(0x9c)
	struct FS_ToDIntervalProp_Rotator Rotation; // 0xd8(0x7c)
	struct FS_ToDIntervalProp_Float VolumetricScatteringIntensity; // 0x154(0x3c)
};

// ScriptStruct Scavenger.S_ToDIntervalProp_Vector
// Size: 0x7c (Inherited: 0x00)
struct FS_ToDIntervalProp_Vector {
	struct FVector BaseValue; // 0x00(0x0c)
	struct FS_ToDIntervalPropOverride_Vector Storm; // 0x0c(0x10)
	struct FS_ToDIntervalPropOverride_Vector Shelter; // 0x1c(0x10)
	struct FS_ToDIntervalPropOverride_Vector ShelterStorm; // 0x2c(0x10)
	struct FS_ToDIntervalPropOverride_Vector PartialShelter; // 0x3c(0x10)
	struct FS_ToDIntervalPropOverride_Vector PartialShelterStorm; // 0x4c(0x10)
	struct FS_ToDIntervalPropOverride_Vector Crater; // 0x5c(0x10)
	struct FS_ToDIntervalPropOverride_Vector CraterStorm; // 0x6c(0x10)
};

// ScriptStruct Scavenger.S_ToDIntervalPropOverride_Vector
// Size: 0x10 (Inherited: 0x00)
struct FS_ToDIntervalPropOverride_Vector {
	bool Override; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Value; // 0x04(0x0c)
};

// ScriptStruct Scavenger.SocialHubAnalyticsEventBase
// Size: 0x10 (Inherited: 0x00)
struct FSocialHubAnalyticsEventBase {
	struct FString PlayerId; // 0x00(0x10)
};

// ScriptStruct Scavenger.SocialHubAnalyticsEndOfMatch
// Size: 0x18 (Inherited: 0x10)
struct FSocialHubAnalyticsEndOfMatch : FSocialHubAnalyticsEventBase {
	int32_t OutroCinematicIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.SocialHubAnalyticsLoggedIn
// Size: 0x28 (Inherited: 0x10)
struct FSocialHubAnalyticsLoggedIn : FSocialHubAnalyticsEventBase {
	struct FString ClientTelemetrySessionId; // 0x10(0x10)
	int32_t ClientMatchIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_CrowdStatsForDirection
// Size: 0x60 (Inherited: 0x00)
struct FS_CrowdStatsForDirection {
	int32_t Count; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, int32_t> LoopingStateCounts; // 0x08(0x50)
	float AverageDistance; // 0x58(0x04)
	float ApproximateAverageAngularDistance; // 0x5c(0x04)
};

// ScriptStruct Scavenger.S_PickupTypeData
// Size: 0x28 (Inherited: 0x00)
struct FS_PickupTypeData {
	struct AS_SocialHubPickupBase* PickupClass; // 0x00(0x08)
	float RespawnTime; // 0x08(0x04)
	enum class ES_PickupType ValueToScaleFrom; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ScaleAtMinimumValue; // 0x10(0x04)
	float ScaleAtMaximumValue; // 0x14(0x04)
	int32_t MinimumScrapValue; // 0x18(0x04)
	int32_t MaximumScrapValue; // 0x1c(0x04)
	int32_t MinimumDataValue; // 0x20(0x04)
	int32_t MaximumDataValue; // 0x24(0x04)
};

// ScriptStruct Scavenger.PlayerTypeInfo
// Size: 0x48 (Inherited: 0x00)
struct FPlayerTypeInfo {
	struct FString Name; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
	struct FString DefaultAccessCodeHash; // 0x20(0x10)
	struct AScavengersHubCharacterObject* CharacterEntityObjectClass; // 0x30(0x08)
	struct TArray<struct US_SocialHubPlayerClassData*> PlayerClassDatas; // 0x38(0x10)
};

// ScriptStruct Scavenger.GrenadeSetWrapper
// Size: 0x50 (Inherited: 0x00)
struct FGrenadeSetWrapper {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_MILEPhaseLevelsTableRow
// Size: 0x18 (Inherited: 0x08)
struct FS_MILEPhaseLevelsTableRow : FTableRowBase {
	struct TArray<struct FName> SubLevels; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_SocialHubOutroData
// Size: 0x18 (Inherited: 0x00)
struct FS_SocialHubOutroData {
	struct FName Name; // 0x00(0x08)
	struct ULevelSequence* OutroCinematic; // 0x08(0x08)
	struct US_WidgetMinimal* ExtractionWidget; // 0x10(0x08)
};

// ScriptStruct Scavenger.S_SocialHubPhaseAbilityAssignment
// Size: 0x30 (Inherited: 0x00)
struct FS_SocialHubPhaseAbilityAssignment {
	SoftClassProperty MessengerType; // 0x00(0x28)
	struct US_MessengerAbilitySet* AbilitySet; // 0x28(0x08)
};

// ScriptStruct Scavenger.S_ScriptedOscillation
// Size: 0x1c (Inherited: 0x00)
struct FS_ScriptedOscillation {
	float Speed; // 0x00(0x04)
	float Range; // 0x04(0x04)
	struct FVector MovementAxis; // 0x08(0x0c)
	bool bLocalToInitialRotation; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float TimeOffset; // 0x18(0x04)
};

// ScriptStruct Scavenger.S_ScriptedRotation
// Size: 0x14 (Inherited: 0x00)
struct FS_ScriptedRotation {
	float Speed; // 0x00(0x04)
	struct FVector RotateAroundAxis; // 0x04(0x0c)
	float TimeOffset; // 0x10(0x04)
};

// ScriptStruct Scavenger.BoardedPlayersWrapper
// Size: 0x10 (Inherited: 0x00)
struct FBoardedPlayersWrapper {
	struct TArray<struct AS_SocialHubPlayerEntityObject*> BoardedPlayers; // 0x00(0x10)
};

// ScriptStruct Scavenger.ScheduledEvent
// Size: 0x10 (Inherited: 0x00)
struct FScheduledEvent {
	enum class ESocialHubEvent EventType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ScheduledWorldTime; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_MontagePlayrateTableRow
// Size: 0x20 (Inherited: 0x08)
struct FS_MontagePlayrateTableRow : FTableRowBase {
	struct UAnimMontage* Montage; // 0x08(0x08)
	struct TArray<float> PlayrateArray; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_AnimVariableModifierTableRow
// Size: 0x58 (Inherited: 0x08)
struct FS_AnimVariableModifierTableRow : FTableRowBase {
	enum class ES_CharacterType CharacterType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<float> SpeedModifier; // 0x10(0x10)
	struct TArray<float> AccelerationModifier; // 0x20(0x10)
	struct UDataTable* MontagePlayrateTable; // 0x30(0x08)
	struct TArray<float> AnimationPlayrateModifier; // 0x38(0x10)
	struct TArray<float> ForceSpeedModifierForBlendSpace; // 0x48(0x10)
};

// ScriptStruct Scavenger.S_TelemetryEvent
// Size: 0x10 (Inherited: 0x00)
struct FS_TelemetryEvent {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_SocialHubTelemetryEvent
// Size: 0x10 (Inherited: 0x10)
struct FS_SocialHubTelemetryEvent : FS_TelemetryEvent {
};

// ScriptStruct Scavenger.S_SocialHubBinaryTelemetryEvent
// Size: 0x30 (Inherited: 0x10)
struct FS_SocialHubBinaryTelemetryEvent : FS_SocialHubTelemetryEvent {
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct Scavenger.S_SocialEventHistoryEntry
// Size: 0x18 (Inherited: 0x00)
struct FS_SocialEventHistoryEntry {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Scavenger.S_SpawnPoints
// Size: 0xb0 (Inherited: 0x00)
struct FS_SpawnPoints {
	struct FTransform Point; // 0x00(0x30)
	struct FName EditorOnlyArrowPositionOverride; // 0x30(0x08)
	bool OverrideFitPointToGround; // 0x38(0x01)
	bool ReplenishPoint; // 0x39(0x01)
	bool NoInitialSpawns; // 0x3a(0x01)
	bool OneSpawnOnly; // 0x3b(0x01)
	struct FName MontageKey; // 0x3c(0x08)
	struct FVector2D m_minimumTimeBetweenSpawns; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FSoftObjectPath OverrideDataTableAssetReference; // 0x50(0x18)
	struct TSoftObjectPtr<struct UDataTable> OverrideSpawnDataTable; // 0x68(0x28)
	struct UDataTable* m_overrideSpawnDataTable; // 0x90(0x08)
	bool Sleeping; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float BlockingRadius; // 0x9c(0x04)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// ScriptStruct Scavenger.SpawnTable
// Size: 0x18 (Inherited: 0x00)
struct FSpawnTable {
	struct TArray<struct FProcessedSpawnDescriptorItem> ProcessedSpawnData; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Scavenger.ProcessedSpawnDescriptorItem
// Size: 0x28 (Inherited: 0x00)
struct FProcessedSpawnDescriptorItem {
	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* actorClassToSpawn; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct US_ItemData* WeaponPrimaryItemData; // 0x20(0x08)
};

// ScriptStruct Scavenger.SpawnDescriptorTableRow
// Size: 0x30 (Inherited: 0x08)
struct FSpawnDescriptorTableRow : FTableRowBase {
	struct FName GroupName; // 0x08(0x08)
	float RelativeSpawnChance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct AActor* actorClassToSpawn; // 0x18(0x08)
	struct US_ItemData* WeaponPrimaryItemData; // 0x20(0x08)
	float GlobalAISpawnPercentageCutoff; // 0x28(0x04)
	enum class ES_AISpawnPhase StartSpawnPhase; // 0x2c(0x01)
	enum class ES_AISpawnPhase EndSpawnPhase; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct Scavenger.S_SpottingInstance
// Size: 0x18 (Inherited: 0x00)
struct FS_SpottingInstance {
	int32_t TeamIndex; // 0x00(0x04)
	float CritChanceModForTeam; // 0x04(0x04)
	float CritChanceModForSpotter; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* SpottingInstigator; // 0x10(0x08)
};

// ScriptStruct Scavenger.S_BlendRule
// Size: 0x28 (Inherited: 0x08)
struct FS_BlendRule : FTableRowBase {
	enum class ES_CameraSettings From; // 0x08(0x01)
	enum class ES_CameraSettings To; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float FovInterpSpeed; // 0x0c(0x04)
	float SpringArmInterpSpeed; // 0x10(0x04)
	float SocketTranslationInterpSpeed; // 0x14(0x04)
	float SocketRotationInterpSpeed; // 0x18(0x04)
	float TargetInterpSpeed; // 0x1c(0x04)
	float LagInterpSpeed; // 0x20(0x04)
	bool DoAimKeep; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Scavenger.S_CameraArmSettings
// Size: 0x170 (Inherited: 0x08)
struct FS_CameraArmSettings : FTableRowBase {
	enum class ES_CameraSettings CameraSettingEnum; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FS_InheritanceSettings InheritanceSettings; // 0x10(0xb0)
	struct FS_CameraArmFOVSettings FovSettings; // 0xc0(0x04)
	struct FS_CameraArmLengthSettings LengthSettings; // 0xc4(0x04)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FS_CamerArmSocketOffsetSettings SocketOffsetSetting; // 0xd0(0x20)
	struct FS_CamerArmTranslationOffsetSettings TargetOffsetSetting; // 0xf0(0x0c)
	struct FS_CameraArmLagSettings LagSettings; // 0xfc(0x14)
	struct FS_CameraRotationClampSettings RotationClamp; // 0x110(0x2c)
	bool DisablePerWeaponOverrides; // 0x13c(0x01)
	bool AimKeepOnCameraCollision; // 0x13d(0x01)
	bool UseProjectileSpawnPointAsCameraLocation; // 0x13e(0x01)
	enum class ES_RecoilSettings RecoilSettingToUse; // 0x13f(0x01)
	bool HideBlockingCharacters; // 0x140(0x01)
	bool CollideWithBlockingCharacters; // 0x141(0x01)
	bool OnlyCollideOnFoliageOverlap; // 0x142(0x01)
	char pad_143[0x1]; // 0x143(0x01)
	float ScavFoliageMaxAngleToIgnoreCollision; // 0x144(0x04)
	float VanillaFoliageVisibilitySidePadding; // 0x148(0x04)
	bool DisableCollisionWithAttachedParents; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	struct FS_CameraNoiseSettings NoiseTranslation; // 0x150(0x10)
	struct FS_CameraNoiseSettings NoiseRotation; // 0x160(0x10)
};

// ScriptStruct Scavenger.S_CameraRotationClampSettings
// Size: 0x2c (Inherited: 0x00)
struct FS_CameraRotationClampSettings {
	struct FS_RotationClamp RotationClamp; // 0x00(0x28)
	bool bOverrideRotationClamp; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct Scavenger.S_RotationClamp
// Size: 0x28 (Inherited: 0x00)
struct FS_RotationClamp {
	struct FS_ClampValue Yaw; // 0x00(0x0c)
	struct FS_ClampValue Pitch; // 0x0c(0x0c)
	struct FS_ClampValue Roll; // 0x18(0x0c)
	bool bWorldSpaceClamp; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Scavenger.S_ClampValue
// Size: 0x0c (Inherited: 0x00)
struct FS_ClampValue {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	bool bApplyClamp; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Scavenger.S_CameraArmLagSettings
// Size: 0x14 (Inherited: 0x00)
struct FS_CameraArmLagSettings {
	bool bEnableCameraLag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CameraLagFwdSpeed; // 0x04(0x04)
	float CameraLagSideSpeed; // 0x08(0x04)
	float CameraLagUpSpeed; // 0x0c(0x04)
	float CameraLagDownSpeed; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_CamerArmTranslationOffsetSettings
// Size: 0x0c (Inherited: 0x00)
struct FS_CamerArmTranslationOffsetSettings {
	struct FVector Translation; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_CamerArmSocketOffsetSettings
// Size: 0x20 (Inherited: 0x00)
struct FS_CamerArmSocketOffsetSettings {
	struct FVector Translation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_CameraArmLengthSettings
// Size: 0x04 (Inherited: 0x00)
struct FS_CameraArmLengthSettings {
	float SpringArmTargetLength; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_CameraArmFOVSettings
// Size: 0x04 (Inherited: 0x00)
struct FS_CameraArmFOVSettings {
	float FOVTarget; // 0x00(0x04)
};

// ScriptStruct Scavenger.S_InheritanceSettings
// Size: 0xb0 (Inherited: 0x00)
struct FS_InheritanceSettings {
	bool bInheritCameraSettings; // 0x00(0x01)
	enum class ES_CameraSettings InheritCameraSettingFrom; // 0x01(0x01)
	char pad_2[0xe]; // 0x02(0x0e)
	struct FS_CameraSettingOverride InheritanceOverrides; // 0x10(0xa0)
};

// ScriptStruct Scavenger.S_RecoilWeaponSettings
// Size: 0x2c (Inherited: 0x00)
struct FS_RecoilWeaponSettings {
	float CenterAcceleration; // 0x00(0x04)
	float RollCenterAcceleration; // 0x04(0x04)
	float PushVelocity; // 0x08(0x04)
	float WindupScaleMin; // 0x0c(0x04)
	float WindupScaleMax; // 0x10(0x04)
	float BoundsMin[0x3]; // 0x14(0x0c)
	float BoundsMax[0x3]; // 0x20(0x0c)
};

// ScriptStruct Scavenger.S_RecoilImpulseSettings3D
// Size: 0x4c (Inherited: 0x00)
struct FS_RecoilImpulseSettings3D {
	struct FS_RecoilImpulseSettings AxisSettings[0x3]; // 0x00(0x48)
	enum class ES_RecoilImpulseInhertienceType InheritenceType; // 0x48(0x01)
	enum class ES_RecoilSettings RecoilSettingToInheritFrom; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
};

// ScriptStruct Scavenger.S_RecoilImpulseSettings
// Size: 0x18 (Inherited: 0x00)
struct FS_RecoilImpulseSettings {
	float ImpulseMin; // 0x00(0x04)
	float ImpulseMax; // 0x04(0x04)
	float ImpulseMinAmplitude; // 0x08(0x04)
	float PushMin; // 0x0c(0x04)
	float PushMax; // 0x10(0x04)
	float PushMinAmplitude; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_StoredStatState
// Size: 0x08 (Inherited: 0x00)
struct FS_StoredStatState {
	float StatValueOnEnter; // 0x00(0x04)
	float GameTimeSecondsOnEnter; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_StatChangeParameters
// Size: 0x1c (Inherited: 0x00)
struct FS_StatChangeParameters {
	enum class ES_StatType StatType; // 0x00(0x01)
	enum class ES_StatChangeCauseType StatChangeCauseType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ChangePerSecond; // 0x04(0x04)
	bool ChangeInPercent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	char bHasMinimumStatValue : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MinimumStatValue; // 0x10(0x04)
	char bHasMaximumStatValue : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MaximumStatValue; // 0x18(0x04)
};

// ScriptStruct Scavenger.S_DamageOverTimeState
// Size: 0x40 (Inherited: 0x00)
struct FS_DamageOverTimeState {
	char pad_0[0x8]; // 0x00(0x08)
	struct UCurveFloat* DamagePerTickCurve; // 0x08(0x08)
	char pad_10[0x20]; // 0x10(0x20)
	struct TArray<struct FS_DamageOverTimeEvent> Events; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_DamageOverTimeEvent
// Size: 0x18 (Inherited: 0x00)
struct FS_DamageOverTimeEvent {
	struct AActor* CauseActor; // 0x00(0x08)
	struct AController* InstigatorController; // 0x08(0x08)
	float PendingDamageRemaining; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_PredictedDamageInfo
// Size: 0x20 (Inherited: 0x00)
struct FS_PredictedDamageInfo {
	struct FS_DamagePredictionID PredictionID; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_Stat
// Size: 0x0c (Inherited: 0x00)
struct FS_Stat {
	float InitialValue; // 0x00(0x04)
	float CurrentValue; // 0x04(0x04)
	float MaximumValue; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_DerivedStatChange
// Size: 0x10 (Inherited: 0x00)
struct FS_DerivedStatChange {
	enum class ES_StatType SourceStat; // 0x00(0x01)
	enum class ES_StatType TargetStat; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UCurveFloat* SourceStatValueToTargetStatDeltaCurve; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_InitialCondition
// Size: 0x0c (Inherited: 0x00)
struct FS_InitialCondition {
	enum class ES_StatType Stat; // 0x00(0x01)
	enum class ES_StatChangeCauseType Cause; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ChangePerSecond; // 0x04(0x04)
	float DurationInSeconds; // 0x08(0x04)
};

// ScriptStruct Scavenger.S_InitialStatData
// Size: 0x08 (Inherited: 0x00)
struct FS_InitialStatData {
	float InitialValue; // 0x00(0x04)
	float MaximumValue; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_DamageDealtPerPlayer
// Size: 0x10 (Inherited: 0x00)
struct FS_DamageDealtPerPlayer {
	struct TArray<struct FS_PerPlayerDamage> DamageDealtPerPlayer; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_PerPlayerDamage
// Size: 0x10 (Inherited: 0x00)
struct FS_PerPlayerDamage {
	struct AS_PlayerController* PlayerController; // 0x00(0x08)
	float DamageDealt; // 0x08(0x04)
	float LastDamageTime; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_StreamerMenuEntry
// Size: 0x20 (Inherited: 0x00)
struct FS_StreamerMenuEntry {
	enum class ES_StreamerMenuEntryType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
	struct AS_StreamerAbility* Ability; // 0x18(0x08)
};

// ScriptStruct Scavenger.S_ActiveTalent
// Size: 0x28 (Inherited: 0x00)
struct FS_ActiveTalent {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Scavenger.S_TalentMetadata
// Size: 0xa8 (Inherited: 0x58)
struct FS_TalentMetadata : FS_DisplayableItemMetadata {
	enum class ES_LoadoutSlotType LoadoutSlot; // 0x58(0x01)
	enum class ES_TraitGroup TraitGroup; // 0x59(0x01)
	enum class ES_AbilityTimerIndex AbilityTimerIndex; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct FS_AbilitySet GameplayAbilities; // 0x60(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffects; // 0x70(0x10)
	struct TSoftObjectPtr<struct UTexture2D> SupportIcon; // 0x80(0x28)
};

// ScriptStruct Scavenger.S_TargetInfoManager
// Size: 0x28 (Inherited: 0x00)
struct FS_TargetInfoManager {
	struct US_TargetInfoSettings* m_targetInfoSettings; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct Scavenger.S_TeamPlayer
// Size: 0x10 (Inherited: 0x00)
struct FS_TeamPlayer {
	struct AS_PlayerController* PlayerController; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_TeammateInfoManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FS_TeammateInfoManagerTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Scavenger.S_TeammateData
// Size: 0x130 (Inherited: 0x00)
struct FS_TeammateData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FS_TeammateInfo TeammateInfo; // 0x08(0x120)
	struct US_TeammateInfoDelegateProxy* TeammateInfoDelegateProxy; // 0x128(0x08)
};

// ScriptStruct Scavenger.S_TeamData
// Size: 0x10 (Inherited: 0x00)
struct FS_TeamData {
	struct TArray<struct AS_PlayerController*> PlayerControllers; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_TechTreeMetadata
// Size: 0x88 (Inherited: 0x08)
struct FS_TechTreeMetadata : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FText NameCapitalized; // 0x28(0x18)
	enum class ES_TechTreeCategory TechTreeCategory; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FText Description; // 0x48(0x18)
	struct UTexture2D* Icon; // 0x60(0x08)
	struct UTexture2D* Background; // 0x68(0x08)
	int32_t RequiredMinimumLevel; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FDataTableRowHandle> UpgradeIds; // 0x78(0x10)
};

// ScriptStruct Scavenger.S_UpgradeMetadata
// Size: 0x88 (Inherited: 0x08)
struct FS_UpgradeMetadata : FTableRowBase {
	struct FName ID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FText NameCapitalized; // 0x28(0x18)
	struct FText Description; // 0x40(0x18)
	struct UTexture2D* Icon; // 0x58(0x08)
	int32_t Tier; // 0x60(0x04)
	int32_t Column; // 0x64(0x04)
	struct TArray<struct FName> RequiredAllTalentIds; // 0x68(0x10)
	struct TArray<struct FS_UpgradeRank> Ranks; // 0x78(0x10)
};

// ScriptStruct Scavenger.S_UpgradeRank
// Size: 0x20 (Inherited: 0x00)
struct FS_UpgradeRank {
	struct FText Description; // 0x00(0x18)
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_PartyAction
// Size: 0x50 (Inherited: 0x10)
struct FS_PartyAction : FS_TelemetryEvent {
	int32_t PartyActionIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString TargetPartyId; // 0x18(0x10)
	struct FString InviterPlayerId; // 0x28(0x10)
	struct FString InviteePlayerId; // 0x38(0x10)
	bool AmITargetPartyInviter; // 0x48(0x01)
	bool AmITargetPartyLeader; // 0x49(0x01)
	enum class ES_PartyAction action; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// ScriptStruct Scavenger.S_SocialAction
// Size: 0x30 (Inherited: 0x10)
struct FS_SocialAction : FS_TelemetryEvent {
	int32_t SocialActionIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString targetPlayerId; // 0x18(0x10)
	enum class ES_SocialAction action; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Scavenger.S_PlayerSearchComplete
// Size: 0x30 (Inherited: 0x10)
struct FS_PlayerSearchComplete : FS_TelemetryEvent {
	int32_t PlayerSearchIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString SearchString; // 0x18(0x10)
	int32_t SearchResultCount; // 0x28(0x04)
	bool Succeeded; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Scavenger.S_ClientPingResults
// Size: 0x28 (Inherited: 0x10)
struct FS_ClientPingResults : FS_TelemetryEvent {
	int32_t PingAttemptIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FS_PingResultEntry> PingResults; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_PingResultEntry
// Size: 0x18 (Inherited: 0x00)
struct FS_PingResultEntry {
	struct FString EndpointAddress; // 0x00(0x10)
	enum class ES_LobbyEndpointPingStatus Status; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MedianPingTimeSeconds; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_ClientGameNetworkingError
// Size: 0x38 (Inherited: 0x10)
struct FS_ClientGameNetworkingError : FS_TelemetryEvent {
	struct FString MapName; // 0x10(0x10)
	int32_t MatchIndex; // 0x20(0x04)
	enum class ENetworkFailure FailureType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FString ErrorDetails; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_FTUEStageUpdate
// Size: 0x20 (Inherited: 0x10)
struct FS_FTUEStageUpdate : FS_TelemetryEvent {
	struct FName FTUEStageID; // 0x10(0x08)
	enum class ES_FTUETelemetryReason ReportReason; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Scavenger.S_PlayerReportedAbuse
// Size: 0x40 (Inherited: 0x10)
struct FS_PlayerReportedAbuse : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ReportedPlayerId; // 0x18(0x10)
	struct FString ReportedPlayerDisplayName; // 0x28(0x10)
	enum class ES_PlayerReportReason ReportReason; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Scavenger.S_DropshipArrivalTelemetryEvent
// Size: 0x20 (Inherited: 0x10)
struct FS_DropshipArrivalTelemetryEvent : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	struct FVector ArrivalLocation; // 0x14(0x0c)
};

// ScriptStruct Scavenger.S_ClientPurchaseFailed
// Size: 0x20 (Inherited: 0x10)
struct FS_ClientPurchaseFailed : FS_TelemetryEvent {
	enum class ES_PurchaseRequestResult FailureReason; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName ItemId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_ClientCultureChanged
// Size: 0x30 (Inherited: 0x10)
struct FS_ClientCultureChanged : FS_TelemetryEvent {
	struct FString NewCulture; // 0x10(0x10)
	struct FString OldCulture; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_ClientChatUsage
// Size: 0xf0 (Inherited: 0x10)
struct FS_ClientChatUsage : FS_TelemetryEvent {
	struct FString LevelName; // 0x10(0x10)
	struct FString GameMode; // 0x20(0x10)
	int32_t LastClientMatchIndex; // 0x30(0x04)
	float ConnectedToVoiceChatTotalSeconds; // 0x34(0x04)
	float VoiceChatSendSeconds; // 0x38(0x04)
	float VoiceChatReceiveSeconds; // 0x3c(0x04)
	bool HasPushToTalk; // 0x40(0x01)
	bool HasMic; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float ConnectedToTextChatTotalSeconds; // 0x44(0x04)
	int32_t TextChatTotalMessagesSent; // 0x48(0x04)
	int32_t TextChatTotalMessagesReceived; // 0x4c(0x04)
	struct TMap<enum class ES_TextChatMessageTarget, int32_t> TextChatChannelMessagesSent; // 0x50(0x50)
	struct TMap<enum class ES_TextChatMessageTarget, int32_t> TextChatChannelMessagesReceived; // 0xa0(0x50)
};

// ScriptStruct Scavenger.S_ClientJoinedRemoteMatch
// Size: 0x40 (Inherited: 0x10)
struct FS_ClientJoinedRemoteMatch : FS_TelemetryEvent {
	int32_t ClientMatchIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ServerTelemetrySessionId; // 0x18(0x10)
	int32_t ServerMatchIndex; // 0x28(0x04)
	int32_t ServerPlayerIndex; // 0x2c(0x04)
	struct FString MatchID; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_NavMeshGenPerformancePercentage
// Size: 0x28 (Inherited: 0x10)
struct FS_NavMeshGenPerformancePercentage : FS_TelemetryEvent {
	int32_t StartFrameNumber; // 0x10(0x04)
	int32_t EndFrameNumber; // 0x14(0x04)
	int32_t NumSamples; // 0x18(0x04)
	int32_t FramesBuilding; // 0x1c(0x04)
	float PercentageBuildingNavMesh; // 0x20(0x04)
	float CaptureDurationGameTimeMs; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_ServerAgonesReady
// Size: 0x10 (Inherited: 0x10)
struct FS_ServerAgonesReady : FS_TelemetryEvent {
};

// ScriptStruct Scavenger.S_NavMeshDirtyAreaCleaned
// Size: 0x48 (Inherited: 0x10)
struct FS_NavMeshDirtyAreaCleaned : FS_TelemetryEvent {
	struct FBox AreaBounds; // 0x10(0x1c)
	float DurationInSeconds; // 0x2c(0x04)
	struct FString InstigatorName; // 0x30(0x10)
	enum class ES_DirtiedAreaReason DirtiedReason; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t MatchIndex; // 0x44(0x04)
};

// ScriptStruct Scavenger.S_NavMeshGenerationEnd
// Size: 0x18 (Inherited: 0x10)
struct FS_NavMeshGenerationEnd : FS_TelemetryEvent {
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Scavenger.S_NavMeshGenerationStart
// Size: 0x10 (Inherited: 0x10)
struct FS_NavMeshGenerationStart : FS_TelemetryEvent {
};

// ScriptStruct Scavenger.S_TelemetryEventStatsComponentGameplayEvent
// Size: 0x20 (Inherited: 0x10)
struct FS_TelemetryEventStatsComponentGameplayEvent : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	enum class ES_StatsState StatsState; // 0x18(0x01)
	enum class ES_StatsGameplayEvent GameplayEvent; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Scavenger.S_ClientInputUsage
// Size: 0x28 (Inherited: 0x10)
struct FS_ClientInputUsage : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	float CapturePeriodSeconds; // 0x14(0x04)
	bool IsGamepadAttached; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float GamepadInputProportion; // 0x1c(0x04)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Scavenger.S_LobbyMatchmakingAttempt
// Size: 0x48 (Inherited: 0x10)
struct FS_LobbyMatchmakingAttempt : FS_TelemetryEvent {
	int32_t LobbyConnectionIndex; // 0x10(0x04)
	int32_t MatchmakingAttemptIndex; // 0x14(0x04)
	int32_t ClientMatchIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString QueueId; // 0x20(0x10)
	struct FString QueueName; // 0x30(0x10)
	float QueueTimeSeconds; // 0x40(0x04)
	enum class ES_MatchmakingAttemptResult Result; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct Scavenger.S_LobbyConnectionStateChanged
// Size: 0x20 (Inherited: 0x10)
struct FS_LobbyConnectionStateChanged : FS_TelemetryEvent {
	int32_t LobbyConnectionIndex; // 0x10(0x04)
	int32_t StateChangeIndex; // 0x14(0x04)
	float PreviousStateTimeSeconds; // 0x18(0x04)
	enum class ES_LobbyConnectionState PreviousState; // 0x1c(0x01)
	enum class ES_LobbyConnectionState NewState; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Scavenger.S_LobbyConnectionAttempt
// Size: 0x28 (Inherited: 0x10)
struct FS_LobbyConnectionAttempt : FS_TelemetryEvent {
	int32_t LobbyConnectionIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString LobbyHost; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_WeaponUsageSummary
// Size: 0x70 (Inherited: 0x10)
struct FS_WeaponUsageSummary : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	float CapturePeriodSeconds; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<struct FName, struct FS_WeaponUsage> WeaponUsage; // 0x20(0x50)
};

// ScriptStruct Scavenger.S_WeaponUsage
// Size: 0x80 (Inherited: 0x00)
struct FS_WeaponUsage {
	struct FString ItemName; // 0x00(0x10)
	int32_t NumEquipped; // 0x10(0x04)
	float TimeEquippedSeconds; // 0x14(0x04)
	float TimeUnholsteredSeconds; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> AttackCount; // 0x20(0x10)
	struct TArray<int32_t> HitCount; // 0x30(0x10)
	struct TArray<int32_t> CritCount; // 0x40(0x10)
	struct TArray<float> HitDamage; // 0x50(0x10)
	struct TArray<int32_t> CritDamage; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
};

// ScriptStruct Scavenger.S_InMatchClientFeatureEngagementSummary
// Size: 0x68 (Inherited: 0x10)
struct FS_InMatchClientFeatureEngagementSummary : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<enum class ES_InMatchClientInputFeature, struct FS_InMatchClientFeature> EngagementData; // 0x18(0x50)
};

// ScriptStruct Scavenger.S_InMatchClientFeature
// Size: 0x08 (Inherited: 0x00)
struct FS_InMatchClientFeature {
	float FirstUsedAtSeconds; // 0x00(0x04)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_HarvestCompleted
// Size: 0x58 (Inherited: 0x10)
struct FS_HarvestCompleted : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	int32_t InitiatingPlayerLevel; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString EncounterName; // 0x20(0x10)
	struct FString EncounterType; // 0x30(0x10)
	struct FVector EncounterWorldLocation; // 0x40(0x0c)
	enum class ES_HarvestResult HarvestResult; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float TimeToHarvestCompletionSeconds; // 0x50(0x04)
	int32_t HarvestShardYield; // 0x54(0x04)
};

// ScriptStruct Scavenger.S_PlayerStatChangedByVolume
// Size: 0x48 (Inherited: 0x10)
struct FS_PlayerStatChangedByVolume : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	enum class ES_StatType StatType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString VolumeName; // 0x20(0x10)
	struct FVector VolumeWorldLocation; // 0x30(0x0c)
	float ChangeAmount; // 0x3c(0x04)
	float TimeSpentInVolumeSeconds; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Scavenger.S_ClientQualitySettings
// Size: 0x60 (Inherited: 0x10)
struct FS_ClientQualitySettings : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	bool CurrentlyInMatch; // 0x14(0x01)
	bool AreDefaultSettings; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FIntPoint ScreenResolution; // 0x18(0x08)
	struct FString FullscreenMode; // 0x20(0x10)
	bool IsVSyncEnabled; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t ViewDistanceQuality; // 0x34(0x04)
	int32_t ShadowDistanceQuality; // 0x38(0x04)
	int32_t AntiAliasingQuality; // 0x3c(0x04)
	int32_t TextureQuality; // 0x40(0x04)
	int32_t VisualEffectQuality; // 0x44(0x04)
	int32_t PostProcessingQuality; // 0x48(0x04)
	int32_t FoliageQuality; // 0x4c(0x04)
	float LastCPUBenchmarkResult; // 0x50(0x04)
	float LastGPUBenchmarkResult; // 0x54(0x04)
	int32_t ResolutionScale; // 0x58(0x04)
	enum class ES_SupportedRHIType PreferredRHIType; // 0x5c(0x01)
	enum class ES_ResolutionScalingMode ResolutionScalingMode; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
};

// ScriptStruct Scavenger.S_ClientCascadeLoadFinished
// Size: 0x28 (Inherited: 0x10)
struct FS_ClientCascadeLoadFinished : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	struct FVector ViewTargetLocation; // 0x14(0x0c)
	float LoadTimeSeconds; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_VoiceChatChannelUpdated
// Size: 0x40 (Inherited: 0x10)
struct FS_VoiceChatChannelUpdated : FS_TelemetryEvent {
	struct FString ChannelName; // 0x10(0x10)
	int32_t ChannelType; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString PlayerName; // 0x28(0x10)
	int32_t PlayerCount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Scavenger.S_TutorialExited
// Size: 0x20 (Inherited: 0x10)
struct FS_TutorialExited : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	bool WasCompleted; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float TutorialDurationSeconds; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_DojoMatchPhaseChanged
// Size: 0x60 (Inherited: 0x10)
struct FS_DojoMatchPhaseChanged : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MapName; // 0x18(0x10)
	struct FString DojoStateMachineId; // 0x28(0x10)
	struct FString PreviousPhaseName; // 0x38(0x10)
	float PreviousPhaseDurationSeconds; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString NewPhaseName; // 0x50(0x10)
};

// ScriptStruct Scavenger.S_MatchPhaseChanged
// Size: 0x60 (Inherited: 0x10)
struct FS_MatchPhaseChanged : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PreviousPhaseName; // 0x18(0x10)
	float PreviousPhaseDurationSeconds; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString NewPhaseName; // 0x30(0x10)
	bool IsInitialValue; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString ChangeReason; // 0x48(0x10)
	float ChangeReasonDetail; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Scavenger.S_TrainingVideoWatched
// Size: 0x18 (Inherited: 0x10)
struct FS_TrainingVideoWatched : FS_TelemetryEvent {
	int32_t SecondsWatched; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_MessagePromptReceived
// Size: 0x38 (Inherited: 0x10)
struct FS_MessagePromptReceived : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MessageId; // 0x18(0x10)
	struct FString PromptMode; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_CraftingItemQueued
// Size: 0x38 (Inherited: 0x10)
struct FS_CraftingItemQueued : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	struct FString RecipeId; // 0x18(0x10)
	float TimeToCraft; // 0x28(0x04)
	int32_t QueueIndex; // 0x2c(0x04)
	bool HasCorrectResourceQuantity; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Scavenger.S_InventoryLedger
// Size: 0x30 (Inherited: 0x10)
struct FS_InventoryLedger : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	int32_t InventoryLedgerIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FS_InventoryLedgerItem> Items; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_InventoryLedgerItem
// Size: 0x20 (Inherited: 0x00)
struct FS_InventoryLedgerItem {
	struct FString ItemName; // 0x00(0x10)
	struct TArray<struct FS_InventoryLedgerEntry> Entries; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_InventoryLedgerEntry
// Size: 0x20 (Inherited: 0x00)
struct FS_InventoryLedgerEntry {
	bool IsCredit; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Reason; // 0x08(0x10)
	int32_t Quantity; // 0x18(0x04)
	int32_t Count; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_DebugLogTelemetryEvent
// Size: 0x38 (Inherited: 0x10)
struct FS_DebugLogTelemetryEvent : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	struct FString Tag; // 0x18(0x10)
	struct FString Text; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_GameModeEventTelemetry
// Size: 0x58 (Inherited: 0x10)
struct FS_GameModeEventTelemetry : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	float EventTimeStamp; // 0x14(0x04)
	struct FString EventType; // 0x18(0x10)
	struct FString PlayerId; // 0x28(0x10)
	int32_t PlayerIndex; // 0x38(0x04)
	int32_t TeamIndex; // 0x3c(0x04)
	float FloatData; // 0x40(0x04)
	int32_t IntData; // 0x44(0x04)
	struct FString NameData; // 0x48(0x10)
};

// ScriptStruct Scavenger.S_EndOfGameReportCard
// Size: 0x130 (Inherited: 0x10)
struct FS_EndOfGameReportCard : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	struct FS_GameReportCardForPlayer reportCard; // 0x18(0x118)
};

// ScriptStruct Scavenger.S_EndOfGameScoreCard
// Size: 0x78 (Inherited: 0x10)
struct FS_EndOfGameScoreCard : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	struct FS_GameScoreCardForPlayer Scorecard; // 0x18(0x60)
};

// ScriptStruct Scavenger.S_BugReport_Temp
// Size: 0x38 (Inherited: 0x10)
struct FS_BugReport_Temp : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	bool CurrentlyInMatch; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString Title; // 0x18(0x10)
	struct FString Description; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_DetailedRatingReport_Temp
// Size: 0x40 (Inherited: 0x10)
struct FS_DetailedRatingReport_Temp : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	bool CurrentlyInMatch; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString Context; // 0x18(0x10)
	struct FString Question; // 0x28(0x10)
	int32_t Rating; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Scavenger.S_DetailedFeedbackReport_Temp
// Size: 0x48 (Inherited: 0x10)
struct FS_DetailedFeedbackReport_Temp : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	bool CurrentlyInMatch; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString Context; // 0x18(0x10)
	struct FString Question; // 0x28(0x10)
	struct FString response; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_EulaResult
// Size: 0x18 (Inherited: 0x10)
struct FS_EulaResult : FS_TelemetryEvent {
	bool EulaWasAccepted; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Scavenger.S_TeamEliminated
// Size: 0x20 (Inherited: 0x10)
struct FS_TeamEliminated : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t TeamIndex; // 0x14(0x04)
	float TeamAliveSeconds; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_PlayerDownedOrKilled
// Size: 0xc8 (Inherited: 0x10)
struct FS_PlayerDownedOrKilled : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	struct FString NewState; // 0x18(0x10)
	int32_t LastDamageInstigatorPlayerIndex; // 0x28(0x04)
	int32_t LastDamageInstigatorAIIndex; // 0x2c(0x04)
	struct FVector LastDamageInstigatorLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString LastDamageType; // 0x40(0x10)
	struct FVector WorldLocation; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString NamedLocation; // 0x60(0x10)
	int32_t PlayerLevel; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TMap<struct FString, int32_t> PlayerInventory; // 0x78(0x50)
};

// ScriptStruct Scavenger.S_AILeftNavmesh
// Size: 0x58 (Inherited: 0x10)
struct FS_AILeftNavmesh : FS_TelemetryEvent {
	int32_t AIIndex; // 0x10(0x04)
	int32_t MatchIndex; // 0x14(0x04)
	struct FString OverlordName; // 0x18(0x10)
	struct FString AIName; // 0x28(0x10)
	struct FString AIClassName; // 0x38(0x10)
	struct FVector Location; // 0x48(0x0c)
	bool OccuredOnSpawn; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct Scavenger.S_AIDiedOrKilled
// Size: 0x50 (Inherited: 0x10)
struct FS_AIDiedOrKilled : FS_TelemetryEvent {
	int32_t AIIndex; // 0x10(0x04)
	int32_t MatchIndex; // 0x14(0x04)
	struct FString CauseOfDeath; // 0x18(0x10)
	int32_t LastDamageInstigatorPlayerIndex; // 0x28(0x04)
	int32_t LastDamageInstigatorAIIndex; // 0x2c(0x04)
	struct FString LastDamageType; // 0x30(0x10)
	struct FVector DeathLocation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Scavenger.S_AISpawned
// Size: 0x58 (Inherited: 0x10)
struct FS_AISpawned : FS_TelemetryEvent {
	int32_t AIIndex; // 0x10(0x04)
	int32_t MatchIndex; // 0x14(0x04)
	struct FString OverlordName; // 0x18(0x10)
	struct FString AIName; // 0x28(0x10)
	struct FString AIClassName; // 0x38(0x10)
	struct FVector SpawnLocation; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Scavenger.S_OverlordLocationInfo
// Size: 0x38 (Inherited: 0x10)
struct FS_OverlordLocationInfo : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString OverlordName; // 0x18(0x10)
	struct TArray<struct FS_AILocationInfo> AILocationInfo; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_AILocationInfo
// Size: 0x10 (Inherited: 0x00)
struct FS_AILocationInfo {
	int32_t AIIndex; // 0x00(0x04)
	struct FVector WorldLocation; // 0x04(0x0c)
};

// ScriptStruct Scavenger.S_PlayerLeveledUp
// Size: 0x28 (Inherited: 0x10)
struct FS_PlayerLeveledUp : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	int32_t NewLevel; // 0x18(0x04)
	int32_t PlayerXp; // 0x1c(0x04)
	float PreviousLevelTimeSeconds; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_TeamLocationInfo
// Size: 0x38 (Inherited: 0x10)
struct FS_TeamLocationInfo : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t TeamIndex; // 0x14(0x04)
	struct TArray<struct FS_PlayerLocationInfo> PlayerLocationInfo; // 0x18(0x10)
	struct TArray<int32_t> TeamSquadSizes; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_PlayerLocationInfo
// Size: 0x30 (Inherited: 0x00)
struct FS_PlayerLocationInfo {
	int32_t PlayerIndex; // 0x00(0x04)
	int32_t TeamSquadIndex; // 0x04(0x04)
	struct FVector WorldLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString NamedLocation; // 0x18(0x10)
	bool IsInVehicle; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Scavenger.S_PlayerLeftMatch
// Size: 0x30 (Inherited: 0x10)
struct FS_PlayerLeftMatch : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	enum class ES_PlayerLeftMatchPlayerState PlayerState; // 0x18(0x01)
	enum class ES_PlayerLeftMatchReason Reason; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString Details; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_PlayerSpawned
// Size: 0x38 (Inherited: 0x10)
struct FS_PlayerSpawned : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	int32_t PlayerIndex; // 0x14(0x04)
	int32_t SpawnIndex; // 0x18(0x04)
	float RespawnTimeSeconds; // 0x1c(0x04)
	struct FVector SpawnLocation; // 0x20(0x0c)
	float DistanceToNearestTeammate; // 0x2c(0x04)
	float DistanceToNearestEnemyPlayer; // 0x30(0x04)
	float DistanceToNearestHostileAI; // 0x34(0x04)
};

// ScriptStruct Scavenger.S_PlayerJoinedMatch
// Size: 0xe8 (Inherited: 0x10)
struct FS_PlayerJoinedMatch : FS_TelemetryEvent {
	struct FString ClientTelemetrySessionId; // 0x10(0x10)
	int32_t ClientMatchIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString AccountId; // 0x28(0x10)
	int32_t PlayerIndex; // 0x38(0x04)
	int32_t MatchIndex; // 0x3c(0x04)
	int32_t TeamIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString CharacterClass; // 0x48(0x10)
	int32_t CharacterLevel; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TMap<struct FString, struct FS_CharacterLoadoutSlotForTelemetry> Loadout; // 0x60(0x50)
	struct FString SpawnLocationName; // 0xb0(0x10)
	struct FVector SpawnLocation; // 0xc0(0x0c)
	enum class ES_PlayerTelemetryType PlayerTelemetryType; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	int32_t DraftOrder; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString PartyId; // 0xd8(0x10)
};

// ScriptStruct Scavenger.S_CharacterLoadoutSlotForTelemetry
// Size: 0x10 (Inherited: 0x00)
struct FS_CharacterLoadoutSlotForTelemetry {
	struct TArray<struct FString> ItemIds; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_MatchEnd
// Size: 0x20 (Inherited: 0x10)
struct FS_MatchEnd : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	float TotalMatchDurationSeconds; // 0x14(0x04)
	enum class ES_MatchEndReason EndReason; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Scavenger.S_MatchStart
// Size: 0x18 (Inherited: 0x10)
struct FS_MatchStart : FS_TelemetryEvent {
	int32_t MatchIndex; // 0x10(0x04)
	float GameTimeElapsedSeconds; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_OffloadedMatchCreated
// Size: 0x38 (Inherited: 0x10)
struct FS_OffloadedMatchCreated : FS_TelemetryEvent {
	struct FString WorkerTelemetrySessionId; // 0x10(0x10)
	int32_t MatchIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString MatchID; // 0x28(0x10)
};

// ScriptStruct Scavenger.S_MatchCreated
// Size: 0x48 (Inherited: 0x10)
struct FS_MatchCreated : FS_TelemetryEvent {
	struct FString MatchID; // 0x10(0x10)
	int32_t MatchIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString GameModeName; // 0x28(0x10)
	struct FString LevelName; // 0x38(0x10)
};

// ScriptStruct Scavenger.S_TelemetryDeviceInfo
// Size: 0x100 (Inherited: 0x10)
struct FS_TelemetryDeviceInfo : FS_TelemetryEvent {
	struct FString Platform; // 0x10(0x10)
	struct FString OsVersion; // 0x20(0x10)
	struct FString OsSubVersion; // 0x30(0x10)
	int32_t OsBits; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString OsLanguage; // 0x48(0x10)
	struct FString RenderingAPI; // 0x58(0x10)
	int32_t HardDriveGb; // 0x68(0x04)
	int32_t MemoryMb; // 0x6c(0x04)
	float CpuPerformanceIndex; // 0x70(0x04)
	float GpuPerformanceIndex; // 0x74(0x04)
	float RamPerformanceIndex; // 0x78(0x04)
	bool IsLaptopComputer; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	int32_t CpuCount; // 0x80(0x04)
	float CpuClockGhz; // 0x84(0x04)
	struct FString CpuBrand; // 0x88(0x10)
	struct FString CpuNameString; // 0x98(0x10)
	int32_t DisplayCount; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FString> Displays; // 0xb0(0x10)
	struct FString RhiName; // 0xc0(0x10)
	struct FString RhiInternalDriverVersion; // 0xd0(0x10)
	struct FString RhiUserDriverVersion; // 0xe0(0x10)
	struct FString RhiUserDriverDate; // 0xf0(0x10)
};

// ScriptStruct Scavenger.S_TelemetryMemoryReport
// Size: 0x20 (Inherited: 0x10)
struct FS_TelemetryMemoryReport : FS_TelemetryEvent {
	int32_t FrameNumber; // 0x10(0x04)
	float PhysicalMemoryUsed; // 0x14(0x04)
	int32_t MatchIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_TelemetryPerformanceHitches
// Size: 0x28 (Inherited: 0x10)
struct FS_TelemetryPerformanceHitches : FS_TelemetryEvent {
	struct TArray<struct FS_TelemetryHitch> Hitches; // 0x10(0x10)
	bool HitchStorageExceeded; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t MatchIndex; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_TelemetryHitch
// Size: 0x0c (Inherited: 0x00)
struct FS_TelemetryHitch {
	int32_t FrameNumber; // 0x00(0x04)
	float FrameTime; // 0x04(0x04)
	enum class FS_TelemetryHitchEnum HitchType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Scavenger.S_TelemetryPerformanceHistogramFlyCamera
// Size: 0xc0 (Inherited: 0x10)
struct FS_TelemetryPerformanceHistogramFlyCamera : FS_TelemetryEvent {
	struct FString CounterName; // 0x10(0x10)
	int32_t StartFrameNumber; // 0x20(0x04)
	int32_t EndFrameNumber; // 0x24(0x04)
	int32_t NumSamples; // 0x28(0x04)
	float CaptureDurationGameTimeMs; // 0x2c(0x04)
	float BucketSize; // 0x30(0x04)
	float MinBucketValue; // 0x34(0x04)
	float MaxBucketValue; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TMap<float, int32_t> SampleHistogram; // 0x40(0x50)
	struct FVector CameraLocation; // 0x90(0x0c)
	struct FVector CameraDirection; // 0x9c(0x0c)
	float StepDistance; // 0xa8(0x04)
	float TimeBeforeTestStartSec; // 0xac(0x04)
	float TimeAfterTeleportSec; // 0xb0(0x04)
	float TimeAfterRotationSec; // 0xb4(0x04)
	float CameraTerrainHeight; // 0xb8(0x04)
	bool WaitForShaderCompilation; // 0xbc(0x01)
	bool WaitForLevelLoaded; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
};

// ScriptStruct Scavenger.S_TelemetryPerformanceHistogram
// Size: 0x98 (Inherited: 0x10)
struct FS_TelemetryPerformanceHistogram : FS_TelemetryEvent {
	struct FString CounterName; // 0x10(0x10)
	int32_t StartFrameNumber; // 0x20(0x04)
	int32_t EndFrameNumber; // 0x24(0x04)
	int32_t NumSamples; // 0x28(0x04)
	float CaptureDurationGameTimeMs; // 0x2c(0x04)
	float BucketSize; // 0x30(0x04)
	float MinBucketValue; // 0x34(0x04)
	float MaxBucketValue; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TMap<float, int32_t> SampleHistogram; // 0x40(0x50)
	int32_t MatchIndex; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Scavenger.S_TelemetryGameStateObjectCount
// Size: 0x28 (Inherited: 0x10)
struct FS_TelemetryGameStateObjectCount : FS_TelemetryEvent {
	int32_t FrameNumber; // 0x10(0x04)
	int32_t TotalActorCount; // 0x14(0x04)
	int32_t TotalControllerCount; // 0x18(0x04)
	int32_t TotalPlayerControllerCount; // 0x1c(0x04)
	int32_t TotalAiControllerCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_TelemetrySessionStart
// Size: 0xc0 (Inherited: 0x10)
struct FS_TelemetrySessionStart : FS_TelemetryEvent {
	struct FString PlatformId; // 0x10(0x10)
	struct FString MachineName; // 0x20(0x10)
	int32_t Changelist; // 0x30(0x04)
	bool IsServer; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FString DeviceID; // 0x38(0x10)
	struct FString CommandLine; // 0x48(0x10)
	struct FString UnrealNetworkVersion; // 0x58(0x10)
	struct FString BuildType; // 0x68(0x10)
	struct FString ServerPodId; // 0x78(0x10)
	struct FString ServerNodeName; // 0x88(0x10)
	struct FString clusterName; // 0x98(0x10)
	struct FString ContainerName; // 0xa8(0x10)
	int32_t TimezoneUtcOffsetMinutes; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Scavenger.S_MatchTelemetryIds
// Size: 0x28 (Inherited: 0x00)
struct FS_MatchTelemetryIds {
	struct FString WorkerTelemetrySessionId; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	int32_t MatchIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Scavenger.S_ThreatLevelMidnight
// Size: 0x1c (Inherited: 0x00)
struct FS_ThreatLevelMidnight {
	float CharacterThreat; // 0x00(0x04)
	float HealthThreat; // 0x04(0x04)
	float WeaponThreat; // 0x08(0x04)
	float MinEffectiveWeaponRange; // 0x0c(0x04)
	float MaxEffectiveWeaponRange; // 0x10(0x04)
	float GlobalThreat; // 0x14(0x04)
	bool bDowned; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Scavenger.S_InStormQualitySettings
// Size: 0x14 (Inherited: 0x00)
struct FS_InStormQualitySettings {
	int32_t ShadowQuality; // 0x00(0x04)
	int32_t MaxShadowCascades; // 0x04(0x04)
	float ViewDistanceScale; // 0x08(0x04)
	int32_t LensFlareQuality; // 0x0c(0x04)
	int32_t AmbientOcclusionQuality; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_StormClientData
// Size: 0x198 (Inherited: 0x00)
struct FS_StormClientData {
	char pad_0[0x90]; // 0x00(0x90)
	struct US_StormMeshComponent* StaticMeshComponentOccluder; // 0x90(0x08)
	struct US_StormMeshComponent* StaticMeshComponentFunnelInner[0x2]; // 0x98(0x10)
	struct US_StormMeshComponent* StaticMeshComponentFunnelMiddle[0x2]; // 0xa8(0x10)
	struct US_StormMeshComponent* StaticMeshComponentFunnelOuter[0x2]; // 0xb8(0x10)
	struct US_StormMeshComponent* StaticMeshComponentMistInner; // 0xc8(0x08)
	struct US_StormMeshComponent* StaticMeshComponentMistOuter; // 0xd0(0x08)
	struct US_StormMeshComponent* StaticMeshComponentFinProfileLeft; // 0xd8(0x08)
	struct US_StormMeshComponent* StaticMeshComponentFinProfileRight; // 0xe0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstOccluder; // 0xe8(0x08)
	struct UMaterialInstanceDynamic* MaterialInstMeshInner; // 0xf0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstMeshMiddle; // 0xf8(0x08)
	struct UMaterialInstanceDynamic* MaterialInstMeshOuter; // 0x100(0x08)
	struct UMaterialInstanceDynamic* MaterialInstMistInner; // 0x108(0x08)
	struct UMaterialInstanceDynamic* MaterialInstMistOuter; // 0x110(0x08)
	struct UMaterialInstanceDynamic* MaterialInstFinProfileLeft; // 0x118(0x08)
	struct UMaterialInstanceDynamic* MaterialInstFinProfileRight; // 0x120(0x08)
	struct UParticleSystem* ParticleSystemDebris; // 0x128(0x08)
	struct UParticleSystem* ParticleSystemBurst; // 0x130(0x08)
	struct UParticleSystemComponent* ParticleSystemComponentDebris; // 0x138(0x08)
	char pad_140[0x28]; // 0x140(0x28)
	struct UParticleSystem* ParticleSystemPreamble; // 0x168(0x08)
	struct UParticleSystemComponent* ParticleSystemComponentPreamble; // 0x170(0x08)
	struct UParticleSystem* ParticleSystemGrowth; // 0x178(0x08)
	struct UParticleSystemComponent* ParticleSystemComponentGrowth; // 0x180(0x08)
	struct UParticleSystem* ParticleSystemShrink; // 0x188(0x08)
	struct UParticleSystemComponent* ParticleSystemComponentShrink; // 0x190(0x08)
};

// ScriptStruct Scavenger.S_CollapsingStormOccluderSegment
// Size: 0x50 (Inherited: 0x00)
struct FS_CollapsingStormOccluderSegment {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct Scavenger.S_CollapsingStormSegment
// Size: 0x28 (Inherited: 0x00)
struct FS_CollapsingStormSegment {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x00(0x08)
	struct UParticleSystemComponent* AmbientParticleSystemComponent; // 0x08(0x08)
	struct UParticleSystemComponent* RollingParticleSystemComponent; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_CollapsingStormData
// Size: 0x88 (Inherited: 0x00)
struct FS_CollapsingStormData {
	struct FVector WorldLocationRealtime; // 0x00(0x0c)
	struct FVector WorldLocationReplicated; // 0x0c(0x0c)
	struct FVector ClientWorldLocation; // 0x18(0x0c)
	struct FVector LastKnownServerWorldLocation; // 0x24(0x0c)
	struct FVector NextWorldLocation; // 0x30(0x0c)
	float WorldLocationTransitionDurationRealtime; // 0x3c(0x04)
	float WorldLocationTransitionDurationReplicated; // 0x40(0x04)
	float RadiusRealtime; // 0x44(0x04)
	float RadiusReplicated; // 0x48(0x04)
	float LastKnownServerRadius; // 0x4c(0x04)
	float ClientRadius; // 0x50(0x04)
	float NextRadius; // 0x54(0x04)
	float RadiusTransitionPerSecondRealtime; // 0x58(0x04)
	float RadiusTransitionPerSecondReplicated; // 0x5c(0x04)
	struct FVector RadiusMaxMinFraction; // 0x60(0x0c)
	struct FVector OutlineColor; // 0x6c(0x0c)
	float ReplicationTimer; // 0x78(0x04)
	bool bTransformDirty; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	int32_t NumActiveSegments; // 0x80(0x04)
	int32_t SegmentSampleIndex; // 0x84(0x04)
};

// ScriptStruct Scavenger.S_CollapsingStormIncludeLocation
// Size: 0x14 (Inherited: 0x00)
struct FS_CollapsingStormIncludeLocation {
	struct FVector Location; // 0x00(0x0c)
	float SafeRadius; // 0x0c(0x04)
	float Weight; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_BorderStormData
// Size: 0x80 (Inherited: 0x00)
struct FS_BorderStormData {
	struct FVector WorldLocationRealtime; // 0x00(0x0c)
	struct FVector WorldLocationReplicated; // 0x0c(0x0c)
	struct FVector ClientWorldLocation; // 0x18(0x0c)
	struct FVector LastKnownServerWorldLocation; // 0x24(0x0c)
	struct FVector NextWorldLocation; // 0x30(0x0c)
	float WorldLocationTransitionDurationRealtime; // 0x3c(0x04)
	float WorldLocationTransitionDurationReplicated; // 0x40(0x04)
	struct FVector2D ExtentsRealtime; // 0x44(0x08)
	struct FVector2D ExtentsReplicated; // 0x4c(0x08)
	struct FVector2D LastKnownServerExtents; // 0x54(0x08)
	struct FVector2D ClientExtents; // 0x5c(0x08)
	struct FVector2D NextExtents; // 0x64(0x08)
	struct FVector2D ExtentsTransitionPerSecondRealtime; // 0x6c(0x08)
	struct FVector2D ExtentsTransitionPerSecondReplicated; // 0x74(0x08)
	float ReplicationTimer; // 0x7c(0x04)
};

// ScriptStruct Scavenger.S_TryActionResult
// Size: 0x08 (Inherited: 0x00)
struct FS_TryActionResult {
	struct FS_ActionHandle m_handle; // 0x00(0x04)
	enum class ES_ActionStatus m_actionStatus; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Scavenger.S_FilteredResearchOptions
// Size: 0x60 (Inherited: 0x00)
struct FS_FilteredResearchOptions {
	struct TArray<struct FS_OnlineItemMetadata> FilteredMetadata; // 0x00(0x10)
	char pad_10[0x50]; // 0x10(0x50)
};

// ScriptStruct Scavenger.S_TalentOptions
// Size: 0xb0 (Inherited: 0x60)
struct FS_TalentOptions : FS_FilteredResearchOptions {
	char pad_60[0x50]; // 0x60(0x50)
};

// ScriptStruct Scavenger.S_SpawnableHUD
// Size: 0x10 (Inherited: 0x00)
struct FS_SpawnableHUD {
	struct US_UMGHUD* HUD; // 0x00(0x08)
	bool ShouldShowOnSpawn; // 0x08(0x01)
	enum class ES_InGameZOrderCategory ZOrder; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Scavenger.S_HUDMessage
// Size: 0x20 (Inherited: 0x00)
struct FS_HUDMessage {
	struct FText Message; // 0x00(0x18)
	float AgeInSeconds; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Scavenger.S_SpawnableWidget
// Size: 0x30 (Inherited: 0x00)
struct FS_SpawnableWidget {
	struct US_WidgetMinimal* Widget; // 0x00(0x08)
	bool Override_UsePositioningData; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FS_WidgetPositioningData WidgetPositioning; // 0x0c(0x20)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_WidgetPositioningData
// Size: 0x20 (Inherited: 0x00)
struct FS_WidgetPositioningData {
	struct FVector2D Position; // 0x00(0x08)
	struct FVector2D Alignment; // 0x08(0x08)
	struct FAnchors Anchors; // 0x10(0x10)
};

// ScriptStruct Scavenger.S_NavigationInputSettings
// Size: 0x40 (Inherited: 0x08)
struct FS_NavigationInputSettings : FTableRowBase {
	SoftClassProperty WidgetClass; // 0x08(0x28)
	struct TArray<struct FDataTableRowHandle> AcceptedInputs; // 0x30(0x10)
};

// ScriptStruct Scavenger.S_MessagePromptArguments
// Size: 0x80 (Inherited: 0x00)
struct FS_MessagePromptArguments {
	struct TMap<struct FString, struct FText> MessagePromptArguments; // 0x00(0x50)
	struct FText AcceptText; // 0x50(0x18)
	struct FText RejectText; // 0x68(0x18)
};

// ScriptStruct Scavenger.S_MessagePrompt
// Size: 0x58 (Inherited: 0x08)
struct FS_MessagePrompt : FTableRowBase {
	enum class ES_MessagePromptMode PromptMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Body; // 0x28(0x18)
	struct FText StatusCode; // 0x40(0x18)
};

// ScriptStruct Scavenger.S_RecipeLabelRow
// Size: 0x30 (Inherited: 0x08)
struct FS_RecipeLabelRow : FTableRowBase {
	struct FString LabelId; // 0x08(0x10)
	struct FText LocalizedLabel; // 0x18(0x18)
};

// ScriptStruct Scavenger.S_NewTierIdentification
// Size: 0x58 (Inherited: 0x00)
struct FS_NewTierIdentification {
	struct FS_TonedInterfaceColors TonedTierColorHandles; // 0x00(0x30)
	bool NameplateShowName; // 0x30(0x01)
	enum class ES_NamePlateHealthBarBehavior NameplateShowHealthBar; // 0x31(0x01)
	bool NameplateShowArmor; // 0x32(0x01)
	enum class ES_ItemRarity Rarity; // 0x33(0x01)
	enum class ES_LocationDifficultyTier LocationDifficultyTier; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FInt32Range ArmorRange; // 0x38(0x10)
	struct FInt32Range EnemyRankRange; // 0x48(0x10)
};

// ScriptStruct Scavenger.S_TonedInterfaceColors
// Size: 0x30 (Inherited: 0x00)
struct FS_TonedInterfaceColors {
	struct FDataTableRowHandle HighlightInterfaceColor; // 0x00(0x10)
	struct FDataTableRowHandle MidtoneInterfaceColor; // 0x10(0x10)
	struct FDataTableRowHandle ShadowInterfaceColor; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_InterfaceColorRow
// Size: 0x48 (Inherited: 0x08)
struct FS_InterfaceColorRow : FTableRowBase {
	struct FLinearColor Colors[0x4]; // 0x08(0x40)
};

// ScriptStruct Scavenger.S_ParabolicHUDEffectData
// Size: 0x10 (Inherited: 0x00)
struct FS_ParabolicHUDEffectData {
	float DistortionScalar; // 0x00(0x04)
	float CenterWidth; // 0x04(0x04)
	struct FVector2D HudOffset; // 0x08(0x08)
};

// ScriptStruct Scavenger.S_TeamMiniscoreboardStatus
// Size: 0x30 (Inherited: 0x00)
struct FS_TeamMiniscoreboardStatus {
	bool IsAlive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TeamIndex; // 0x04(0x04)
	struct FText TeamName; // 0x08(0x18)
	int32_t TeamScore; // 0x20(0x04)
	int32_t TeamShardsBanked; // 0x24(0x04)
	int32_t TeanShardsHeld; // 0x28(0x04)
	float TeamScoreAsPercentageOfWinningScore; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_WidgetData
// Size: 0x28 (Inherited: 0x00)
struct FS_WidgetData {
	struct UUserWidget* Widget; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct Scavenger.S_ProgressBarHandleData
// Size: 0x98 (Inherited: 0x00)
struct FS_ProgressBarHandleData {
	struct US_WidgetCommonProgressBarHandle* Class; // 0x00(0x08)
	float StartingValue; // 0x08(0x04)
	enum class EOrientation HandleOrientation; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FSlateBrush Style; // 0x10(0x88)
};

// ScriptStruct Scavenger.S_ProgressBarData
// Size: 0x1c8 (Inherited: 0x00)
struct FS_ProgressBarData {
	struct FName Name; // 0x00(0x08)
	struct FProgressBarStyle Style; // 0x08(0x1a0)
	struct FMargin Padding; // 0x1a8(0x10)
	float StartingPercent; // 0x1b8(0x04)
	enum class EProgressBarFillType BarFillType; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	struct US_UMGProgressBar* ProgressBar; // 0x1c0(0x08)
};

// ScriptStruct Scavenger.S_RichTextMetadata
// Size: 0x18 (Inherited: 0x08)
struct FS_RichTextMetadata : FTableRowBase {
	struct FString RichTextIdentifier; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_ButtonStateStyle
// Size: 0xc48 (Inherited: 0x00)
struct FS_ButtonStateStyle {
	enum class ES_ButtonVisibility Visibility; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FS_ButtonStyle DefaultButtonStyle; // 0x08(0x200)
	struct FS_ButtonStyle HoveredButtonStyle; // 0x208(0x200)
	struct FS_ButtonStyle PressedButtonStyle; // 0x408(0x200)
	struct FS_ButtonStyle SelectedButtonStyle; // 0x608(0x200)
	struct FS_ButtonStyle SelectedHoveredButtonStyle; // 0x808(0x200)
	struct FS_ButtonStyle SelectedPressedButtonStyle; // 0xa08(0x200)
	struct UAkAudioEvent* HoveredAkEvent; // 0xc08(0x08)
	struct UAkAudioEvent* UnhoveredAkEvent; // 0xc10(0x08)
	struct UAkAudioEvent* ClickedAkEvent; // 0xc18(0x08)
	struct UAkAudioEvent* ReleasedAkEvent; // 0xc20(0x08)
	struct FMargin NormalPadding; // 0xc28(0x10)
	struct FMargin PressedPadding; // 0xc38(0x10)
};

// ScriptStruct Scavenger.S_ButtonStyle
// Size: 0x200 (Inherited: 0x00)
struct FS_ButtonStyle {
	struct FSlateBrush ButtonStyle; // 0x00(0x88)
	struct FSlateBrush BorderStyle; // 0x88(0x88)
	struct FMargin BorderMargin; // 0x110(0x10)
	float RenderOpacity; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct UDataTable* TextStyleSet; // 0x128(0x08)
	struct FText richTextLabel; // 0x130(0x18)
	bool bOverridePaddingValue; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	struct FMargin TextPaddingOverride; // 0x14c(0x10)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FSlateBrush ButtonImage; // 0x160(0x88)
	struct FMargin ButtonImagePadding; // 0x1e8(0x10)
	enum class EHorizontalAlignment ButtonImageHorizontalAlignment; // 0x1f8(0x01)
	enum class EVerticalAlignment ButtonImageVerticalAlignment; // 0x1f9(0x01)
	char pad_1FA[0x6]; // 0x1fa(0x06)
};

// ScriptStruct Scavenger.S_UseItemAction
// Size: 0x30 (Inherited: 0x00)
struct FS_UseItemAction {
	struct FS_UseItemActionData m_actionData; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct UAnimMontage* m_useItemMontage; // 0x20(0x08)
	struct AS_PlayerCharacter* m_playerCharacter; // 0x28(0x08)
};

// ScriptStruct Scavenger.S_BaseUserSettingConfig
// Size: 0x38 (Inherited: 0x08)
struct FS_BaseUserSettingConfig : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Scavenger.S_SliderSettingConfig
// Size: 0x98 (Inherited: 0x38)
struct FS_SliderSettingConfig : FS_BaseUserSettingConfig {
	bool bLockInRange; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FFloatRange Range; // 0x3c(0x10)
	bool bUseDifferentDisplayRange; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FFloatRange DisplayRange; // 0x50(0x10)
	bool bUsesFractionalUnits; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FInt32Range FractionalUnits; // 0x64(0x10)
	bool bHasSuffix; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FText suffix; // 0x78(0x18)
	float StepSize; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Scavenger.S_ToggleSettingConfig
// Size: 0x68 (Inherited: 0x38)
struct FS_ToggleSettingConfig : FS_BaseUserSettingConfig {
	struct FText ActiveText; // 0x38(0x18)
	struct FText InactiveText; // 0x50(0x18)
};

// ScriptStruct Scavenger.S_MultiOptionSettingConfig
// Size: 0x58 (Inherited: 0x38)
struct FS_MultiOptionSettingConfig : FS_BaseUserSettingConfig {
	bool bLockInConfigOptions; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FText> Options; // 0x40(0x10)
	bool bDisplayNavBar; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Scavenger.S_SoftDataTableRowHandle
// Size: 0x38 (Inherited: 0x00)
struct FS_SoftDataTableRowHandle {
	struct TSoftObjectPtr<struct UDataTable> SoftDataTable; // 0x00(0x28)
	struct FName RowName; // 0x28(0x08)
	struct UDataTable* LoadedDataTable; // 0x30(0x08)
};

// ScriptStruct Scavenger.S_RandStateWithHistory
// Size: 0x1a0 (Inherited: 0x18)
struct FS_RandStateWithHistory : FS_RandState {
	char pad_18[0x188]; // 0x18(0x188)
};

// ScriptStruct Scavenger.S_IntPair
// Size: 0x08 (Inherited: 0x00)
struct FS_IntPair {
	int32_t Key; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Scavenger.S_StatefulInterpolationValue
// Size: 0x50 (Inherited: 0x00)
struct FS_StatefulInterpolationValue {
	float AlphaConstantUp; // 0x00(0x04)
	float AlphaConstantDown; // 0x04(0x04)
	float MinValue; // 0x08(0x04)
	float MaxValue; // 0x0c(0x04)
	float Exponent; // 0x10(0x04)
	bool EvaluateDTAutomatically; // 0x14(0x01)
	enum class ES_CurveType UpCurve; // 0x15(0x01)
	enum class ES_CurveType DownCurve; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct FDebugFloatHistory FloatHistory; // 0x18(0x20)
	char pad_38[0x18]; // 0x38(0x18)
};

// ScriptStruct Scavenger.S_VehicleEmitterDef
// Size: 0x28 (Inherited: 0x00)
struct FS_VehicleEmitterDef {
	struct FVector EmitterOffset; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAkAudioEvent* StartAndLoopEvent; // 0x10(0x08)
	struct UAkAudioEvent* LoopEvent; // 0x18(0x08)
	struct UAkAudioEvent* StopEvent; // 0x20(0x08)
};

// ScriptStruct Scavenger.S_EffectPostProcessClient
// Size: 0x68 (Inherited: 0x00)
struct FS_EffectPostProcessClient {
	char pad_0[0x30]; // 0x00(0x30)
	struct TArray<struct UCameraComponent*> CameraComponents; // 0x30(0x10)
	struct UMaterialInstanceDynamic* MaterialInst; // 0x40(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x48(0x08)
	char pad_50[0x18]; // 0x50(0x18)
};

// ScriptStruct Scavenger.S_EffectPostProcess
// Size: 0x68 (Inherited: 0x00)
struct FS_EffectPostProcess {
	int32_t EffectId; // 0x00(0x04)
	struct TWeakObjectPtr<struct AActor> BaseObject; // 0x04(0x08)
	bool IsActive; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TSoftObjectPtr<struct UMaterialInterface> Material; // 0x10(0x28)
	struct TSoftObjectPtr<struct UStaticMesh> StaticMesh; // 0x38(0x28)
	bool bFadeInOut; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Scavenger.S_EffectShellClient
// Size: 0xe0 (Inherited: 0x00)
struct FS_EffectShellClient {
	char pad_0[0x4]; // 0x00(0x04)
	struct TWeakObjectPtr<struct AActor> BaseObject; // 0x04(0x08)
	char pad_C[0x34]; // 0x0c(0x34)
	struct TMap<struct FName, struct TWeakObjectPtr<struct UPrimitiveComponent>> Components; // 0x40(0x50)
	struct UMaterialInstanceDynamic* MaterialInst; // 0x90(0x08)
	char pad_98[0x48]; // 0x98(0x48)
};

// ScriptStruct Scavenger.S_EffectShell
// Size: 0x68 (Inherited: 0x00)
struct FS_EffectShell {
	int32_t ShellId; // 0x00(0x04)
	struct TWeakObjectPtr<struct AActor> BaseObject; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<struct UMaterialInterface> Material; // 0x10(0x28)
	struct TArray<struct FString> MaterialFilters; // 0x38(0x10)
	enum class ES_FilterIfMatch MaterialFiltersType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FString> MeshFilters; // 0x50(0x10)
	enum class ES_FilterIfMatch MeshFiltersType; // 0x60(0x01)
	bool bFadeInOut; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct Scavenger.S_EffectMaterialAnimation
// Size: 0x30 (Inherited: 0x00)
struct FS_EffectMaterialAnimation {
	int32_t EffectId; // 0x00(0x04)
	enum class ES_VisualEffect EffectType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName ParameterName; // 0x08(0x08)
	struct UCurveFloat* FloatCurve; // 0x10(0x08)
	struct UCurveLinearColor* ColorCurve; // 0x18(0x08)
	float Duration; // 0x20(0x04)
	float CurrTime; // 0x24(0x04)
	enum class ES_AnimationDuration AnimDurationType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Scavenger.S_EffectParameter
// Size: 0x28 (Inherited: 0x00)
struct FS_EffectParameter {
	int32_t EffectId; // 0x00(0x04)
	enum class ES_VisualEffect EffectType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName ParameterName; // 0x08(0x08)
	enum class ES_MaterialParameter ParameterType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float FValue; // 0x14(0x04)
	struct FLinearColor VValue; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_VisibilityWeights
// Size: 0x3c (Inherited: 0x00)
struct FS_VisibilityWeights {
	float DawnStartTime; // 0x00(0x04)
	float DawnEndTime; // 0x04(0x04)
	float DuskStartTime; // 0x08(0x04)
	float DuskEndTime; // 0x0c(0x04)
	float InTheStormVisibility; // 0x10(0x04)
	float InTheDayVisibiliy; // 0x14(0x04)
	float InTheDuskDawnVisibilty; // 0x18(0x04)
	float InTheNightVisibility; // 0x1c(0x04)
	float InTheDarkByLight; // 0x20(0x04)
	float CrouchingVisibility; // 0x24(0x04)
	float CrouchingWalkingVisibility; // 0x28(0x04)
	float SprintingVisibility; // 0x2c(0x04)
	float StandingVisibility; // 0x30(0x04)
	float WalkingVisibility; // 0x34(0x04)
	int32_t PlayerToTimeSliceEachFrame; // 0x38(0x04)
};

// ScriptStruct Scavenger.S_PerModifierSettings
// Size: 0x10 (Inherited: 0x00)
struct FS_PerModifierSettings {
	struct TArray<struct FS_ModifierValueSettings> ValueModifiers; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ModifierValueSettings
// Size: 0x14 (Inherited: 0x00)
struct FS_ModifierValueSettings {
	char bApplyRegardlessOfCurrentCameraSetting : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ActiveCameraSettings; // 0x04(0x04)
	char bOverrideValue : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ValueOverride; // 0x0c(0x04)
	float ValueMultiplier; // 0x10(0x04)
};

// ScriptStruct Scavenger.S_WeaponAttachmentArrayContainer
// Size: 0x10 (Inherited: 0x00)
struct FS_WeaponAttachmentArrayContainer {
	struct TArray<struct AS_WeaponAttachment*> WeaponAttachments; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_WeaponMoveSpeedMultipliers
// Size: 0x18 (Inherited: 0x00)
struct FS_WeaponMoveSpeedMultipliers {
	float ADSWalkSpeedMultiplier; // 0x00(0x04)
	float ReloadWalkSpeedMultiplier; // 0x04(0x04)
	float ReloadSprintSpeedMultiplier; // 0x08(0x04)
	float WalkSpeedMultiplier; // 0x0c(0x04)
	float SprintSpeedMultiplier; // 0x10(0x04)
	float CrouchSpeedMultiplier; // 0x14(0x04)
};

// ScriptStruct Scavenger.S_WeaponCriticalSettings
// Size: 0x28 (Inherited: 0x00)
struct FS_WeaponCriticalSettings {
	bool bCanPerformCritical; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t TriggerTypeAllowCritical; // 0x04(0x04)
	float BaseChance; // 0x08(0x04)
	float HeadshotBonus; // 0x0c(0x04)
	float CooldownTime; // 0x10(0x04)
	float DamageMultiplier; // 0x14(0x04)
	struct TArray<struct FS_DamageConfiguration> BonusDamageConfigurations; // 0x18(0x10)
};

// ScriptStruct Scavenger.S_DamageConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FS_DamageConfiguration {
	float DamageAmount; // 0x00(0x04)
	float DamageAmountAIMin; // 0x04(0x04)
	float DamageAmountAIMax; // 0x08(0x04)
	float PoiseDamageAmount; // 0x0c(0x04)
	struct US_DamageTypeBase* DamageTypeClass; // 0x10(0x08)
};

// ScriptStruct Scavenger.S_WeaponSpread
// Size: 0x248 (Inherited: 0x00)
struct FS_WeaponSpread {
	float MinSpreadAngle; // 0x00(0x04)
	float MinSpreadAngleADS; // 0x04(0x04)
	float MaxSpreadAngle; // 0x08(0x04)
	float MaxSpreadAngleADS; // 0x0c(0x04)
	float MaxMovementPenatly; // 0x10(0x04)
	float SpreadPerShot; // 0x14(0x04)
	struct UCurveFloat* SpreadPerShotCurve; // 0x18(0x08)
	float ADSSpreadPerShotScale; // 0x20(0x04)
	float CrouchSpreadPerShotScale; // 0x24(0x04)
	float SpreadDecreasePerSecond; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UCurveFloat* SpreadSpeedScaleCurve; // 0x30(0x08)
	bool FirstShotOnMinAngle; // 0x38(0x01)
	bool FirstShotOnCooldownAfterAttack; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float FirstShotCooldownDuration; // 0x3c(0x04)
	float FirstShotSpreadAngle; // 0x40(0x04)
	char pad_44[0x1c]; // 0x44(0x1c)
	struct FS_StatefulInterpolationValue Sprint; // 0x60(0x50)
	struct FS_StatefulInterpolationValue Walk; // 0xb0(0x50)
	struct FS_StatefulInterpolationValue WalkADS; // 0x100(0x50)
	struct FS_StatefulInterpolationValue Reload; // 0x150(0x50)
	struct FS_StatefulInterpolationValue Jump; // 0x1a0(0x50)
	struct FS_StatefulInterpolationValue InterpolationTestView; // 0x1f0(0x50)
	char pad_240[0x8]; // 0x240(0x08)
};

// ScriptStruct Scavenger.S_WeaponCommand
// Size: 0x28 (Inherited: 0x10)
struct FS_WeaponCommand : FS_CommandBase {
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Scavenger.S_WeaponID
// Size: 0x0c (Inherited: 0x00)
struct FS_WeaponID {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Scavenger.S_WeaponSlotData
// Size: 0x10 (Inherited: 0x00)
struct FS_WeaponSlotData {
	struct AS_WeaponBase* weapon; // 0x00(0x08)
	enum class ES_WeaponSlotState State; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float AttachmentBlendTimeRemaining; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_WeaponState
// Size: 0x480 (Inherited: 0x00)
struct FS_WeaponState {
	struct FS_AttackSlotState attackSlotStates[0x6]; // 0x00(0x480)
};

// ScriptStruct Scavenger.S_AttackEventMontageInfo
// Size: 0x140 (Inherited: 0x00)
struct FS_AttackEventMontageInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* OwnerMontage; // 0x08(0x08)
	struct AS_WeaponBase* weapon; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct UAnimMontage* WeaponMontage; // 0x20(0x08)
	char pad_28[0xc8]; // 0x28(0xc8)
	struct FS_MeleeAttackState meleeAttackState; // 0xf0(0x50)
};

// ScriptStruct Scavenger.S_DoAttackParams
// Size: 0xac (Inherited: 0x00)
struct FS_DoAttackParams {
	char pad_0[0xac]; // 0x00(0xac)
};

// ScriptStruct Scavenger.S_WeaponTuningsTableRow
// Size: 0x60 (Inherited: 0x08)
struct FS_WeaponTuningsTableRow : FTableRowBase {
	float ProjectileSpeedScalar; // 0x08(0x04)
	float DamageScalar; // 0x0c(0x04)
	float WeaponTriggerUpScalar; // 0x10(0x04)
	float WeaponTriggerDownScalar; // 0x14(0x04)
	float RateOfFireScalar; // 0x18(0x04)
	float StartLeadValue; // 0x1c(0x04)
	float EndLeadValue; // 0x20(0x04)
	float LeadTransitionTime; // 0x24(0x04)
	float AlphaConstantUp; // 0x28(0x04)
	float AlphaConstantDown; // 0x2c(0x04)
	float MinValue; // 0x30(0x04)
	float MaxValue; // 0x34(0x04)
	float Exponent; // 0x38(0x04)
	bool EvaluateDTAutomatically; // 0x3c(0x01)
	enum class ES_CurveType UpCurve; // 0x3d(0x01)
	enum class ES_CurveType DownCurve; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	float DistanceSpreadModifierAngle; // 0x40(0x04)
	float SpreadModifierMaxDistance; // 0x44(0x04)
	float SpreadStormScaleFactor; // 0x48(0x04)
	float SpreadAccuracyReducingSmokeScaleFactor; // 0x4c(0x04)
	float MinSpreadSingleShotWindup; // 0x50(0x04)
	float MaxSpreadSingleShotWindup; // 0x54(0x04)
	float CharacterMeleeImpulseScalar; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Scavenger.S_WeaponModifiers
// Size: 0x10 (Inherited: 0x00)
struct FS_WeaponModifiers {
	struct TArray<enum class ES_WeaponModifier> Modifiers; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_ReactionIntervalRecord
// Size: 0x08 (Inherited: 0x00)
struct FS_ReactionIntervalRecord {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Scavenger.S_TrackedAudioComponent
// Size: 0x50 (Inherited: 0x00)
struct FS_TrackedAudioComponent {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Scavenger.S_TrackedParticleSystemComponent
// Size: 0x38 (Inherited: 0x00)
struct FS_TrackedParticleSystemComponent {
	char pad_0[0x30]; // 0x00(0x30)
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x30(0x08)
};

// ScriptStruct Scavenger.S_AttackConfiguration
// Size: 0x90 (Inherited: 0x00)
struct FS_AttackConfiguration {
	char bUsesAmmo : 1; // 0x00(0x01)
	char bCanBeReloaded : 1; // 0x00(0x01)
	char bUseAnimationScaling : 1; // 0x00(0x01)
	char bUsesDeferredDoAttack : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class ES_AttackBehavior AttackBehavior; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float AttackBlockTimeInSeconds; // 0x08(0x04)
	int32_t BurstLength; // 0x0c(0x04)
	float AttackQueuingAllowedDuringEndOfBlockTime; // 0x10(0x04)
	bool UseAllAttachmentsEndOfBlockTimerForAttackQueuingAllowed; // 0x14(0x01)
	bool AttackQueuingAllowedDuringReload; // 0x15(0x01)
	bool CanHeadshot; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float HeadshotMultiplier; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DamageFalloffMultiplier; // 0x20(0x08)
	struct TArray<enum class ES_AttackTag> AttackTags; // 0x28(0x10)
	struct TArray<struct FS_DamageConfiguration> DamageConfigurations; // 0x38(0x10)
	float FireRate; // 0x48(0x04)
	float FireRateAIMin; // 0x4c(0x04)
	float FireRateAIMax; // 0x50(0x04)
	enum class ES_AmmoType AmmoType; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t AmmoCountWhenFullyLoaded; // 0x58(0x04)
	int32_t AmmoConsumedPerAttack; // 0x5c(0x04)
	float NoiseLoudness; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FS_AttackEventReaction> AttackEventReactions; // 0x68(0x10)
	float DamageAmount; // 0x78(0x04)
	float DamageAmountAIMin; // 0x7c(0x04)
	float DamageAmountAIMax; // 0x80(0x04)
	float PoiseDamageAmount; // 0x84(0x04)
	struct US_DamageTypeBase* DamageTypeClass; // 0x88(0x08)
};

// ScriptStruct Scavenger.S_AttackEventReaction
// Size: 0xf0 (Inherited: 0x00)
struct FS_AttackEventReaction {
	enum class ES_AttackEvent TriggerEvent; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class ES_AttackEvent> CompletionEvents; // 0x08(0x10)
	enum class ES_AttackEvent CompletionEvent; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UMatineeCameraShake* CameraShakeClass; // 0x20(0x08)
	float CameraShakeScale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FS_AttackEventReactionParticleSystem ParticleSystem; // 0x30(0x50)
	struct FS_AttackEventReactionSound Sound; // 0x80(0x50)
	uint32_t SpawnInterval; // 0xd0(0x04)
	float SpawnIntervalResetTime; // 0xd4(0x04)
	float MinDistanceForParticleSpawn; // 0xd8(0x04)
	float ParticleForwardOffset; // 0xdc(0x04)
	char bSpawnAtBulletExitPoint : 1; // 0xe0(0x01)
	char bSetDirectionToBulletDirection : 1; // 0xe0(0x01)
	char bScaleParticleLifetimeToEndAtImpactPoint : 1; // 0xe0(0x01)
	char pad_E0_3 : 5; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float AttachAndDelayVisibilityTimer; // 0xe4(0x04)
	struct FName EmitterNameForLifetimeToEndAtImpactPoint; // 0xe8(0x08)
};

// ScriptStruct Scavenger.S_AttackEventReactionSound
// Size: 0x50 (Inherited: 0x00)
struct FS_AttackEventReactionSound {
	struct UAkAudioEvent* Event; // 0x00(0x08)
	enum class ES_AudioEventEndAction EndAction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t FadeOutTimeMs; // 0x0c(0x04)
	struct FS_AttackEventReactionLocationData SpawnData; // 0x10(0x40)
};

// ScriptStruct Scavenger.S_AttackEventReactionLocationData
// Size: 0x40 (Inherited: 0x00)
struct FS_AttackEventReactionLocationData {
	char bAttached : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName SocketName; // 0x04(0x08)
	struct FVector Location; // 0x0c(0x0c)
	struct FRotator Rotation; // 0x18(0x0c)
	char bCameraRelativeIfFirstPersonADS : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector CameraRelativeIfFirstPersonADSLocation; // 0x28(0x0c)
	struct FRotator CameraRelativeIfFirstPersonADSRotation; // 0x34(0x0c)
};

// ScriptStruct Scavenger.S_AttackEventReactionParticleSystem
// Size: 0x50 (Inherited: 0x00)
struct FS_AttackEventReactionParticleSystem {
	struct UParticleSystem* ParticleSystemTemplate; // 0x00(0x08)
	char bIsBeam : 1; // 0x08(0x01)
	char bNeverFrustumCullCreation : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FS_AttackEventReactionLocationData SpawnData; // 0x0c(0x40)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Scavenger.S_PlayingStormSound
// Size: 0x20 (Inherited: 0x00)
struct FS_PlayingStormSound {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAkComponent* Component; // 0x08(0x08)
	struct UAkAudioEvent* Event; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Scavenger.S_WeatherState
// Size: 0x10 (Inherited: 0x00)
struct FS_WeatherState {
	char bIsSnowing : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DesiredSnowDensity; // 0x04(0x04)
	float SnowDensityRateOfChange; // 0x08(0x04)
	float CurrentSnowDensity; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_WidgetAnimationData
// Size: 0xc0 (Inherited: 0x00)
struct FS_WidgetAnimationData {
	struct UCurveBase* EvaluationCurve; // 0x00(0x08)
	float Scalar; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* InputToTimeCurve; // 0x10(0x08)
	bool bUseInputToTimeCurve; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName SubWidgetName; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FName> FieldName; // 0x28(0x10)
	bool bInWidgetCanvasSlot; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName MaterialParameterName; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct UWidget* Widget; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
	struct UVisual* BaseAddress; // 0x58(0x08)
	struct UObject* OwnerClass; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
	struct UMaterialInstanceDynamic* MaterialProperty; // 0x70(0x08)
	char pad_78[0x4]; // 0x78(0x04)
	float StartFloatValue; // 0x7c(0x04)
	float EndFloatValue; // 0x80(0x04)
	struct FVector StartVectorValue; // 0x84(0x0c)
	struct FVector EndVectorValue; // 0x90(0x0c)
	struct FLinearColor StartLinearColorValue; // 0x9c(0x10)
	struct FLinearColor EndLinearColorValue; // 0xac(0x10)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Scavenger.S_ArmorThreshold
// Size: 0x20 (Inherited: 0x08)
struct FS_ArmorThreshold : FTableRowBase {
	struct FFloatRange ArmorRange; // 0x08(0x10)
	struct UTexture2D* ArmorIndicator; // 0x18(0x08)
};

// ScriptStruct Scavenger.S_DefaultClassLoadout
// Size: 0x90 (Inherited: 0x08)
struct FS_DefaultClassLoadout : FTableRowBase {
	struct TSoftObjectPtr<struct US_PlayerClassData> PlayerClass; // 0x08(0x28)
	struct TArray<struct FS_DefaultClassLoadoutSlot> DefaultLoadoutSlots; // 0x30(0x10)
	struct FS_CharacterLoadout DefaultLoadout; // 0x40(0x50)
};

// ScriptStruct Scavenger.S_DefaultClassLoadoutSlot
// Size: 0x18 (Inherited: 0x00)
struct FS_DefaultClassLoadoutSlot {
	enum class ES_LoadoutSlotType SlotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SlotSize; // 0x04(0x04)
	struct TArray<struct FDataTableRowHandle> OnlineItemMetadataIds; // 0x08(0x10)
};

// ScriptStruct Scavenger.S_FlipbookBrush
// Size: 0x18 (Inherited: 0x00)
struct FS_FlipbookBrush {
	struct UPaperFlipbook* flipbook; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	int32_t StartingKeyFrame; // 0x0c(0x04)
	bool Autoplay; // 0x10(0x01)
	bool Loop; // 0x11(0x01)
	bool RestoreState; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Scavenger.S_InventoryToastItem
// Size: 0x50 (Inherited: 0x00)
struct FS_InventoryToastItem {
	struct FS_ItemState ItemState; // 0x00(0x40)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct Scavenger.S_MapIconFreeSlotsArray
// Size: 0x10 (Inherited: 0x00)
struct FS_MapIconFreeSlotsArray {
	struct TArray<int32_t> FreeSlots; // 0x00(0x10)
};

// ScriptStruct Scavenger.S_RewardGrantMetadata
// Size: 0x40 (Inherited: 0x10)
struct FS_RewardGrantMetadata : FS_MetadataTableRowBase {
	struct FText Header; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
};

// ScriptStruct Scavenger.S_PlayerStatusState
// Size: 0x60 (Inherited: 0x00)
struct FS_PlayerStatusState {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Scavenger.S_PostMatchStatMetadata
// Size: 0x78 (Inherited: 0x58)
struct FS_PostMatchStatMetadata : FS_DisplayableItemMetadata {
	struct FText StatFormat; // 0x58(0x18)
	enum class ES_PostMatchStatDisplayType StatDisplayType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Scavenger.S_RadialPanelItemSelectionInfo
// Size: 0x10 (Inherited: 0x00)
struct FS_RadialPanelItemSelectionInfo {
	struct UCanvasPanelSlot* ItemSlot; // 0x00(0x08)
	int32_t SelectionIdentifier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_SocialNotification
// Size: 0x14 (Inherited: 0x00)
struct FS_SocialNotification {
	struct FName PlayerName; // 0x00(0x08)
	struct FName PlayerId; // 0x08(0x08)
	enum class ES_SocialNotificationType NotificationType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Scavenger.S_TextChatMessage
// Size: 0x28 (Inherited: 0x20)
struct FS_TextChatMessage : FS_HUDMessage {
	enum class ES_TextChatMessageTarget roomType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Scavenger.S_TimedInteractionDisplayData
// Size: 0x30 (Inherited: 0x08)
struct FS_TimedInteractionDisplayData : FTableRowBase {
	enum class ES_InteractableActorType ActorType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText DisplayName; // 0x10(0x18)
	int32_t NearnessThreshold; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Scavenger.S_ActionLockInstruction
// Size: 0x03 (Inherited: 0x00)
struct FS_ActionLockInstruction {
	enum class ES_ActionID ActionID; // 0x00(0x01)
	bool InterruptExistingActiveActions; // 0x01(0x01)
	bool InterruptExistingQueuedActions; // 0x02(0x01)
};

// ScriptStruct Scavenger.PrimitiveState
// Size: 0x50 (Inherited: 0x00)
struct FPrimitiveState {
	struct FTransform trans; // 0x00(0x30)
	struct FVector linVel; // 0x30(0x0c)
	struct FVector angVel; // 0x3c(0x0c)
	float Timestamp; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Scavenger.S_SecondaryState
// Size: 0x38 (Inherited: 0x00)
struct FS_SecondaryState {
	struct TArray<struct FS_SpringInfo> HoverSpringsInfo; // 0x00(0x10)
	float LocalSteeringAngle; // 0x10(0x04)
	int32_t GroundedSpringCount; // 0x14(0x04)
	bool bHasGroundedCollision; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Gear; // 0x1c(0x04)
	struct FVector AvgSurfaceNormal; // 0x20(0x0c)
	struct FVector SurfaceDownhillNormal; // 0x2c(0x0c)
};

// ScriptStruct Scavenger.S_SpringInfo
// Size: 0x28 (Inherited: 0x00)
struct FS_SpringInfo {
	struct FVector From; // 0x00(0x0c)
	struct FVector To; // 0x0c(0x0c)
	struct FVector HitPos; // 0x18(0x0c)
	bool bVerThrusterActive; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Scavenger.S_PrimaryState
// Size: 0x30 (Inherited: 0x00)
struct FS_PrimaryState {
	struct FS_SnowRacerInputState InputState; // 0x00(0x1c)
	bool ParkingMode; // 0x1c(0x01)
	bool UserInputEnabled; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FS_BoostState BoostState; // 0x20(0x10)
};

// ScriptStruct Scavenger.S_BoostState
// Size: 0x10 (Inherited: 0x00)
struct FS_BoostState {
	bool Active; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FuelLeft; // 0x04(0x04)
	float ActiveTimer; // 0x08(0x04)
	float RecoverCooldownTimer; // 0x0c(0x04)
};

// ScriptStruct Scavenger.S_SnowRacerInputState
// Size: 0x1c (Inherited: 0x00)
struct FS_SnowRacerInputState {
	float throttle; // 0x00(0x04)
	float desiredHeading; // 0x04(0x04)
	float strafe; // 0x08(0x04)
	float boost; // 0x0c(0x04)
	float Roll; // 0x10(0x04)
	float Pitch; // 0x14(0x04)
	float verticalThrottle; // 0x18(0x04)
};

// ScriptStruct Scavenger.S_FrictionPoint
// Size: 0x28 (Inherited: 0x00)
struct FS_FrictionPoint {
	struct FVector Offset; // 0x00(0x0c)
	float MaxSpeedForStaticFriction; // 0x0c(0x04)
	float StaticFriction; // 0x10(0x04)
	float DynamicFriction; // 0x14(0x04)
	struct UCurveFloat* ForwardFriction; // 0x18(0x08)
	struct UCurveFloat* ForwardFrictionBreaking; // 0x20(0x08)
};

// ScriptStruct Scavenger.S_HoverSpring
// Size: 0x40 (Inherited: 0x00)
struct FS_HoverSpring {
	struct FVector RayOffset; // 0x00(0x0c)
	struct FVector ForceOffset; // 0x0c(0x0c)
	float SpringLength; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* HoverSpringStrength; // 0x20(0x08)
	struct UCurveFloat* HoverSpringDamp; // 0x28(0x08)
	struct UCurveFloat* ExtraGravityMulti; // 0x30(0x08)
	struct UCurveFloat* VerticalThrusterCurve; // 0x38(0x08)
};

