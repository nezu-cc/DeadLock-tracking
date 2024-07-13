#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: client.dll
// Classes count: 1,778 (Allocated) | 1,792 (Unallocated)
// Enums count: 1 (Allocated) | 11 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: client.dll (project 'client')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class C_BaseCombatCharacter__WaterWakeMode_t : uint32_t
{
	WATER_WAKE_NONE = 0x0,
	WATER_WAKE_IDLE = 0x1,
	WATER_WAKE_WALKING = 0x2,
	WATER_WAKE_RUNNING = 0x3,
	WATER_WAKE_WATER_OVERHEAD = 0x4,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class StartupBehavior_t : uint32_t
{
	UNIT_STARTUP_BEHAVIOR_DEFAULT = 0x0,
	UNIT_STARTUP_BEHAVIOR_TAUNT = 0x1,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class PortraitScale_t : uint32_t
{
	PORTRAIT_SCALE_INVALID = 0xffffffffffffffff,
	PORTRAIT_SCALE_LOADOUT = 0x0,
	PORTRAIT_SCALE_ALTERNATE_LOADOUT = 0x1,
	PORTRAIT_SCALE_WORLD = 0x2,
	PORTRAIT_SCALE_SPECTATOR_LOADOUT = 0x3,
	PORTRAIT_SCALE_VERSUS_LOADOUT = 0x4,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 99
// Alignment: 4
// Size: 0x4
enum class EGCCitadelClientMessages : uint32_t
{
	k_EMsgClientToGCStartMatchmaking = 0x2332,
	k_EMsgClientToGCStartMatchmakingResponse = 0x2333,
	k_EMsgClientToGCStopMatchmaking = 0x2334,
	k_EMsgClientToGCStopMatchmakingResponse = 0x2335,
	k_EMsgGCToClientMatchmakingStopped = 0x2336,
	k_EMsgClientToGCLeaveLobby = 0x2337,
	k_EMsgClientToGCLeaveLobbyResponse = 0x2338,
	k_EMsgClientToGCIsInMatchmaking = 0x2339,
	k_EMsgClientToGCIsInMatchmakingResponse = 0x233a,
	k_EMsgGCToClientDevPlaytestStatus = 0x233b,
	k_EMsgClientToGCDevSetMMBias = 0x233f,
	k_EMsgClientToGCGetProfileCard = 0x2340,
	k_EMsgClientToGCGetProfileCardResponse = 0x2341,
	k_EMsgClientToGCUpdateRoster = 0x2342,
	k_EMsgClientToGCUpdateRosterResponse = 0x2343,
	k_EMsgGCToClientProfileCardUpdated = 0x2344,
	k_EMsgGCToClientDevAnnouncements = 0x2345,
	k_EMsgClientToGCModifyDevAnnouncements = 0x2346,
	k_EMsgClientToGCModifyDevAnnouncementsResponse = 0x2347,
	k_EMsgGCToClientSDRTicket = 0x238c,
	k_EMsgClientToGCReplacementSDRTicket = 0x238d,
	k_EMsgClientToGCReplacementSDRTicketResponse = 0x238e,
	k_EMsgClientToGCSetServerConVar = 0x2393,
	k_EMsgClientToGCSetServerConVarResponse = 0x2394,
	k_EMsgClientToGCSpectateLobby = 0x2395,
	k_EMsgClientToGCSpectateLobbyResponse = 0x2396,
	k_EMsgClientToGCPostMatchSurveyResponse = 0x2397,
	k_EMsgClientToGCGetMatchHistory = 0x2398,
	k_EMsgClientToGCGetMatchHistoryResponse = 0x2399,
	k_EMsgClientToGCSpectateUser = 0x239c,
	k_EMsgClientToGCSpectateUserResponse = 0x239d,
	k_EMsgClientToGCGetGlobalMatchHistory = 0x239e,
	k_EMsgClientToGCGetGlobalMatchHistoryResponse = 0x239f,
	k_EMsgClientToGCPartyCreate = 0x23a3,
	k_EMsgClientToGCPartyCreateResponse = 0x23a4,
	k_EMsgClientToGCPartyLeave = 0x23a5,
	k_EMsgClientToGCPartyLeaveResponse = 0x23a6,
	k_EMsgClientToGCPartyJoin = 0x23a7,
	k_EMsgClientToGCPartyJoinResponse = 0x23a8,
	k_EMsgClientToGCPartyAction = 0x23a9,
	k_EMsgClientToGCPartyActionResponse = 0x23aa,
	k_EMsgClientToGCPartyStartMatch = 0x23ab,
	k_EMsgClientToGCPartyStartMatchResponse = 0x23ac,
	k_EMsgClientToGCPartyInviteUser = 0x23ad,
	k_EMsgClientToGCPartyInviteUserResponse = 0x23ae,
	k_EMsgGCToClientPartyEvent = 0x23af,
	k_EMsgGCToClientCanRejoinParty = 0x23b1,
	k_EMsgClientToGCPartyJoinViaCode = 0x23b2,
	k_EMsgClientToGCPartyJoinViaCodeResponse = 0x23b3,
	k_EMsgClientToGCPartyUpdateRoster = 0x23b4,
	k_EMsgClientToGCPartyUpdateRosterResponse = 0x23b5,
	k_EMsgClientToGCPartySetReadyState = 0x23b6,
	k_EMsgClientToGCPartySetReadyStateResponse = 0x23b7,
	k_EMsgClientToGCDevForceMatchFormation = 0x23ca,
	k_EMsgClientToGCDevForceMatchFormationResponse = 0x23cb,
	k_EMsgClientToGCGetAccountStats = 0x23cc,
	k_EMsgClientToGCGetAccountStatsResponse = 0x23cd,
	k_EMsgGCToClientAccountStatsUpdated = 0x23ce,
	k_EMsgClientToGCGetMatchMetaData = 0x23cf,
	k_EMsgClientToGCGetMatchMetaDataResponse = 0x23d0,
	k_EMsgClientToGCDevAction = 0x23d4,
	k_EMsgClientToGCDevActionResponse = 0x23d5,
	k_EMsgClientToGCRecordClientEvents = 0x23d6,
	k_EMsgClientToGCRecordClientEventsResponse = 0x23d7,
	k_EMsgClientToGCSetNewPlayerProgress = 0x23d8,
	k_EMsgClientToGCSetNewPlayerProgressResponse = 0x23d9,
	k_EMsgClientToGCUpdateAccountSync = 0x23da,
	k_EMsgClientToGCUpdateAccountSyncResponse = 0x23db,
	k_EMsgClientToGCGetHeroChoice = 0x23dc,
	k_EMsgClientToGCGetHeroChoiceResponse = 0x23dd,
	k_EMsgClientToGCUnlockHero = 0x23de,
	k_EMsgClientToGCUnlockHeroResponse = 0x23df,
	k_EMsgClientToGCBookUnlock = 0x23e0,
	k_EMsgClientToGCBookUnlockResponse = 0x23e1,
	k_EMsgClientToGCGetBook = 0x23e2,
	k_EMsgClientToGCGetBookResponse = 0x23e3,
	k_EMsgGCToClientBookUpdated = 0x23e4,
	k_EMsgClientToGCSubmitPlaytestUser = 0x23e5,
	k_EMsgClientToGCSubmitPlaytestUserResponse = 0x23e6,
	k_EMsgClientToGCGetDevMatchInfo = 0x23e7,
	k_EMsgClientToGCGetDevMatchInfoResponse = 0x23e8,
	k_EMsgClientToGCUpdateHeroBuild = 0x23e9,
	k_EMsgClientToGCUpdateHeroBuildResponse = 0x23ea,
	k_EMsgClientToGCFindHeroBuilds = 0x23eb,
	k_EMsgClientToGCFindHeroBuildsResponse = 0x23ec,
	k_EMsgClientToGCReportPlayerFromMatch = 0x23ed,
	k_EMsgClientToGCReportPlayerFromMatchResponse = 0x23ee,
	k_EMsgClientToGCGetAccountMatchReports = 0x23ef,
	k_EMsgClientToGCGetAccountMatchReportsResponse = 0x23f0,
	k_EMsgClientToGCDeleteHeroBuild = 0x23f1,
	k_EMsgClientToGCDeleteHeroBuildResponse = 0x23f2,
	k_EMsgClientToGCGetActiveMatches = 0x23f3,
	k_EMsgClientToGCGetActiveMatchesResponse = 0x23f4,
	k_EMsgClientToGCGetDiscordLink = 0x23f5,
	k_EMsgClientToGCGetDiscordLinkResponse = 0x23f6,
	k_EMsgClientToGCPartySetMode = 0x23f7,
	k_EMsgClientToGCPartySetModeResponse = 0x23f8,
	k_EMsgClientToGCGrantForumAccess = 0x23f9,
	k_EMsgClientToGCGrantForumAccessResponse = 0x23fa,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class ECitadelPingWheelMessageType_t : uint32_t
{
	CITADEL_PING_WHEEL_PREGAME = 0x0,
	CITADEL_PING_WHEEL_INPROGRESS = 0x1,
	CITADEL_PING_WHEEL_DISABLED_WHILE_DEAD = 0x2,
	CITADEL_PING_WHEEL_POSTGAME = 0x3,
	CITADEL_PING_WHEEL_CONTEXTUAL = 0x4,
	// MPropertySuppressEnumerator
	CITADEL_PING_WHEEL_SUBNAV = 0x5,
	// MPropertySuppressEnumerator
	CITADEL_PING_WHEEL_COUNT = 0x6,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ECitadelNewPlayerProgressFlag : uint32_t
{
	k_eNewPlayerProgress_GettingStarted = 0x1,
	k_eNewPlayerProgress_HeroTraining = 0x2,
	k_eNewPlayerProgress_LaneTraining = 0x3,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 54
// Alignment: 4
// Size: 0x4
enum class ECitadelClientAccountEvent : uint32_t
{
	k_eLaunchedHeroTest = 0x1,
	k_eViewedProfile = 0x2,
	k_eViewedSocial = 0x3,
	k_eViewedHeroes = 0x4,
	k_eViewedHeroDetails = 0x5,
	k_eViewedPatchNotes = 0x6,
	k_eViewedEvents = 0x7,
	k_eViewedGettingStarted = 0x8,
	k_eViewedGuidePage = 0x9,
	k_eLaunchedClient = 0xa,
	k_eEditRoster = 0xb,
	k_eViewedWatch = 0xc,
	k_eCreatedParty = 0xd,
	k_eCreatedPartyWithInvite = 0xe,
	k_eViewedSelfProfile = 0xf,
	k_eJoinedPartyCode = 0x10,
	k_eSentPartyInvite = 0x11,
	k_eAcceptPartyInvite = 0x12,
	k_eRejectPartyInvite = 0x13,
	k_eSpectateUser = 0x14,
	k_eSpectateMatch = 0x15,
	k_eEnteredMatchMaking = 0x16,
	k_eLeftMatchMaking = 0x17,
	k_eEnteredPartyMatchMaking = 0x18,
	k_eLeftPartyMatchMaking = 0x19,
	k_eDownloadedReplay = 0x1a,
	k_eWatchedReplay = 0x1b,
	k_eViewMatchDetails = 0x1c,
	k_eMatchDetailsTab = 0x1d,
	k_eDeleteReplay = 0x1e,
	k_eBotMatch_Guided = 0x1f,
	k_eBotMatch_Easy = 0x20,
	k_eBotMatch_Hard = 0x21,
	k_eLiveUpdatedRoster = 0x22,
	k_eMatchMakingIdle_Displayed = 0x23,
	k_eMatchMakingIdle_Stopped = 0x24,
	k_eConnectReacquireTicket = 0x25,
	k_eConnectAttemptReconnect = 0x26,
	k_eDisconnectPresentedPrompt = 0x27,
	k_eDisconnectConfirmed = 0x28,
	k_eViewedSettings_Options = 0x29,
	k_eViewedSettings_Video = 0x2a,
	k_eViewedSettings_Audio = 0x2b,
	k_eViewedSettings_HotKey = 0x2c,
	k_eViewedSettings_ChatWheel = 0x2d,
	k_eViewedSettings_About = 0x2e,
	k_eOpenedSubmitFeedback = 0x2f,
	k_eTutorialSkip_Pressed = 0x30,
	k_eTutorialSkip_Confirmed = 0x31,
	k_eViewedGuidePage_5s = 0x32,
	k_eViewedGuidePage_15s = 0x33,
	k_eViewedGuidePage_30s = 0x34,
	k_eViewedGuidePage_60s = 0x35,
	k_eOpenedBookTest = 0x36,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EProfileCardSlotType : uint32_t
{
	k_EProfileCardSlotType_Empty = 0x0,
	k_EProfileCardSlotType_Stat = 0x1,
	k_EProfileCardSlotType_Hero = 0x2,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class PortraitDisplayMode_t : uint32_t
{
	PORTRAIT_DISPLAY_MODE_INVALID = 0xffffffffffffffff,
	PORTRAIT_DISPLAY_MODE_LOADOUT = 0x0,
	PORTRAIT_DISPLAY_MODE_LOADOUT_DIRE = 0x1,
	PORTRAIT_DISPLAY_MODE_LOADOUT_SMALL = 0x2,
	PORTRAIT_DISPLAY_MODE_TREASURE_SMALL = 0x3,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ECitadelAccountPermissionFlag : uint32_t
{
	k_eAccountPermission_PrivateBot = 0x1,
	k_eAccountPermission_CoopBot = 0x2,
	k_eAccountPermission_Unranked = 0x3,
};

// Registered binary: client.dll (project 'client')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class P2P_Messages : uint32_t
{
	p2p_TextMessage = 0x100,
	p2p_Voice = 0x101,
	p2p_Ping = 0x102,
	p2p_VRAvatarPosition = 0x103,
	p2p_WatchSynchronization = 0x104,
	p2p_FightingGame_GameData = 0x105,
	p2p_FightingGame_Connection = 0x106,
};

struct fogparams_t;
struct GameTime_t;
struct CSkeletonInstance;
struct CNetworkVelocityVector;
struct AttachmentHandle_t;
struct CRenderComponent;
struct CHitboxComponent;
struct CCollisionProperty;
struct CGlowProperty;
struct CNetworkViewOffsetVector;
struct CClientAlphaProperty;
struct C_PointCamera;
struct ParticleIndex_t;
struct C_EnvWindShared;
struct CRemapFloat;
struct CitadelCameraOperationsSequence_t;
struct GameTick_t;
struct C_fogplayerparams_t;
struct audioparams_t;
struct C_RopeKeyframe;
struct CModifierLevelFloat;
struct CGameSceneNode;
struct CNetworkVarChainer;
struct C_LightGlowOverlay;
struct CModelState;
struct CBaseAnimGraphController;
struct SatVolumeIndex_t;
struct DOFDesc_t;
struct CCitadelAbilityComponent;
struct CPointOffScreenIndicatorUi;
struct CRangeFloat;
struct C_EconItemView;
struct ShotID_t;
struct C_PointClientUIWorldPanel;
struct HeroID_t;
struct HeroStatsUI_t;
struct HeroStatsDisplay_t;
struct CFootstepTableHandle;
struct sky3dparams_t;
struct C_SkyCamera;
struct C_CommandContext;
struct CAnimGraphNetworkedVariables;
struct HSequence;
struct CBaseAnimGraph;
struct PhysicsRagdollPose_t;
struct AttackData_t;
struct AmmoIndex_t;
struct CountdownTimer;
struct CPlayer_WeaponServices;
struct CPlayer_ItemServices;
struct CPlayer_AutoaimServices;
struct CPlayer_ObserverServices;
struct CPlayer_WaterServices;
struct CPlayer_UseServices;
struct CPlayer_FlashlightServices;
struct CPlayer_CameraServices;
struct CPlayer_MovementServices;
struct C_RopeKeyframe::CPhysicsDelegate;
struct CCitadelHeroComponent;
struct TimedEvent;
struct CFireOverlay;
struct ModelConfigHandle_t;
struct CEntityIOOutput;
struct IncompatibleFilter_t;
struct CCitadelWeaponInfo;
struct ProjectileInfo_t;
struct DeploymentInfo_t;
struct AbilityTooltipDetails_t;
struct CitadelAbilityHUDPanel_t;
struct AdditionalAbilities_t;
struct CAttributeContainer;
struct style_index_t;
struct CCitadelAutoScaledTime;
struct CAttributeManager;
struct item_definition_index_t;
struct itemid_t;
struct CAttributeList;
struct CInButtonState;
struct CSkillFloat;
struct AbilityResource_t;
struct CCitadelModifierResponseRules_t;
struct attrib_definition_index_t;
struct NPCStatusEffectMap_t;
struct CSkillInt;
struct ModifierSerialNumber_t;
struct CModifierHandleBase;
struct ModifierRuntimeHandle_t;
struct CBreakableStageHelper;
struct CCitadelPlayerClipComponent;
struct ice_path_shard_model_desc_t;
struct VPhysicsCollisionAttribute_t;
struct ModifierPropRuntimeHandle_t;
struct shard_model_desc_t;
struct CLightComponent;
struct C_CitadelGameRules;
struct SceneEventId_t;
struct CBodyComponent;
struct CNetworkTransmitComponent;
struct CModifierProperty;
struct CParticleProperty;
struct ChangeAccessorFieldPathIndex_t;
struct CEntityIdentity;
struct CPropDataComponent;
struct C_CitadelPlayerPawn;
struct FireUserEntityIO_t;
struct CScriptComponent;
struct PlayerDataGlobal_t;
struct CitadelLobbyPlayerSlot_t;
struct CEntityInstance;
struct CGameSceneNodeHandle;
struct CNetworkOriginCellCoordQuantizedVector;
struct ModifierTrackedParticle_t;
struct MatchID_t;
struct CDecalInfo;
struct C_FireSmoke;

// Registered binary: client.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "CEntityIdentity * m_pEntity"
// MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
class CEntityInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8	
	// MNetworkEnable
	// MNetworkPriority "56"
	CEntityIdentity* m_pEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x10]; // 0x18
public:
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; // 0x28	
	bool m_bVisibleinPVS; // 0x30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "uint64 m_hStableHandle"
class CModifierHandleBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkSerializer "modifier_handle"
	uint64_t m_hStableHandle; // 0x8	
	
	// Datamap fields:
	// void CModifierHandleBase; // 0x0
	// void m_hRuntimeListHandle; // 0x10
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x3e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Time"
	CModifierLevelFloat m_flDuration; // 0x28	
	// MPropertyStartGroup "Time"
	// MPropertyDescription "If set, the duration will not get reduced from a refresh with a shorter duration"
	bool m_bKeepMaximumDurationOnRefresh; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x7]; // 0x39
public:
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Particle system to attach to the parent of the modifier"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticleEffect; // 0x40	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Name of particle control point config to use for ambient effect (empty means use 'preview' config)"
	CUtlString m_strParticleEffectConfig; // 0x120	
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Status Effect to apply to the parent of the modifier"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticleStatusEffect; // 0x128	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Name of particle control point config to use for status effect (empty means use 'preview' config)"
	CUtlString m_strParticleStatusEffectConfig; // 0x208	
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Screen-space particle system to create if the parent of the modifier is the local player"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strScreenParticleEffect; // 0x210	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Name of particle control point config to use for screen-space effect (empty means use 'preview' config)"
	CUtlString m_strScreenParticleEffectConfig; // 0x2f0	
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Priority of this status effect relative to others"
	int32_t m_nStatusEffectPriority; // 0x2f8	
private:
	[[maybe_unused]] uint8_t __pad02fc[0x4]; // 0x2fc
public:
	// MPropertyGroupName "Visuals"
	CUtlVector< ModifierRenderAttribute_t > m_vecRenderAttributes; // 0x300	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sStartSound; // 0x318	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sAmbientLoopingSound; // 0x328	
	// MPropertyGroupName "Sounds"
	ModifierSoundRecipients_t m_nAmbientLoopingSoundRecipients; // 0x338	
private:
	[[maybe_unused]] uint8_t __pad033c[0x4]; // 0x33c
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sEndSound; // 0x340	
	// MPropertyGroupName "Scripted Settings"
	CBitVecEnum< EModifierState > m_nEnabledStateMask; // 0x350	
	// MPropertyGroupName "Scripted Settings"
	CBitVecEnum< EModifierState > m_nDisabledStateMask; // 0x364	
	// MPropertyGroupName "Scripted Settings"
	ModifierAttribute_t m_nAttributes; // 0x378	
private:
	[[maybe_unused]] uint8_t __pad037c[0x4]; // 0x37c
public:
	// MPropertyGroupName "Scripted Settings"
	// MPropertyDescription "Scripted Modifier Values"
	CUtlVector< ModifierScriptValue_t > m_vecScriptValues; // 0x380	
	// MPropertyGroupName "Scripted Settings"
	// MPropertyDescription "Scripted Event Handlers"
	CUtlVector< ModifierScriptedEventHandler_t > m_vecScriptEventHandlers; // 0x398	
	ModifierDisableGroup_t m_nDisableGroupsMask; // 0x3b0	
	// MPropertyDescription "When set, the modifier only provides data to requests made directly to the attached entity and not to other modifier properties that the owner provides to."
	bool m_bPrivateAccess; // 0x3b4	
	// MPropertyGroupName "UI"
	// MPropertyDescription "When set, the modifier will not be visible to UI or visible modifier list."
	bool m_bIsHidden; // 0x3b5	
private:
	[[maybe_unused]] uint8_t __pad03b6[0x2]; // 0x3b6
public:
	// MPropertyGroupName "UI"
	// MPropertySuppressExpr "m_bIsHidden != true"
	ModifierHiddenType_t m_eHiddenType; // 0x3b8	
private:
	[[maybe_unused]] uint8_t __pad03bc[0x4]; // 0x3bc
public:
	// MPropertyGroupName "UI"
	// MPropertyDescription "When set, use the value as localization key."
	CUtlString m_sLocalizationName; // 0x3c0	
	// MPropertyDescription "When to consider the modifier a debuff."
	ModifierDebuffType_t m_eDebuffType; // 0x3c8	
	// MPropertyDescription "When set, stacks will automatically be decayed after a duration's worth of time has passed.  Only makes sense if adding a stack refreshed the modifier."
	bool m_bAutomaticallyDecayStacks; // 0x3cc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x90
// Has VTable
// Is Abstract
class CBaseModifier
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	ModifierSerialNumber_t m_nSerialNumber; // 0x28	
	GameTime_t m_flLastAppliedTime; // 0x2c	
	GameTime_t m_flCreationTime; // 0x30	
	float m_flDuration; // 0x34	
	CHandle< C_BaseEntity > m_hCaster; // 0x38	
	CHandle< C_BaseEntity > m_hAbility; // 0x3c	
	CModifierHandleBase m_hAuraProvider; // 0x40	
	CUtlStringToken m_nAbilitySubclassID; // 0x58	
	uint8_t m_iAttributes; // 0x5c	
	uint8_t m_iTeam; // 0x5d	
	int16_t m_iStackCount; // 0x5e	
	int16_t m_iMaxStackCount; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0062[0x6]; // 0x62
public:
	CUtlVector< GameTime_t >* m_pVecStackDecayTimes; // 0x68	
	uint8_t m_eDestroyReason; // 0x70	
	bool m_bDisabled; // 0x71	
	bool m_bSuppressSendModifier; // 0x72	
private:
	[[maybe_unused]] uint8_t __pad0073[0x1]; // 0x73
public:
	float m_flThinkInterval; // 0x74	
	GameTime_t m_flThinkIntervalStartTime; // 0x78	
	float m_flTimeScale; // 0x7c	
	CUtlVector< IModifierTrackedObject* >* m_pVecTrackedObjects; // 0x80	
	ModifierRuntimeHandle_t m_hModifierListHandle; // 0x88	
	uint8_t m_nDebugHelperFlags; // 0x8c	
	
	// Datamap fields:
	// void m_pModifierProp; // 0x20
	// void m_pSubclassVData; // 0x10
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
// Is Abstract
class CCitadelModifier : public CBaseModifier
{
public:
	// Datamap fields:
	// void m_pVecAbilityValues; // 0x98
	// float m_flEffectiveness; // 0xa0
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x190
// Has VTable
class CCitadel_Modifier_Rutger_ForceField_PushOut : public CCitadelModifier
{
public:
	Vector m_vStart; // 0xc0	
	Vector m_vDest; // 0xcc	
	Vector m_vCenter; // 0xd8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
class CCitadelModifierVData : public CModifierVData
{
public:
	bool m_bIsBuildup; // 0x3e0	
	// MPropertySuppressField
	bool m_bNetworkValuesForStatsPreview; // 0x3e1	
private:
	[[maybe_unused]] uint8_t __pad03e2[0x6]; // 0x3e2
public:
	CUtlVector< CUtlString > m_vecAutoRegisterModifierValueFromAbilityPropertyName; // 0x3e8	
	// MPropertyStartGroup "Kill & Assist Credit"
	bool m_bCasterCountsAsAssister; // 0x400	
private:
	[[maybe_unused]] uint8_t __pad0401[0x3]; // 0x401
public:
	// MPropertyDescription "When set, an additional, invisible modifier will be left on the parent when this modifier expires.  This is to aid in giving assist credit for modifiers that deal no damage (ex. Astro's Lasso)"
	float m_flLingeringAssistWindow; // 0x404	
	// MPropertyStartGroup "Time"
	// MPropertyDescription "When set, the duration will get scaled depending on the owner's timescale"
	bool m_bDurationCanBeTimeScaled; // 0x408	
	bool m_bDurationReducible; // 0x409	
private:
	[[maybe_unused]] uint8_t __pad040a[0x2]; // 0x40a
public:
	// MPropertyDescription "Whose timescale to use when adjusting duration."
	ModifierTimeScaleSource_t m_eTimeScaleSource; // 0x40c	
	// MPropertyDescription "When true, the 'effectiveness' value for the modifier will be used to scale the duration. You most likely want 'Keep Maximum Duration On Refresh' to match this value"
	bool m_bDurationAffectedByEffectiveness; // 0x410	
private:
	[[maybe_unused]] uint8_t __pad0411[0x7]; // 0x411
public:
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "A list of AnimGraph parameters whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
	CUtlVector< CCitadelTrackedAnimGraphModifierState_t > m_vecSetAndTrackedAnimGraphParams; // 0x418	
	// MPropertyDescription "A list of Bodygroups whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
	CUtlVector< CCitadelTrackedBodygroupModifierState_t > m_vecSetAndTrackedBodyGroups; // 0x430	
	// MPropertyStartGroup "UI"
	ModifierOverheadDrawType_t m_eDrawOverheadStatus; // 0x448	
	bool m_bReverseHudProgressBar; // 0x44c	
private:
	[[maybe_unused]] uint8_t __pad044d[0x3]; // 0x44d
public:
	CUtlString m_strSmallIconCssClass; // 0x450	
	CUtlString m_strHintText; // 0x458	
	CPanoramaImageName m_strHudIcon; // 0x460	
	HudDisplayLocation_t m_eHudDisplayLocation; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0474[0x4]; // 0x474
public:
	// MPropertyDescription "When set, the message will appear in the middle of the HUD for the target player."
	CUtlString m_strHudMessageText; // 0x478	
	// MPropertyDescription "When set, the modifier will not be visible overhead of the casting player for the other players"
	bool m_bIsHiddenOverhead; // 0x480	
private:
	[[maybe_unused]] uint8_t __pad0481[0x7]; // 0x481
public:
	// MPropertyDescription "A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set)"
	CUtlVector< EModifierValue > m_vecAlwaysShowInStatModifierUI; // 0x488	
	// MPropertyStartGroup "Responses"
	CCitadelModifierResponseRules_t m_OnCreateResponse; // 0x4a0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // 0x4d8	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Created' once the modifier is removed.  Un-check this to allow it to continue past the modifier's lifetime."
	bool m_bEndCreatedSequenceOnRemove; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad0559[0x7]; // 0x559
public:
	CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // 0x560	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sExpiredSound; // 0x5e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_LingeringAssist : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'entity2')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "int32 m_iGlowType"
// MNetworkVarNames "int32 m_iGlowTeam"
// MNetworkVarNames "int32 m_nGlowRange"
// MNetworkVarNames "int32 m_nGlowRangeMin"
// MNetworkVarNames "Color m_glowColorOverride"
// MNetworkVarNames "bool m_bFlashing"
// MNetworkVarNames "float m_flGlowTime"
// MNetworkVarNames "float m_flGlowStartTime"
class CGlowProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_fGlowColor; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0014[0x1c]; // 0x14
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowTypeChanged"
	int32_t m_iGlowType; // 0x30	
	// MNetworkEnable
	int32_t m_iGlowTeam; // 0x34	
	// MNetworkEnable
	int32_t m_nGlowRange; // 0x38	
	// MNetworkEnable
	int32_t m_nGlowRangeMin; // 0x3c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowColorChanged"
	Color m_glowColorOverride; // 0x40	
	// MNetworkEnable
	bool m_bFlashing; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MNetworkEnable
	float m_flGlowTime; // 0x48	
	// MNetworkEnable
	float m_flGlowStartTime; // 0x4c	
	bool m_bGlowing; // 0x50	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x30
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "uint64 m_nInteractsAs"
// MNetworkVarNames "uint64 m_nInteractsWith"
// MNetworkVarNames "uint64 m_nInteractsExclude"
// MNetworkVarNames "uint32 m_nEntityId"
// MNetworkVarNames "uint32 m_nOwnerId"
// MNetworkVarNames "uint16 m_nHierarchyId"
// MNetworkVarNames "uint8 m_nCollisionGroup"
// MNetworkVarNames "uint8 m_nCollisionFunctionMask"
struct VPhysicsCollisionAttribute_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	uint64_t m_nInteractsAs; // 0x8	
	// MNetworkEnable
	uint64_t m_nInteractsWith; // 0x10	
	// MNetworkEnable
	uint64_t m_nInteractsExclude; // 0x18	
	// MNetworkEnable
	uint32_t m_nEntityId; // 0x20	
	// MNetworkEnable
	uint32_t m_nOwnerId; // 0x24	
	// MNetworkEnable
	uint16_t m_nHierarchyId; // 0x28	
	// MNetworkEnable
	uint8_t m_nCollisionGroup; // 0x2a	
	// MNetworkEnable
	uint8_t m_nCollisionFunctionMask; // 0x2b	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataOverlayType
class CitadelAbilityVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Meta"
	EAbilityType_t m_eAbilityType; // 0x28	
	// MPropertyStartGroup "Meta"
	EItemSlotTypes_t m_eItemSlotType; // 0x29	
	bool m_bDisabled; // 0x2a	
	bool m_bInDevelopment; // 0x2b	
	bool m_bStartTrained; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	int32_t m_iMaxLevel; // 0x30	
	int32_t m_nAbilityPointsCost; // 0x34	
	int32_t m_nAbillityUnlocksCost; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	uint64_t m_iUpdateTime; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0048[0x8]; // 0x48
public:
	// MPropertyStartGroup "Behavior"
	EAbilityBehavior_t m_nAbilityBehaviors; // 0x50	
	EAbilityTargetingLocation_t m_eAbilityTargetingLocation; // 0x58	
	EAbilityTargetingShape_t m_eAbilityTargetingShape; // 0x5c	
	// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
	float m_flTargetingConeAngle; // 0x60	
	// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
	float m_flTargetingConeHalfWidth; // 0x64	
	// MPropertyDescription "When true, we will do an extra trace with the same cone shape, but with the cone laying flat in XY"
	// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
	bool m_bIncludeExtra2DCone; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	EAbilityActivation_t m_eAbilityActivation; // 0x6c	
	// MPropertyDescription "If set, this button must be down in addition to our trigger button (be default the slot button) in order to activate this ability."
	InputBitMask_t m_TriggerButtonPreReqButton; // 0x70	
	// MPropertyDescription "If set, this is the button requierd to be pressed to activate this ability."
	InputBitMask_t m_TriggerButtonOverride; // 0x78	
	EAbilitySpectatePriority m_eAbilitySpectatePriority; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	CBitVecEnum< EModifierState > m_bitsInterruptingStates; // 0x84	
	IncompatibleFilter_t m_IncompatibleFilter; // 0x98	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0xa8	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0xac	
	// MPropertyDescription "During post-cast, what modifier states are set."
	CBitVecEnum< EModifierState > m_bitsPostCastEnabledStateMask; // 0xb0	
	// MPropertyDescription "This ability provides these types of ability target effects."
	ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // 0xc4	
	bool m_bShowTargetingPreviewWhileChanneling; // 0xc8	
	bool m_bShowTargetingPreviewWhileCasting; // 0xc9	
private:
	[[maybe_unused]] uint8_t __pad00ca[0x6]; // 0xca
public:
	// MPropertyStartGroup
	// MPropertyFriendlyName "Weapon Info"
	CCitadelWeaponInfo m_WeaponInfo; // 0xd0	
	// MPropertyFriendlyName "Projectile Info"
	ProjectileInfo_t m_projectileInfo; // 0x728	
	// MPropertyFriendlyName "Deployment Info"
	DeploymentInfo_t m_deploymentInfo; // 0xa98	
	// MPropertyStartGroup
	CUtlOrderedMap< CUtlString, CitadelAbilityProperty_t > m_mapAbilityProperties; // 0xc78	
	CUtlVector< CSubclassName< 4 > > m_vecDependentAbilities; // 0xca0	
	CUtlVector< AbilityUpgrade_t > m_vecAbilityUpgrades; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cd0[0x20]; // 0xcd0
public:
	// MPropertyStartGroup "AnimGraph"
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strCastAnimGraphParam; // 0xcf0	
	// MPropertyDescription "If set, this will be the value passed to the animgraph when this ability is selected instead of the ability name."
	CUtlString m_strSelectionNameOverride; // 0xcf8	
	CUtlString m_strCastAnimSequenceName; // 0xd00	
	// MPropertyStartGroup "UI"
	// MPropertySuppressExpr "m_bIsSignatureAbility == false"
	AbilityTooltipDetails_t m_AbilityTooltipDetails; // 0xd08	
	CUtlString m_strCSSClass; // 0xd38	
	CPanoramaImageName m_strAbilityImage; // 0xd40	
	CUtlString m_strMoviePreviewPath; // 0xd50	
	CitadelAbilityHUDPanel_t m_HUDPanel; // 0xd58	
	bool m_bShowInPassiveItemsArea; // 0xd90	
	bool m_bForceShowHUDPanel; // 0xd91	
private:
	[[maybe_unused]] uint8_t __pad0d92[0x6]; // 0xd92
public:
	// MPropertyFriendlyName "Additional Abilities"
	AdditionalAbilities_t m_additionalAbilities; // 0xd98	
	CUtlString m_strCancelAbilityKey; // 0xdb8	
	CUtlString m_strSecondaryStatName; // 0xdc0	
	// MPropertyStartGroup "Camera"
	// MPropertyDescription "Camera sequence that plays when casting starts and stops when casting completes, unless the bool below is un-checked"
	CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // 0xdc8	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Cast Start' once the cast completes successfully.  Un-check this to allow it to continue past the cast."
	bool m_bEndCastStartSequenceOnCastComplete; // 0xe48	
private:
	[[maybe_unused]] uint8_t __pad0e49[0x7]; // 0xe49
public:
	// MPropertyDescription "Camera sequence that plays when casting completes."
	CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // 0xe50	
	// MPropertyDescription "Camera sequence that plays when channeling starts and is stopped when channeling ends, unless the bool below is un-checked."
	CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // 0xed0	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Channel Start' once the channel completes successfully.  Un-check this to allow it to continue past the channel duration."
	bool m_bEndChannelStartSequenceOnChannelComplete; // 0xf50	
private:
	[[maybe_unused]] uint8_t __pad0f51[0x3]; // 0xf51
public:
	float m_flCameraPreviewOffset; // 0xf54	
	float m_flCameraPreviewDistance; // 0xf58	
	float m_flCameraPreviewSpeed; // 0xf5c	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Preview particle attaching to the caster before cast"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_previewParticle; // 0xf60	
	// MPropertyDescription "Preview path particle shows ability's custom path"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewPathParticle; // 0x1040	
	// MPropertyDescription "Particle attaching to the caster on cast event"
	CUtlOrderedMap< AbilityCastEvent_t, CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > > m_mapCastEventParticles; // 0x1120	
	// MPropertyDescription "Trace particle when hit an enemy with targeted ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotHitParticle; // 0x1148	
	// MPropertyDescription "Trace particle when missed an enemy with targeted ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotMissParticle; // 0x1228	
	// MPropertyDescription "Preview particle on attaching to targets of this ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingPreviewParticle; // 0x1308	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSelectedSound; // 0x13e8	
	CSoundEventName m_strUnselectedSound; // 0x13f8	
	CSoundEventName m_strSelectedLoopSound; // 0x1408	
	CSoundEventName m_strCastSound; // 0x1418	
	CSoundEventName m_strChannelSound; // 0x1428	
	CSoundEventName m_strChannelLoopSound; // 0x1438	
	CSoundEventName m_strCastDelaySound; // 0x1448	
	CSoundEventName m_strCastDelayLoopSound; // 0x1458	
	// MPropertyDescription "plays for local player attacker dealing damage with this ability"
	CSoundEventName m_strHitConfirmationSound; // 0x1468	
	// MPropertyDescription "plays for local player victim taking damage from this ability"
	CSoundEventName m_strDamageTakenSound; // 0x1478	
	CSoundEventName m_strAbilityOffCooldownSound; // 0x1488	
	CSoundEventName m_strAbilityChargeReadySound; // 0x1498	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AutoChannelModifier; // 0x14a8	
	CEmbeddedSubclass< CBaseModifier > m_AutoCastDelayModifier; // 0x14b8	
	CUtlVector< CEmbeddedSubclass< CBaseModifier > > m_AutoIntrinsicModifiers; // 0x14c8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tokamak_CrimsonCannonVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserShot; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CasterOnlyTargetParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyTargetedParticle; // 0x1780	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strEnemyBeenTargetedSound; // 0x1860	
	CSoundEventName m_strCasterTargetSelectedSound; // 0x1870	
	CSoundEventName m_strFireSound; // 0x1880	
	CSoundEventName m_strImpactSound; // 0x1890	
	CSoundEventName m_strBlockedSound; // 0x18a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
class CCitadel_Modifier_HollowPoint_Proc : public CCitadelModifier
{
public:
	int32_t m_nStacksPerBullet; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BaseEventProcVData : public CCitadelModifierVData
{
public:
	bool m_bProcChanceAffectedByEffectiveness; // 0x5f0	
	bool m_bShouldApplyAbilityCooldown; // 0x5f1	
	// MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
	bool m_bCanProcMultipleTimesOnOneTarget; // 0x5f2	
	bool m_bCanProcByOtherObjects; // 0x5f3	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x5f4	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
public:
	CUtlVector< ECitadelDamageType > m_vecProcDamageTypes; // 0x600	
	TakeDamageFlags_t m_nRequiredDamageFlags; // 0x618	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x68
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector dirPrimary"
// MNetworkVarNames "Color colorPrimary"
// MNetworkVarNames "Color colorSecondary"
// MNetworkVarNames "Color colorPrimaryLerpTo"
// MNetworkVarNames "Color colorSecondaryLerpTo"
// MNetworkVarNames "float32 start"
// MNetworkVarNames "float32 end"
// MNetworkVarNames "float32 farz"
// MNetworkVarNames "float32 maxdensity"
// MNetworkVarNames "float32 exponent"
// MNetworkVarNames "float32 HDRColorScale"
// MNetworkVarNames "float32 skyboxFogFactor"
// MNetworkVarNames "float32 skyboxFogFactorLerpTo"
// MNetworkVarNames "float32 startLerpTo"
// MNetworkVarNames "float32 endLerpTo"
// MNetworkVarNames "float32 maxdensityLerpTo"
// MNetworkVarNames "GameTime_t lerptime"
// MNetworkVarNames "float32 duration"
// MNetworkVarNames "float32 blendtobackground"
// MNetworkVarNames "float32 scattering"
// MNetworkVarNames "float32 locallightscale"
// MNetworkVarNames "bool enable"
// MNetworkVarNames "bool blend"
// MNetworkVarNames "bool m_bNoReflectionFog"
struct fogparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector dirPrimary; // 0x8	
	// MNetworkEnable
	Color colorPrimary; // 0x14	
	// MNetworkEnable
	Color colorSecondary; // 0x18	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorPrimaryLerpTo; // 0x1c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorSecondaryLerpTo; // 0x20	
	// MNetworkEnable
	float start; // 0x24	
	// MNetworkEnable
	float end; // 0x28	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float farz; // 0x2c	
	// MNetworkEnable
	float maxdensity; // 0x30	
	// MNetworkEnable
	float exponent; // 0x34	
	// MNetworkEnable
	float HDRColorScale; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactor; // 0x3c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactorLerpTo; // 0x40	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float startLerpTo; // 0x44	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float endLerpTo; // 0x48	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float maxdensityLerpTo; // 0x4c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	GameTime_t lerptime; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float duration; // 0x54	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float blendtobackground; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float scattering; // 0x5c	
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float locallightscale; // 0x60	
	// MNetworkEnable
	bool enable; // 0x64	
	// MNetworkEnable
	bool blend; // 0x65	
	// MNetworkEnable
	bool m_bNoReflectionFog; // 0x66	
	bool m_bPadding; // 0x67	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "CTransform m_Transforms"
// MNetworkVarNames "EHANDLE m_hOwner"
struct PhysicsRagdollPose_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnTransformChanged"
	C_NetworkUtlVectorBase< CTransform > m_Transforms; // 0x8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOwner; // 0x20	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MNetworkExcludeByName "m_bClientSideRagdoll"
// MNetworkExcludeByName "m_iMaxHealth"
// MNetworkExcludeByUserGroup "Player"
// MNetworkExcludeByUserGroup "Water"
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkExcludeByName "m_spawnflags"
// MNetworkExcludeByName "m_bTakesDamage"
// MNetworkExcludeByName "m_nTakeDamageFlags"
// MNetworkExcludeByName "m_vecAbsVelocity"
// MNetworkExcludeByName "m_flSpeed"
// MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
// MNetworkVarNames "CModifierProperty * m_pModifierProp"
// MNetworkVarNames "int32 m_iMaxHealth"
// MNetworkVarNames "int32 m_iHealth"
// MNetworkVarNames "uint8 m_lifeState"
// MNetworkVarNames "bool m_bTakesDamage"
// MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
// MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
// MNetworkVarNames "uint8 m_ubInterpolationFrame"
// MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
// MNetworkVarNames "float32 m_flAnimTime"
// MNetworkVarNames "float32 m_flSimulationTime"
// MNetworkVarNames "GameTime_t m_flCreateTime"
// MNetworkVarNames "float m_flSpeed"
// MNetworkVarNames "bool m_bClientSideRagdoll"
// MNetworkVarNames "uint8 m_iTeamNum"
// MNetworkVarNames "uint32 m_spawnflags"
// MNetworkVarNames "GameTick_t m_nNextThinkTick"
// MNetworkVarNames "uint32 m_fFlags"
// MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
// MNetworkVarNames "MoveCollide_t m_MoveCollide"
// MNetworkVarNames "MoveType_t m_MoveType"
// MNetworkVarNames "float32 m_flWaterLevel"
// MNetworkVarNames "uint32 m_fEffects"
// MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
// MNetworkVarNames "int m_nGroundBodyIndex"
// MNetworkVarNames "float32 m_flFriction"
// MNetworkVarNames "float32 m_flElasticity"
// MNetworkVarNames "float32 m_flGravityScale"
// MNetworkVarNames "float32 m_flTimeScale"
// MNetworkVarNames "bool m_bAnimatedEveryTick"
// MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
class C_BaseEntity : public CEntityInstance
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "48"
	CBodyComponent* m_CBodyComponent; // 0x38	
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad01e0[0x120]; // 0x1e0
public:
	GameTick_t m_nLastThinkTick; // 0x300	
private:
	[[maybe_unused]] uint8_t __pad0304[0x4]; // 0x304
public:
	CGameSceneNode* m_pGameSceneNode; // 0x308	
	CRenderComponent* m_pRenderComponent; // 0x310	
	CCollisionProperty* m_pCollision; // 0x318	
	// MNetworkEnable
	// MNetworkChangePointerCallback
	CModifierProperty* m_pModifierProp; // 0x320	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; // 0x328	
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x32c	
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x330	
	// MNetworkEnable
	bool m_bTakesDamage; // 0x331	
private:
	[[maybe_unused]] uint8_t __pad0332[0x6]; // 0x332
public:
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x338	
	// MNetworkEnable
	EntityPlatformTypes_t m_nPlatformType; // 0x340	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x341	
private:
	[[maybe_unused]] uint8_t __pad0342[0x2]; // 0x342
public:
	CHandle< C_BaseEntity > m_hSceneObjectController; // 0x344	
	int32_t m_nNoInterpolationTick; // 0x348	
	int32_t m_nVisibilityNoInterpolationTick; // 0x34c	
	float m_flProxyRandomValue; // 0x350	
	int32_t m_iEFlags; // 0x354	
	uint8_t m_nWaterType; // 0x358	
	bool m_bInterpolateEvenWithNoModel; // 0x359	
	bool m_bPredictionEligible; // 0x35a	
	bool m_bApplyLayerMatchIDToModel; // 0x35b	
	CUtlStringToken m_tokLayerMatchID; // 0x35c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSubclassIDChanged"
	CUtlStringToken m_nSubclassID; // 0x360	
private:
	[[maybe_unused]] uint8_t __pad0364[0xc]; // 0x364
public:
	int32_t m_nSimulationTick; // 0x370	
	int32_t m_iCurrentThinkContext; // 0x374	
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x378	
	bool m_bDisabledContextThinks; // 0x390	
private:
	[[maybe_unused]] uint8_t __pad0391[0x3]; // 0x391
public:
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	float m_flAnimTime; // 0x394	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x398	
	uint8_t m_nSceneObjectOverrideFlags; // 0x39c	
	bool m_bHasSuccessfullyInterpolated; // 0x39d	
	bool m_bHasAddedVarsToInterpolation; // 0x39e	
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x39f	
	int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3a0	
	uint16_t m_ListEntry[11]; // 0x3a8	
private:
	[[maybe_unused]] uint8_t __pad03be[0x6]; // 0x3be
public:
	// MNetworkEnable
	GameTime_t m_flCreateTime; // 0x3c4	
	// MNetworkEnable
	float m_flSpeed; // 0x3c8	
	uint16_t m_EntClientFlags; // 0x3cc	
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x3ce	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; // 0x3cf	
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x3d0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; // 0x3d4	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnFlagsChanged"
	uint32_t m_fFlags; // 0x3d8	
	Vector m_vecAbsVelocity; // 0x3dc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; // 0x3e8	
private:
	[[maybe_unused]] uint8_t __pad0410[0x8]; // 0x410
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; // 0x418	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< C_BaseEntity > m_hOwnerEntity; // 0x41c	
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x420	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; // 0x421	
	MoveType_t m_nActualMoveType; // 0x422	
private:
	[[maybe_unused]] uint8_t __pad0423[0x1]; // 0x423
public:
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkChangeCallback "OnWaterLevelChangeNetworked"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	float m_flWaterLevel; // 0x424	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x428	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hGroundEntity; // 0x42c	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	int32_t m_nGroundBodyIndex; // 0x430	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x434	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	float m_flElasticity; // 0x438	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x43c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; // 0x440	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x444	
private:
	[[maybe_unused]] uint8_t __pad0445[0x3]; // 0x445
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnNavIgnoreChanged"
	GameTime_t m_flNavIgnoreUntilTime; // 0x448	
	uint16_t m_hThink; // 0x44c	
private:
	[[maybe_unused]] uint8_t __pad044e[0xa]; // 0x44e
public:
	uint8_t m_fBBoxVisFlags; // 0x458	
	bool m_bPredictable; // 0x459	
	bool m_bRenderWithViewModels; // 0x45a	
private:
	[[maybe_unused]] uint8_t __pad045b[0x1]; // 0x45b
public:
	CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x45c	
	int32_t m_nFirstPredictableCommand; // 0x460	
	int32_t m_nLastPredictableCommand; // 0x464	
	CHandle< C_BaseEntity > m_hOldMoveParent; // 0x468	
private:
	[[maybe_unused]] uint8_t __pad046c[0x4]; // 0x46c
public:
	CParticleProperty m_Particles; // 0x470	
	CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x498	
	CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04c8[0x18]; // 0x4c8
public:
	int32_t m_nNextScriptVarRecordID; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0xc]; // 0x4e4
public:
	QAngle m_vecAngVelocity; // 0x4f0	
	int32_t m_DataChangeEventRef; // 0x4fc	
	CUtlVector< CEntityHandle > m_dependencies; // 0x500	
	int32_t m_nCreationTick; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x9]; // 0x51c
public:
	bool m_bAnimTimeChanged; // 0x525	
	bool m_bSimulationTimeChanged; // 0x526	
private:
	[[maybe_unused]] uint8_t __pad0527[0x9]; // 0x527
public:
	CUtlString m_sUniqueHammerID; // 0x530	
	
	// Static fields:
	static bool &Get_sm_bDatadescValidating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[0]->m_instance);};
	static bool &Get_sm_bAccurateTriggerBboxChecks(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[1]->m_instance);};
	static bool &Get_sm_bDisableTouchFuncs(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[2]->m_instance);};
	static bool &Get_m_bAllowPrecache(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[3]->m_instance);};
	static LatchDirtyPermission_t &Get_s_nLatchPermissions(){return *reinterpret_cast<LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[4]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[5]->m_instance);};
	static CBasePlayerController* &Get_m_pPredictionPlayerController(){return *reinterpret_cast<CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[6]->m_instance);};
	static bool &Get_s_bAbsQueriesValid(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[7]->m_instance);};
	static bool &Get_s_bAbsRecomputationEnabled(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[8]->m_instance);};
	static bool &Get_s_bComputingInterpolatedValues(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[9]->m_instance);};
	static bool &Get_s_bPreventingSetAnimRunAnimEvents(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[10]->m_instance);};
	static CUtlVector< C_BaseEntity* > &Get_gm_UsableObjects(){return *reinterpret_cast<CUtlVector< C_BaseEntity* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[11]->m_instance);};
	
	// Datamap fields:
	// CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// void m_CScriptComponent; // 0x28
	// CUtlSymbolLarge subclass_name; // 0x7fffffff
	// void m_pSubclassVData; // 0x368
	// QAngle angles; // 0x7fffffff
	// Vector origin; // 0x7fffffff
	// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
	// CUtlString ownername; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MNetworkVarNames "uint32 m_bvDisabledHitGroups"
class CHitboxComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x1c]; // 0x8
public:
	// MNetworkEnable
	uint32_t m_bvDisabledHitGroups[1]; // 0x24	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CHitboxComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_CloakingDevice_Active_Ambush_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisRevealedParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbushParticle; // 0x6d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strActivateAmbushSound; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Tech_Defender_Shredders_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
class C_SoundEventEntity : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Blitz_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BlitzModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_TechAmpModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlowParticle; // 0x1500	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProcSound; // 0x15e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
// Is Abstract
// 
// MNetworkIncludeByName "m_flTimeScale"
// MNetworkExcludeByName "m_angRotation"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_cellX"
// MNetworkExcludeByName "m_cellY"
// MNetworkExcludeByName "m_cellZ"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkExcludeByName "m_flSimulationTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_nForceBone"
// MNetworkExcludeByName "m_nHitboxSet"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_vecForce"
// MNetworkExcludeByName "m_vecMaxs"
// MNetworkExcludeByName "m_vecMins"
// MNetworkExcludeByName "m_vecOrigin"
// MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
// MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
// MNetworkExcludeByName "m_vLookTargetPosition"
// MNetworkExcludeByName "m_MoveCollide"
// MNetworkExcludeByName "m_MoveType"
// MNetworkExcludeByName "m_Gender"
// MNetworkExcludeByName "m_flElasticity"
// MNetworkExcludeByName "m_nMinCPULevel"
// MNetworkExcludeByName "m_nMinGPULevel"
// MNetworkExcludeByName "m_nMaxCPULevel"
// MNetworkExcludeByName "m_nMaxGPULevel"
// MNetworkExcludeByName "m_flNavIgnoreUntilTime"
// MNetworkExcludeByName "m_ubInterpolationFrame"
// MNetworkExcludeByName "m_flScale"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkOverride "m_flTimeScale"
// MNetworkVarNames "bool m_bChanneling"
// MNetworkVarNames "bool m_bInCastDelay"
// MNetworkVarNames "EntitySubclassID_t m_vecImbuedByAbilitiyIDs"
// MNetworkVarNames "int m_nUpgradeBits"
// MNetworkVarNames "int m_iBucketID"
// MNetworkVarNames "bool m_bToggleState"
// MNetworkVarNames "GameTime_t m_flToggledTime"
// MNetworkVarNames "GameTime_t m_flCooldownStart"
// MNetworkVarNames "GameTime_t m_flCooldownEnd"
// MNetworkVarNames "GameTime_t m_flChannelStartTime"
// MNetworkVarNames "GameTime_t m_flCastDelayStartTime"
// MNetworkVarNames "EAbilitySlots_t m_eAbilitySlot"
// MNetworkVarNames "int m_iRemainingCharges"
// MNetworkVarNames "GameTime_t m_flChargeRechargeStart"
// MNetworkVarNames "GameTime_t m_flChargeRechargeEnd"
// MNetworkVarNames "GameTime_t m_flMovementControlActiveTime"
// MNetworkVarNames "GameTime_t m_flSelectedChangedTime"
// MNetworkVarNames "GameTime_t m_flAltCastHoldStartTime"
// MNetworkVarNames "AbilityID_t m_nImbuedAbilityID"
class C_CitadelBaseAbility : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0xc8]; // 0x538
public:
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x600	
	CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // 0x618	
	CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // 0x630	
	CGlobalSymbol m_strUsedCastGraphParam; // 0x648	
	int32_t m_nCastParamNeedsResetTick; // 0x650	
	bool m_bIsCoolingDownInternal; // 0x654	
private:
	[[maybe_unused]] uint8_t __pad0655[0x1b]; // 0x655
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnChannelingChanged"
	bool m_bChanneling; // 0x670	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInCastDelayChanged"
	bool m_bInCastDelay; // 0x671	
private:
	[[maybe_unused]] uint8_t __pad0672[0x6]; // 0x672
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnAbilityImbuedChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecImbuedByAbilitiyIDs; // 0x678	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpgradeBitsChanged"
	// MNetworkPriority "32"
	int32_t m_nUpgradeBits; // 0x690	
	// MNetworkEnable
	int32_t m_iBucketID; // 0x694	
	// MNetworkEnable
	bool m_bToggleState; // 0x698	
private:
	[[maybe_unused]] uint8_t __pad0699[0x3]; // 0x699
public:
	// MNetworkEnable
	GameTime_t m_flToggledTime; // 0x69c	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flCooldownStart; // 0x6a0	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flCooldownEnd; // 0x6a4	
	// MNetworkEnable
	GameTime_t m_flChannelStartTime; // 0x6a8	
	// MNetworkEnable
	GameTime_t m_flCastDelayStartTime; // 0x6ac	
	// MNetworkEnable
	// MNetworkChangeCallback "OnAbilitySlotChanged"
	EAbilitySlots_t m_eAbilitySlot; // 0x6b0	
private:
	[[maybe_unused]] uint8_t __pad06b2[0x2]; // 0x6b2
public:
	GameTime_t m_flPostCastDelayEndTime; // 0x6b4	
	// MNetworkEnable
	// MNetworkPriority "32"
	int32_t m_iRemainingCharges; // 0x6b8	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flChargeRechargeStart; // 0x6bc	
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_flChargeRechargeEnd; // 0x6c0	
	// MNetworkEnable
	GameTime_t m_flMovementControlActiveTime; // 0x6c4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSelectedChangedTime; // 0x6c8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAltCastHoldStartTime; // 0x6cc	
	// MNetworkEnable
	CUtlStringToken m_nImbuedAbilityID; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_ImmobilizeTrap : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
class CCitadel_Modifier_BaseBulletPreRollProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
	bool m_bRollOnceForAllBulletsInAShot; // 0x620	
private:
	[[maybe_unused]] uint8_t __pad0621[0x3]; // 0x621
public:
	// MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
	float m_flMaxBulletsToProcInShot; // 0x624	
	// MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
	bool m_bCanProcMultipleTimesFromSameShot; // 0x628	
	// MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
	bool m_bRequiresTargetFilter; // 0x629	
private:
	[[maybe_unused]] uint8_t __pad062a[0x6]; // 0x62a
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_MagicShield_SpiritBuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMedicHealVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealBeamParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealTargetParticle; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHealCastSound; // 0x16a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class CCitadelSpectateNode : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MNetworkVarNames "VPhysicsCollisionAttribute_t m_collisionAttribute"
// MNetworkVarNames "Vector m_vecMins"
// MNetworkVarNames "Vector m_vecMaxs"
// MNetworkVarNames "uint8 m_usSolidFlags"
// MNetworkVarNames "SolidType_t m_nSolidType"
// MNetworkVarNames "uint8 m_triggerBloat"
// MNetworkVarNames "SurroundingBoundsType_t m_nSurroundType"
// MNetworkVarNames "uint8 m_CollisionGroup"
// MNetworkVarNames "uint8 m_nEnablePhysics"
// MNetworkVarNames "Vector m_vecSpecifiedSurroundingMins"
// MNetworkVarNames "Vector m_vecSpecifiedSurroundingMaxs"
// MNetworkVarNames "Vector m_vCapsuleCenter1"
// MNetworkVarNames "Vector m_vCapsuleCenter2"
// MNetworkVarNames "float m_flCapsuleRadius"
class CCollisionProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	// -> m_nInteractsAs - 0x18
	// -> m_nInteractsWith - 0x20
	// -> m_nInteractsExclude - 0x28
	// -> m_nEntityId - 0x30
	// -> m_nOwnerId - 0x34
	// -> m_nHierarchyId - 0x38
	// -> m_nCollisionGroup - 0x3a
	// -> m_nCollisionFunctionMask - 0x3b
	VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMins; // 0x40	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMaxs; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad0058[0x2]; // 0x58
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidFlags"
	uint8_t m_usSolidFlags; // 0x5a	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidType"
	SolidType_t m_nSolidType; // 0x5b	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	uint8_t m_triggerBloat; // 0x5c	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	SurroundingBoundsType_t m_nSurroundType; // 0x5d	
	// MNetworkEnable
	uint8_t m_CollisionGroup; // 0x5e	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateEnablePhysics"
	uint8_t m_nEnablePhysics; // 0x5f	
	float m_flBoundingRadius; // 0x60	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMins; // 0x64	
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMaxs; // 0x70	
	Vector m_vecSurroundingMaxs; // 0x7c	
	Vector m_vecSurroundingMins; // 0x88	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateCapsule"
	Vector m_vCapsuleCenter1; // 0x94	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateCapsule"
	Vector m_vCapsuleCenter2; // 0xa0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateCapsule"
	float m_flCapsuleRadius; // 0xac	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVData_BaseAura : public CCitadelModifierVData
{
public:
	eAuraShapeType m_eAuraShapeType; // 0x5f0	
	// MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeSphere"
	CModifierLevelFloat m_flAuraRadius; // 0x5f4	
	// MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeEntityBased"
	CModifierLevelFloat m_flAuraEntityBoundsScale; // 0x604	
	int32_t m_nAmbientParticleRadiusControlPoint; // 0x614	
	// MPropertyDescription "Aura - Modifier to Apply"
	// MPropertyFriendlyName "Modifier Provided By Aura"
	CEmbeddedSubclass< CBaseModifier > m_modifierProvidedByAura; // 0x618	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Thumper_BulletWatcherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Protection_RacketVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastOtherParticle; // 0x14e0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ArmorModifier; // 0x15c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
// MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
// MNetworkVarNames "RenderMode_t m_nRenderMode"
// MNetworkVarNames "RenderFx_t m_nRenderFX"
// MNetworkVarNames "Color m_clrRender"
// MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "bool m_bNoInterpolate"
// MNetworkVarNames "CCollisionProperty m_Collision"
// MNetworkVarNames "CGlowProperty m_Glow"
// MNetworkVarNames "float m_flGlowBackfaceMult"
// MNetworkVarNames "float32 m_fadeMinDist"
// MNetworkVarNames "float32 m_fadeMaxDist"
// MNetworkVarNames "float32 m_flFadeScale"
// MNetworkVarNames "float32 m_flShadowStrength"
// MNetworkVarNames "uint8 m_nObjectCulling"
// MNetworkVarNames "int m_nAddDecal"
// MNetworkVarNames "Vector m_vDecalPosition"
// MNetworkVarNames "Vector m_vDecalForwardAxis"
// MNetworkVarNames "float m_flDecalHealBloodRate"
// MNetworkVarNames "float m_flDecalHealHeightRate"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
class C_BaseModelEntity : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x538	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0568[0x20]; // 0x568
public:
	bool m_bInitModelEffects; // 0x588	
	bool m_bIsStaticProp; // 0x589	
private:
	[[maybe_unused]] uint8_t __pad058a[0x2]; // 0x58a
public:
	int32_t m_nLastAddDecal; // 0x58c	
	int32_t m_nDecalsAdded; // 0x590	
	int32_t m_iOldHealth; // 0x594	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0x598	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x599	
private:
	[[maybe_unused]] uint8_t __pad059a[0x6]; // 0x59a
public:
	CUtlString m_szAddModifier; // 0x5a0	
	bool m_bAllowFadeInView; // 0x5a8	
private:
	[[maybe_unused]] uint8_t __pad05a9[0x1f]; // 0x5a9
public:
	bool m_bHasCollision; // 0x5c8	
private:
	[[maybe_unused]] uint8_t __pad05c9[0x3]; // 0x5c9
public:
	Vector m_vSupport; // 0x5cc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x5d8	
private:
	[[maybe_unused]] uint8_t __pad05dc[0x4]; // 0x5dc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad0630[0x18]; // 0x630
public:
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x648	
	// MNetworkEnable
	bool m_bNoInterpolate; // 0x649	
private:
	[[maybe_unused]] uint8_t __pad064a[0x6]; // 0x64a
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x650	
	// MNetworkEnable
	// -> m_fGlowColor - 0x708
	// -> m_iGlowType - 0x730
	// -> m_iGlowTeam - 0x734
	// -> m_nGlowRange - 0x738
	// -> m_nGlowRangeMin - 0x73c
	// -> m_glowColorOverride - 0x740
	// -> m_bFlashing - 0x744
	// -> m_flGlowTime - 0x748
	// -> m_flGlowStartTime - 0x74c
	// -> m_bGlowing - 0x750
	CGlowProperty m_Glow; // 0x700	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x758	
	// MNetworkEnable
	float m_fadeMinDist; // 0x75c	
	// MNetworkEnable
	float m_fadeMaxDist; // 0x760	
	// MNetworkEnable
	float m_flFadeScale; // 0x764	
	// MNetworkEnable
	float m_flShadowStrength; // 0x768	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0x76c	
private:
	[[maybe_unused]] uint8_t __pad076d[0x3]; // 0x76d
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x770	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x774	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x780	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x78c	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0794[0x4]; // 0x794
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x798	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x7b0	
private:
	[[maybe_unused]] uint8_t __pad07d8[0x8]; // 0x7d8
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0x7e0	
	Color m_ClientOverrideTint; // 0x7e8	
	bool m_bUseClientOverrideTint; // 0x7ec	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void m_Ropes; // 0x568
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
// 
// MNetworkIncludeByName "m_flTimeScale"
// MNetworkOverride "m_flTimeScale"
// MNetworkOverride "m_flTimeScale"
// MNetworkVarNames "Vector m_vInitialVelocity"
// MNetworkVarNames "Vector m_vInitialPosition"
// MNetworkVarNames "AbilityID_t m_abilityID"
// MNetworkVarNames "EHANDLE m_hThrower"
// MNetworkVarNames "string_t m_sParticleName"
// MNetworkVarNames "Vector m_vecSpawnPosition"
// MNetworkVarNames "float m_flProjectileSpeed"
// MNetworkVarNames "float m_flMaxLifetime"
class C_CitadelProjectile : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0xc]; // 0x810
public:
	CHandle< C_BaseEntity > m_hTarget; // 0x81c	
	float m_flMaxDistance; // 0x820	
	float m_flArmingTime; // 0x824	
	float m_flChargeAmount; // 0x828	
	bool m_bCollideWithThrower; // 0x82c	
	bool m_bNewCollideWithThrower; // 0x82d	
private:
	[[maybe_unused]] uint8_t __pad082e[0xa]; // 0x82e
public:
	float m_flTickSoundInterval; // 0x838	
private:
	[[maybe_unused]] uint8_t __pad083c[0x4]; // 0x83c
public:
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x840	
	// MNetworkEnable
	Vector m_vInitialPosition; // 0x84c	
	// MNetworkEnable
	CUtlStringToken m_abilityID; // 0x858	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hThrower; // 0x85c	
	// MNetworkEnable
	CUtlSymbolLarge m_sParticleName; // 0x860	
	// MNetworkEnable
	Vector m_vecSpawnPosition; // 0x868	
	// MNetworkEnable
	float m_flProjectileSpeed; // 0x874	
	// MNetworkEnable
	float m_flMaxLifetime; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad087c[0x4]; // 0x87c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "ParticleRadiusChanged"
	float m_flParticleRadius; // 0x880	
private:
	[[maybe_unused]] uint8_t __pad0884[0xc]; // 0x884
public:
	float m_flPreviousTimeScale; // 0x890	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbilityToTrigger"
// MNetworkVarNames "GameTime_t m_SwappedToTime"
class CCitadelBaseTriggerAbility : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_CitadelBaseAbility > m_hAbilityToTrigger; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_SwappedToTime; // 0xc2c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BreakablePropDoubleJumpVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Powerup Values"
	float m_AirJumpVerticalSpeedPercent; // 0x5f0	
	// MPropertyGroupName "Powerup Values"
	float m_AirJumps; // 0x5f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCitadel_Modifier_Chomp_Grapple : public CCitadelModifier
{
public:
	CHandle< C_BaseEntity > m_hMoveToTarget; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Bull_Leap_Boosting_Crash : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerSurgeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChainParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastHitParticle; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x16a0	
	CEmbeddedSubclass< CCitadelModifier > m_ChainModifier; // 0x16b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_AfterburnWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AfterburnDotModifier; // 0x620	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x630	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x640	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime : public CCitadelModifier
{
public:
	GameTime_t m_flLastTickTime; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Tengu_LightningCrash_Regeneration : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_PowerSurge : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_PowerSurgeVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponFxParticle; // 0x6d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWeaponShootSound; // 0x7b0	
	CSoundEventName m_strBulletWhizSound; // 0x7c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x7d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1150
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flTimeStartZipping"
// MNetworkVarNames "GameTime_t m_flTimeForKnockdownProtection"
// MNetworkVarNames "GameTime_t m_flTimeStopZipping"
// MNetworkVarNames "float m_flCasterSpeed"
// MNetworkVarNames "CNetworkVelocityVector m_vecInitialVel"
// MNetworkVarNames "Vector m_vecAttachPoint"
// MNetworkVarNames "EHANDLE m_pPrevNode"
// MNetworkVarNames "EHANDLE m_pNextNode"
// MNetworkVarNames "GameTime_t m_flTimeEnterState"
// MNetworkVarNames "GameTime_t m_flLatchTime"
// MNetworkVarNames "GameTime_t m_flDamagedTime"
// MNetworkVarNames "EAttachState_t m_eAttachState"
// MNetworkVarNames "int m_iAttachedZipLineLane"
// MNetworkVarNames "bool m_bDroppedFromZipline"
class CCitadel_Ability_ZipLine : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x4a0]; // 0xc28
public:
	GameTime_t m_flActivatePressTime; // 0x10c8	
	bool m_bThinking; // 0x10cc	
	bool m_bMoveCollidedPushUp; // 0x10cd	
private:
	[[maybe_unused]] uint8_t __pad10ce[0xe]; // 0x10ce
public:
	// MNetworkEnable
	GameTime_t m_flTimeStartZipping; // 0x10dc	
	// MNetworkEnable
	GameTime_t m_flTimeForKnockdownProtection; // 0x10e0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flTimeStopZipping; // 0x10e4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flCasterSpeed; // 0x10e8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkVelocityVector m_vecInitialVel; // 0x10ec	
private:
	[[maybe_unused]] uint8_t __pad1114[0xc]; // 0x1114
public:
	// MNetworkEnable
	Vector m_vecAttachPoint; // 0x1120	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_pPrevNode; // 0x112c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_pNextNode; // 0x1130	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flTimeEnterState; // 0x1134	
	// MNetworkEnable
	GameTime_t m_flLatchTime; // 0x1138	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDamagedTime; // 0x113c	
	// MNetworkEnable
	// MNetworkChangeCallback "ZiplingAttachStateChanged"
	EAttachState_t m_eAttachState; // 0x1140	
	// MNetworkEnable
	int32_t m_iAttachedZipLineLane; // 0x1144	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bDroppedFromZipline; // 0x1148	
	AttachmentHandle_t m_hAttachZipLine; // 0x1149	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
// Is Abstract
class CCitadelBaseAbilityServerOnly : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TeamRelativeParticleVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParentViewParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OtherPlayerViewParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAuraVData : public CModifierVData_BaseAura
{
public:
	CITADEL_UNIT_TARGET_TYPE m_iAuraSearchType; // 0x628	
	CITADEL_UNIT_TARGET_FLAGS m_iAuraSearchFlags; // 0x62c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Silenced : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc0
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_hOwnerEntity"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nameStringableIndex"
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "char m_szSnapshotFileName"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bFrozen"
// MNetworkVarNames "float m_flFreezeTransitionDuration"
// MNetworkVarNames "int m_nStopType"
// MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flPreSimTime"
// MNetworkVarNames "Vector m_vServerControlPoints"
// MNetworkVarNames "uint8 m_iServerControlPointAssignments"
// MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
// MNetworkVarNames "bool m_bNoSave"
// MNetworkVarNames "bool m_bNoFreeze"
// MNetworkVarNames "bool m_bNoRamp"
class C_ParticleSystem : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	char m_szSnapshotFileName[512]; // 0x810	
	// MNetworkEnable
	bool m_bActive; // 0xa10	
	// MNetworkEnable
	bool m_bFrozen; // 0xa11	
private:
	[[maybe_unused]] uint8_t __pad0a12[0x2]; // 0xa12
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0xa14	
	// MNetworkEnable
	int32_t m_nStopType; // 0xa18	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xa1c	
private:
	[[maybe_unused]] uint8_t __pad0a1d[0x3]; // 0xa1d
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xa20	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xa28	
	// MNetworkEnable
	float m_flPreSimTime; // 0xa2c	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0xa30	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xa60	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xa64	
	// MNetworkEnable
	bool m_bNoSave; // 0xb64	
	// MNetworkEnable
	bool m_bNoFreeze; // 0xb65	
	// MNetworkEnable
	bool m_bNoRamp; // 0xb66	
	bool m_bStartActive; // 0xb67	
	CUtlSymbolLarge m_iszEffectName; // 0xb68	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0xb70	
	int32_t m_nDataCP; // 0xd70	
	Vector m_vecDataCPValue; // 0xd74	
	int32_t m_nTintCP; // 0xd80	
	Color m_clrTint; // 0xd84	
private:
	[[maybe_unused]] uint8_t __pad0d88[0x20]; // 0xd88
public:
	bool m_bOldActive; // 0xda8	
	bool m_bOldFrozen; // 0xda9	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputSetControlPoint; // 0x0
	// void C_ParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
	// void m_pEffect; // 0xd88
	// void m_iOldEffectIndex; // 0xdb0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_BreakablePropCooldownReduction : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_BaseToggle : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "EMiniMapMarkerType_t m_eType"
class C_MiniMapMarker : public C_BaseEntity
{
public:
	// MNetworkEnable
	EMiniMapMarkerType_t m_eType; // 0x538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierRapidFireChannelVData : public CCitadelModifierVData
{
public:
	float m_flAirDrag; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_BulletFlurryVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BulletFlurryModifier; // 0x15c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x840
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "string_t m_DialogXMLName"
// MNetworkVarNames "string_t m_PanelClassName"
// MNetworkVarNames "string_t m_PanelID"
class C_BaseClientUIEntity : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x8]; // 0x810
public:
	// MNetworkEnable
	bool m_bEnabled; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad0819[0x7]; // 0x819
public:
	// MNetworkEnable
	CUtlSymbolLarge m_DialogXMLName; // 0x820	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelClassName; // 0x828	
	// MNetworkEnable
	CUtlSymbolLarge m_PanelID; // 0x830	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Synth_Blitz_TechAmp_VData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_WreckingBall_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
// Has VTable
class CCitadel_Modifier_Puddle : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x90]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1528
// Has VTable
// 
// MGetKV3ClassDefaults
class CitadelItemVData : public CitadelAbilityVData
{
private:
	[[maybe_unused]] uint8_t __pad14e0[0x4]; // 0x14e0
public:
	EModTier_t m_iItemTier; // 0x14e4	
	int8_t m_nUpgradeSlotCost; // 0x14e5	
	bool m_bWarnIfNoAffectedAbilities; // 0x14e6	
	bool m_bRequiresChargedAbility; // 0x14e7	
	bool m_bRequiresChanelledAbility; // 0x14e8	
private:
	[[maybe_unused]] uint8_t __pad14e9[0x7]; // 0x14e9
public:
	CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // 0x14f0	
	bool m_bShowTextDescription; // 0x1508	
	bool m_bIsDefensiveItem; // 0x1509	
	EShopFilters_t m_eShopFilters; // 0x150a	
private:
	[[maybe_unused]] uint8_t __pad150c[0x4]; // 0x150c
public:
	// MPropertyFriendlyName "Item Tooltips"
	CUtlVector< ItemSectionInfo_t > m_vecTooltipSectionInfo; // 0x1510	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_BulletArmorReduction : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MNetworkVarNames "float32 m_flLightScale"
// MNetworkVarNames "float32 m_Radius"
class C_SpotlightEnd : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	float m_flLightScale; // 0x810	
	// MNetworkEnable
	float m_Radius; // 0x814	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Bolo_Leech : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_BulletFlurry : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa70
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
// MNetworkVarNames "bool m_bRagdollClientSide"
class CBaseAnimGraph : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x78]; // 0x810
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x888	
private:
	[[maybe_unused]] uint8_t __pad0889[0x1]; // 0x889
public:
	bool m_bSuppressAnimEventSounds; // 0x88a	
private:
	[[maybe_unused]] uint8_t __pad088b[0xd]; // 0x88b
public:
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x898	
private:
	[[maybe_unused]] uint8_t __pad0899[0x3]; // 0x899
public:
	float m_flMaxSlopeDistance; // 0x89c	
	Vector m_vLastSlopeCheckPos; // 0x8a0	
	bool m_bAnimationUpdateScheduled; // 0x8ac	
private:
	[[maybe_unused]] uint8_t __pad08ad[0x3]; // 0x8ad
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x8b0	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x8bc	
	CBaseAnimGraph* m_pClientsideRagdoll; // 0x8c0	
	bool m_bBuiltRagdoll; // 0x8c8	
private:
	[[maybe_unused]] uint8_t __pad08c9[0x17]; // 0x8c9
public:
	// MNetworkEnable
	// -> m_Transforms - 0x8e8
	// -> m_hOwner - 0x900
	PhysicsRagdollPose_t m_RagdollPose; // 0x8e0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x928	
private:
	[[maybe_unused]] uint8_t __pad0929[0xf]; // 0x929
public:
	bool m_bHasAnimatedMaterialAttributes; // 0x938	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x880
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
	// void InputClearTargetIdentifierOverride; // 0x0
	// bool InputDisableAnimEventSounds; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_BreakablePropExtraGoldPickup : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x598
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "float m_FOV"
// MNetworkVarNames "float m_Resolution"
// MNetworkVarNames "bool m_bFogEnable"
// MNetworkVarNames "Color m_FogColor"
// MNetworkVarNames "float m_flFogStart"
// MNetworkVarNames "float m_flFogEnd"
// MNetworkVarNames "float m_flFogMaxDensity"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bUseScreenAspectRatio"
// MNetworkVarNames "float m_flAspectRatio"
// MNetworkVarNames "bool m_bNoSky"
// MNetworkVarNames "float m_fBrightness"
// MNetworkVarNames "float m_flZFar"
// MNetworkVarNames "float m_flZNear"
// MNetworkVarNames "bool m_bCanHLTVUse"
// MNetworkVarNames "bool m_bDofEnabled"
// MNetworkVarNames "float m_flDofNearBlurry"
// MNetworkVarNames "float m_flDofNearCrisp"
// MNetworkVarNames "float m_flDofFarCrisp"
// MNetworkVarNames "float m_flDofFarBlurry"
// MNetworkVarNames "float m_flDofTiltToGround"
class C_PointCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_FOV; // 0x538	
	// MNetworkEnable
	float m_Resolution; // 0x53c	
	// MNetworkEnable
	bool m_bFogEnable; // 0x540	
	// MNetworkEnable
	Color m_FogColor; // 0x541	
private:
	[[maybe_unused]] uint8_t __pad0545[0x3]; // 0x545
public:
	// MNetworkEnable
	float m_flFogStart; // 0x548	
	// MNetworkEnable
	float m_flFogEnd; // 0x54c	
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x550	
	// MNetworkEnable
	bool m_bActive; // 0x554	
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x555	
private:
	[[maybe_unused]] uint8_t __pad0556[0x2]; // 0x556
public:
	// MNetworkEnable
	float m_flAspectRatio; // 0x558	
	// MNetworkEnable
	bool m_bNoSky; // 0x55c	
private:
	[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
public:
	// MNetworkEnable
	float m_fBrightness; // 0x560	
	// MNetworkEnable
	float m_flZFar; // 0x564	
	// MNetworkEnable
	float m_flZNear; // 0x568	
	// MNetworkEnable
	bool m_bCanHLTVUse; // 0x56c	
	// MNetworkEnable
	bool m_bDofEnabled; // 0x56d	
private:
	[[maybe_unused]] uint8_t __pad056e[0x2]; // 0x56e
public:
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x570	
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x574	
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x578	
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x57c	
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x580	
	float m_TargetFOV; // 0x584	
	float m_DegreesPerSecond; // 0x588	
	bool m_bIsOn; // 0x58c	
private:
	[[maybe_unused]] uint8_t __pad058d[0x3]; // 0x58d
public:
	C_PointCamera* m_pNext; // 0x590	
	
	// Datamap fields:
	// CUtlSymbolLarge InputChangeFOV; // 0x0
	// void InputSetOnAndTurnOthersOff; // 0x0
	// void InputSetOn; // 0x0
	// void InputSetOff; // 0x0
	// void InputForceActive; // 0x0
	// void InputForceInactive; // 0x0
	// void InputEnableDOF; // 0x0
	// void InputDisableDOF; // 0x0
	// float InputSetDOFNearBlurry; // 0x0
	// float InputSetDOFNearCrisp; // 0x0
	// float InputSetDOFFarCrisp; // 0x0
	// float InputSetDOFFarBlurry; // 0x0
	// float InputSetDOFTiltToGround; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_Rutger_Pulse : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAerialAssaultWatcherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AssaultModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_ColdFrontVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AOEModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_PreventHealing : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
// MEntityAllowsPortraitWorldSpawn
class C_LightEntity : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0x810	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
// 
// MNetworkVarNames "EntitySubclassID_t m_vecComponentsConsumed"
class CCitadel_Item : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecComponentsConsumed; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_Crescendo_PostAOE_VData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierRapidFireAirJuggleVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCrowdControlVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x14e0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ProximityRitual_VData : public CitadelAbilityVData
{
public:
	float m_flThinkInterval; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e4[0x4]; // 0x14e4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UnitTargetParticle; // 0x14e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_PredatoryStatueModel; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PredatoryStatueModifier; // 0x16a8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce0
// Has VTable
// 
// MNetworkVarNames "bool m_bAirRaiding"
class CCitadel_Ability_PowerJump : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x4]; // 0xc28
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xc2c	
	// MNetworkEnable
	bool m_bAirRaiding; // 0xc30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_SharpShooterVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_HeadShotVictimSound; // 0x1528	
	CSoundEventName m_HeadShotConfirmationSound; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierTier3BossLaserBeamVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "CHandle< CBasePlayerController > m_aPlayerControllers"
// MNetworkVarNames "CHandle< C_BasePlayerPawn > m_aPlayers"
// MNetworkVarNames "int32 m_iScore"
// MNetworkVarNames "char m_szTeamname"
class C_Team : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkAlias "m_aPlayers"
	C_NetworkUtlVectorBase< CHandle< CBasePlayerController > > m_aPlayerControllers; // 0x538	
	// MNetworkEnable
	// MNetworkAlias "m_aPawns"
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_aPlayers; // 0x550	
	// MNetworkEnable
	int32_t m_iScore; // 0x568	
	// MNetworkEnable
	char m_szTeamname[129]; // 0x56c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "uint32 m_iWindSeed"
// MNetworkVarNames "uint16 m_iMinWind"
// MNetworkVarNames "uint16 m_iMaxWind"
// MNetworkVarNames "int32 m_windRadius"
// MNetworkVarNames "uint16 m_iMinGust"
// MNetworkVarNames "uint16 m_iMaxGust"
// MNetworkVarNames "float32 m_flMinGustDelay"
// MNetworkVarNames "float32 m_flMaxGustDelay"
// MNetworkVarNames "float32 m_flGustDuration"
// MNetworkVarNames "uint16 m_iGustDirChange"
// MNetworkVarNames "Vector m_location"
// MNetworkVarNames "uint16 m_iInitialWindDir"
// MNetworkVarNames "float32 m_flInitialWindSpeed"
class C_EnvWindShared
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x8	
	// MNetworkEnable
	uint32_t m_iWindSeed; // 0xc	
	// MNetworkEnable
	uint16_t m_iMinWind; // 0x10	
	// MNetworkEnable
	uint16_t m_iMaxWind; // 0x12	
	// MNetworkEnable
	int32_t m_windRadius; // 0x14	
	// MNetworkEnable
	uint16_t m_iMinGust; // 0x18	
	// MNetworkEnable
	uint16_t m_iMaxGust; // 0x1a	
	// MNetworkEnable
	float m_flMinGustDelay; // 0x1c	
	// MNetworkEnable
	float m_flMaxGustDelay; // 0x20	
	// MNetworkEnable
	float m_flGustDuration; // 0x24	
	// MNetworkEnable
	uint16_t m_iGustDirChange; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002a[0x2]; // 0x2a
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_location; // 0x2c	
	int32_t m_iszGustSound; // 0x38	
	int32_t m_iWindDir; // 0x3c	
	float m_flWindSpeed; // 0x40	
	Vector m_currentWindVector; // 0x44	
	Vector m_CurrentSwayVector; // 0x50	
	Vector m_PrevSwayVector; // 0x5c	
	// MNetworkEnable
	uint16_t m_iInitialWindDir; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006a[0x2]; // 0x6a
public:
	// MNetworkEnable
	float m_flInitialWindSpeed; // 0x6c	
	GameTime_t m_flVariationTime; // 0x70	
	GameTime_t m_flSwayTime; // 0x74	
	GameTime_t m_flSimTime; // 0x78	
	GameTime_t m_flSwitchTime; // 0x7c	
	float m_flAveWindSpeed; // 0x80	
	bool m_bGusting; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
public:
	float m_flWindAngleVariation; // 0x88	
	float m_flWindSpeedVariation; // 0x8c	
	CEntityIndex m_iEntIndex; // 0x90	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x250
// Has VTable
class CCitadel_Modifier_Warden_RiotProtocol : public CCitadelModifier
{
public:
	CUtlOrderedMap< CHandle< C_BaseEntity >, GameTime_t > m_mapEntToTimeHit; // 0xc0	
	int32_t m_nNumPlayersAffected; // 0xe8	
	int32_t m_nNumPlayersKilled; // 0xec	
	QAngle m_playerAngles; // 0xf0	
	ParticleIndex_t m_ConeParticle; // 0xfc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeVData : public CitadelAbilityVData
{
public:
	bool m_bCanMeleeWhileZoomed; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e1[0x3]; // 0x14e1
public:
	// MPropertyDescription "How long we'll buffer input to trigger another melee if we're already performing a melee"
	float m_flMeleeInputBufferTime; // 0x14e4	
	// MPropertyDescription "If we detect an enemy within this distance, forward attack movement will be suppressed so we don't move through them"
	float m_flCollisionDistance; // 0x14e8	
	// MPropertyDescription "A heavy attack will trigger after being charged up for this long"
	float m_flHeavyAttackRequiredHoldTime; // 0x14ec	
	// MPropertyDescription "A light attack will trigger if the melee button is pressed and released within this time.  After this time, a heavy melee will charge up"
	float m_flLightAttackMaxHoldTime; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad14f4[0x4]; // 0x14f4
public:
	TakeDamageFlags_t m_MeleeDamageFlags; // 0x14f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Intrinsic_BaseVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_SlowImmunity : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_VisibleDuration : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class CAI_BaseNPCVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	// MPropertyGroupName "Sounds"
	CFootstepTableHandle m_hFootstepSounds; // 0x108	
	// MPropertyFriendlyName "Nav Link Movements"
	// MPropertyDescription "List of the kind of nav links movement this unit is capable of."
	// MPropertyCustomFGDType "vdata_choice:scripts/navlinks.vdata"
	CUtlVector< CGlobalSymbol > m_vecNavLinkMovementNames; // 0x110	
	int32_t m_nMaxHealth; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad012c[0x4]; // 0x12c
public:
	CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x130	
	// MPropertyFriendlyName "Status Effects"
	// MPropertyDescription "List of the status effects this NPC cares about"
	NPCStatusEffectMap_t m_statusEffectMap; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x7]; // 0x149
public:
	CUtlVector< NPCAttachmentDesc_t > m_vecAttachments; // 0x150	
	// MPropertyStartGroup "Damage"
	CSkillFloat m_flHeadDamageMultiplier; // 0x168	
	CSkillFloat m_flChestDamageMultiplier; // 0x178	
	CSkillFloat m_flStomachDamageMultiplier; // 0x188	
	CSkillFloat m_flArmDamageMultiplier; // 0x198	
	CSkillFloat m_flLegDamageMultiplier; // 0x1a8	
	CSkillInt m_nMaxAdditionalAmmoBalancingShots; // 0x1b8	
	bool m_bTakesDamage; // 0x1c8	
	// MPropertyStartGroup "Navigation"
	bool m_bAllowNonZUpMovement; // 0x1c9	
	// MPropertyDescription "If true, this NPC will use the capsule collision.  Capsule collision will also be used if m_bAllowNonZUpMovement is set."
	bool m_bRequestCapsuleCollision; // 0x1ca	
private:
	[[maybe_unused]] uint8_t __pad01cb[0x1]; // 0x1cb
public:
	// MPropertyDescription "Override the radius of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop OBB"
	float m_flCapsuleRadiusOverride; // 0x1cc	
	// MPropertyDescription "Override the height of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop height."
	float m_flCapsuleHeightOverride; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "Enabled Shared Actions"
	// MPropertyDescription "List of the shared BaseNPC actions this NPC supports"
	// MPropertyAttributeEditor "VDataAnimGraphParamEnumValue( m_sModelName; literal; e_action_desired_shared )"
	CUtlVector< CGlobalSymbol > m_vecActionDesiredShared; // 0x1d8	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Player Killed NPC Sound"
	CSoundEventName m_sPlayerKilledNpcSound; // 0x1f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CModifier_Mirage_SandPhantom_WhirlwindEvasion : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_LifeDrain : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_StaticChargeVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1608
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemRefresherVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RefreshParticle; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Hero_Testing_Damage_AuraDebuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
class C_GameRulesProxy : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ChargingGun : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemSmokeBombPreCastModifierVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SmokeAreaParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CasterParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
// Is Abstract
class CCitadel_Modifier_BaseEventProc : public CCitadelModifier
{
public:
	CUtlVector< C_BaseEntity* > m_vecProcdUnitsThisShot; // 0xc0	
	CUtlVector< C_BaseEntity* > m_vecTrackedUnitsThisFrame; // 0xd8	
	ShotID_t m_nLastShotId; // 0xf0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc08
// Has VTable
// 
// MNetworkVarNames "float32 m_flexWeight"
// MNetworkVarNames "bool m_blinktoggle"
class C_BaseFlex : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a70[0x10]; // 0xa70
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0xa80	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnViewTargetChanged"
	Vector m_vLookTargetPosition; // 0xa98	
private:
	[[maybe_unused]] uint8_t __pad0aa4[0xc]; // 0xaa4
public:
	// MNetworkEnable
	bool m_blinktoggle; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0x5f]; // 0xab1
public:
	int32_t m_nLastFlexUpdateFrameCount; // 0xb10	
	Vector m_CachedViewTarget; // 0xb14	
	SceneEventId_t m_nNextSceneEventId; // 0xb20	
	int32_t m_iBlink; // 0xb24	
	float m_blinktime; // 0xb28	
	bool m_prevblinktoggle; // 0xb2c	
private:
	[[maybe_unused]] uint8_t __pad0b2d[0x3]; // 0xb2d
public:
	int32_t m_iJawOpen; // 0xb30	
	float m_flJawOpenAmount; // 0xb34	
	float m_flBlinkAmount; // 0xb38	
	AttachmentHandle_t m_iMouthAttachment; // 0xb3c	
	AttachmentHandle_t m_iEyeAttachment; // 0xb3d	
	bool m_bResetFlexWeightsOnModelChange; // 0xb3e	
private:
	[[maybe_unused]] uint8_t __pad0b3f[0x19]; // 0xb3f
public:
	int32_t m_nEyeOcclusionRendererBone; // 0xb58	
	matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xb5c	
	Vector m_vEyeOcclusionRendererHalfExtent; // 0xb8c	
private:
	[[maybe_unused]] uint8_t __pad0b98[0x10]; // 0xb98
public:
	C_BaseFlex::Emphasized_Phoneme m_PhonemeClasses[3]; // 0xba8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc38
// Has VTable
class CCitadel_Ability_WreckingBallThrow : public CCitadelBaseTriggerAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BreakablePropFireRatePickupVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Powerup Values"
	float m_flFireRate; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "float m_flRadius"
class C_SoundEventSphereEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	float m_flRadius; // 0x538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_Cadence_Crescendo : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_SpilledBloodThinker : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_StabilizingTripodVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfDebuffModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelBulletTimeWarpVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitParticle; // 0x28	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitTimerParticle; // 0x108	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
class CPropDataComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	float m_flDmgModBullet; // 0x10	
	float m_flDmgModClub; // 0x14	
	float m_flDmgModExplosive; // 0x18	
	float m_flDmgModFire; // 0x1c	
	CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x20	
	CUtlSymbolLarge m_iszBasePropData; // 0x28	
	int32_t m_nInteractions; // 0x30	
	bool m_bSpawnMotionDisabled; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	int32_t m_nDisableTakePhysicsDamageSpawnFlag; // 0x38	
	int32_t m_nMotionDisabledSpawnFlag; // 0x3c	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CPropDataComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CPropDataComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x608
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierItemPickupAuraTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Timers"
	float m_PickupTimer; // 0x5f0	
private:
	[[maybe_unused]] uint8_t __pad05f4[0x4]; // 0x5f4
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PickupTimerModifier; // 0x5f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
class C_PointEntity : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tokamak_DyingStarVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlameAuraParticle; // 0x15c0	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strInFlightAnimGraphParam; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InFlightModifier; // 0x16b8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1528
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeaponVData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "The DOF settings to apply while zoomed in."
	DOFDesc_t m_DOFWhileZoomed; // 0x14e0	
	// MPropertyDescription "When true, the 'Far Crisp' and 'Far Blurry' are added on top of the gun's range.  When false, use the values directly."
	bool m_bDOFFarSettingsAreOffsetByGunRange; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad14f1[0x7]; // 0x14f1
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyFriendlyName "Fire while disarmed sound"
	CSoundEventName m_sDisarmedSound; // 0x14f8	
	float m_flMinDisarmedSoundInterval; // 0x1508	
private:
	[[maybe_unused]] uint8_t __pad150c[0x4]; // 0x150c
public:
	CSoundEventName m_sObstructedShotSound; // 0x1510	
	// MPropertyStartGroup "Action Reload"
	// MPropertyAttributeRange "0 1"
	// MPropertyDescription "If we have action reloads, at what fraction of our reload progress does the timing window start.  The window is centered on this time."
	float m_flActionReloadTimingStart; // 0x1520	
	// MPropertyDescription "If we have action reloads, how long is the window"
	float m_flActionReloadTimingDuration; // 0x1524	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ProjectMindVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportModelParticle; // 0x890	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x970	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
// Has VTable
class CModifier_SiphonBullets : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_BubbleVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1528	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_CastTargetSound; // 0x1608	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BubbleModifier; // 0x1618	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "CHandle< CFogController> m_hCtrl"
struct C_fogplayerparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle< C_FogController > m_hCtrl; // 0x8	
	float m_flTransitionTime; // 0xc	
	Color m_OldColor; // 0x10	
	float m_flOldStart; // 0x14	
	float m_flOldEnd; // 0x18	
	float m_flOldMaxDensity; // 0x1c	
	float m_flOldHDRColorScale; // 0x20	
	float m_flOldFarZ; // 0x24	
	Color m_NewColor; // 0x28	
	float m_flNewStart; // 0x2c	
	float m_flNewEnd; // 0x30	
	float m_flNewMaxDensity; // 0x34	
	float m_flNewHDRColorScale; // 0x38	
	float m_flNewFarZ; // 0x3c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_FuncBrush : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_PowerGenerator : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bClientSidePredicted"
class C_BaseTrigger : public C_BaseToggle
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x810	
	// MNetworkEnable
	bool m_bClientSidePredicted; // 0x811	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_CatBullet_VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CatBulletModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1508
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_PulseGrenade_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PulseAreaModifier; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitSound; // 0x14f0	
	// MPropertyStartGroup "Misc"
	CUtlString m_strDebuffStatName; // 0x1500	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Tier2Boss_Stomp : public CCitadelBaseAbilityServerOnly
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
class C_RopeKeyframe::CPhysicsDelegate
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	C_RopeKeyframe* m_pKeyframe; // 0x8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x640
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FrenzyAuraVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_KillModifier; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Synth_Pulse_Escape_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SatchelParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b08
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData
{
public:
	float m_flJumpFallSpeedMax; // 0x14e0	
	float m_flJumpAirDrag; // 0x14e4	
	float m_flJumpAirSpeedMax; // 0x14e8	
	float m_flJumpSpeed; // 0x14ec	
	float m_flJumpPitch; // 0x14f0	
	float m_flDashSpeed; // 0x14f4	
	float m_flDashCloseEnoughToTarget; // 0x14f8	
	float m_flDashLockOntoTargetDist; // 0x14fc	
	float m_flVelocityTurnSpringStrength; // 0x1500	
	CRemapFloat m_flAngleToSpeedScale; // 0x1504	
	float m_flBackswingDuration; // 0x1514	
	float m_flAnimToStrikePointTime; // 0x1518	
	float m_flGrappleShotFloatTime; // 0x151c	
	float m_flGrappleShotDelayToFlyOnHit; // 0x1520	
	float m_flGrappleSpeed; // 0x1524	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // 0x1528	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x1538	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x1548	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1628	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // 0x1708	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x17e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x18c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x19a8	
	CSoundEventName m_strStartDash; // 0x19b8	
	CSoundEventName m_strStartAttack; // 0x19c8	
	CSoundEventName m_strGrappleHitTarget; // 0x19d8	
	CSoundEventName m_strGrappleHitWorld; // 0x19e8	
	CSoundEventName m_strGrappleHitNothing; // 0x19f8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a08	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1a88	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_BansheeSlugs_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechDefenderShreddersProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TechDebuffModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_DivinersKevlarBuff_VData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KevlarChannelParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
// Is Abstract
class CCitadel_Modifier_BaseShield : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_Infuser_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1528	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x230
// Has VTable
// 
// MNetworkVarNames "HModelStrong m_hModel"
// MNetworkVarNames "bool m_bClientClothCreationSuppressed"
// MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
// MNetworkVarNames "int8 m_nIdealMotionType"
class CModelState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xa0]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonModelChanged"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0xa0	
	// MNetworkDisable
	CUtlSymbolLarge m_ModelName; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00b0[0x38]; // 0xb0
public:
	// MNetworkEnable
	bool m_bClientClothCreationSuppressed; // 0xe8	
private:
	[[maybe_unused]] uint8_t __pad00e9[0xaf]; // 0xe9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
	uint64_t m_MeshGroupMask; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad01a0[0x7a]; // 0x1a0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; // 0x21a	
	// MNetworkDisable
	int8_t m_nForceLOD; // 0x21b	
	// MNetworkDisable
	int8_t m_nClothUpdateFlags; // 0x21c	
	
	// Datamap fields:
	// void m_pVPhysicsAggregate; // 0xe0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Upgrade_OverdriveClip : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iMaxHealth"
class CCitadelModelEntity : public C_BaseModelEntity
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "string_t m_iszSoundAreaType"
// MNetworkVarNames "Vector m_vPos"
class C_SoundAreaEntityBase : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x7]; // 0x539
public:
	bool m_bWasEnabled; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0541[0x7]; // 0x541
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundAreaType; // 0x548	
	// MNetworkEnable
	Vector m_vPos; // 0x550	
	
	// Datamap fields:
	// void m_nGUID; // 0x53c
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_VoidSphere_Buff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_StunnedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunnedParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_EscalatingExposure : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ItemPickupAuraTarget : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_BreakablePropClipSizePickup : public CCitadelModifier
{
public:
	int32_t nClipRemaining; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CGlowOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	Vector m_vPos; // 0x8	
	bool m_bDirectional; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	Vector m_vDirection; // 0x18	
	bool m_bInSky; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
public:
	float m_skyObstructionScale; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CGlowSprite m_Sprites[4]; // 0x30	
	int32_t m_nSprites; // 0xb0	
	float m_flProxyRadius; // 0xb4	
	float m_flHDRColorScale; // 0xb8	
	float m_flGlowObstructionScale; // 0xbc	
	bool m_bCacheGlowObstruction; // 0xc0	
	bool m_bCacheSkyObstruction; // 0xc1	
	int16_t m_bActivated; // 0xc2	
	uint16_t m_ListIndex; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
public:
	int32_t m_queryHandle; // 0xc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
// Has VTable
class CCitadel_Ability_Wrecker_Salvage : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
// Has VTable
class CCitadel_Ability_Charged_Bomb : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SlowingTech_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e0
// Has VTable
class CCitadel_Modifier_CharmedWraps : public CCitadel_Modifier_BaseEventProc
{
public:
	GameTime_t m_fLastPrimingLightAttackTime; // 0x168	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1800
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemPhantomStrike_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1538	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1548	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1558	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1638	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x1718	
	// MPropertyGroupName "Gameplay"
	float m_flTeleportDistance; // 0x17f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMantleVData : public CitadelAbilityVData
{
public:
	CUtlVector< MantleType_t > m_vecMantleTypes; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_Basic_RangedArmorBonus : public CCitadelModifier
{
public:
	float m_flBulletResistancePctMin; // 0xc0	
	float m_flBulletResistancePctMax; // 0xc4	
	float m_flRangeMin; // 0xc8	
	float m_flRangeMax; // 0xcc	
	float m_flInvulnRange; // 0xd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float32 m_duration"
// MNetworkVarNames "GameTime_t m_timestamp"
// MNetworkVarNames "float32 m_timescale"
// MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
class CountdownTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	float m_duration; // 0x8	
	// MNetworkEnable
	GameTime_t m_timestamp; // 0xc	
	// MNetworkEnable
	float m_timescale; // 0x10	
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupId; // 0x14	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "CEntityHandle m_hOwner"
// MNetworkVarNames "CUtlStringToken m_name"
class CGameSceneNodeHandle
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	CEntityHandle m_hOwner; // 0x8	
	// MNetworkEnable
	CUtlStringToken m_name; // 0xc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_ConditionalCollidable : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd0
// Has VTable
class CCitadel_Ability_Thumper_1 : public C_CitadelBaseAbility
{
public:
	Vector m_vecAimPos; // 0xc28	
	Vector m_vecAimNormal; // 0xc34	
	float m_flPushForce; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Sleep : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_Running_Decoy : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
// Has VTable
class CCitadel_Modifier_PoisonBullet_ShotWatcher : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PuddleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PuddleModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_IceDomeFriendly : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Intrinsic_Base : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_DPS_Aura_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOECastParticle; // 0x1528	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // 0x1608	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Upgrade_OverdriveClip : public CCitadelModifier
{
public:
	int32_t m_nBonusMaxClipSize; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Berserker : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BerserkerDamageStackVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffStatusParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffStatusParticleEnemy; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb08
// Has VTable
class C_ClientRagdoll : public CBaseAnimGraph
{
public:
	bool m_bFadeOut; // 0xa70	
	bool m_bImportant; // 0xa71	
private:
	[[maybe_unused]] uint8_t __pad0a72[0x2]; // 0xa72
public:
	GameTime_t m_flEffectTime; // 0xa74	
	GameTime_t m_gibDespawnTime; // 0xa78	
	int32_t m_iCurrentFriction; // 0xa7c	
	int32_t m_iMinFriction; // 0xa80	
	int32_t m_iMaxFriction; // 0xa84	
	int32_t m_iFrictionAnimState; // 0xa88	
	bool m_bReleaseRagdoll; // 0xa8c	
	AttachmentHandle_t m_iEyeAttachment; // 0xa8d	
	bool m_bFadingOut; // 0xa8e	
private:
	[[maybe_unused]] uint8_t __pad0a8f[0x1]; // 0xa8f
public:
	float m_flScaleEnd[10]; // 0xa90	
	GameTime_t m_flScaleTimeStart[10]; // 0xab8	
	GameTime_t m_flScaleTimeEnd[10]; // 0xae0	
	
	// Datamap fields:
	// Color m_clrRender; // 0x5d8
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Item_TrackingProjectileApplyModifier : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadelModifier_CatTarget : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_IceDome : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x280
// Has VTable
class CCitadel_Modifier_DetentionAmmo : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x160
// Has VTable
// 
// MNetworkVarNames "CGameSceneNodeHandle m_hParent"
// MNetworkVarNames "CNetworkOriginCellCoordQuantizedVector m_vecOrigin"
// MNetworkVarNames "QAngle m_angRotation"
// MNetworkVarNames "float m_flScale"
// MNetworkVarNames "CUtlStringToken m_name"
// MNetworkVarNames "CUtlStringToken m_hierarchyAttachName"
class CGameSceneNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkDisable
	CTransform m_nodeToWorld; // 0x10	
	// MNetworkDisable
	CEntityInstance* m_pOwner; // 0x30	
	// MNetworkDisable
	CGameSceneNode* m_pParent; // 0x38	
	// MNetworkDisable
	CGameSceneNode* m_pChild; // 0x40	
	// MNetworkDisable
	CGameSceneNode* m_pNextSibling; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0050[0x28]; // 0x50
public:
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "32"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	// -> m_hOwner - 0x80
	// -> m_name - 0x84
	CGameSceneNodeHandle m_hParent; // 0x78	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad00b8[0x8]; // 0xb8
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	// MNetworkPriority "32"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	QAngle m_angRotation; // 0xc0	
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "32"
	float m_flScale; // 0xcc	
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0xd0	
	// MNetworkDisable
	QAngle m_angAbsRotation; // 0xdc	
	// MNetworkDisable
	float m_flAbsScale; // 0xe8	
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0xec	
	// MNetworkDisable
	bool m_bDebugAbsOriginChanges; // 0xee	
	// MNetworkDisable
	bool m_bDormant; // 0xef	
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0xf0	
	struct 
	{
		// MNetworkDisable
		uint8_t m_bDirtyHierarchy: 1; 		
		// MNetworkDisable
		uint8_t m_bDirtyBoneMergeInfo: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedPositionChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedAnglesChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bNetworkedScaleChanged: 1; 		
		// MNetworkDisable
		uint8_t m_bWillBeCallingPostDataUpdate: 1; 		
		// MNetworkDisable
		uint8_t m_bBoneMergeFlex: 1; 		
		// MNetworkDisable
		uint8_t m_nLatchAbsOrigin: 2; 		
		// MNetworkDisable
		uint8_t m_bDirtyBoneMergeBoneToRoot: 1; 		
		uint16_t __pad0: 14;
	}; // 24 bits
	// MNetworkDisable
	uint8_t m_nHierarchicalDepth; // 0xf3	
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0xf4	
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xf5	
private:
	[[maybe_unused]] uint8_t __pad00f6[0x2]; // 0xf6
public:
	// MNetworkEnable
	CUtlStringToken m_name; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00fc[0x3c]; // 0xfc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0x138	
	// MNetworkDisable
	float m_flZOffset; // 0x13c	
	// MNetworkDisable
	float m_flClientLocalScale; // 0x140	
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0x144	
	
	// Datamap fields:
	// void m_bDirtyHierarchy; // -0x1
	// void m_bDirtyBoneMergeInfo; // -0x1
	// void m_bNetworkedPositionChanged; // -0x1
	// void m_bNetworkedAnglesChanged; // -0x1
	// void m_bNetworkedScaleChanged; // -0x1
	// void m_bWillBeCallingPostDataUpdate; // -0x1
	// void m_nLatchAbsOrigin; // -0x1
	// void m_bDirtyBoneMergeBoneToRoot; // -0x1
	// CHandle< CBaseEntity > parentname; // 0x7fffffff
	// bool useLocalOffset; // 0x7fffffff
	// bool useParentRenderBounds; // 0x7fffffff
	// bool positionInLocalSpace; // 0x7fffffff
	// Vector scales; // 0x7fffffff
	// Vector local.scales; // 0x7fffffff
	// float scale; // 0x7fffffff
	// float ModelScale; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa78
// Has VTable
// 
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iMaxHealth"
class CCitadelAnimatingModelEntity : public CBaseAnimGraph
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityKobunVData : public CitadelAbilityVData
{
public:
	Vector m_vSummonFollowOffset; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14ec[0x4]; // 0x14ec
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CloneModifier; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_UrnVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ThrowSandVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SandDebuff; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceDebuff; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_RescueBeamVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DispelAndHealModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa80
// Has VTable
// 
// MNetworkVarNames "float m_flProgress"
// MNetworkVarNames "int m_nNumPushers"
class C_CitadelPayload : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	float m_flProgress; // 0xa78	
	// MNetworkEnable
	int32_t m_nNumPushers; // 0xa7c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa70
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "bool m_bLit"
// MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
// MNetworkVarNames "bool m_bOpaque"
// MNetworkVarNames "bool m_bNoDepth"
// MNetworkVarNames "bool m_bRenderBackface"
// MNetworkVarNames "bool m_bUseOffScreenIndicator"
// MNetworkVarNames "bool m_bExcludeFromSaveGames"
// MNetworkVarNames "bool m_bGrabbable"
// MNetworkVarNames "bool m_bOnlyRenderToTexture"
// MNetworkVarNames "bool m_bDisableMipGen"
// MNetworkVarNames "int32 m_nExplicitImageLayout"
class C_PointClientUIWorldPanel : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0840[0x8]; // 0x840
public:
	bool m_bForceRecreateNextUpdate; // 0x848	
	bool m_bMoveViewToPlayerNextThink; // 0x849	
	bool m_bCheckCSSClasses; // 0x84a	
private:
	[[maybe_unused]] uint8_t __pad084b[0x5]; // 0x84b
public:
	CTransform m_anchorDeltaTransform; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad0870[0x178]; // 0x870
public:
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x9e8	
private:
	[[maybe_unused]] uint8_t __pad09f0[0x20]; // 0x9f0
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xa10	
	// MNetworkEnable
	bool m_bLit; // 0xa11	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0xa12	
private:
	[[maybe_unused]] uint8_t __pad0a13[0x1]; // 0xa13
public:
	// MNetworkEnable
	float m_flWidth; // 0xa14	
	// MNetworkEnable
	float m_flHeight; // 0xa18	
	// MNetworkEnable
	float m_flDPI; // 0xa1c	
	// MNetworkEnable
	float m_flInteractDistance; // 0xa20	
	// MNetworkEnable
	float m_flDepthOffset; // 0xa24	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xa28	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xa2c	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xa30	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xa34	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a39[0x7]; // 0xa39
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xa40	
	// MNetworkEnable
	bool m_bOpaque; // 0xa58	
	// MNetworkEnable
	bool m_bNoDepth; // 0xa59	
	// MNetworkEnable
	bool m_bRenderBackface; // 0xa5a	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0xa5b	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0xa5c	
	// MNetworkEnable
	bool m_bGrabbable; // 0xa5d	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0xa5e	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0xa5f	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0xa60	
	
	// Datamap fields:
	// CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0x9e0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_RapidFire_AirJuggle : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_FleetfootBoots_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FleetfootBootsModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_FleetfootBootsBonusClipModifier; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CItem_WitheringWhip : public CCitadel_Item_TrackingProjectileApplyModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_BreakablePropExtraStamina : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_NanoWarp : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_Haze_StackingDamage : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	int32_t m_nTotalProcs; // 0x168	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_ModDisruptorVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateParticle; // 0x1528	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DisruptModifier; // 0x1608	
	// MPropertyStartGroup "Gameplay"
	float m_flWaveSpeed; // 0x1618	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_UnstoppableVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x5f0	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PlayerShieldParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_PreMatchWait : public CCitadelModifier
{
public:
	Vector m_vSpawnPoint; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1490
// Has VTable
// 
// MNetworkVarNames "uint32 m_PredNetBoolVariables"
// MNetworkVarNames "byte m_PredNetByteVariables"
// MNetworkVarNames "uint16 m_PredNetUInt16Variables"
// MNetworkVarNames "int32 m_PredNetIntVariables"
// MNetworkVarNames "uint32 m_PredNetUInt32Variables"
// MNetworkVarNames "uint64 m_PredNetUInt64Variables"
// MNetworkVarNames "float m_PredNetFloatVariables"
// MNetworkVarNames "Vector m_PredNetVectorVariables"
// MNetworkVarNames "Quaternion m_PredNetQuaternionVariables"
// MNetworkVarNames "CGlobalSymbol m_PredNetGlobalSymbolVariables"
// MNetworkVarNames "uint32 m_OwnerOnlyPredNetBoolVariables"
// MNetworkVarNames "byte m_OwnerOnlyPredNetByteVariables"
// MNetworkVarNames "uint16 m_OwnerOnlyPredNetUInt16Variables"
// MNetworkVarNames "int32 m_OwnerOnlyPredNetIntVariables"
// MNetworkVarNames "uint32 m_OwnerOnlyPredNetUInt32Variables"
// MNetworkVarNames "uint64 m_OwnerOnlyPredNetUInt64Variables"
// MNetworkVarNames "float m_OwnerOnlyPredNetFloatVariables"
// MNetworkVarNames "Vector m_OwnerOnlyPredNetVectorVariables"
// MNetworkVarNames "Quaternion m_OwnerOnlyPredNetQuaternionVariables"
// MNetworkVarNames "CGlobalSymbol m_OwnerOnlyPredNetGlobalSymbolVariables"
// MNetworkVarNames "int m_nBoolVariablesCount"
// MNetworkVarNames "int m_nOwnerOnlyBoolVariablesCount"
// MNetworkVarNames "int m_nRandomSeedOffset"
// MNetworkVarNames "float m_flLastTeleportTime"
class CAnimGraphNetworkedVariables
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetBoolVarChanged"
	// MNetworkAlias "m_PredBoolVariables"
	C_NetworkUtlVectorBase< uint32 > m_PredNetBoolVariables; // 0x8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetByteVarChanged"
	// MNetworkAlias "m_PredByteVariables"
	C_NetworkUtlVectorBase< uint8 > m_PredNetByteVariables; // 0x20	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt16VarChanged"
	// MNetworkAlias "m_PredUInt16Variables"
	C_NetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; // 0x38	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetIntVarChanged"
	// MNetworkAlias "m_PredIntVariables"
	C_NetworkUtlVectorBase< int32 > m_PredNetIntVariables; // 0x50	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt32VarChanged"
	// MNetworkAlias "m_PredUInt32Variables"
	C_NetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; // 0x68	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetUInt64VarChanged"
	// MNetworkAlias "m_PredUInt64Variables"
	C_NetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables; // 0x80	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetFloatVarChanged"
	// MNetworkAlias "m_PredFloatVariables"
	C_NetworkUtlVectorBase< float32 > m_PredNetFloatVariables; // 0x98	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetVectorVarChanged"
	// MNetworkAlias "m_PredVectorVariables"
	C_NetworkUtlVectorBase< Vector > m_PredNetVectorVariables; // 0xb0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetQuaternionVarChanged"
	// MNetworkAlias "m_PredQuaternionVariables"
	C_NetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; // 0xc8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnNetGlobalSymbolVarChanged"
	// MNetworkAlias "m_PredGlobalSymbolVariables"
	C_NetworkUtlVectorBase< CGlobalSymbol > m_PredNetGlobalSymbolVariables; // 0xe0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOBoolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetBoolVariables"
	C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables; // 0xf8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOByteVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetByteVariables"
	C_NetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables; // 0x110	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt16VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt16Variables"
	C_NetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables; // 0x128	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOIntVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetIntVariables"
	C_NetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables; // 0x140	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt32VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt32Variables"
	C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables; // 0x158	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOUInt64VarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetUInt64Variables"
	C_NetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables; // 0x170	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOFloatVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetFloatVariables"
	C_NetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables; // 0x188	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOVectorVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetVectorVariables"
	C_NetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables; // 0x1a0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOQuaternionVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetQuaternionVariables"
	C_NetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables; // 0x1b8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkChangeCallback "OnNetOOGlobalSymbolVarChanged"
	// MNetworkAlias "m_OwnerOnlyPredNetGlobalSymbolVariables"
	C_NetworkUtlVectorBase< CGlobalSymbol > m_OwnerOnlyPredNetGlobalSymbolVariables; // 0x1d0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nBoolVariablesCount; // 0x1e8	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nOwnerOnlyBoolVariablesCount; // 0x1ec	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	int32_t m_nRandomSeedOffset; // 0x1f0	
	// MNetworkEnable
	// MNetworkUserGroup "animationgraph"
	// MNetworkChangeCallback "OnTeleportTimeChanged"
	float m_flLastTeleportTime; // 0x1f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
class CBodyComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	CGameSceneNode* m_pSceneNode; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0010[0x10]; // 0x10
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x20	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Ability_Shield : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Item_Savior : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
class C_SoundEventEntityAlias_snd_event_point : public C_SoundEventEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
// Has VTable
class CCitadel_Ability_Intimidate : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc68
// Has VTable
class CCitadel_Ability_ProximityRitual : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x38]; // 0xc28
public:
	GameTime_t m_LastThinkTime; // 0xc60	
	bool m_bWasSelected; // 0xc64	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x188
// Has VTable
// Is Abstract
class CCitadel_Modifier_BaseBulletPreRollProc : public CCitadel_Modifier_BaseEventProc
{
public:
	ShotID_t m_nSuppressProcShotID; // 0x168	
private:
	[[maybe_unused]] uint8_t __pad016c[0x4]; // 0x16c
public:
	CUtlVector< BulletID_t > m_vecProcdBulletIDs; // 0x170	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_GalvanicStormTechShieldVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x600	
	float m_flExplodeSpeed; // 0x6e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechOverflowProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x620	
	CEmbeddedSubclass< CCitadelModifier > m_ProcModifier; // 0x630	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuildupSuccessEffect; // 0x640	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "GameTime_t m_flLatchTime"
// MNetworkVarNames "float m_flLatchValue"
struct AbilityResource_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float m_flCurrentValue; // 0x8	
	float m_flPrevRegenRate; // 0xc	
	float m_flMaxValue; // 0x10	
	// MNetworkEnable
	GameTime_t m_flLatchTime; // 0x14	
	// MNetworkEnable
	float m_flLatchValue; // 0x18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Yamato_InfinitySlash_BuffTimer : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_LockDown : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1770
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_DragonsFireVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x15c0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // 0x16a0	
	CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // 0x16b0	
	CEmbeddedSubclass< CCitadelModifier > m_BurnModifier; // 0x16c0	
	// MPropertyStartGroup "Sound"
	CSoundEventName m_BeamStartSound; // 0x16d0	
	CSoundEventName m_BeamStopSound; // 0x16e0	
	CSoundEventName m_BeamPointStartLoopSound; // 0x16f0	
	CSoundEventName m_BeamPointEndLoopSound; // 0x1700	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x1710	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x1720	
	float m_flMaxFallSpeed; // 0x1724	
	float m_flTargetAirSpeedFast; // 0x1728	
	float m_flTargetAirSpeedBase; // 0x172c	
	float m_flTargetAirSpeedSlow; // 0x1730	
	float m_flAcceleration; // 0x1734	
	float m_flDecceleration; // 0x1738	
	float m_flBoostTime; // 0x173c	
	float m_flAirSideSpeedPercent; // 0x1740	
	float m_flAttackHeightMax; // 0x1744	
	float m_flMaxPitchChange; // 0x1748	
	float m_flMaxPitchUp; // 0x174c	
	float m_flMaxPitchDown; // 0x1750	
	float m_flMaxHeight; // 0x1754	
	float m_flForwardPitchBias; // 0x1758	
	float m_flBelowMinHeightPitch; // 0x175c	
	float m_flMinHeight; // 0x1760	
	float m_flChannelingAirDrag; // 0x1764	
	float m_flChannelingMaxFallSpeed; // 0x1768	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Uppercutted : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HatTrickVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd60
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFacing"
class CCitadel_Ability_Bounce_Pad : public C_CitadelBaseAbility
{
public:
	Vector m_vForward; // 0xc28	
	bool m_bShouldDeploy; // 0xc34	
	bool m_bAnglesSet; // 0xc35	
	bool m_bCanCancel; // 0xc36	
private:
	[[maybe_unused]] uint8_t __pad0c37[0x119]; // 0xc37
public:
	// MNetworkEnable
	QAngle m_angFacing; // 0xd50	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1608
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemPowerShardVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RefreshParticle; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tier2Boss_RocketBarrageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x15c0	
	CSoundEventName m_RocketFireSound; // 0x15d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x15e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc90
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0xc08	
	AttachmentHandle_t m_leftFootAttachment; // 0xc20	
	AttachmentHandle_t m_rightFootAttachment; // 0xc21	
private:
	[[maybe_unused]] uint8_t __pad0c22[0x2]; // 0xc22
public:
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0xc24	
	float m_flWaterWorldZ; // 0xc28	
	float m_flWaterNextTraceTime; // 0xc2c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CAbility_Mirage_SandPhantom : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1368
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "bool m_bFirstMovementTick"
// MNetworkVarNames "float m_flCurrentSpeed"
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_Tengu_DragonsFire : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x70]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkChangeCallback "FlyingStateChanged"
	bool m_bFlying; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x3]; // 0xc99
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xc9c	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xca8	
private:
	[[maybe_unused]] uint8_t __pad0ca9[0x3]; // 0xca9
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xcac	
private:
	[[maybe_unused]] uint8_t __pad0cb0[0x688]; // 0xcb0
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1338	
private:
	[[maybe_unused]] uint8_t __pad1344[0x4]; // 0x1344
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnTenguBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0x1348	
private:
	[[maybe_unused]] uint8_t __pad1354[0xc]; // 0x1354
public:
	bool m_bNeedsBeamReset; // 0x1360	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ThrowSandDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x90
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "int16 scale"
// MNetworkVarNames "Vector origin"
// MNetworkVarNames "bool bClip3DSkyBoxNearToWorldFar"
// MNetworkVarNames "float32 flClip3DSkyBoxNearToWorldFarOffset"
// MNetworkVarNames "fogparams_t fog"
// MNetworkVarNames "WorldGroupId_t m_nWorldGroupID"
struct sky3dparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	int16_t scale; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector origin; // 0xc	
	// MNetworkEnable
	bool bClip3DSkyBoxNearToWorldFar; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
public:
	// MNetworkEnable
	float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c	
	// MNetworkEnable
	fogparams_t fog; // 0x20	
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupID; // 0x88	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa90
// Has VTable
class C_ItemFlare : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_ArmorUpgrade_ReturnFire : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Stunned : public CCitadelModifier
{
public:
	bool m_bEnabled; // 0xc0	
	bool m_bWasEnabled; // 0xc1	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LashParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strVictimCastSound; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ChargedBombVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBeepSound; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class C_Citadel_Projectile_Viscous_GooGrenade : public C_CitadelProjectile
{
public:
	int32_t m_nBounces; // 0x898	
	GameTime_t m_tNextDetonateTime; // 0x89c	
	CUtlVector< CHandle< C_BaseEntity > > m_vecProjectileHitTargets; // 0x8a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_Thumper_EnemyPulled : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_RapidFire : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_CatAnimatingVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	Color m_cGlowColor; // 0x108	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_RestorativeGoo : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Idol_Return : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xae8
// Has VTable
// 
// MNetworkVarNames "Vector m_ragPos"
// MNetworkVarNames "QAngle m_ragAngles"
// MNetworkVarNames "float32 m_flBlendWeight"
// MNetworkVarNames "EHANDLE m_hRagdollSource"
class C_RagdollProp : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a70[0x8]; // 0xa70
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< Vector > m_ragPos; // 0xa78	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "13"
	// MNetworkChangeCallback "ragAnglesChanged"
	C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0xa90	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "1"
	float m_flBlendWeight; // 0xaa8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRagdollSource; // 0xaac	
	AttachmentHandle_t m_iEyeAttachment; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0x3]; // 0xab1
public:
	float m_flBlendWeightCurrent; // 0xab4	
	CUtlVector< int32 > m_parentPhysicsBoneIndices; // 0xab8	
	CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // 0xad0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
class C_TriggerLerpObject : public C_BaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHighAlertVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_ZiplineBoost : public CCitadelModifier
{
public:
	bool m_bIsBoosting; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BreakablePropSpeedPickupVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Powerup Values"
	float m_flSpeedBoost; // 0x5f0	
	float m_flSprintBoost; // 0x5f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc
// Has Trivial Destructor
struct C_EconEntity__AttachedParticleInfo_t
{
public:
	ParticleIndex_t m_nAttachedParticleIndex; // 0x0	
	CUtlStringToken m_customType; // 0x4	
	bool m_bShouldDestroyImmediately; // 0x8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BoloVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TrapModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_ReverseLeechModifier; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe08
// Has VTable
// 
// MNetworkVarNames "bool m_bWantsSlow"
// MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
// MNetworkVarNames "float m_flLatchedTimeScaleFrac"
// MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
// MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
class CCitadel_Ability_Chrono_KineticCarbine : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bWantsSlow; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c29[0x3]; // 0xc29
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flLatchedTimeScaleFrac; // 0xc30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSpeedBoostEndTime; // 0xc34	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flShotTimeScaleEndTime; // 0xc38	
private:
	[[maybe_unused]] uint8_t __pad0c3c[0x4]; // 0xc3c
public:
	float m_flStoredPowerPct; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_DeathTaxTechAmp : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_BaseProjectileAOEModifierVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AOEModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
class CCitadel_Modifier_ColossusActive : public CCitadelModifier
{
public:
	float m_flOriginalModelScale; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf0
// Has VTable
// 
// MNetworkVarNames "int m_iCurrentResistValue"
class CCitadel_ArmorUpgrade_AblativeCoat : public CCitadel_Item
{
public:
	// MNetworkEnable
	int32_t m_iCurrentResistValue; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_PermanentPickupVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_SandPhantom_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PreCreationModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_WhirlwindEvasionModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_SandPhantomModifier; // 0x1500	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_Cadence_GrandFinale : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
class CCitadel_Modifier_LockDown_Debuff : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x118]; // 0xc0
public:
	Vector m_vEscapeTarget; // 0x1d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xda8
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_Bebop_LaserBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x150]; // 0xc28
public:
	bool m_bZoomed; // 0xd78	
	// MNetworkEnable
	bool m_bAirCast; // 0xd79	
private:
	[[maybe_unused]] uint8_t __pad0d7a[0x2]; // 0xd7a
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0xd7c	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBebopBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xd88	
private:
	[[maybe_unused]] uint8_t __pad0d94[0xc]; // 0xd94
public:
	bool m_bNeedsBeamReset; // 0xda0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_Base_Buildup : public CCitadelModifier
{
public:
	GameTime_t m_flLastBuildupAppliedTime; // 0xc0	
	float m_flDelayedDieTimeRemaining; // 0xc4	
	bool m_bInDelayTime; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	float m_flBuildUpDecayDelayFromWeaponCycleTime; // 0xcc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Shield : public CCitadelModifier
{
public:
	CHandle< C_Citadel_Shield > m_hShieldEntity; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_BurstFireVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ActivationSound; // 0x1528	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Basic_HealthRegen : public CCitadelModifier
{
public:
	float m_flHealthRegen; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x78
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector m_vOrigin"
// MNetworkVarNames "Vector m_vStart"
// MNetworkVarNames "Vector m_vNormal"
// MNetworkVarNames "QAngle m_vAngles"
// MNetworkVarNames "CEntityHandle m_hEntity"
// MNetworkVarNames "CEntityHandle m_hOtherEntity"
// MNetworkVarNames "float32 m_flScale"
// MNetworkVarNames "float32 m_flMagnitude"
// MNetworkVarNames "float32 m_flRadius"
// MNetworkVarNames "CUtlStringToken m_nSurfaceProp"
// MNetworkVarNames "HParticleSystemDefinition m_nEffectIndex"
// MNetworkVarNames "uint32 m_nDamageType"
// MNetworkVarNames "uint8 m_nPenetrate"
// MNetworkVarNames "uint16 m_nMaterial"
// MNetworkVarNames "uint16 m_nHitBox"
// MNetworkVarNames "uint8 m_nColor"
// MNetworkVarNames "uint8 m_fFlags"
// MNetworkVarNames "AttachmentHandle_t m_nAttachmentIndex"
// MNetworkVarNames "CUtlStringToken m_nAttachmentName"
// MNetworkVarNames "uint16 m_iEffectName"
// MNetworkVarNames "uint8 m_nExplosionType"
class CEffectData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord_integral"
	Vector m_vOrigin; // 0x8	
	// MNetworkEnable
	// MNetworkEncoder "coord_integral"
	Vector m_vStart; // 0x14	
	// MNetworkEnable
	// MNetworkEncoder "normal"
	Vector m_vNormal; // 0x20	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	QAngle m_vAngles; // 0x2c	
	// MNetworkEnable
	CEntityHandle m_hEntity; // 0x38	
	// MNetworkEnable
	CEntityHandle m_hOtherEntity; // 0x3c	
	// MNetworkEnable
	float m_flScale; // 0x40	
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1023.000000"
	// MNetworkEncodeFlags "1"
	float m_flMagnitude; // 0x44	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1023.000000"
	// MNetworkEncodeFlags "1"
	float m_flRadius; // 0x48	
	// MNetworkEnable
	CUtlStringToken m_nSurfaceProp; // 0x4c	
	// MNetworkEnable
	CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; // 0x50	
	// MNetworkEnable
	uint32_t m_nDamageType; // 0x58	
	// MNetworkEnable
	uint8_t m_nPenetrate; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad005d[0x1]; // 0x5d
public:
	// MNetworkEnable
	uint16_t m_nMaterial; // 0x5e	
	// MNetworkEnable
	uint16_t m_nHitBox; // 0x60	
	// MNetworkEnable
	uint8_t m_nColor; // 0x62	
	// MNetworkEnable
	uint8_t m_fFlags; // 0x63	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachmentIndex; // 0x64	
private:
	[[maybe_unused]] uint8_t __pad0065[0x3]; // 0x65
public:
	// MNetworkEnable
	CUtlStringToken m_nAttachmentName; // 0x68	
	// MNetworkEnable
	uint16_t m_iEffectName; // 0x6c	
	// MNetworkEnable
	uint8_t m_nExplosionType; // 0x6e	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierSleepBombAuraVData : public CCitadelModifierAuraVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Slork_Ambush : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Burning : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySummonGangsterVData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_SuperNeutralShield : public CCitadelBaseAbilityServerOnly
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
// 
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "NPC_STATE m_NPCState"
// MNetworkVarNames "bool m_bFadeCorpse"
// MNetworkVarNames "bool m_bImportantRagdoll"
class C_AI_BaseNPC : public C_BaseCombatCharacter
{
public:
	// MNetworkEnable
	NPC_STATE m_NPCState; // 0xc90	
	// MNetworkEnable
	bool m_bFadeCorpse; // 0xc94	
	// MNetworkEnable
	bool m_bImportantRagdoll; // 0xc95	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1da8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData
{
public:
	float m_flMinButtonHoldTimeToActivate; // 0x14e0	
	float m_flCrouchDropSpeedFraction; // 0x14e4	
	float m_flCrouchDropAirDragSuppressDuration; // 0x14e8	
	float m_flDetachDisallowedTime; // 0x14ec	
	float m_flCameraWobbleIntensity; // 0x14f0	
	// MPropertyDescription "The DOF settings to apply while riding the zipline."
	DOFDesc_t m_DOFWhileZiplining; // 0x14f4	
private:
	[[maybe_unused]] uint8_t __pad1504[0x4]; // 0x1504
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // 0x1508	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // 0x17a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // 0x1888	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // 0x1968	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // 0x1a48	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strZipLineSummonSound; // 0x1b28	
	CSoundEventName m_strZipLineLatchedSound; // 0x1b38	
	CSoundEventName m_strZipLineStartSound; // 0x1b48	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // 0x1b58	
	CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // 0x1b68	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // 0x1b78	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // 0x1b88	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // 0x1b98	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1ba8	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1c28	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1ca8	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1d28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_Colossus_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
class CCitadel_Modifier_Out_Of_Combat_Health_Regen : public CCitadelModifier
{
public:
	GameTime_t m_LastDamageTaken; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierGlitchVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class CItemExplosiveBarrel : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CCitadel_Ability_Stomp : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FissureWallVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebrisParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpikeParticle; // 0x6d0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_WallSpawnSound; // 0x7b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x7c0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyVisionModifier; // 0x7d0	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x7e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_Knockdown : public CCitadel_Modifier_Stunned
{
public:
	QAngle m_angStunAngles; // 0xc8	
	EKnockDownTypes m_ePreferredKnockdownType; // 0xd4	
	bool m_bForceTakePreferred; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
public:
	GameTime_t m_flGetUpAnimTime; // 0xdc	
	bool m_bGetUpCamSeqStarted; // 0xe0	
	bool m_bOnGroundDuration; // 0xe1	
private:
	[[maybe_unused]] uint8_t __pad00e2[0x2]; // 0xe2
public:
	SatVolumeIndex_t m_satIndex; // 0xe4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_EscalatingExposureProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Tier2Boss_LaserBeam : public CCitadelBaseAbilityServerOnly
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_vecAbilities"
// MNetworkVarNames "EntitySubclassID_t m_vecUniversalItems"
// MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationSlots"
// MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationAbilityIDs"
// MNetworkVarNames "EHANDLE m_hSelectedAbility"
// MNetworkVarNames "EHANDLE m_hPreviouslySelectedAbility"
// MNetworkVarNames "bool m_bPreviousAbilityQueued"
// MNetworkVarNames "float m_flTimeScale"
// MNetworkVarNames "float m_flParticleTimeScale"
// MNetworkVarNames "bool m_bInInterruptState"
// MNetworkVarNames "AbilityResource_t m_ResourceStamina"
// MNetworkVarNames "AbilityResource_t m_ResourceAbility"
class CCitadelAbilityComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x68]; // 0x8
public:
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkChangeCallback "abilitiesChanged"
	// MNetworkPriority "32"
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecAbilities; // 0x70	
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkPriority "32"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecUniversalItems; // 0x88	
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkPriority "32"
	C_NetworkUtlVectorBase< int32 > m_arPendingAsyncAbilityReservationSlots; // 0xa0	
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkPriority "32"
	C_NetworkUtlVectorBase< int32 > m_arPendingAsyncAbilityReservationAbilityIDs; // 0xb8	
	// MNetworkEnable
	// MNetworkChangeCallback "AbiCompSelectedAbilityChanged"
	CHandle< C_BaseEntity > m_hSelectedAbility; // 0xd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BaseEntity > m_hPreviouslySelectedAbility; // 0xd4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bPreviousAbilityQueued; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "AbiCompTimeScaleChanged"
	float m_flTimeScale; // 0xdc	
	// MNetworkEnable
	// MNetworkChangeCallback "AbiCompParticleTimeScaleChanged"
	float m_flParticleTimeScale; // 0xe0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInInterruptState; // 0xe4	
private:
	[[maybe_unused]] uint8_t __pad00e5[0x3]; // 0xe5
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// -> m_flCurrentValue - 0xf0
	// -> m_flPrevRegenRate - 0xf4
	// -> m_flMaxValue - 0xf8
	// -> m_flLatchTime - 0xfc
	// -> m_flLatchValue - 0x100
	AbilityResource_t m_ResourceStamina; // 0xe8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// -> m_flCurrentValue - 0x110
	// -> m_flPrevRegenRate - 0x114
	// -> m_flMaxValue - 0x118
	// -> m_flLatchTime - 0x11c
	// -> m_flLatchValue - 0x120
	AbilityResource_t m_ResourceAbility; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad0128[0x48]; // 0x128
public:
	uint32_t m_nExecuteAbilityMask; // 0x170	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelAbilityComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelAbilityComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc80
// Has VTable
class CCitadel_Item_PowerShard : public CCitadel_Item
{
public:
	CHandle< C_CitadelBaseAbility > m_hLastSignatureToActivate; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseModelEntity> m_glowEntity"
// MNetworkVarNames "bool m_usable"
// MNetworkVarNames "string_t m_szDisplayText"
class C_BaseButton : public C_BaseToggle
{
public:
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_glowEntity; // 0x810	
	// MNetworkEnable
	bool m_usable; // 0x814	
private:
	[[maybe_unused]] uint8_t __pad0815[0x3]; // 0x815
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szDisplayText; // 0x818	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CModifier_Synth_Pulse_BulletShield : public CCitadelModifier
{
public:
	float m_fBulletShield; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	bool m_bAirCast; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c29[0x1c7]; // 0xc29
public:
	bool m_bIsZoomed; // 0xdf0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
// Is Abstract
class CBaseModifierAura : public CCitadelModifier
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_hAuraUnits; // 0xc0	
	ParticleIndex_t m_hAmbientEffect; // 0xd8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a8
// Has VTable
class C_Citadel_Projectile_Wrecker_Teleport : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class CInfoParticleTarget : public C_PointEntity
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_LightningBall : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	CHandle< C_BaseEntity > m_hProjectile; // 0x168	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MNetworkVarNames "ButtonBitMask_t m_nToggleButtonDownMask"
// MNetworkVarNames "float32 m_flMaxspeed"
// MNetworkVarNames "float32 m_arrForceSubtickMoveWhen"
class CPlayer_MovementServices : public CPlayerPawnComponent
{
public:
	int32_t m_nImpulse; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	CInButtonState m_nButtons; // 0x48	
	uint64_t m_nQueuedButtonDownMask; // 0x68	
	uint64_t m_nQueuedButtonChangeMask; // 0x70	
	uint64_t m_nButtonDoublePressed; // 0x78	
	uint32_t m_pButtonPressedCmdNumber[64]; // 0x80	
	uint32_t m_nLastCommandNumberProcessed; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0184[0x4]; // 0x184
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint64_t m_nToggleButtonDownMask; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad0190[0x8]; // 0x190
public:
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2048.000000"
	// MNetworkEncodeFlags "1"
	float m_flMaxspeed; // 0x198	
	// MNetworkEnable
	float m_arrForceSubtickMoveWhen[4]; // 0x19c	
	float m_flForwardMove; // 0x1ac	
	float m_flLeftMove; // 0x1b0	
	float m_flUpMove; // 0x1b4	
	Vector m_vecLastMovementImpulses; // 0x1b8	
	QAngle m_vecOldViewAngles; // 0x1c4	
	
	// Datamap fields:
	// void m_pButtonPressedCmdNumber; // 0x80
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iTeam"
// MNetworkIncludeByName "m_vecViewOffset"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkOverride "m_lifeState"
// MNetworkVarNames "bool m_bBeamActive"
// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames "bool m_bMinion"
// MNetworkVarNames "EHANDLE m_hLookTarget"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
class C_AI_CitadelNPC : public C_AI_BaseNPC
{
private:
	[[maybe_unused]] uint8_t __pad0c98[0x1c]; // 0xc98
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnEyeBeamActiveChanged"
	bool m_bBeamActive; // 0xcb4	
private:
	[[maybe_unused]] uint8_t __pad0cb5[0x3]; // 0xcb5
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnEyeBeamTargetChanged"
	Vector m_vEyeBeamTarget; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cc4[0x4b4]; // 0xcc4
public:
	int32_t m_nPlayerTeamEvent; // 0x1178	
private:
	[[maybe_unused]] uint8_t __pad117c[0x4c]; // 0x117c
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0x11c8	
	// MNetworkEnable
	bool m_bMinion; // 0x1218	
private:
	[[maybe_unused]] uint8_t __pad1219[0x3]; // 0x1219
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLookTarget; // 0x121c	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1220	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
class CCitadel_Item_ColdFront : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_BaseHeldItem : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa80
// Has VTable
class CInWorldItemPanel : public C_PointClientUIWorldPanel
{
public:
	CHandle< C_BaseEntity > m_hTrackedEntity; // 0xa70	
	int32_t m_nTrackedEntity; // 0xa74	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1760
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_PlasmaFlux_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_WeaponDamageBonusModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCasterLoopingSound; // 0x16b0	
	CSoundEventName m_strProjectileExpireSound; // 0x16c0	
	CSoundEventName m_strImpactSound; // 0x16d0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x16e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCitadel_Modifier_Shiv_Dive_TargetPossessed : public CCitadelModifier
{
public:
	ParticleIndex_t m_hPossessedEffect; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe30
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
// MNetworkVarNames "bool m_bRolling"
// MNetworkVarNames "GameTime_t m_flRollStartTime"
class CCitadel_Ability_GooBowlingBall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x1c0]; // 0xc28
public:
	// MNetworkEnable
	CHandle< C_CitadelViscousBall > m_hBall; // 0xde8	
	// MNetworkEnable
	// MNetworkChangeCallback "ViscousBallChanged"
	bool m_bRolling; // 0xdec	
private:
	[[maybe_unused]] uint8_t __pad0ded[0x3]; // 0xded
public:
	// MNetworkEnable
	GameTime_t m_flRollStartTime; // 0xdf0	
private:
	[[maybe_unused]] uint8_t __pad0df4[0xc]; // 0xdf4
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitEntities; // 0xe00	
	bool m_bInitializedOtherAbility; // 0xe18	
	bool m_bSetNoDraw; // 0xe19	
	bool m_bBoosting; // 0xe1a	
private:
	[[maybe_unused]] uint8_t __pad0e1b[0x9]; // 0xe1b
public:
	int32_t m_HeroHitsRemaining; // 0xe24	
	bool m_bBallStarted; // 0xe28	
	bool m_bBallEnded; // 0xe29	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAerialAssaultVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x6e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x7c0	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x7d0	
	float m_flAirSpeed; // 0x7d4	
	float m_flFallSpeed; // 0x7d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SlowingBullets_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ActiveDisarm_SpiritSteal_VData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpiritStealParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierProjectilePitchingLoopSoundThinkerVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Audio"
	// MPropertyDescription "Remap values from Speed to Pitch (MinSpeed, MaxSpeed, MinSpeedPitch, MaxSpeedPitch)"
	CRemapFloat m_speedToPitchRemap; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa78
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iTeam"
// MNetworkExcludeByName "m_flSimulationTime"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkVarNames "EHANDLE m_hEnemy"
class C_NPC_SimpleAnimatingAI : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEnemy; // 0xa70	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Item_ComboBreaker : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Astro_Shotgun_Toggle : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_WeaponEaterStack : public CCitadel_Modifier_Intrinsic_Base
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "int m_iOpvarIndex"
// MNetworkVarNames "bool m_bUseAutoCompare"
class C_SoundOpvarSetPointBase : public C_BaseEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x538	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x540	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x548	
	// MNetworkEnable
	int32_t m_iOpvarIndex; // 0x550	
	// MNetworkEnable
	bool m_bUseAutoCompare; // 0x554	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "int m_nTotalPausedTicks"
// MNetworkVarNames "int m_nPauseStartTick"
// MNetworkVarNames "bool m_bGamePaused"
class C_GameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	// MNetworkEnable
	int32_t m_nTotalPausedTicks; // 0x30	
	// MNetworkEnable
	int32_t m_nPauseStartTick; // 0x34	
	// MNetworkEnable
	bool m_bGamePaused; // 0x38	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xab0
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xa70	
private:
	[[maybe_unused]] uint8_t __pad0a71[0x3]; // 0xa71
public:
	int32_t m_iShapeType; // 0xa74	
	bool m_bConformToCollisionBounds; // 0xa78	
private:
	[[maybe_unused]] uint8_t __pad0a79[0x3]; // 0xa79
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xa7c	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hPayload"
// MNetworkVarNames "int m_nBossesAlive"
// MNetworkVarNames "int m_nBossesMax"
// MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
// MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
class C_CitadelTeam : public C_Team
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPayload; // 0x5f0	
	// MNetworkEnable
	int32_t m_nBossesAlive; // 0x5f4	
	// MNetworkEnable
	int32_t m_nBossesMax; // 0x5f8	
	// MNetworkEnable
	EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x5fc	
private:
	[[maybe_unused]] uint8_t __pad05fe[0x2]; // 0x5fe
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe68
// Has VTable
// 
// MNetworkVarNames "bool m_bPreparing"
// MNetworkVarNames "bool m_bTackling"
// MNetworkVarNames "GameTime_t m_flTackleStartTime"
// MNetworkVarNames "GameTime_t m_flPrepareStartTime"
// MNetworkVarNames "Vector m_vecTackleDir"
class CCitadel_Ability_ChargedTackle : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x1f8]; // 0xc28
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xe20	
	// MNetworkEnable
	bool m_bTackling; // 0xe21	
private:
	[[maybe_unused]] uint8_t __pad0e22[0x2]; // 0xe22
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xe24	
	// MNetworkEnable
	GameTime_t m_flPrepareStartTime; // 0xe28	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xe2c	
	Vector m_vecLastPosition; // 0xe38	
	int32_t m_nStuckFramesCount; // 0xe44	
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // 0xe48	
	ParticleIndex_t m_nDistancePreview; // 0xe60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityChargedBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargeBombModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15d0	
	// MPropertyStartGroup "GamePlay"
	float m_flChargeForMaxDamage; // 0x15e0	
	float m_flMinDamagePercent; // 0x15e4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Aerial_Assault_Watcher : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_GlowToTeammates : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
class CAI_CitadelNPCVData : public CAI_BaseNPCVData
{
public:
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0x200	
	float m_flSightRangePlayers; // 0x228	
	float m_flSightRangeNPCs; // 0x22c	
	CUtlString m_MeleeAnimName; // 0x230	
	float m_flMeleeAttemptRange; // 0x238	
	float m_flMeleeHitRange; // 0x23c	
	float m_flMaxHealthBarDrawDistance; // 0x240	
	// MPropertyStartGroup "Movement"
	float m_flWalkSpeed; // 0x244	
	float m_flRunSpeed; // 0x248	
	float m_flTurnRate; // 0x24c	
	float m_flAcceleration; // 0x250	
	float m_flStepHeight; // 0x254	
	int8_t m_navHull; // 0x258	
	bool m_bFaceTargetEvenWhenMoving; // 0x259	
private:
	[[maybe_unused]] uint8_t __pad025a[0x6]; // 0x25a
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BeamStartSound; // 0x260	
	CSoundEventName m_BeamStopSound; // 0x270	
	CSoundEventName m_BeamPointStartLoopSound; // 0x280	
	CSoundEventName m_BeamPointEndLoopSound; // 0x290	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x2a0	
	CSoundEventName m_strAmbientLoopSound; // 0x2b0	
	CSoundEventName m_DeathSound; // 0x2c0	
	CSoundEventName m_strLastHitSound; // 0x2d0	
	bool m_bPlayLastHitSound; // 0x2e0	
private:
	[[maybe_unused]] uint8_t __pad02e1[0x7]; // 0x2e1
public:
	CSoundEventName m_MeleeHitSound; // 0x2e8	
	CSoundEventName m_MeleeHitPlayerSound; // 0x2f8	
	// MPropertyStartGroup "Visuals"
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sDefaultMaterialGroupName; // 0x308	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sEnemyMaterialGroupName; // 0x310	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sTeam1MaterialGroupName; // 0x318	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sTeam2MaterialGroupName; // 0x320	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // 0x328	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeActivateParticle; // 0x408	
	float m_flModelScale; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	// MPropertyDescription "Particle to play instead of doing a ragdoll"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // 0x4f0	
	// MPropertyStartGroup "Health Bar"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealthBarParticle; // 0x5d0	
	CUtlString m_sHealthBarAttachment; // 0x6b0	
	Color m_HealthBarColorFriend; // 0x6b8	
	Color m_HealthBarColorEnemy; // 0x6bc	
	Color m_HealthBarColorTeam1; // 0x6c0	
	Color m_HealthBarColorTeam2; // 0x6c4	
	Color m_HealthBarColorTeamNeutral; // 0x6c8	
	// MPropertyStartGroup "Misc"
	float m_flHealthBarOffset; // 0x6cc	
	// MPropertyStartGroup "Beam Weapon"
	float m_flBeamWeaponWidth; // 0x6d0	
	float m_flBeamTurnRate; // 0x6d4	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamWeaponParticle; // 0x6d8	
	// MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
	float m_flPhysicsImpulseMultiplier; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07bc[0x4]; // 0x7bc
public:
	CCitadelWeaponInfo m_WeaponInfo; // 0x7c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
// 
// MNetworkVarNames "Vector m_vMin"
// MNetworkVarNames "Vector m_vMax"
class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase
{
public:
	// MNetworkEnable
	Vector m_vMin; // 0x560	
	// MNetworkEnable
	Vector m_vMax; // 0x56c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextPrimaryAttack"
// MNetworkVarNames "int32 m_iClip"
// MNetworkVarNames "int32 m_iBonusClip"
// MNetworkVarNames "float m_flSpreadPenalty"
// MNetworkVarNames "GameTime_t m_flZoomTime"
// MNetworkVarNames "GameTime_t m_flZoomOutTime"
// MNetworkVarNames "int8 m_iSpreadIndex"
// MNetworkVarNames "int16 m_nShotRecoilIndex"
// MNetworkVarNames "GameTime_t m_flNextShotRecoilRecoveryTime"
// MNetworkVarNames "bool m_bIsZoomed"
// MNetworkVarNames "uint8 m_nBurstShotsRemaining"
// MNetworkVarNames "uint32 m_nShotNumber"
// MNetworkVarNames "bool m_bInReload"
// MNetworkVarNames "bool m_bSingleShotReloadFirstBullet"
// MNetworkVarNames "GameTime_t m_reloadQueuedStartTime"
// MNetworkVarNames "GameTime_t m_flReloadAvailableTime"
// MNetworkVarNames "bool m_bCanActiveReload"
// MNetworkVarNames "GameTime_t m_flLastAttackTime"
// MNetworkVarNames "GameTime_t m_flNextAttackDelayStartTime"
// MNetworkVarNames "GameTime_t m_flNextAttackDelayEndTime"
// MNetworkVarNames "float m_flAttackDelayPauseTotalTime"
// MNetworkVarNames "GameTime_t m_flAttackDelayPauseEndTime"
// MNetworkVarNames "ENextAttackDelayReason_t m_eNextAttackDelayReason"
// MNetworkVarNames "bool m_bInputPressedWhileSelected"
// MNetworkVarNames "EFireMode_t m_eActiveFireMode"
class CCitadel_Ability_PrimaryWeapon : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextPrimaryAttack; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iBonusClip; // 0xc30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flSpreadPenalty; // 0xc34	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomTime; // 0xc38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomOutTime; // 0xc3c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int8_t m_iSpreadIndex; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c41[0x1]; // 0xc41
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int16_t m_nShotRecoilIndex; // 0xc42	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_flNextShotRecoilRecoveryTime; // 0xc44	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsZoomed; // 0xc48	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	uint8_t m_nBurstShotsRemaining; // 0xc49	
private:
	[[maybe_unused]] uint8_t __pad0c4a[0x2]; // 0xc4a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	uint32_t m_nShotNumber; // 0xc4c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInReload; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bSingleShotReloadFirstBullet; // 0xc51	
private:
	[[maybe_unused]] uint8_t __pad0c52[0x2]; // 0xc52
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_reloadQueuedStartTime; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flReloadAvailableTime; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCanActiveReload; // 0xc5c	
private:
	[[maybe_unused]] uint8_t __pad0c5d[0x3]; // 0xc5d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastAttackTime; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayStartTime; // 0xc64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayEndTime; // 0xc68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flAttackDelayPauseTotalTime; // 0xc6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackDelayPauseEndTime; // 0xc70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xc74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInputPressedWhileSelected; // 0xc78	
private:
	[[maybe_unused]] uint8_t __pad0c79[0x3]; // 0xc79
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EFireMode_t m_eActiveFireMode; // 0xc7c	
	QAngle m_angRecoilAngles; // 0xc80	
	QAngle m_angRecoilToAdd; // 0xc8c	
	QAngle m_angRecoilRecovery; // 0xc98	
	GameTime_t m_flRecoilStartTime; // 0xca4	
	float m_flRecoilRecoverySpeed; // 0xca8	
	float m_flAddApproachSpeed; // 0xcac	
	float m_flLastAnglesUpdateTime; // 0xcb0	
	bool m_bFireBackwards; // 0xcb4	
private:
	[[maybe_unused]] uint8_t __pad0cb5[0x3]; // 0xcb5
public:
	float m_currentSpread; // 0xcb8	
	float m_currentMaxSpread; // 0xcbc	
	float m_currentFireSpread; // 0xcc0	
	float m_flCurrentSpinRate; // 0xcc4	
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x4]; // 0xcc8
public:
	float m_fFireDuration; // 0xccc	
private:
	[[maybe_unused]] uint8_t __pad0cd0[0x1]; // 0xcd0
public:
	bool m_bFireOnEmpty; // 0xcd1	
private:
	[[maybe_unused]] uint8_t __pad0cd2[0x2]; // 0xcd2
public:
	GameTime_t m_flNextDisarmSound; // 0xcd4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CModifier_SiphonBullets_HealthLoss : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_LongRangeSlowingTech_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierDelayedStunVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa80
// Has VTable
class C_Citadel_CatAnimating : public CCitadelAnimatingModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MNetworkVarNames "bool m_bLoop"
// MNetworkVarNames "float m_flFPS"
// MNetworkVarNames "HRenderTextureStrong m_hPositionKeys"
// MNetworkVarNames "HRenderTextureStrong m_hRotationKeys"
// MNetworkVarNames "Vector m_vAnimationBoundsMin"
// MNetworkVarNames "Vector m_vAnimationBoundsMax"
// MNetworkVarNames "float m_flStartTime"
// MNetworkVarNames "float m_flStartFrame"
class C_TextureBasedAnimatable : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bLoop; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0811[0x3]; // 0x811
public:
	// MNetworkEnable
	float m_flFPS; // 0x814	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x818	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x820	
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0x828	
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0x834	
	// MNetworkEnable
	float m_flStartTime; // 0x840	
	// MNetworkEnable
	float m_flStartFrame; // 0x844	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_IdolReturnTimer : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Targetdummy_2 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierRiotProtocolBuffVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseHitEnemyParticle; // 0x6d0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierCrowdControlDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Tengu_DragonsFire_Fly : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x248
// Has VTable
class CCitadel_Modifier_AirRaid : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_ZipLine_Mastery : public CCitadelModifier
{
public:
	ParticleIndex_t m_nFXIndex; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierIdolReturnTimerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_IcePath_TechPowerLinger : public CCitadelModifier
{
public:
	int32_t m_nBonusSpirit; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_VeilWalkerWatcherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerTriggeredModifier; // 0x600	
	CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerMovespeed; // 0x610	
	// MPropertyStartGroup "Gameplay"
	float m_flTraceLengthMin; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_MeleeTarget : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1180
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralVData : public CAI_CitadelNPCVData
{
public:
	ENeutralTrooperType m_eTrooperType; // 0xe18	
	float m_flGoldReward; // 0xe1c	
	float m_flGoldRewardBonusPercentPerMinute; // 0xe20	
	bool m_bGiveGoldOnHit; // 0xe24	
	bool m_bOrbDropper; // 0xe25	
	bool m_bCapSimultanousAttackers; // 0xe26	
private:
	[[maybe_unused]] uint8_t __pad0e27[0x1]; // 0xe27
public:
	float m_flShieldReactivateDelay; // 0xe28	
	float m_flDyingDuration; // 0xe2c	
	// MPropertyStartGroup "Behavior"
	// MPropertyFriendlyName "Damaged by Bullets?"
	bool m_bDamagedByBullets; // 0xe30	
	// MPropertyFriendlyName "Damaged by Melee?"
	bool m_bDamagedByMelee; // 0xe31	
	// MPropertyFriendlyName "Damaged by Abilities?"
	bool m_bDamagedByAbilities; // 0xe32	
	// MPropertyFriendlyName "Fixed Melee Damage?"
	bool m_bFixedMeleeDamage; // 0xe33	
private:
	[[maybe_unused]] uint8_t __pad0e34[0x4]; // 0xe34
public:
	// MPropertyStartGroup "Shield FX"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0xe38	
	// MPropertyStartGroup "Retaliation Attack"
	// MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
	float m_flRetaliateDamage; // 0xf18	
	float m_flRetaliateCooldown; // 0xf1c	
	// MPropertyDescription "Particle to play when dealing retaliate damage"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_retaliateParticle; // 0xf20	
	// MPropertyStartGroup "AOE Attack"
	bool m_bHasAOEAttack; // 0x1000	
private:
	[[maybe_unused]] uint8_t __pad1001[0x3]; // 0x1001
public:
	float m_flAOERadius; // 0x1004	
	float m_flAOEDamage; // 0x1008	
	float m_flAOEAttackCooldown; // 0x100c	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x1010	
	CEmbeddedSubclass< CCitadelModifier > m_AOEDebuffToApply; // 0x10f0	
	CSoundEventName m_AOEInitiateSound; // 0x1100	
	CSoundEventName m_AOESound; // 0x1110	
	float m_AOEDebuffDuration; // 0x1120	
private:
	[[maybe_unused]] uint8_t __pad1124[0x4]; // 0x1124
public:
	// MPropertyStartGroup "Body"
	CUtlVector< CUtlString > m_vecRandomBodyGroup; // 0x1128	
	CUtlVector< CUtlString > m_vecRandomSkin; // 0x1140	
	// MPropertyStartGroup "Visuals"
	float m_flHullCapsuleRadius; // 0x1158	
	float m_flHullCapsuleHeight; // 0x115c	
	// MPropertyStartGroup "Idles"
	bool m_bFaceEnemyWhileIdle; // 0x1160	
private:
	[[maybe_unused]] uint8_t __pad1161[0x7]; // 0x1161
public:
	CSoundEventName m_IdleLoopSound; // 0x1168	
	// MPropertyStartGroup "Movement"
	MoveType_t m_MoveType; // 0x1178	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class C_SoundOpvarSetPointEntity : public C_SoundOpvarSetPointBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
class C_LightOrthoEntity : public C_LightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_PermanentPickup : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Slork_Raging_Current_CountdownVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TorrentModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WaterAuraParticle; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_Tornado_Aura_Apply_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TossModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // 0x600	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyInAirModifier; // 0x610	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityThumper3VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DroneModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ShakedownPulseVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFireSound; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShakeParticle; // 0x600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChainParticle; // 0x6e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_WreckerScrapBlastDebuff : public CCitadelModifier
{
public:
	float m_flEnemyMoveSlow; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_Viscous_Telepunch_Attack : public CCitadelModifier
{
public:
	Vector m_vecPunchLocation; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_HealingPulse_Tracker : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TechCleaveVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TechCleaveModifier; // 0x1528	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sCleaveProcSound; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCitadel_Modifier_RescueBeam : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	float m_flHealthPerTick; // 0x1a0	
	ParticleIndex_t m_nBeamIndex; // 0x1a4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
class CSkyboxReference : public C_BaseEntity
{
public:
	WorldGroupId_t m_worldGroupId; // 0x538	
	CHandle< C_SkyCamera > m_hSkyCamera; // 0x53c	
	
	// Datamap fields:
	// const char * worldGroupID; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "float m_flAutoExposureMin"
// MNetworkVarNames "float m_flAutoExposureMax"
// MNetworkVarNames "float m_flTonemapPercentTarget"
// MNetworkVarNames "float m_flTonemapPercentBrightPixels"
// MNetworkVarNames "float m_flTonemapMinAvgLum"
// MNetworkVarNames "float m_flExposureAdaptationSpeedUp"
// MNetworkVarNames "float m_flExposureAdaptationSpeedDown"
// MNetworkVarNames "float m_flTonemapEVSmoothingRange"
class C_TonemapController2 : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flAutoExposureMin; // 0x538	
	// MNetworkEnable
	float m_flAutoExposureMax; // 0x53c	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x540	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x544	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x548	
	// MNetworkEnable
	float m_flExposureAdaptationSpeedUp; // 0x54c	
	// MNetworkEnable
	float m_flExposureAdaptationSpeedDown; // 0x550	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x554	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// float InputSetMinExposure; // 0x0
	// float InputSetMaxExposure; // 0x0
	// float InputSetPercentTarget; // 0x0
	// float InputSetPercentBrightPixels; // 0x0
	// float InputSetMinAverageLuminosity; // 0x0
	// float InputSetExposureAdaptationSpeedUp; // 0x0
	// float InputSetExposureAdaptationSpeedDown; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
class CCitadel_WeaponUpgrade_Sharpshooter : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x638
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierAura_ConeVData : public CCitadelModifierAuraVData
{
public:
	float m_flAuraTargetingConeHalfWidth; // 0x630	
	float m_flAuraTargetingConeAngle; // 0x634	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ControlPointCapturerAuraTarget : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Dust_Storm_Thrown : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1718
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_PersonalRejuvenatorVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // 0x1528	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RespawnParticle; // 0x1608	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sDeploySound; // 0x16e8	
	CSoundEventName m_sRespawnSound; // 0x16f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BonusHealthModifier; // 0x1708	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2b8
// Has VTable
class CCitadel_Modifier_Tier2Boss_LaserBeam : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	bool m_bPreview; // 0x130	
private:
	[[maybe_unused]] uint8_t __pad0131[0xb]; // 0x131
public:
	GameTime_t m_flSoundStartTime; // 0x13c	
private:
	[[maybe_unused]] uint8_t __pad0140[0x4]; // 0x140
public:
	Vector m_vStart; // 0x144	
	Vector m_vEnd; // 0x150	
	Vector m_vPrevEnd; // 0x15c	
	float m_flAngleBetweenTrace; // 0x168	
	float m_flDamagePerTick; // 0x16c	
	float m_flCreepDamagePerTick; // 0x170	
	GameTime_t m_flNextDamageTick; // 0x174	
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0x178	
	float m_flDamageTickRate; // 0x190	
	GameTime_t m_flLastShakeTime; // 0x194	
	bool m_bSweepRightFirst; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad0199[0x3]; // 0x199
public:
	QAngle m_angBeamAim; // 0x19c	
	Vector m_vecBeamTarget; // 0x1a8	
	GameTime_t m_flLastBeamUpdateTime; // 0x1b4	
private:
	[[maybe_unused]] uint8_t __pad01b8[0x18]; // 0x1b8
public:
	GameTime_t m_flTargetingTaskStartTime; // 0x1d0	
	float m_flTrackVel; // 0x1d4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2e0
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hTargetEntity"
// MNetworkVarNames "bool m_bState"
// MNetworkVarNames "bool m_bAlwaysUpdate"
// MNetworkVarNames "float32 m_flLightFOV"
// MNetworkVarNames "bool m_bEnableShadows"
// MNetworkVarNames "bool m_bSimpleProjection"
// MNetworkVarNames "bool m_bLightOnlyTarget"
// MNetworkVarNames "bool m_bLightWorld"
// MNetworkVarNames "bool m_bCameraSpace"
// MNetworkVarNames "float32 m_flBrightnessScale"
// MNetworkVarNames "Color m_LightColor"
// MNetworkVarNames "float32 m_flIntensity"
// MNetworkVarNames "float32 m_flLinearAttenuation"
// MNetworkVarNames "float32 m_flQuadraticAttenuation"
// MNetworkVarNames "bool m_bVolumetric"
// MNetworkVarNames "float32 m_flVolumetricIntensity"
// MNetworkVarNames "float32 m_flNoiseStrength"
// MNetworkVarNames "float32 m_flFlashlightTime"
// MNetworkVarNames "uint32 m_nNumPlanes"
// MNetworkVarNames "float32 m_flPlaneOffset"
// MNetworkVarNames "float32 m_flColorTransitionTime"
// MNetworkVarNames "float32 m_flAmbient"
// MNetworkVarNames "char m_SpotlightTextureName"
// MNetworkVarNames "int32 m_nSpotlightTextureFrame"
// MNetworkVarNames "uint32 m_nShadowQuality"
// MNetworkVarNames "float32 m_flNearZ"
// MNetworkVarNames "float32 m_flFarZ"
// MNetworkVarNames "float32 m_flProjectionSize"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "bool m_bFlipHorizontal"
class CProjectedTextureBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetEntity; // 0xc	
	// MNetworkEnable
	bool m_bState; // 0x10	
	// MNetworkEnable
	bool m_bAlwaysUpdate; // 0x11	
private:
	[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
public:
	// MNetworkEnable
	float m_flLightFOV; // 0x14	
	// MNetworkEnable
	bool m_bEnableShadows; // 0x18	
	// MNetworkEnable
	bool m_bSimpleProjection; // 0x19	
	// MNetworkEnable
	bool m_bLightOnlyTarget; // 0x1a	
	// MNetworkEnable
	bool m_bLightWorld; // 0x1b	
	// MNetworkEnable
	bool m_bCameraSpace; // 0x1c	
private:
	[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
public:
	// MNetworkEnable
	float m_flBrightnessScale; // 0x20	
	// MNetworkEnable
	Color m_LightColor; // 0x24	
	// MNetworkEnable
	float m_flIntensity; // 0x28	
	// MNetworkEnable
	float m_flLinearAttenuation; // 0x2c	
	// MNetworkEnable
	float m_flQuadraticAttenuation; // 0x30	
	// MNetworkEnable
	bool m_bVolumetric; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MNetworkEnable
	float m_flVolumetricIntensity; // 0x38	
	// MNetworkEnable
	float m_flNoiseStrength; // 0x3c	
	// MNetworkEnable
	float m_flFlashlightTime; // 0x40	
	// MNetworkEnable
	uint32_t m_nNumPlanes; // 0x44	
	// MNetworkEnable
	float m_flPlaneOffset; // 0x48	
	// MNetworkEnable
	float m_flColorTransitionTime; // 0x4c	
	// MNetworkEnable
	float m_flAmbient; // 0x50	
	// MNetworkEnable
	char m_SpotlightTextureName[512]; // 0x54	
	// MNetworkEnable
	int32_t m_nSpotlightTextureFrame; // 0x254	
	// MNetworkEnable
	uint32_t m_nShadowQuality; // 0x258	
	// MNetworkEnable
	// MNetworkBitCount "16"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "500.000000"
	// MNetworkEncodeFlags "1"
	float m_flNearZ; // 0x25c	
	// MNetworkEnable
	// MNetworkBitCount "18"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1500.000000"
	// MNetworkEncodeFlags "1"
	float m_flFarZ; // 0x260	
	// MNetworkEnable
	float m_flProjectionSize; // 0x264	
	// MNetworkEnable
	float m_flRotation; // 0x268	
	// MNetworkEnable
	bool m_bFlipHorizontal; // 0x26c	
	
	// Static fields:
	static float &Get_m_flVisibleBBoxMinHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CProjectedTextureBase")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
// Is Abstract
class CCitadelModifierAura : public CBaseModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_WeaponUpgrade_FireRateAura : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Bebop_LaserBeamVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LaserModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x268
// Has VTable
class CCitadel_Modifier_Invis : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x188]; // 0xc0
public:
	bool m_bInvis; // 0x248	
private:
	[[maybe_unused]] uint8_t __pad0249[0x3]; // 0x249
public:
	GameTime_t m_flStartInvisTime; // 0x24c	
	bool m_bFullyInvis; // 0x250	
private:
	[[maybe_unused]] uint8_t __pad0251[0x3]; // 0x251
public:
	GameTime_t m_flLastDamageTaken; // 0x254	
	GameTime_t m_flLastSpotted; // 0x258	
	ParticleIndex_t m_nDetectionRangeRing; // 0x25c	
	ParticleIndex_t m_nFullInvisEffect; // 0x260	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
// Has VTable
class CCitadel_Ability_TrooperGrenade : public CCitadelBaseAbilityServerOnly
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_RegeneratingTechShield : public CCitadel_Modifier_BaseShield
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13f0
// Has VTable
// 
// MNetworkVarNames "bool m_bPlayingIdle"
// MNetworkVarNames "bool m_bShieldActive"
class C_NPC_TrooperNeutral : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayingIdleChanged"
	bool m_bPlayingIdle; // 0x13c0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnShieldActiveChanged"
	bool m_bShieldActive; // 0x13c1	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MNetworkVarNames "int m_iReapplyProvisionParity"
// MNetworkVarNames "EHANDLE m_hOuter"
// MNetworkVarNames "attributeprovidertypes_t m_ProviderType"
class CAttributeManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< CHandle< C_BaseEntity > > m_Providers; // 0x8	
	CUtlVector< CHandle< C_BaseEntity > > m_Receivers; // 0x20	
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; // 0x38	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOuter; // 0x3c	
	bool m_bPreventLoopback; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// MNetworkEnable
	attributeprovidertypes_t m_ProviderType; // 0x44	
	CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // 0x48	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Lash_Flog_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FlameDashVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_ProgressModifier; // 0x600	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlameDashParticle; // 0x610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlameAuraParticle; // 0x6f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Stabilizing_Tripod : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_VexBarrierVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_HollowPoint_Stack : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_ArmorUpgrade_SlowImmunity : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x640
// Has VTable
// 
// MNetworkVarNames "float m_flParticleSpacing"
// MNetworkVarNames "float m_flSlack"
// MNetworkVarNames "float m_flRadius"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "int m_nEffectState"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "Vector m_PathNodes_Position"
// MNetworkVarNames "Vector m_PathNodes_TangentIn"
// MNetworkVarNames "Vector m_PathNodes_TangentOut"
// MNetworkVarNames "Vector m_PathNodes_Color"
// MNetworkVarNames "bool m_PathNodes_PinEnabled"
// MNetworkVarNames "float m_PathNodes_RadiusScale"
class C_PathParticleRope : public C_BaseEntity
{
public:
	bool m_bStartActive; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	float m_flMaxSimulationTime; // 0x53c	
	CUtlSymbolLarge m_iszEffectName; // 0x540	
	CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // 0x548	
	// MNetworkEnable
	float m_flParticleSpacing; // 0x560	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flSlack; // 0x564	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	float m_flRadius; // 0x568	
	// MNetworkEnable
	// MNetworkChangeCallback "parametersChanged"
	Color m_ColorTint; // 0x56c	
	// MNetworkEnable
	// MNetworkChangeCallback "effectStateChanged"
	int32_t m_nEffectState; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0574[0x4]; // 0x574
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0x578	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x580	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x598	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x5b0	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x5c8	
	// MNetworkEnable
	// MNetworkChangeCallback "pinStateChanged"
	C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x5e0	
	// MNetworkEnable
	C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x5f8	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputDisablePin; // 0x0
	// float InputSetRadius; // 0x0
	// float InputSetSlack; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_MagicStormWatcher : public CCitadel_Modifier_Intrinsic_Base
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_DiscordVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_TechRangeClamp : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_UseServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Synth_Grasp_Caster_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityRestorativeGooVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RestorativeGooParticle; // 0x14e0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RestorativeGooModifier; // 0x15c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc50
// Has VTable
class CCitadel_Ability_Teleport : public C_CitadelBaseAbility
{
public:
	bool m_bTeleportingToTarget; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c29[0x3]; // 0xc29
public:
	Vector m_vTargetPosition; // 0xc2c	
	QAngle m_vTargetAngles; // 0xc38	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BulletArmorReductionVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
class CScriptComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x28]; // 0x8
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CScriptComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
// MNetworkVarNames "Vector m_Entity_vBoxMins"
// MNetworkVarNames "Vector m_Entity_vBoxMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "int m_Entity_nLightProbeSizeX"
// MNetworkVarNames "int m_Entity_nLightProbeSizeY"
// MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
// MNetworkVarNames "bool m_Entity_bEnabled"
class C_EnvLightProbeVolume : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0xfe0]; // 0x538
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x1518	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x1520	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1528	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1530	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x1538	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x1544	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x1550	
private:
	[[maybe_unused]] uint8_t __pad1551[0x3]; // 0x1551
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x1554	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x1558	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x155c	
private:
	[[maybe_unused]] uint8_t __pad155d[0x3]; // 0x155d
public:
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x1560	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x1564	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1568	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x156c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x1570	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x1574	
private:
	[[maybe_unused]] uint8_t __pad1578[0x9]; // 0x1578
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1581	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x1578
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGenericPerson4VData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCitadel_Modifier_SleepDagger_Asleep : public CCitadel_Modifier_Sleep
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x58]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x300
// Has VTable
class CCitadel_Modifier_Chrono_KineticCarbine : public CCitadelModifier
{
public:
	int32_t m_nBulletCount; // 0xc0	
	float m_flElapsedPct; // 0xc4	
	CHandle< CCitadelBulletTimeWarp > m_hTimeWarp; // 0xc8	
	ParticleIndex_t m_nFullyChargedParticle; // 0xcc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HealthSwapPrecastVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strTargetParticleEffect; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strTargetEnemyParticleEffect; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strTargetScreenParticleEffect; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_LifeDrainVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BeltFed_MagazineVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_SpinUpSound; // 0x5f0	
	CSoundEventName m_SpinDownSound; // 0x600	
	CSoundEventName m_SpinLoopSound; // 0x610	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemStimPakVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StimPakModifier; // 0x1528	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CEntityIndex m_nEntIndex"
// MNetworkVarNames "int m_nTeam"
// MNetworkVarNames "Class_T m_eClass"
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "EMinimapHeight m_eHeight"
// MNetworkVarNames "bool m_bVisibleOnMap"
// MNetworkVarNames "bool m_bBackdoorProtectionActive"
// MNetworkVarNames "GameTick_t m_nTickHidden"
// MNetworkVarNames "uint8 m_nHealthPercent"
// MNetworkVarNames "uint8 m_nPositionX"
// MNetworkVarNames "uint8 m_nPositionY"
class STeamFOWEntity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	CEntityIndex m_nEntIndex; // 0x30	
	// MNetworkEnable
	int32_t m_nTeam; // 0x34	
	// MNetworkEnable
	Class_T m_eClass; // 0x38	
	// MNetworkEnable
	int32_t m_iLane; // 0x3c	
	// MNetworkEnable
	EMinimapHeight m_eHeight; // 0x40	
	// MNetworkEnable
	bool m_bVisibleOnMap; // 0x41	
	// MNetworkEnable
	bool m_bBackdoorProtectionActive; // 0x42	
private:
	[[maybe_unused]] uint8_t __pad0043[0x1]; // 0x43
public:
	// MNetworkEnable
	GameTick_t m_nTickHidden; // 0x44	
	// MNetworkEnable
	uint8_t m_nHealthPercent; // 0x48	
	// MNetworkEnable
	// MNetworkPriority "32"
	uint8_t m_nPositionX; // 0x49	
	// MNetworkEnable
	// MNetworkPriority "32"
	uint8_t m_nPositionY; // 0x4a	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ThermalDetonator_ThinkerVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Hook_Shield : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x150
// Has VTable
class CCitadel_Modifier_FireBomb : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	float m_flSideMoveSpeed; // 0x130	
	Vector m_vReturnPosition; // 0x134	
	QAngle m_vReturnAngles; // 0x140	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Item_AOESilence_Target : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechBurst_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_RespawnCredit : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce8
// Has VTable
class CCitadel_Item_HealthRegenAura : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_CitadelTrackedProjectile : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_Crescendo_InAOE_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PostAOEModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_VeilWalkerMovespeed : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_ReinforcingCasings : public CCitadel_Modifier_Intrinsic_Base
{
public:
	ShotID_t m_LastHitShotID; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Upgrade_OverdriveClip_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffEffect; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_DisarmProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x620	
	CEmbeddedSubclass< CCitadelModifier > m_DisarmProcModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x640	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x650	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_DiminishingSlow : public CCitadelModifier
{
public:
	float m_flSlowPercent; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_UtilityUpgrade_DebuffImmunity : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Rutger_CheatDeath_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_ModifierCheatDeathActivated; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierFealtyTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
// Has VTable
class CCitadel_Modifier_Arcane_Eater_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemMetalSkinVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_MetalSkinModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_AmmoScavenger_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ShieldTracker_BaseVData : public CCitadelModifierVData
{
public:
	float m_flShieldImpactEffectDuration; // 0x5f0	
private:
	[[maybe_unused]] uint8_t __pad05f4[0x4]; // 0x5f4
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldImpactParticle; // 0x5f8	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShieldImpactModifier; // 0x6d8	
	// MPropertyDescription "What type of shield is this."
	EShieldType_t eShieldType; // 0x6e8	
private:
	[[maybe_unused]] uint8_t __pad06e9[0x3]; // 0x6e9
public:
	// MPropertyDescription "How long before the shield can regenerate after taking damage, but not breaking."
	float flCooldownOnDamage; // 0x6ec	
	// MPropertyDescription "How long before the shield can regenerate after breaking (going to 0 shield)"
	float flCooldownOnBreak; // 0x6f0	
	// MPropertyDescription "How long does it take the shield to regenerate from 0 to full health. For partial regen, it's the same rate."
	float flRegenDuration; // 0x6f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkVarNames "bool m_bTimerPaused"
// MNetworkVarNames "float m_flTimeRemaining"
// MNetworkVarNames "GameTime_t m_flTimerEndTime"
// MNetworkVarNames "bool m_bIsDisabled"
// MNetworkVarNames "bool m_bShowInHUD"
// MNetworkVarNames "int m_nTimerLength"
// MNetworkVarNames "int m_nTimerInitialLength"
// MNetworkVarNames "int m_nTimerMaxLength"
// MNetworkVarNames "bool m_bAutoCountdown"
// MNetworkVarNames "int m_nSetupTimeLength"
// MNetworkVarNames "int m_nState"
// MNetworkVarNames "bool m_bStartPaused"
// MNetworkVarNames "bool m_bInCaptureWatchState"
// MNetworkVarNames "float m_flTotalTime"
// MNetworkVarNames "bool m_bStopWatchTimer"
class C_TeamRoundTimer : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnTimerPaused"
	bool m_bTimerPaused; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	// MNetworkEnable
	float m_flTimeRemaining; // 0x53c	
	// MNetworkEnable
	GameTime_t m_flTimerEndTime; // 0x540	
	// MNetworkEnable
	bool m_bIsDisabled; // 0x544	
	// MNetworkEnable
	bool m_bShowInHUD; // 0x545	
private:
	[[maybe_unused]] uint8_t __pad0546[0x2]; // 0x546
public:
	// MNetworkEnable
	int32_t m_nTimerLength; // 0x548	
	// MNetworkEnable
	int32_t m_nTimerInitialLength; // 0x54c	
	// MNetworkEnable
	int32_t m_nTimerMaxLength; // 0x550	
	// MNetworkEnable
	bool m_bAutoCountdown; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	// MNetworkEnable
	int32_t m_nSetupTimeLength; // 0x558	
	// MNetworkEnable
	int32_t m_nState; // 0x55c	
	// MNetworkEnable
	bool m_bStartPaused; // 0x560	
	// MNetworkEnable
	bool m_bInCaptureWatchState; // 0x561	
private:
	[[maybe_unused]] uint8_t __pad0562[0x2]; // 0x562
public:
	// MNetworkEnable
	float m_flTotalTime; // 0x564	
	// MNetworkEnable
	bool m_bStopWatchTimer; // 0x568	
	bool m_bFireFinished; // 0x569	
	bool m_bFire5MinRemain; // 0x56a	
	bool m_bFire4MinRemain; // 0x56b	
	bool m_bFire3MinRemain; // 0x56c	
	bool m_bFire2MinRemain; // 0x56d	
	bool m_bFire1MinRemain; // 0x56e	
	bool m_bFire30SecRemain; // 0x56f	
	bool m_bFire10SecRemain; // 0x570	
	bool m_bFire5SecRemain; // 0x571	
	bool m_bFire4SecRemain; // 0x572	
	bool m_bFire3SecRemain; // 0x573	
	bool m_bFire2SecRemain; // 0x574	
	bool m_bFire1SecRemain; // 0x575	
private:
	[[maybe_unused]] uint8_t __pad0576[0x2]; // 0x576
public:
	int32_t m_nOldTimerLength; // 0x578	
	int32_t m_nOldTimerState; // 0x57c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x850
// Has VTable
class C_LaneNode : public CCitadelModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0818[0x30]; // 0x818
public:
	int32_t m_nPlayerTeamEventIndex; // 0x848	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x820
// Has VTable
class C_CitadelViscousBall : public CCitadelModelEntity
{
public:
	CHandle< C_CitadelBaseAbility > m_hAbility; // 0x818	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RagingCurrentVData : public CCitadel_Modifier_StunnedVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TorrentParticle; // 0x6d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TorrentModifier; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityThumper2VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x14e0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strStompExplosionSound; // 0x15c0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_BarbedWireAuraModifier; // 0x15e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde8
// Has VTable
class CCitadel_Ability_ExplosiveBarrel : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Viscous_Telepunch_AttackVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityVacuumVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_VacuumAuraModifier; // 0x14e0	
	// MPropertyStartGroup "+Vacuum Properties"
	float m_flAirSpeedMax; // 0x14f0	
	float m_flFallSpeedMax; // 0x14f4	
	float m_flAirDrag; // 0x14f8	
	float m_flMaxMovespeed; // 0x14fc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierBullChargingVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySprintVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprintParticle; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSprintSound; // 0x15c0	
	// MPropertyStartGroup "+Sprint Properties"
	// MPropertyDescription "How longer after taking or dealing damage are we considered to be in combat?"
	float m_flInCombatDuration; // 0x15d0	
	float m_flSprintAccMS; // 0x15d4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_ZiplineSpeed : public CCitadelModifier
{
public:
	int32_t m_iLane; // 0xc0	
	float m_flStartTime; // 0xc4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca0
// Has VTable
class CAbility_Synth_Affliction : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x70]; // 0xc28
public:
	ParticleIndex_t m_hAOEParticle; // 0xc98	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_Tenacity : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelYamatoBaseVData : public CitadelAbilityVData
{
public:
	float m_flShadowFormSpeed; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc8
// Has VTable
// 
// MNetworkVarNames "Vector m_vecCastStartPos"
// MNetworkVarNames "Vector m_vecDashStartPos"
// MNetworkVarNames "Vector m_vecDashEndPos"
// MNetworkVarNames "QAngle m_angDashStartAng"
// MNetworkVarNames "GameTime_t m_flDashStartTime"
// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
// MNetworkVarNames "EHANDLE m_hTarget"
// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
// MNetworkVarNames "Vector m_rgTargetPos"
// MNetworkVarNames "GameTime_t m_rgTargetPosTime"
class CCitadel_Ability_TangoTether : public C_CitadelBaseAbility
{
public:
	SatVolumeIndex_t m_desatVolIdx; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCastStartPos; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecDashStartPos; // 0xc38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecDashEndPos; // 0xc44	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	QAngle m_angDashStartAng; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashStartTime; // 0xc5c	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xc60	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xc64	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xc68	
	float m_flVelSpring; // 0xc6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xc70	
	int32_t m_nTicksNotMoving; // 0xc74	
	Vector m_vecPrevPos; // 0xc78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	// MNetworkEncoder "coord"
	Vector m_rgTargetPos[20]; // 0xc84	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_rgTargetPosTime[20]; // 0xd74	
	ParticleIndex_t m_nGrappleTravelEffect; // 0xdc4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
// Is Abstract
class CCitadelBaseShivAbility : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_Puddle : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1918
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Bull_LeapVData : public CitadelAbilityVData
{
public:
	CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BoostModifier; // 0x1520	
	CEmbeddedSubclass< CCitadelModifier > m_CrashModifier; // 0x1530	
	CEmbeddedSubclass< CCitadelModifier > m_LandingBonusesModifier; // 0x1540	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TakeOffParticle; // 0x1550	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x1710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_nHoverParticle; // 0x17f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCrashingSound; // 0x18d0	
	CSoundEventName m_strImpactSound; // 0x18e0	
	// MPropertyStartGroup "GamePlay"
	float m_flStartupTime; // 0x18f0	
	float m_flForwardBoostSpeed; // 0x18f4	
	float m_flUpBoostSpeed; // 0x18f8	
	float m_flBoostTurnRate; // 0x18fc	
	float m_flHoverTime; // 0x1900	
	float m_flMinAimAngle; // 0x1904	
	float m_flBoostGain; // 0x1908	
	float m_flBoostTime; // 0x190c	
	float m_flLandingTime; // 0x1910	
	float m_flCrashSpeed; // 0x1914	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Kobun : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
class CNPC_YakuzaGangster : public C_AI_CitadelNPC
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_ModelPointEntity : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "CUtlString m_pathString"
class CPathSimple : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x50]; // 0x538
public:
	// MNetworkEnable
	CUtlString m_pathString; // 0x588	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_UltCombo_Target : public CCitadel_Modifier_Stunned
{
public:
	QAngle m_angles; // 0xc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_WreckingBall_AutoThrow : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2c0
// Has VTable
class CCitadel_Modifier_Bebop_LaserBeam : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x1c8]; // 0xc0
public:
	GameTime_t m_flSoundStartTime; // 0x288	
private:
	[[maybe_unused]] uint8_t __pad028c[0x4]; // 0x28c
public:
	Vector m_vStart; // 0x290	
	Vector m_vEnd; // 0x29c	
	Vector m_vPrevEnd; // 0x2a8	
	float m_flAngleBetweenTrace; // 0x2b4	
	float m_flDamagePerTick; // 0x2b8	
	GameTime_t m_flNextDamageTick; // 0x2bc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Astro_Rifle_SelfVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponFxParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Kelvin_Frozen : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_KineticCarbineVData : public CitadelAbilityVData
{
public:
	float m_flShotTimeScaleLingerDuration; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e4[0x4]; // 0x14e4
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14f8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraKineticCarbineShotFired; // 0x1508	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_DivinersKevlar_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_PrecastSpiritBuffModifier; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa80
// Has VTable
class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel
{
public:
	bool m_bBeenEnabled; // 0xa70	
	bool m_bHide; // 0xa71	
private:
	[[maybe_unused]] uint8_t __pad0a72[0x2]; // 0xa72
public:
	float m_flSeenTargetTime; // 0xa74	
	C_PointClientUIWorldPanel* m_pTargetPanel; // 0xa78	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce0
// Has VTable
class CCitadel_Ability_Shakedown_Target : public C_CitadelBaseAbility
{
public:
	CHandle< CCitadel_Ability_Yakuza_Shakedown > m_hShadowdownAbility; // 0xc28	
	Vector m_AimPos; // 0xc2c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x3e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Bounce_PadVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle; // 0x108	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // 0x1e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle; // 0x2c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCasterBounceSound; // 0x3a8	
	CSoundEventName m_strOtherHeroBounceSound; // 0x3b8	
	CSoundEventName m_strBarrelBounceSound; // 0x3c8	
	CSoundEventName m_strExpiredSound; // 0x3d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_SmokeBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeParticle; // 0x1500	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_ZiplineMasteryVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_JumpBonusModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x278
// Has VTable
class CCitadel_Modifier_BurstFire_Actuator : public CCitadelModifier
{
public:
	bool m_bLastShotInFlight; // 0xc0	
	bool m_bBonusTracked; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad00c2[0x2]; // 0xc2
public:
	int32_t m_nHitCounter; // 0xc4	
	int32_t m_nTotalBurstFireShots; // 0xc8	
	int32_t m_nInitialzedClipSize; // 0xcc	
	int32_t m_nBonusPitch; // 0xd0	
	bool m_bInitialized; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d5[0x3]; // 0xd5
public:
	int32_t m_nIncreasedBurstShotCount; // 0xd8	
	float m_flIntraBurstCycleTime; // 0xdc	
	float m_flCycleTimePct; // 0xe0	
	float m_flMaxCycleTimeOverride; // 0xe4	
	float m_flMaxBurstFireCooldownOverride; // 0xe8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_StatStealBaseVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StatStolenDebuffModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_StatStolenBuffModifier; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Upgrade_Magic_Storm : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e0
// Has VTable
class CCitadelObserver_MovementServices : public CPlayer_MovementServices
{
public:
	float m_flRoamingSpeed; // 0x1d8	
	bool m_bHasFreeCursor; // 0x1dc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x410
// Has VTable
// 
// MNetworkVarNames "CModelState m_modelState"
// MNetworkVarNames "bool m_bIsAnimationEnabled"
// MNetworkVarNames "bool m_bUseParentRenderBounds"
// MNetworkVarNames "CUtlStringToken m_materialGroup"
// MNetworkVarNames "uint8 m_nHitboxSet"
class CSkeletonInstance : public CGameSceneNode
{
private:
	[[maybe_unused]] uint8_t __pad0160[0x10]; // 0x160
public:
	// MNetworkEnable
	// -> m_hModel - 0x210
	// -> m_ModelName - 0x218
	// -> m_bClientClothCreationSuppressed - 0x258
	// -> m_MeshGroupMask - 0x308
	// -> m_nIdealMotionType - 0x38a
	// -> m_nForceLOD - 0x38b
	// -> m_nClothUpdateFlags - 0x38c
	CModelState m_modelState; // 0x170	
	// MNetworkEnable
	bool m_bIsAnimationEnabled; // 0x3a0	
	// MNetworkEnable
	bool m_bUseParentRenderBounds; // 0x3a1	
	// MNetworkDisable
	bool m_bDisableSolidCollisionsForHierarchy; // 0x3a2	
	struct 
	{
		// MNetworkDisable
		uint8_t m_bDirtyMotionType: 1; 		
		// MNetworkDisable
		uint8_t m_bIsGeneratingLatchedParentSpaceState: 1; 		
		uint16_t __pad1: 14;
	}; // 16 bits
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMaterialGroupChanged"
	CUtlStringToken m_materialGroup; // 0x3a4	
	// MNetworkEnable
	uint8_t m_nHitboxSet; // 0x3a8	
	
	// Datamap fields:
	// Vector velocity; // 0x7fffffff
	// Vector rotationAxis; // 0x7fffffff
	// float rotationSpeed; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
// Has VTable
class CAbility_Mirage_EtherealBullets : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_TechCleave : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x11c0
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataAssociatedFile
// MVDataOverlayType
struct CitadelHeroData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< HeroAnimGraphDefaultValueOverride_t > m_vecAnimGraphDefaultValueOverrides; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0020[0x8]; // 0x20
public:
	HeroID_t m_HeroID; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MPropertyStartGroup "Screen Space Particle FX"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hDamageTakenParticle; // 0x30	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hGroundDamageTakenParticle; // 0x110	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hDeathParticle; // 0x1f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hLowHealthParticle; // 0x2d0	
	// MPropertyStartGroup "Visuals"
	CPanoramaImageName m_strSelectionImage; // 0x3b0	
	CPanoramaImageName m_strIconImageSmall; // 0x3c0	
	CPanoramaImageName m_strIconHeroCard; // 0x3d0	
	CPanoramaImageName m_strMinimapImage; // 0x3e0	
	CPanoramaImageName m_strTopBarImage; // 0x3f0	
	CPanoramaImageName m_strTopBarVertical; // 0x400	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hRespawnParticle; // 0x410	
	Color m_colorUI; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hAmbientParticle; // 0x4f8	
	CUtlVector< AmbientParticleSettings_t > m_vecAmbientParticleSettings; // 0x5d8	
	Color m_colorGlowFriendly; // 0x5f0	
	Color m_colorGlowEnemy; // 0x5f4	
	Color m_colorGlowTeam1; // 0x5f8	
	Color m_colorGlowTeam2; // 0x5fc	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strModelName; // 0x600	
	int32_t m_nModelSkin; // 0x6e0	
private:
	[[maybe_unused]] uint8_t __pad06e4[0x4]; // 0x6e4
public:
	// MPropertyDescription "If specified, this model will be used in steam public universe only."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strPublicModelName; // 0x6e8	
	// MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0x7c8	
	// MPropertyStartGroup "UI"
	// MPropertyDescription "AnimGraph for UI"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIAnimGraphModelBinding > > m_strUIAnimGraph; // 0x8a8	
	// MPropertyAttributeEditor "AssetBrowse( vmap )"
	CUtlString m_strUIPortraitMap; // 0x988	
	HeroStatsUI_t m_heroStatsUI; // 0x990	
	HeroStatsDisplay_t m_heroStatsDisplay; // 0x9c0	
	// MPropertyStartGroup "Zipline Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0xa50	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0xad0	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0xb50	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0xbd0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDeathSound; // 0xc50	
	CSoundEventName m_strLastHitSound; // 0xc60	
	CSoundEventName m_strRosterSelectedSound; // 0xc70	
	CSoundEventName m_strRosterRemovedSound; // 0xc80	
	CSoundEventName m_strFootstepSoundEventDefault; // 0xc90	
	CSoundEventName m_strLowHealthSound; // 0xca0	
	CSoundEventName m_strHeroSpecificLowHealthSound; // 0xcb0	
	CSoundEventName m_strMovementLoop; // 0xcc0	
	// MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
	CFootstepTableHandle m_hFootstepSounds; // 0xcd0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGameSoundEventScript; // 0xcd8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hVOEventScript; // 0xdb8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGeneratedVOEventScript; // 0xe98	
	float m_flFootstepSoundTravelDistanceMeters; // 0xf78	
	float m_flStealthSpeedMetersPerSecond; // 0xf7c	
	float m_flStepSoundTime; // 0xf80	
	float m_flStepSoundTimeSprinting; // 0xf84	
	// MPropertyStartGroup
	float m_flCollisionRadius; // 0xf88	
	float m_flCollisionHeight; // 0xf8c	
	float m_flStepHeight; // 0xf90	
	bool m_bInDevelopment; // 0xf94	
	bool m_bAssignedPlayersOnly; // 0xf95	
	bool m_bBotSelectable; // 0xf96	
	bool m_bNewPlayerRecommended; // 0xf97	
	bool m_bLaneTestingRecommended; // 0xf98	
	bool m_bNeedsTesting; // 0xf99	
	bool m_bLimitedTesting; // 0xf9a	
	bool m_bDisabled; // 0xf9b	
	bool m_bPlayerSelectable; // 0xf9c	
private:
	[[maybe_unused]] uint8_t __pad0f9d[0x3]; // 0xf9d
public:
	int32_t m_nComplexity; // 0xfa0	
	int32_t m_nReadability; // 0xfa4	
	// MPropertyStartGroup "Low Health Settings"
	// MPropertyDescription "Percentage of health to be considered low health"
	// MPropertyAttributeRange "0 1"
	float m_flMinLowHealthPercentage; // 0xfa8	
	// MPropertyDescription "Percentage of health to be considered low health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxLowHealthPercentage; // 0xfac	
	// MPropertyDescription "Percentage of health to be considered mid health"
	// MPropertyAttributeRange "0 1"
	float m_flMinMidHealthPercentage; // 0xfb0	
	// MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxMidHealthPercentage; // 0xfb4	
	// MPropertyDescription "Min Max Health for Remapped Value"
	float m_flMinHealthForThreshold; // 0xfb8	
	// MPropertyDescription "Max Max Health for remapped value"
	float m_flMaxHealthForThreshold; // 0xfbc	
	// MPropertyStartGroup
	CUtlOrderedMap< EStatsType, float32 > m_mapStartingStats; // 0xfc0	
	CUtlOrderedMap< EStatsType, HeroScalingStat_t > m_mapScalingStats; // 0xfe8	
private:
	[[maybe_unused]] uint8_t __pad1010[0x18]; // 0x1010
public:
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0x1028	
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapWIPAbilities; // 0x1050	
	CUtlOrderedMap< EItemSlotTypes_t, ItemSlotInfo_t > m_mapItemSlotInfo; // 0x1078	
	CUtlVector< CSubclassName< 4 > > m_RecommendedUpgrades; // 0x10a0	
private:
	[[maybe_unused]] uint8_t __pad10b8[0x70]; // 0x10b8
public:
	EAbilityResourceType m_eAbilityResourceType; // 0x1128	
private:
	[[maybe_unused]] uint8_t __pad112c[0x1c]; // 0x112c
public:
	CUtlOrderedMap< EModifierValue, float32 > m_mapStandardLevelUpUpgrades; // 0x1148	
	CUtlOrderedMap< int32, HeroLevel_t > m_mapLevelInfo; // 0x1170	
	CUtlOrderedMap< EItemSlotTypes_t, CUtlVector< HeroPurchaseBonus_t > > m_mapPurchaseBonuses; // 0x1198	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d8
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class C_SkyCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x540
	// -> origin - 0x544
	// -> bClip3DSkyBoxNearToWorldFar - 0x550
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x554
	// -> fog - 0x558
	// -> m_nWorldGroupID - 0x5c0
	sky3dparams_t m_skyboxData; // 0x538	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x5c8	
	bool m_bUseAngles; // 0x5cc	
private:
	[[maybe_unused]] uint8_t __pad05cd[0x3]; // 0x5cd
public:
	C_SkyCamera* m_pNext; // 0x5d0	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x540
	// Vector m_skyboxData.origin; // 0x544
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x550
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x554
	// bool m_skyboxData.fog.enable; // 0x5bc
	// bool m_skyboxData.fog.blend; // 0x5bd
	// Vector m_skyboxData.fog.dirPrimary; // 0x560
	// Color m_skyboxData.fog.colorPrimary; // 0x56c
	// Color m_skyboxData.fog.colorSecondary; // 0x570
	// float m_skyboxData.fog.start; // 0x57c
	// float m_skyboxData.fog.end; // 0x580
	// float m_skyboxData.fog.maxdensity; // 0x588
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_World : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x720
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVacuumAuraVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FinishParticle; // 0x630	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x710	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb78
// Has VTable
class C_CitadelProjectile_ImmobilizeTrap : public C_CitadelProjectile
{
public:
	bool m_bShouldDraw; // 0x898	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x858
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flFadeInStart"
// MNetworkVarNames "float32 m_flFadeInLength"
// MNetworkVarNames "float32 m_flFadeOutModelStart"
// MNetworkVarNames "float32 m_flFadeOutModelLength"
// MNetworkVarNames "float32 m_flFadeOutStart"
// MNetworkVarNames "float32 m_flFadeOutLength"
// MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
// MNetworkVarNames "Vector m_vDissolverOrigin"
// MNetworkVarNames "uint32 m_nMagnitude"
class C_EntityDissolve : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x8]; // 0x810
public:
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x818	
	// MNetworkEnable
	float m_flFadeInStart; // 0x81c	
	// MNetworkEnable
	float m_flFadeInLength; // 0x820	
	// MNetworkEnable
	float m_flFadeOutModelStart; // 0x824	
	// MNetworkEnable
	float m_flFadeOutModelLength; // 0x828	
	// MNetworkEnable
	float m_flFadeOutStart; // 0x82c	
	// MNetworkEnable
	float m_flFadeOutLength; // 0x830	
	GameTime_t m_flNextSparkTime; // 0x834	
	// MNetworkEnable
	EntityDisolveType_t m_nDissolveType; // 0x838	
	// MNetworkEnable
	Vector m_vDissolverOrigin; // 0x83c	
	// MNetworkEnable
	uint32_t m_nMagnitude; // 0x848	
	bool m_bCoreExplode; // 0x84c	
	bool m_bLinkedToServerEnt; // 0x84d	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
// Has VTable
class CAbility_Mirage_Tornado : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierRiotProtocolEnemyDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Wrecker_UltimateThrowEnemyVData : public CCitadel_Modifier_StunnedVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyHeroStasisEffect; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyHeroGrabEffect; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x800
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ExplosiveBulletsVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x7f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x78
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "Vector localSound"
// MNetworkVarNames "int32 soundscapeIndex"
// MNetworkVarNames "uint8 localBits"
// MNetworkVarNames "int soundscapeEntityListIndex"
// MNetworkVarNames "uint32 soundEventHash"
struct audioparams_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector localSound[8]; // 0x8	
	// MNetworkEnable
	int32_t soundscapeIndex; // 0x68	
	// MNetworkEnable
	uint8_t localBits; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
public:
	// MNetworkEnable
	int32_t soundscapeEntityListIndex; // 0x70	
	// MNetworkEnable
	uint32_t soundEventHash; // 0x74	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
class C_CitadelIdolReturnTrigger : public C_BaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Item_Refresher : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_KnockbackAura : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelItemPickupRejuvVData : public CEntitySubclassVDataBase
{
public:
	CSubclassName< 4 > m_AbilityProjectile; // 0x28	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RejuvModifier; // 0x38	
	CEmbeddedSubclass< CCitadelModifier > m_PunchPickupModifier; // 0x48	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsDroppingParticle; // 0x58	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x740
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class C_EnvWind : public C_BaseEntity
{
public:
	// MNetworkEnable
	C_EnvWindShared m_EnvWindShared; // 0x538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hOwner"
class C_NPC_HeroCloneTrooper : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOwner; // 0x13c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x858
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
// MNetworkVarNames "float m_flFadeDuration"
// MNetworkVarNames "float m_flMinLogExposure"
// MNetworkVarNames "float m_flMaxLogExposure"
// MNetworkVarNames "float m_flMinExposure"
// MNetworkVarNames "float m_flMaxExposure"
// MNetworkVarNames "float m_flExposureCompensation"
// MNetworkVarNames "float m_flExposureFadeSpeedUp"
// MNetworkVarNames "float m_flExposureFadeSpeedDown"
// MNetworkVarNames "float m_flTonemapEVSmoothingRange"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bExposureControl"
class C_PostProcessingVolume : public C_BaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0818[0x10]; // 0x818
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x828	
	// MNetworkEnable
	float m_flFadeDuration; // 0x830	
	// MNetworkEnable
	float m_flMinLogExposure; // 0x834	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x838	
	// MNetworkEnable
	float m_flMinExposure; // 0x83c	
	// MNetworkEnable
	float m_flMaxExposure; // 0x840	
	// MNetworkEnable
	float m_flExposureCompensation; // 0x844	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x848	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x84c	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x850	
	// MNetworkEnable
	bool m_bMaster; // 0x854	
	// MNetworkEnable
	bool m_bExposureControl; // 0x855	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_BullCharging : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_LightningBall : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Passive_CloakVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_FlashlightServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class CServerOnlyModelEntity : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x308
// Has VTable
class CCitadel_Modifier_IcePath : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x230]; // 0xc0
public:
	int32_t m_iShardCount; // 0x2f0	
	Vector m_vLastShardPosition; // 0x2f4	
	CHandle< C_BaseModelEntity > m_hSurfShard; // 0x300	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
class CCitadel_Ability_ChronoSwap : public C_CitadelBaseAbility
{
public:
	bool m_bHitTarget; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCardTossVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonedCard; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCardTossSound; // 0x16a0	
	CSoundEventName m_strCardSummonSound; // 0x16b0	
	// MPropertyStartGroup "+Card Toss Properties"
	float m_flSummonedCardStartSideOffset; // 0x16c0	
	float m_flSummonedCardSideOffsetStep; // 0x16c4	
	float m_flSummonedCardForwardOffset; // 0x16c8	
	float m_flSummonedCardVerticalOffset; // 0x16cc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_TriggerTower : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbf8
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class C_BreakableProp : public CBaseProp
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	// -> m_flDmgModBullet - 0xac0
	// -> m_flDmgModClub - 0xac4
	// -> m_flDmgModExplosive - 0xac8
	// -> m_flDmgModFire - 0xacc
	// -> m_iszPhysicsDamageTableName - 0xad0
	// -> m_iszBasePropData - 0xad8
	// -> m_nInteractions - 0xae0
	// -> m_bSpawnMotionDisabled - 0xae4
	// -> m_nDisableTakePhysicsDamageSpawnFlag - 0xae8
	// -> m_nMotionDisabledSpawnFlag - 0xaec
	CPropDataComponent m_CPropDataComponent; // 0xab0	
	CEntityIOOutput m_OnBreak; // 0xaf0	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xb18	
	CEntityIOOutput m_OnTakeDamage; // 0xb40	
	float m_impactEnergyScale; // 0xb68	
	int32_t m_iMinHealthDmg; // 0xb6c	
	float m_flPressureDelay; // 0xb70	
	float m_flDefBurstScale; // 0xb74	
	Vector m_vDefBurstOffset; // 0xb78	
	CHandle< C_BaseEntity > m_hBreaker; // 0xb84	
	PerformanceMode_t m_PerformanceMode; // 0xb88	
	GameTime_t m_flPreventDamageBeforeTime; // 0xb8c	
	BreakableContentsType_t m_BreakableContentsType; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b94[0x4]; // 0xb94
public:
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xb98	
	CUtlString m_strBreakableContentsParticleOverride; // 0xba0	
	bool m_bHasBreakPiecesOrCommands; // 0xba8	
private:
	[[maybe_unused]] uint8_t __pad0ba9[0x3]; // 0xba9
public:
	float m_explodeDamage; // 0xbac	
	float m_explodeRadius; // 0xbb0	
private:
	[[maybe_unused]] uint8_t __pad0bb4[0x4]; // 0xbb4
public:
	float m_explosionDelay; // 0xbb8	
private:
	[[maybe_unused]] uint8_t __pad0bbc[0x4]; // 0xbbc
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xbc0	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xbc8	
	CUtlSymbolLarge m_explosionCustomSound; // 0xbd0	
	CUtlSymbolLarge m_explosionModifier; // 0xbd8	
	CHandle< C_BasePlayerPawn > m_hPhysicsAttacker; // 0xbe0	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xbe4	
	float m_flDefaultFadeScale; // 0xbe8	
	CHandle< C_BaseEntity > m_hLastAttacker; // 0xbec	
	CHandle< C_BaseEntity > m_hFlareEnt; // 0xbf0	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xbf4	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// void C_BreakablePropBreakThink; // 0x0
	// void C_BreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0xbb4
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MNetworkOverride "m_angRotation CGameSceneNode"
// MNetworkOverride "m_flSimulationTime C_BaseEntity"
class C_FuncRotating : public C_BaseModelEntity
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CModifier_Mirage_Tornado_Aura_Apply : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Base : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierFlyingStrikeTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GrappleRopeParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_PredatoryStatueVData : public CCitadelModifierVData
{
public:
	float m_flThinkInterval; // 0x5f0	
private:
	[[maybe_unused]] uint8_t __pad05f4[0x4]; // 0x5f4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnabledParticle; // 0x6d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // 0x7b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserStartSound; // 0x898	
	CSoundEventName m_strLaserLoopSound; // 0x8a8	
	CSoundEventName m_strEnabledSound; // 0x8b8	
	CSoundEventName m_strEnabledLoopSound; // 0x8c8	
	CSoundEventName m_strDisabledSound; // 0x8d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x8e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x220
// Has VTable
class CCitadel_Modifier_SleepBomb : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x150]; // 0xc0
public:
	Vector m_vecOrigin; // 0x210	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierStackingDamageVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_BloodBomb : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierStimPakVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2b8
// Has VTable
class CCitadel_Modifier_MagicShock_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
// 
// MNetworkVarNames "bool m_bSprinting"
// MNetworkVarNames "GameTime_t m_flInCombatStartTime"
// MNetworkVarNames "GameTime_t m_flInCombatEndTime"
// MNetworkVarNames "GameTime_t m_flSprintStartTime"
class CCitadel_Ability_Sprint : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nSprintParticle; // 0xc28	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSprintingChanged"
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bSprinting; // 0xc2c	
private:
	[[maybe_unused]] uint8_t __pad0c2d[0x3]; // 0xc2d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flInCombatStartTime; // 0xc30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flInCombatEndTime; // 0xc34	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSprintStartTime; // 0xc38	
	bool m_bInCombat; // 0xc3c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_DamageResistance : public CCitadelModifier
{
public:
	float m_flShieldHealth; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Healing_Disabled : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
// 
// MNetworkVarNames "float32 m_flScale"
// MNetworkVarNames "float32 m_flStartScale"
// MNetworkVarNames "float m_flScaleTime"
// MNetworkVarNames "uint32 m_nFlags"
class C_BaseFire : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flScale; // 0x538	
	// MNetworkEnable
	float m_flStartScale; // 0x53c	
	// MNetworkEnable
	float m_flScaleTime; // 0x540	
	// MNetworkEnable
	uint32_t m_nFlags; // 0x544	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_ArmorUpgrade_DebuffReducer : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Empty : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a8
// Has VTable
class C_CitadelPositionHomingProjectile : public C_CitadelTrackedProjectile
{
public:
	Vector m_vecHomingPosition; // 0x898	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CGameModifier_FireUserEntityIO : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa0
class C_CommandContext
{
public:
	bool needsprocessing; // 0x0	
	int32_t command_number; // 0x98	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_GenericPerson_3 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HealthSwapVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BloodExchangeParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Muted : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Targeted_Silence_Debuff : public CCitadel_Modifier_Silenced
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
// Has VTable
class CCitadel_Modifier_TechBleed_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ApplyDebuff_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CModifier_Synth_Grasp_BulletShield : public CCitadelModifier
{
public:
	float m_fBulletShield; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CPointTemplateAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa70
// Has VTable
class C_WaterBullet : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CModifier_Synth_Affliction_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierGangActivityAbilitySwapVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Ability References"
	CSubclassName< 4 > m_SummonGangster; // 0x5f0	
	CSubclassName< 4 > m_TeleportToGangster; // 0x600	
	CSubclassName< 4 > m_Cancel; // 0x610	
	CSubclassName< 4 > m_ReplaceWithSummonGangster; // 0x620	
	CSubclassName< 4 > m_ReplaceWithTeleportToGangster; // 0x630	
	CSubclassName< 4 > m_ReplaceWithCancel; // 0x640	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierRestorativeGooVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RestorativeGooEndParticle; // 0x5f0	
	float m_flDistanceCameraOffsetLerpTime; // 0x6d0	
	float m_flDistanceCameraOffsetBias; // 0x6d4	
	float m_flDistanceCameraOffset; // 0x6d8	
private:
	[[maybe_unused]] uint8_t __pad06dc[0x4]; // 0x6dc
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BreakoutProgressBarModifier; // 0x6e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_NonTargetLoopingSound; // 0x6f0	
	CSoundEventName m_TargetLoopingSound; // 0x700	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Chrono_PulseGrenade_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCitadel_Modifier_BeltFed_Magazine : public CCitadelModifier
{
public:
	bool m_bInitialized; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	float m_flSpinUpRateOverride; // 0xc4	
	float m_flSpinUpDecayOverride; // 0xc8	
	float m_flMaxCycleTimeOverride; // 0xcc	
	float m_flMaxBurstFireCooldownOverride; // 0xd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ItemWalkBack : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1858
// Has VTable
// 
// MNetworkVarNames "CAnimGraphNetworkedVariables m_animGraphNetworkedVars"
// MNetworkVarNames "HSequence m_hSequence"
// MNetworkVarNames "GameTime_t m_flSeqStartTime"
// MNetworkVarNames "float m_flSeqFixedCycle"
// MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
class CBaseAnimGraphController : public CSkeletonAnimationController
{
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	// MNetworkEnable
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x18	
	// MNetworkDisable
	bool m_bSequenceFinished; // 0x14a8	
private:
	[[maybe_unused]] uint8_t __pad14a9[0x3]; // 0x14a9
public:
	// MNetworkDisable
	float m_flSoundSyncTime; // 0x14ac	
	// MNetworkDisable
	uint32_t m_nActiveIKChainMask; // 0x14b0	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "OnNetworkedSequenceChanged"
	// MNetworkPriority "32"
	HSequence m_hSequence; // 0x14b4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	GameTime_t m_flSeqStartTime; // 0x14b8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	float m_flSeqFixedCycle; // 0x14bc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	// MNetworkPriority "32"
	AnimLoopMode_t m_nAnimLoopMode; // 0x14c0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "-4.000000"
	// MNetworkMaxValue "12.000000"
	// MNetworkEncodeFlags "5"
	// MNetworkPriority "32"
	// MNetworkChangeCallback "OnNetworkedAnimationChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate; // 0x14c4	
private:
	[[maybe_unused]] uint8_t __pad14cc[0x4]; // 0x14cc
public:
	// MNetworkDisable
	SequenceFinishNotifyState_t m_nNotifyState; // 0x14d0	
private:
	[[maybe_unused]] uint8_t __pad14d1[0x1]; // 0x14d1
public:
	// MNetworkDisable
	bool m_bNetworkedAnimationInputsChanged; // 0x14d2	
	// MNetworkDisable
	bool m_bNetworkedSequenceChanged; // 0x14d3	
	// MNetworkDisable
	bool m_bLastUpdateSkipped; // 0x14d4	
private:
	[[maybe_unused]] uint8_t __pad14d5[0x3]; // 0x14d5
public:
	// MNetworkDisable
	GameTime_t m_flPrevAnimUpdateTime; // 0x14d8	
	
	// Datamap fields:
	// void m_pAnimGraphInstance; // 0x1778
	// float m_flCachedSequenceCycleRate; // 0x14cc
	// void m_iv_AnimOpHistory; // 0x1808
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd90
// Has VTable
// 
// MNetworkVarNames "float m_flHealthStolenValue"
// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
class CCitadel_Ability_HealthSwap : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xc28	
	float m_flHealthToCaster; // 0xc2c	
	float m_flTargetHealthLost; // 0xc30	
private:
	[[maybe_unused]] uint8_t __pad0c34[0x11c]; // 0xc34
public:
	// MNetworkEnable
	float m_flHealthStolenValue; // 0xd50	
	// MNetworkEnable
	GameTime_t m_flPostCastHoldEndTime; // 0xd54	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x800
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ChainLightningVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x710	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChainModifier; // 0x7f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_Push : public CCitadelModifier
{
public:
	Vector m_vPushForce; // 0xc0	
	float m_flDecayRate; // 0xcc	
	GameTime_t m_TimeDestroy; // 0xd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_Hero_Testing_Damage_Aura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ItemPickupAuraVData : public CCitadelModifierAuraVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Barrage_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BarrageCasterModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_AmpModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x16d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProjectileLaunchSound; // 0x17b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierUppercuttedVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunParticle; // 0x5f0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strStunSound; // 0x6d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NoExplodeModifier; // 0x6e0	
	// MPropertyStartGroup "Gameplay"
	float m_flEnemyNoAirDashDuration; // 0x6f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_PsychicDagger : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa78
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flTurnSolidTime"
class C_Citadel_Ice_Dome_Blocker : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	GameTime_t m_flTurnSolidTime; // 0xa70	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Tokamak_HeatSinks_DOT_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sAfterburnParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sAfterburnExplodeParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a50
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityUppercutVData : public CAbilityMeleeVData
{
public:
	AttackData_t m_UppercutAttackData; // 0x1500	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_UppercutModifier; // 0x1a20	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1a30	
	CEmbeddedSubclass< CCitadelModifier > m_ClipModifier; // 0x1a40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd8
// Has VTable
class CCitadel_Ability_Gravity_Lasso : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_IceDomeVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DomeParticle; // 0x6d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // 0x7b0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyAuraModifier; // 0x7c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDomeEndSound; // 0x7d0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strTargetLoopingSound; // 0x7e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ImmobilizeTrapDOT_Thinker : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_HealthSwapPrecast : public CCitadelModifier
{
public:
	CHandle< C_BaseEntity > m_hTarget; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_StaticChargeVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x14e0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StaticChargeModifier; // 0x15c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_MeleeDamageOnly : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x188
// Has VTable
class CModifier_Mirage_Tornado_Aura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_MobileResupplyAura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a8
// Has VTable
class C_Citadel_Projectile_Guided_Arrow : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x598
// Has VTable
// 
// MNetworkVarNames "bool m_bIsPlayingBack"
// MNetworkVarNames "bool m_bPaused"
// MNetworkVarNames "bool m_bMultiplayer"
// MNetworkVarNames "bool m_bAutogenerated"
// MNetworkVarNames "float32 m_flForceClientTime"
// MNetworkVarNames "uint16 m_nSceneStringIndex"
// MNetworkVarNames "CHandle< C_BaseFlex > m_hActorList"
class C_SceneEntity : public C_PointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x8]; // 0x538
public:
	// MNetworkEnable
	bool m_bIsPlayingBack; // 0x540	
	// MNetworkEnable
	bool m_bPaused; // 0x541	
	// MNetworkEnable
	bool m_bMultiplayer; // 0x542	
	// MNetworkEnable
	bool m_bAutogenerated; // 0x543	
	// MNetworkEnable
	// MNetworkChangeCallback "OnResetClientTime"
	float m_flForceClientTime; // 0x544	
	// MNetworkEnable
	// MNetworkPriority "32"
	uint16_t m_nSceneStringIndex; // 0x548	
	bool m_bClientOnly; // 0x54a	
private:
	[[maybe_unused]] uint8_t __pad054b[0x1]; // 0x54b
public:
	CHandle< C_BaseFlex > m_hOwner; // 0x54c	
	// MNetworkEnable
	// MNetworkPriority "32"
	C_NetworkUtlVectorBase< CHandle< C_BaseFlex > > m_hActorList; // 0x550	
	bool m_bWasPlaying; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad0569[0xf]; // 0x569
public:
	CUtlVector< C_SceneEntity::QueuedEvents_t > m_QueuedEvents; // 0x578	
	float m_flCurrentTime; // 0x590	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceDomeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_IceDomeModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLashFlogDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlogDebuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class C_MultiplayRules : public C_GameRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CBasePlayerControllerAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_ControlPointBlockerAura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc80
// Has VTable
class CCitadel_Item_WarpStone : public CCitadel_Item
{
public:
	ParticleIndex_t m_nCastDelayParticleIndex; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x640
// Has VTable
class C_PathParticleRopeAlias_path_particle_rope_clientside : public C_PathParticleRope
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x218
// Has VTable
class CCitadel_Modifier_RapidFire : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x150]; // 0xc0
public:
	GameTime_t m_flNextAttackTime; // 0x210	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SilencedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EmpParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EmpPlayerParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EmpStatusParticle; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_BulletShieldImpact : public CCitadelModifier
{
public:
	ParticleIndex_t m_AmbientEffect; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Backdoor_Protection : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x11a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData
{
public:
	// MPropertyStartGroup "Node Movement"
	bool m_bEnableMovementToNodes; // 0x1180	
private:
	[[maybe_unused]] uint8_t __pad1181[0x3]; // 0x1181
public:
	CRangeFloat m_flExposedDuration; // 0x1184	
	CRangeFloat m_flHideDuration; // 0x118c	
private:
	[[maybe_unused]] uint8_t __pad1194[0x4]; // 0x1194
public:
	CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // 0x1198	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class CCitadel_Projectile_RocketLauncher_Rocket : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_GoldenIdol : public CCitadel_Ability_BaseHeldItem
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9b8
// Has VTable
// 
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "GameTime_t m_tDieTime"
class C_Projectile_Stomp_Projectile : public C_CitadelProjectile
{
public:
	// MNetworkEnable
	float m_flWidth; // 0x898	
	// MNetworkEnable
	GameTime_t m_tDieTime; // 0x89c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Targetdummy_3 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_StaticCharge : public CCitadelModifier
{
public:
	ParticleIndex_t m_hRingEffect; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x74]; // 0xc4
public:
	float m_flRadius; // 0x138	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CModifier_Upgrade_KineticSash : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_ArmorUpgrade_CloakingDevice : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_ArmorUpgrade_RegenerativeArmor : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "Vector m_vMins"
// MNetworkVarNames "Vector m_vMaxs"
class C_SoundEventAABBEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	Vector m_vMins; // 0x538	
	// MNetworkEnable
	Vector m_vMaxs; // 0x544	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Citadel_Bull_Leap_LandingBonuses_VData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1858
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DownDashParticle; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArriveSound; // 0x16a0	
	CSoundEventName m_strStaminaDrainedSound; // 0x16b0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x16c0	
	CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1740	
	// MPropertyStartGroup "Ground Dash Stuff"
	float m_flMaxAngDiff; // 0x17c0	
	float m_flDurationScaleForSpeed; // 0x17c4	
	float m_flSlideEarlyOutWindow; // 0x17c8	
	float m_flSlideLockoutTime; // 0x17cc	
	float m_flGroundDashAirbornDrag; // 0x17d0	
	float m_flGroundDashAirbornSpeedClamp; // 0x17d4	
	CSoundEventName m_strGroundDashActivate; // 0x17d8	
	CPiecewiseCurve m_curvePosition; // 0x17e8	
	float m_flGroundDashDuration; // 0x1828	
	float m_flGroundDashDistanceInMeters; // 0x182c	
	// MPropertyStartGroup "Air Dash Stuff"
	float m_flAirDashEndVelocityScale; // 0x1830	
	float m_flAirDashAccPct; // 0x1834	
	float m_flDuringDrag; // 0x1838	
	float m_flPostDrag; // 0x183c	
	float m_flPostDragDuration; // 0x1840	
	float m_flDownwardAirDashSpeed; // 0x1844	
	CSoundEventName m_strDashActivate; // 0x1848	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_DebuffImmunity : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_Citadel_Projectile_ProximityRitual : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ConsumedProtectionRacketVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strShieldBreakSound; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy : public CCitadel_Modifier_Stunned
{
public:
	Vector m_vThrowVelocity; // 0xc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_WreckerSalvage_Buff : public CCitadelModifier
{
public:
	ParticleIndex_t m_nBuffParticle; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x110
// Has VTable
class CCitadel_Modifier_StickyBombAttached : public CCitadelModifier
{
public:
	bool m_bDetonateSoundStarted; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0xb]; // 0xc1
public:
	float m_flDamage; // 0xcc	
	ParticleIndex_t m_nParticleIndex; // 0xd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityNikumanVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NikumanModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_SelfBuffModifier; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1720
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_ActiveReload_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SuccessModifier; // 0x1528	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSuccessSound; // 0x1538	
	CSoundEventName m_strFailureSound; // 0x1548	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessParticle; // 0x1558	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FailureParticle; // 0x1638	
	// MPropertyStartGroup "Gameplay"
	float m_flGraceTime; // 0x1718	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TechDamagePulseVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // 0x1528	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x1608	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPulseTickSound; // 0x16e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x840
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hLocalPortalLink"
// MNetworkVarNames "EHANDLE m_hRemotePortalLink"
// MNetworkVarNames "CUtlString m_brushModelName"
// MNetworkVarNames "float m_flFadeStartDist"
// MNetworkVarNames "float m_flFadeEndDist"
// MNetworkVarNames "float m_flFadeStartAngle"
// MNetworkVarNames "float m_flFadeEndAngle"
// MNetworkVarNames "Color m_fadeToColor"
class C_RenderPortal : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLocalPortalLink; // 0x810	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemotePortalLink; // 0x814	
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x818	
	// MNetworkEnable
	float m_flFadeStartDist; // 0x820	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x824	
	// MNetworkEnable
	float m_flFadeStartAngle; // 0x828	
	// MNetworkEnable
	float m_flFadeEndAngle; // 0x82c	
	// MNetworkEnable
	Color m_fadeToColor; // 0x830	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FlameDashGroundAuraVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Item_QuickSilver : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
class CCitadel_Item_AOE_Tech_Shield : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CGameModifier_SetMoveType : public CCitadelModifier
{
public:
	MoveType_t m_nMoveType; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_TangoTetherTarget : public CCitadel_Modifier_Base
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Objective_Bullet_Resist : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x118
// Has VTable
class CCitadel_Modifier_Tokamak_AllySmokeAOE : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Item_Disarm : public CCitadel_Item_TrackingProjectileApplyModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Synth_Barrage_Caster_VData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGangActivityCancelVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AbilitySwap; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x220
// Has VTable
class CCitadel_Modifier_HookTarget : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x4]; // 0xc0
public:
	float m_flCurrentVerticalSpeed; // 0xc4	
	bool m_bSuccess; // 0xc8	
	bool m_bSameTeam; // 0xc9	
	bool m_bPlayedApproachingWhoosh; // 0xca	
private:
	[[maybe_unused]] uint8_t __pad00cb[0x1]; // 0xcb
public:
	float m_flInitialTravelDistance; // 0xcc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySleepDaggerVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SleepModifier; // 0x15c0	
	CEmbeddedSubclass< CCitadelModifier > m_SleepBombModifier; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashFlogVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlogParticle; // 0x14e0	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlogLifeLeachParticle; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlogDebuffModifier; // 0x16a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
// Has VTable
class CCitadel_Modifier_BoxingGlove : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Inhibitor_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c8
// Has VTable
class CCitadel_Modifier_ChainLightning : public CCitadel_Modifier_BaseBulletPreRollProc
{
private:
	[[maybe_unused]] uint8_t __pad0188[0x38]; // 0x188
public:
	GameTime_t m_flNextProcTime; // 0x1c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaa8
// Has VTable
// 
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkIncludeByName "m_nNextThinkTick"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkUserGroupProxy "CBasePlayerWeapon"
// MNetworkVarNames "GameTick_t m_nNextPrimaryAttackTick"
// MNetworkVarNames "float32 m_flNextPrimaryAttackTickRatio"
// MNetworkVarNames "GameTick_t m_nNextSecondaryAttackTick"
// MNetworkVarNames "float32 m_flNextSecondaryAttackTickRatio"
// MNetworkVarNames "int32 m_iClip1"
// MNetworkVarNames "int32 m_iClip2"
// MNetworkVarNames "int m_pReserveAmmo"
class C_BasePlayerWeapon : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextPrimaryAttackTick; // 0xa70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttackTickRatio; // 0xa74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTick_t m_nNextSecondaryAttackTick; // 0xa78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttackTickRatio; // 0xa7c	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip1; // 0xa80	
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; // 0xa84	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_pReserveAmmo[2]; // 0xa88	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
class CCitadel_UtilityUpgrade_HealthNova : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityHealingSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flEffectSize; // 0x14e8	
	float m_flMaxAttackAngle; // 0x14ec	
	CRemapFloat m_remapAngleToTime; // 0x14f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashSwordGlow; // 0x16d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x17b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1890	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x258
// Has VTable
// 
// MGetKV3ClassDefaults
class CBasePlayerWeaponVData
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MPropertyDescription "The name of the weapon entity to spawn for this NPC weapon."
	CUtlString m_szClassName; // 0x10	
	// MPropertyDescription "Model used on the ground or held by an entity"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x18	
	// MPropertyDescription "Was the weapon was built right-handed?"
	// MPropertyGroupName "Visuals"
	bool m_bBuiltRightHanded; // 0xf8	
	// MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
	// MPropertyGroupName "Visuals"
	bool m_bAllowFlipping; // 0xf9	
private:
	[[maybe_unused]] uint8_t __pad00fa[0x6]; // 0xfa
public:
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Attachment to fire bullets from"
	// MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
	CUtlString m_sMuzzleAttachment; // 0x100	
	// MPropertyDescription "Effect when firing this weapon"
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // 0x108	
	CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x1e8	
	ItemFlagTypes_t m_iFlags; // 0x200	
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType "string"
	AmmoIndex_t m_nPrimaryAmmoType; // 0x201	
	// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
	// MPropertyGroupName "Ammo"
	// MPropertyCustomFGDType "string"
	AmmoIndex_t m_nSecondaryAmmoType; // 0x202	
private:
	[[maybe_unused]] uint8_t __pad0203[0x1]; // 0x203
public:
	// MPropertyFriendlyName "Primary Clip Size"
	// MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyAttributeRange "0 255"
	// MPropertyGroupName "Ammo"
	int32_t m_iMaxClip1; // 0x204	
	// MPropertyFriendlyName "Secondary Clip Size"
	// MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "0 255"
	int32_t m_iMaxClip2; // 0x208	
	// MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip1; // 0x20c	
	// MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
	// MPropertyGroupName "Ammo"
	// MPropertyAttributeRange "-1 255"
	int32_t m_iDefaultClip2; // 0x210	
	// MPropertyDescription "This value used to determine this weapon's importance in autoselection"
	// MPropertyGroupName "UI"
	int32_t m_iWeight; // 0x214	
	// MPropertyFriendlyName "Safe To Auto-Switch To"
	// MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchTo; // 0x218	
	// MPropertyFriendlyName "Safe To Auto-Switch Away From"
	// MPropertyGroupName "UI"
	bool m_bAutoSwitchFrom; // 0x219	
private:
	[[maybe_unused]] uint8_t __pad021a[0x2]; // 0x21a
public:
	// MPropertyGroupName "UI"
	RumbleEffect_t m_iRumbleEffect; // 0x21c	
	// MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
	bool m_bLinkedCooldowns; // 0x220	
	// MPropertyGroupName "Ammo"
	// MPropertyDescription "Indicates whether to treat reserve ammo as clips (reloads) instead of raw bullets"
	bool m_bReserveAmmoAsClips; // 0x221	
private:
	[[maybe_unused]] uint8_t __pad0222[0x6]; // 0x222
public:
	CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x228	
	// MPropertyFriendlyName "HUD Bucket"
	// MPropertyDescription "Which 'column' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iSlot; // 0x250	
	// MPropertyFriendlyName "HUD Bucket Position"
	// MPropertyDescription "Which 'row' to display this weapon in the HUD"
	// MPropertyGroupName "UI"
	int32_t m_iPosition; // 0x254	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb60
// Has VTable
// 
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_lifeState"
// MNetworkVarNames "Vector m_poolOrigin"
// MNetworkVarNames "float32 m_waterLevel"
// MNetworkVarNames "float32 m_x"
// MNetworkVarNames "float32 m_y"
// MNetworkVarNames "float32 m_z"
// MNetworkVarNames "float32 m_angle"
class C_Fish : public CBaseAnimGraph
{
public:
	Vector m_pos; // 0xa70	
	Vector m_vel; // 0xa7c	
	QAngle m_angles; // 0xa88	
	int32_t m_localLifeState; // 0xa94	
	float m_deathDepth; // 0xa98	
	float m_deathAngle; // 0xa9c	
	float m_buoyancy; // 0xaa0	
private:
	[[maybe_unused]] uint8_t __pad0aa4[0x4]; // 0xaa4
public:
	// -> m_duration - 0xab0
	// -> m_timestamp - 0xab4
	// -> m_timescale - 0xab8
	// -> m_nWorldGroupId - 0xabc
	CountdownTimer m_wiggleTimer; // 0xaa8	
	float m_wigglePhase; // 0xac0	
	float m_wiggleRate; // 0xac4	
	Vector m_actualPos; // 0xac8	
	QAngle m_actualAngles; // 0xad4	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_poolOrigin; // 0xae0	
	// MNetworkEnable
	float m_waterLevel; // 0xaec	
	bool m_gotUpdate; // 0xaf0	
private:
	[[maybe_unused]] uint8_t __pad0af1[0x3]; // 0xaf1
public:
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_x"
	// MNetworkChangeCallback "OnPosChanged"
	float m_x; // 0xaf4	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_y"
	// MNetworkChangeCallback "OnPosChanged"
	float m_y; // 0xaf8	
	// MNetworkEnable
	// MNetworkSerializer "fish_pos_z"
	// MNetworkChangeCallback "OnPosChanged"
	float m_z; // 0xafc	
	// MNetworkEnable
	// MNetworkSerializer "angle_normalize_positive"
	// MNetworkBitCount "7"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkChangeCallback "OnAngChanged"
	float m_angle; // 0xb00	
	float m_errorHistory[20]; // 0xb04	
	int32_t m_errorHistoryIndex; // 0xb54	
	int32_t m_errorHistoryCount; // 0xb58	
	float m_averageError; // 0xb5c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_Citadel_Projectile_Archer_ChargedShot : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_Item_AOESilence : public CCitadelModifierAura
{
public:
	float m_flStartRadius; // 0xe0	
	float m_flEndRadius; // 0xe4	
	float m_flSpreadDuration; // 0xe8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLightningBallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ZapModifier; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitSound; // 0x14f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strProjectileLoopingSound; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapParticle; // 0x1510	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType
// MVDataOverlayType
class CScaleFunctionVData : public CEntitySubclassVDataBase
{
public:
	EStatsType m_eSpecificStatScaleType; // 0x28	
	float m_flStatScale; // 0x2c	
	bool m_bFunctionDisabled; // 0x30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "GameTime_t m_timestamp"
// MNetworkVarNames "WorldGroupId_t m_nWorldGroupId"
class IntervalTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_timestamp; // 0x8	
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupId; // 0xc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa78
// Has VTable
class C_Citadel_DeployablePreview : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CCitadel_Item_StasisBomb_Aura : public CCitadelModifierAura
{
public:
	float m_AuraRadius; // 0xe0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Targetdummy_1 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_SettingSunThinker : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierHighAlertBuffVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTrappersBoloVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TrapModifier; // 0x15c0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCitadel_Modifier_DisarmProcWatcher : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_RevealTarget : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class CPathAccompany : public C_BaseEntity
{
public:
	CUtlVector< PathAccompanyNode_t > m_vecNodes; // 0x538	
	
	// Datamap fields:
	// CUtlSymbolLarge pathNodes; // 0x7fffffff
	// CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1408
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames "float m_flHealingChargeParticlePct"
// MNetworkVarNames "GameTime_t m_flVulnerableTime"
class C_NPC_Trooper : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x13c0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnTargetedEnemyChanged"
	CHandle< C_BaseEntity > m_hTargetedEnemy; // 0x13c4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHealingChargeChanged"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flHealingChargeParticlePct; // 0x13c8	
	// MNetworkEnable
	GameTime_t m_flVulnerableTime; // 0x13cc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MNetworkVarNames "C_EconItemAttribute m_Attributes"
class CAttributeList
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
	C_UtlVectorEmbeddedNetworkVar< C_EconItemAttribute > m_Attributes; // 0x8	
	CAttributeManager* m_pManager; // 0x58	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDistruptiveChargeVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_Particle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_HornetSting : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MutedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MutedParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MutedPlayerParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MutedStatusParticle; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_TurnCameraToTarget : public CCitadelModifier
{
public:
	CHandle< C_BaseEntity > m_hTarget; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class CLogicalEntity : public C_BaseEntity
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x460
// Has VTable
// 
// MNetworkVarNames "CSkeletonInstance m_skeletonInstance"
class CBodyComponentSkeletonInstance : public CBodyComponent
{
public:
	// MNetworkEnable
	// -> m_modelState - 0x1c0
	// -> m_bIsAnimationEnabled - 0x3f0
	// -> m_bUseParentRenderBounds - 0x3f1
	// -> m_bDisableSolidCollisionsForHierarchy - 0x3f2
	// -> m_materialGroup - 0x3f4
	// -> m_nHitboxSet - 0x3f8
	CSkeletonInstance m_skeletonInstance; // 0x50	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentSkeletonInstance")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xbf8
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nMinCPULevel"
// MNetworkIncludeByName "m_nMaxCPULevel"
// MNetworkIncludeByName "m_nMinGPULevel"
// MNetworkIncludeByName "m_nMaxGPULevel"
// MNetworkVarNames "float32 m_flScrollSpeed"
// MNetworkVarNames "uint16 m_RopeFlags"
// MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
// MNetworkVarNames "uint8 m_nSegments"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hStartPoint"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEndPoint"
// MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
// MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
// MNetworkVarNames "uint8 m_Subdiv"
// MNetworkVarNames "int16 m_RopeLength"
// MNetworkVarNames "int16 m_Slack"
// MNetworkVarNames "float32 m_TextureScale"
// MNetworkVarNames "uint8 m_fLockedPoints"
// MNetworkVarNames "uint8 m_nChangeCount"
// MNetworkVarNames "float32 m_Width"
// MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
class C_RopeKeyframe : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x8]; // 0x810
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0x818	
	int32_t m_nLinksTouchingSomething; // 0x81c	
	bool m_bApplyWind; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0821[0x3]; // 0x821
public:
	int32_t m_fPrevLockedPoints; // 0x824	
	int32_t m_iForcePointMoveCounter; // 0x828	
	bool m_bPrevEndPointPos[2]; // 0x82c	
private:
	[[maybe_unused]] uint8_t __pad082e[0x2]; // 0x82e
public:
	Vector m_vPrevEndPointPos[2]; // 0x830	
	float m_flCurScroll; // 0x848	
	// MNetworkEnable
	float m_flScrollSpeed; // 0x84c	
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad0852[0x6]; // 0x852
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x858	
private:
	[[maybe_unused]] uint8_t __pad0860[0x270]; // 0x860
public:
	Vector m_LightValues[10]; // 0xad0	
	// MNetworkEnable
	uint8_t m_nSegments; // 0xb48	
private:
	[[maybe_unused]] uint8_t __pad0b49[0x3]; // 0xb49
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0xb4c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0xb50	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0xb54	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0xb55	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0xb56	
private:
	[[maybe_unused]] uint8_t __pad0b57[0x1]; // 0xb57
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0xb58	
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0xb5a	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0xb5c	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0xb60	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0xb61	
private:
	[[maybe_unused]] uint8_t __pad0b62[0x2]; // 0xb62
public:
	// MNetworkEnable
	float m_Width; // 0xb64	
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0xb68	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xb78	
	int32_t m_TextureHeight; // 0xb80	
	Vector m_vecImpulse; // 0xb84	
	Vector m_vecPreviousImpulse; // 0xb90	
	float m_flCurrentGustTimer; // 0xb9c	
	float m_flCurrentGustLifetime; // 0xba0	
	float m_flTimeToNextGust; // 0xba4	
	Vector m_vWindDir; // 0xba8	
	Vector m_vColorMod; // 0xbb4	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0xbc0	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xbd8	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0xbf0	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad2: 4;
	}; // 8 bits
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_SilenceContraptionsDebuffVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
// Has VTable
class CCitadel_Ability_Trappers_Bolo : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b8
// Has VTable
class CCitadel_Modifier_Nano_PredatoryStatueTarget : public CCitadelModifier
{
public:
	Vector m_vecStatuePos; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00cc[0xe4]; // 0xcc
public:
	CHandle< C_BaseEntity > m_hStatue; // 0x1b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_SlowingBullets_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
// 
// MNetworkVarNames "HRenderTextureStrong m_hGradientFogTexture"
// MNetworkVarNames "float m_flFogStartDistance"
// MNetworkVarNames "float m_flFogEndDistance"
// MNetworkVarNames "bool m_bHeightFogEnabled"
// MNetworkVarNames "float m_flFogStartHeight"
// MNetworkVarNames "float m_flFogEndHeight"
// MNetworkVarNames "float m_flFarZ"
// MNetworkVarNames "float m_flFogMaxOpacity"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "float m_flFogVerticalExponent"
// MNetworkVarNames "Color m_fogColor"
// MNetworkVarNames "float m_flFogStrength"
// MNetworkVarNames "float m_flFadeTime"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bIsEnabled"
class C_GradientFog : public C_BaseEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hGradientFogTexture; // 0x538	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartDistance; // 0x540	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndDistance; // 0x544	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	bool m_bHeightFogEnabled; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStartHeight; // 0x54c	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogEndHeight; // 0x550	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFarZ; // 0x554	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogMaxOpacity; // 0x558	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogFalloffExponent; // 0x55c	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogVerticalExponent; // 0x560	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	Color m_fogColor; // 0x564	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFogStrength; // 0x568	
	// MNetworkEnable
	// MNetworkChangeCallback "FogStateChanged"
	float m_flFadeTime; // 0x56c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x570	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x571	
	bool m_bGradientFogNeedsTextures; // 0x572	
	
	// Static fields:
	static C_GradientFog* &Get_sm_pGradientFog(){return *reinterpret_cast<C_GradientFog**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GradientFog")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// float InputSetFogStartDistance; // 0x0
	// float InputSetFogEndDistance; // 0x0
	// float InputSetFogStartHeight; // 0x0
	// float InputSetFogEndHeight; // 0x0
	// float InputSetFogMaxOpacity; // 0x0
	// float InputSetFogFalloffExponent; // 0x0
	// float InputSetFogVerticalExponent; // 0x0
	// Color InputSetFogColor; // 0x0
	// float InputSetFogStrength; // 0x0
	// float InputSetFarZ; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Slork_Gun_Poison : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_GenericPerson_4 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerScrapBlastVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelStartParticle; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x16a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Item_Bleeding_Bullets_ActiveVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BleedModifier; // 0x620	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x630	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletImpactParticle; // 0x640	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Stimpak_regen : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_BlastPush : public CCitadelModifier
{
public:
	Vector m_vPush; // 0xc0	
	float m_flPushVelocity; // 0xcc	
	float m_flMaxPushVelocity; // 0xd0	
	float m_flMaxPushVelocitySqr; // 0xd4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CScaleFunctionAbilityProperty_WeaponDamage : public CScaleFunctionBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
class CCitadelPlayerClipComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x10]; // 0x8
public:
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelPlayerClipComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelPlayerClipComponent")->m_static_fields[1]->m_instance);};
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemAOESilenceAuraVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_empWaveParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_Disruptive_Charge : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TargetPracticeDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x600	
	CEmbeddedSubclass< CCitadelModifier > m_EMPModifier; // 0x610	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
// Has VTable
// 
// MNetworkVarNames "Vector m_vecStartPos"
// MNetworkVarNames "Vector m_vecPosition"
// MNetworkVarNames "Vector m_vecInitialPosition"
// MNetworkVarNames "GameTime_t m_CastTime"
// MNetworkVarNames "Vector m_vecDirection"
// MNetworkVarNames "Vector m_vecLeft"
// MNetworkVarNames "float m_Length"
// MNetworkVarNames "bool m_bTraveling"
// MNetworkVarNames "bool m_bPreview"
class CCitadel_Ability_FissureWall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x10]; // 0xc28
public:
	CUtlVector< ParticleIndex_t > m_vecWallPreviewParticles; // 0xc38	
private:
	[[maybe_unused]] uint8_t __pad0c50[0xa8]; // 0xc50
public:
	// MNetworkEnable
	Vector m_vecStartPos; // 0xcf8	
	// MNetworkEnable
	Vector m_vecPosition; // 0xd04	
	// MNetworkEnable
	Vector m_vecInitialPosition; // 0xd10	
	// MNetworkEnable
	GameTime_t m_CastTime; // 0xd1c	
	// MNetworkEnable
	Vector m_vecDirection; // 0xd20	
	// MNetworkEnable
	Vector m_vecLeft; // 0xd2c	
	// MNetworkEnable
	float m_Length; // 0xd38	
	// MNetworkEnable
	// MNetworkChangeCallback "PreviewModeChanged"
	bool m_bTraveling; // 0xd3c	
	// MNetworkEnable
	// MNetworkChangeCallback "PreviewModeChanged"
	bool m_bPreview; // 0xd3d	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCitadel_Modifier_LifestrikeGauntlets : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_CheatDeathImmunityVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffPlayerParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_StatusEffect; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Siphon_Bullets_WatcherVData : public CCitadel_Modifier_StatStealBaseVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // 0x610	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceBeamVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x16a0	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // 0x16b0	
	CEmbeddedSubclass< CCitadelModifier > m_BuildupProcModifier; // 0x16c0	
	// MPropertyStartGroup "Sound"
	CSoundEventName m_BeamStartSound; // 0x16d0	
	CSoundEventName m_BeamStopSound; // 0x16e0	
	CSoundEventName m_BeamPointStartLoopSound; // 0x16f0	
	CSoundEventName m_BeamPointEndLoopSound; // 0x1700	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x1710	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1438
// Has VTable
// 
// MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
class C_NPC_TrooperBoss : public C_NPC_Trooper
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelPlayerClipComponent"
	// MNetworkAlias "CCitadelPlayerClipComponent"
	// MNetworkTypeAlias "CCitadelPlayerClipComponent"
	CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x1408	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe78
// Has VTable
// 
// MNetworkVarNames "EViscousChargedGunState m_ChargeState"
// MNetworkVarNames "float m_nClipConsumed"
// MNetworkVarNames "bool m_bIsCharging"
// MNetworkVarNames "bool m_bIsToggled"
class CCitadel_Ability_ViscousWeapon_Alt : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	EViscousChargedGunState m_ChargeState; // 0xc28	
	// MNetworkEnable
	float m_nClipConsumed; // 0xc2c	
	// MNetworkEnable
	bool m_bIsCharging; // 0xc30	
	// MNetworkEnable
	bool m_bIsToggled; // 0xc31	
private:
	[[maybe_unused]] uint8_t __pad0c32[0x2]; // 0xc32
public:
	ParticleIndex_t m_fxChargingParticle; // 0xc34	
private:
	[[maybe_unused]] uint8_t __pad0c38[0x8]; // 0xc38
public:
	GameTime_t m_flLastBulletConsumedTime; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCitadel_Modifier_ColdFrontAOE : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	ParticleIndex_t m_hAOEEffect; // 0x1a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe88
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class C_PortraitWorldUnit : public C_BaseCombatCharacter
{
public:
	bool m_bSuppressIntroEffects; // 0xc90	
	bool m_bIsAlternateLoadout; // 0xc91	
	bool m_bSpawnBackgroundModels; // 0xc92	
	bool m_bDeferredPortrait; // 0xc93	
	bool m_bShowParticleAssetModifiers; // 0xc94	
	bool m_bIgnorePortraitInfo; // 0xc95	
	bool m_bFlyingCourier; // 0xc96	
private:
	[[maybe_unused]] uint8_t __pad0c97[0x1]; // 0xc97
public:
	int32_t m_nEffigyStatusEffect; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c9c[0x4]; // 0xc9c
public:
	CUtlSymbolLarge m_effigySequenceName; // 0xca0	
	float m_flStartingAnimationCycle; // 0xca8	
	float m_flRareLoadoutAnimChance; // 0xcac	
private:
	[[maybe_unused]] uint8_t __pad0cb0[0x10]; // 0xcb0
public:
	CitadelPortraitEnvironmentType_t m_environment; // 0xcc0	
	StartupBehavior_t m_nStartupBehavior; // 0xcc4	
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x170]; // 0xcc8
public:
	CUtlSymbolLarge m_cameraName; // 0xe38	
private:
	[[maybe_unused]] uint8_t __pad0e40[0x30]; // 0xe40
public:
	ParticleIndex_t m_nPortraitParticle; // 0xe70	
	ParticleIndex_t m_nAmbientParticle; // 0xe74	
	int32_t m_nCourierType; // 0xe78	
	HeroID_t m_heroID; // 0xe7c	
	CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xe80	
	
	// Datamap fields:
	// uint32_t heroid; // 0x7fffffff
	// bool skip_pet_spawn; // 0x7fffffff
	// int32_t model_index; // 0x7fffffff
	// bool StartDisabled; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
// MNetworkVarNames "int m_iEntityQuality"
// MNetworkVarNames "uint32 m_iEntityLevel"
// MNetworkVarNames "itemid_t m_iItemID"
// MNetworkVarNames "uint32 m_iAccountID"
// MNetworkVarNames "uint32 m_iInventoryPosition"
// MNetworkVarNames "bool m_bInitialized"
// MNetworkVarNames "style_index_t m_nOverrideStyle"
// MNetworkVarNames "CAttributeList m_AttributeList"
class C_EconItemView : public IEconItemInterface
{
public:
	// MNetworkEnable
	item_definition_index_t m_iItemDefinitionIndex; // 0x8	
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0xc	
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	// MNetworkEnable
	itemid_t m_iItemID; // 0x18	
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x20	
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MNetworkEnable
	bool m_bInitialized; // 0x30	
	// MNetworkEnable
	style_index_t m_nOverrideStyle; // 0x31	
	bool m_bIsStoreItem; // 0x32	
	bool m_bIsTradeItem; // 0x33	
	bool m_bHasComputedAttachedParticles; // 0x34	
	bool m_bHasAttachedParticles; // 0x35	
private:
	[[maybe_unused]] uint8_t __pad0036[0x2]; // 0x36
public:
	int32_t m_iEntityQuantity; // 0x38	
	uint8_t m_unClientFlags; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	eEconItemOrigin m_unOverrideOrigin; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x14]; // 0x44
public:
	// MNetworkEnable
	// -> m_Attributes - 0x60
	// -> m_pManager - 0xb0
	CAttributeList m_AttributeList; // 0x58	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MNetworkVarNames "float m_flBulletTimeScale"
// MNetworkVarNames "float m_flProjectileTimeScale"
// MNetworkVarNames "GameTime_t m_flExpireTime"
// MNetworkVarNames "float m_flStopDuration"
class CCitadelBulletTimeWarp : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	float m_flBulletTimeScale; // 0x810	
	// MNetworkEnable
	float m_flProjectileTimeScale; // 0x814	
	// MNetworkEnable
	GameTime_t m_flExpireTime; // 0x818	
	// MNetworkEnable
	float m_flStopDuration; // 0x81c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityRiptideVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TossModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CCitadel_Ability_Slork_Invis : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierChargedTackleActiveVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TackleParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PullEnemiesParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x280
// Has VTable
class CCitadel_Modifier_AfterburnWatcher : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_TriggerTowerRegen : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Item_HealthNova : public CCitadelModifier
{
public:
	float m_flAmountPerSecond; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MagicClarityWatcherVData : public CCitadel_Modifier_Intrinsic_BaseVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_TossUp : public CCitadelModifier
{
public:
	bool m_bForceApplied; // 0xc0	
	bool m_bLandedOnGround; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad00c2[0x2]; // 0xc2
public:
	Vector m_vTossUpForce; // 0xc4	
	float m_flCurrentVelocityScale; // 0xd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9e8
// Has VTable
class C_Citadel_ProjectileRiptide : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_ArmorUpgrade_AbilityLifeSteal : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Item_RejuvTrackingProjectile : public CCitadel_Item_TrackingProjectileApplyModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ItemPickupPunchableVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsDroppingParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsPunchableParticle; // 0x6d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NearRejuvAuraModifier; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_FuncMover : public C_BaseToggle
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Astro_Rifle_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2a8
// Has VTable
class CCitadel_Modifier_LashGrappleEnemy_Debuff : public CCitadel_Modifier_Stunned
{
public:
	Vector m_vCrashDir; // 0xc8	
	Vector m_vLiftTarget; // 0xd4	
	GameTime_t m_flStartTime; // 0xe0	
	bool m_bCrashingDown; // 0xe4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CModifier_Healbane_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RespawnCreditVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Respawn Settings"
	ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x5f0	
	// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
	// MPropertyDescription "Respawn time is set to this fixed duration after dying."
	float m_flRespawnDelay; // 0x5f4	
	// MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_PercentOfNormal"
	// MPropertyDescription "Respawn time is set to this percent (0-1) of the normal respawn time."
	float m_flPercentOfNormalRespawn; // 0x5f8	
	// MPropertyStartGroup "Buff Values"
	float m_flBonusClipSize; // 0x5fc	
	float m_flBonusFirerate; // 0x600	
	float m_flBonusHealth; // 0x604	
	float m_flBonusMoveSpeedMeterPerSecond; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad060c[0x4]; // 0x60c
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sExpireSound; // 0x610	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CItem_FleetfootBoots : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
class CCitadel_Modifier_Bubble : public CCitadel_Modifier_Silenced
{
public:
	float m_flDampingFactor; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x11c]; // 0xc4
public:
	ParticleIndex_t m_ParticleIndex; // 0x1e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flStrength"
// MNetworkVarNames "int m_nFalloffShape"
// MNetworkVarNames "float m_flFalloffExponent"
// MNetworkVarNames "float m_flHeightFogDepth"
// MNetworkVarNames "float m_fHeightFogEdgeWidth"
// MNetworkVarNames "float m_fIndirectLightStrength"
// MNetworkVarNames "float m_fSunLightStrength"
// MNetworkVarNames "float m_fNoiseStrength"
// MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
// MNetworkVarNames "bool m_bOverrideSunLightStrength"
// MNetworkVarNames "bool m_bOverrideNoiseStrength"
class C_EnvVolumetricFogVolume : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bActive; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	// MNetworkEnable
	Vector m_vBoxMins; // 0x53c	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x548	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	// MNetworkEnable
	float m_flStrength; // 0x558	
	// MNetworkEnable
	int32_t m_nFalloffShape; // 0x55c	
	// MNetworkEnable
	float m_flFalloffExponent; // 0x560	
	// MNetworkEnable
	float m_flHeightFogDepth; // 0x564	
	// MNetworkEnable
	float m_fHeightFogEdgeWidth; // 0x568	
	// MNetworkEnable
	float m_fIndirectLightStrength; // 0x56c	
	// MNetworkEnable
	float m_fSunLightStrength; // 0x570	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x574	
	// MNetworkEnable
	bool m_bOverrideIndirectLightStrength; // 0x578	
	// MNetworkEnable
	bool m_bOverrideSunLightStrength; // 0x579	
	// MNetworkEnable
	bool m_bOverrideNoiseStrength; // 0x57a	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_WreckerSalvage : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TargetPracticeEnemyVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_BuildupCompleteModifier; // 0x600	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // 0x610	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x620	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x700	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadParticle; // 0x7e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTargetHitSound; // 0x8c0	
	CSoundEventName m_strTargetHeadShotHitSound; // 0x8d0	
	CSoundEventName m_strTargetCompleteSound; // 0x8e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd48
// Has VTable
class CCitadel_Ability_Lash_Flog : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x118]; // 0xc28
public:
	ParticleIndex_t m_SandEffect; // 0xd40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ChainLightningEffectVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChainParticle; // 0x5f0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_ChainSound; // 0x6d0	
	CSoundEventName m_VictimSound; // 0x6e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaf8
// Has VTable
class C_EnvProjectedTexture : public C_ModelPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CModifier_WarpStone_Caster : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Succor_MoveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_PullSound; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe30
// Has VTable
// 
// MNetworkUserGroupProxy "C_BasePlayerPawn"
// MNetworkUserGroupProxy "C_BasePlayerPawn"
// MNetworkExcludeByUserGroup "FogController"
// MNetworkIncludeByUserGroup "Player"
// MNetworkIncludeByUserGroup "Water"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
// MNetworkOverride "m_lifeState"
// MNetworkExcludeByName "m_pWeaponServices"
// MNetworkExcludeByName "m_pItemServices"
// MNetworkExcludeByName "m_pAutoaimServices"
// MNetworkExcludeByName "m_pObserverServices"
// MNetworkExcludeByName "m_pWaterServices"
// MNetworkExcludeByName "m_pUseServices"
// MNetworkExcludeByName "m_pFlashlightServices"
// MNetworkExcludeByName "m_pMovementServices"
// MNetworkVarNames "CPlayer_WeaponServices * m_pWeaponServices"
// MNetworkVarNames "CPlayer_ItemServices * m_pItemServices"
// MNetworkVarNames "CPlayer_AutoaimServices * m_pAutoaimServices"
// MNetworkVarNames "CPlayer_ObserverServices * m_pObserverServices"
// MNetworkVarNames "CPlayer_WaterServices * m_pWaterServices"
// MNetworkVarNames "CPlayer_UseServices * m_pUseServices"
// MNetworkVarNames "CPlayer_FlashlightServices * m_pFlashlightServices"
// MNetworkVarNames "CPlayer_CameraServices * m_pCameraServices"
// MNetworkVarNames "CPlayer_MovementServices * m_pMovementServices"
// MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
// MNetworkVarNames "uint32 m_iHideHUD"
// MNetworkVarNames "sky3dparams_t m_skybox3d"
// MNetworkVarNames "GameTime_t m_flDeathTime"
// MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
class C_BasePlayerPawn : public C_BaseCombatCharacter
{
public:
	// MNetworkEnable
	CPlayer_WeaponServices* m_pWeaponServices; // 0xc90	
	// MNetworkEnable
	CPlayer_ItemServices* m_pItemServices; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices* m_pAutoaimServices; // 0xca0	
	// MNetworkEnable
	CPlayer_ObserverServices* m_pObserverServices; // 0xca8	
	// MNetworkEnable
	CPlayer_WaterServices* m_pWaterServices; // 0xcb0	
	// MNetworkEnable
	CPlayer_UseServices* m_pUseServices; // 0xcb8	
	// MNetworkEnable
	CPlayer_FlashlightServices* m_pFlashlightServices; // 0xcc0	
	// MNetworkEnable
	CPlayer_CameraServices* m_pCameraServices; // 0xcc8	
	// MNetworkEnable
	CPlayer_MovementServices* m_pMovementServices; // 0xcd0	
private:
	[[maybe_unused]] uint8_t __pad0cd8[0x8]; // 0xcd8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0xce0	
	uint32_t m_nHighestConsumedServerViewAngleChangeIndex; // 0xd30	
	QAngle v_angle; // 0xd34	
	QAngle v_anglePrevious; // 0xd40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; // 0xd4c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// -> scale - 0xd58
	// -> origin - 0xd5c
	// -> bClip3DSkyBoxNearToWorldFar - 0xd68
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0xd6c
	// -> fog - 0xd70
	// -> m_nWorldGroupID - 0xdd8
	sky3dparams_t m_skybox3d; // 0xd50	
	// MNetworkEnable
	GameTime_t m_flDeathTime; // 0xde0	
	Vector m_vecPredictionError; // 0xde4	
	GameTime_t m_flPredictionErrorTime; // 0xdf0	
	Vector m_vecLastCameraSetupLocalOrigin; // 0xdf4	
	GameTime_t m_flLastCameraSetupTime; // 0xe00	
	float m_flFOVSensitivityAdjust; // 0xe04	
	float m_flMouseSensitivity; // 0xe08	
	Vector m_vOldOrigin; // 0xe0c	
	float m_flOldSimulationTime; // 0xe18	
	int32_t m_nLastExecutedCommandNumber; // 0xe1c	
	int32_t m_nLastExecutedCommandTick; // 0xe20	
	// MNetworkEnable
	// MNetworkChangeCallback "OnControllerChanged"
	CHandle< CBasePlayerController > m_hController; // 0xe24	
	bool m_bIsSwappingToPredictableController; // 0xe28	
	
	// Datamap fields:
	// void m_hPawnListEntry; // 0xe2a
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_EtherealBullets_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BulletsModifier; // 0x14e0	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1150
// Has VTable
class CCitadel_Ability_TrooperZipLine : public CCitadel_Ability_ZipLine
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_DetentionAmmoVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x620	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x640	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x650	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CScaleFunctionAbilityPropertySingleStat : public CScaleFunctionBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
class TimedEvent
{
public:
	float m_TimeBetweenEvents; // 0x0	
	float m_fNextEvent; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x920
// Has VTable
// 
// MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
// MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
// MNetworkVarNames "AttachmentHandle_t m_nAttachment"
// MNetworkVarNames "float32 m_flSpriteFramerate"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "uint32 m_nBrightness"
// MNetworkVarNames "float32 m_flBrightnessDuration"
// MNetworkVarNames "float32 m_flSpriteScale"
// MNetworkVarNames "float32 m_flScaleDuration"
// MNetworkVarNames "bool m_bWorldSpaceScale"
// MNetworkVarNames "float32 m_flGlowProxySize"
// MNetworkVarNames "float32 m_flHDRColorScale"
class C_Sprite : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // 0x810	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachedToEntity; // 0x818	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachment; // 0x81c	
private:
	[[maybe_unused]] uint8_t __pad081d[0x3]; // 0x81d
public:
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "60.000000"
	// MNetworkEncodeFlags "2"
	float m_flSpriteFramerate; // 0x820	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flFrame; // 0x824	
	GameTime_t m_flDieTime; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad082c[0xc]; // 0x82c
public:
	// MNetworkEnable
	uint32_t m_nBrightness; // 0x838	
	// MNetworkEnable
	float m_flBrightnessDuration; // 0x83c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSpriteScaleChanged"
	float m_flSpriteScale; // 0x840	
	// MNetworkEnable
	float m_flScaleDuration; // 0x844	
	// MNetworkEnable
	bool m_bWorldSpaceScale; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad0849[0x3]; // 0x849
public:
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x84c	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x850	
	GameTime_t m_flLastTime; // 0x854	
	float m_flMaxFrame; // 0x858	
	float m_flStartScale; // 0x85c	
	float m_flDestScale; // 0x860	
	GameTime_t m_flScaleTimeStart; // 0x864	
	int32_t m_nStartBrightness; // 0x868	
	int32_t m_nDestBrightness; // 0x86c	
	GameTime_t m_flBrightnessTimeStart; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0874[0x4]; // 0x874
public:
	CWeakHandle< InfoForResourceTypeIMaterial2 > m_hOldSpriteMaterial; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad0880[0x98]; // 0x880
public:
	int32_t m_nSpriteWidth; // 0x918	
	int32_t m_nSpriteHeight; // 0x91c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_UtilityUpgrade_AOESmokeBomb : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1640
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "Color m_Entity_Color"
// MNetworkVarNames "float m_Entity_flBrightness"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
// MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
// MNetworkVarNames "Vector m_Entity_vBoxMins"
// MNetworkVarNames "Vector m_Entity_vBoxMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "float m_Entity_flEdgeFadeDist"
// MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
// MNetworkVarNames "int m_Entity_nLightProbeSizeX"
// MNetworkVarNames "int m_Entity_nLightProbeSizeY"
// MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
// MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
// MNetworkVarNames "bool m_Entity_bEnabled"
class C_EnvCombinedLightProbeVolume : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x1060]; // 0x538
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	Color m_Entity_Color; // 0x1598	
	// MNetworkEnable
	// MNetworkChangeCallback "StateChanged"
	float m_Entity_flBrightness; // 0x159c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x15a0	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x15a8	
private:
	[[maybe_unused]] uint8_t __pad15a9[0x7]; // 0x15a9
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture; // 0x15b0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture; // 0x15b8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture; // 0x15c0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture; // 0x15c8	
	// MNetworkEnable
	Vector m_Entity_vBoxMins; // 0x15d0	
	// MNetworkEnable
	Vector m_Entity_vBoxMaxs; // 0x15dc	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x15e8	
private:
	[[maybe_unused]] uint8_t __pad15e9[0x3]; // 0x15e9
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x15ec	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x15f0	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x15f4	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x15f8	
private:
	[[maybe_unused]] uint8_t __pad15f9[0x3]; // 0x15f9
public:
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x15fc	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x1600	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeX; // 0x160c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeY; // 0x1610	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeSizeZ; // 0x1614	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasX; // 0x1618	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasY; // 0x161c	
	// MNetworkEnable
	int32_t m_Entity_nLightProbeAtlasZ; // 0x1620	
private:
	[[maybe_unused]] uint8_t __pad1624[0x15]; // 0x1624
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x1639	
	
	// Datamap fields:
	// void m_Entity_pEnvMap; // 0x1628
	// void m_Entity_pLightProbeVolume; // 0x1630
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_SleepDagger : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_FlameDash : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CScaleFunctionAbilityProperty_KineticCarbine : public CScaleFunctionBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class C_SoundOpvarSetOBBWindEntity : public C_SoundOpvarSetPointBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x68
// 
// MNetworkVarNames "ModelConfigHandle_t m_Handle"
// MNetworkVarNames "string_t m_Name"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_AssociatedEntities"
// MNetworkVarNames "string_t m_AssociatedEntityNames"
struct ActiveModelConfig_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MNetworkEnable
	ModelConfigHandle_t m_Handle; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_Name; // 0x30	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_AssociatedEntities; // 0x38	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x50	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TenguLaserGroundAuraVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_Tornado_Lift_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc30
// Has VTable
class CCitadel_Ability_Fealty : public C_CitadelBaseAbility
{
public:
	CHandle< C_BaseEntity > m_hTarget; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_SummonGangster : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCitadel_Viscious_Bowling_Modifier : public CCitadelModifier
{
public:
	CUtlVector< CHandle< C_BaseEntity > > vecHitTargets; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Bull_Leap_Boosting : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_ZipLine_Boost : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x150
// Has VTable
class CCitadel_Modifier_Thumper_2_Aura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Shiv_Dive_ShivPossessing : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierIntimidatedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EffectParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_AerialAssualtVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WatcherModifier; // 0x1528	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_Unstoppable : public CCitadelModifier
{
public:
	CUtlVector< CCitadelModifier* > m_vecCheckedModifiers; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class C_DynamicProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xbf8	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xbf9	
private:
	[[maybe_unused]] uint8_t __pad0bfa[0x6]; // 0xbfa
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xc00	
	CEntityIOOutput m_pOutputAnimOver; // 0xc28	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc50	
	CEntityIOOutput m_OnAnimReachedStart; // 0xc78	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xca0	
	CUtlSymbolLarge m_iszIdleAnim; // 0xcc8	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0xcd0	
	bool m_bRandomizeCycle; // 0xcd4	
	bool m_bStartDisabled; // 0xcd5	
	bool m_bFiredStartEndOutput; // 0xcd6	
	bool m_bForceNpcExclude; // 0xcd7	
	bool m_bCreateNonSolid; // 0xcd8	
	bool m_bIsOverrideProp; // 0xcd9	
private:
	[[maybe_unused]] uint8_t __pad0cda[0x2]; // 0xcda
public:
	int32_t m_iInitialGlowState; // 0xcdc	
	int32_t m_nGlowRange; // 0xce0	
	int32_t m_nGlowRangeMin; // 0xce4	
	Color m_glowColor; // 0xce8	
	int32_t m_nGlowTeam; // 0xcec	
	int32_t m_iCachedFrameCount; // 0xcf0	
	Vector m_vecCachedRenderMins; // 0xcf4	
	Vector m_vecCachedRenderMaxs; // 0xd00	
	
	// Datamap fields:
	// CUtlSymbolLarge StartingAnim; // 0x7fffffff
	// CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
	// CUtlSymbolLarge InputSetAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimation; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimation; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputEnableCollision; // 0x0
	// void InputDisableCollision; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// void InputStartGlowing; // 0x0
	// void InputStopGlowing; // 0x0
	// Vector InputSetGlowOverride; // 0x0
	// int32_t InputSetGlowRange; // 0x0
	// void C_DynamicPropAnimThink; // 0x0
	// int32_t health; // 0x7fffffff
	// bool HoldAnimation; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVData_SetMoveType : public CCitadelModifierVData
{
public:
	// MPropertyDescription "The move type to switch to.  Some move types will have weird behaviors when swapped to, ie: MOVETYPE_SYNC"
	MoveType_t m_nMoveType; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "int m_nPlayersHit"
class CCitadel_Ability_StickyBomb : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x8]; // 0xc28
public:
	// MNetworkEnable
	int32_t m_nPlayersHit; // 0xc30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_LightningBullet : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_RocketBootsVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x1528	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InAirWatcherModifier; // 0x1608	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Magic_Clarity_BuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_VisualModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_AcolytesGlove_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TriggeredModifier; // 0x620	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x710	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MNetworkVarNames "int32 m_iLevel"
// MNetworkVarNames "int32 m_iMaxAmmo"
// MNetworkVarNames "int32 m_iHealthMax"
// MNetworkVarNames "float m_flHealthRegen"
// MNetworkVarNames "GameTime_t m_flRespawnTime"
// MNetworkVarNames "HeroID_t m_nHeroID"
// MNetworkVarNames "int32 m_iGoldNetWorth"
// MNetworkVarNames "int32 m_iAPNetWorth"
// MNetworkVarNames "int32 m_iCreepGold"
// MNetworkVarNames "int32 m_iCreepGoldSoloBonus"
// MNetworkVarNames "int32 m_iCreepGoldKill"
// MNetworkVarNames "int32 m_iCreepGoldAirOrb"
// MNetworkVarNames "int32 m_iCreepGoldGroundOrb"
// MNetworkVarNames "int32 m_iCreepGoldDeny"
// MNetworkVarNames "int32 m_iCreepGoldNeutral"
// MNetworkVarNames "int32 m_iFarmBaseline"
// MNetworkVarNames "int32 m_iHealth"
// MNetworkVarNames "int32 m_iPlayerKills"
// MNetworkVarNames "int32 m_iPlayerAssists"
// MNetworkVarNames "int32 m_iDeaths"
// MNetworkVarNames "int32 m_iDenies"
// MNetworkVarNames "int32 m_iLastHits"
// MNetworkVarNames "bool m_bAlive"
// MNetworkVarNames "int32 m_nHeroDraftPosition"
// MNetworkVarNames "bool m_bUltimateTrained"
// MNetworkVarNames "GameTime_t m_flUltimateCooldownStart"
// MNetworkVarNames "GameTime_t m_flUltimateCooldownEnd"
// MNetworkVarNames "bool m_bHasRejuvenator"
// MNetworkVarNames "bool m_bHasRebirth"
// MNetworkVarNames "int32 m_iHeroDamage"
// MNetworkVarNames "int32 m_iHeroHealing"
// MNetworkVarNames "int32 m_iObjectiveDamage"
// MNetworkVarNames "int32 m_nHeroAbilityUpgradeBits"
// MNetworkVarNames "EntitySubclassID_t m_vecUpgrades"
// MNetworkVarNames "EntitySubclassID_t m_vecBonusCounterAbilities"
// MNetworkVarNames "int32 m_vecBonusCounterValues"
// MNetworkVarNames "AbilityID_t m_tHeldItem"
// MNetworkVarNames "ItemImbuementPair_t m_vecImbuements"
// MNetworkVarNames "DynamicAbilityValues_t m_vecDynamicAbilityValues"
// MNetworkVarNames "StatViewerModifierValues_t m_vecStatViewerModifierValues"
struct PlayerDataGlobal_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	int32_t m_iLevel; // 0x8	
	// MNetworkEnable
	int32_t m_iMaxAmmo; // 0xc	
	// MNetworkEnable
	int32_t m_iHealthMax; // 0x10	
	// MNetworkEnable
	float m_flHealthRegen; // 0x14	
	// MNetworkEnable
	GameTime_t m_flRespawnTime; // 0x18	
	// MNetworkEnable
	HeroID_t m_nHeroID; // 0x1c	
	// MNetworkEnable
	int32_t m_iGoldNetWorth; // 0x20	
	// MNetworkEnable
	int32_t m_iAPNetWorth; // 0x24	
	// MNetworkEnable
	int32_t m_iCreepGold; // 0x28	
	// MNetworkEnable
	int32_t m_iCreepGoldSoloBonus; // 0x2c	
	// MNetworkEnable
	int32_t m_iCreepGoldKill; // 0x30	
	// MNetworkEnable
	int32_t m_iCreepGoldAirOrb; // 0x34	
	// MNetworkEnable
	int32_t m_iCreepGoldGroundOrb; // 0x38	
	// MNetworkEnable
	int32_t m_iCreepGoldDeny; // 0x3c	
	// MNetworkEnable
	int32_t m_iCreepGoldNeutral; // 0x40	
	// MNetworkEnable
	int32_t m_iFarmBaseline; // 0x44	
	// MNetworkEnable
	int32_t m_iHealth; // 0x48	
	// MNetworkEnable
	int32_t m_iPlayerKills; // 0x4c	
	// MNetworkEnable
	int32_t m_iPlayerAssists; // 0x50	
	// MNetworkEnable
	int32_t m_iDeaths; // 0x54	
	// MNetworkEnable
	int32_t m_iDenies; // 0x58	
	// MNetworkEnable
	int32_t m_iLastHits; // 0x5c	
	// MNetworkEnable
	bool m_bAlive; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x3]; // 0x61
public:
	// MNetworkEnable
	// MNetworkChangeCallback "HeroDraftPositionChanged"
	int32_t m_nHeroDraftPosition; // 0x64	
	// MNetworkEnable
	bool m_bUltimateTrained; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	// MNetworkEnable
	GameTime_t m_flUltimateCooldownStart; // 0x6c	
	// MNetworkEnable
	GameTime_t m_flUltimateCooldownEnd; // 0x70	
	// MNetworkEnable
	bool m_bHasRejuvenator; // 0x74	
	// MNetworkEnable
	bool m_bHasRebirth; // 0x75	
private:
	[[maybe_unused]] uint8_t __pad0076[0x2]; // 0x76
public:
	// MNetworkEnable
	int32_t m_iHeroDamage; // 0x78	
	// MNetworkEnable
	int32_t m_iHeroHealing; // 0x7c	
	// MNetworkEnable
	int32_t m_iObjectiveDamage; // 0x80	
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkChangeCallback "pdgAbilitiesChanged"
	int32_t m_nHeroAbilityUpgradeBits[4]; // 0x84	
private:
	[[maybe_unused]] uint8_t __pad0094[0x4]; // 0x94
public:
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkChangeCallback "pdgUpgradesChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecUpgrades; // 0x98	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecBonusCounterAbilities; // 0xb0	
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkChangeCallback "pdgBonusCounterChanged"
	C_NetworkUtlVectorBase< int32 > m_vecBonusCounterValues; // 0xc8	
	// MNetworkEnable
	// MNetworkUserGroup "Abilities"
	// MNetworkChangeCallback "pdgUpgradesChanged"
	CUtlStringToken m_tHeldItem; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00e4[0x4]; // 0xe4
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< ItemImbuementPair_t > m_vecImbuements; // 0xe8	
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< DynamicAbilityValues_t > m_vecDynamicAbilityValues; // 0x138	
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< StatViewerModifierValues_t > m_vecStatViewerModifierValues; // 0x188	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x538	
	CEntityIOOutput m_OnSpawn; // 0x560	
	bool m_bDisabled; // 0x588	
	bool m_bWaitForRefire; // 0x589	
	bool m_bTriggerOnce; // 0x58a	
	bool m_bFastRetrigger; // 0x58b	
	bool m_bPassthoughCaller; // 0x58c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Tornado_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TornadoAura; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc30
// Has VTable
// Is Abstract
class CCitadelBaseYamatoAbility : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Bomber_Ability02 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_HealthSwap : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
// Is Abstract
class CTier3BossAbility : public CCitadelBaseAbilityServerOnly
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CModifier_Synth_Blitz_TechAmp : public CCitadel_Modifier_Base
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc80
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_nFastFireEndTime"
class CCitadel_WeaponUpgrade_BurstFire : public CCitadel_Item
{
public:
	// MNetworkEnable
	GameTime_t m_nFastFireEndTime; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class C_PointCameraVFOV : public C_PointCamera
{
public:
	float m_flVerticalFOV; // 0x598	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x578
	// float m_flDofFarBlurry; // 0x57c
	// float m_flDofTiltToGround; // 0x580
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CModifier_Synth_Barrage_Caster : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CAbility_Synth_Pulse : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1950
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Shiv_DiveVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPossessSound; // 0x14e0	
	CSoundEventName m_strPossessStartSound; // 0x14f0	
	CSoundEventName m_strPossessEndExplodeSound; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PossessStartParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PossessParticle; // 0x16d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x17b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShivPossessingModifier; // 0x1890	
	CEmbeddedSubclass< CCitadelModifier > m_TargetPossessedModifier; // 0x18a0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequencePossessStart; // 0x18b0	
	// MPropertyStartGroup "+Possession Properties"
	Vector m_vPossessionEndOffset; // 0x1930	
	float m_flPossessionPreAnimDuration; // 0x193c	
	float m_flPossessionPostAnimDuration; // 0x1940	
	float m_flVertialLocalOffset; // 0x1944	
	float m_flPossessEndVerticalSpeed; // 0x1948	
	float m_flPossessEndBusyTime; // 0x194c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_VacuumAuraTargetModifierVData : public CCitadel_Modifier_StunnedVData
{
public:
	float m_flOuterSpeedScale; // 0x6d0	
	float m_flSpeedScaleBias; // 0x6d4	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_TargetLoopingSound; // 0x6d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Chrono_KineticCarbine_Slow : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_PowerJump : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CModifier_Upgrade_ArcaneMedallion : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa60
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "int m_nColorMode"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "float m_flColorTemperature"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "int m_nDirectLight"
// MNetworkVarNames "int m_nBakedShadowIndex"
// MNetworkVarNames "int m_nLuminaireShape"
// MNetworkVarNames "float m_flLuminaireSize"
// MNetworkVarNames "float m_flLuminaireAnisotropy"
// MNetworkVarNames "CUtlString m_LightStyleString"
// MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
// MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
// MNetworkVarNames "CUtlString m_LightStyleEvents"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_LightStyleTargets"
// MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
// MNetworkVarNames "float m_flShape"
// MNetworkVarNames "float m_flSoftX"
// MNetworkVarNames "float m_flSoftY"
// MNetworkVarNames "float m_flSkirt"
// MNetworkVarNames "float m_flSkirtNear"
// MNetworkVarNames "Vector m_vSizeParams"
// MNetworkVarNames "float m_flRange"
// MNetworkVarNames "Vector m_vShear"
// MNetworkVarNames "int m_nBakeSpecularToCubemaps"
// MNetworkVarNames "Vector m_vBakeSpecularToCubemapsSize"
// MNetworkVarNames "int m_nCastShadows"
// MNetworkVarNames "int m_nShadowMapSize"
// MNetworkVarNames "int m_nShadowPriority"
// MNetworkVarNames "bool m_bContactShadow"
// MNetworkVarNames "int m_nBounceLight"
// MNetworkVarNames "float m_flBounceScale"
// MNetworkVarNames "float m_flMinRoughness"
// MNetworkVarNames "Vector m_vAlternateColor"
// MNetworkVarNames "float m_fAlternateColorBrightness"
// MNetworkVarNames "int m_nFog"
// MNetworkVarNames "float m_flFogStrength"
// MNetworkVarNames "int m_nFogShadows"
// MNetworkVarNames "float m_flFogScale"
// MNetworkVarNames "bool m_bFogMixedShadows"
// MNetworkVarNames "float m_flFadeSizeStart"
// MNetworkVarNames "float m_flFadeSizeEnd"
// MNetworkVarNames "float m_flShadowFadeSizeStart"
// MNetworkVarNames "float m_flShadowFadeSizeEnd"
// MNetworkVarNames "bool m_bPrecomputedFieldsValid"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
class C_BarnLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bEnabled; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0811[0x3]; // 0x811
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nColorMode; // 0x814	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Color m_Color; // 0x818	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flColorTemperature; // 0x81c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightness; // 0x820	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flBrightnessScale; // 0x824	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nDirectLight; // 0x828	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x82c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nLuminaireShape; // 0x830	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireSize; // 0x834	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flLuminaireAnisotropy; // 0x838	
private:
	[[maybe_unused]] uint8_t __pad083c[0x4]; // 0x83c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "StyleChanged"
	CUtlString m_LightStyleString; // 0x840	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad084c[0x4]; // 0x84c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_QueuedLightStyleStrings; // 0x850	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_LightStyleEvents; // 0x868	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_LightStyleTargets; // 0x880	
	CEntityIOOutput m_StyleEvent[4]; // 0x898	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x938	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShape; // 0x940	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftX; // 0x944	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSoftY; // 0x948	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirt; // 0x94c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flSkirtNear; // 0x950	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vSizeParams; // 0x954	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	float m_flRange; // 0x960	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vShear; // 0x964	
	// MNetworkEnable
	int32_t m_nBakeSpecularToCubemaps; // 0x970	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	// MNetworkBitCount "32"
	Vector m_vBakeSpecularToCubemapsSize; // 0x974	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nCastShadows; // 0x980	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowMapSize; // 0x984	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nShadowPriority; // 0x988	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bContactShadow; // 0x98c	
private:
	[[maybe_unused]] uint8_t __pad098d[0x3]; // 0x98d
public:
	// MNetworkEnable
	int32_t m_nBounceLight; // 0x990	
	// MNetworkEnable
	float m_flBounceScale; // 0x994	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flMinRoughness; // 0x998	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vAlternateColor; // 0x99c	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_fAlternateColorBrightness; // 0x9a8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFog; // 0x9ac	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogStrength; // 0x9b0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	int32_t m_nFogShadows; // 0x9b4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFogScale; // 0x9b8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bFogMixedShadows; // 0x9bc	
private:
	[[maybe_unused]] uint8_t __pad09bd[0x3]; // 0x9bd
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeStart; // 0x9c0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flFadeSizeEnd; // 0x9c4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeStart; // 0x9c8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flShadowFadeSizeEnd; // 0x9cc	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bPrecomputedFieldsValid; // 0x9d0	
private:
	[[maybe_unused]] uint8_t __pad09d1[0x3]; // 0x9d1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMins; // 0x9d4	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedBoundsMaxs; // 0x9e0	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBOrigin; // 0x9ec	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	QAngle m_vPrecomputedOBBAngles; // 0x9f8	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	Vector m_vPrecomputedOBBExtent; // 0xa04	
private:
	[[maybe_unused]] uint8_t __pad0a10[0x40]; // 0xa10
public:
	bool m_bInitialBoneSetup; // 0xa50	
	
	// Datamap fields:
	// void m_StyleEvent[0]; // 0x898
	// void m_StyleEvent[1]; // 0x8c0
	// void m_StyleEvent[2]; // 0x8e8
	// void m_StyleEvent[3]; // 0x910
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x560
// Has VTable
class C_TonemapController2Alias_env_tonemap_controller2 : public C_TonemapController2
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SpinVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEParticle; // 0x5f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityIntimidateVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EnemyModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPlayerParticle; // 0x1500	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEParticle; // 0x15e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa80
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames "bool m_bFloating"
class CCitadel_MobileResupply : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_hAbility; // 0xa78	
	// MNetworkEnable
	bool m_bFloating; // 0xa7c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Wraith_RapidFireVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RapidFireParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CModifier_HornetLeap : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SilenceProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x620	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceProcModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceActiveModifier; // 0x640	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x650	
	CUtlString m_sInstantProcIfCasterHasModifier; // 0x660	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x668	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1620
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // 0x14f0	
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1500	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strDomeCreated; // 0x1510	
	CSoundEventName m_strChargeUpSound; // 0x1520	
	CSoundEventName m_strPushAndDamage; // 0x1530	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // 0x1540	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_TrooperDisabledInvulnerabilityFX : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class C_SoundOpvarSetAutoRoomEntity : public C_SoundOpvarSetPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
class CCitadel_UtilityUpgrade_RocketBoots : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Item_SelfBuffModifier : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_Cadence_Anthem : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a08
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flAirDrag; // 0x14e8	
	float m_flMaxPowerPadding; // 0x14ec	
	float m_flEffectGroundTrace; // 0x14f0	
	float m_flWhizbyMaxRange; // 0x14f4	
	float m_flStartPosTestCapsuleLength; // 0x14f8	
	// MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
	Vector m_vecLongEffectOffset; // 0x14fc	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // 0x1508	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x17a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // 0x1888	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x1968	
	CSoundEventName m_strDamageImpactSound; // 0x1978	
	CSoundEventName m_strDamageImpactVictimSound; // 0x1988	
	CSoundEventName m_strPowerUp1Sounds; // 0x1998	
	CSoundEventName m_strPowerUp2Sounds; // 0x19a8	
	CSoundEventName m_strPowerUp3Sounds; // 0x19b8	
	CSoundEventName m_strWhizbySound; // 0x19c8	
	CSoundEventName m_strSlashSound; // 0x19d8	
	CSoundEventName m_strSlashFullSound; // 0x19e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x19f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_IceGrenadeSlowModifier; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_ReturnFireVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ReactiveArmorModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_TechShieldImpact : public CCitadelModifier
{
public:
	ParticleIndex_t m_AmbientEffect; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
class C_NPC_PestilenceDrone : public C_AI_CitadelNPC
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x140
// Has VTable
// 
// MNetworkIncludeByName "m_ProviderType"
// MNetworkIncludeByName "m_hOuter"
// MNetworkIncludeByName "m_iReapplyProvisionParity"
// MNetworkIncludeByName "m_Item"
// MNetworkVarNames "CEconItemView m_Item"
class CAttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	C_EconItemView m_Item; // 0x68	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Tokamak_EnemySmokeAOE_VData : public CCitadelModifierAuraVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa58
// Has VTable
class C_Citadel_Projectile_DustStorm : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_WeaponUpgrade_SurgingPower : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_SmokeBomb : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
class CCitadel_Ability_ChargedShot : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_ChannelParticle; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Tier2Boss_RocketDamage_AuraDebuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa68
// Has VTable
// 
// MNetworkVarNames "bool m_bShowLight"
class C_RectLight : public C_BarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xa60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadenceAnthemVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AnthemAOEModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CModifier_FleetfootBoots_BonusClip : public CCitadelModifier
{
public:
	int32_t m_nBonusClip; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
// Is Abstract
class CCitadel_Modifier_StatStealBase : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Glitch : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Disarmed : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_ArmorUpgrade_VexBarrier : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf8
// Has VTable
// 
// MNetworkExcludeByName "m_iEffectIndex"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
class C_TeamRelativeParticleSystem : public C_ParticleSystem
{
private:
	[[maybe_unused]] uint8_t __pad0dc0[0x18]; // 0xdc0
public:
	CUtlSymbolLarge m_iszFriendlyEffectName; // 0xdd8	
	CUtlSymbolLarge m_iszEnemyEffectName; // 0xde0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // 0xde8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // 0xdf0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x670
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Wrecker_UltimateVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EnemyGrabModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyThrowModifier; // 0x600	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyDamageModifier; // 0x610	
	CEmbeddedSubclass< CCitadelModifier > m_InvincibleModifier; // 0x620	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StartSound; // 0x630	
	CSoundEventName m_AmbientLoopingSound; // 0x640	
	CSoundEventName m_GrabSound; // 0x650	
	CSoundEventName m_ThrowSound; // 0x660	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Low_Health_Glow : public CCitadelModifier
{
public:
	ParticleIndex_t m_nFXIndex; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Magic_Clarity_Buff : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x38]; // 0xc0
public:
	bool m_bAbilityLocked; // 0xf8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BreakablePropExtraStaminaVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Powerup Values"
	float m_nExtraStamina; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Thumper_3 : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_StickyBombAttachedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunAttachedParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x7b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x890	
	CSoundEventName m_strTickTockSound; // 0x8a0	
	CSoundEventName m_strTickTockFastSound; // 0x8b0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x8c0	
	float m_DetonateWarningTime; // 0x8d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa70
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLashGrappleEnemyDebuffVData : public CCitadel_Modifier_StunnedVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GrappleParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x890	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RopeParticle; // 0x970	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ImpactSound; // 0xa50	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0xa60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Forge_HeavyBarrage_StackingSlow : public CCitadelModifier
{
public:
	float m_flStackingSlowPerRocket; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CBaseLockonAbilityVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TargetModifier; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strApplyLockonStack; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_LastBreath : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	float m_flDamageToAbsorb; // 0x168	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Bomber_Ability03 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CScaleFunctionAbilityProperty_NanoTechRoundsDamage : public CScaleFunctionBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_ArmorUpgrade_Stimpak : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_Knockback : public CCitadel_Modifier_Stunned
{
public:
	float m_flForce; // 0xc8	
	bool m_bKnockedBack; // 0xcc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CAbility_Synth_Grasp : public C_CitadelBaseAbility
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecTetheredEnemies; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "uint8 m_iObserverMode"
// MNetworkVarNames "CHandle< CBaseEntity> m_hObserverTarget"
class CPlayer_ObserverServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverModeChanged"
	uint8_t m_iObserverMode; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverTargetChanged"
	CHandle< C_BaseEntity > m_hObserverTarget; // 0x44	
	ObserverMode_t m_iObserverLastMode; // 0x48	
	bool m_bForcedObserverMode; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	float m_flObserverChaseDistance; // 0x50	
	GameTime_t m_flObserverChaseDistanceCalcTime; // 0x54	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Ability_TangoTether_Trigger : public CCitadelBaseTriggerAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c38[0x4]; // 0xc38
public:
	CHandle< C_CitadelBaseAbility > m_hBaseAbility; // 0xc3c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "int m_iLane"
class C_AssignedLaneParticle : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x20]; // 0x810
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x830	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityThumper4VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PullAOEModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2f8
// Has VTable
class CCitadel_Modifier_Bounce_Pad_Stomp : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x230]; // 0xc0
public:
	bool m_bStomped; // 0x2f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_ChargedBomb : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_IncendiaryThinker : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_WaterServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa90
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class C_Citadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0a78[0x8]; // 0xa78
public:
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_hAbility; // 0xa80	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xa84	
	float m_flLifetime; // 0xa88	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee8
// Has VTable
// 
// MNetworkVarNames "int m_nPowerLevel"
class CCitadel_Ability_PowerSlash : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c30[0xc]; // 0xc30
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nPowerLevel; // 0xc3c	
	ParticleIndex_t m_nCastParticle; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_ShieldTracker_Base : public CCitadelModifier
{
public:
	Vector m_vecShield; // 0xc0	
	float m_flShieldDamageTime; // 0xcc	
	float m_flShieldBreakTime; // 0xd0	
	float m_flShieldBreakHealAmount; // 0xd4	
	float m_flShieldBreakHealDone; // 0xd8	
	bool m_bShieldHealingAfterBreak; // 0xdc	
	bool m_bForceRegen; // 0xdd	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDashCastStartTime"
// MNetworkVarNames "Vector m_vDashCastDir"
class CCitadelBaseDashCastAbility : public C_CitadelBaseAbility
{
public:
	CHandle< C_CitadelBaseAbility > m_hAbilityToTrigger; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashCastStartTime; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vDashCastDir; // 0xc30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashDownStrikeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x14e0	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x15c0	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strAirCastAnimGraphParam; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // 0x1790	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // 0x1870	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_StompExplosionSound; // 0x1950	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // 0x1960	
	CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // 0x1970	
	// MPropertyStartGroup "+Down Strike Params"
	float m_flHeightUILingerTime; // 0x1980	
	float m_flDamageFrustumHalfWidth; // 0x1984	
	float m_flDamageFrustumAngle; // 0x1988	
	float m_flDamageWaveSpeed; // 0x198c	
	float m_flDamageTraceProbeDamageRadius; // 0x1990	
	float m_flDamageTraceProbeWorldRadius; // 0x1994	
	float m_flDamageTraceProbeStepUpHeight; // 0x1998	
	float m_flDamageTraceProbeStepDownHeight; // 0x199c	
	float m_flDamageTraceProbeDropDownRate; // 0x19a0	
	float m_flInitialDamageRadiusInMeters; // 0x19a4	
	int32_t m_nGroundCrackGap; // 0x19a8	
	float m_flGroupLengthTolerance; // 0x19ac	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ProjectMindVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProjectMindModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_AcolytesGlove : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1638
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_Stasis_BombVData : public CCitadel_Item_BubbleVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x1628	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierHoldingGoldenIdolVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdolParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct SequenceHistory_t
{
public:
	HSequence m_hSequence; // 0x0	
	GameTime_t m_flSeqStartTime; // 0x4	
	float m_flSeqFixedCycle; // 0x8	
	AnimLoopMode_t m_nSeqLoopMode; // 0xc	
	float m_flPlaybackRate; // 0x10	
	float m_flCyclesPerSecond; // 0x14	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x648
// Has VTable
class C_CitadelZiplinePath : public C_PathParticleRope
{
public:
	int32_t m_iLaneNumber; // 0x640	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_BaseHeldItemVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ItemModel; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadenceGrandFinaleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_StageModel; // 0x14e0	
	float m_flStageModelHeight; // 0x15c0	
	float m_flStageModelWidth; // 0x15c4	
	float m_flStageModelLength; // 0x15c8	
	float m_flStageModelScale; // 0x15cc	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GrandFinaleAOEModifier; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x220
// Has VTable
class CCitadel_Modifier_Gravity_Lasso_Enemy : public CCitadel_Modifier_Stunned
{
public:
	ELassoHoldPosition m_eHoldPosition; // 0xc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flTime"
class CCitadelAutoScaledTime
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_flTime; // 0x8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Infuser : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb8
// Has VTable
class CCitadel_Ability_Tier2Boss_RocketBarrage : public CCitadelBaseAbilityServerOnly
{
public:
	int32_t m_nGrenadesLeft; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class CPointModifierThinker : public C_BaseEntity
{
public:
	CModifierHandleTyped< CCitadelModifier > m_hModifier; // 0x538	
	bool m_bSendToClients; // 0x550	
	
	// Datamap fields:
	// void CPointModifierThinkerOnModifierLost; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Item_ZiplineMastery : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HMaterialStrong m_hDecalMaterial"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDepth"
// MNetworkVarNames "uint32 m_nRenderOrder"
// MNetworkVarNames "bool m_bProjectOnWorld"
// MNetworkVarNames "bool m_bProjectOnCharacters"
// MNetworkVarNames "bool m_bProjectOnWater"
// MNetworkVarNames "float m_flDepthSortBias"
class C_EnvDecal : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x810	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0x818	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0x81c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0x820	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0x824	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0x828	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0x829	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0x82a	
private:
	[[maybe_unused]] uint8_t __pad082b[0x1]; // 0x82b
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0x82c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLockDownVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x14e0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NearbyEnemyBoostVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BerserkerSound; // 0x5f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x780
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkVarNames "float32 m_MinFalloff"
// MNetworkVarNames "float32 m_MaxFalloff"
// MNetworkVarNames "float32 m_flFadeInDuration"
// MNetworkVarNames "float32 m_flFadeOutDuration"
// MNetworkVarNames "float32 m_flMaxWeight"
// MNetworkVarNames "float32 m_flCurWeight"
// MNetworkVarNames "char m_netlookupFilename"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bClientSide"
// MNetworkVarNames "bool m_bExclusive"
class C_ColorCorrection : public C_BaseEntity
{
public:
	Vector m_vecOrigin; // 0x538	
	// MNetworkEnable
	float m_MinFalloff; // 0x544	
	// MNetworkEnable
	float m_MaxFalloff; // 0x548	
	// MNetworkEnable
	float m_flFadeInDuration; // 0x54c	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x550	
	// MNetworkEnable
	float m_flMaxWeight; // 0x554	
	// MNetworkEnable
	float m_flCurWeight; // 0x558	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x55c	
	// MNetworkEnable
	bool m_bEnabled; // 0x75c	
	// MNetworkEnable
	bool m_bMaster; // 0x75d	
	// MNetworkEnable
	bool m_bClientSide; // 0x75e	
	// MNetworkEnable
	bool m_bExclusive; // 0x75f	
	bool m_bEnabledOnClient[1]; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0761[0x3]; // 0x761
public:
	float m_flCurWeightOnClient[1]; // 0x764	
	bool m_bFadingIn[1]; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad0769[0x3]; // 0x769
public:
	float m_flFadeStartWeight[1]; // 0x76c	
	float m_flFadeStartTime[1]; // 0x770	
	float m_flFadeDuration[1]; // 0x774	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
// 
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iMaxHealth"
class C_NPC_FlyingDrone : public C_AI_CitadelNPC
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Ability_Tengu_AirLift_Grab_Trigger : public CCitadelBaseTriggerAbility
{
public:
	CHandle< C_CitadelBaseAbility > m_hBaseAbility; // 0xc38	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Warden_RiotProtocol_EnemyDebuff : public CCitadelModifier
{
public:
	float m_flEnemyMoveSlow; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_ProjectMind : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Bomber_ULT : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_OverdriveClip_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_OverdriveClipModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_ReloadModifier; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Galvanic_Storm_EffectVData : public CCitadel_Modifier_ChainLightningEffectVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffChainParticle; // 0x6f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_Passive_Camouflage : public CCitadelModifier
{
public:
	float m_flRate; // 0xc0	
	Vector m_vLastPosition; // 0xc4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x268
// Has VTable
class CCitadel_Modifier_ThermalDetonator_Thinker : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e0[0xa8]; // 0xe0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea0
// Has VTable
class CAbility_Synth_Barrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x268]; // 0xc28
public:
	int32_t m_nProjectilesScheduled; // 0xe90	
	float m_fProjectileInterval; // 0xe94	
	ParticleIndex_t m_ChannelParticle; // 0xe98	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerUltimateVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // 0x16a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1f8
// Has VTable
class CCitadel_Modifier_MedicBullets : public CCitadel_Modifier_BaseBulletPreRollProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_SiphonBullets_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StealWatcherModifier; // 0x620	
	CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // 0x630	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x720	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x800	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CScaleFunctionAbilityPropertyMultiStatsVData : public CScaleFunctionVData
{
public:
	CUtlVector< EStatsType > m_vecScalingStats; // 0x40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x460
// Has VTable
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance
{
public:
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseModelEntity")->m_static_fields[1]->m_instance);};
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_TimeWall_Aura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_CitadelSpawnBlocker : public C_FuncBrush
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
struct C_EconEntity__AttachedModelData_t
{
public:
	int32_t m_iModelDisplayFlags; // 0x0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierThumper_3VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DroneParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_LoopSound; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadenceCrescendoVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifierAura > m_CrescendoAOEModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_SleepBomb : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Thumper_EnemyPulled_VData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce0
// Has VTable
// 
// MNetworkVarNames "int m_iBonusHealth"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class CCitadel_Ability_UltCombo : public C_CitadelBaseAbility
{
public:
	GameTime_t m_flLastAttackTime; // 0xc28	
	int32_t m_nAttackNum; // 0xc2c	
private:
	[[maybe_unused]] uint8_t __pad0c30[0xa8]; // 0xc30
public:
	// MNetworkEnable
	int32_t m_iBonusHealth; // 0xcd8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xcdc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Forge_MiniTurret_InnateModifier : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CCitadel_Ability_PowerSurge : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
class CCitadel_Modifier_DivinersKevlarBuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Tier3Boss_LaserBeam : public CTier3BossAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_InvisVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisLoopParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisDetectRadiusParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisRevealedParticle; // 0x7b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strInvisRevealedSound; // 0x890	
	// MPropertyStartGroup "Behavior"
	bool m_bFadeInsteadOfRemoveOnBulletFire; // 0x8a0	
	bool m_bFadeInsteadOfRemoveOnAbilityUse; // 0x8a1	
	// MPropertyDescription "Fade from hidden to fully visible as invis is about to expire. Does not work with Aura applied invis, since that has no duration."
	bool m_bFadeToVisibleAtEndOfDuration; // 0x8a2	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_BreakablePropVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "Should this breakable break if a player rolls or dodges into it?"
	// MPropertyFriendlyName "Break On Dodge?"
	bool m_bBreakOnDodgeTouch; // 0x28	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, this breakble will stay after destroyed, rather than stop rendering. (useful for animating breakables that might want to stay in a final pose."
	// MPropertyFriendlyName "Render while dead?"
	bool m_bRenderAfterDeath; // 0x29	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, this breakble will stay solid after death. (useful for animating breakables that might want to stay in a final pose."
	// MPropertyFriendlyName "Solid while dead?"
	bool m_bSolidAfterDeath; // 0x2a	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, will fire damage events to animgraph, but will not take damage, so it can't die."
	// MPropertyFriendlyName "Is Permanent?"
	bool m_bIsPermanent; // 0x2b	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, this breakble will takes damage from Bullets."
	// MPropertyFriendlyName "Damaged by Bullets?"
	bool m_bDamagedByBullets; // 0x2c	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, this breakble will takes damage from Melee."
	// MPropertyFriendlyName "Damaged by Melee?"
	bool m_bDamagedByMelee; // 0x2d	
	// MPropertyGroupName "Behavior"
	// MPropertyDescription "If checked, this breakble will takes damage from Abilities."
	// MPropertyFriendlyName "Damaged by Abilities?"
	bool m_bDamagedByAbilities; // 0x2e	
private:
	[[maybe_unused]] uint8_t __pad002f[0x1]; // 0x2f
public:
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // 0x30	
	// MPropertyFriendlyName "Damage Received AnimGraph Parameter"
	// MPropertyDescription "The animgraph parameter that's  describes how much damage the breakable has received. From 0 to 1 (no damage to dead)."
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_hModel )"
	CGlobalSymbol m_sAnimgraphParamDamageReceived; // 0x110	
	// MPropertyFriendlyName "On Hit AnimGraph Parameter"
	// MPropertyDescription "The animgraph parameter that is set to true when damage the breakable was hit."
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_hModel )"
	CGlobalSymbol m_sAnimgraphParamOnHit; // 0x118	
	// MPropertyFriendlyName "On Respawn AnimGraph Parameter"
	// MPropertyDescription "The animgraph parameter that is set to true the brekable is respawned."
	// MPropertyAttributeEditor "VDataAnimGraphParam( m_hModel )"
	CGlobalSymbol m_sAnimgraphParamOnRespawn; // 0x120	
	// MPropertyGroupName "Audio"
	// MPropertyDescription "3D Sound of the prop breaking"
	CSoundEventName m_sBreakSound; // 0x128	
	// MPropertyGroupName "Audio"
	// MPropertyDescription "3D Sound of the prop taking damage"
	CSoundEventName m_sDamageSound; // 0x138	
	CSoundEventName m_sHeavyDamageSound; // 0x148	
	// MPropertyGroupName "Audio"
	// MPropertyDescription "Hit Indicator Sound. 2D Sound played to attacker and observers to indicate a hit."
	CSoundEventName m_sHitIndicatorSound; // 0x158	
	// MPropertyGroupName "Attributes"
	// MPropertyDescription "Health"
	int32_t m_iHealth; // 0x168	
	// MPropertyStartGroup "Attributes"
	// MPropertyDescription "Respawn time"
	float m_flInitialSpawnTime; // 0x16c	
	float m_flRespawnTime; // 0x170	
	float m_flInitialSpawnTimeTest; // 0x174	
	float m_flRespawnTimeTest; // 0x178	
	// MPropertyDescription "Can be mantled?"
	bool m_bIsMantleable; // 0x17c	
private:
	[[maybe_unused]] uint8_t __pad017d[0x3]; // 0x17d
public:
	// MPropertyDescription "Chance for this to drop a primary reward, 0 - 100%, this rolls first"
	float m_flPrimaryDropChance; // 0x180	
	// MPropertyDescription "Category for the random roller"
	ECitadelRandomRollTypes m_eRollType; // 0x184	
	// MPropertyStartGroup "Pickup rewards"
	// MPropertyDescription "Primary Pickups are rolled first."
	CUtlVector< BreakablePowerupDropDefinition_t > m_vecPrimaryPickups; // 0x188	
	// MPropertyDescription "Level 2 Rewards"
	int32_t m_iMatchTimeMinsForLevel2Pickups; // 0x1a0	
private:
	[[maybe_unused]] uint8_t __pad01a4[0x4]; // 0x1a4
public:
	CUtlVector< BreakablePowerupDropDefinition_t > m_vecPickups_lv2; // 0x1a8	
	// MPropertyDescription "How many times each entry should be in the 'card deck'"
	int32_t m_iLootListDeckSize; // 0x1c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xda8
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_EconEntity : public C_BaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0c08[0x10]; // 0xc08
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xc18	
	bool m_bClientside; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d59[0x3]; // 0xd59
public:
	EconEntityParticleDisableMode_t m_nDisableMode; // 0xd5c	
	bool m_bParticleSystemsCreated; // 0xd60	
	bool m_bForceDestroyAttachedParticlesImmediately; // 0xd61	
private:
	[[maybe_unused]] uint8_t __pad0d62[0x6]; // 0xd62
public:
	CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // 0xd68	
	CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0xd80	
	int32_t m_iOldTeam; // 0xd84	
	bool m_bAttachmentDirty; // 0xd88	
	style_index_t m_iOldStyle; // 0xd89	
private:
	[[maybe_unused]] uint8_t __pad0d8a[0x2]; // 0xd8a
public:
	CHandle< C_BaseEntity > m_hOldProvidee; // 0xd8c	
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0xd90	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadencePrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
// Has VTable
class CCitadel_Ability_CrowdControl : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x330
// Has VTable
class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x268]; // 0xc0
public:
	CHandle< C_Citadel_RestorativeGooCube > m_hGooCube; // 0x328	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Upgrade_KineticSashTriggered_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TriggeredSound; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Tech_BleedVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_SelfBuffModifierVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class C_TeamplayRules : public C_MultiplayRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a0
// Has VTable
class C_CitadelBoomerangProjectile : public C_CitadelProjectile
{
public:
	bool m_bReturning; // 0x898	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe00
// Has VTable
class CCitadel_Upgrade_StabilizingTripod : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce8
// Has VTable
class CCitadel_ArmorUpgrade_RegeneratingBulletShield : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ItemPickupTimer : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CModifier_Upgrade_KineticSashTriggered : public CCitadelModifier
{
public:
	int32_t m_nBonusClip; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_DamageResistanceVData : public CCitadelModifierVData
{
public:
	float m_flDamageResistancePerSecond; // 0x5f0	
	float m_flTickInterval; // 0x5f4	
	float m_flDamageResistanceBonusPerGameMinute; // 0x5f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MNetworkVarNames "bool m_bIsUsable"
class C_BaseDoor : public C_BaseToggle
{
public:
	// MNetworkEnable
	bool m_bIsUsable; // 0x810	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a0
// Has VTable
class C_Citadel_Projectile_Bebop_Hook : public C_CitadelProjectile
{
public:
	ParticleIndex_t m_iChainEffect; // 0x898	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb8
// Has VTable
// 
// MNetworkVarNames "int m_nBonusClipGained"
class CCitadel_WeaponUpgrade_GlassCannon : public CCitadel_Item
{
public:
	// MNetworkEnable
	int32_t m_nBonusClipGained; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActivator"
class C_PointClientUIDialog : public C_BaseClientUIEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< C_BaseEntity > m_hActivator; // 0x840	
	bool m_bStartEnabled; // 0x844	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTargetdummy1VData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe10
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hHookVictim"
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "Vector m_vecHookTargetStartPos"
class CCitadel_Ability_Hook : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "HookVictimChanged"
	CHandle< C_BaseEntity > m_hHookVictim; // 0xc28	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecHookTargetStartPos; // 0xc30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf0
// Has VTable
class CCitadel_Ability_VoidSphere : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_Bull_Heal : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_WeaponPowerForHealthVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveBuff; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_SuperNeutralChargeActive : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_InvisFading : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Rutger_Pulse_Aura_VData : public CCitadelModifierAuraVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_empWaveParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_CProjectile_Rutger_Rocket : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ControlPointBlockerAuraTarget : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Synth_PlasmaFlux_WeaponDamage_VData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf70
// Has VTable
class CCitadel_Ability_ShieldedSentry : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_AblativeCoatResistBuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ResistBuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_ReloadSpeed : public CCitadelModifier
{
public:
	float m_flReloadSpeed; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
class C_InfoLadderDismount : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Item_TechCleave : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x880
// Has VTable
// 
// MNetworkVarNames "CHandle<CCitadelZipLineNode> m_vecConnections"
// MNetworkVarNames "int16 m_eCaptureState"
// MNetworkVarNames "int16 m_iPrimaryLane"
// MNetworkVarNames "int16 m_nRopesParity"
// MNetworkVarNames "bool m_bCornerNode"
// MNetworkVarNames "bool m_bCapturable"
// MNetworkVarNames "bool m_bDisableZippingToByPlayers"
// MNetworkVarNames "EHANDLE m_hGuardingBoss"
// MNetworkVarNames "float m_flRopeRadius"
// MNetworkVarNames "bool m_bEnabled"
class CCitadelZipLineNode : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x40]; // 0x810
public:
	// MNetworkEnable
	// MNetworkChangeCallback "connectionsChanged"
	C_NetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // 0x850	
	// MNetworkEnable
	int16_t m_eCaptureState; // 0x868	
	// MNetworkEnable
	int16_t m_iPrimaryLane; // 0x86a	
	// MNetworkEnable
	int16_t m_nRopesParity; // 0x86c	
	// MNetworkEnable
	bool m_bCornerNode; // 0x86e	
	// MNetworkEnable
	bool m_bCapturable; // 0x86f	
	// MNetworkEnable
	bool m_bDisableZippingToByPlayers; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0871[0x3]; // 0x871
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hGuardingBoss; // 0x874	
	// MNetworkEnable
	float m_flRopeRadius; // 0x878	
	// MNetworkEnable
	bool m_bEnabled; // 0x87c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_Cadence_GrandFinaleAOE : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierChompHobbledVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LassoEffect; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ConsumeSound; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Affliction_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MNetworkVarNames "float m_flDissipationRate"
// MNetworkVarNames "GameTime_t m_flDissipationTime"
// MNetworkVarNames "GameTime_t m_flHeatTime"
// MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
// MNetworkVarNames "bool m_bOverheating"
class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public C_CitadelBaseAbility
{
public:
	int32_t m_nIntervalsElapsed; // 0xc28	
	GameTime_t m_NextShotTime; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flDissipationRate; // 0xc30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDissipationTime; // 0xc34	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flHeatTime; // 0xc38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flOverheatSoundTime; // 0xc3c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bOverheating; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_VoidSphereBuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RapidFireParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Surging_Power : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_CQC_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CRenderComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0038[0x18]; // 0x38
public:
	bool m_bIsRenderingWithViewModels; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x3]; // 0x51
public:
	uint32_t m_nSplitscreenFlags; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	bool m_bEnableRendering; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x4f]; // 0x61
public:
	bool m_bInterpolationReadyToDraw; // 0xb0	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CRenderComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "Vector m_vMins"
// MNetworkVarNames "Vector m_vMaxs"
class C_SoundEventOBBEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	Vector m_vMins; // 0x538	
	// MNetworkEnable
	Vector m_vMaxs; // 0x544	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf8
// Has VTable
class CCitadel_Ability_Tokamak_HotShot : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x178]; // 0xc28
public:
	float m_flDPS; // 0xda0	
	GameTime_t m_flNextDamageTick; // 0xda4	
	Vector m_vStart; // 0xda8	
	Vector m_vEnd; // 0xdb4	
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0xdc0	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnFlameAnglesChanged"
	QAngle m_angBeamAngles; // 0xdd8	
private:
	[[maybe_unused]] uint8_t __pad0de4[0xc]; // 0xde4
public:
	bool m_bNeedsBeamReset; // 0xdf0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_WreckerScrapBlastDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c8
// Has VTable
class CCitadel_Modifier_IceDome : public CCitadelModifier
{
public:
	CHandle< C_Citadel_Ice_Dome_Blocker > m_hBlocker; // 0xc0	
	CHandle< CPointModifierThinker > m_hFriendlyAura; // 0xc4	
	CHandle< CPointModifierThinker > m_hEnemyAura; // 0xc8	
	ParticleIndex_t m_nParticleIndex; // 0xcc	
	GameTime_t m_flStartTime; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d4[0xe4]; // 0xd4
public:
	Vector m_vOrigin; // 0x1b8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Parry : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemAOESilenceModifierVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strSilenceTargetSound; // 0x5f0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_AOESmokeBombVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastCompleteParticle; // 0x1528	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBuffGainedSound; // 0x1608	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x1618	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1720
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_WarpStone_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_CasterDebuffModifier; // 0x1538	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1548	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // 0x1558	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x1638	
	// MPropertyGroupName "Gameplay"
	float m_flTeleportDistance; // 0x1718	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "float m_flLatchedValue"
// MNetworkVarNames "GameTime_t m_flLatchedTime"
// MNetworkVarNames "ELockonState m_eLockonState"
// MNetworkVarNames "EHANDLE m_hTarget"
struct LockonTarget_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	float m_flGainRate; // 0x30	
	float m_flDrainRate; // 0x34	
	float m_flMaxValue; // 0x38	
	int32_t m_nPrevFullStacks; // 0x3c	
	// MNetworkEnable
	float m_flLatchedValue; // 0x40	
	// MNetworkEnable
	GameTime_t m_flLatchedTime; // 0x44	
	// MNetworkEnable
	ELockonState m_eLockonState; // 0x48	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0x4c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b8
// Has VTable
// 
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "Color m_SecondaryColor"
// MNetworkVarNames "float m_flBrightness"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "float m_flBrightnessMult"
// MNetworkVarNames "float m_flRange"
// MNetworkVarNames "float m_flFalloff"
// MNetworkVarNames "float m_flAttenuation0"
// MNetworkVarNames "float m_flAttenuation1"
// MNetworkVarNames "float m_flAttenuation2"
// MNetworkVarNames "float m_flTheta"
// MNetworkVarNames "float m_flPhi"
// MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
// MNetworkVarNames "int m_nCascades"
// MNetworkVarNames "int m_nCastShadows"
// MNetworkVarNames "int m_nShadowWidth"
// MNetworkVarNames "int m_nShadowHeight"
// MNetworkVarNames "bool m_bRenderDiffuse"
// MNetworkVarNames "int m_nRenderSpecular"
// MNetworkVarNames "bool m_bRenderTransmissive"
// MNetworkVarNames "float m_flOrthoLightWidth"
// MNetworkVarNames "float m_flOrthoLightHeight"
// MNetworkVarNames "int m_nStyle"
// MNetworkVarNames "CUtlString m_Pattern"
// MNetworkVarNames "int m_nCascadeRenderStaticObjects"
// MNetworkVarNames "float m_flShadowCascadeCrossFade"
// MNetworkVarNames "float m_flShadowCascadeDistanceFade"
// MNetworkVarNames "float m_flShadowCascadeDistance0"
// MNetworkVarNames "float m_flShadowCascadeDistance1"
// MNetworkVarNames "float m_flShadowCascadeDistance2"
// MNetworkVarNames "float m_flShadowCascadeDistance3"
// MNetworkVarNames "int m_nShadowCascadeResolution0"
// MNetworkVarNames "int m_nShadowCascadeResolution1"
// MNetworkVarNames "int m_nShadowCascadeResolution2"
// MNetworkVarNames "int m_nShadowCascadeResolution3"
// MNetworkVarNames "bool m_bUsesBakedShadowing"
// MNetworkVarNames "int m_nShadowPriority"
// MNetworkVarNames "int m_nBakedShadowIndex"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "int m_nDirectLight"
// MNetworkVarNames "int m_nIndirectLight"
// MNetworkVarNames "float m_flFadeMinDist"
// MNetworkVarNames "float m_flFadeMaxDist"
// MNetworkVarNames "float m_flShadowFadeMinDist"
// MNetworkVarNames "float m_flShadowFadeMaxDist"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFlicker"
// MNetworkVarNames "bool m_bPrecomputedFieldsValid"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
// MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
// MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
// MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
// MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
// MNetworkVarNames "float m_flPrecomputedMaxRange"
// MNetworkVarNames "int m_nFogLightingMode"
// MNetworkVarNames "float m_flFogContributionStength"
// MNetworkVarNames "float m_flNearClipPlane"
// MNetworkVarNames "Color m_SkyColor"
// MNetworkVarNames "float m_flSkyIntensity"
// MNetworkVarNames "Color m_SkyAmbientBounce"
// MNetworkVarNames "bool m_bUseSecondaryColor"
// MNetworkVarNames "bool m_bMixedShadows"
// MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
// MNetworkVarNames "float m_flCapsuleLength"
// MNetworkVarNames "float m_flMinRoughness"
class CLightComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x30]; // 0x8
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0060[0x1c]; // 0x60
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_Color; // 0x7c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	Color m_SecondaryColor; // 0x80	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightness; // 0x84	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessScale; // 0x88	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flBrightnessMult; // 0x8c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flRange; // 0x90	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFalloff; // 0x94	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation0; // 0x98	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation1; // 0x9c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flAttenuation2; // 0xa0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flTheta; // 0xa4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flPhi; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x4]; // 0xac
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0xb0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascades; // 0xb8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCastShadows; // 0xbc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowWidth; // 0xc0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowHeight; // 0xc4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderDiffuse; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nRenderSpecular; // 0xcc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderTransmissive; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d1[0x3]; // 0xd1
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightWidth; // 0xd4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flOrthoLightHeight; // 0xd8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nStyle; // 0xdc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	CUtlString m_Pattern; // 0xe0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nCascadeRenderStaticObjects; // 0xe8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeCrossFade; // 0xec	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistanceFade; // 0xf0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance0; // 0xf4	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance1; // 0xf8	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance2; // 0xfc	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowCascadeDistance3; // 0x100	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution0; // 0x104	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution1; // 0x108	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution2; // 0x10c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowCascadeResolution3; // 0x110	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	// MNetworkAlias "m_bUsesIndexedBakedLighting"
	bool m_bUsesBakedShadowing; // 0x114	
private:
	[[maybe_unused]] uint8_t __pad0115[0x3]; // 0x115
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nShadowPriority; // 0x118	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	int32_t m_nBakedShadowIndex; // 0x11c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bRenderToCubemaps; // 0x120	
private:
	[[maybe_unused]] uint8_t __pad0121[0x3]; // 0x121
public:
	// MNetworkEnable
	int32_t m_nDirectLight; // 0x124	
	// MNetworkEnable
	int32_t m_nIndirectLight; // 0x128	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMinDist; // 0x12c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flFadeMaxDist; // 0x130	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMinDist; // 0x134	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flShadowFadeMaxDist; // 0x138	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bEnabled; // 0x13c	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	bool m_bFlicker; // 0x13d	
	// MNetworkEnable
	bool m_bPrecomputedFieldsValid; // 0x13e	
private:
	[[maybe_unused]] uint8_t __pad013f[0x1]; // 0x13f
public:
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMins; // 0x140	
	// MNetworkEnable
	Vector m_vPrecomputedBoundsMaxs; // 0x14c	
	// MNetworkEnable
	Vector m_vPrecomputedOBBOrigin; // 0x158	
	// MNetworkEnable
	QAngle m_vPrecomputedOBBAngles; // 0x164	
	// MNetworkEnable
	Vector m_vPrecomputedOBBExtent; // 0x170	
	// MNetworkEnable
	float m_flPrecomputedMaxRange; // 0x17c	
	// MNetworkEnable
	int32_t m_nFogLightingMode; // 0x180	
	// MNetworkEnable
	float m_flFogContributionStength; // 0x184	
	// MNetworkEnable
	float m_flNearClipPlane; // 0x188	
	// MNetworkEnable
	Color m_SkyColor; // 0x18c	
	// MNetworkEnable
	float m_flSkyIntensity; // 0x190	
	// MNetworkEnable
	Color m_SkyAmbientBounce; // 0x194	
	// MNetworkEnable
	bool m_bUseSecondaryColor; // 0x198	
	// MNetworkEnable
	// MNetworkChangeCallback "MixedShadowsChanged"
	bool m_bMixedShadows; // 0x199	
private:
	[[maybe_unused]] uint8_t __pad019a[0x2]; // 0x19a
public:
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	GameTime_t m_flLightStyleStartTime; // 0x19c	
	// MNetworkEnable
	float m_flCapsuleLength; // 0x1a0	
	// MNetworkEnable
	// MNetworkChangeCallback "LightRenderingChanged"
	float m_flMinRoughness; // 0x1a4	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CLightComponent")->m_static_fields[1]->m_instance);};
	
	// Datamap fields:
	// SHIM m_bRenderSpecular; // 0xcc
	// SHIM m_bCastShadows; // 0xbc
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_GooGrenade : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_IcePath_Buff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_ProjectMind : public CCitadelModifier
{
public:
	ParticleIndex_t m_particleStart; // 0xc0	
	ParticleIndex_t m_particleEnd; // 0xc4	
	ParticleIndex_t m_particleTrail; // 0xc8	
	Vector m_vecEndLocation; // 0xcc	
	Vector m_vecStartPosition; // 0xd8	
	float m_flStartDelay; // 0xe4	
	Vector m_vecApplyOffset; // 0xe8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MetalSkinVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffStartParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffEndParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Core_PushTarget : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b0
// Has VTable
// 
// MNetworkVarNames "CGameSceneNode m_sceneNode"
class CBodyComponentPoint : public CBodyComponent
{
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; // 0x50	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class C_EconWearable : public C_EconEntity
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifer_Viscous_Goo_Aura_VData : public CCitadelModifierAuraVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_Handle"
// MNetworkVarNames "bool m_bSendHandle"
class C_HandleTest : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_Handle; // 0x538	
	// MNetworkEnable
	bool m_bSendHandle; // 0x53c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakHotShotVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LaserModifier; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserStartSound; // 0x14f0	
	CSoundEventName m_strLaserEndSound; // 0x1500	
	CSoundEventName m_strLaserLoopSound; // 0x1510	
	CSoundEventName m_strLaserHitSound; // 0x1520	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x1530	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x1610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x16f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x17d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc30
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
class CCitadel_Ability_LifeDrain : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	GameTime_t m_tDrainLifeStopTime; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca0
// Has VTable
class CCitadel_Ability_StormCloud : public C_CitadelBaseAbility
{
public:
	bool m_bApplyingVerticalAirDrag; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x740
// Has VTable
// 
// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
class C_EnvWindClientside : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkDisable
	C_EnvWindShared m_EnvWindShared; // 0x538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x150
// Has VTable
class CCitadel_Modifier_Rutger_ForceField_Aura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd58
// Has VTable
class CCitadel_Ability_Chrono_PulseGrenade : public C_CitadelBaseAbility
{
public:
	Vector m_vLaunchPosition; // 0xc28	
	QAngle m_qLaunchAngle; // 0xc34	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_Hornet_Sting : public CCitadelModifier
{
public:
	GameTime_t m_flLastTickTime; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_VeilWalkerWatcher : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x800
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierNikumanVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SelfParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEFriendParticle; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x7f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
class C_PointClientUIWorldTextPanel : public C_PointClientUIWorldPanel
{
public:
	// MNetworkEnable
	char m_messageText[512]; // 0xa70	
	
	// Datamap fields:
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_Thumper_4 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Cadence_SilenceContraptions : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "bool m_bInGround"
class CCitadel_Ability_Burrow : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0xe0]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInGround; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d09[0x3]; // 0xd09
public:
	ParticleIndex_t m_nBurrowEffect; // 0xd0c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityNanoWarpVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeSlowParticle; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x16a0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x16b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CModifier_Citadel_Bull_Leap_LandingBonuses : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TrackingProjectileApplyModifierVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileImpactParticle; // 0x1528	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x1608	
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyOnlyModifier; // 0x1618	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CScaleFunctionAbilityProperty_BaseWeaponDamage : public CScaleFunctionBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xad0
// Has VTable
class CUnitStatusOverlay : public C_PointClientUIWorldPanel
{
private:
	[[maybe_unused]] uint8_t __pad0a70[0x40]; // 0xa70
public:
	float m_flUIScale; // 0xab0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd28
// Has VTable
// 
// MNetworkVarNames "int m_nWeaponPower"
class CCitadel_WeaponUpgrade_WeaponEater : public CCitadel_Item
{
private:
	[[maybe_unused]] uint8_t __pad0c40[0xe0]; // 0xc40
public:
	// MNetworkEnable
	int32_t m_nWeaponPower; // 0xd20	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_FireRateAura : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_ComboBreakerHeal : public CCitadelModifier
{
public:
	float m_flAmountPerSecond; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_BonusDamagePercent : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc18
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
class C_NPC_TeslaCoil : public C_NPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xa78	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_AnthemAOEVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_ArmorUpgrade_BulletArmorReductionAura : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x318
// Has VTable
class CModifier_Mirage_EtherealBullets : public CCitadelModifier
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // 0xc0	
	int32_t m_nShootIndex; // 0xd8	
	int32_t m_nShotCyclesPerformed; // 0xdc	
	bool m_bIsBulletBursting; // 0xe0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe80
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flScopeStartTime"
class CCitadel_Ability_Hornet_Snipe : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x20c]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flScopeStartTime; // 0xe34	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_HornetMark : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FlameDashBurnVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Backdoor_ProtectionVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Backdoor Protection"
	// MPropertyDescription "Range to check for nearby troopers (in units). Once troopers are within range, backdoor protection is removed. 0 range means disabled"
	float m_flBackdoorProtectionNearbyTrooperRange; // 0x5f0	
	// MPropertyDescription "How often do we check for troopers?"
	float m_flBackdoorProtectionNearbyTrooperThinkInterval; // 0x5f4	
	// MPropertyDescription "How long does a nearby trooper lower backdoor protection?"
	float m_flBackdoorProtectionNearbyTrooperRemovalDuration; // 0x5f8	
	// MPropertyDescription "How much should damage be reduced from players when backdoor protection is up? 0 is no reduction, 100 is complete reduction"
	// MPropertyAttributeRange "0 100"
	float m_flBackdoorProtectionDamageMitigationFromPlayers; // 0x5fc	
	// MPropertyDescription "How health per second does backdoor protection regen?"
	float m_flHealthPerSecondRegen; // 0x600	
	// MPropertyDescription "How health per second when out of combat?"
	float m_flOutOfCombatHealthRegen; // 0x604	
	// MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
	float m_flOutOfCombatRegenDelay; // 0x608	
	// MPropertyDescription "How long the shield effect lingers after having taken damage"
	float m_flEffectsLingerTime; // 0x60c	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldImpactParticle; // 0x610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldActiveParticle; // 0x6f0	
	CUtlString m_strActiveEffectConfigName; // 0x7d0	
	float flShieldImpactDirectionOffset; // 0x7d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RootVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MNetworkVarNames "float32 m_flFallVelocity"
// MNetworkVarNames "bool m_bInCrouch"
// MNetworkVarNames "uint32 m_nCrouchState"
// MNetworkVarNames "GameTime_t m_flCrouchTransitionStartTime"
// MNetworkVarNames "bool m_bDucked"
// MNetworkVarNames "bool m_bDucking"
// MNetworkVarNames "bool m_bInDuckJump"
class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
public:
	float m_flStepSoundTime; // 0x1d8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096.000000"
	// MNetworkMaxValue "4096.000000"
	// MNetworkEncodeFlags "4"
	float m_flFallVelocity; // 0x1dc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInCrouch; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01e1[0x3]; // 0x1e1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nCrouchState; // 0x1e4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flCrouchTransitionStartTime; // 0x1e8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucked; // 0x1ec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucking; // 0x1ed	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInDuckJump; // 0x1ee	
private:
	[[maybe_unused]] uint8_t __pad01ef[0x1]; // 0x1ef
public:
	Vector m_groundNormal; // 0x1f0	
	float m_flSurfaceFriction; // 0x1fc	
	CUtlStringToken m_surfaceProps; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0xc]; // 0x204
public:
	int32_t m_nStepside; // 0x210	
	
	// Datamap fields:
	// void m_pSurfaceData; // 0x208
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x760
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierKnockdownVData : public CCitadel_Modifier_StunnedVData
{
public:
	float m_flSatVolumeRadius; // 0x6d0	
	float m_flSatVolumeFadeOut; // 0x6d4	
	// MPropertyStartGroup "Camera"
	float m_flGetUpSeqDuration; // 0x6d8	
private:
	[[maybe_unused]] uint8_t __pad06dc[0x4]; // 0x6dc
public:
	CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x6e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
class CCitadel_Ability_PrimaryWeapon_Slork : public CCitadel_Ability_PrimaryWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0d08[0x198]; // 0xd08
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnSlorkAimAnglesChanged"
	QAngle m_angAimAngles; // 0xea0	
private:
	[[maybe_unused]] uint8_t __pad0eac[0x24]; // 0xeac
public:
	bool m_bNeedAimAngleReset; // 0xed0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_TangoTether_TetherReceiver : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_IncendiaryThinkerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
// Is Abstract
class CCitadel_Modifier_Tier3Boss_Base : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x190
// Has VTable
// 
// MGetKV3ClassDefaults
class CBasePlayerVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x108	
	CSkillFloat m_flHeadDamageMultiplier; // 0x120	
	CSkillFloat m_flChestDamageMultiplier; // 0x130	
	CSkillFloat m_flStomachDamageMultiplier; // 0x140	
	CSkillFloat m_flArmDamageMultiplier; // 0x150	
	CSkillFloat m_flLegDamageMultiplier; // 0x160	
	// MPropertyGroupName "Water"
	float m_flHoldBreathTime; // 0x170	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Seconds between drowning ticks"
	float m_flDrowningDamageInterval; // 0x174	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Amount of damage done on the first drowning tick (+1 each subsequent interval)"
	int32_t m_nDrowningDamageInitial; // 0x178	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Max damage done by a drowning tick"
	int32_t m_nDrowningDamageMax; // 0x17c	
	// MPropertyGroupName "Water"
	int32_t m_nWaterSpeed; // 0x180	
	// MPropertyGroupName "Use"
	float m_flUseRange; // 0x184	
	// MPropertyGroupName "Use"
	float m_flUseAngleTolerance; // 0x188	
	// MPropertyGroupName "Crouch"
	// MPropertyDescription "Time to move between crouch and stand"
	float m_flCrouchTime; // 0x18c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerSalvageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SalvageEnemyModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_StunEnemyModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1500	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Chrono_TimeWall_EffectVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x6e0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strDamageSound; // 0x7c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechBleed_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BleedModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTenguLightningCrashVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x14e0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // 0x15c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe80
// Has VTable
class CCitadel_Ability_RocketBarrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x230]; // 0xc28
public:
	float m_flCurrentTimeScale; // 0xe58	
	Vector m_vecAimPos; // 0xe5c	
	Vector m_vecAimVel; // 0xe68	
	GameTime_t m_flLastUpdateTime; // 0xe74	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBloodShardsVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14e0	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Upgrade_KineticSash_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_KineticSashTriggeredModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "float m_flAttackRange"
// MNetworkVarNames "float m_flAimPitch"
class C_NPC_ShieldedSentry : public C_NPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xa78	
private:
	[[maybe_unused]] uint8_t __pad0c18[0x4]; // 0xc18
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xc1c	
	// MNetworkEnable
	float m_flAimPitch; // 0xc20	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct C_EnvWindShared__WindVariationEvent_t
{
public:
	float m_flWindAngleVariation; // 0x0	
	float m_flWindSpeedVariation; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCitadel_WeaponUpgrade_InstantReload : public CCitadel_Item
{
public:
	bool m_bIsManualReloading; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadelModifierAura_Cone : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x920
// Has VTable
class CSpriteOriented : public C_Sprite
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakBreachVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AllySmokeAOEModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemySmokeAOEModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeParticle; // 0x1500	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakHeatSinksVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HeatDotModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
// Has VTable
class CCitadel_Modifier_Cadence_GrandFinale_Buff : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x90]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1590
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FlameDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlameDashModifier; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DashBurstSound; // 0x14f0	
	CSoundEventName m_ChargeHitSound; // 0x1500	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSpeedBoost; // 0x1510	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1660
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeapon_BebopVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWindupSound; // 0x1528	
	CSoundEventName m_strBeamStartSound; // 0x1538	
	CSoundEventName m_strBeamLoopSound1; // 0x1548	
	CSoundEventName m_strBeamLoopSound2; // 0x1558	
	CSoundEventName m_strBeamStopSound; // 0x1568	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szWeaponBeamParticle; // 0x1578	
	// MPropertyStartGroup "Misc"
	float m_flWindupRepeatCycle; // 0x1658	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_Tech_Defender_Shredders_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x178
// Has VTable
class CCitadel_Modifier_Apex_Watcher : public CCitadel_Modifier_Out_Of_Combat_Health_Regen
{
public:
	bool m_bShouldEnableBuff; // 0x138	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ColdFrontAOE_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ReloadSpeedVData : public CCitadelModifierVData
{
public:
	float m_flReloadSpeedPercent; // 0x5f0	
	bool m_bDestroyAfterReload; // 0x5f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
// 
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flRadiusScale"
// MNetworkVarNames "float32 m_flSelfIllumScale"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "HRenderTextureStrong m_hTextureOverride"
class C_EnvParticleGlow : public C_ParticleSystem
{
public:
	// MNetworkEnable
	float m_flAlphaScale; // 0xdc0	
	// MNetworkEnable
	float m_flRadiusScale; // 0xdc4	
	// MNetworkEnable
	float m_flSelfIllumScale; // 0xdc8	
	// MNetworkEnable
	Color m_ColorTint; // 0xdcc	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0xdd0	
	
	// Datamap fields:
	// float InputSetScale; // 0x0
	// float InputSetAlphaScale; // 0x0
	// Color InputSetColorTint; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
class C_SoundEventPathCornerEntity : public C_SoundEventEntity
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // 0x538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf8
// Has VTable
class CCitadel_Ability_SettingSun : public C_CitadelBaseAbility
{
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c40[0xb0]; // 0xc40
public:
	bool m_bWasSelected; // 0xcf0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_SilenceProc_Immunity : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_RegenerativeArmorVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RegenModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x218
// Has VTable
class CCitadel_Modifier_QuickSilver_Watcher : public CCitadel_Modifier_BaseEventProc
{
private:
	[[maybe_unused]] uint8_t __pad0168[0xa8]; // 0x168
public:
	bool m_bProcNextHit; // 0x210	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCitadel_Modifier_TechBurst_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAI_NPC_TrooperVData : public CAI_CitadelNPCVData
{
public:
	TrooperType_t m_TrooperType; // 0xe18	
	float m_flTrooperDamageResistPct; // 0xe1c	
	float m_flT1BossDamageResistPct; // 0xe20	
	float m_flT2BossDamageResistPct; // 0xe24	
	float m_flBarrackGuardianDamageResistPct; // 0xe28	
	float m_flNearDeathDuration; // 0xe2c	
	float m_flFlySpeed; // 0xe30	
	float m_flFlyHeight; // 0xe34	
	float m_flMeleeDamage; // 0xe38	
	float m_flMeleeDuration; // 0xe3c	
	float m_flMeleeChargeRange; // 0xe40	
	float m_flAttackT1BossMaxRange; // 0xe44	
	float m_flAttackTrooperMaxRange; // 0xe48	
	float m_flShieldDamageResistPct; // 0xe4c	
	float m_flHealthBarOffsetDucking; // 0xe50	
	// MPropertyStartGroup "Trooper DPS"
	// MPropertyDescription "Trooper vs Trooper DPS"
	float m_flTrooperDPS; // 0xe54	
	// MPropertyDescription "Trooper vs Player DPS"
	float m_flPlayerDPS; // 0xe58	
	// MPropertyDescription "Trooper vs T1 Guardian DPS"
	float m_flT1BossDPS; // 0xe5c	
	// MPropertyDescription "Trooper vs T2 Guardian DPS"
	float m_flT2BossDPS; // 0xe60	
	// MPropertyDescription "Trooper vs T3 Guardian DPS"
	float m_flT3BossDPS; // 0xe64	
	// MPropertyDescription "Trooper vs Barrack Guardian DPS"
	float m_flBarrackBossDPS; // 0xe68	
	// MPropertyDescription "Trooper vs Generator DPS"
	float m_flGeneratorBossDPS; // 0xe6c	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BossAttackParticle; // 0xe70	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LastHitParticle; // 0xf50	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingLaserParticle; // 0x1030	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingEyeFlashParticle; // 0x1110	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromDamageParticle; // 0x11f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromLandingParticle; // 0x12d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MedicHealActiveParticle; // 0x13b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sPlayerLastHitSound; // 0x1490	
	CSoundEventName m_sCelebrationSound; // 0x14a0	
	CSoundEventName m_sZiplineContainerBreakSound; // 0x14b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier; // 0x14c0	
	CEmbeddedSubclass< CCitadelModifier > m_TrooperBossInvulnModifier; // 0x14d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_Crescendo_AOE_VData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x218
// Has VTable
class CCitadel_Modifier_Burrow : public CCitadelModifier
{
public:
	SatVolumeIndex_t m_nSatVolumeIndex; // 0xc0	
	GameTime_t m_flLastDamageTime; // 0xc4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLashGrappleTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LockingOnParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LockedOnParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc30
// Has VTable
class CCitadel_Ability_HornetMark : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_DebuffImmunityVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x5f0	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PlayerShieldParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_SimpleAnimatingAIVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SleepDaggerAsleepVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PostSleepModifier; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1800
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityImmobilizeTrapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrapHighlightParticle; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTripSound; // 0x1780	
	CSoundEventName m_strExplodeSound; // 0x1790	
	CSoundEventName m_strExpiredSound; // 0x17a0	
	CSoundEventName m_strImmobilizeTargetSound; // 0x17b0	
	CSoundEventName m_strArmingSound; // 0x17c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TrapModifier; // 0x17d0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x17e0	
	CEmbeddedSubclass< CCitadelModifier > m_DotModifier; // 0x17f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc0
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flDetonateTime"
// MNetworkVarNames "bool m_bIsCasting"
class CCitadel_Ability_FireBomb : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x78]; // 0xc28
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDetonateTime; // 0xca0	
	// MNetworkEnable
	bool m_bIsCasting; // 0xcb8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Item_SmokeBomb_PreCast : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MagicShock_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // 0x620	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_hDamageTrackModifier; // 0x700	
	CEmbeddedSubclass< CBaseModifier > m_hSlowModifier; // 0x710	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x870
// Has VTable
// 
// MNetworkIncludeByName "m_clrRender"
// MNetworkExcludeByName "CGameSceneNode::m_vecOrigin"
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "Vector m_vDirection"
// MNetworkVarNames "string_t m_iszEffectName"
// MNetworkVarNames "string_t m_iszSSEffectName"
// MNetworkVarNames "Color m_clrOverlay"
// MNetworkVarNames "bool m_bOn"
// MNetworkVarNames "bool m_bmaxColor"
// MNetworkVarNames "float32 m_flSize"
// MNetworkVarNames "float32 m_flHazeScale"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "float32 m_flAlphaHaze"
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flAlphaHdr"
// MNetworkVarNames "float32 m_flFarZScale"
class C_Sun : public C_BaseModelEntity
{
public:
	ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0x810	
	ParticleIndex_t m_fxSunFlareEffectIndex; // 0x814	
	float m_fdistNormalize; // 0x818	
	Vector m_vSunPos; // 0x81c	
	// MNetworkEnable
	Vector m_vDirection; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0834[0x4]; // 0x834
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0x838	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0x840	
	// MNetworkEnable
	Color m_clrOverlay; // 0x848	
	// MNetworkEnable
	bool m_bOn; // 0x84c	
	// MNetworkEnable
	bool m_bmaxColor; // 0x84d	
private:
	[[maybe_unused]] uint8_t __pad084e[0x2]; // 0x84e
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flSize; // 0x850	
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flHazeScale; // 0x854	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0x858	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHDRScaleChanged"
	float m_flHDRColorScale; // 0x85c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0x860	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0x864	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0x868	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0x86c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe70
// Has VTable
// 
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDashDirection"
// MNetworkVarNames "bool m_bIsDashing"
// MNetworkVarNames "bool m_bStartedInAir"
class CCitadel_Ability_ShivDash : public CCitadelBaseShivAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStartPosition; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vDashDirection; // 0xc34	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIsDashing; // 0xc40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bStartedInAir; // 0xc41	
private:
	[[maybe_unused]] uint8_t __pad0c42[0x6]; // 0xc42
public:
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xc48	
	Vector m_vecLastPosition; // 0xc60	
	int32_t m_nReductionsLeft; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c70[0x1f8]; // 0xc70
public:
	GameTime_t m_flStuckTime; // 0xe68	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
// Has VTable
class CCitadel_Ability_TrooperNeutralGrenade : public CCitadel_Ability_TrooperGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_PlayerPinged : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Item_Containment : public CCitadel_Item_TrackingProjectileApplyModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b0
// Has VTable
class CCitadel_Modifier_Rutger_Pulse_Target : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	Vector m_vAuraCenter; // 0x1a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGenericPerson3VData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPsychicLiftVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LiftModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x14f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetCastSound; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ColossusActive_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Discord_Enemy : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_BulletArmorShredder_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Bullet_Shield : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BonusDamagePercentVData : public CCitadelModifierVData
{
public:
	bool m_bSelfish; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa10
// Has VTable
// 
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
class C_PointClientUIHUD : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0840[0x8]; // 0x840
public:
	bool m_bCheckCSSClasses; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad0849[0x17f]; // 0x849
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x9c8	
private:
	[[maybe_unused]] uint8_t __pad09c9[0x3]; // 0x9c9
public:
	// MNetworkEnable
	float m_flWidth; // 0x9cc	
	// MNetworkEnable
	float m_flHeight; // 0x9d0	
	// MNetworkEnable
	float m_flDPI; // 0x9d4	
	// MNetworkEnable
	float m_flInteractDistance; // 0x9d8	
	// MNetworkEnable
	float m_flDepthOffset; // 0x9dc	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x9e0	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x9e4	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x9e8	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x9ec	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f1[0x7]; // 0x9f1
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x9f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa40
// Has VTable
// 
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "float m_MaxWeight"
// MNetworkVarNames "float m_FadeDuration"
// MNetworkVarNames "float m_Weight"
// MNetworkVarNames "char m_lookupFilename"
class C_ColorCorrectionVolume : public C_BaseTrigger
{
public:
	float m_LastEnterWeight; // 0x818	
	float m_LastEnterTime; // 0x81c	
	float m_LastExitWeight; // 0x820	
	float m_LastExitTime; // 0x824	
	// MNetworkEnable
	bool m_bEnabled; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0829[0x3]; // 0x829
public:
	// MNetworkEnable
	float m_MaxWeight; // 0x82c	
	// MNetworkEnable
	float m_FadeDuration; // 0x830	
	// MNetworkEnable
	float m_Weight; // 0x834	
	// MNetworkEnable
	char m_lookupFilename[512]; // 0x838	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_PrecipitationBlocker : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Cadence_Gun_Spikes : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x12c0
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_IceBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x618]; // 0xc28
public:
	GameTime_t m_flNextDamageTick; // 0x1240	
	Vector m_vStart; // 0x1244	
	Vector m_vEnd; // 0x1250	
private:
	[[maybe_unused]] uint8_t __pad125c[0x4]; // 0x125c
public:
	Vector m_vSplitStart; // 0x1260	
	Vector m_vSplitEnd; // 0x126c	
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0x1278	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1290	
private:
	[[maybe_unused]] uint8_t __pad129c[0x4]; // 0x129c
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0x12a0	
private:
	[[maybe_unused]] uint8_t __pad12ac[0xc]; // 0x12ac
public:
	bool m_bNeedsBeamReset; // 0x12b8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Cadence_Sleeping : public CCitadel_Modifier_Sleep
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RadianceVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadianceFxParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadianceDamageParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ClientsideDamageParticle; // 0x7b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageRecievedSound; // 0x890	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLockDownDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleCaster; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleEnemy; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticleOthers; // 0x890	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFollowLoop; // 0x970	
	CSoundEventName m_strExplodeSound; // 0x980	
	CSoundEventName m_strEscapedSound; // 0x990	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // 0x9a0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x9b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Bounce_Pad_Ally : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x640
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirRaidVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x620	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWeaponShootSound; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Bull_HealVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Passive_Cloak : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_ComboBreakerVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ComboBreakerModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x990
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SettingSunThinker_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LingerParticle; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LayerParticle; // 0x890	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x970	
	CSoundEventName m_strTargetingCompletedSound; // 0x980	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa90
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_PsychicDagger_MakeDaggers_VData : public CCitadelModifierVData
{
public:
	float m_flDesatAmount; // 0x5f0	
	Color m_DesatTint; // 0x5f4	
	Color m_SatTint; // 0x5f8	
	Color m_Outline; // 0x5fc	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerShot; // 0x600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerSpawn; // 0x6e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerAoE; // 0x7c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerTargetPreview; // 0x8a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerShotFail; // 0x980	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DaggerFireSound; // 0xa60	
	CSoundEventName m_DaggerMissSound; // 0xa70	
	CSoundEventName m_LastDaggerMissSound; // 0xa80	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x110
// Has VTable
class CCitadel_Modifier_GhostBloodShard : public CCitadelModifier
{
public:
	float m_flMinSlowAmount; // 0xc0	
	float m_flMoveSpeedPenaltyPerStack; // 0xc4	
	float m_flSlowDuration; // 0xc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_LifestrikeGauntlets_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // 0x620	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x700	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_AmmoScavenger : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Objective_RegenVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Objective Health Regen"
	// MPropertyDescription "How health per second when out of combat?"
	float m_flOutOfCombatHealthRegen; // 0x5f0	
	// MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
	float m_flOutOfCombatRegenDelay; // 0x5f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_ApplyDebuff_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa70
// Has VTable
class C_Citadel_PickupItemSpawner : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCitadel_Item_RescueBeam : public CCitadel_Item
{
public:
	bool m_bCanPull; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadenceLullabyVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SleepAOEModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_Chrono_TimeWall_Effect : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x20]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_SurgingPowerVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ModifierSurgingPower; // 0x1528	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastTargetEffect; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FireRateAuraVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FireRateAuraSourceParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_MagicClarityWatcher : public CCitadel_Modifier_Intrinsic_Base
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MNetworkVarNames "bool m_bAllowRotatingUp"
// MNetworkVarNames "bool m_bFixedPosition"
// MNetworkVarNames "float m_flShieldOffset"
class C_Citadel_Shield : public CCitadelModelEntity
{
public:
	// MNetworkEnable
	bool m_bAllowRotatingUp; // 0x818	
	// MNetworkEnable
	bool m_bFixedPosition; // 0x819	
private:
	[[maybe_unused]] uint8_t __pad081a[0x2]; // 0x81a
public:
	// MNetworkEnable
	float m_flShieldOffset; // 0x81c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Metal : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_Slork_Raging_Current_Damp : public CCitadel_Modifier_Stunned
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGangActivityVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AbilitySwap; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_SettingSun_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamTargetParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UnitTargetParticle; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SettingSunThinkerModifier; // 0x16a0	
	float m_flSSCameraPreviewOffset; // 0x16b0	
	float m_flSSCameraPreviewSpeed; // 0x16b4	
	float m_flSSCameraPreviewDistance; // 0x16b8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Burrow_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowPlayerParticle; // 0x5f0	
	float m_flDesatAmount; // 0x6d0	
	Color m_DesatTint; // 0x6d4	
	Color m_SatTint; // 0x6d8	
	Color m_Outline; // 0x6dc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CModifier_BansheeSlugs_Headshot : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_ReturnFire : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_BulletResistReductionStack : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CFuncFoliageVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletImpactParticle; // 0x28	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletExitParticle; // 0x108	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Arcane_Eater_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c8
// Has VTable
class CCitadel_Modifier_Galvanic_Storm : public CCitadel_Modifier_ChainLightning
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x268
// Has VTable
// 
// MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
class CCitadelPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0240[0x8]; // 0x240
public:
	Vector m_vecPogoVelocity; // 0x248	
	Vector m_vecSupport; // 0x254	
	bool m_bColliding; // 0x260	
	bool m_bLandedOnGround; // 0x261	
	bool m_bHasFreeCursor; // 0x262	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckingBallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonReadyParticle; // 0x15c0	
	CUtlString m_SummonParticleAttachment; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AutoThrowModifier; // 0x1788	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_HoldingBallLoop; // 0x1798	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2a0
// Has VTable
class CCitadel_Modifier_Gravity_Lasso_Self : public CCitadelModifier
{
public:
	bool m_bHasUsedBouncePad; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x7]; // 0xc1
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vCastTargets; // 0xc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_PsychicLift : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Tokamak_HeatSinks_DOT : public CCitadel_Modifier_Burning
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_InFountain : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa70
// Has VTable
// 
// MNetworkVarNames "float m_flInnerAngle"
// MNetworkVarNames "float m_flOuterAngle"
// MNetworkVarNames "bool m_bShowLight"
class C_OmniLight : public C_BarnLight
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flInnerAngle; // 0xa60	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	float m_flOuterAngle; // 0xa64	
	// MNetworkEnable
	// MNetworkChangeCallback "RenderingChanged"
	bool m_bShowLight; // 0xa68	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierSlorkAmbushVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAmbushEffect; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2e0
// Has VTable
class CCitadel_Modifier_Slork_Invis : public CCitadel_Modifier_Invis
{
private:
	[[maybe_unused]] uint8_t __pad0268[0x70]; // 0x268
public:
	bool m_bHasGoneFullyInvis; // 0x2d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Cadence_Crescendo_PostAOE : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_ChargedTackleActive : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCitadel_Modifier_MobileResupply : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x58]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RescueBeamVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
// 
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iMaxHealth"
class C_NPC_HornetDrone : public C_AI_CitadelNPC
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x270
// Has VTable
class CModifier_Mirage_SandPhantom : public CCitadelModifier
{
public:
	ParticleIndex_t m_particleStart; // 0xc0	
	ParticleIndex_t m_particleEnd; // 0xc4	
	ParticleIndex_t m_particleTrail; // 0xc8	
	Vector m_vecStartPosition; // 0xcc	
	float m_flStartDelay; // 0xd8	
	Vector m_vecApplyOffset; // 0xdc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
class CModifier_Synth_Grasp_Victim : public CCitadelModifier
{
public:
	Vector m_vecOrigin; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_Cadence_Lullaby : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_GangActivity : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x608
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Base_BuildupVData : public CCitadelModifierVData
{
public:
	bool m_bUseBaseWeaponCycleTimeForDelay; // 0x5f0	
private:
	[[maybe_unused]] uint8_t __pad05f1[0x3]; // 0x5f1
public:
	float m_flCycleTimeDelayAdd; // 0x5f4	
	float m_flBuildUpDecayDelay; // 0x5f8	
	BuildupMode_t m_eBuildupMode; // 0x5fc	
	// MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
	bool m_bBuildupAffectedByEffectiveness; // 0x600	
	// MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
	bool m_bPassBuildupEffectivenessToFillModifier; // 0x601	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1508
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShieldedSentry_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_InnateModifier; // 0x14e0	
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x14f0	
	// MPropertyStartGroup "Gameplay"
	float m_flDamageFalloffEndScale; // 0x1500	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Hornet_Snipe : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_SuperNeutralIncendiary : public CCitadelBaseAbilityServerOnly
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CScaleFunctionAbilityPropertySingleStatVData : public CScaleFunctionVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Thumper_2_AuraVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ItemWalkBackVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Gameplay"
	float m_flStopDistance; // 0x5f0	
	float m_flMaxSpeedDistance; // 0x5f4	
	float m_flSlowSpeed; // 0x5f8	
	float m_flFastSpeed; // 0x5fc	
	float m_flVerticalOffset; // 0x600	
	float m_flTolerance; // 0x604	
	float m_flRepathTime; // 0x608	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd98
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CAbility_Synth_PlasmaFlux : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x8]; // 0xc28
public:
	bool m_bTeleported; // 0xc30	
private:
	[[maybe_unused]] uint8_t __pad0c31[0x3]; // 0xc31
public:
	GameTime_t m_flProjectileLaunchTime; // 0xc34	
	GameTime_t m_flProjectileExpireTime; // 0xc38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_hActiveProjectile; // 0xc3c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1530
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShivWeapon_VData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "+Gun Properties"
	float m_flPushForce; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x28]; // 0xc0
public:
	GameTime_t m_GameTimeEnabled; // 0xe8	
	GameTime_t m_LastCatInAreaTime; // 0xec	
	CHandle< C_Citadel_Nano_Predatory_Statue > m_hStatue; // 0xf0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Guiding_ArrowVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GlowEnemeyModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_DeathTax : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Low_Health_GlowVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GlowParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_ParriedStun : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_HunterAuraTarget : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	float m_flDebuffScale; // 0x168	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_CQC_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_SlowImmunityVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Discord_Friendly : public CCitadelModifier
{
public:
	float m_flHealPerSecond; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierObscuredVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	float m_flHideDuration; // 0x5f0	
	float m_flRevealDuration; // 0x5f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x640
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HeldItemPickupAuraVData : public CCitadelModifierAuraVData
{
public:
	CSubclassName< 4 > m_strFilterAbilityName; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_ArmorUpgrade_DamageRecycler : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTargetdummy2VData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Wrecker_Ultimate : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BulletArmorShredder_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_Obscured : public CCitadelModifier
{
public:
	float m_flStartObscuredAmount; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x4]; // 0xc4
public:
	CUtlVectorFixedGrowable< ParticleIndex_t, 3 > m_AmbientParticles; // 0xc8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_ItemPickupAura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x188
// Has VTable
class CCitadel_Modifier_Thumper_PullAOE : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Item_Camouflage : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperBossVData : public CAI_NPC_TrooperVData
{
public:
	bool m_bMitigateDamageFromPlayers; // 0x14e0	
	bool m_bBarracksGuardian; // 0x14e1	
private:
	[[maybe_unused]] uint8_t __pad14e2[0x2]; // 0x14e2
public:
	float m_flPlayerAutoAttackRange; // 0x14e4	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorBulletResistModifier; // 0x14f8	
	CEmbeddedSubclass< CCitadelModifier > m_ObjectiveRegen; // 0x1508	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sAngryStart; // 0x1518	
	CSoundEventName m_sAngryLoop; // 0x1528	
	CSoundEventName m_sAngryStop; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "attrib_definition_index_t m_iAttributeDefinitionIndex"
// MNetworkVarNames "float m_flValue"
class C_EconItemAttribute
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	attrib_definition_index_t m_iAttributeDefinitionIndex; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; // 0x34	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakRadianceVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RadianceModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifier_CatTargetVData : public CCitadelModifierVData
{
public:
	float m_flBaseCatScale; // 0x5f0	
	float m_flMinPitch; // 0x5f4	
	float m_flMaxPitch; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatPuffParticle; // 0x600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatGlowParticle; // 0x6e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTurnIntoCatSound; // 0x7c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc30
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CCitadel_Ability_Perched_Predator : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_hActiveProjectile; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "int32 m_nModelID"
// MNetworkVarNames "Vector2D m_vecPanelSize"
// MNetworkVarNames "Vector m_vecPanelVertices"
// MNetworkVarNames "float m_flThickness"
// MNetworkVarNames "CUtlStringToken m_SurfacePropStringToken"
struct ice_path_shard_model_desc_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	int32_t m_nModelID; // 0x8	
	// MNetworkEnable
	Vector2D m_vecPanelSize; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector > m_vecPanelVertices; // 0x18	
	// MNetworkEnable
	float m_flThickness; // 0x30	
	// MNetworkEnable
	CUtlStringToken m_SurfacePropStringToken; // 0x34	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Root : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float32 m_duration"
// MNetworkVarNames "float32 m_timestamp"
// MNetworkVarNames "float32 m_timescale"
class EngineCountdownTimer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	float m_duration; // 0x8	
	// MNetworkEnable
	float m_timestamp; // 0xc	
	// MNetworkEnable
	float m_timescale; // 0x10	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_Projectile_Synth_Barrage : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x150
// Has VTable
class CCitadel_Modifier_TenguLaserGroundAura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x128
// Has VTable
class CCitadel_Modifier_Bull_Heal_Aura : public CCitadelModifierAura_Cone
{
public:
	QAngle m_playerAngles; // 0xe0	
	ParticleIndex_t m_ConeParticle; // 0xec	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_Slork_Scald : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CCitadel_Ability_WreckerScrapBlast : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityMeleeParryVData : public CitadelAbilityVData
{
public:
	float m_flWhiffDuration; // 0x14e0	
	float m_flMovementRestrictionTime; // 0x14e4	
	float m_flActiveTime; // 0x14e8	
	float m_flParryEndVisualTime; // 0x14ec	
	float m_flSuccessActiveTime; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad14f4[0x4]; // 0x14f4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x14f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSuccessfulParrySound; // 0x15d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryActiveModifier; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x15f8	
	CEmbeddedSubclass< CCitadelModifier > m_ParryCooldownModifier; // 0x1608	
	CEmbeddedSubclass< CCitadelModifier > m_ParryEndVisualModifier; // 0x1618	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaa8
// Has VTable
// 
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkVarNames "int m_nHitIndex"
class C_Citadel_BreakableProp : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	int32_t m_nHitIndex; // 0xa70	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe88
// Has VTable
// 
// MNetworkVarNames "bool m_bShadowFormCast"
// MNetworkVarNames "Vector m_vecCastStartPos"
// MNetworkVarNames "Vector m_vecDashStartPos"
// MNetworkVarNames "Vector m_vecDashEndPos"
// MNetworkVarNames "QAngle m_angDashStartAng"
// MNetworkVarNames "GameTime_t m_flDashStartTime"
// MNetworkVarNames "GameTime_t m_flEndAttackTime"
// MNetworkVarNames "GameTime_t m_flGrappleStartTime"
// MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
// MNetworkVarNames "EHANDLE m_hTarget"
// MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
// MNetworkVarNames "Vector m_rgTargetPos"
// MNetworkVarNames "GameTime_t m_rgTargetPosTime"
class CCitadel_Ability_FlyingStrike : public CCitadelBaseYamatoAbility
{
public:
	SatVolumeIndex_t m_desatVolIdx; // 0xc30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bShadowFormCast; // 0xc34	
private:
	[[maybe_unused]] uint8_t __pad0c35[0x3]; // 0xc35
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCastStartPos; // 0xc38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecDashStartPos; // 0xc44	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecDashEndPos; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	QAngle m_angDashStartAng; // 0xc5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashStartTime; // 0xc68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flEndAttackTime; // 0xc6c	
	// MNetworkEnable
	GameTime_t m_flGrappleStartTime; // 0xc70	
	// MNetworkEnable
	GameTime_t m_flGrappleArriveTime; // 0xc74	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xc78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flGrappleShotAttackTime; // 0xc7c	
	float m_flVelSpring; // 0xc80	
	int32_t m_nTicksNotMoving; // 0xc84	
	Vector m_vecPrevPos; // 0xc88	
private:
	[[maybe_unused]] uint8_t __pad0c94[0x4]; // 0xc94
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	// MNetworkEncoder "coord"
	Vector m_rgTargetPos[20]; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_rgTargetPosTime[20]; // 0xd88	
private:
	[[maybe_unused]] uint8_t __pad0dd8[0xa8]; // 0xdd8
public:
	ParticleIndex_t m_nGrappleTravelEffect; // 0xe80	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_ShivDash : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TargetPracticeSelfVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWeaponShootSound; // 0x6d0	
	CSoundEventName m_strBulletWhizSound; // 0x6e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_SleepAOEVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_Slork_Raging_Current : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	bool m_bUnitTarget; // 0x168	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_EtherealBullets_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TriggerParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletBurstTimerParticle; // 0x7b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBulletSound; // 0x890	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Cadence_Crescendo_InAOE : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe28
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
class CCitadel_Ability_Shiv_Blood_Rage : public CCitadelBaseShivAbility
{
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Astro_ShotgunBuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Bull_Heal_TargetVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NapalmProjectileVData : public CCitadel_Modifier_Intrinsic_BaseVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_WeaponEaterVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WeaponEaterTracker; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ChainLightningEffect : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemAOERootVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x1528	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strRootTargetSound; // 0x1608	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // 0x1618	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1648
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_Disarm_VData : public CCitadel_Item_TrackingProjectileApplyModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1628	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1638	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x190
// Has VTable
class CModifier_Mirage_SunfireCataclysm_Vacuum : public CCitadelModifier
{
public:
	Vector m_vStart; // 0xc0	
	Vector m_vDest; // 0xcc	
	Vector m_vCenter; // 0xd8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Rutger_CheatDeath_Activated_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActivatedParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca0
// Has VTable
class CCitadel_Ability_ShivDagger : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x70]; // 0xc28
public:
	bool m_bDaggerIsEmpowered; // 0xc98	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ReturnFireVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpiritReflectTracerReplacement; // 0x7b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAttackerHitSound; // 0x890	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
class C_BaseFlex::Emphasized_Phoneme
{
public:
	CUtlString m_sClassName; // 0x0	
	float m_flAmount; // 0x18	
	bool m_bRequired; // 0x1c	
	bool m_bBasechecked; // 0x1d	
	bool m_bValid; // 0x1e	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x228
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "float m_flValues"
// MNetworkVarNames "int m_nValueCounts"
// MNetworkVarNames "int m_nBucketCount"
// MNetworkVarNames "float m_flInterval"
// MNetworkVarNames "float m_flFinalValue"
// MNetworkVarNames "TimelineCompression_t m_nCompressionType"
// MNetworkVarNames "bool m_bStopped"
class CTimeline : public IntervalTimer
{
public:
	// MNetworkEnable
	float m_flValues[64]; // 0x10	
	// MNetworkEnable
	int32_t m_nValueCounts[64]; // 0x110	
	// MNetworkEnable
	int32_t m_nBucketCount; // 0x210	
	// MNetworkEnable
	float m_flInterval; // 0x214	
	// MNetworkEnable
	float m_flFinalValue; // 0x218	
	// MNetworkEnable
	TimelineCompression_t m_nCompressionType; // 0x21c	
	// MNetworkEnable
	bool m_bStopped; // 0x220	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_Citadel_Projectile_SettingSun : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x990
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BubbleVData : public CCitadel_Modifier_SilencedVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x890	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_ExplodeSound; // 0x970	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x980	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x330
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_FieldSentryVData : public CNPC_SimpleAnimatingAIVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // 0x108	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillExplosionParticle; // 0x1e8	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DeployProgressModifier; // 0x2c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sSpawnSound; // 0x2d8	
	CSoundEventName m_sKillExplosionSound; // 0x2e8	
	CSoundEventName m_sTargetAcquiredLocalSound; // 0x2f8	
	CSoundEventName m_sTargetAcquiredSound; // 0x308	
	// MPropertyStartGroup "Stats"
	float m_flIdleTurnSpeed; // 0x318	
	float m_flIdleTurnAngles; // 0x31c	
	float m_flTrooperTakeDamageMult; // 0x320	
	float m_flNeutralTakeDamageMulti; // 0x324	
	float m_flNotifyEventTime; // 0x328	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierTenguLightningCrashFlyVDATA : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x6d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BulletShieldModifier; // 0x6e0	
	CEmbeddedSubclass< CCitadelModifier > m_TechShieldModifier; // 0x6f0	
	CEmbeddedSubclass< CCitadelModifier > m_RegenerationModifier; // 0x700	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_HookSelf : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_VoidSphereVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BubbleModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strCastEffect; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAllyPositionPreview; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ExplosiveShots : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Upgrade_AerialAssault : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MNetworkVarNames "Vector m_vecLadderDir"
// MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
// MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
// MNetworkVarNames "float m_flAutoRideSpeed"
// MNetworkVarNames "bool m_bFakeLadder"
class C_FuncLadder : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecLadderDir; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad081c[0x4]; // 0x81c
public:
	CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0x820	
	Vector m_vecLocalTop; // 0x838	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0x844	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0x850	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x85c	
	bool m_bDisabled; // 0x860	
	// MNetworkEnable
	bool m_bFakeLadder; // 0x861	
	bool m_bHasSlack; // 0x862	
	
	// Static fields:
	static CUtlVector< C_FuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< C_FuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->m_static_fields[0]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Synth_Affliction_Debuff_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EffectParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Synth_PlasmaFlux_WeaponDamage : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_SilenceContraptionsVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_TangoTether_Tether : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x38]; // 0xc0
public:
	float m_fHealingSoundBuildup; // 0xf8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_MeleeCharge : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Fervor_Bonuses_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BonusesParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ActivateBonusesSound; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SilencerProcActiveVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x620	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SilencerActiveParticle; // 0x700	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceActiveModifier; // 0x7e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class C_SoundOpvarSetAABBEntity : public C_SoundOpvarSetPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BasePlayerWeapon > m_hMyWeapons"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hActiveWeapon"
// MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hLastWeapon"
// MNetworkVarNames "uint16 m_iAmmo"
class CPlayer_WeaponServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > > m_hMyWeapons; // 0x40	
	// MNetworkEnable
	CHandle< C_BasePlayerWeapon > m_hActiveWeapon; // 0x58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle< C_BasePlayerWeapon > m_hLastWeapon; // 0x5c	
	// MNetworkEnable
	uint16_t m_iAmmo[32]; // 0x60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct CAttributeManager__cached_attribute_float_t
{
public:
	float flIn; // 0x0	
	CUtlSymbolLarge iAttribHook; // 0x8	
	float flOut; // 0x10	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x250
// Has VTable
class CCitadel_Modifier_Bolo : public CCitadelModifier
{
public:
	ParticleIndex_t m_hRingEffect; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierDustStormAuraApplyVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_BulletFlurryWindup : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa80
// Has VTable
class C_Citadel_RestorativeGooCube : public CCitadelAnimatingModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_TargetPracticeDebuff : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x20]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
// Has VTable
class CCitadel_Modifier_Chrono_PulseGrenade_PulseArea : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x90]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Wraith_ProjectMind_Shield : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_FlameDashBurn : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLineBoost_VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ZipboostModifier; // 0x14e0	
	// MPropertyGroupName "Gameplay"
	float m_flTimeToActivate; // 0x14f0	
	float m_flTimeForHint; // 0x14f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe38
// Has VTable
// 
// MNetworkVarNames "bool m_bPreparing"
// MNetworkVarNames "bool m_bTackling"
// MNetworkVarNames "GameTime_t m_flTackleStartTime"
// MNetworkVarNames "float m_flTackleDuration"
// MNetworkVarNames "Vector m_vecTackleDir"
class CCitadel_Ability_SuperNeutralCharge : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x1c0]; // 0xc28
public:
	// MNetworkEnable
	bool m_bPreparing; // 0xde8	
	// MNetworkEnable
	bool m_bTackling; // 0xde9	
private:
	[[maybe_unused]] uint8_t __pad0dea[0x2]; // 0xdea
public:
	// MNetworkEnable
	GameTime_t m_flTackleStartTime; // 0xdec	
	// MNetworkEnable
	float m_flTackleDuration; // 0xdf0	
	// MNetworkEnable
	Vector m_vecTackleDir; // 0xdf4	
	Vector m_vecLastPosition; // 0xe00	
	int32_t m_nStuckFramesCount; // 0xe0c	
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xe10	
	GameTime_t m_flPrepareStartTime; // 0xe28	
	ParticleIndex_t m_nDistancePreview; // 0xe2c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MNetworkVarNames "CEntityIndex m_nEntIndex"
// MNetworkVarNames "int8 m_nTeam"
// MNetworkVarNames "uint16 m_nPositionXY"
class STrooperFOWEntity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	CEntityIndex m_nEntIndex; // 0x30	
	// MNetworkEnable
	int8_t m_nTeam; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x1]; // 0x35
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "OnFieldXYChanged"
	uint16_t m_nPositionXY; // 0x36	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc00
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "bool m_bAwake"
class C_PhysicsProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bAwake; // 0xbf8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_HeldItemPickupAura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc48
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flEndTime"
class CCitadel_Item_Bubble : public CCitadel_Item
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flEndTime; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d8
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "float m_flScattering"
// MNetworkVarNames "float m_flAnisotropy"
// MNetworkVarNames "float m_flFadeSpeed"
// MNetworkVarNames "float m_flDrawDistance"
// MNetworkVarNames "float m_flFadeInStart"
// MNetworkVarNames "float m_flFadeInEnd"
// MNetworkVarNames "float m_flIndirectStrength"
// MNetworkVarNames "int m_nVolumeDepth"
// MNetworkVarNames "float m_fFirstVolumeSliceThickness"
// MNetworkVarNames "int m_nIndirectTextureDimX"
// MNetworkVarNames "int m_nIndirectTextureDimY"
// MNetworkVarNames "int m_nIndirectTextureDimZ"
// MNetworkVarNames "Vector m_vBoxMins"
// MNetworkVarNames "Vector m_vBoxMaxs"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartAnisoTime"
// MNetworkVarNames "GameTime_t m_flStartScatterTime"
// MNetworkVarNames "GameTime_t m_flStartDrawDistanceTime"
// MNetworkVarNames "float m_flStartAnisotropy"
// MNetworkVarNames "float m_flStartScattering"
// MNetworkVarNames "float m_flStartDrawDistance"
// MNetworkVarNames "float m_flDefaultAnisotropy"
// MNetworkVarNames "float m_flDefaultScattering"
// MNetworkVarNames "float m_flDefaultDrawDistance"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bEnableIndirect"
// MNetworkVarNames "bool m_bIndirectUseLPVs"
// MNetworkVarNames "bool m_bIsMaster"
// MNetworkVarNames "HRenderTextureStrong m_hFogIndirectTexture"
// MNetworkVarNames "int m_nForceRefreshCount"
// MNetworkVarNames "float m_fNoiseSpeed"
// MNetworkVarNames "float m_fNoiseStrength"
// MNetworkVarNames "Vector m_vNoiseScale"
class C_EnvVolumetricFogController : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flScattering; // 0x538	
	// MNetworkEnable
	float m_flAnisotropy; // 0x53c	
	// MNetworkEnable
	float m_flFadeSpeed; // 0x540	
	// MNetworkEnable
	float m_flDrawDistance; // 0x544	
	// MNetworkEnable
	float m_flFadeInStart; // 0x548	
	// MNetworkEnable
	float m_flFadeInEnd; // 0x54c	
	// MNetworkEnable
	float m_flIndirectStrength; // 0x550	
	// MNetworkEnable
	int32_t m_nVolumeDepth; // 0x554	
	// MNetworkEnable
	float m_fFirstVolumeSliceThickness; // 0x558	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimX; // 0x55c	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimY; // 0x560	
	// MNetworkEnable
	int32_t m_nIndirectTextureDimZ; // 0x564	
	// MNetworkEnable
	Vector m_vBoxMins; // 0x568	
	// MNetworkEnable
	Vector m_vBoxMaxs; // 0x574	
	// MNetworkEnable
	bool m_bActive; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0581[0x3]; // 0x581
public:
	// MNetworkEnable
	GameTime_t m_flStartAnisoTime; // 0x584	
	// MNetworkEnable
	GameTime_t m_flStartScatterTime; // 0x588	
	// MNetworkEnable
	GameTime_t m_flStartDrawDistanceTime; // 0x58c	
	// MNetworkEnable
	float m_flStartAnisotropy; // 0x590	
	// MNetworkEnable
	float m_flStartScattering; // 0x594	
	// MNetworkEnable
	float m_flStartDrawDistance; // 0x598	
	// MNetworkEnable
	float m_flDefaultAnisotropy; // 0x59c	
	// MNetworkEnable
	float m_flDefaultScattering; // 0x5a0	
	// MNetworkEnable
	float m_flDefaultDrawDistance; // 0x5a4	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x5a8	
	// MNetworkEnable
	bool m_bEnableIndirect; // 0x5a9	
	// MNetworkEnable
	bool m_bIndirectUseLPVs; // 0x5aa	
	// MNetworkEnable
	bool m_bIsMaster; // 0x5ab	
private:
	[[maybe_unused]] uint8_t __pad05ac[0x4]; // 0x5ac
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogIndirectTexture; // 0x5b0	
	// MNetworkEnable
	int32_t m_nForceRefreshCount; // 0x5b8	
	// MNetworkEnable
	float m_fNoiseSpeed; // 0x5bc	
	// MNetworkEnable
	float m_fNoiseStrength; // 0x5c0	
	// MNetworkEnable
	Vector m_vNoiseScale; // 0x5c4	
	bool m_bFirstTime; // 0x5d0	
	
	// Datamap fields:
	// void InputSetToDefaults; // 0x0
	// float InputSetScattering; // 0x0
	// float InputSetAnisotropy; // 0x0
	// float InputSetFadeSpeed; // 0x0
	// float InputSetDrawDistance; // 0x0
	// bool EnableIndirect; // 0x0
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// void ForceRefresh; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc68
// Has VTable
// 
// MNetworkVarNames "bool m_bHoldingBall"
class CCitadel_Ability_WreckingBall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x38]; // 0xc28
public:
	// MNetworkEnable
	bool m_bHoldingBall; // 0xc60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
// Is Abstract
class CCitadel_Ability_PrimaryWeapon_BeamWeapon : public CCitadel_Ability_PrimaryWeapon
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ArcaneEaterProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StealWatcherModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_SuperNeutralChargePrepare : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Galvanic_Storm_VData : public CCitadel_Modifier_ChainLightningVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TechShieldModifier; // 0x800	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_Citadel_Projectile_WreckingBall : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierTangoTetherTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GrappleRopeParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_CatBullet : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Tokamak_AllySmokeAOE_VData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Item_ActiveReload : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierTier3BossInvulnVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x5f0	
	float m_flShieldRadius; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CModifier_Mirage_Tornado_EnemyInAir : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe90
// Has VTable
class CAbility_Rutger_RocketLauncher : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ChargedTacklePrepare : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_QuickSilverBuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RapidFireParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CScaleFunctionAbilityPropertyBase : public CScaleFunctionBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MNetworkVarNames "QAngle m_angTargetCamera"
// MNetworkVarNames "Vector m_vTargetCameraPos"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOverrideObserverTarget"
// MNetworkVarNames "ObserverMode_t m_iOverrideObserverMode"
// MNetworkVarNames "int32 m_iSecondsAfterDeathToAllowObserving"
class CCitadelPlayer_ObserverServices : public CPlayer_ObserverServices
{
public:
	int32_t m_nLastLocalPlayerObservedTeam; // 0x58	
	int32_t m_nLastObservedTeam; // 0x5c	
	int32_t m_nCurrentObservedTeam; // 0x60	
	CHandle< C_BaseEntity > m_hLastObserverTarget; // 0x64	
	CHandle< C_BaseEntity > m_hPreviousTeamTarget; // 0x68	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angTargetCamera; // 0x6c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	Vector m_vTargetCameraPos; // 0x78	
	// MNetworkEnable
	// MNetworkChangeCallback "LocalPlayerExclusive"
	CHandle< C_BaseEntity > m_hOverrideObserverTarget; // 0x84	
	// MNetworkEnable
	// MNetworkChangeCallback "LocalPlayerExclusive"
	ObserverMode_t m_iOverrideObserverMode; // 0x88	
	// MNetworkEnable
	int32_t m_iSecondsAfterDeathToAllowObserving; // 0x8c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xac0
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flStartTimeInCommentary"
// MNetworkVarNames "string_t m_iszCommentaryFile"
// MNetworkVarNames "string_t m_iszTitle"
// MNetworkVarNames "string_t m_iszSpeakers"
// MNetworkVarNames "int m_iNodeNumber"
// MNetworkVarNames "int m_iNodeNumberMax"
// MNetworkVarNames "bool m_bListenedTo"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hViewPosition"
class C_PointCommentaryNode : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a70[0x8]; // 0xa70
public:
	// MNetworkEnable
	bool m_bActive; // 0xa78	
	bool m_bWasActive; // 0xa79	
private:
	[[maybe_unused]] uint8_t __pad0a7a[0x2]; // 0xa7a
public:
	GameTime_t m_flEndTime; // 0xa7c	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xa80	
	// MNetworkEnable
	float m_flStartTimeInCommentary; // 0xa84	
	// MNetworkEnable
	CUtlSymbolLarge m_iszCommentaryFile; // 0xa88	
	// MNetworkEnable
	CUtlSymbolLarge m_iszTitle; // 0xa90	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSpeakers; // 0xa98	
	// MNetworkEnable
	int32_t m_iNodeNumber; // 0xaa0	
	// MNetworkEnable
	int32_t m_iNodeNumberMax; // 0xaa4	
	// MNetworkEnable
	bool m_bListenedTo; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aa9[0xf]; // 0xaa9
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewPosition; // 0xab8	
	bool m_bRestartAfterRestore; // 0xabc	
	
	// Datamap fields:
	// void m_sndCommentary; // 0xab0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Cadence_AnthemBuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2e8
// Has VTable
class CCitadel_Modifier_StormCloud : public CCitadelModifier
{
public:
	GameTime_t m_flNextRandomLightningStrike; // 0xc0	
	GameTime_t m_flStartTime; // 0xc4	
	float m_flRadiusIncrementPerSecond; // 0xc8	
	Vector m_vCastPosition; // 0xcc	
	bool m_bFiredEndingSoonSound; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00d9[0x3]; // 0xd9
public:
	int32_t m_nLastTickForLightningCenterCalc; // 0xdc	
	Vector m_vecLightningCenter; // 0xe0	
	SatVolumeIndex_t m_nSatVolumeIndex; // 0xec	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_LightningBallVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetScreenParticleEffect; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Afterburn_DOT : public CCitadel_Modifier_Burning
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_IncendiaryProjectile : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_DisarmProc : public CCitadel_Modifier_Disarmed
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_Thumper_2 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_GangActivity_AbilitySwap : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_UltCombo_Self : public CCitadelModifier
{
public:
	QAngle m_angles; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_PoisonBullet_PoisonBuildup : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Upgrade_ArcaneMedallion_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TriggeredModifier; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe20
// Has VTable
// 
// MNetworkVarNames "float m_flDashAngle"
// MNetworkVarNames "int m_nLastGroundDashTick"
// MNetworkVarNames "GameTime_t m_flGroundDashCastTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashEndTime"
// MNetworkVarNames "GameTime_t m_flAirDashCastTime"
// MNetworkVarNames "GameTime_t m_flAirDashDragStartTime"
// MNetworkVarNames "int8 m_nConsecutiveAirDashes"
// MNetworkVarNames "int8 m_nConsecutiveDownDashes"
// MNetworkVarNames "bool m_bDownAirDash"
class CCitadel_Ability_Dash : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flDashAngle; // 0xc28	
	GameTime_t m_GroundDashExecuteTime; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nLastGroundDashTick; // 0xc30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flGroundDashCastTime; // 0xc34	
	bool m_bTagCanActivateGroundDash; // 0xc38	
private:
	[[maybe_unused]] uint8_t __pad0c39[0x7]; // 0xc39
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xc40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAirDashCastTime; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAirDashDragStartTime; // 0xc5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveAirDashes; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveDownDashes; // 0xc61	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bDownAirDash; // 0xc62	
private:
	[[maybe_unused]] uint8_t __pad0c63[0x1b5]; // 0xc63
public:
	CHandle< CCitadel_Ability_Jump > m_hJumpAbility; // 0xe18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Tech_Shield : public CCitadel_Modifier_Bullet_Shield
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x12e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier2VData : public CAI_CitadelNPCVData
{
public:
	float m_flPlayerInitialSightRange; // 0xe18	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0x4]; // 0xe1c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0xe20	
	// MPropertyStartGroup "Weak Points"
	CUtlVector< WeakPointParams_t > m_vecWeakPoints; // 0xf00	
	// MPropertyStartGroup "Electric Beam (Laser)"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamChargingEffect; // 0xf18	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamPreviewEffect; // 0xff8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamActiveEffect; // 0x10d8	
	// MPropertyStartGroup "Stomp"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactEffect; // 0x11b8	
	float m_flTossSpeed; // 0x1298	
	float m_flStompDamage; // 0x129c	
	float m_flStompTossUpMagnitude; // 0x12a0	
	float m_flStunDuration; // 0x12a4	
	float m_flStompImpactRadius; // 0x12a8	
	float m_flStompImpactHeight; // 0x12ac	
	float m_flSweepRadius; // 0x12b0	
	float m_flSweepSpeed; // 0x12b4	
	float m_flSweepZScale; // 0x12b8	
	float m_flSweepMaxAngle; // 0x12bc	
	float m_flSweepMaxRange; // 0x12c0	
	float m_flSweepAdjustSpeed; // 0x12c4	
	// MPropertyStartGroup "Gun"
	float m_flBurstDuration; // 0x12c8	
	float m_flBurstCooldown; // 0x12cc	
	// MPropertyDescription "Backdoor Protection Modifier"
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x12d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x230
// Has VTable
// 
// MNetworkVarNames "GameTick_t m_nPunchAngleJoltTick"
// MNetworkVarNames "fogplayerparams_t m_PlayerFog"
// MNetworkVarNames "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
// MNetworkVarNames "CHandle< CBaseEntity> m_hViewEntity"
// MNetworkVarNames "CHandle< CTonemapController2> m_hTonemapController"
// MNetworkVarNames "audioparams_t m_audio"
// MNetworkVarNames "CHandle<C_PostProcessingVolume> m_PostProcessingVolumes"
class CPlayer_CameraServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkEncoder "qangle_precise"
	// MNetworkChangeCallback "OnPunchChanged"
	QAngle m_vecPunchAngle; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad004c[0xc]; // 0x4c
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	QAngle m_vecPunchAngleVel; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0064[0xc]; // 0x64
public:
	GameTick_t m_nPunchAngleJoltTickClientSide; // 0x70	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPunchJoltChanged"
	GameTick_t m_nPunchAngleJoltTick; // 0x74	
	// MNetworkEnable
	C_fogplayerparams_t m_PlayerFog; // 0x78	
	// MNetworkEnable
	CHandle< C_ColorCorrection > m_hColorCorrectionCtrl; // 0xb8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hViewEntity; // 0xbc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle< C_TonemapController2 > m_hTonemapController; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x4]; // 0xc4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	// -> localSound[8] - 0xd0
	// -> soundscapeIndex - 0x130
	// -> localBits - 0x134
	// -> soundscapeEntityListIndex - 0x138
	// -> soundEventHash - 0x13c
	audioparams_t m_audio; // 0xc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > > m_PostProcessingVolumes; // 0x140	
	float m_flOldPlayerZ; // 0x158	
	float m_flOldPlayerViewOffsetZ; // 0x15c	
	fogparams_t m_CurrentFog; // 0x160	
	CHandle< C_FogController > m_hOldFogController; // 0x1c8	
	bool m_bOverrideFogColor[5]; // 0x1cc	
	Color m_OverrideFogColor[5]; // 0x1d1	
	bool m_bOverrideFogStartEnd[5]; // 0x1e5	
private:
	[[maybe_unused]] uint8_t __pad01ea[0x2]; // 0x1ea
public:
	float m_fOverrideFogStart[5]; // 0x1ec	
	float m_fOverrideFogEnd[5]; // 0x200	
	CHandle< C_PostProcessingVolume > m_hActivePostProcessingVolume; // 0x214	
	QAngle m_angDemoViewAngles; // 0x218	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Item_BaseProjectileAOEModifier : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd68
// Has VTable
class CCitadel_Ability_HealingSlash : public CCitadelBaseYamatoAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_DebugIsVisibleToEnemyTeam : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
class C_NPC_MortarSentry : public C_AI_CitadelNPC
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
class C_NPC_SurveillanceDrone : public C_NPC_FlyingDrone
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc80
// Has VTable
class CCitadel_Item_DivinersKevlar : public CCitadel_Item
{
public:
	bool m_bExecuted; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CModifier_Synth_Pulse_Escape : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Rutger_RocketLauncher_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // 0x15c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x250
// Has VTable
class CCitadel_Modifier_Radiance : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xd0]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_TeleportToGangster : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
class CCitadel_Ability_ShivWeapon : public CCitadel_Ability_PrimaryWeapon
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PsychicDaggerVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_MakeDaggersModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPowerJumpVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatParticle; // 0x5f0	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x6d0	
	float m_flVerticalCameraOffset; // 0x6d4	
	float m_flVerticalCameraOffsetLerpTime; // 0x6d8	
	float m_flVerticalCameraOffsetBias; // 0x6dc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea8
// Has VTable
// 
// MNetworkVarNames "QAngle m_anglesCharging"
// MNetworkVarNames "GameTime_t m_flChargeStartTime"
// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
class CCitadel_Ability_Bull_Charge : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x268]; // 0xc28
public:
	// MNetworkEnable
	QAngle m_anglesCharging; // 0xe90	
	// MNetworkEnable
	// MNetworkChangeCallback "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime; // 0xe9c	
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime; // 0xea0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
class CCitadel_Ability_PrimaryWeapon_Empty : public CCitadel_Ability_PrimaryWeapon
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1810
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySlideVData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "The minimum angle we consider to be a slope.  Less than this we will consider flat ground."
	float m_flMinAngleToConsiderASlope; // 0x14e0	
	// MPropertyDescription "The maximum speed we will apply acceleration up to when sliding on the steepest slope."
	float m_flSlideMaxSlopeMaxAccSpeed; // 0x14e4	
	// MPropertyDescription "The maximum speed we will apply acceleration up to when sliding on the shallowest slope."
	float m_flSlideMinSlopeMaxAccSpeed; // 0x14e8	
	// MPropertyDescription "When checking for a drop-slide, how long ago can the activate button have been pressed."
	float m_flButtonPressWindow; // 0x14ec	
	// MPropertyDescription "When fast you can turn while sliding."
	float m_flTurnSpeed; // 0x14f0	
	// MPropertyDescription "Amount of acceleration to apply on the shallowest slope"
	float m_flSlideMinSlopeAcceleration; // 0x14f4	
	// MPropertyDescription "Amount of acceleration to apply on the steepest slope"
	float m_flSlideMaxSlopeAcceleration; // 0x14f8	
	// MPropertyDescription "When pressing forward, how far to the side you need to look to start turning in that direction."
	float m_flTurnMinAngDiff; // 0x14fc	
	// MPropertyDescription "When pressing forward, how far to the side you need to look to apply maximum turning."
	float m_flTurnMaxAngDiff; // 0x1500	
	// MPropertyDescription "For how long after landing and starting a slide on flat ground we apply 'Flat Ground Friction Grace' before applying 'Flat Ground Friction'"
	float m_flLandedFlatGroundFrictionGraceTime; // 0x1504	
	// MPropertyDescription "For how long after starting to slide on flat ground we apply 'Flat Ground Friction Grace' before applying 'Flat Ground Friction'"
	float m_flFlatGroundFrictionGraceTime; // 0x1508	
	// MPropertyDescription "The friction the player uses while sliding on flat ground."
	float m_flFrictionFlatGroundGrace; // 0x150c	
	// MPropertyDescription "The friction the player uses while sliding on flat ground."
	float m_flFrictionFlatGround; // 0x1510	
	// MPropertyDescription "The friction the player uses while sliding on our minimum slope."
	float m_flFrictionMinSlope; // 0x1514	
	// MPropertyDescription "The friction the player uses while sliding on our maximum slope."
	float m_flFrictionMaxSlope; // 0x1518	
	// MPropertyDescription "How much friction to apply when trying to slide up our minimum slope."
	float m_flFrictionUphillMinSlope; // 0x151c	
	// MPropertyDescription "How much friction to apply when trying to slide up our maximum slope."
	float m_flFrictionUphillMaxSlope; // 0x1520	
	// MPropertyDescription "When applying the landing speed boost, bias the scale based on slope by this much."
	float m_flLandingSlopeScaleBias; // 0x1524	
	// MPropertyDescription "Minimum speed to trigger a boost when landing and trying to slide."
	float m_flBoostMinTriggerSpeed; // 0x1528	
	// MPropertyDescription "Maximum speed used to determine speed boost when landing and trying to slide."
	float m_flBoostMaxTriggerSpeed; // 0x152c	
	// MPropertyDescription "Minimum speed boost to apply when landing and initiating a slide."
	float m_flBoostMinSpeed; // 0x1530	
	// MPropertyDescription "Maximumm speed boost to apply when landing and initiating a slide."
	float m_flBoostMaxSpeed; // 0x1534	
	// MPropertyDescription "How fast you have to be moving on flat ground to be able to initiate a slide."
	float m_flMinActivationSpeed; // 0x1538	
	// MPropertyDescription "If your slide speed falls below this on flat ground, you will stop sliding."
	float m_flMinSustainSpeed; // 0x153c	
	// MPropertyDescription "The amount of speed boost to apply when running forward and initiating a slide."
	float m_flSprintBoostSpeed; // 0x1540	
	// MPropertyDescription "The time after dashing to start a slide to get the full speed dash slide"
	float m_flDashSlideStartTime; // 0x1544	
	// MPropertyDescription "The speed to start a slide out of a dash."
	float m_flDashSlideSpeed; // 0x1548	
	// MPropertyDescription "The speed to start a slide out of a dash if the timing was incorrect."
	float m_flDashSlideFailSpeed; // 0x154c	
	// MPropertyDescription "Sound for succesfully executing a dash-slide"
	CSoundEventName m_strDashSlideActivate; // 0x1550	
	// MPropertyDescription "How long to apply 'Dash Boost Friction' after starting a slide out of a dash."
	float m_flDashSlideFrictionTime; // 0x1560	
	// MPropertyDescription "The friction to apply after starting a slide out of a dash."
	float m_flDashSlideFriction; // 0x1564	
	// MPropertyDescription "How fast you have to be moving while dashing to initiate a slide.  Mainly to prevent slowed-dash flowing into a weirdly fast slides."
	float m_flDashMinActivationSpeed; // 0x1568	
	// MPropertyDescription "The shallowest slope degree to start applying downhill acceleration."
	float m_flAccMinSlopeDeg; // 0x156c	
	// MPropertyDescription "The angle we consider the most extreme slope for applying downhill acceleration."
	float m_flAccMaxSlopeDeg; // 0x1570	
	// MPropertyDescription "How much of the downhill acceleration to apply at the minimum angle."
	float m_flAccMinSlopeScale; // 0x1574	
	// MPropertyDescription "When sliding, how far forward to look when determining our averaged current slope"
	float m_flSlideProbeForwardOffset; // 0x1578	
	// MPropertyDescription "When running on flat ground and trying to initiate a slide, how far forward to look for a slope that will let's us trigger a slide early."
	float m_flSlideActivationProbeForwardOffset; // 0x157c	
	// MPropertyDescription "Maximum distance between probe samples"
	float m_flMaxDistanceBetweenProbeSamples; // 0x1580	
	// MPropertyDescription "If activating via the lookahead probe's normal, use that normal for this long after activating to help us get over that slope."
	float m_flInitialSlideUseForwardProbeTime; // 0x1584	
	// MPropertyDescription "When trying to determine what slope we're currently only, sample this far around the player"
	float m_flCurrentSlopeSampleDistance; // 0x1588	
	// MPropertyDescription "Ignore slopes whose angle different from our velocity is this many std deviations out when sampling for current slope"
	float m_flSampleVelDiffStdDevScaleCutoff; // 0x158c	
	// MPropertyDescription "If facing further than this angle away from the direction of the slope, dont initiate a slide on it."
	float m_flSlopeFacingAngleToActivate; // 0x1590	
	// MPropertyDescription "Maximum air-drag to apply when jumping out of a slide."
	float m_flAirDragAfterJump; // 0x1594	
	// MPropertyDescription "How long to apply air-drag after jumping out of a slide."
	float m_flAirDragAfterJumpTime; // 0x1598	
	// MPropertyDescription "Air-drag applied when jumping out of a slide linearly ramps from 100% to 0% from 0' to this angle."
	float m_flAirDragMaxAngle; // 0x159c	
	// MPropertyDescription "How long you have to be walking around, not sliding until we clear the air-drag flag on jumps."
	float m_flAirDragResetTime; // 0x15a0	
	// MPropertyDescription "How long after you stop sliding do we consider it to still be a slide-jump."
	float m_flLateSlideJumpWindow; // 0x15a4	
	// MPropertyDescription "Speed remap to slide effect intensity"
	CRemapFloat m_SlideEffectRemap; // 0x15a8	
	// MPropertyDescription "The curve defining the getup anim's speed penalty duration(x) and severity(y)."
	CPiecewiseCurve m_GetupSpeedCurve; // 0x15b8	
	// MPropertyDescription "How long after you stop sliding do we consider it to still be a slide-jump."
	float m_flGetupBusyDuration; // 0x15f8	
private:
	[[maybe_unused]] uint8_t __pad15fc[0x4]; // 0x15fc
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceStartSliding; // 0x1600	
	CitadelCameraOperationsSequence_t m_cameraSequenceEndSliding; // 0x1680	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlideParticle; // 0x1700	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x17e0	
	CSoundEventName m_strLoopingSound; // 0x17f0	
	CSoundEventName m_strStopSound; // 0x1800	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "int m_nMode"
// MNetworkVarNames "Vector m_vBoxSize"
// MNetworkVarNames "bool m_bEnabled"
class C_InfoVisibilityBox : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x4]; // 0x538
public:
	// MNetworkEnable
	int32_t m_nMode; // 0x53c	
	// MNetworkEnable
	Vector m_vBoxSize; // 0x540	
	// MNetworkEnable
	bool m_bEnabled; // 0x54c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Targetdummy_4 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flFlyingStartTime"
// MNetworkVarNames "GameTime_t m_flFlyingEndTime"
// MNetworkVarNames "float m_flDiveStart"
// MNetworkVarNames "float m_flFlyingSpeed"
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bDiving"
class CCitadel_Ability_Tengu_LightningCrash : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnFlyingAnglesChanged"
	QAngle m_angFlyingAngles; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c34[0x278]; // 0xc34
public:
	// MNetworkEnable
	GameTime_t m_flFlyingStartTime; // 0xeac	
	// MNetworkEnable
	GameTime_t m_flFlyingEndTime; // 0xeb0	
	// MNetworkEnable
	float m_flDiveStart; // 0xeb4	
	// MNetworkEnable
	float m_flFlyingSpeed; // 0xeb8	
	// MNetworkEnable
	bool m_bFlying; // 0xebc	
	// MNetworkEnable
	bool m_bDiving; // 0xebd	
private:
	[[maybe_unused]] uint8_t __pad0ebe[0x2]; // 0xebe
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xec0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTargetPracticeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TargetPracticeSelfModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_TargetPracticeEnemyModifier; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Afterburn : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_MetalSkin : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
// Has VTable
class CCitadel_Ability_TrooperBossGrenade : public CCitadel_Ability_TrooperGrenade
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x118
// Has VTable
class CCitadel_Modifier_Cadence_SleepAOE : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13f0
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames "int m_nElectricBeamCasts"
class C_NPC_Boss_Tier2 : public C_AI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad13c0[0x8]; // 0x13c0
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x13c8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnBossTargetedEnemyChanged"
	CHandle< C_BaseEntity > m_hTargetedEnemy; // 0x13cc	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnLookTargetChanged"
	Vector m_vecElectricBeamLookTarget; // 0x13d0	
private:
	[[maybe_unused]] uint8_t __pad13dc[0xc]; // 0x13dc
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnElectricBeamCastsChanged"
	int32_t m_nElectricBeamCasts; // 0x13e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x930
// Has VTable
class C_FireSprite : public C_Sprite
{
public:
	Vector m_vecMoveDir; // 0x920	
	bool m_bFadeFromAbove; // 0x92c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FissureWallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyWallParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyWallParticle; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_WallTravelSoundLoop; // 0x16a0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WallModifier; // 0x16b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_WeaponPowerForHealthVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HollowPoint_ProcVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x5f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParticleModifier; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_DamageOnHitGround : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "AbilityID_t m_SourceItemID"
// MNetworkVarNames "AbilityID_t m_TargetAbilityID"
struct ItemImbuementPair_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	CUtlStringToken m_SourceItemID; // 0x30	
	// MNetworkEnable
	CUtlStringToken m_TargetAbilityID; // 0x34	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb8
// Has VTable
class CCitadel_Upgrade_AmmoScavenger : public CCitadel_Item
{
public:
	CHandle< C_BaseEntity > m_hLastOrbTarget; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTeleportToGangsterVData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
// Has VTable
class CCitadel_Ability_MedicHeal : public CCitadelBaseAbilityServerOnly
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b8
// Has VTable
class CCitadel_Modifier_NapalmProjectile : public CCitadel_Modifier_Intrinsic_Base
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	Vector m_vInitialCastPosition; // 0x1a0	
	float m_flProjectileSpeed; // 0x1ac	
	ParticleIndex_t m_iParticleEffect; // 0x1b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x868
// Has VTable
class C_Precipitation : public C_BaseTrigger
{
public:
	float m_flDensity; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad081c[0xc]; // 0x81c
public:
	float m_flParticleInnerDist; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad082c[0x4]; // 0x82c
public:
	char* m_pParticleDef; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0838[0x20]; // 0x838
public:
	// -> m_TimeBetweenEvents - 0x858
	// -> m_fNextEvent - 0x85c
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x858	
	bool m_bActiveParticlePrecipEmitter[1]; // 0x860	
	bool m_bParticlePrecipInitialized; // 0x861	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x862	
private:
	[[maybe_unused]] uint8_t __pad0863[0x1]; // 0x863
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0x864	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_RegeneratingBulletShieldVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ActiveModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_QuickSilverVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x620	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x360
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_ShieldedSentryVData : public CNPC_SimpleAnimatingAIVData
{
public:
	float m_flZShootPostionOffset; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad010c[0x4]; // 0x10c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // 0x110	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillExplosionParticle; // 0x1f0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DeployProgressModifier; // 0x2d0	
	CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier; // 0x2e0	
	CEmbeddedSubclass< CCitadelModifier > m_IntrinsicModifier; // 0x2f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sSpawnSound; // 0x300	
	CSoundEventName m_sKillExplosionSound; // 0x310	
	CSoundEventName m_sTargetAcquiredLocalSound; // 0x320	
	CSoundEventName m_sTargetAcquiredSound; // 0x330	
	// MPropertyStartGroup "Stats"
	float m_flIdleTurnSpeed; // 0x340	
	float m_flIdleTurnAngles; // 0x344	
	float m_flTrooperTakeDamageMult; // 0x348	
	float m_flNeutralTakeDamageMulti; // 0x34c	
	float m_flNotifyEventTime; // 0x350	
	float m_flNearDeathDuration; // 0x354	
	float m_flMinimapRevealTime; // 0x358	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_TrackedProjectile_Synth_PlasmaFlux : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1568
// Has VTable
// 
// MGetKV3ClassDefaults
class CBaseDashCastAbilityVData : public CitadelAbilityVData
{
public:
	CSubclassName< 4 > m_AbilityToTrigger; // 0x14e0	
	// MPropertyDescription "How big of a trigger to use when tracing for targets"
	float m_flDashCastTriggerRadius; // 0x14f0	
	// MPropertyDescription "How fast the dash should go.  When using the curve, the dash will travel this speen when y=1"
	float m_flDashSpeed; // 0x14f4	
	// MPropertyDescription "When true, speed will be set to 0 when the dash cast ends"
	bool m_bSnapToZeroSpeedOnEnd; // 0x14f8	
	// MPropertyDescription "When true, use the curve below to scale the speed of the dash across the distance."
	bool m_bUseCurveToDefineSpeed; // 0x14f9	
private:
	[[maybe_unused]] uint8_t __pad14fa[0x6]; // 0x14fa
public:
	// MPropertySuppressExpr "m_bUseCurveToDefineSpeed == false"
	CPiecewiseCurve m_MovementSpeedCurve; // 0x1500	
	// MPropertySuppressField
	float m_flMovementSpeedCurveAvgSpeed; // 0x1540	
private:
	[[maybe_unused]] uint8_t __pad1544[0x4]; // 0x1544
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play if we hit a target."
	CSoundEventName m_strTargetHitSound; // 0x1548	
	// MPropertyDescription "Sound to play if miss entirely.  Only the caster hears it."
	CSoundEventName m_strMissSound; // 0x1558	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_BreakablePropZiplineSpeed : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MGetKV3ClassDefaults
class CPrecipitationVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticlePrecipitationEffect; // 0x28	
	float m_flInnerDistance; // 0x108	
	ParticleAttachment_t m_nAttachType; // 0x10c	
	bool m_bBatchSameVolumeType; // 0x110	
private:
	[[maybe_unused]] uint8_t __pad0111[0x3]; // 0x111
public:
	int32_t m_nRTEnvCP; // 0x114	
	int32_t m_nRTEnvCPComponent; // 0x118	
private:
	[[maybe_unused]] uint8_t __pad011c[0x4]; // 0x11c
public:
	CUtlString m_szModifier; // 0x120	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce8
// Has VTable
class CCitadel_Ability_Tengu_Urn : public C_CitadelBaseAbility
{
public:
	Vector m_vLaunchPosition; // 0xc28	
	QAngle m_qLaunchAngle; // 0xc34	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x760
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Shiv_Dive_TargetPossessedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPossessEndExplodeSound; // 0x6d0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequencePossessEnd; // 0x6e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd48
// Has VTable
class CCitadel_Ability_Astro_Rifle : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Decoy_Tracker : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_ActiveBulletShieldVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TempShieldModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x640
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FullSpectrumVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x620	
	CEmbeddedSubclass< CCitadelModifier > m_BonusDamageModifier; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_OneVsOne : public CCitadel_Modifier_Intrinsic_Base
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_ControlPointCapturerAura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_AccuracyTracker : public CCitadelModifier
{
public:
	float m_flProgress; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Slork_Invis_VData : public CCitadel_Modifier_InvisVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AmbushModifier; // 0x8a8	
	CEmbeddedSubclass< CCitadelModifier > m_VisibleModifier; // 0x8b8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_GenericPerson_1 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGenericPerson1VData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPsychicPulseVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // 0x14f0	
	// MPropertyStartGroup "+Psychic Pulse Properties"
	float m_flCastEffectLifetime; // 0x15d0	
	float m_flConeAngle; // 0x15d4	
	float m_flConeHalfWidth; // 0x15d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_Hornet_Chain_Connection : public CCitadelModifier
{
public:
	Vector m_vecOrigin; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_Savior_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SaviorModifier; // 0x1528	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
class CCitadel_Modifier_BulletFlurry : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	float m_flRadius; // 0x1a0	
private:
	[[maybe_unused]] uint8_t __pad01a4[0x4]; // 0x1a4
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // 0x1a8	
	int32_t m_nNumPlayersKilled; // 0x1c0	
	int32_t m_nShootIndex; // 0x1c4	
	int32_t m_nShootIndexNPC; // 0x1c8	
	int32_t m_nBurstShots; // 0x1cc	
	GameTime_t m_flNextAttackTime; // 0x1d0	
	SatVolumeIndex_t m_nSatVolumeIndex; // 0x1d4	
	ParticleIndex_t m_nEffectId; // 0x1d8	
	GameTime_t m_flNextSequenceChange; // 0x1dc	
	int32_t m_nCurrentPose; // 0x1e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MedicBulletsVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x710	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
class CBuoyancyHelper
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	float m_flFluidDensity; // 0x18	
	
	// Datamap fields:
	// void m_pController; // 0x8
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Item_Aura_Base : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa80
// Has VTable
// 
// MNetworkVarNames "int m_iAbilitySlot"
class C_InWorldAbilityPanel : public C_PointClientUIWorldPanel
{
public:
	CHandle< C_CitadelPlayerPawn > m_hPlayer; // 0xa70	
private:
	[[maybe_unused]] uint8_t __pad0a74[0x4]; // 0xa74
public:
	// MNetworkEnable
	int32_t m_iAbilitySlot; // 0xa78	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x820
// Has VTable
class C_FuncTrackTrain : public C_BaseModelEntity
{
public:
	int32_t m_nLongAxis; // 0x810	
	float m_flRadius; // 0x814	
	float m_flLineLength; // 0x818	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySleepBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x15c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
// Has VTable
class CCitadel_Ability_RocketLauncher : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_HighAlert : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x800
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Bebop_LaserBeamVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // 0x6e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserStartSound; // 0x7c0	
	CSoundEventName m_strLaserEndSound; // 0x7d0	
	CSoundEventName m_strLaserLoopSound; // 0x7e0	
	CSoundEventName m_strLaserHitSound; // 0x7f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_Wraith_RapidFire : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e0
// Has VTable
class CCitadel_Modifier_Bull_Heal_Target : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x118]; // 0xc0
public:
	float m_flTetherRangeSquared; // 0x1d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x238
// Has VTable
class CCitadelPlayer_CameraServices : public CPlayer_CameraServices
{
public:
	CHandle< C_PostProcessingVolume > m_hPrevPostProcessingVolume; // 0x230	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1408
// Has VTable
class C_NPC_SuperTrooper : public C_NPC_Trooper
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_WreckerSalvageBuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponBuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCitadel_Modifier_Astro_ShotgunBuff : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x58]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityAstroRifleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1500	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0xa8]; // 0xc28
public:
	GameTime_t m_ImpactTime; // 0xcd0	
	Vector m_vDamagePos; // 0xcd4	
private:
	[[maybe_unused]] uint8_t __pad0ce0[0x4]; // 0xce0
public:
	ParticleIndex_t m_PreviewEffect; // 0xce4	
private:
	[[maybe_unused]] uint8_t __pad0ce8[0x1c0]; // 0xce8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStrikeVel; // 0xea8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xeb4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPsychicLiftVData : public CCitadel_Modifier_SilencedVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // 0x890	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x970	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1918
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHoldMelee_VData : public CAbilityMeleeVData
{
public:
	CUtlOrderedMap< EMeleeHold_AttackType, AttackData_t > m_mapAttacks; // 0x1500	
	float m_flNextAttackOnParry; // 0x1528	
	float m_flParryWindow; // 0x152c	
	float m_flParryStunTime; // 0x1530	
	float m_flParryCooldown; // 0x1534	
	CRemapFloat m_AirMeleeUpScale; // 0x1538	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBeginEffect; // 0x1548	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x1628	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParryActivateParticle; // 0x1708	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // 0x17e8	
	CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // 0x1868	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play when starting the hold"
	CSoundEventName m_strHoldBegin; // 0x18e8	
	CSoundEventName m_strSuccessfulParrySound; // 0x18f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x1908	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MNetworkVarNames "int32 m_nModelID"
// MNetworkVarNames "HMaterialStrong m_hMaterialBase"
// MNetworkVarNames "HMaterialStrong m_hMaterialDamageOverlay"
// MNetworkVarNames "ShardSolid_t m_solid"
// MNetworkVarNames "Vector2D m_vecPanelSize"
// MNetworkVarNames "Vector2D m_vecStressPositionA"
// MNetworkVarNames "Vector2D m_vecStressPositionB"
// MNetworkVarNames "Vector2D m_vecPanelVertices"
// MNetworkVarNames "Vector4D m_vInitialPanelVertices"
// MNetworkVarNames "float m_flGlassHalfThickness"
// MNetworkVarNames "bool m_bHasParent"
// MNetworkVarNames "bool m_bParentFrozen"
// MNetworkVarNames "CUtlStringToken m_SurfacePropStringToken"
struct shard_model_desc_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	int32_t m_nModelID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialBase; // 0x10	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageOverlay; // 0x18	
	// MNetworkEnable
	ShardSolid_t m_solid; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	// MNetworkEnable
	Vector2D m_vecPanelSize; // 0x24	
	// MNetworkEnable
	Vector2D m_vecStressPositionA; // 0x2c	
	// MNetworkEnable
	Vector2D m_vecStressPositionB; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // 0x40	
	// MNetworkEnable
	C_NetworkUtlVectorBase< Vector4D > m_vInitialPanelVertices; // 0x58	
	// MNetworkEnable
	float m_flGlassHalfThickness; // 0x70	
	// MNetworkEnable
	bool m_bHasParent; // 0x74	
	// MNetworkEnable
	bool m_bParentFrozen; // 0x75	
private:
	[[maybe_unused]] uint8_t __pad0076[0x2]; // 0x76
public:
	// MNetworkEnable
	CUtlStringToken m_SurfacePropStringToken; // 0x78	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18
// Has Trivial Constructor
// Has Trivial Destructor
struct C_SceneEntity__QueuedEvents_t
{
public:
	float starttime; // 0x0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaa8
// Has VTable
// 
// MNetworkVarNames "int32 m_eLootType"
// MNetworkVarNames "int32 m_nCurrencyValue"
// MNetworkVarNames "int32 m_nCurrencyType"
// MNetworkVarNames "string_t m_iszModelName"
// MNetworkVarNames "float m_flModelScale"
// MNetworkVarNames "EHANDLE m_hTargetPlayer"
// MNetworkVarNames "float m_flFallRate"
class C_CitadelItemPickup : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	int32_t m_eLootType; // 0xa78	
	// MNetworkEnable
	int32_t m_nCurrencyValue; // 0xa7c	
	// MNetworkEnable
	int32_t m_nCurrencyType; // 0xa80	
private:
	[[maybe_unused]] uint8_t __pad0a84[0x4]; // 0xa84
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszModelName; // 0xa88	
	// MNetworkEnable
	float m_flModelScale; // 0xa90	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetPlayer; // 0xa94	
	// MNetworkEnable
	float m_flFallRate; // 0xa98	
	
	// Datamap fields:
	// bool from_crate; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd50
// Has VTable
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "DoorState_t m_eDoorState"
// MNetworkVarNames "bool m_bLocked"
// MNetworkVarNames "Vector m_closedPosition"
// MNetworkVarNames "QAngle m_closedAngles"
// MNetworkVarNames "CHandle< C_BasePropDoor> m_hMaster"
class C_BasePropDoor : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0d10[0x10]; // 0xd10
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xd20	
	bool m_modelChanged; // 0xd24	
	// MNetworkEnable
	bool m_bLocked; // 0xd25	
private:
	[[maybe_unused]] uint8_t __pad0d26[0x2]; // 0xd26
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xd28	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xd34	
	// MNetworkEnable
	CHandle< C_BasePropDoor > m_hMaster; // 0xd40	
	Vector m_vWhereToSetLightingOrigin; // 0xd44	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_BreakablePropSpeedPickup : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_ThrowSandProjectile : public CCitadel_Modifier_Intrinsic_Base
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	Vector m_vInitialCastPosition; // 0x130	
	ParticleIndex_t m_iParticleEffect; // 0x13c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_PuddleVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_puddleAoeDamageFx; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetDamageFx; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetStingVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14e0	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb70
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierStormCloudVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapFriendly; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawFriendly; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEFriendly; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapEnemy; // 0x890	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawEnemy; // 0x970	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEEnemy; // 0xa50	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strChannelEndingSoonSound; // 0xb30	
	CSoundEventName m_strChannelFinishedSound; // 0xb40	
	CSoundEventName m_strDamageRecievedSound; // 0xb50	
	CSoundEventName m_strAmbientZapSound; // 0xb60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_MidBossAggroEnemy : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_Siphon_Bullets_Watcher : public CCitadel_Modifier_StatStealBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Guiding_Arrow : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_QuickSilver_Buff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLaunch"
class CItemXP : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x20]; // 0x810
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnLaunchTimeChanged"
	GameTime_t m_timeLaunch; // 0x830	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Synth_Grasp_Victim_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strVictimTetheredSound; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GraspVictimParticle; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityRapidFireVData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityRiotProtocolVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x15c0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WardenBuffModifier; // 0x16a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_CatAmmoVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x620	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_ImmunityModifier; // 0x640	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x650	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Chrono_KineticCarbineVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FullyChargedParticle; // 0x6d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFullyCharged; // 0x7b0	
	CSoundEventName m_strShotSound; // 0x7c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
class C_CitadelMinimapBoundary : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc70
// Has VTable
// 
// MNetworkIncludeByName "m_bTakesDamage"
// MNetworkIncludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames "bool m_bDestroyed"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bFinal"
class C_Citadel_Destroyable_Building : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xa78	
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0xc18	
	// MNetworkEnable
	// MNetworkChangeCallback "DestroyedChanged"
	bool m_bDestroyed; // 0xc68	
	// MNetworkEnable
	bool m_bActive; // 0xc69	
	// MNetworkEnable
	bool m_bFinal; // 0xc6a	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf0
// Has VTable
// 
// MNetworkVarNames "int m_nNumStacks"
class CItem_RestorativeLocket : public CCitadel_Item
{
private:
	[[maybe_unused]] uint8_t __pad0c40[0xa8]; // 0xc40
public:
	// MNetworkEnable
	int32_t m_nNumStacks; // 0xce8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c8
// Has VTable
class CPointTemplate : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszWorldName; // 0x538	
	CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x540	
	CUtlSymbolLarge m_iszEntityFilterName; // 0x548	
	float m_flTimeoutInterval; // 0x550	
	bool m_bAsynchronouslySpawnEntities; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	CEntityIOOutput m_pOutputOnSpawned; // 0x558	
	PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x580	
	PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x584	
	CUtlVector< uint32 > m_createdSpawnGroupHandles; // 0x588	
	CUtlVector< CEntityHandle > m_SpawnedEntityHandles; // 0x5a0	
	HSCRIPT m_ScriptSpawnCallback; // 0x5b8	
	HSCRIPT m_ScriptCallbackScope; // 0x5c0	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// void InputDeleteCreatedSpawnGroups; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityFealtyVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TargetModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_ThrowSandDebuff : public CCitadel_Modifier_Disarmed
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Decoy_Self_Buff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Viscous_Telepunch_TravelVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TelepunchAttackModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // 0x600	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // 0x6e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // 0x7c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HornetSnipeVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GlowEnemeyModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_WingBlast : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_LifeDrainVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LifeDrainTargetModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_LifeDrainCasterModifier; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BoxingGloveVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x620	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x710	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCitadel_Modifier_Item_Bleeding_Bullets_Active : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_ModDisruptor : public CCitadel_Modifier_Silenced
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x20]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_ArmorUpgrade_CloakingDeviceActive : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Chomp_LowHealth_Glow : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc68
// Has VTable
class CCitadel_Ability_Slork_Chomp : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Haze_StackingDamage : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TelepunchTravelModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // 0x1790	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // 0x1870	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_EnemyPortalSound; // 0x1950	
	CSoundEventName m_SelfPortalSound; // 0x1960	
	CSoundEventName m_WindupSound; // 0x1970	
	CSoundEventName m_PunchSound; // 0x1980	
	// MPropertyStartGroup "+Telepunch Parameters"
	float m_flEnemyPortalTelegraphTime; // 0x1990	
	float m_flSelfPortalTelegraphTime; // 0x1994	
	float m_flWindupTime; // 0x1998	
	float m_flAttackTime; // 0x199c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
class C_LightCapsuleEntity : public C_LightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
class CInfoDynamicShadowHint : public C_PointEntity
{
public:
	bool m_bDisabled; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	float m_flRange; // 0x53c	
	int32_t m_nImportance; // 0x540	
	int32_t m_nLightChoice; // 0x544	
	CHandle< C_BaseEntity > m_hLight; // 0x548	
	
	// Static fields:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Slork_InvisVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_PreventHealingModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbushExplosionParticle; // 0x1500	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AmbushExplosionSound; // 0x15e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf0
// Has VTable
// 
// MNetworkVarNames "int m_nFastFireBulletsLeft"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
class CAbility_Synth_Blitz : public C_CitadelBaseAbility
{
public:
	CUtlVector< ShotID_t > m_vecSpecialShots; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nFastFireBulletsLeft; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c44[0x4]; // 0xc44
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CCitadelAutoScaledTime m_flBlitzEndTime; // 0xc48	
	bool m_bCanApplyTechAmp; // 0xc60	
	bool m_bCanLifesteal; // 0xc61	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ConsumedProtectionRacket : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCitadel_Modifier_ThrownShiv_Debuff : public CCitadelModifier
{
public:
	int32_t m_nNumTicksRemaining; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_TargetPractice : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class CTakeDamageInfoAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseProvideFeatureTag
// MPulseLibraryBindings
class C_BaseEntityAPI
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
class CCitadel_ArmorUpgrade_HighImpactArmor : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1910
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Pulse_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EscapeModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEParticle; // 0x1500	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EffectParticle; // 0x15e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x16c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x17a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExpireSound; // 0x1880	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceInSatchel; // 0x1890	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Thumper_3 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x210
// Has VTable
class CCitadel_Modifier_CatAmmo : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_RocketBarrageVolleyVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFireSound; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ZiplineKnockdownImmune : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierContainmentVictimVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChainedParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Slow : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
class C_TriggerItemShop : public C_BaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MNetworkVarNames "float m_gravityScale"
// MNetworkVarNames "float m_linearLimit"
// MNetworkVarNames "float m_linearDamping"
// MNetworkVarNames "float m_angularLimit"
// MNetworkVarNames "float m_angularDamping"
// MNetworkVarNames "float m_linearForce"
// MNetworkVarNames "float m_flFrequency"
// MNetworkVarNames "float m_flDampingRatio"
// MNetworkVarNames "Vector m_vecLinearForcePointAt"
// MNetworkVarNames "bool m_bCollapseToForcePoint"
// MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
// MNetworkVarNames "Vector m_vecLinearForceDirection"
// MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
class C_TriggerPhysics : public C_BaseTrigger
{
public:
	// MNetworkEnable
	float m_gravityScale; // 0x818	
	// MNetworkEnable
	float m_linearLimit; // 0x81c	
	// MNetworkEnable
	float m_linearDamping; // 0x820	
	// MNetworkEnable
	float m_angularLimit; // 0x824	
	// MNetworkEnable
	float m_angularDamping; // 0x828	
	// MNetworkEnable
	float m_linearForce; // 0x82c	
	// MNetworkEnable
	float m_flFrequency; // 0x830	
	// MNetworkEnable
	float m_flDampingRatio; // 0x834	
	// MNetworkEnable
	Vector m_vecLinearForcePointAt; // 0x838	
	// MNetworkEnable
	bool m_bCollapseToForcePoint; // 0x844	
private:
	[[maybe_unused]] uint8_t __pad0845[0x3]; // 0x845
public:
	// MNetworkEnable
	Vector m_vecLinearForcePointAtWorld; // 0x848	
	// MNetworkEnable
	Vector m_vecLinearForceDirection; // 0x854	
	// MNetworkEnable
	bool m_bConvertToDebrisWhenPossible; // 0x860	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HookTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
	float m_flApproachingWhooshAnticipationTime; // 0x5f0	
	float m_flCloseEnoughDistance; // 0x5f4	
	float m_flTossUpSpeed; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x600	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookRetrieveParticle; // 0x610	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strRetractSound; // 0x6f0	
	CSoundEventName m_strRetractSoundEnd; // 0x700	
	CSoundEventName m_strApproachingWhooshSound; // 0x710	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_TargetPracticeSelf : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_SilencerProcActive : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_RestorativeLocket_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1528	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // 0x1608	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_CharmedWraps_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // 0x620	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x700	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
class C_LightDirectionalEntity : public C_LightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c0
// Has VTable
class CCitadel_Modifier_SleepBomb_Aura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
// MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
// MNetworkVarNames "float m_Entity_flInfluenceRadius"
// MNetworkVarNames "Vector m_Entity_vBoxProjectMins"
// MNetworkVarNames "Vector m_Entity_vBoxProjectMaxs"
// MNetworkVarNames "bool m_Entity_bMoveable"
// MNetworkVarNames "int m_Entity_nHandshake"
// MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
// MNetworkVarNames "int m_Entity_nPriority"
// MNetworkVarNames "float m_Entity_flEdgeFadeDist"
// MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
// MNetworkVarNames "float m_Entity_flDiffuseScale"
// MNetworkVarNames "bool m_Entity_bStartDisabled"
// MNetworkVarNames "bool m_Entity_bDefaultEnvMap"
// MNetworkVarNames "bool m_Entity_bDefaultSpecEnvMap"
// MNetworkVarNames "bool m_Entity_bIndoorCubeMap"
// MNetworkVarNames "bool m_Entity_bCopyDiffuseFromDefaultCubemap"
// MNetworkVarNames "bool m_Entity_bEnabled"
class C_EnvCubemap : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x80]; // 0x538
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hCubemapTexture; // 0x5b8	
	// MNetworkEnable
	bool m_Entity_bCustomCubemapTexture; // 0x5c0	
private:
	[[maybe_unused]] uint8_t __pad05c1[0x3]; // 0x5c1
public:
	// MNetworkEnable
	float m_Entity_flInfluenceRadius; // 0x5c4	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMins; // 0x5c8	
	// MNetworkEnable
	Vector m_Entity_vBoxProjectMaxs; // 0x5d4	
	// MNetworkEnable
	bool m_Entity_bMoveable; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e1[0x3]; // 0x5e1
public:
	// MNetworkEnable
	int32_t m_Entity_nHandshake; // 0x5e4	
	// MNetworkEnable
	int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x5e8	
	// MNetworkEnable
	int32_t m_Entity_nPriority; // 0x5ec	
	// MNetworkEnable
	float m_Entity_flEdgeFadeDist; // 0x5f0	
	// MNetworkEnable
	Vector m_Entity_vEdgeFadeDists; // 0x5f4	
	// MNetworkEnable
	float m_Entity_flDiffuseScale; // 0x600	
	// MNetworkEnable
	bool m_Entity_bStartDisabled; // 0x604	
	// MNetworkEnable
	bool m_Entity_bDefaultEnvMap; // 0x605	
	// MNetworkEnable
	bool m_Entity_bDefaultSpecEnvMap; // 0x606	
	// MNetworkEnable
	bool m_Entity_bIndoorCubeMap; // 0x607	
	// MNetworkEnable
	bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad0609[0xf]; // 0x609
public:
	// MNetworkEnable
	bool m_Entity_bEnabled; // 0x618	
	
	// Datamap fields:
	// void m_Entity_pSceneObject; // 0x610
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc30
// Has VTable
class CCitadel_Ability_Yakuza_Shakedown : public C_CitadelBaseAbility
{
public:
	int32_t m_IgnoreChannelSlow; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1718
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_CheatDeathVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamagePulseParticle; // 0x1528	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageTargetParticle; // 0x1608	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sHealPulseSound; // 0x16e8	
	CSoundEventName m_sHealAndDamagePulseSound; // 0x16f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DeathImmuneModifier; // 0x1708	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Succor_Move : public CCitadelModifier
{
public:
	bool m_bHasPulled; // 0xc0	
	bool m_bIsPulling; // 0xc1	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Upgrade_WeaponPowerForHealth : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
class CCitadel_Ability_PrimaryWeapon_Cadence : public CCitadel_Ability_PrimaryWeapon
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_AirLift_Grab : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x258
// Has VTable
class CCitadel_Modifier_ChronoSwap_BubbleMove : public CCitadelModifier
{
public:
	bool m_bOtherIsInFrontAtStart; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	Vector m_vOtherToDest; // 0xc4	
	Vector m_vStart; // 0xd0	
	Vector m_vDest; // 0xdc	
	CHandle< C_BaseEntity > m_hOther; // 0xe8	
	Vector m_vLastSafePos; // 0xec	
	int32_t m_nNumTicks; // 0xf8	
	int32_t m_nTicksLeft; // 0xfc	
	ParticleIndex_t m_nBeamIndex; // 0x100	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_Silence_Buildup : public CCitadel_Modifier_Base_Buildup
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa98
// Has VTable
class C_Citadel_FissureWall : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xa70	
	Vector m_vEndPos; // 0xa7c	
	GameTime_t m_flStartEmitTime; // 0xa88	
	GameTime_t m_flEndEmitTime; // 0xa8c	
	bool m_bSolid; // 0xa90	
private:
	[[maybe_unused]] uint8_t __pad0a91[0x3]; // 0xa91
public:
	int32_t m_nTouchCount; // 0xa94	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PassiveBeefyVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealParticle; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_IntensifyingClip : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1f0
// Has VTable
class CCitadel_Modifier_Ricochet_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb00
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
class CPropAnimatingBreakable : public CBaseAnimGraph
{
public:
	CBreakableStageHelper m_stages; // 0xa70	
	CEntityIOOutput m_OnTakeDamage; // 0xa88	
	CEntityIOOutput m_OnFinalBreak; // 0xab0	
	CEntityIOOutput m_OnStageAdvanced; // 0xad8	
	
	// Datamap fields:
	// void InputNextBreakStage; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ShakedownPulse : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStickyBombVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BombAttachedModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastBombParticle; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bUpdateOnClient"
// MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
// MNetworkVarNames "float m_flMaximumChangePerSecond"
// MNetworkVarNames "float m_flDisengageDistance"
// MNetworkVarNames "float m_flEngageDistance"
// MNetworkVarNames "bool m_bRequiresUseKey"
// MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
// MNetworkVarNames "CHandle< C_BaseEntity > m_hOutputEntities"
// MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
// MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
// MNetworkVarNames "float m_flMomentumModifier"
// MNetworkVarNames "float m_flSnapValue"
// MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
// MNetworkVarNames "float m_flInputOffset"
class C_PointValueRemapper : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x538	
	bool m_bDisabledOld; // 0x539	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x53a	
private:
	[[maybe_unused]] uint8_t __pad053b[0x1]; // 0x53b
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x53c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineStart; // 0x540	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x544	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x548	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x54c	
	// MNetworkEnable
	float m_flEngageDistance; // 0x550	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad055c[0x4]; // 0x55c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x560	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x578	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x57c	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x580	
	// MNetworkEnable
	float m_flSnapValue; // 0x584	
	float m_flCurrentMomentum; // 0x588	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x58c	
	float m_flRatchetOffset; // 0x590	
	// MNetworkEnable
	float m_flInputOffset; // 0x594	
	bool m_bEngaged; // 0x598	
	bool m_bFirstUpdate; // 0x599	
private:
	[[maybe_unused]] uint8_t __pad059a[0x2]; // 0x59a
public:
	float m_flPreviousValue; // 0x59c	
	GameTime_t m_flPreviousUpdateTickTime; // 0x5a0	
	Vector m_vecPreviousTestPoint; // 0x5a4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d8
// Has VTable
class CCitadel_Modifier_Spin : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x58]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierQuarantineVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BubbleParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BubbleExplodeParticle; // 0x6d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Neutral_Debuff_Pushback : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa88
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "CUtlString m_sPickupName"
// MNetworkVarNames "int m_nNameOffset"
class C_Citadel_BreakblePropPickup : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnActiveChanged"
	bool m_bActive; // 0xa70	
private:
	[[maybe_unused]] uint8_t __pad0a71[0x7]; // 0xa71
public:
	// MNetworkEnable
	CUtlString m_sPickupName; // 0xa78	
	// MNetworkEnable
	int32_t m_nNameOffset; // 0xa80	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc80
// Has VTable
class CCitadel_Item_Intensifying_Clip : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_BreakablePropFireRatePickup : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x620
// Has VTable
class C_EnvCubemapBox : public C_EnvCubemap
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelViscousBallVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	float m_flPhysicsRadius; // 0x108	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_HeadshotBooster_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_HeadShotVictimSound; // 0x1528	
	CSoundEventName m_HeadShotConfirmationSound; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1438
// Has VTable
class C_NPC_TrooperBarrackBoss : public C_NPC_TrooperBoss
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_ThrowSand : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1520
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBouncePadVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BounceModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_AllyBounceModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_SpeedOnLandModifier; // 0x1500	
	CEmbeddedSubclass< CCitadelModifier > m_NoBounceModifier; // 0x1510	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_RocketBarrageVolley : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca8
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "bool m_bUsingThisMelee"
// MNetworkVarNames "bool m_bUsingMeleeTagActive"
// MNetworkVarNames "bool m_bHitWithThisAttack"
// MNetworkVarNames "GameTime_t m_flLastActivateTime"
// MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
// MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
class CCitadel_Ability_Melee_Base : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bUsingThisMelee; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bUsingMeleeTagActive; // 0xc29	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bHitWithThisAttack; // 0xc2a	
private:
	[[maybe_unused]] uint8_t __pad0c2b[0x1]; // 0xc2b
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flLastActivateTime; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flNextAttackAllowedTime; // 0xc30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAttackTriggeredTime; // 0xc34	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_PowerSurge_ChainLightning : public CCitadel_Modifier_ChainLightningEffect
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_FullSpectrumDamage : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class C_SoundOpvarSetOBBEntity : public C_SoundOpvarSetAABBEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce8
// Has VTable
class CCitadel_Item_TechDamagePulse : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Tier3BossInvuln : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_Breakable : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Item_ModDisruptor : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c0
// Has VTable
class CCitadel_Modifier_FrenzyAura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetChainVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15c0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChainModifier; // 0x15d0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // 0x15e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "int m_nBonusTechPower"
class CCitadel_Ability_GuidedArrow : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x8]; // 0xc28
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xc30	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xc34	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xc38	
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xc3c	
	GameTime_t m_flCastTime; // 0xc40	
	bool m_bNeedsExplosion; // 0xc44	
private:
	[[maybe_unused]] uint8_t __pad0c45[0x3]; // 0xc45
public:
	Vector m_vProjectileRemovedOrigin; // 0xc48	
	QAngle m_angCasterAnglesAtCastTime; // 0xc54	
	float m_flTravelDistance; // 0xc60	
	bool m_bInKillFlow; // 0xc64	
private:
	[[maybe_unused]] uint8_t __pad0c65[0x3]; // 0xc65
public:
	float m_flProjectileTurnVel; // 0xc68	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FireBombVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryWindowEndTime"
// MNetworkVarNames "GameTime_t m_flNextParryTime"
// MNetworkVarNames "GameTime_t m_flStateStartTime"
// MNetworkVarNames "GameTime_t m_flDashStartTime"
// MNetworkVarNames "EMeleeHold_AttackState m_eCurrentAttackState"
// MNetworkVarNames "EMeleeHold_AttackType m_eCurrentAttackType"
// MNetworkVarNames "Vector m_vAirDashDir"
class CCitadel_Ability_HoldMelee : public CCitadel_Ability_Melee_Base
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flParryWindowEndTime; // 0xca8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flNextParryTime; // 0xcac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flStateStartTime; // 0xcb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashStartTime; // 0xcb4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	EMeleeHold_AttackState m_eCurrentAttackState; // 0xcb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	EMeleeHold_AttackType m_eCurrentAttackType; // 0xcbc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vAirDashDir; // 0xcc0	
	bool m_bCreatedChargeEffects; // 0xccc	
private:
	[[maybe_unused]] uint8_t __pad0ccd[0x3]; // 0xccd
public:
	QAngle m_angForced; // 0xcd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierApexWatcherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Phantom_Strike_Caster : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityJumpVData : public CitadelAbilityVData
{
public:
	float m_flShootingLockoutAfterJump; // 0x14e0	
private:
	[[maybe_unused]] uint8_t __pad14e4[0x4]; // 0x14e4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashJumpParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AirJumpParticle; // 0x15c8	
	// MPropertyStartGroup "Air Jump"
	CSoundEventName m_AirJumpExecutedSound; // 0x16a8	
	float m_flMantleRefundWindow; // 0x16b8	
	float m_flZiplineRefundWindow; // 0x16bc	
	float m_flLateJumpGraceWindow; // 0x16c0	
	// MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
	float m_flMaxSpeedDelta; // 0x16c4	
	// MPropertyStartGroup "Roll Jump"
	CSoundEventName m_strDashJumpActivate; // 0x16c8	
	float m_flDashJumpStartTime; // 0x16d8	
	float m_flDashJumpEndTime; // 0x16dc	
	// MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
	float m_flDashJumpDistanceInMeters; // 0x16e0	
private:
	[[maybe_unused]] uint8_t __pad16e4[0x4]; // 0x16e4
public:
	float m_flDashJumpVerticalSpeed; // 0x16e8	
	float m_flDashJumpMissMaxSpeed; // 0x16ec	
	float m_flDashJumpMantleDisableTime; // 0x16f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Objective_BulletReistVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Objective Bullet Resist"
	// MPropertyDescription "Bullet Resist with no Enemy Heroes around"
	float m_BulletResist; // 0x5f0	
	// MPropertyDescription "Bullet Resist Reduced Per Enemy Hero (Max 0%)"
	float m_BulletResistReductionPerHero; // 0x5f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hOuter"
// MNetworkVarNames "HitGroup_t m_nCritHitGroup"
// MNetworkVarNames "int m_nBodyGroup"
// MNetworkVarNames "bool m_bPermanentlyBroken"
// MNetworkVarNames "int m_nBrokenBodygroupIndex"
struct WeakPoint_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x3c]; // 0x0
public:
	bool m_bRegistered; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnOuterChanged"
	CHandle< C_BaseEntity > m_hOuter; // 0x40	
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashDataChanged"
	HitGroup_t m_nCritHitGroup; // 0x44	
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashDataChanged"
	int32_t m_nBodyGroup; // 0x48	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPermanentlyBroken"
	bool m_bPermanentlyBroken; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	// MNetworkEnable
	int32_t m_nBrokenBodygroupIndex; // 0x50	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa88
// Has VTable
// 
// MNetworkVarNames "float m_flAttackRange"
// MNetworkVarNames "float m_flAimPitch"
class C_NPC_FieldSentry : public C_NPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0a78[0x4]; // 0xa78
public:
	// MNetworkEnable
	float m_flAttackRange; // 0xa7c	
	// MNetworkEnable
	float m_flAimPitch; // 0xa80	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BreakablePropZiplineSpeedVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Powerup Values"
	float m_flZiplineSpeedBoost; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Item_Empty : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_Slork_Raging_Current_Countdown : public CCitadelModifier
{
public:
	ParticleIndex_t m_hRingEffect; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IcePathVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_IcePathModifier; // 0x14e0	
	// MPropertyStartGroup "Gameplay"
	float m_flMomentumDecayRate; // 0x14f0	
	float m_flMomentumWeight; // 0x14f4	
	float m_flMaxPitchChange; // 0x14f8	
	float m_flMaxPitchUp; // 0x14fc	
	float m_flMaxPitchDown; // 0x1500	
	float m_flMaxHeight; // 0x1504	
	float m_flForwardAngleBias; // 0x1508	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_HealthSwapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwapParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SwapModifier; // 0x15c0	
	CEmbeddedSubclass< CCitadelModifier > m_PreCastModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CModifier_SiphonBullets_RestoreHealth : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_EscalatingExposureProcWatcher : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_CanDamageMidBoss : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Item_SingleTargetStun : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x870
// Has VTable
// 
// MNetworkVarNames "float m_flInitialRadius"
// MNetworkVarNames "float m_flEndRadius"
// MNetworkVarNames "float m_flProgress"
// MNetworkVarNames "float m_flCaptureTime"
// MNetworkVarNames "EHANDLE m_hUnlockPrereq"
// MNetworkVarNames "bool m_bAvailable"
// MNetworkVarNames "bool m_bIsBeingCaptured"
// MNetworkVarNames "bool m_bIsBeingBlocked"
class CCitadelControlPointTrigger : public C_BaseTrigger
{
public:
	// MNetworkEnable
	float m_flInitialRadius; // 0x818	
	// MNetworkEnable
	float m_flEndRadius; // 0x81c	
	// MNetworkEnable
	float m_flProgress; // 0x820	
	// MNetworkEnable
	float m_flCaptureTime; // 0x824	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hUnlockPrereq; // 0x828	
	// MNetworkEnable
	bool m_bAvailable; // 0x82c	
	// MNetworkEnable
	bool m_bIsBeingCaptured; // 0x82d	
	// MNetworkEnable
	bool m_bIsBeingBlocked; // 0x82e	
private:
	[[maybe_unused]] uint8_t __pad082f[0x9]; // 0x82f
public:
	GameTime_t m_flLastTouchedTime; // 0x838	
	Vector m_vecBeamTarget; // 0x83c	
	Vector m_vecBeamStart; // 0x848	
	ParticleIndex_t m_nFXProgressBeam; // 0x854	
	CUtlSymbolLarge m_strUnlockPrereq; // 0x858	
	CUtlSymbolLarge m_strBeamStart; // 0x860	
	CUtlSymbolLarge m_strBeamTarget; // 0x868	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierLastBreathVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletShieldHitParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TechShieldHitParticle; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x890	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x970	
	CSoundEventName m_ExplodeSound; // 0x980	
	float m_flShieldImpactEffectDuration; // 0x990	
private:
	[[maybe_unused]] uint8_t __pad0994[0x4]; // 0x994
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BulletShieldImpactModifier; // 0x998	
	CEmbeddedSubclass< CCitadelModifier > m_TechShieldImpactModifier; // 0x9a8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDiveStateStartTime"
// MNetworkVarNames "EShivDiveState m_eDiveState"
// MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hPossessed"
class CCitadel_Ability_Shiv_Dive : public CCitadelBaseShivAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDiveStateStartTime; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EShivDiveState m_eDiveState; // 0xc2c	
private:
	[[maybe_unused]] uint8_t __pad0c30[0x70]; // 0xc30
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_CitadelPlayerPawn > m_hPossessed; // 0xca0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_PredatoryStatueTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserHitSound; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
class CCitadel_Modifier_PsychicDagger_MakeDaggers : public CCitadelModifier
{
public:
	SatVolumeIndex_t m_nSatVolumeIndex; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Bull_Leap_Boosting_CrashVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrashTrailParticle; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1130
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartWindUpTime"
// MNetworkVarNames "GameTime_t m_flStartFiringTime"
// MNetworkVarNames "bool m_bFiring"
class CCitadel_Ability_PrimaryWeapon_Bebop : public CCitadel_Ability_PrimaryWeapon_BeamWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0d08[0x2a8]; // 0xd08
public:
	// MNetworkEnable
	GameTime_t m_flStartWindUpTime; // 0xfb0	
	// MNetworkEnable
	GameTime_t m_flStartFiringTime; // 0xfb4	
	// MNetworkEnable
	bool m_bFiring; // 0xfb8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SleepBombVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeDamageFriendlyParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeDamageEnemyParticle; // 0x7b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SleepModifier; // 0x890	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x8a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_StompDebuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Surging_PowerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BerserkerSound; // 0x5f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ModifierActiveDisplay; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Neutral_Debuff_PushbackVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Gameplay"
	float m_flPushSpeed; // 0x5f0	
	float m_flPushRange; // 0x5f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
class CInfoDynamicShadowHintBox : public CInfoDynamicShadowHint
{
public:
	Vector m_vBoxMins; // 0x550	
	Vector m_vBoxMaxs; // 0x55c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9e8
// Has VTable
class C_Projectile_Mirage_Tornado : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySlorkScaldVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14e0	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirLiftGrabVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GrabEffect; // 0x5f0	
	// MPropertyStartGroup "Gameplay"
	float m_flLiftHorizontal; // 0x6d0	
	float m_flLiftHeight; // 0x6d4	
	float m_flFollowDampingFactor; // 0x6d8	
	float m_flFollowDistance; // 0x6dc	
	float m_flAllyGrabCancelTime; // 0x6e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x218
// Has VTable
class CCitadel_Modifier_Tengu_LightningCrash_Fly : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x98]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x220
// Has VTable
class CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy : public CCitadelModifier
{
public:
	Vector m_vHoldOffset; // 0xc0	
	float m_flLastTouchTime; // 0xcc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_FissureWall : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1608
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_InstantReloadVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReloadParticle; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CCitadel_Modifier_TeleportToObjective : public CCitadelModifier
{
public:
	Vector m_vDest; // 0xc0	
	QAngle m_angDestAngles; // 0xcc	
	Vector m_vDestVelocity; // 0xd8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_PlayerDisconnected : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
class C_InfoPortalLink : public C_PointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x860
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "ice_path_shard_model_desc_t m_ShardDesc"
// MNetworkVarNames "QAngle m_qForward"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "GameTime_t m_flEndTime"
class C_Citadel_Ice_Path_Shard_Physics : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// -> m_nModelID - 0x818
	// -> m_vecPanelSize - 0x81c
	// -> m_vecPanelVertices - 0x828
	// -> m_flThickness - 0x840
	// -> m_SurfacePropStringToken - 0x844
	ice_path_shard_model_desc_t m_ShardDesc; // 0x810	
	// MNetworkEnable
	QAngle m_qForward; // 0x848	
	// MNetworkEnable
	// MNetworkChangeCallback "OnStartTimeChanged"
	GameTime_t m_flStartTime; // 0x854	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEndTimeChanged"
	GameTime_t m_flEndTime; // 0x858	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe98
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flCastTime"
// MNetworkVarNames "bool m_bCrashingDown"
// MNetworkVarNames "bool m_bImpulseApplied"
// MNetworkVarNames "Vector m_vecCrashPosition"
// MNetworkVarNames "Vector m_vecCrashDirection"
class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots
{
private:
	[[maybe_unused]] uint8_t __pad0cb0[0x4]; // 0xcb0
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xcb4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCanSlamDownChanged"
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flCastTime; // 0xcb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCrashingDown; // 0xcbc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bImpulseApplied; // 0xcbd	
private:
	[[maybe_unused]] uint8_t __pad0cbe[0x2]; // 0xcbe
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCrashPosition; // 0xcc0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCrashDirection; // 0xccc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a30
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPerchedPredatorVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MineActiveParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatReappearParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatEyesParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeBaseParticle; // 0x1780	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFriendlyParticle; // 0x1860	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEnemyParticle; // 0x1940	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1a20	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_UppercutClipSize : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x38]; // 0xc0
public:
	int32_t m_nPreClipSize; // 0xf8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
class C_SoundOpvarSetPathCornerEntity : public C_SoundOpvarSetPointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CBaseTriggerAbilityVData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "Which ability to fire a MODIFIER_EVENT_ABILITY_TRIGGER_ACTIVATED event to when this ability is triggered"
	CSubclassName< 4 > m_AbilityToTrigger; // 0x14e0	
	// MPropertyDescription "The mimumum amount of time after this ability has become active before the trigger can activate"
	float m_flMinCancelTime; // 0x14f0	
	// MPropertyDescription "Which lesson to associate with activating this ability"
	ECitadelHintFeature m_eHintFeatureToMarkUsedOnTrigger; // 0x14f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x588
// Has VTable
// 
// MNetworkVarNames "float m_flEndDistance"
// MNetworkVarNames "float m_flStartDistance"
// MNetworkVarNames "float m_flFogFalloffExponent"
// MNetworkVarNames "bool m_bHeightFogEnabled"
// MNetworkVarNames "float m_flFogHeightWidth"
// MNetworkVarNames "float m_flFogHeightEnd"
// MNetworkVarNames "float m_flFogHeightStart"
// MNetworkVarNames "float m_flFogHeightExponent"
// MNetworkVarNames "float m_flLODBias"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "float m_flFogMaxOpacity"
// MNetworkVarNames "int m_nCubemapSourceType"
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "string_t m_iszSkyEntity"
// MNetworkVarNames "HRenderTextureStrong m_hFogCubemapTexture"
// MNetworkVarNames "bool m_bHasHeightFogEnd"
class C_EnvCubemapFog : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flEndDistance; // 0x538	
	// MNetworkEnable
	float m_flStartDistance; // 0x53c	
	// MNetworkEnable
	float m_flFogFalloffExponent; // 0x540	
	// MNetworkEnable
	bool m_bHeightFogEnabled; // 0x544	
private:
	[[maybe_unused]] uint8_t __pad0545[0x3]; // 0x545
public:
	// MNetworkEnable
	float m_flFogHeightWidth; // 0x548	
	// MNetworkEnable
	float m_flFogHeightEnd; // 0x54c	
	// MNetworkEnable
	float m_flFogHeightStart; // 0x550	
	// MNetworkEnable
	float m_flFogHeightExponent; // 0x554	
	// MNetworkEnable
	float m_flLODBias; // 0x558	
	// MNetworkEnable
	bool m_bActive; // 0x55c	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x55d	
private:
	[[maybe_unused]] uint8_t __pad055e[0x2]; // 0x55e
public:
	// MNetworkEnable
	float m_flFogMaxOpacity; // 0x560	
	// MNetworkEnable
	int32_t m_nCubemapSourceType; // 0x564	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x568	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSkyEntity; // 0x570	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hFogCubemapTexture; // 0x578	
	// MNetworkEnable
	bool m_bHasHeightFogEnd; // 0x580	
	bool m_bFirstTime; // 0x581	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGenericPerson2VData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_PoisonBullet_Poisoned : public CCitadel_Modifier_Sleep
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Afterburn_DOT_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sAfterburnParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Fervor_Bonuses : public CCitadelModifier
{
public:
	ParticleIndex_t m_nBonusesParticle; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_Rutger_Pulse_Aura : public CCitadelModifierAura
{
public:
	float m_flStartRadius; // 0xe0	
	float m_flEndRadius; // 0xe4	
	float m_flSpreadDuration; // 0xe8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a8
// Has VTable
class C_Citadel_Projectile_HatTrick : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf0
// Has VTable
class CCitadel_ArmorUpgrade_DoubleJump : public CCitadel_Item
{
public:
	int32_t m_nTickJumped; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_PayloadCarrier : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Dust_Storm_Aura_Apply : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierChargedTacklePrepareVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PrepareParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryStartTime"
// MNetworkVarNames "bool m_bAttackParried"
// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
class CCitadel_Ability_MeleeParry : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	GameTime_t m_flParryStartTime; // 0xc28	
	// MNetworkEnable
	bool m_bAttackParried; // 0xc2c	
private:
	[[maybe_unused]] uint8_t __pad0c2d[0x3]; // 0xc2d
public:
	// MNetworkEnable
	GameTime_t m_flParrySuccessTime; // 0xc30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_BerserkerDamageStack : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x200
// Has VTable
class CCitadel_Modifier_ExplosiveBullets : public CCitadel_Modifier_BaseBulletPreRollProc
{
private:
	[[maybe_unused]] uint8_t __pad0188[0x70]; // 0x188
public:
	ShotID_t m_BuffedShotId; // 0x1f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MNetworkVarNames "AbilityID_t m_SourceAbilityID"
// MNetworkVarNames "AbilityID_t m_TargetAbilityID"
// MNetworkVarNames "EModifierValue m_eValType"
// MNetworkVarNames "float m_flValue"
struct DynamicAbilityValues_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	CUtlStringToken m_SourceAbilityID; // 0x30	
	// MNetworkEnable
	CUtlStringToken m_TargetAbilityID; // 0x34	
	// MNetworkEnable
	EModifierValue m_eValType; // 0x38	
	// MNetworkEnable
	float m_flValue; // 0x3c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_ArmorUpgrade_MetalSkin : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // 0x15d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strThrowSound; // 0x16b0	
	CSoundEventName m_strReturnSound; // 0x16c0	
	CSoundEventName m_strCatchSound; // 0x16d0	
	CSoundEventName m_strFailSound; // 0x16e0	
	CSoundEventName m_strHitSound; // 0x16f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1530
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_AirLiftVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_GrabModifier; // 0x14f0	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x1500	
	float m_flMaxFallSpeed; // 0x1504	
	float m_flTargetAirSpeedFast; // 0x1508	
	float m_flTargetAirSpeedBase; // 0x150c	
	float m_flAcceleration; // 0x1510	
	float m_flDecceleration; // 0x1514	
	float m_flAirSideSpeedPercent; // 0x1518	
	float m_flBoostTime; // 0x151c	
	float m_flBoostSpeedUp; // 0x1520	
	float m_flChannelingAirDrag; // 0x1524	
	float m_flChannelingMaxFallSpeed; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ChronoSwap_BubbleMoveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Stabilizing_Tripod_Self_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Hero_Clone : public CCitadelModifier
{
public:
	bool m_bMimicOwner; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
class C_TriggerMultiple : public C_BaseTrigger
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "HSequence m_hSequence"
// MNetworkVarNames "float32 m_flPrevCycle"
// MNetworkVarNames "float32 m_flCycle"
class CNetworkedSequenceOperation
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "sequenceOpSequenceChanged"
	// MNetworkPriority "32"
	HSequence m_hSequence; // 0x8	
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flPrevCycle; // 0xc	
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flCycle; // 0x10	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "0"
	CNetworkedQuantizedFloat m_flWeight; // 0x14	
	// MNetworkDisable
	bool m_bSequenceChangeNetworked; // 0x1c	
	// MNetworkDisable
	bool m_bDiscontinuity; // 0x1d	
private:
	[[maybe_unused]] uint8_t __pad001e[0x2]; // 0x1e
public:
	// MNetworkDisable
	float m_flPrevCycleFromDiscontinuity; // 0x20	
	// MNetworkDisable
	float m_flPrevCycleForAnimEventDetection; // 0x24	
	
	// Datamap fields:
	// CUtlString sequenceName; // 0x7fffffff
	// int32_t sequence; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_GrandFinaleAOEVData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Targetdummy_Inherent : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityShivBloodRageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveCastParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeParticle; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPurge; // 0x16a0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_MaxRageBuff; // 0x16b0	
	// MPropertyStartGroup "+Blood Rage Properties"
	float m_flAirSpeedMax; // 0x16c0	
	float m_flFallSpeedMax; // 0x16c4	
	float m_flAirDrag; // 0x16c8	
	float m_flOnDamageDrainSuppressTime; // 0x16cc	
	float m_flOnFullDrainSuppressTime; // 0x16d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Bebop_Hook_BulletAmp : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Arcane_Eater_Watcher : public CCitadel_Modifier_StatStealBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Weapon_BossTier3 : public CTier3BossAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashUltimateVData : public CBaseLockonAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x1500	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x15e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // 0x16c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // 0x17a0	
	// MPropertyStartGroup "Animation"
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x1880	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // 0x1888	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrabSound; // 0x1898	
	CSoundEventName m_MissSound; // 0x18a8	
	CSoundEventName m_ThrowSound; // 0x18b8	
	// MPropertyStartGroup "+Ultimate Properties"
	float m_flAirSpeedMax; // 0x18c8	
	float m_flFallSpeedMax; // 0x18cc	
	float m_flAirDrag; // 0x18d0	
	float m_flMaxPitchRangeScale; // 0x18d4	
	float m_flThrowAnimTossPoint; // 0x18d8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CModifier_Synth_Grasp_Caster : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc68
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
class CCitadel_Ability_RiotProtocol : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bActive; // 0xc28	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ThrowSandProjectileVData : public CCitadel_Modifier_Intrinsic_BaseVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Intimidated_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Astro_Rifle_DebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTargetHitSound; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c8
// Has VTable
class CCitadel_Modifier_FullSpectrum : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c0
// Has VTable
class CCitadel_Modifier_Tier3Boss_LaserBeam : public CCitadel_Modifier_Tier3Boss_Base
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x8]; // 0xc0
public:
	GameTime_t m_flSoundStartTime; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	Vector m_vStart; // 0xd0	
	Vector m_vEnd; // 0xdc	
	Vector m_vPrevEnd; // 0xe8	
	float m_flAngleBetweenTrace; // 0xf4	
	float m_flPlayerDamagePerTick; // 0xf8	
	float m_flNPCDamagePerTick; // 0xfc	
	GameTime_t m_flNextDamageTick; // 0x100	
private:
	[[maybe_unused]] uint8_t __pad0104[0x4]; // 0x104
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0x108	
	float m_flDamageTickRate; // 0x120	
	GameTime_t m_flLastShakeTime; // 0x124	
	bool m_bSweepRightFirst; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad0129[0x3]; // 0x129
public:
	Vector m_vecBeamTarget; // 0x12c	
	GameTime_t m_flLastBeamUpdateTime; // 0x138	
	Vector m_vecEnemyPosition; // 0x13c	
	int32_t m_nTrackingIndex; // 0x148	
	bool m_bPreviewMode; // 0x14c	
	AttachmentHandle_t m_hAttachment; // 0x14d	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x230
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_vecProviders"
// MNetworkVarNames "uint32 m_nDisabledGroups"
// MNetworkVarNames "uint32 m_bvEnabledStateMask"
// MNetworkVarNames "uint32 m_bvDisabledStateMask"
// MNetworkVarNames "uint32 m_bvEnabledPredictedStateMask"
class CModifierProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	CHandle< C_BaseEntity > m_hOwner; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x15a]; // 0x34
public:
	uint8_t m_nProviderVisitedFlags; // 0x18e	
	bool m_bModifierStatesDirty; // 0x18f	
	bool m_bPredictedOwner; // 0x190	
	int8_t m_iLockRefCount; // 0x191	
private:
	[[maybe_unused]] uint8_t __pad0192[0x2]; // 0x192
public:
	ModifierPropRuntimeHandle_t m_hHandle; // 0x194	
private:
	[[maybe_unused]] uint8_t __pad0196[0x2]; // 0x196
public:
	uint32_t m_nBroadcastEventListenerMask; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0xc]; // 0x19c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecProviders; // 0x1a8	
	// MNetworkEnable
	uint32_t m_nDisabledGroups; // 0x1c0	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledStateMask[5]; // 0x1c4	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvDisabledStateMask[5]; // 0x1d8	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledPredictedStateMask[5]; // 0x1ec	
	
	// Datamap fields:
	// void m_pNotifyOwnerEvents; // 0x1a0
	// void m_vecModifiers; // 0x38
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13e0
// Has VTable
// 
// MNetworkVarNames "float m_flForwardSpeed"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
class C_NPC_NanoRollermine : public C_AI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad13c0[0x18]; // 0x13c0
public:
	// MNetworkEnable
	float m_flForwardSpeed; // 0x13d8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hOwnerPawn; // 0x13dc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c8
// Has VTable
class C_NPC_HeroDecoy : public C_NPC_HeroCloneTrooper
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1f8
// Has VTable
class CCitadel_Modifier_TenguUrn_Aura : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e0[0x38]; // 0xe0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CGameModifier_OverrideTargetIdentifier : public CCitadelModifier
{
public:
	CGlobalSymbol m_sTargetIdentifier; // 0xc0	
	CHandle< C_BaseEntity > m_hTarget; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	CGlobalSymbol m_sAttachmentName; // 0xd0	
	AttachmentHandle_t m_hAttachment; // 0xd8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_FealtyTarget : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1678
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_RocketBarrageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BarrageModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_StackingSlowModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1500	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15e0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // 0x15f0	
	// MPropertyStartGroup "+Rocket Barrage Properties"
	float m_flMoveSpeedReductionPct; // 0x1670	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_IncendiaryDebuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_XPOrbVData : public CEntitySubclassVDataBase
{
public:
	bool m_bIsObjective; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0029[0x7]; // 0x29
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Played to the player who claimed the orb."
	CSoundEventName m_strOrbClaimed; // 0x30	
	// MPropertyDescription "Played to the teammates of the player who claimed the orb."
	CSoundEventName m_strOrbClaimedTeammate; // 0x40	
	// MPropertyDescription "Played to the player when they denied an enemy orb."
	CSoundEventName m_strOrbDenied; // 0x50	
	// MPropertyDescription "Played to assigned earners when an enemy denied their orb."
	CSoundEventName m_strOrbDeniedPlayer; // 0x60	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sOrbModel; // 0x70	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyGlowParticle; // 0x150	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyGlowParticle; // 0x230	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sGoldReceivedParticle; // 0x310	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyOrbDeniedParticle; // 0x3f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyOrbDeniedParticle; // 0x4d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFriendlyOrbEarnedParticle; // 0x5b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEnemyOrbEarnedParticle; // 0x690	
	// MPropertyStartGroup "Behavior"
	float m_flOrbSpawnDelayMin; // 0x770	
	float m_flOrbSpawnDelayMax; // 0x774	
	float m_flOrbSpawnOffsetZ; // 0x778	
	float m_flOrbSpawnOffsetRandomXYZ; // 0x77c	
	float m_flGravityScale; // 0x780	
	float m_flLateralSpeedMin; // 0x784	
	float m_flLateralSpeedMax; // 0x788	
	float m_flUpSpeedMin; // 0x78c	
	float m_flUpSpeedMax; // 0x790	
	float m_flBurstSpeedMultiplier; // 0x794	
	float m_flBurstSpeedDuration; // 0x798	
	float m_flOscillateFrequency; // 0x79c	
	float m_flLifeTime; // 0x7a0	
	float m_flCollisionRadius; // 0x7a4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "CUtlStringToken m_ID"
// MNetworkVarNames "Vector4D m_Values"
struct EntityRenderAttribute_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	CUtlStringToken m_ID; // 0x30	
	// MNetworkEnable
	Vector4D m_Values; // 0x34	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc88
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
class C_ShatterGlassShardPhysics : public C_PhysicsProp
{
private:
	[[maybe_unused]] uint8_t __pad0c00[0x8]; // 0xc00
public:
	// MNetworkEnable
	shard_model_desc_t m_ShardDesc; // 0xc08	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTargetdummy3VData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe00
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "GameTime_t m_flLandedTime"
// MNetworkVarNames "bool m_bLanded"
// MNetworkVarNames "bool m_bFalling"
// MNetworkVarNames "bool m_bInStoneForm"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_Tengu_StoneForm : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x1c0]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flStartTime; // 0xde8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flLandedTime; // 0xdec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bLanded; // 0xdf0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bFalling; // 0xdf1	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInStoneForm; // 0xdf2	
private:
	[[maybe_unused]] uint8_t __pad0df3[0x1]; // 0xdf3
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flStartHeight; // 0xdf4	
	ParticleIndex_t m_nStoneFormEffect; // 0xdf8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CModifier_CheatDeathImmunity : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
class C_LightSpotEntity : public C_LightEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_Cadence_Crescendo_AOE : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e0[0x8]; // 0xe0
public:
	int32_t m_nTicks; // 0xe8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Grasp_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_VictimModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletShieldModifier; // 0x1500	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "bool m_bInFlight"
class CCitadel_Ability_Tokamak_DyingStar : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nRollFXIndex; // 0xc28	
	// MNetworkEnable
	bool m_bInFlight; // 0xc2c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_SleepingVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_TenguLaserBurn : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
class CCitadel_Ability_IceGrenade : public C_CitadelBaseAbility
{
public:
	Vector m_vLaunchPosition; // 0xc28	
	QAngle m_qLaunchAngle; // 0xc34	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_ChargePullEnemy : public CCitadelModifier
{
public:
	Vector m_vecOffsetDir; // 0xc0	
	float m_flTackleRadius; // 0xcc	
	float m_flPullTargetSpeed; // 0xd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_SlowingTech_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Quarantine : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_ShieldTracker_Bullet : public CCitadel_Modifier_ShieldTracker_Base
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1f0
// Has VTable
class CCitadel_Modifier_IceBeam_Stacking_Slow : public CCitadel_Modifier_Base_Buildup
{
private:
	[[maybe_unused]] uint8_t __pad00d0[0x118]; // 0xd0
public:
	float m_flCurrBuildup; // 0x1e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
// 
// MNetworkVarNames "float m_flVisibilityStrength"
// MNetworkVarNames "float m_flFogDistanceMultiplier"
// MNetworkVarNames "float m_flFogMaxDensityMultiplier"
// MNetworkVarNames "float m_flFadeTime"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "bool m_bIsEnabled"
class C_PlayerVisibility : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flVisibilityStrength; // 0x538	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogDistanceMultiplier; // 0x53c	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFogMaxDensityMultiplier; // 0x540	
	// MNetworkEnable
	// MNetworkChangeCallback "PlayerVisibilityStateChanged"
	float m_flFadeTime; // 0x544	
	// MNetworkEnable
	bool m_bStartDisabled; // 0x548	
	// MNetworkEnable
	bool m_bIsEnabled; // 0x549	
	
	// Datamap fields:
	// bool InputEnable; // 0x0
	// bool InputDisable; // 0x0
	// float InputSetPlayerVisibilityStrength; // 0x0
	// float InputSetPlayerFogDistanceMultiplier; // 0x0
	// float InputSetPlayerFogMaxDensityMultiplier; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityRocketLauncherVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Warden_CrowdControl_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
class CCitadel_Ability_Nano_Warp : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_HatTrick : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flDashEndTime"
// MNetworkVarNames "bool m_bIsSpeedBursting"
class CCitadel_Ability_FlameDash : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDashEndTime; // 0xc28	
	// MNetworkEnable
	bool m_bIsSpeedBursting; // 0xc40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ArcaneEaterDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_Inhibitor_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe48
// Has VTable
class CCitadelPlayerPawnBase : public C_BasePlayerPawn
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a8
// Has VTable
class C_Citadel_Projectile_Tier2Boss_RocketBarrage : public C_CitadelProjectile
{
public:
	ParticleIndex_t m_nLaserParticleIndex; // 0x898	
	Vector m_vecSmoothedVelocity; // 0x89c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BreakablePropClipSizePickupVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Powerup Values"
	float m_flClipSize; // 0x5f0	
	int32_t m_nClipCount; // 0x5f4	
	float m_flFireRate; // 0x5f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1ca8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHatTrickVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraTransitionBackToHero; // 0x14e0	
	float m_flCameraHoldAfterActivate; // 0x1560	
private:
	[[maybe_unused]] uint8_t __pad1564[0x4]; // 0x1564
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HatTrickChannelParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // 0x1808	
	float m_ArrowOffsetX; // 0x18e8	
	float m_ArrowCameraDistance; // 0x18ec	
	float m_ArrowCameraHeightOffset; // 0x18f0	
	float m_ArrowInitialPitch; // 0x18f4	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x18f8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1908	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1918	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x1928	
	float m_flSpeedAccel; // 0x192c	
	float m_flSpeedDeccel; // 0x1930	
	float m_flBaseProjectileSpeed; // 0x1934	
	ProjectileInfo_t m_activatedProjectile; // 0x1938	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x248
// Has VTable
class CCitadel_Modifier_VoidSphere : public CCitadelModifier
{
public:
	bool m_bTeleported; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	ParticleIndex_t m_particleStart; // 0xc4	
	ParticleIndex_t m_particleEnd; // 0xc8	
	ParticleIndex_t m_particleTrail; // 0xcc	
	Vector m_vecEndLocation; // 0xd0	
	Vector m_vecStartPosition; // 0xdc	
	Vector m_vecEndLocationCaster; // 0xe8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x970
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ZiplineKnockdownImmuneVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusEnemyParticle; // 0x890	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_Upgrade_OverdriveClip_Reload : public CCitadelModifier
{
public:
	int32_t m_nStartingClipSize; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_BreakablePropDoubleJump : public CCitadelModifier
{
public:
	int32_t m_nTickJumped; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b18
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData
{
public:
	// MPropertyStartGroup "+Cast Properties"
	float m_flJumpFallSpeedMax; // 0x14e8	
	float m_flJumpAirDrag; // 0x14ec	
	float m_flJumpAirSpeedMax; // 0x14f0	
	// MPropertyStartGroup "+Dash Properties"
	float m_flDashSpeed; // 0x14f4	
	float m_flDashCloseEnoughToTarget; // 0x14f8	
	float m_flDashLockOntoTargetDist; // 0x14fc	
	float m_flTargetMinSpeedToStopChasing; // 0x1500	
	float m_flVelocityTurnSpringStrength; // 0x1504	
	CRemapFloat m_flAngleToSpeedScale; // 0x1508	
	// MPropertyStartGroup "+Attack Properties"
	float m_flAnimToStrikePointTime; // 0x1518	
	// MPropertyStartGroup "+Grapple Properties"
	float m_flGrappleShotFloatTime; // 0x151c	
	float m_flGrappleShotDelayToFlyOnHit; // 0x1520	
	float m_flGrappleSpeed; // 0x1524	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1528	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x1538	
	CEmbeddedSubclass< CBaseModifier > m_WeaponBuffModifier; // 0x1548	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x1558	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1638	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // 0x1718	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x17f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x18d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x19b8	
	CSoundEventName m_strStartDash; // 0x19c8	
	CSoundEventName m_strStartAttack; // 0x19d8	
	CSoundEventName m_strGrappleHitTarget; // 0x19e8	
	CSoundEventName m_strGrappleHitWorld; // 0x19f8	
	CSoundEventName m_strGrappleHitNothing; // 0x1a08	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a18	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1a98	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_FlyingStrikeTarget : public CCitadel_Modifier_Base
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGooGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GooGrenadeImpactModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_GooGrenadePuddleAuraModifier; // 0x14f0	
	// MPropertyStartGroup "Particles"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeSkipParticle; // 0x1500	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeExplodeParticle; // 0x15e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrenadeHitImpactSound; // 0x16c0	
	CSoundEventName m_GrenadeMissImpactSound; // 0x16d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FireBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProgressBarModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_FireBombModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "C_CitadelGameRules * m_pGameRules"
class C_CitadelGameRulesProxy : public C_GameRulesProxy
{
public:
	// MNetworkEnable
	// MNetworkTypeAlias "CCitadelGamerules*"
	// MNetworkPriority "32"
	C_CitadelGameRules* m_pGameRules; // 0x538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLastUpdate"
// MNetworkVarNames "STrooperFOWEntity m_vecFOWEntities"
class CCitadelTrooperMinimap : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	GameTime_t m_timeLastUpdate; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad053c[0x4]; // 0x53c
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	C_UtlVectorEmbeddedNetworkVar< STrooperFOWEntity > m_vecFOWEntities; // 0x540	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa88
// Has VTable
// 
// MNetworkIncludeByName "m_bTakesDamage"
// MNetworkIncludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "Vector m_vecUnitStatusOffset"
class C_NPC_BaseDefenseSentry : public C_NPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	Vector m_vecUnitStatusOffset; // 0xa78	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd48
// Has VTable
// 
// MNetworkVarNames "CUtlString m_strDefaultSkin"
// MNetworkVarNames "CUtlString m_strFriendlySkin"
// MNetworkVarNames "CUtlString m_strEnemySkin"
// MNetworkVarNames "bool m_bIsWorld"
class C_Citadel_DynamicProp : public C_DynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0d10[0x10]; // 0xd10
public:
	int32_t m_nPlayerTeamEvent; // 0xd20	
private:
	[[maybe_unused]] uint8_t __pad0d24[0x4]; // 0xd24
public:
	// MNetworkEnable
	CUtlString m_strDefaultSkin; // 0xd28	
	// MNetworkEnable
	CUtlString m_strFriendlySkin; // 0xd30	
	// MNetworkEnable
	CUtlString m_strEnemySkin; // 0xd38	
	// MNetworkEnable
	bool m_bIsWorld; // 0xd40	
	
	// Datamap fields:
	// CUtlSymbolLarge SetFriendlySkin; // 0x0
	// CUtlSymbolLarge SetEnemySkin; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "HeroID_t m_nHeroID"
// MNetworkVarNames "HeroID_t m_nHeroLoading"
class CCitadelHeroComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0xc]; // 0x8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHeroChanged"
	HeroID_t m_nHeroID; // 0x14	
	// MNetworkEnable
	// MNetworkPriority "32"
	HeroID_t m_nHeroLoading; // 0x18	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelHeroComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelHeroComponent")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Item_DPS_Aura : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
class C_RagdollManager : public C_BaseEntity
{
public:
	// MNetworkEnable
	int8_t m_iCurrentMaxRagdollCount; // 0x538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTargetdummy4VData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa70
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierIcePathVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FrontModel; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BodyModel; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatingParticle; // 0x890	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IcePathBuffParticle; // 0x970	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // 0xa50	
	CEmbeddedSubclass< CCitadelModifier > m_BonusSpiritLingerModifier; // 0xa60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
class CCitadel_Modifier_VitalitySuppressor : public CCitadelModifier
{
public:
	GameTime_t m_flLastTickTime; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SlowVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x870
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
// MNetworkVarNames "HMaterialStrong m_hSkyMaterialLightingOnly"
// MNetworkVarNames "bool m_bStartDisabled"
// MNetworkVarNames "Color m_vTintColor"
// MNetworkVarNames "Color m_vTintColorLightingOnly"
// MNetworkVarNames "float m_flBrightnessScale"
// MNetworkVarNames "int m_nFogType"
// MNetworkVarNames "float m_flFogMinStart"
// MNetworkVarNames "float m_flFogMinEnd"
// MNetworkVarNames "float m_flFogMaxStart"
// MNetworkVarNames "float m_flFogMaxEnd"
// MNetworkVarNames "bool m_bEnabled"
class C_EnvSky : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // 0x810	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // 0x818	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bStartDisabled; // 0x820	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColor; // 0x821	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	Color m_vTintColorLightingOnly; // 0x825	
private:
	[[maybe_unused]] uint8_t __pad0829[0x3]; // 0x829
public:
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flBrightnessScale; // 0x82c	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	int32_t m_nFogType; // 0x830	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinStart; // 0x834	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMinEnd; // 0x838	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxStart; // 0x83c	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	float m_flFogMaxEnd; // 0x840	
	// MNetworkEnable
	// MNetworkChangeCallback "SkyStateChanged"
	bool m_bEnabled; // 0x844	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x118
// Has VTable
class CCitadel_Item_Discord_Aura_Enemy : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ItemPickupPunchable : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_Slork_Riptide : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Slork_Raging_Current : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Rutger_CheatDeath : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CCitadel_Ability_Tokamak_Breach : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
// MNetworkVarNames "Vector m_vecLeapVelocity"
// MNetworkVarNames "bool m_bJumped"
// MNetworkVarNames "bool m_bCanDashJump"
// MNetworkVarNames "int m_nDesiredAirJumpCount"
// MNetworkVarNames "int m_nExecutedAirJumpCount"
// MNetworkVarNames "bool m_bInSlideJump"
// MNetworkVarNames "int8 m_nConsecutiveAirJumps"
class CCitadel_Ability_Jump : public C_CitadelBaseAbility
{
public:
	GameTime_t m_flLastTimeOnZipLine; // 0xc28	
	GameTime_t m_flLastOnGroundTime; // 0xc2c	
	GameTime_t m_flPhaseStartTime; // 0xc30	
	GameTime_t m_flJumpTime; // 0xc34	
	bool m_bLastJumpWasDashJump; // 0xc38	
	bool m_bShouldCreateAirJumpEffects; // 0xc39	
private:
	[[maybe_unused]] uint8_t __pad0c3a[0x2]; // 0xc3a
public:
	GameTime_t m_flDoubleJumpFailTime; // 0xc3c	
	ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c44[0x11c]; // 0xc44
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd60	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xd78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecLeapVelocity; // 0xd90	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bJumped; // 0xd9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCanDashJump; // 0xd9d	
private:
	[[maybe_unused]] uint8_t __pad0d9e[0x2]; // 0xd9e
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nDesiredAirJumpCount; // 0xda0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nExecutedAirJumpCount; // 0xda4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInSlideJump; // 0xda8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveAirJumps; // 0xda9	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class CInfoTarget : public C_PointEntity
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_PredatorPrecision : public CCitadel_Modifier_Intrinsic_Base
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechCleaveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CleavePlayerParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CleaveTrooperParticle; // 0x6d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sVictimSound; // 0x7b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CScaleFunctionAbilityPropertyMultiStats : public CScaleFunctionBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
class C_DynamicPropAlias_cable_dynamic : public C_DynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1610
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityChargedTackleVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargePreviewParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ChargePrepareModifier; // 0x15c0	
	CEmbeddedSubclass< CCitadelModifier > m_ChargeActiveModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_DragModifier; // 0x15f0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strHitSound; // 0x1600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SpilledBloodThinkerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpilledBloodParticle; // 0x5f0	
	// MPropertyStartGroup "Gameplay"
	float m_flTickRate; // 0x6d0	
	float m_flHeight; // 0x6d4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Fervor : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_AttachTarget : public CCitadelModifier
{
public:
	CHandle< C_BaseEntity > m_hTarget; // 0xc0	
	Vector m_vecOffset; // 0xc4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CDestructableBuildingVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "GamePlay"
	int32_t m_iMaxHealthFinal; // 0x28	
	int32_t m_iMaxHealthGenerator; // 0x2c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ObjectiveRegen; // 0x30	
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorBulletResistModifier; // 0x40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
class C_DynamicPropAlias_dynamic_prop : public C_DynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13f0
// Has VTable
class C_NPC_TrooperNeutralNodeMover : public C_NPC_TrooperNeutral
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Chomp_LowHealth_GlowVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strLocalStatusEffect; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierGravityLassoEnemyVData : public CCitadel_Modifier_StunnedVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LassoEffect; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Wraith_RapidFireVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TargetBuffSound; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RapidFireModifier; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaa8
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BasePlayerPawn > m_hTouchedPlayeres"
class C_ItemWeaponParts : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a70[0x20]; // 0xa70
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_hTouchedPlayeres; // 0xa90	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStackingDamageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StackingModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x218
// Has VTable
class CCitadel_Modifier_TechDamageProcWatcher : public CCitadel_Modifier_BaseEventProc
{
public:
	GameTime_t m_flNextProcTime; // 0x168	
	ShotID_t m_shotProced; // 0x16c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13f0
// Has VTable
class C_NPC_Boss_Tier2_Sidelanes : public C_NPC_Boss_Tier2
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_Citadel_Projectile_BloodBomb : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_Discord_AuraVData_Enemy : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectEnemy; // 0x630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectFriendly; // 0x710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectSelf; // 0x7f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a0
// Has VTable
// 
// MNetworkVarNames "string_t m_iszStackName"
// MNetworkVarNames "string_t m_iszOperatorName"
// MNetworkVarNames "string_t m_iszOpvarName"
// MNetworkVarNames "Vector m_vDistanceInnerMins"
// MNetworkVarNames "Vector m_vDistanceInnerMaxs"
// MNetworkVarNames "Vector m_vDistanceOuterMins"
// MNetworkVarNames "Vector m_vDistanceOuterMaxs"
// MNetworkVarNames "int m_nAABBDirection"
class CCitadelSoundOpvarSetOBB : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x18]; // 0x538
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszStackName; // 0x550	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOperatorName; // 0x558	
	// MNetworkEnable
	CUtlSymbolLarge m_iszOpvarName; // 0x560	
	// MNetworkEnable
	Vector m_vDistanceInnerMins; // 0x568	
	// MNetworkEnable
	Vector m_vDistanceInnerMaxs; // 0x574	
	// MNetworkEnable
	Vector m_vDistanceOuterMins; // 0x580	
	// MNetworkEnable
	Vector m_vDistanceOuterMaxs; // 0x58c	
	// MNetworkEnable
	int32_t m_nAABBDirection; // 0x598	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Slork_RagingCurrentVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CountdownModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WaterAuraParticle; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
class CCitadel_Item_AOERoot : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Wrecker_UltimateGrabEnemyVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyHeroStasisEffect; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyHeroGrabEffect; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CModifier_Synth_Barrage_Amp : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetLeapVData : public CitadelAbilityVData
{
public:
	float m_flChannelingAirDrag; // 0x14e0	
	float m_flChannelingMaxFallSpeed; // 0x14e4	
	float m_flVerticalMoveSpeedTarget; // 0x14e8	
private:
	[[maybe_unused]] uint8_t __pad14ec[0x4]; // 0x14ec
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DustParticle; // 0x1500	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // 0x15e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x16c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_AOE_Tech_ShieldVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DurationModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class C_SingleplayRules : public C_GameRules
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb18
// Has VTable
class C_LocalTempEntity : public CBaseAnimGraph
{
public:
	int32_t flags; // 0xa70	
	GameTime_t die; // 0xa74	
	float m_flFrameMax; // 0xa78	
	float x; // 0xa7c	
	float y; // 0xa80	
	float fadeSpeed; // 0xa84	
	float bounceFactor; // 0xa88	
	int32_t hitSound; // 0xa8c	
	int32_t priority; // 0xa90	
	Vector tentOffset; // 0xa94	
	QAngle m_vecTempEntAngVelocity; // 0xaa0	
	int32_t tempent_renderamt; // 0xaac	
	Vector m_vecNormal; // 0xab0	
	float m_flSpriteScale; // 0xabc	
	int32_t m_nFlickerFrame; // 0xac0	
	float m_flFrameRate; // 0xac4	
	float m_flFrame; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0acc[0x4]; // 0xacc
public:
	char* m_pszImpactEffect; // 0xad0	
	char* m_pszParticleEffect; // 0xad8	
	bool m_bParticleCollision; // 0xae0	
private:
	[[maybe_unused]] uint8_t __pad0ae1[0x3]; // 0xae1
public:
	int32_t m_iLastCollisionFrame; // 0xae4	
	Vector m_vLastCollisionOrigin; // 0xae8	
	Vector m_vecTempEntVelocity; // 0xaf4	
	Vector m_vecPrevAbsOrigin; // 0xb00	
	Vector m_vecTempEntAcceleration; // 0xb0c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CModifier_Thumper_Bullet_Watcher : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_Protection_Racket : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flExplodeEndTime"
// MNetworkVarNames "GameTime_t m_flBuffEndTime"
class CCitadel_Ability_InfinitySlash : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c30[0xa8]; // 0xc30
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flExplodeEndTime; // 0xcd8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flBuffEndTime; // 0xcdc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadelModifierProjectilePitchingLoopSoundThinker : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has Trivial Constructor
// Has Trivial Destructor
struct C_EnvWindShared__WindAveEvent_t
{
public:
	float m_flStartWindSpeed; // 0x0	
	float m_flAveWindSpeed; // 0x4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
class C_LightEnvironmentEntity : public C_LightDirectionalEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x118
// Has VTable
class CCitadel_Modifier_Tokamak_EnemySmokeAOE : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d8
// Has VTable
// 
// MNetworkIncludeByName "m_pEntity"
// MNetworkIncludeByName "m_flSimulationTime"
// MNetworkIncludeByName "m_flCreateTime"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkIncludeByName "m_nNextThinkTick"
// MNetworkIncludeByName "m_fFlags"
// MNetworkUserGroupProxy "CBasePlayerController"
// MNetworkUserGroupProxy "CBasePlayerController"
// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "uint32 m_nTickBase"
// MNetworkVarNames "CHandle< CBasePlayerPawn> m_hPawn"
// MNetworkVarNames "bool m_bKnownTeamMismatch"
// MNetworkVarNames "PlayerConnectedState m_iConnected"
// MNetworkVarNames "char m_iszPlayerName"
// MNetworkVarNames "uint64 m_steamID"
// MNetworkVarNames "uint32 m_iDesiredFOV"
// MNetworkReplayCompatField "m_skeletonInstance\.m_vecOrigin\..*|"
class CBasePlayerController : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x8]; // 0x538
public:
	int32_t m_nFinalPredictedTick; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0544[0x4]; // 0x544
public:
	// -> needsprocessing - 0x548
	// -> command_number - 0x5e0
	C_CommandContext m_CommandContext; // 0x548	
	uint64_t m_nInButtonsWhichAreToggles; // 0x5e8	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nTickBase; // 0x5f0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPawnChanged"
	CHandle< C_BasePlayerPawn > m_hPawn; // 0x5f4	
	// MNetworkEnable
	bool m_bKnownTeamMismatch; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05f9[0x3]; // 0x5f9
public:
	CHandle< C_BasePlayerPawn > m_hPredictedPawn; // 0x5fc	
	CSplitScreenSlot m_nSplitScreenSlot; // 0x600	
	CHandle< CBasePlayerController > m_hSplitOwner; // 0x604	
	CUtlVector< CHandle< CBasePlayerController > > m_hSplitScreenPlayers; // 0x608	
	bool m_bIsHLTV; // 0x620	
private:
	[[maybe_unused]] uint8_t __pad0621[0x3]; // 0x621
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnConnectionStateChanged"
	PlayerConnectedState m_iConnected; // 0x624	
	// MNetworkEnable
	// MNetworkChangeCallback "OnPlayerControllerNameChanged"
	char m_iszPlayerName[128]; // 0x628	
private:
	[[maybe_unused]] uint8_t __pad06a8[0x8]; // 0x6a8
public:
	// MNetworkEnable
	// MNetworkEncoder "fixed64"
	// MNetworkChangeCallback "OnSteamIDChanged"
	uint64_t m_steamID; // 0x6b0	
	bool m_bIsLocalPlayerController; // 0x6b8	
private:
	[[maybe_unused]] uint8_t __pad06b9[0x3]; // 0x6b9
public:
	// MNetworkEnable
	uint32_t m_iDesiredFOV; // 0x6bc	
	
	// Static fields:
	static bool &Get_sm_bRunningPredictedClientStringCommands(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBasePlayerController")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// bool fakeclient; // 0x7fffffff
	// bool is_hltv; // 0x7fffffff
	// const char * playername; // 0x7fffffff
	// bool reserving; // 0x7fffffff
	// void m_pCurrentCommand; // 0x6a8
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier3VData : public CAI_CitadelNPCVData
{
public:
	int32_t m_nPhase2Health; // 0xe18	
	float m_flEyeZOffset; // 0xe1c	
	float m_flDefaultMoveSpeed; // 0xe20	
	float m_flDyingMoveSpeed; // 0xe24	
	float m_flMovingToFinalPositionSpeed; // 0xe28	
private:
	[[maybe_unused]] uint8_t __pad0e2c[0x4]; // 0xe2c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathSmallExplosionParticle; // 0xe30	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathLargeExplosionParticle; // 0xf10	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeakpointBrokenExplosionParticle; // 0xff0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpExplosionParticle; // 0x10d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0x11b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DyingSmallExplosion; // 0x1290	
	CSoundEventName m_AvatarKilledSound; // 0x12a0	
	CSoundEventName m_AvatarBecomePatronSound; // 0x12b0	
	CSoundEventName m_PatronLandedSound; // 0x12c0	
	CSoundEventName m_PatronKilledSound; // 0x12d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_LaserBeamModifier; // 0x12e0	
	CEmbeddedSubclass< CBaseModifier > m_DyingModifier; // 0x12f0	
	CEmbeddedSubclass< CBaseModifier > m_VulnerableModifier; // 0x1300	
	CEmbeddedSubclass< CBaseModifier > m_Phase1Modifier; // 0x1310	
	CEmbeddedSubclass< CBaseModifier > m_Phase2Modifier; // 0x1320	
	CEmbeddedSubclass< CBaseModifier > m_BackdoorProtection; // 0x1330	
	CEmbeddedSubclass< CBaseModifier > m_ObjectiveRegen; // 0x1340	
	// MPropertyStartGroup "Laser"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserChargingParticle; // 0x1350	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserBeamEffect; // 0x1430	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserPreviewEffect; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserDamageEffect; // 0x15f0	
	float m_flLaserTrackingSpeed; // 0x16d0	
	float m_flLaserTrackingMaxSpeed; // 0x16d4	
	float m_flLaserCastingTrackSpeed; // 0x16d8	
	float m_flLaserCastingTrackMaxSpeed; // 0x16dc	
	float m_flLaserTargetingZOffset; // 0x16e0	
	float m_flLaserDPSToPlayers; // 0x16e4	
	float m_flLaserDPSToNPCs; // 0x16e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd58
// Has VTable
class CCitadel_Ability_Hornet_Chain : public C_CitadelBaseAbility
{
public:
	Vector m_vLaunchPosition; // 0xc28	
	QAngle m_qLaunchAngle; // 0xc34	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1618
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemSingleTargetStunVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StunDelayModifier; // 0x1528	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1638
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_WitheringWhip_VData : public CCitadel_Item_TrackingProjectileApplyModifierVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x1628	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x718
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "int m_nResolutionX"
// MNetworkVarNames "int m_nResolutionY"
// MNetworkVarNames "string_t m_szLayoutFileName"
// MNetworkVarNames "string_t m_RenderAttrName"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_TargetEntities"
// MNetworkVarNames "int m_nTargetChangeCount"
// MNetworkVarNames "string_t m_vecCSSClasses"
class CInfoOffscreenPanoramaTexture : public C_PointEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad0539[0x3]; // 0x539
public:
	// MNetworkEnable
	int32_t m_nResolutionX; // 0x53c	
	// MNetworkEnable
	int32_t m_nResolutionY; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0544[0x4]; // 0x544
public:
	// MNetworkEnable
	CUtlSymbolLarge m_szLayoutFileName; // 0x548	
	// MNetworkEnable
	CUtlSymbolLarge m_RenderAttrName; // 0x550	
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // 0x558	
	// MNetworkEnable
	int32_t m_nTargetChangeCount; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0574[0x4]; // 0x574
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad0590[0x160]; // 0x590
public:
	bool m_bCheckCSSClasses; // 0x6f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MNetworkVarNames "uint8 m_Flags"
// MNetworkVarNames "uint8 m_LightStyle"
// MNetworkVarNames "float32 m_Radius"
// MNetworkVarNames "int32 m_Exponent"
// MNetworkVarNames "float32 m_InnerAngle"
// MNetworkVarNames "float32 m_OuterAngle"
// MNetworkVarNames "float32 m_SpotRadius"
class C_DynamicLight : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	uint8_t m_Flags; // 0x810	
	// MNetworkEnable
	uint8_t m_LightStyle; // 0x811	
private:
	[[maybe_unused]] uint8_t __pad0812[0x2]; // 0x812
public:
	// MNetworkEnable
	float m_Radius; // 0x814	
	// MNetworkEnable
	int32_t m_Exponent; // 0x818	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_InnerAngle; // 0x81c	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "360.000000"
	float m_OuterAngle; // 0x820	
	// MNetworkEnable
	float m_SpotRadius; // 0x824	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1820
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeapon_SlorkVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x1528	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponShapeParticle; // 0x1608	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponRangeAssistParticle; // 0x16e8	
	int32_t m_nNumConePoints; // 0x17c8	
	float m_flRoundPerSecond; // 0x17cc	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x17d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_PoisonSprayerHitSound; // 0x17e0	
	CSoundEventName m_WeaponLoopStartSound; // 0x17f0	
	CSoundEventName m_WeaponLoopSound; // 0x1800	
	CSoundEventName m_WeaponLoopEndSound; // 0x1810	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Bull_Leap_BoostingVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BoostTrailParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_CloakingDeviceActive_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AmbushModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x1538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_TeamRelativeParticle : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Rutger_CheatDeath_Activated : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Warden_HighAlert : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ImmobilizeTrapDOT_ThinkerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // 0x5f0	
	// MPropertyStartGroup "Gameplay"
	float m_flTickRate; // 0x6d0	
	float m_flHeight; // 0x6d4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityGuidedArrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // 0x14e0	
	CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // 0x1560	
	float m_flCameraHoldAtExplosion; // 0x15e0	
	float m_flFadeToBlackTime; // 0x15e4	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GuidedArrowChannelParticle; // 0x17a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ProjectileModel; // 0x1888	
	float m_ArrowOffsetX; // 0x1968	
	float m_ArrowCameraDistance; // 0x196c	
	float m_ArrowCameraHeightOffset; // 0x1970	
	float m_ArrowInitialPitch; // 0x1974	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1978	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1988	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1998	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x19a8	
	float m_flSpeedAccel; // 0x19ac	
	float m_flSpeedDeccel; // 0x19b0	
	float m_flBaseProjectileSpeed; // 0x19b4	
	float m_flMaxProjectileSpeed; // 0x19b8	
	float m_flArrowModelTurnSpringStrength; // 0x19bc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerJumpVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InAirModifier; // 0x15c0	
	CEmbeddedSubclass< CCitadelModifier > m_PowerJumpModifier; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_ArmorUpgrade_PersonalRejuvenator : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_PayloadPusherAuraTarget : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_TriggerVolume : public C_BaseModelEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x828
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
// MNetworkVarNames "bool m_bState"
class C_FuncElectrifiedVolume : public C_FuncBrush
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0814[0x4]; // 0x814
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x818	
	// MNetworkEnable
	bool m_bState; // 0x820	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Tokamak_Radiance : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierCadenceGunSpikesVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CUtlString m_strSmallIconCssClassMax; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_GrandFinale_BuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x600	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x6e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Cadence_AnthemBuffVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1768
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_InfinitySlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flRiseSpeed; // 0x14e8	
	float m_flRiseDuration; // 0x14ec	
	float m_flSpeedDecayScale; // 0x14f0	
	float m_flExplodeHoldTime; // 0x14f4	
	float m_flExplosionShakeAmplitude; // 0x14f8	
	float m_flExplosionShakeFrequency; // 0x14fc	
	float m_flExplosionShakeDuration; // 0x1500	
private:
	[[maybe_unused]] uint8_t __pad1504[0x4]; // 0x1504
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOERangeEffect; // 0x1508	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnimCastEffect; // 0x15e8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x16c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1748	
	CEmbeddedSubclass< CCitadelModifier > m_BuffTimerModifier; // 0x1758	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TangoTether_TetherReceiverVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAttackBuffParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TetherSound; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_WreckerSalvageVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SalvageBeam; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ConnectBeam; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelProjectile> m_hProjectile"
// MNetworkVarNames "CHandle< CBaseModelEntity> m_hHat"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "bool m_bLaunched"
class CCitadel_Ability_HatTrick : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x8]; // 0xc28
public:
	// MNetworkEnable
	CHandle< C_CitadelProjectile > m_hProjectile; // 0xc30	
	// MNetworkEnable
	CHandle< C_BaseModelEntity > m_hHat; // 0xc34	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xc38	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xc3c	
	// MNetworkEnable
	bool m_bLaunched; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c41[0x3]; // 0xc41
public:
	GameTime_t m_flCastTime; // 0xc44	
	bool m_bNeedsExplosion; // 0xc48	
private:
	[[maybe_unused]] uint8_t __pad0c49[0x3]; // 0xc49
public:
	QAngle m_angCasterAnglesAtCastTime; // 0xc4c	
	bool m_bInKillFlow; // 0xc58	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Ricochet_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RicochetTracerParticle; // 0x620	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Weapon_BossTier2 : public CCitadelBaseAbilityServerOnly
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2e8
// Has VTable
class CCitadel_Modifier_Camouflage_Invis : public CCitadel_Modifier_Invis
{
public:
	Vector m_vCastPosition; // 0x268	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_SandPhantom_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WhirlwindSpeedModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_SleepBomb_Asleep : public CCitadel_Modifier_Sleep
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Lockdown_BulletResist : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_WreckerUltimate_Invincible : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
// Has VTable
class CCitadel_Ability_Lash : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_BloodBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SpilledBloodModifier; // 0x15c0	
	// MPropertyStartGroup "Misc"
	CUtlString m_strBloodSpillStatName; // 0x15d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_LongRangeSlowingTech_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "float32 m_flFadeStartDist"
// MNetworkVarNames "float32 m_flFadeEndDist"
class C_EnvDetailController : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flFadeStartDist; // 0x538	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x53c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CCitadel_Ability_Disruptive_Charge : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa70
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Mirage_SandPhantom_WhirlwindEvasion_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffSelf; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffEnemy; // 0x890	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReflectedBulletTracerParticle; // 0x970	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAttackerHitSound; // 0xa50	
	CSoundEventName m_strVictimHitSound; // 0xa60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Cadence_SilenceContraptionsDebuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe20
// Has VTable
class CCitadel_Ability_Spinning_Blade : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
// Has VTable
class CCitadel_Ability_DeathTax : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_StaticCharge : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_DebuffReducerVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffReducedParticle; // 0x1528	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // 0x1608	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_MoveSpeedModifier; // 0x16e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CScaleFunctionAbilityProperty_TechDamage : public CScaleFunctionBase
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'entity2')
// Alignment: 8
// Size: 0x78
// 
// MNetworkVarNames "int32 m_nameStringableIndex"
class CEntityIdentity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x14]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; // 0x14	
	CUtlSymbolLarge m_name; // 0x18	
	CUtlSymbolLarge m_designerName; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	uint32_t m_flags; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MNetworkDisable
	WorldGroupId_t m_worldGroupId; // 0x38	
	uint32_t m_fDataObjectTypes; // 0x3c	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0042[0x16]; // 0x42
public:
	CEntityIdentity* m_pPrev; // 0x58	
	CEntityIdentity* m_pNext; // 0x60	
	CEntityIdentity* m_pPrevByClass; // 0x68	
	CEntityIdentity* m_pNextByClass; // 0x70	
	
	// Datamap fields:
	// void m_pAttributes; // 0x48
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa90
// Has VTable
// 
// MNetworkVarNames "float m_flUpFactor"
// MNetworkVarNames "float m_flBounceVelocity"
class C_Citadel_Bounce_Pad : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	float m_flUpFactor; // 0xa78	
	// MNetworkEnable
	float m_flBounceVelocity; // 0xa7c	
	float m_flBarrelBounceVelocity; // 0xa80	
	float m_flBarrelUpFactor; // 0xa84	
	bool m_bSpeedOnLand; // 0xa88	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc08
// Has VTable
// 
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkVarNames "int m_eLootType"
class C_ItemCrate : public C_PhysicsProp
{
public:
	// MNetworkEnable
	int32_t m_eLootType; // 0xc00	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc00
// Has VTable
class C_ItemParachute : public C_PhysicsProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xda0
// Has VTable
// 
// MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
// MNetworkVarNames "GameTime_t m_LockOnStartTime"
class CCitadelBaseLockonAbility : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x118]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	C_UtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // 0xd40	
	// MNetworkEnable
	GameTime_t m_LockOnStartTime; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0d94[0x4]; // 0xd94
public:
	ParticleIndex_t m_nTargetingLightEffect; // 0xd98	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x608
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierItemPickupTimerVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Timers"
	float m_TimerToSilence; // 0x5f0	
	float m_SilenceDuration; // 0x5f4	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x5f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Rutger_Pulse_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityThumper1VData : public CitadelAbilityVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Uppercut_Buff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1710
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityViscousBowlingVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TransformStartFx; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFX; // 0x15c0	
	float m_flVerticalCameraOffsetLerpTime; // 0x16a0	
	float m_flVerticalCameraOffsetBias; // 0x16a4	
	float m_flVerticalCameraOffset; // 0x16a8	
	float m_flDistanceCameraOffsetLerpTime; // 0x16ac	
	float m_flDistanceCameraOffsetBias; // 0x16b0	
	float m_flDistanceCameraOffset; // 0x16b4	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strPopGraphParamter; // 0x16b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x16c0	
	CSoundEventName m_BallJumpSound; // 0x16d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x16e0	
	CEmbeddedSubclass< CCitadelModifier > m_HitTrackerModifier; // 0x16f0	
	CEmbeddedSubclass< CCitadelModifier > m_RollingModifier; // 0x1700	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Nearby_Enemy_Boost : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_IceBeam_Stacking_SlowVData : public CCitadel_Modifier_Base_BuildupVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // 0x608	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc50
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "bool m_bPickedUp"
class CCitadelItemPickupRejuv : public C_CitadelItemPickup
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xaa8	
	// MNetworkEnable
	bool m_bPickedUp; // 0xc48	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkOverride "m_fFlags C_BaseEntity"
class C_FuncMoveLinear : public C_BaseToggle
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8d0
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "m_nModelIndex"
// MNetworkIncludeByName "m_nRenderFX"
// MNetworkIncludeByName "m_nRenderMode"
// MNetworkIncludeByName "m_clrRender"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkOverride "m_clrRender"
// MNetworkVarNames "float32 m_flFrameRate"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "uint8 m_nNumBeamEnts"
// MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
// MNetworkVarNames "HMaterialStrong m_nHaloIndex"
// MNetworkVarNames "BeamType_t m_nBeamType"
// MNetworkVarNames "uint32 m_nBeamFlags"
// MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
// MNetworkVarNames "AttachmentHandle_t m_nAttachIndex"
// MNetworkVarNames "float32 m_fWidth"
// MNetworkVarNames "float32 m_fEndWidth"
// MNetworkVarNames "float32 m_fFadeLength"
// MNetworkVarNames "float32 m_fHaloScale"
// MNetworkVarNames "float32 m_fAmplitude"
// MNetworkVarNames "float32 m_fStartFrame"
// MNetworkVarNames "float32 m_fSpeed"
// MNetworkVarNames "float32 m_flFrame"
// MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
// MNetworkVarNames "bool m_bTurnedOff"
// MNetworkVarNames "Vector m_vecEndPos"
class C_Beam : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "-25.000000"
	// MNetworkMaxValue "25.000000"
	// MNetworkEncodeFlags "2"
	float m_flFrameRate; // 0x810	
	// MNetworkEnable
	float m_flHDRColorScale; // 0x814	
	GameTime_t m_flFireTime; // 0x818	
	float m_flDamage; // 0x81c	
	// MNetworkEnable
	uint8_t m_nNumBeamEnts; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0821[0x3]; // 0x821
public:
	int32_t m_queryHandleHalo; // 0x824	
private:
	[[maybe_unused]] uint8_t __pad0828[0x20]; // 0x828
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // 0x848	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // 0x850	
	// MNetworkEnable
	BeamType_t m_nBeamType; // 0x858	
	// MNetworkEnable
	uint32_t m_nBeamFlags; // 0x85c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAttachEntity[10]; // 0x860	
	// MNetworkEnable
	AttachmentHandle_t m_nAttachIndex[10]; // 0x888	
private:
	[[maybe_unused]] uint8_t __pad0892[0x2]; // 0x892
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fWidth; // 0x894	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "102.300003"
	// MNetworkEncodeFlags "2"
	float m_fEndWidth; // 0x898	
	// MNetworkEnable
	float m_fFadeLength; // 0x89c	
	// MNetworkEnable
	float m_fHaloScale; // 0x8a0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "1"
	float m_fAmplitude; // 0x8a4	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_fStartFrame; // 0x8a8	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	float m_fSpeed; // 0x8ac	
	// MNetworkEnable
	// MNetworkBitCount "20"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkPriority "32"
	float m_flFrame; // 0x8b0	
	// MNetworkEnable
	BeamClipStyle_t m_nClipStyle; // 0x8b4	
	// MNetworkEnable
	bool m_bTurnedOff; // 0x8b8	
private:
	[[maybe_unused]] uint8_t __pad08b9[0x3]; // 0x8b9
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecEndPos; // 0x8bc	
	CHandle< C_BaseEntity > m_hEndEntity; // 0x8c8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ZiplineBoostVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Gameplay"
	float m_flRampUpTime; // 0x5f0	
	float m_flPercentageSpeedIncrease; // 0x5f4	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceStartBoost; // 0x5f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa90
// Has VTable
class C_ItemAmmo : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa80
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
class CLaneStatusWorldPanel : public C_PointClientUIWorldPanel
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0xa70	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Slork_Scald : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_LashGrappleTarget : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Snipe_Glow : public CCitadelModifier
{
public:
	ParticleIndex_t m_nFXIndex; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a0
// Has VTable
class CCitadel_Modifier_TechOverflowProcWatcher : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySlorkChompVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_ChompHobbled; // 0x14e0	
	CEmbeddedSubclass< CBaseModifier > m_ChompGrapple; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde8
// Has VTable
class CCitadel_Ability_Tokamak_HeatSinks : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce8
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bFlyingStarted"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bFirstMovementTick"
// MNetworkVarNames "float m_flCurrentSpeed"
// MNetworkVarNames "QAngle m_qLastAngles"
class CCitadel_Ability_Tengu_AirLift : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0xa8]; // 0xc28
public:
	// MNetworkEnable
	bool m_bFlying; // 0xcd0	
	// MNetworkEnable
	bool m_bFlyingStarted; // 0xcd1	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xcd2	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xcd3	
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xcd4	
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xcd8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_Nikuman : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityChronoSwapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BubbleMoveModifier; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSwapStarted; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Frenzy_MoveSpeed : public CCitadelModifier
{
public:
	float m_flMoveSpeedPerStack; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
// 
// MNetworkVarNames "float m_flCameraDist"
// MNetworkVarNames "float m_flCameraPitch"
// MNetworkVarNames "float m_flCameraHeight"
// MNetworkVarNames "EHANDLE m_hTarget"
class CCitadelSpectateDirectedCamera : public C_BaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x4]; // 0x538
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flCameraDist; // 0x53c	
	// MNetworkEnable
	float m_flCameraPitch; // 0x540	
	// MNetworkEnable
	float m_flCameraHeight; // 0x544	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0x548	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityExplosiveBarrelVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelExplodeParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MirvExplodeParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrelBurnParticle; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1780	
	CSoundEventName m_strMirvExplodeSound; // 0x1790	
	CSoundEventName m_strRiccochetSound; // 0x17a0	
	CSoundEventName m_strBarrelSoundLp; // 0x17b0	
	CSoundEventName m_strBarrelLaunchSound; // 0x17c0	
	CSoundEventName m_strBarrelMeleedSound; // 0x17d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_MobileResupplyVData : public CitadelAbilityVData
{
public:
	float m_flResupplyForceScale; // 0x14e0	
	float m_flResupplyUp; // 0x14e4	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strKilledSound; // 0x14e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // 0x14f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DispenserModel; // 0x1508	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyedParticle; // 0x16c8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Fervor_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FervorParticle; // 0x5f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BonusesModifier; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_RegeneratingBulletShield : public CCitadel_Modifier_BaseShield
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_WeaponPowerForHealth : public CCitadelModifier
{
public:
	float m_flHealthDrained; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
class C_DynamicPropAlias_prop_dynamic_override : public C_DynamicProp
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc48
// Has VTable
class CCitadel_Item_Stasis_Bomb : public CCitadel_Item_Bubble
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c8
// Has VTable
// 
// MNetworkVarNames "string_t m_iszOverlayNames"
// MNetworkVarNames "float32 m_flOverlayTimes"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "int32 m_iDesiredOverlay"
// MNetworkVarNames "bool m_bIsActive"
class C_EnvScreenOverlay : public C_PointEntity
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszOverlayNames[10]; // 0x538	
	// MNetworkEnable
	// MNetworkBitCount "11"
	// MNetworkMinValue "-1.000000"
	// MNetworkMaxValue "63.000000"
	float m_flOverlayTimes[10]; // 0x588	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0x5b0	
	// MNetworkEnable
	int32_t m_iDesiredOverlay; // 0x5b4	
	// MNetworkEnable
	bool m_bIsActive; // 0x5b8	
	bool m_bWasActive; // 0x5b9	
private:
	[[maybe_unused]] uint8_t __pad05ba[0x2]; // 0x5ba
public:
	int32_t m_iCachedDesiredOverlay; // 0x5bc	
	int32_t m_iCurrentOverlay; // 0x5c0	
	GameTime_t m_flCurrentOverlayTime; // 0x5c4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityTokamakHeatSinksInherentVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HotTracerParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HotWeaponFxParticle; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHotWeaponShootSound; // 0x16a0	
	CSoundEventName m_strOverheatRed; // 0x16b0	
	CSoundEventName m_strOverheatFull; // 0x16c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x680
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TangoTether_TetherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TetherSound; // 0x5f0	
	CSoundEventName m_HealSound; // 0x600	
	CSoundEventName m_HitIndicator; // 0x610	
	CSoundEventName m_GrappleHitSound; // 0x620	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x630	
	CEmbeddedSubclass< CCitadelModifier > m_DisconnectingModifier; // 0x640	
	CEmbeddedSubclass< CCitadelModifier > m_DisconnectedModifier; // 0x650	
	CEmbeddedSubclass< CCitadelModifier > m_LockedTargetModifier; // 0x660	
	// MPropertyStartGroup "Gameplay"
	float m_flMinConnectTime; // 0x670	
	float m_flDisconnectDistanceBuffer; // 0x674	
	float m_flCandidateCloserDistance; // 0x678	
	float m_flTargetAwayDistance; // 0x67c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd48
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x8]; // 0xc28
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xc30	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xc34	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xc38	
	float m_flCastTimeDamage; // 0xc3c	
	GameTime_t m_flCastTime; // 0xc40	
	bool m_bNeedsExplosion; // 0xc44	
private:
	[[maybe_unused]] uint8_t __pad0c45[0x3]; // 0xc45
public:
	Vector m_vProjectileRemovedOrigin; // 0xc48	
	QAngle m_angCasterAnglesAtCastTime; // 0xc54	
	float m_flTravelDistance; // 0xc60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_SnipeGlowVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GlowParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1d0
// Has VTable
class CCitadel_Modifier_ChargeDragEnemy : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	QAngle m_qRelativeOffset; // 0x1a0	
	float m_flRelativeDist; // 0x1ac	
	float m_flMaxDist; // 0x1b0	
	Vector m_vecOffsetDir; // 0x1b4	
	Vector m_vecStartPosition; // 0x1c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x108
// Has VTable
class CCitadel_Modifier_Containment_Victim : public CCitadelModifier
{
public:
	float m_flTetherRadius; // 0xc0	
	Vector m_vecOrigin; // 0xc4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa98
// Has VTable
class CCitadel_GrandFinaleStage : public CBaseAnimGraph
{
public:
	Vector m_vStartPos; // 0xa70	
	Vector m_vEndPos; // 0xa7c	
	GameTime_t m_flStartEmitTime; // 0xa88	
	GameTime_t m_flEndEmitTime; // 0xa8c	
	int32_t m_nTouchCount; // 0xa90	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x268
// Has VTable
class CCitadel_Modifier_VacuumAura : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e0[0xa8]; // 0xe0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadelModifierAura_Default : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa88
// Has VTable
// 
// MNetworkVarNames "char m_messageText"
// MNetworkVarNames "char m_FontName"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bFullbright"
// MNetworkVarNames "float m_flWorldUnitsPerPx"
// MNetworkVarNames "float m_flFontSize"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "Color m_Color"
// MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
// MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
// MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
class C_PointWorldText : public C_ModelPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x8]; // 0x810
public:
	bool m_bForceRecreateNextUpdate; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad0819[0xf]; // 0x819
public:
	// MNetworkEnable
	char m_messageText[512]; // 0x828	
	// MNetworkEnable
	char m_FontName[64]; // 0xa28	
	// MNetworkEnable
	bool m_bEnabled; // 0xa68	
	// MNetworkEnable
	bool m_bFullbright; // 0xa69	
private:
	[[maybe_unused]] uint8_t __pad0a6a[0x2]; // 0xa6a
public:
	// MNetworkEnable
	float m_flWorldUnitsPerPx; // 0xa6c	
	// MNetworkEnable
	float m_flFontSize; // 0xa70	
	// MNetworkEnable
	float m_flDepthOffset; // 0xa74	
	// MNetworkEnable
	Color m_Color; // 0xa78	
	// MNetworkEnable
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xa7c	
	// MNetworkEnable
	PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xa80	
	// MNetworkEnable
	PointWorldTextReorientMode_t m_nReorientMode; // 0xa84	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetMessage; // 0x0
	// int32_t InputSetIntMessage; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_Wraith_RapidFire : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ShieldImpactVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldBreakParticle; // 0x5f0	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_ShieldBreakSound; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1328
// Has VTable
// 
// MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarNames "QAngle m_angClientCamera"
// MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
// MNetworkVarNames "int32 m_nLevel"
// MNetworkVarNames "int32 m_nCurrencies"
// MNetworkVarNames "int32 m_nSpentCurrencies"
// MNetworkVarNames "GameTime_t m_flLastSpawnTime"
// MNetworkVarNames "GameTime_t m_flRespawnTime"
// MNetworkVarNames "bool m_bInRegenerationZone"
// MNetworkVarNames "bool m_bInItemShopZone"
// MNetworkVarNames "GameTime_t m_timeRevealedOnMinimapByNPC"
// MNetworkVarNames "EntitySubclassID_t m_vecFullSellPriceItems"
// MNetworkVarNames "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
// MNetworkVarNames "bool m_bNetworkDisconnected"
// MNetworkVarNames "bool m_bHasIncomingThreats"
// MNetworkVarNames "bool m_bLearningAbility"
// MNetworkVarNames "int m_nFlashStartTick"
// MNetworkVarNames "int m_nFlashMaxStartTick"
// MNetworkVarNames "int m_nFlashFadeStartTick"
// MNetworkVarNames "int m_nFlashEndTick"
// MNetworkVarNames "int8 m_nFlashMaxAlpha"
// MNetworkVarNames "int32 m_nDeducedLane"
// MNetworkVarNames "bool m_bDismissedReportCard"
// MNetworkVarNames "float m_flCurrentHealingAmount"
// MNetworkVarNames "QAngle m_angLockedEyeAngles"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
// MNetworkVarNames "bool m_bAnimGraphMovementClipped"
// MNetworkVarNames "bool m_bAnimGraphMovementDisableGravity"
// MNetworkVarNames "bool m_bAnimGraphMovementDirectAirControl"
// MNetworkVarNames "GameTime_t m_flPredTimeSlowedStart"
// MNetworkVarNames "GameTime_t m_flPredTimeSlowedEnd"
// MNetworkVarNames "float32 m_flPredSlowSpeed"
// MNetworkVarNames "GameTime_t m_flTimeSlowedStart"
// MNetworkVarNames "GameTime_t m_flTimeSlowedEnd"
// MNetworkVarNames "float32 m_flSlowSpeed"
// MNetworkVarNames "GameTime_t m_flSprintAnimSuppressEndTime"
class C_CitadelPlayerPawn : public CCitadelPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad0e48[0x60]; // 0xe48
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkChangeCallback "playerEyeAnglesChanged"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0eb4[0xc]; // 0xeb4
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angClientCamera; // 0xec0	
	// MNetworkEnable
	CMsgLaneColor m_eZipLineLaneColor; // 0xecc	
	// MNetworkEnable
	// MNetworkChangeCallback "LevelChanged"
	int32_t m_nLevel; // 0xed0	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "CurrenciesChanged"
	int32_t m_nCurrencies[4]; // 0xed4	
	// MNetworkEnable
	int32_t m_nSpentCurrencies[4]; // 0xee4	
	// MNetworkEnable
	GameTime_t m_flLastSpawnTime; // 0xef4	
	// MNetworkEnable
	// MNetworkChangeCallback "RespawnTimeChanged"
	GameTime_t m_flRespawnTime; // 0xef8	
	// MNetworkEnable
	// MNetworkChangeCallback "InRegenZoneChanged"
	bool m_bInRegenerationZone; // 0xefc	
	// MNetworkEnable
	// MNetworkChangeCallback "InItemShopZoneChanged"
	bool m_bInItemShopZone; // 0xefd	
private:
	[[maybe_unused]] uint8_t __pad0efe[0x2]; // 0xefe
public:
	// MNetworkEnable
	GameTime_t m_timeRevealedOnMinimapByNPC; // 0xf00	
private:
	[[maybe_unused]] uint8_t __pad0f04[0x4]; // 0xf04
public:
	// MNetworkEnable
	// MNetworkChangeCallback "ItemSellPriceChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // 0xf08	
	// MNetworkEnable
	// MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
	C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // 0xf20	
	// MNetworkEnable
	bool m_bNetworkDisconnected; // 0xf38	
	// MNetworkEnable
	bool m_bHasIncomingThreats; // 0xf39	
	// MNetworkEnable
	bool m_bLearningAbility; // 0xf3a	
private:
	[[maybe_unused]] uint8_t __pad0f3b[0x1]; // 0xf3b
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashStartChanged"
	int32_t m_nFlashStartTick; // 0xf3c	
	// MNetworkEnable
	int32_t m_nFlashMaxStartTick; // 0xf40	
	// MNetworkEnable
	int32_t m_nFlashFadeStartTick; // 0xf44	
	// MNetworkEnable
	int32_t m_nFlashEndTick; // 0xf48	
	// MNetworkEnable
	int8_t m_nFlashMaxAlpha; // 0xf4c	
private:
	[[maybe_unused]] uint8_t __pad0f4d[0x3]; // 0xf4d
public:
	// MNetworkEnable
	int32_t m_nDeducedLane; // 0xf50	
	// MNetworkEnable
	bool m_bDismissedReportCard; // 0xf54	
private:
	[[maybe_unused]] uint8_t __pad0f55[0x3]; // 0xf55
public:
	// MNetworkEnable
	float m_flCurrentHealingAmount; // 0xf58	
	// MNetworkEnable
	QAngle m_angLockedEyeAngles; // 0xf5c	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xf68	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	// -> m_nHeroID - 0x111c
	// -> m_nHeroLoading - 0x1120
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1108	
private:
	[[maybe_unused]] uint8_t __pad1128[0xa0]; // 0x1128
public:
	float m_flRichPresenceUpdateInterval; // 0x11c8	
private:
	[[maybe_unused]] uint8_t __pad11cc[0xf4]; // 0x11cc
public:
	// MNetworkEnable
	bool m_bAnimGraphMovementClipped; // 0x12c0	
	// MNetworkEnable
	bool m_bAnimGraphMovementDisableGravity; // 0x12c1	
	// MNetworkEnable
	bool m_bAnimGraphMovementDirectAirControl; // 0x12c2	
	bool m_bLastMoveWasAnimGraph; // 0x12c3	
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedStart; // 0x12c4	
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedEnd; // 0x12c8	
	// MNetworkEnable
	float m_flPredSlowSpeed; // 0x12cc	
	// MNetworkEnable
	GameTime_t m_flTimeSlowedStart[4]; // 0x12d0	
	// MNetworkEnable
	GameTime_t m_flTimeSlowedEnd[4]; // 0x12e0	
	// MNetworkEnable
	float m_flSlowSpeed[4]; // 0x12f0	
	// MNetworkEnable
	GameTime_t m_flSprintAnimSuppressEndTime; // 0x1300	
	int32_t m_iCurSlowSlot; // 0x1304	
	
	// Datamap fields:
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xcc8
	// CCitadelPlayer_MovementServices m_pMovementServices; // 0xcd0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb0
// Has VTable
class CCitadel_Item_Charge_Mastery : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Infuser_VData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
// Has VTable
// 
// MNetworkVarNames "float m_flBoostYaw"
// MNetworkVarNames "Vector m_vecCrashPosition"
// MNetworkVarNames "Vector m_vecCrashDirection"
// MNetworkVarNames "ELeapState_t m_eLeapState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
class CCitadel_Ability_Bull_Leap : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	float m_flBoostYaw; // 0xc28	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xc2c	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xc38	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xc44	
private:
	[[maybe_unused]] uint8_t __pad0c45[0x3]; // 0xc45
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xc48	
private:
	[[maybe_unused]] uint8_t __pad0c4c[0x4]; // 0xc4c
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xc50	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c80[0x120]; // 0xc80
public:
	Vector m_vecLastVel; // 0xda0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1010
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_MidBossVData : public CAI_CitadelNPCVData
{
public:
	int32_t m_iStartingHealth; // 0xe18	
	int32_t m_iHealthGainPerMinute; // 0xe1c	
	float m_flAggroTime; // 0xe20	
private:
	[[maybe_unused]] uint8_t __pad0e24[0x4]; // 0xe24
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingSmallExplosion; // 0xe28	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingFinalExplosion; // 0xf08	
	float m_flDyingDuration; // 0xfe8	
private:
	[[maybe_unused]] uint8_t __pad0fec[0x4]; // 0xfec
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_KnockbackAura; // 0xff0	
	CEmbeddedSubclass< CCitadelModifier > m_AggroEnemy; // 0x1000	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Thumper_PullAOE_VData : public CCitadelModifierAuraVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // 0x630	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1f8
// Has VTable
class CCitadel_Modifier_Nikuman : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e0[0x38]; // 0xe0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_TechUpgrade_Infuser : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1888
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_StoneFormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StoneFormParticle; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CastTargetSound; // 0x1780	
	CSoundEventName m_strImpactSound; // 0x1790	
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strTrueFormModel; // 0x17a0	
	// MPropertyStartGroup "+Stone Form Params"
	float m_flLandHoldTime; // 0x1880	
	float m_flRisingTime; // 0x1884	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_UltComboVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x16a0	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x16b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee8
// Has VTable
class CCitadel_Ability_Shotgun_Astro : public CCitadel_Ability_PrimaryWeapon
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Astro_Rifle_Self : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x248
// Has VTable
class CCitadel_Modifier_SilenceProcWatcher : public CCitadel_Modifier_BaseEventProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_WeaponUpgrade_HeadshotBooster : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDustStormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DustStormAura; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_DebuffImmunityVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffImmunityModifier; // 0x1528	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_RocketBoosterVData : public CCitadel_UtilityUpgrade_RocketBootsVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LandingParticle; // 0x1618	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x16f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DropDownStartParticle; // 0x17d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DropDownStartSound; // 0x18b8	
	CSoundEventName m_LandingSound; // 0x18c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x18d8	
	// MPropertyStartGroup "Gameplay"
	float m_flSlamEnabledTime; // 0x18e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_CritShotVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CritSound; // 0x720	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_WarpStone_Caster_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_playerBuffSelf; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_SiphonBullets_HealthLoss_VData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SiphonParticle; // 0x5f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BerserkerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BerserkerSound; // 0x5f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StackModifier; // 0x600	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Bullet_Shield_Pulse : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_Delayed_Stun : public CCitadelModifier
{
public:
	ParticleIndex_t m_hRingEffect; // 0xc0	
	float m_flRadius; // 0xc4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_HeroUpgradeBonuses : public CCitadelModifier
{
public:
	C_CitadelPlayerPawn* m_pOwningPlayer; // 0xc0	
	float m_flWeaponPower; // 0xc8	
	float m_flArmorPower; // 0xcc	
	float m_flTechPower; // 0xd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd50
// Has VTable
class C_PropDoorRotating : public C_BasePropDoor
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x538
// Has VTable
class C_PointEntityAlias_info_target_portrait_root : public C_PointEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
class CCitadel_Item_PhantomStrike : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
class CCitadel_Ability_Shotgun_Astro_Backwards : public CCitadel_Ability_PrimaryWeapon
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_PoisonBullets : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_SelfVacuum : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_ShieldTracker_Magic : public CCitadel_Modifier_ShieldTracker_Base
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
class C_NPC_MidBoss : public C_AI_CitadelNPC
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa70
// Has VTable
class CCitadelItemMetal : public CBaseAnimGraph
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_SunfireCataclysm_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SunfireCataclysmModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_VacuumModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_EMPModifier; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SphereChargeParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ColumnParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x16d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplosionSound; // 0x17b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x158
// Has VTable
class CCitadel_Modifier_VacuumAuraTarget : public CCitadel_Modifier_Stunned
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
public:
	float m_flMaxDist; // 0x138	
	Vector m_vecOffsetDir; // 0x13c	
	Vector m_vecStartPosition; // 0x148	
	float m_flAOERadius; // 0x154	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CModifier_CloakingDevice_Active_Ambush : public CCitadelModifier
{
public:
	ParticleIndex_t m_nAmbushParticle; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1578
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_AblativeCoatVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RestoreEffectModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_OnTakeDamageEffectModifier; // 0x1538	
	CEmbeddedSubclass< CCitadelModifier > m_OnBreakEffectModifier; // 0x1548	
	CEmbeddedSubclass< CCitadelModifier > m_ResistBuffModifier; // 0x1558	
	// MPropertyStartGroup "Gameplay"
	float m_flOnTakeDamageEffectDuration; // 0x1568	
	float m_flOnBreakEffectDuration; // 0x156c	
	float m_flOnRestoreEffectDuration; // 0x1570	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_ActiveDisarm_SpiritSteal : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc20
// Has VTable
class C_PhysPropClientside : public C_BreakableProp
{
public:
	GameTime_t m_flTouchDelta; // 0xbf8	
	GameTime_t m_fDeathTime; // 0xbfc	
	float m_inertiaScale; // 0xc00	
	Vector m_vecDamagePosition; // 0xc04	
	Vector m_vecDamageDirection; // 0xc10	
	int32_t m_nDamageType; // 0xc1c	
	
	// Datamap fields:
	// float m_impactEnergyScale; // 0xb68
	// bool forcemotiondisabled; // 0x7fffffff
	// bool phys_start_asleep; // 0x7fffffff
	// float fademaxdist; // 0x7fffffff
	// float fademindist; // 0x7fffffff
	// float fadescale; // 0x7fffffff
	// float scale; // 0x7fffffff
	// const char * skin; // 0x7fffffff
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9e8
// Has VTable
class C_Projectile_Perched_Predator : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xda8
// Has VTable
// 
// MNetworkVarNames "Vector m_vecTeleportPosition"
// MNetworkVarNames "Vector m_vecTeleportPositionNormal"
// MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x150]; // 0xc28
public:
	// MNetworkEnable
	Vector m_vecTeleportPosition; // 0xd78	
	// MNetworkEnable
	Vector m_vecTeleportPositionNormal; // 0xd84	
	// MNetworkEnable
	ETelepunchState_t m_eTelepunchState; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0d91[0x3]; // 0xd91
public:
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xd94	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb0
// Has VTable
// 
// MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
class CCitadel_Ability_GooGrenade : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CUtlVector< CHandle< C_BaseEntity > > m_vecPuddleModifiers; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c40[0x268]; // 0xc40
public:
	GameTime_t m_LastDetonateTime; // 0xea8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ViscousWeapon_Alt_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strChargingParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FiringParticle; // 0x16a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x1780	
	CSoundEventName m_ChargeSound; // 0x1790	
	CSoundEventName m_ShootSound; // 0x17a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd0
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Chrono_TimeWall : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_hChargingParticle; // 0xc28	
	Vector m_vSpawnPos; // 0xc2c	
	QAngle m_qAngles; // 0xc38	
	// MNetworkEnable
	bool m_bAirCast; // 0xc44	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ServerOnly : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Ability_Cadence_SilenceContraptions : public CCitadelBaseDashCastAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
// 
// MNetworkVarNames "float m_flRadius"
class C_SoundAreaEntitySphere : public C_SoundAreaEntityBase
{
public:
	// MNetworkEnable
	float m_flRadius; // 0x560	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a8
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "fogparams_t m_fog"
class C_FogController : public C_BaseEntity
{
public:
	// MNetworkEnable
	fogparams_t m_fog; // 0x538	
	bool m_bUseAngles; // 0x5a0	
private:
	[[maybe_unused]] uint8_t __pad05a1[0x3]; // 0x5a1
public:
	int32_t m_iChangedVariables; // 0x5a4	
	
	// Datamap fields:
	// float InputSetStartDist; // 0x0
	// float InputSetEndDist; // 0x0
	// float InputSetMaxDensity; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// Color InputSetColor; // 0x0
	// Color InputSetColorSecondary; // 0x0
	// int32_t InputSetFarZ; // 0x0
	// CUtlSymbolLarge InputSetAngles; // 0x0
	// float InputSet2DSkyboxFogFactor; // 0x0
	// Color InputSetColorLerpTo; // 0x0
	// Color InputSetColorSecondaryLerpTo; // 0x0
	// float InputSetStartDistLerpTo; // 0x0
	// float InputSetEndDistLerpTo; // 0x0
	// float InputSetMaxDensityLerpTo; // 0x0
	// float InputSet2DSkyboxFogFactorLerpTo; // 0x0
	// void InputStartFogTransition; // 0x0
	// void C_FogControllerSetLerpValues; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ShivDashVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashTrailParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1888
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_BurrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowStartParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowEndParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowInGroundParticle; // 0x1780	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BurrowModifier; // 0x1860	
	CEmbeddedSubclass< CCitadelModifier > m_SpinModifier; // 0x1870	
	// MPropertyStartGroup "+Burrow Properties"
	float m_flChannelEndEnemyPopUpForce; // 0x1880	
	float m_flChannelEndEnemyPopUpCylinderHeight; // 0x1884	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x230
// Has VTable
class CCitadel_Modifier_CritShot : public CCitadel_Modifier_BaseBulletPreRollProc
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Savior_VData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x150
// Has VTable
class CCitadel_Modifier_Cadence_AnthemAOE : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityWreckerTeleportVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1780	
	float m_ArrowOffsetX; // 0x1860	
	float m_ArrowCameraDistance; // 0x1864	
	float m_ArrowCameraHeightOffset; // 0x1868	
	float m_ArrowInitialPitch; // 0x186c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // 0x1870	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1880	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1890	
	// MPropertyStartGroup "Gameplay"
	float m_flTrackAmount; // 0x18a0	
	float m_flSpeedAccel; // 0x18a4	
	float m_flSpeedDeccel; // 0x18a8	
	float m_flBaseProjectileSpeed; // 0x18ac	
	float m_flMaxProjectileSpeed; // 0x18b0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_Savior : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Objective_Regen : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BulletResistReductionStackVData : public CCitadelModifierVData
{
public:
	bool m_bSelfish; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
class CPlayer_ItemServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_ArmorUpgrade_ActiveBulletShield : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xef8
// Has VTable
// 
// MNetworkVarNames "ELashGrappleState m_EGrappleState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility
{
private:
	[[maybe_unused]] uint8_t __pad0da0[0x2]; // 0xda0
public:
	// MNetworkEnable
	ELashGrappleState m_EGrappleState; // 0xda2	
private:
	[[maybe_unused]] uint8_t __pad0da3[0x1]; // 0xda3
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xda4	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xda8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xdc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CAbility_Rutger_CheatDeath : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BoucePadVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strImpactSound; // 0x6d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStompVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x14e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStompExplosionSound; // 0x15c0	
	CSoundEventName m_strCastDelayLocalPlayerSound; // 0x15d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x15f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
// Has VTable
class CCitadel_Ability_PassiveBeefy : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityStormCloudVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_StormCloudModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Tech_Bleed : public CCitadelModifier
{
public:
	ParticleIndex_t m_hRingEffect; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_HoldingGoldenIdol : public CCitadelModifier
{
public:
	ParticleIndex_t m_iIdolParticle; // 0xc0	
	int32_t m_nGoldValue; // 0xc4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xcd0
// Has VTable
// 
// MNetworkVarNames "CUtlString m_targetCamera"
// MNetworkVarNames "int m_nResolutionEnum"
// MNetworkVarNames "bool m_bRenderShadows"
// MNetworkVarNames "bool m_bUseUniqueColorTarget"
// MNetworkVarNames "CUtlString m_brushModelName"
// MNetworkVarNames "EHANDLE m_hTargetCamera"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bDraw3DSkybox"
class C_FuncMonitor : public C_FuncBrush
{
public:
	// MNetworkEnable
	CUtlString m_targetCamera; // 0x810	
	// MNetworkEnable
	int32_t m_nResolutionEnum; // 0x818	
	// MNetworkEnable
	bool m_bRenderShadows; // 0x81c	
	// MNetworkEnable
	bool m_bUseUniqueColorTarget; // 0x81d	
private:
	[[maybe_unused]] uint8_t __pad081e[0x2]; // 0x81e
public:
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x820	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTargetCamera; // 0x828	
	// MNetworkEnable
	bool m_bEnabled; // 0x82c	
	// MNetworkEnable
	bool m_bDraw3DSkybox; // 0x82d	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkVarNames "string_t m_worldName"
// MNetworkVarNames "string_t m_layerName"
// MNetworkVarNames "bool m_bWorldLayerVisible"
// MNetworkVarNames "bool m_bEntitiesSpawned"
class CInfoWorldLayer : public C_BaseEntity
{
public:
	CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x538	
	// MNetworkEnable
	CUtlSymbolLarge m_worldName; // 0x560	
	// MNetworkEnable
	CUtlSymbolLarge m_layerName; // 0x568	
	// MNetworkEnable
	bool m_bWorldLayerVisible; // 0x570	
	// MNetworkEnable
	bool m_bEntitiesSpawned; // 0x571	
	bool m_bCreateAsChildSpawnGroup; // 0x572	
private:
	[[maybe_unused]] uint8_t __pad0573[0x1]; // 0x573
public:
	uint32_t m_hLayerSpawnGroup; // 0x574	
	bool m_bWorldLayerActuallyVisible; // 0x578	
	
	// Datamap fields:
	// void ShowWorldLayer; // 0x0
	// void HideWorldLayer; // 0x0
	// void SpawnEntities; // 0x0
	// void DestroyEntities; // 0x0
	// void ShowWorldLayerAndSpawnEntities; // 0x0
	// void HideWorldLayerAndDestroyEntities; // 0x0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShivDaggerVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerStuckParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerImpactParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerExplodeParticle; // 0x16b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDaggerHitSound; // 0x1790	
	CSoundEventName m_strDaggerExplodeSound; // 0x17a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x148
// Has VTable
class CCitadel_Modifier_PsychicLift : public CCitadel_Modifier_Silenced
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	Vector m_vecFloatDest; // 0x130	
	Vector m_vecStartingPos; // 0x13c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_NearDeathFX : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ZiplineSpeedVData : public CCitadelModifierVData
{
public:
	float m_flPercentageMultiplierStart; // 0x5f0	
	float m_flPercentageMultiplierEnd; // 0x5f4	
	float m_flRampUpTime; // 0x5f8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc90
// Has VTable
class C_NetTestBaseCombatCharacter : public C_BaseCombatCharacter
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
class C_Citadel_PestilenceDroneDispenser : public C_AI_CitadelNPC
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa90
// Has VTable
// 
// MNetworkVarNames "int m_iGoldReward"
class C_Citadel_BreakblePropGoldPickup : public C_Citadel_BreakblePropPickup
{
public:
	// MNetworkEnable
	int32_t m_iGoldReward; // 0xa88	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CGameModifier_FireUserEntityIOVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Fire User Entity IO"
	// MPropertyDescription "User Entity IO to fire when modifier added. 0 = don't fire."
	FireUserEntityIO_t m_FireOnAdded; // 0x5f0	
	// MPropertyDescription "User Entity IO to fire when modifier removed. 0 = don't fire."
	FireUserEntityIO_t m_FireOnRemoved; // 0x5f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_GangActivity_Cancel : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Shakedown_TargetVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_PulseModifier; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_WingBlastPush : public CCitadelModifier
{
public:
	Vector m_vPush; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca0
// Has VTable
// 
// MNetworkVarNames "float m_flVertOffset"
// MNetworkVarNames "float m_flHorizGap"
// MNetworkVarNames "Vector m_vStartPos"
// MNetworkVarNames "Vector m_vTargetPos"
// MNetworkVarNames "QAngle m_angFacing"
// MNetworkVarNames "int m_nMantleTypeIndex"
// MNetworkVarNames "GameTime_t m_flStartTime"
class CCitadel_Ability_Mantle : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flVertOffset; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flHorizGap; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStartPos; // 0xc30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vTargetPos; // 0xc3c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	QAngle m_angFacing; // 0xc48	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nMantleTypeIndex; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flStartTime; // 0xc58	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NearDeathFXVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyNearDeathParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyNearDeathParticle; // 0x6d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sSelfDestructStart; // 0x7b0	
	CSoundEventName m_sSelfDestructEnd; // 0x7c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
class C_NPC_CarpetBombDrone : public C_AI_CitadelNPC
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa88
// Has VTable
class C_Citadel_BreakblePropModifierPickup : public C_Citadel_BreakblePropPickup
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaa0
// Has VTable
class C_PhysMagnet : public CBaseAnimGraph
{
public:
	CUtlVector< int32 > m_aAttachedObjectsFromServer; // 0xa70	
	CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects; // 0xa88	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Slork_LastBreathVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd48
// Has VTable
class CCitadel_Ability_Wrecker_Ultimate : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x20]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnGrabBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0xc48	
private:
	[[maybe_unused]] uint8_t __pad0c54[0xc]; // 0xc54
public:
	bool m_bNeedsBeamReset; // 0xc60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierChronoPulseGrenadePulseAreaVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x600	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // 0x610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaEffect; // 0x6f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArmingSound; // 0x7d0	
	CSoundEventName m_strArmedSound; // 0x7e0	
	CSoundEventName m_strLoopingSound; // 0x7f0	
	CSoundEventName m_strHitSound; // 0x800	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe68
// Has VTable
// 
// MNetworkVarNames "bool m_bLeaping"
// MNetworkVarNames "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x2]; // 0xc28
public:
	// MNetworkEnable
	bool m_bLeaping; // 0xc2a	
private:
	[[maybe_unused]] uint8_t __pad0c2b[0x1]; // 0xc2b
public:
	// MNetworkEnable
	GameTime_t m_flLeapStartTime; // 0xc2c	
	ParticleIndex_t m_nFXIndex; // 0xc30	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Galvanic_Storm_Effect : public CCitadel_Modifier_ChainLightningEffect
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_VexBarrier_Shield : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_Dust_Storm : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_ArmorUpgrade_Frenzy : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa80
// Has VTable
class C_InWorldKeyBindPanel : public C_PointClientUIWorldPanel
{
public:
	CHandle< C_CitadelPlayerPawn > m_hPlayer; // 0xa70	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x910
// Has VTable
// 
// MNetworkVarNames "EPlayerPlayState m_ePlayState"
// MNetworkVarNames "int m_iGuidedBotMatchLastHits"
// MNetworkVarNames "int m_iGuidedBotMatchOrbsSecured"
// MNetworkVarNames "int m_iGuidedBotMatchOrbsDenied"
// MNetworkVarNames "int m_iGuidedBotMatchDamageToGuardians"
// MNetworkVarNames "int m_iGuidedBotMatchDamageToPlayers"
// MNetworkVarNames "int m_iGuidedBotMatchDamageTaken"
// MNetworkVarNames "int m_iGuidedBotMatchNetWorth"
// MNetworkVarNames "int m_iGuidedBotMatchModsPurchased"
// MNetworkVarNames "int m_iGuidedBotMatchAbilityUpgrades"
// MNetworkVarNames "float m_flGuideBotMatchLastTaskNagVO"
// MNetworkVarNames "float m_flGuideBotLastTimeTaskCompleted"
// MNetworkVarNames "EGuidedBotMatchObjective m_eGuidedBotMatchObjective"
// MNetworkVarNames "int8 m_nAssignedLane"
// MNetworkVarNames "int8 m_nOriginalLaneAssignment"
// MNetworkVarNames "bool m_bSwapCastModeAbility1"
// MNetworkVarNames "bool m_bSwapCastModeAbility2"
// MNetworkVarNames "bool m_bSwapCastModeAbility3"
// MNetworkVarNames "bool m_bSwapCastModeAbility4"
// MNetworkVarNames "bool m_bIsKingPanda"
// MNetworkVarNames "bool m_bIsDevTeamMember"
// MNetworkVarNames "bool m_bBotDisconnectTakeover"
// MNetworkVarNames "bool m_bInTeamChat"
// MNetworkVarNames "bool m_bInPartyChat"
// MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
// MNetworkVarNames "PlayerDataGlobal_t m_PlayerDataGlobal"
// MNetworkVarNames "bool m_bDeathReplayAvailable"
// MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
class CCitadelPlayerController : public CBasePlayerController
{
public:
	// MNetworkEnable
	EPlayerPlayState m_ePlayState; // 0x6d8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchLastHits; // 0x6dc	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsSecured; // 0x6e0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchOrbsDenied; // 0x6e4	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToGuardians; // 0x6e8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageToPlayers; // 0x6ec	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchDamageTaken; // 0x6f0	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchNetWorth; // 0x6f4	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchModsPurchased; // 0x6f8	
	// MNetworkEnable
	int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x6fc	
	// MNetworkEnable
	float m_flGuideBotMatchLastTaskNagVO; // 0x700	
	// MNetworkEnable
	float m_flGuideBotLastTimeTaskCompleted; // 0x704	
	// MNetworkEnable
	EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x708	
	// MNetworkEnable
	// MNetworkChangeCallback "AssignedLaneChanged"
	int8_t m_nAssignedLane; // 0x70c	
	// MNetworkEnable
	int8_t m_nOriginalLaneAssignment; // 0x70d	
	// MNetworkEnable
	bool m_bSwapCastModeAbility1; // 0x70e	
	// MNetworkEnable
	bool m_bSwapCastModeAbility2; // 0x70f	
	// MNetworkEnable
	bool m_bSwapCastModeAbility3; // 0x710	
	// MNetworkEnable
	bool m_bSwapCastModeAbility4; // 0x711	
	// MNetworkEnable
	bool m_bIsKingPanda; // 0x712	
	// MNetworkEnable
	bool m_bIsDevTeamMember; // 0x713	
	// MNetworkEnable
	bool m_bBotDisconnectTakeover; // 0x714	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInTeamChat; // 0x715	
	// MNetworkEnable
	// MNetworkChangeCallback "ChatGroupsChanged"
	bool m_bInPartyChat; // 0x716	
private:
	[[maybe_unused]] uint8_t __pad0717[0x1]; // 0x717
public:
	// MNetworkEnable
	CHandle< C_CitadelPlayerPawn > m_hHeroPawn; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad071c[0x14]; // 0x71c
public:
	// MNetworkEnable
	PlayerDataGlobal_t m_PlayerDataGlobal; // 0x730	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bDeathReplayAvailable; // 0x908	
	// MNetworkEnable
	CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0x909	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_GenericPerson_2 : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd90
// Has VTable
class CCitadel_Ability_Ghost_BloodShards : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x150]; // 0xc28
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecDamagedTargets; // 0xd78	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ReinforcingCasingsVData : public CCitadel_Modifier_Intrinsic_BaseVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9b0
// Has VTable
class CCitadel_Projectile_Cyclone : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadelModifier_Viscous_Goo_Aura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class C_PortraitWorldCallbackHandler : public C_BaseEntity
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Intimidated : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x248
// Has VTable
class CCitadel_Modifier_TargetPracticeEnemy : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xc8]; // 0xc0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPowerGeneratorVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EffectToTitan; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x998
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_VoidSphereVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // 0x6d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x7b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportModelParticle; // 0x890	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // 0x970	
	// MPropertyGroupName "Misc"
	float m_flPreTeleportDuration; // 0x980	
private:
	[[maybe_unused]] uint8_t __pad0984[0x4]; // 0x984
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x988	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1890
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_TimeWallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallChargeParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitTimerParticle; // 0x1790	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWallCreated; // 0x1870	
	CSoundEventName m_strChargeUpSound; // 0x1880	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_GhostBloodShardDebuffVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BloodShardDebuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_DPSTracker : public CCitadelModifier
{
public:
	float m_flProgress; // 0xc0	
	float m_flDistToTarget; // 0xc4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Slork_LastBreath : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee0
// Has VTable
class CCitadel_Ability_SunfireCataclysm : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x2a0]; // 0xc28
public:
	Vector m_vecCastPos; // 0xec8	
	ParticleIndex_t m_nFXPreviewParticle; // 0xed4	
	ParticleIndex_t m_hChargingParticle; // 0xed8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_Synth_Blitz : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Urn_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1780
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityChargedShotVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelStartParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // 0x16a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Aerial_Assault : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x150
// Has VTable
class CCitadel_Modifier_Dust_Storm_Aura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x898
// Has VTable
class C_CitadelHornetStingProjectile : public C_CitadelProjectile
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd58
// Has VTable
class CCitadel_Item_CheatDeath : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x220
// Has VTable
class CCitadel_Modifier_Chomp_Hobbled : public CCitadelModifier
{
public:
	GameTime_t m_LastUpdate; // 0xc0	
	float m_flDamageTime; // 0xc4	
	float m_flMovementTime; // 0xc8	
	CHandle< C_BaseEntity > m_hGrappler; // 0xcc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierChompGrappleVData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1650
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHookVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_BulletAmpModifier; // 0x1500	
	CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // 0x1510	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookOutParticle; // 0x1520	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHookSuccessSound; // 0x1600	
	CSoundEventName m_strHookAllySound; // 0x1610	
	CSoundEventName m_strHookMissSound; // 0x1620	
	CSoundEventName m_strHookImpactGeoSound; // 0x1630	
	CSoundEventName m_SelfBuffCastSound; // 0x1640	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb8
// Has VTable
// 
// MNetworkVarNames "bool m_bIcePathing"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "Vector m_vLastVelocity"
// MNetworkVarNames "bool m_bFirstMovementTick"
class CCitadel_Ability_IcePath : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x70]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIcePathing; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x3]; // 0xc99
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xc9c	
	// MNetworkEnable
	Vector m_vLastVelocity; // 0xca8	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xcb4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_LearningHeroAbility : public CCitadelModifier
{
public:
	CBufferString m_sDescription; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1cc0
// Has VTable
// 
// MNetworkVarNames "CBaseAnimGraphController m_animationController"
class CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance
{
public:
	// MNetworkEnable
	CBaseAnimGraphController m_animationController; // 0x460	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CBodyComponentBaseAnimGraph")->m_static_fields[1]->m_instance);};
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa88
// Has VTable
class C_Citadel_BreakblePropHealthPickup : public C_Citadel_BreakblePropPickup
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
class CCitadel_Ability_Riptide : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x148
// Has VTable
class CModifier_Mirage_Tornado_Lift : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	Vector m_vecFloatDest; // 0x130	
	Vector m_vecStartingPos; // 0x13c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
// Has VTable
class CAbility_Rutger_ForceField : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Viscous_Telepunch_Travel : public CCitadelModifier
{
public:
	ParticleIndex_t m_particleStart; // 0xc0	
	ParticleIndex_t m_particleEnd; // 0xc4	
	ParticleIndex_t m_particleTrail; // 0xc8	
	Vector m_vecEndLocation; // 0xcc	
	Vector m_vecStartPosition; // 0xd8	
	float m_flStartDelay; // 0xe4	
	Vector m_vecApplyOffset; // 0xe8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashSlideTime"
// MNetworkVarNames "GameTime_t m_flSlowGetupStartTime"
// MNetworkVarNames "bool m_bShouldTriggerSlowGetup"
// MNetworkVarNames "bool m_bWantsSlide"
// MNetworkVarNames "bool m_bAirborneWhenDuckPressed"
// MNetworkVarNames "bool m_bIsSliding"
// MNetworkVarNames "float m_flSpeedAdjust"
// MNetworkVarNames "GameTime_t m_flDuckPressedTime"
// MNetworkVarNames "float m_flVelocityAtDuckPressedTime"
// MNetworkVarNames "GameTime_t m_flSlideChangeTime"
// MNetworkVarNames "GameTime_t m_flSlidingOnFlatStartTime"
// MNetworkVarNames "int m_nJumpsThisSlideSession"
// MNetworkVarNames "GameTime_t m_flOnGroundStartTime"
// MNetworkVarNames "GameTime_t m_flDashSlideStartTime"
class CCitadel_Ability_Slide : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x58]; // 0xc28
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xc80	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSlowGetupStartTime; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bShouldTriggerSlowGetup; // 0xc9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bWantsSlide; // 0xc9d	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bAirborneWhenDuckPressed; // 0xc9e	
	// MNetworkEnable
	bool m_bIsSliding; // 0xc9f	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flSpeedAdjust; // 0xca0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDuckPressedTime; // 0xca4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flVelocityAtDuckPressedTime; // 0xca8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSlideChangeTime; // 0xcac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSlidingOnFlatStartTime; // 0xcb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nJumpsThisSlideSession; // 0xcb4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flOnGroundStartTime; // 0xcb8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashSlideStartTime; // 0xcbc	
	bool m_bStartedSlideViaProbeSlope; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0cc1[0x3]; // 0xcc1
public:
	ParticleIndex_t m_nSlideEffectIndex; // 0xcc4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1408
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "int m_nElectricBeamCasts"
// MNetworkVarNames "ETier3State_t m_eAliveState"
// MNetworkVarNames "ETier3Phase_t m_ePhase"
class C_NPC_Boss_Tier3 : public C_AI_CitadelNPC
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x13c0	
private:
	[[maybe_unused]] uint8_t __pad13c4[0x4]; // 0x13c4
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnT3Targeting1Changed"
	QAngle m_angTargeting1; // 0x13c8	
private:
	[[maybe_unused]] uint8_t __pad13d4[0xc]; // 0x13d4
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnT3Targeting2Changed"
	QAngle m_angTargeting2; // 0x13e0	
private:
	[[maybe_unused]] uint8_t __pad13ec[0xc]; // 0x13ec
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnT3ElectricBeamCastsChanged"
	int32_t m_nElectricBeamCasts; // 0x13f8	
	// MNetworkEnable
	ETier3State_t m_eAliveState; // 0x13fc	
	// MNetworkEnable
	ETier3Phase_t m_ePhase; // 0x1400	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BreakablePropExtraGoldPickupVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Powerup Values"
	int32_t m_iBaseExtraGoldBounty; // 0x5f0	
	// MPropertyGroupName "Powerup Values"
	int32_t m_iPerMinuteExtraGoldBounty; // 0x5f4	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Astro_Shotgun_Toggle_VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MagicStormWatcherVData : public CCitadel_Modifier_Intrinsic_BaseVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_TrooperDisabledInvulnerability : public CCitadelModifier
{
public:
	float m_flBulletResistancePctMax; // 0xc0	
	bool m_bShieldUp; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c5[0x3]; // 0xc5
public:
	GameTime_t m_flShieldUpTime; // 0xc8	
	ModifierTrackedParticle_t m_trackInfo; // 0xcc	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x570
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class C_EntityFlame : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEntAttached; // 0x538	
private:
	[[maybe_unused]] uint8_t __pad053c[0x24]; // 0x53c
public:
	CHandle< C_BaseEntity > m_hOldAttached; // 0x560	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x564	
	
	// Datamap fields:
	// void m_hEffect; // 0x540
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x150
// Has VTable
class CCitadel_Modifier_FlameDashGroundAura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x810
// Has VTable
class C_PhysBox : public C_Breakable
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea8
// Has VTable
class CCitadel_Ability_Uppercut : public CCitadel_Ability_Melee_Base
{
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x1f8]; // 0xca8
public:
	bool m_bShouldUseResources; // 0xea0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_vecPulseTargets"
class CCitadel_Ability_PsychicPulse : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x38]; // 0xc28
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecPulseTargets; // 0xc60	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x550
// Has VTable
class C_TintController : public C_BaseEntity
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
class CPlayer_AutoaimServices : public CPlayerPawnComponent
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_WingBlastApply : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_ImmobilizeTrap_Debuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x920
// Has VTable
class C_FireFromAboveSprite : public C_Sprite
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBullChargeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x14e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // 0x1560	
	CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // 0x1570	
	CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // 0x1580	
	CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // 0x1590	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWallSlamSound; // 0x15a0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9eb8
// Has VTable
// 
// MNetworkVarNames "bool m_bFreezePeriod"
// MNetworkVarNames "GameTime_t m_fLevelStartTime"
// MNetworkVarNames "GameTime_t m_flGameStartTime"
// MNetworkVarNames "GameTime_t m_flRoundStartTime"
// MNetworkVarNames "EGameState m_eGameState"
// MNetworkVarNames "EHANDLE m_hTowerAmber"
// MNetworkVarNames "EHANDLE m_hTowerSapphire"
// MNetworkVarNames "bool m_bEnemyInAmberBase"
// MNetworkVarNames "bool m_bEnemyInSapphireBase"
// MNetworkVarNames "float m_flCombineZiplineSpeedMultiplier"
// MNetworkVarNames "float m_flRebelZiplineSpeedMultiplier"
// MNetworkVarNames "Vector m_vMinimapMins"
// MNetworkVarNames "Vector m_vMinimapMaxs"
// MNetworkVarNames "bool m_bMatchSafeToAbandon"
// MNetworkVarNames "bool m_bNoDeathEnabled"
// MNetworkVarNames "bool m_bFastCooldownsEnabled"
// MNetworkVarNames "bool m_bStaminaCooldownsEnabled"
// MNetworkVarNames "bool m_bInfiniteResourcesEnabled"
// MNetworkVarNames "bool m_bFlexSlotsForcedUnlocked"
// MNetworkVarNames "ECitadelMatchMode m_eMatchMode"
// MNetworkVarNames "ECitadelGameMode m_eGameMode"
// MNetworkVarNames "CHandle<CCitadelTrooperMinimap> m_hTrooperMinimap"
// MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterRebels"
// MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterCombine"
// MNetworkVarNames "bool m_bServerPaused"
// MNetworkVarNames "int m_iPauseTeam"
// MNetworkVarNames "bool m_bRequiresReportCardDismissal"
// MNetworkVarNames "int m_eGGTeam"
// MNetworkVarNames "GameTime_t m_flGGEndsAtTime"
// MNetworkVarNames "MatchID_t m_unMatchID"
// MNetworkVarNames "int m_nExperimentalGameplayState"
// MNetworkVarNames "GameTime_t m_flHeroDiedTime"
class C_CitadelGameRules : public C_TeamplayRules
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x18]; // 0x40
public:
	// MNetworkEnable
	bool m_bFreezePeriod; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	// MNetworkEnable
	GameTime_t m_fLevelStartTime; // 0x5c	
	// MNetworkEnable
	GameTime_t m_flGameStartTime; // 0x60	
	// MNetworkEnable
	GameTime_t m_flRoundStartTime; // 0x64	
	// MNetworkEnable
	EGameState m_eGameState; // 0x68	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTowerAmber; // 0x6c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTowerSapphire; // 0x70	
	// MNetworkEnable
	bool m_bEnemyInAmberBase; // 0x74	
	// MNetworkEnable
	bool m_bEnemyInSapphireBase; // 0x75	
private:
	[[maybe_unused]] uint8_t __pad0076[0x2]; // 0x76
public:
	// MNetworkEnable
	float m_flCombineZiplineSpeedMultiplier; // 0x78	
	// MNetworkEnable
	float m_flRebelZiplineSpeedMultiplier; // 0x7c	
	// MNetworkEnable
	Vector m_vMinimapMins; // 0x80	
	// MNetworkEnable
	Vector m_vMinimapMaxs; // 0x8c	
	// MNetworkEnable
	bool m_bMatchSafeToAbandon; // 0x98	
	// MNetworkEnable
	bool m_bNoDeathEnabled; // 0x99	
	// MNetworkEnable
	bool m_bFastCooldownsEnabled; // 0x9a	
	// MNetworkEnable
	bool m_bStaminaCooldownsEnabled; // 0x9b	
	// MNetworkEnable
	bool m_bInfiniteResourcesEnabled; // 0x9c	
	// MNetworkEnable
	bool m_bFlexSlotsForcedUnlocked; // 0x9d	
private:
	[[maybe_unused]] uint8_t __pad009e[0x2]; // 0x9e
public:
	// MNetworkEnable
	ECitadelMatchMode m_eMatchMode; // 0xa0	
	// MNetworkEnable
	ECitadelGameMode m_eGameMode; // 0xa4	
	// MNetworkEnable
	CHandle< CCitadelTrooperMinimap > m_hTrooperMinimap; // 0xa8	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "playerDraftingChanged"
	CHandle< C_BaseEntity > m_hCurrentHeroDrafterRebels; // 0xac	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "playerDraftingChanged"
	CHandle< C_BaseEntity > m_hCurrentHeroDrafterCombine; // 0xb0	
	bool m_bDontUploadStats; // 0xb4	
private:
	[[maybe_unused]] uint8_t __pad00b5[0x9d5b]; // 0xb5
public:
	// MNetworkEnable
	bool m_bServerPaused; // 0x9e10	
private:
	[[maybe_unused]] uint8_t __pad9e11[0x3]; // 0x9e11
public:
	// MNetworkEnable
	int32_t m_iPauseTeam; // 0x9e14	
	double m_flPauseTime; // 0x9e18	
	CPlayerSlot m_pausingPlayerId; // 0x9e20	
	CPlayerSlot m_unpausingPlayerId; // 0x9e24	
	float m_fPauseRawTime; // 0x9e28	
	float m_fPauseCurTime; // 0x9e2c	
	float m_fUnpauseRawTime; // 0x9e30	
	float m_fUnpauseCurTime; // 0x9e34	
private:
	[[maybe_unused]] uint8_t __pad9e38[0x28]; // 0x9e38
public:
	// MNetworkEnable
	bool m_bRequiresReportCardDismissal; // 0x9e60	
private:
	[[maybe_unused]] uint8_t __pad9e61[0x3]; // 0x9e61
public:
	GameTime_t m_flPreGameWaitEndTime; // 0x9e64	
	GameTime_t m_flReportCardDismissalWaitStart; // 0x9e68	
	int32_t m_nLastPreGameCount; // 0x9e6c	
	// MNetworkEnable
	int32_t m_eGGTeam; // 0x9e70	
	// MNetworkEnable
	GameTime_t m_flGGEndsAtTime; // 0x9e74	
	// MNetworkEnable
	MatchID_t m_unMatchID; // 0x9e78	
	// MNetworkEnable
	int32_t m_nExperimentalGameplayState; // 0x9e80	
	int32_t m_nPlayerDeathEventID; // 0x9e84	
	int32_t m_nReplayChangedEvent; // 0x9e88	
	int32_t m_nGameOverEvent; // 0x9e8c	
private:
	[[maybe_unused]] uint8_t __pad9e90[0x20]; // 0x9e90
public:
	// MNetworkEnable
	GameTime_t m_flHeroDiedTime; // 0x9eb0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x118
// Has VTable
class CCitadel_Modifier_Tier2Boss_RocketDamage_Aura : public CCitadelModifierAura
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Rutger_Pulse_VData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strSilenceTargetSound; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityShivDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DashModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // 0x16b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDashStartWithTargets; // 0x1790	
	CSoundEventName m_strDashStartMiss; // 0x17a0	
	CSoundEventName m_strDashHitEnemy; // 0x17b0	
	// MPropertyStartGroup "+Dash Properties"
	float m_flEmpoweredSideOffset; // 0x17c0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc60
// Has VTable
class CCitadel_Ability_MobileResupply : public C_CitadelBaseAbility
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetSnipeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AssassinateShotParticleOwnerOnly; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // 0x1780	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SnipeModifier; // 0x1860	
	CEmbeddedSubclass< CCitadelModifier > m_BuffOnKillModifier; // 0x1870	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSnipeImpactSound; // 0x1880	
	// MPropertyStartGroup "+Snipe Properties"
	float m_flMinScopeTimeToShoot; // 0x1890	
	float m_flScopeTimeToFullPower; // 0x1894	
	float m_flScopeMinPowerFrac; // 0x1898	
	float m_flFadeToBlackTime; // 0x189c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
class CCitadel_Modifier_AblativeCoatResistBuff : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVitalitySuppressorVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // 0x5f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13c0
// Has VTable
class C_CitadelPlayerBotNPCBrain : public C_AI_CitadelNPC
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb20
// Has VTable
// 
// MNetworkVarNames "uint32 m_boneIndexAttached"
// MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
// MNetworkVarNames "Vector m_attachmentPointBoneSpace"
// MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
class C_RagdollPropAttached : public C_RagdollProp
{
public:
	// MNetworkEnable
	uint32_t m_boneIndexAttached; // 0xae8	
	// MNetworkEnable
	uint32_t m_ragdollAttachedObjectIndex; // 0xaec	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointBoneSpace; // 0xaf0	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_attachmentPointRagdollSpace; // 0xafc	
	Vector m_vecOffset; // 0xb08	
	float m_parentTime; // 0xb14	
	bool m_bHasParent; // 0xb18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_WeaponUpgrade_BansheeSlugs : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1578
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadenceSilenceContraptionsVData : public CBaseDashCastAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceContraptionsModifier; // 0x1568	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Synth_Barrage_Amp_VData : public CCitadelModifierVData
{
public:
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Gravity_Lasso_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_GravityLassoSelf; // 0x14e0	
	CEmbeddedSubclass< CBaseModifier > m_GravityLassoTarget; // 0x14f0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_MeleeCharge_VData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // 0x620	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x700	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_HealthRegenAuraVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealParticle; // 0x1528	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastHealParticle; // 0x1608	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HealingPulseTrackerModifier; // 0x16e8	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
class CCitadel_Modifier_GalvanicStormTechShield : public CCitadel_Modifier_RegeneratingTechShield
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc0
// Has VTable
class CCitadel_Modifier_ImmobilizeTrap_Immobilize : public CCitadel_Modifier_Root
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
class C_HeroPreview : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	// -> m_nHeroID - 0x54c
	// -> m_nHeroLoading - 0x550
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0x538	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "FixAngleSet_t nType"
// MNetworkVarNames "QAngle qAngle"
// MNetworkVarNames "uint32 nIndex"
struct ViewAngleServerChange_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	FixAngleSet_t nType; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle_precise"
	QAngle qAngle; // 0x34	
	// MNetworkEnable
	uint32_t nIndex; // 0x40	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_ArmorUpgrade_Colossus : public CCitadel_Item
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_GoldenIdolVData : public CCitadel_Ability_BaseHeldItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sIdolDropOffSound; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DropoffTimerModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus01; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_Bonus02; // 0x15f0	
	// MPropertyStartGroup "Gameplay"
	float m_flInstantGoldPercentage; // 0x1600	
	int32_t m_iComebackBounty; // 0x1604	
	int32_t m_iComebackGoldThreshold; // 0x1608	
	float m_flCasterBonusPercent; // 0x160c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class CCitadel_Modifier_Slork_Visible : public CCitadelModifier
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Slork_Raging_CurrentVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x14e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b0
// Has VTable
class CCitadel_Modifier_Thumper_Ability_2 : public CCitadelModifier
{
public:
	Vector m_vLastPosition; // 0xc0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BulletFlurryVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x5f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strAttackerHitSound; // 0x6d0	
	CSoundEventName m_strVictimHitSound; // 0x6e0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe78
// Has VTable
// 
// MNetworkVarNames "bool m_bCardIsFlying"
class CCitadel_Ability_CardToss : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x248]; // 0xc28
public:
	// MNetworkEnable
	bool m_bCardIsFlying; // 0xe70	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TeleportToObjectiveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportOriginParticle; // 0x5f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportDestinationParticle; // 0x6d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TeleportStartSound; // 0x7b0	
	CSoundEventName m_TeleportCompleteSound; // 0x7c0	
	CSoundEventName m_TeleportArriveSound; // 0x7d0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MNetworkVarNames "EntitySubclassID_t m_SourceModifierID"
// MNetworkVarNames "EModifierValue m_eValType"
// MNetworkVarNames "float m_flValue"
struct StatViewerModifierValues_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	CUtlStringToken m_SourceModifierID; // 0x30	
	// MNetworkEnable
	EModifierValue m_eValType; // 0x34	
	// MNetworkEnable
	float m_flValue; // 0x38	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe60
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkVarTypeOverride "CCitadelPlayer_ObserverServices m_pObserverServices"
// MNetworkIncludeByName "m_pObserverServices"
// MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCitadelObserver_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
class C_CitadelObserverPawn : public CCitadelPlayerPawnBase
{
public:
	// Datamap fields:
	// CCitadelPlayer_ObserverServices m_pObserverServices; // 0xca8
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xcc8
	// CCitadelObserver_MovementServices m_pMovementServices; // 0xcd0
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb8
class CDecalInfo
{
public:
	float m_flAnimationScale; // 0x0	
	float m_flAnimationLifeSpan; // 0x4	
	float m_flPlaceTime; // 0x8	
	float m_flFadeStartTime; // 0xc	
	float m_flFadeDuration; // 0x10	
	int32_t m_nVBSlot; // 0x14	
	int32_t m_nBoneIndex; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0xc]; // 0x1c
public:
	CDecalInfo* m_pNext; // 0x28	
	CDecalInfo* m_pPrev; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0038[0x78]; // 0x38
public:
	int32_t m_nDecalMaterialIndex; // 0xb0	
	
	// Datamap fields:
	// void m_decalEvent; // 0x38
	// void m_hProjectedDecal; // 0x20
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
class C_LightGlowOverlay : public CGlowOverlay
{
public:
	Vector m_vecOrigin; // 0xd0	
	Vector m_vecDirection; // 0xdc	
	int32_t m_nMinDist; // 0xe8	
	int32_t m_nMaxDist; // 0xec	
	int32_t m_nOuterMaxDist; // 0xf0	
	bool m_bOneSided; // 0xf4	
	bool m_bModulateByDot; // 0xf5	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class C_SunGlowOverlay : public CGlowOverlay
{
public:
	bool m_bModulateByDot; // 0xd0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14
// Has Trivial Destructor
class CInterpolatedValue
{
public:
	float m_flStartTime; // 0x0	
	float m_flEndTime; // 0x4	
	float m_flStartValue; // 0x8	
	float m_flEndValue; // 0xc	
	int32_t m_nInterpType; // 0x10	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
// 
// MNetworkOverride "m_flScale"
// MNetworkOverride "m_flScaleTime"
// MNetworkVarNames "int32 m_nFlameModelIndex"
// MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
class C_FireSmoke : public C_BaseFire
{
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; // 0x548	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x54c	
	float m_flScaleRegister; // 0x550	
	float m_flScaleStart; // 0x554	
	float m_flScaleEnd; // 0x558	
	GameTime_t m_flScaleTimeStart; // 0x55c	
	GameTime_t m_flScaleTimeEnd; // 0x560	
	float m_flChildFlameSpread; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0568[0x10]; // 0x568
public:
	float m_flClipPerc; // 0x578	
	bool m_bClipTested; // 0x57c	
	bool m_bFadingOut; // 0x57d	
private:
	[[maybe_unused]] uint8_t __pad057e[0x2]; // 0x57e
public:
	// -> m_TimeBetweenEvents - 0x580
	// -> m_fNextEvent - 0x584
	TimedEvent m_tParticleSpawn; // 0x580	
	CFireOverlay* m_pFireOverlay; // 0x588	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2e0
// Has VTable
class CFlashlightEffect
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bIsOn; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0xf]; // 0x11
public:
	bool m_bMuzzleFlashEnabled; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
public:
	float m_flMuzzleFlashBrightness; // 0x24	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	Quaternion m_quatMuzzleFlashOrientation; // 0x30	
	Vector m_vecMuzzleFlashOrigin; // 0x40	
	float m_flFov; // 0x4c	
	float m_flFarZ; // 0x50	
	float m_flLinearAtten; // 0x54	
	bool m_bCastsShadows; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
public:
	float m_flCurrentPullBackDist; // 0x5c	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_FlashlightTexture; // 0x60	
	CStrongHandle< InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture; // 0x68	
	char m_textureName[64]; // 0x70	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
class CGlowSprite
{
public:
	Vector m_vColor; // 0x0	
	float m_flHorzSize; // 0xc	
	float m_flVertSize; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x18	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x910
// Has VTable
class CCitadelPreviewPlayerController : public CCitadelPlayerController
{
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x110
// Has VTable
class CFireOverlay : public CGlowOverlay
{
public:
	C_FireSmoke* m_pOwner; // 0xd0	
	Vector m_vBaseColors[4]; // 0xd8	
	float m_flScale; // 0x108	
	int32_t m_nGUID; // 0x10c	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
// 
// MVDataRoot
// MVDataSingleton
// MGetKV3ClassDefaults
struct CitadelPingWheelMessagesVDATA_t
{
public:
	// MPropertyCustomFGDType "vdata_choice:scripts/ping_wheel_messages.vdata"
	CUtlOrderedMap< ECitadelPingWheelMessageType_t, CUtlVector< CUtlString > > m_mapPingMessages; // 0x0	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x30
// Has VTable
// Has Trivial Destructor
class CClientAlphaProperty : public IClientAlphaProperty
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	uint8_t m_nRenderFX; // 0x10	
	uint8_t m_nRenderMode; // 0x11	
	struct 
	{
		uint8_t m_bAlphaOverride: 1; 		
		uint8_t m_bShadowAlphaOverride: 1; 		
		uint8_t m_nReserved: 6; 		
		uint8_t __pad3: 8;
	}; // 16 bits
	uint8_t m_nAlpha; // 0x13	
	uint16_t m_nDesyncOffset; // 0x14	
	uint16_t m_nReserved2; // 0x16	
	uint16_t m_nDistFadeStart; // 0x18	
	uint16_t m_nDistFadeEnd; // 0x1a	
	float m_flFadeScale; // 0x1c	
	GameTime_t m_flRenderFxStartTime; // 0x20	
	float m_flRenderFxDuration; // 0x24	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x928
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_clrRender"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "uint32 m_nHorizontalSize"
// MNetworkVarNames "uint32 m_nVerticalSize"
// MNetworkVarNames "uint32 m_nMinDist"
// MNetworkVarNames "uint32 m_nMaxDist"
// MNetworkVarNames "uint32 m_nOuterMaxDist"
// MNetworkVarNames "float32 m_flGlowProxySize"
// MNetworkVarNames "float32 m_flHDRColorScale"
class C_LightGlow : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	uint32_t m_nHorizontalSize; // 0x810	
	// MNetworkEnable
	uint32_t m_nVerticalSize; // 0x814	
	// MNetworkEnable
	uint32_t m_nMinDist; // 0x818	
	// MNetworkEnable
	uint32_t m_nMaxDist; // 0x81c	
	// MNetworkEnable
	uint32_t m_nOuterMaxDist; // 0x820	
	// MNetworkEnable
	// MNetworkBitCount "6"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "64.000000"
	// MNetworkEncodeFlags "2"
	float m_flGlowProxySize; // 0x824	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "100.000000"
	// MNetworkChangeCallback "OnHDRColorScaleChanged"
	float m_flHDRColorScale; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad082c[0x4]; // 0x82c
public:
	// -> m_vecOrigin - 0x900
	// -> m_vecDirection - 0x90c
	// -> m_nMinDist - 0x918
	// -> m_nMaxDist - 0x91c
	// -> m_nOuterMaxDist - 0x920
	// -> m_bOneSided - 0x924
	// -> m_bModulateByDot - 0x925
	C_LightGlowOverlay m_GlowOverlay; // 0x830	
};

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x38
// Has VTable
class C_PortraitWorldUnit_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamOptionalRef< char* > m_pszHeroUI; // 0x18	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_PortraitWorldUnit_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_PortraitWorldUnit_GraphController")->m_static_fields[1]->m_instance);};
};

