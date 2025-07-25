// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignEvents
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.CampaignSystem.CraftingSystem;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class CampaignEvents : CampaignEventReceiver
  {
    private readonly MbEvent _onPlayerBodyPropertiesChangedEvent = new MbEvent();
    private readonly MbEvent<BarterData> _barterablesRequested = new MbEvent<BarterData>();
    private readonly MbEvent<Hero, bool> _heroLevelledUp = new MbEvent<Hero, bool>();
    private readonly MbEvent<Hero, SkillObject, int, bool> _heroGainedSkill = new MbEvent<Hero, SkillObject, int, bool>();
    private readonly MbEvent _onCharacterCreationIsOverEvent = new MbEvent();
    private readonly MbEvent<Hero, bool> _onHeroCreated = new MbEvent<Hero, bool>();
    private readonly MbEvent<Hero, Occupation> _heroOccupationChangedEvent = new MbEvent<Hero, Occupation>();
    private readonly MbEvent<Hero> _onHeroWounded = new MbEvent<Hero>();
    private readonly MbEvent<Hero, Hero, List<Barterable>> _onBarterAcceptedEvent = new MbEvent<Hero, Hero, List<Barterable>>();
    private readonly MbEvent<Hero, Hero, List<Barterable>> _onBarterCanceledEvent = new MbEvent<Hero, Hero, List<Barterable>>();
    private readonly MbEvent<Hero, Hero, int, bool, ChangeRelationAction.ChangeRelationDetail, Hero, Hero> _heroRelationChanged = new MbEvent<Hero, Hero, int, bool, ChangeRelationAction.ChangeRelationDetail, Hero, Hero>();
    private readonly MbEvent<QuestBase, bool> _questLogAddedEvent = new MbEvent<QuestBase, bool>();
    private readonly MbEvent<IssueBase, bool> _issueLogAddedEvent = new MbEvent<IssueBase, bool>();
    private readonly MbEvent<Clan, bool> _clanTierIncrease = new MbEvent<Clan, bool>();
    private readonly MbEvent<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool> _clanChangedKingdom = new MbEvent<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>();
    private readonly MbEvent<Clan> _onCompanionClanCreatedEvent = new MbEvent<Clan>();
    private readonly MbEvent<Hero, MobileParty> _onHeroJoinedPartyEvent = new MbEvent<Hero, MobileParty>();
    private readonly MbEvent<(Hero, PartyBase), (Hero, PartyBase), (int, string), bool> _heroOrPartyTradedGold = new MbEvent<(Hero, PartyBase), (Hero, PartyBase), (int, string), bool>();
    private readonly MbEvent<(Hero, PartyBase), (Hero, PartyBase), ItemRosterElement, bool> _heroOrPartyGaveItem = new MbEvent<(Hero, PartyBase), (Hero, PartyBase), ItemRosterElement, bool>();
    private readonly MbEvent<MobileParty> _banditPartyRecruited = new MbEvent<MobileParty>();
    private readonly MbEvent<KingdomDecision, bool> _kingdomDecisionAdded = new MbEvent<KingdomDecision, bool>();
    private readonly MbEvent<KingdomDecision, bool> _kingdomDecisionCancelled = new MbEvent<KingdomDecision, bool>();
    private readonly MbEvent<KingdomDecision, DecisionOutcome, bool> _kingdomDecisionConcluded = new MbEvent<KingdomDecision, DecisionOutcome, bool>();
    private readonly MbEvent<MobileParty> _partyAttachedParty = new MbEvent<MobileParty>();
    private readonly MbEvent<MobileParty> _nearbyPartyAddedToPlayerMapEvent = new MbEvent<MobileParty>();
    private readonly MbEvent<Army> _armyCreated = new MbEvent<Army>();
    private readonly MbEvent<Army, Army.ArmyDispersionReason, bool> _armyDispersed = new MbEvent<Army, Army.ArmyDispersionReason, bool>();
    private readonly MbEvent<Army, Settlement> _armyGathered = new MbEvent<Army, Settlement>();
    private readonly MbEvent<Hero, PerkObject> _perkOpenedEvent = new MbEvent<Hero, PerkObject>();
    private readonly MbEvent<TraitObject, int> _playerTraitChangedEvent = new MbEvent<TraitObject, int>();
    private readonly MbEvent<Village, Village.VillageStates, Village.VillageStates, MobileParty> _villageStateChanged = new MbEvent<Village, Village.VillageStates, Village.VillageStates, MobileParty>();
    private readonly MbEvent<MobileParty, Settlement, Hero> _settlementEntered = new MbEvent<MobileParty, Settlement, Hero>();
    private readonly MbEvent<MobileParty, Settlement, Hero> _afterSettlementEntered = new MbEvent<MobileParty, Settlement, Hero>();
    private readonly MbEvent<Town, CharacterObject, CharacterObject> _mercenaryTroopChangedInTown = new MbEvent<Town, CharacterObject, CharacterObject>();
    private readonly MbEvent<Town, int, int> _mercenaryNumberChangedInTown = new MbEvent<Town, int, int>();
    private readonly MbEvent<Alley, Hero, Hero> _alleyOwnerChanged = new MbEvent<Alley, Hero, Hero>();
    private readonly MbEvent<Alley, TroopRoster> _alleyOccupiedByPlayer = new MbEvent<Alley, TroopRoster>();
    private readonly MbEvent<Alley> _alleyClearedByPlayer = new MbEvent<Alley>();
    private readonly MbEvent<Hero, Hero, Romance.RomanceLevelEnum> _romanticStateChanged = new MbEvent<Hero, Hero, Romance.RomanceLevelEnum>();
    private readonly MbEvent<Hero, Hero, bool> _heroesMarried = new MbEvent<Hero, Hero, bool>();
    private readonly MbEvent<int, Town> _playerEliminatedFromTournament = new MbEvent<int, Town>();
    private readonly MbEvent<Town> _playerStartedTournamentMatch = new MbEvent<Town>();
    private readonly MbEvent<Town> _tournamentStarted = new MbEvent<Town>();
    private readonly MbEvent<IFaction, IFaction, DeclareWarAction.DeclareWarDetail> _warDeclared = new MbEvent<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>();
    private readonly MbEvent<CharacterObject, MBReadOnlyList<CharacterObject>, Town, ItemObject> _tournamentFinished = new MbEvent<CharacterObject, MBReadOnlyList<CharacterObject>, Town, ItemObject>();
    private readonly MbEvent<Town> _tournamentCancelled = new MbEvent<Town>();
    private readonly MbEvent<PartyBase, PartyBase, object, bool> _battleStarted = new MbEvent<PartyBase, PartyBase, object, bool>();
    private readonly MbEvent<Settlement, Clan> _rebellionFinished = new MbEvent<Settlement, Clan>();
    private readonly MbEvent<Town, bool> _townRebelliousStateChanged = new MbEvent<Town, bool>();
    private readonly MbEvent<Settlement, Clan> _rebelliousClanDisbandedAtSettlement = new MbEvent<Settlement, Clan>();
    private readonly MbEvent<MobileParty, ItemRoster> _itemsLooted = new MbEvent<MobileParty, ItemRoster>();
    private readonly MbEvent<MobileParty, PartyBase> _mobilePartyDestroyed = new MbEvent<MobileParty, PartyBase>();
    private readonly MbEvent<MobileParty> _mobilePartyCreated = new MbEvent<MobileParty>();
    private readonly MbEvent<MobileParty, bool> _mobilePartyQuestStatusChanged = new MbEvent<MobileParty, bool>();
    private readonly MbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool> _heroKilled = new MbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>();
    private readonly MbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool> _onBeforeHeroKilled = new MbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>();
    private readonly MbEvent<Hero, int> _childEducationCompleted = new MbEvent<Hero, int>();
    private readonly MbEvent<Hero> _heroComesOfAge = new MbEvent<Hero>();
    private readonly MbEvent<Hero> _heroGrowsOutOfInfancyEvent = new MbEvent<Hero>();
    private readonly MbEvent<Hero> _heroReachesTeenAgeEvent = new MbEvent<Hero>();
    private readonly MbEvent<Hero, Hero> _characterDefeated = new MbEvent<Hero, Hero>();
    private readonly MbEvent<Kingdom, Clan> _rulingClanChanged = new MbEvent<Kingdom, Clan>();
    private readonly MbEvent<PartyBase, Hero> _heroPrisonerTaken = new MbEvent<PartyBase, Hero>();
    private readonly MbEvent<Hero, PartyBase, IFaction, EndCaptivityDetail> _heroPrisonerReleased = new MbEvent<Hero, PartyBase, IFaction, EndCaptivityDetail>();
    private readonly MbEvent<Hero> _characterBecameFugitive = new MbEvent<Hero>();
    private readonly MbEvent<Hero> _playerMetHero = new MbEvent<Hero>();
    private readonly MbEvent<Hero> _playerLearnsAboutHero = new MbEvent<Hero>();
    private readonly MbEvent<Hero, int, bool> _renownGained = new MbEvent<Hero, int, bool>();
    private readonly MbEvent<IFaction, float> _crimeRatingChanged = new MbEvent<IFaction, float>();
    private readonly MbEvent<Hero> _newCompanionAdded = new MbEvent<Hero>();
    private readonly MbEvent<IMission> _afterMissionStarted = new MbEvent<IMission>();
    private readonly MbEvent<MenuCallbackArgs> _gameMenuOpened = new MbEvent<MenuCallbackArgs>();
    private readonly MbEvent<MenuCallbackArgs> _afterGameMenuOpenedEvent = new MbEvent<MenuCallbackArgs>();
    private readonly MbEvent<MenuCallbackArgs> _beforeGameMenuOpenedEvent = new MbEvent<MenuCallbackArgs>();
    private readonly MbEvent<IFaction, IFaction, MakePeaceAction.MakePeaceDetail> _makePeace = new MbEvent<IFaction, IFaction, MakePeaceAction.MakePeaceDetail>();
    private readonly MbEvent<Kingdom> _kingdomDestroyed = new MbEvent<Kingdom>();
    private readonly ReferenceMBEvent<Kingdom, bool> _canKingdomBeDiscontinued = new ReferenceMBEvent<Kingdom, bool>();
    private readonly MbEvent<Kingdom> _kingdomCreated = new MbEvent<Kingdom>();
    private readonly MbEvent<Village> _villageBecomeNormal = new MbEvent<Village>();
    private readonly MbEvent<Village> _villageBeingRaided = new MbEvent<Village>();
    private readonly MbEvent<Village> _villageLooted = new MbEvent<Village>();
    private readonly MbEvent<Hero, RemoveCompanionAction.RemoveCompanionDetail> _companionRemoved = new MbEvent<Hero, RemoveCompanionAction.RemoveCompanionDetail>();
    private readonly MbEvent<IAgent> _onAgentJoinedConversationEvent = new MbEvent<IAgent>();
    private readonly MbEvent<IEnumerable<CharacterObject>> _onConversationEnded = new MbEvent<IEnumerable<CharacterObject>>();
    private readonly MbEvent<MapEvent> _mapEventEnded = new MbEvent<MapEvent>();
    private readonly MbEvent<MapEvent, PartyBase, PartyBase> _mapEventStarted = new MbEvent<MapEvent, PartyBase, PartyBase>();
    private readonly MbEvent<Settlement, FlattenedTroopRoster, Hero, bool> _prisonersChangeInSettlement = new MbEvent<Settlement, FlattenedTroopRoster, Hero, bool>();
    private readonly MbEvent<Hero, BoardGameHelper.BoardGameState> _onPlayerBoardGameOver = new MbEvent<Hero, BoardGameHelper.BoardGameState>();
    private readonly MbEvent<Hero> _onRansomOfferedToPlayer = new MbEvent<Hero>();
    private readonly MbEvent<Hero> _onRansomOfferCancelled = new MbEvent<Hero>();
    private readonly MbEvent<IFaction, int> _onPeaceOfferedToPlayer = new MbEvent<IFaction, int>();
    private readonly MbEvent<IFaction> _onPeaceOfferCancelled = new MbEvent<IFaction>();
    private readonly MbEvent<Hero, Hero> _onMarriageOfferedToPlayerEvent = new MbEvent<Hero, Hero>();
    private readonly MbEvent<Hero, Hero> _onMarriageOfferCanceledEvent = new MbEvent<Hero, Hero>();
    private readonly MbEvent<Kingdom> _onVassalOrMercenaryServiceOfferedToPlayerEvent = new MbEvent<Kingdom>();
    private readonly MbEvent<Kingdom> _onVassalOrMercenaryServiceOfferCanceledEvent = new MbEvent<Kingdom>();
    private readonly MbEvent<IMission> _onMissionStartedEvent = new MbEvent<IMission>();
    private readonly MbEvent _beforeMissionOpenedEvent = new MbEvent();
    private readonly MbEvent<PartyBase> _onPartyRemovedEvent = new MbEvent<PartyBase>();
    private readonly MbEvent<PartyBase> _onPartySizeChangedEvent = new MbEvent<PartyBase>();
    private readonly MbEvent<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail> _onSettlementOwnerChangedEvent = new MbEvent<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>();
    private readonly MbEvent<Town, Hero, Hero> _onGovernorChangedEvent = new MbEvent<Town, Hero, Hero>();
    private readonly MbEvent<MobileParty, Settlement> _onSettlementLeftEvent = new MbEvent<MobileParty, Settlement>();
    private readonly MbEvent _weeklyTickEvent = new MbEvent();
    private readonly MbEvent _dailyTickEvent = new MbEvent();
    private readonly MbEvent<MobileParty> _dailyTickPartyEvent = new MbEvent<MobileParty>();
    private readonly MbEvent<Town> _dailyTickTownEvent = new MbEvent<Town>();
    private readonly MbEvent<Settlement> _dailyTickSettlementEvent = new MbEvent<Settlement>();
    private readonly MbEvent<Hero> _dailyTickHeroEvent = new MbEvent<Hero>();
    private readonly MbEvent<Clan> _dailyTickClanEvent = new MbEvent<Clan>();
    private readonly MbEvent<List<CampaignTutorial>> _collectAvailableTutorialsEvent = new MbEvent<List<CampaignTutorial>>();
    private readonly MbEvent<string> _onTutorialCompletedEvent = new MbEvent<string>();
    private readonly MbEvent<Town, Building, int> _onBuildingLevelChangedEvent = new MbEvent<Town, Building, int>();
    private readonly MbEvent _hourlyTickEvent = new MbEvent();
    private readonly MbEvent<MobileParty> _hourlyTickPartyEvent = new MbEvent<MobileParty>();
    private readonly MbEvent<Settlement> _hourlyTickSettlementEvent = new MbEvent<Settlement>();
    private readonly MbEvent<Clan> _hourlyTickClanEvent = new MbEvent<Clan>();
    private readonly MbEvent<float> _tickEvent = new MbEvent<float>();
    private readonly MbEvent<CampaignGameStarter> _onSessionLaunchedEvent = new MbEvent<CampaignGameStarter>();
    private readonly MbEvent<CampaignGameStarter> _onAfterSessionLaunchedEvent = new MbEvent<CampaignGameStarter>();
    public const int OnNewGameCreatedPartialFollowUpEventMaxIndex = 100;
    private readonly MbEvent<CampaignGameStarter> _onNewGameCreatedEvent = new MbEvent<CampaignGameStarter>();
    private readonly MbEvent<CampaignGameStarter, int> _onNewGameCreatedPartialFollowUpEvent = new MbEvent<CampaignGameStarter, int>();
    private readonly MbEvent<CampaignGameStarter> _onNewGameCreatedPartialFollowUpEndEvent = new MbEvent<CampaignGameStarter>();
    private readonly MbEvent<CampaignGameStarter> _onGameEarlyLoadedEvent = new MbEvent<CampaignGameStarter>();
    private readonly MbEvent<CampaignGameStarter> _onGameLoadedEvent = new MbEvent<CampaignGameStarter>();
    private readonly MbEvent _onGameLoadFinishedEvent = new MbEvent();
    private readonly MbEvent<MobileParty, PartyThinkParams> _aiHourlyTickEvent = new MbEvent<MobileParty, PartyThinkParams>();
    private readonly MbEvent<MobileParty> _tickPartialHourlyAiEvent = new MbEvent<MobileParty>();
    private readonly MbEvent<MobileParty> _onPartyJoinedArmyEvent = new MbEvent<MobileParty>();
    private readonly MbEvent<MobileParty> _onPartyRemovedFromArmyEvent = new MbEvent<MobileParty>();
    private readonly MbEvent<Hero, Army.ArmyLeaderThinkReason> _onArmyLeaderThinkEvent = new MbEvent<Hero, Army.ArmyLeaderThinkReason>();
    private readonly MbEvent<IMission> _onMissionEndedEvent = new MbEvent<IMission>();
    private readonly MbEvent<MobileParty> _onQuarterDailyPartyTick = new MbEvent<MobileParty>();
    private readonly MbEvent<MapEvent> _onPlayerBattleEndEvent = new MbEvent<MapEvent>();
    private readonly MbEvent<CharacterObject, int> _onUnitRecruitedEvent = new MbEvent<CharacterObject, int>();
    private readonly MbEvent<Hero> _onChildConceived = new MbEvent<Hero>();
    private readonly MbEvent<Hero, List<Hero>, int> _onGivenBirthEvent = new MbEvent<Hero, List<Hero>, int>();
    private readonly MbEvent<float> _missionTickEvent = new MbEvent<float>();
    private readonly MbEvent _setupPreConversationEvent = new MbEvent();
    private MbEvent _armyOverlaySetDirty = new MbEvent();
    private readonly MbEvent<int> _playerDesertedBattle = new MbEvent<int>();
    private MbEvent<PartyBase> _partyVisibilityChanged = new MbEvent<PartyBase>();
    private readonly MbEvent<Track> _trackDetectedEvent = new MbEvent<Track>();
    private readonly MbEvent<Track> _trackLostEvent = new MbEvent<Track>();
    private readonly MbEvent<Dictionary<string, int>> _locationCharactersAreReadyToSpawn = new MbEvent<Dictionary<string, int>>();
    private readonly MbEvent _locationCharactersSimulatedSpawned = new MbEvent();
    private readonly MbEvent<CharacterObject, CharacterObject, int> _playerUpgradedTroopsEvent = new MbEvent<CharacterObject, CharacterObject, int>();
    private readonly MbEvent<CharacterObject, CharacterObject, PartyBase, WeaponComponentData, bool, int> _onHeroCombatHitEvent = new MbEvent<CharacterObject, CharacterObject, PartyBase, WeaponComponentData, bool, int>();
    private readonly MbEvent<CharacterObject> _characterPortraitPopUpOpenedEvent = new MbEvent<CharacterObject>();
    private CampaignTimeControlMode _timeControlModeBeforePopUpOpened;
    private readonly MbEvent _characterPortraitPopUpClosedEvent = new MbEvent();
    private readonly MbEvent<Hero> _playerStartTalkFromMenu = new MbEvent<Hero>();
    private readonly MbEvent<GameMenuOption> _gameMenuOptionSelectedEvent = new MbEvent<GameMenuOption>();
    private readonly MbEvent<CharacterObject> _playerStartRecruitmentEvent = new MbEvent<CharacterObject>();
    private readonly MbEvent<Hero, Hero> _onBeforePlayerCharacterChangedEvent = new MbEvent<Hero, Hero>();
    private readonly MbEvent<Hero, Hero, MobileParty, bool> _onPlayerCharacterChangedEvent = new MbEvent<Hero, Hero, MobileParty, bool>();
    private readonly MbEvent<Hero, Hero> _onClanLeaderChangedEvent = new MbEvent<Hero, Hero>();
    private readonly MbEvent<SiegeEvent> _onSiegeEventStartedEvent = new MbEvent<SiegeEvent>();
    private readonly MbEvent _onPlayerSiegeStartedEvent = new MbEvent();
    private readonly MbEvent<SiegeEvent> _onSiegeEventEndedEvent = new MbEvent<SiegeEvent>();
    private readonly MbEvent<MobileParty, Settlement, SiegeAftermathAction.SiegeAftermath, Clan, Dictionary<MobileParty, float>> _siegeAftermathAppliedEvent = new MbEvent<MobileParty, Settlement, SiegeAftermathAction.SiegeAftermath, Clan, Dictionary<MobileParty, float>>();
    private readonly MbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType, SiegeBombardTargets> _onSiegeBombardmentHitEvent = new MbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType, SiegeBombardTargets>();
    private readonly MbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType, bool> _onSiegeBombardmentWallHitEvent = new MbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType, bool>();
    private readonly MbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType> _onSiegeEngineDestroyedEvent = new MbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType>();
    private readonly MbEvent<List<TradeRumor>, Settlement> _onTradeRumorIsTakenEvent = new MbEvent<List<TradeRumor>, Settlement>();
    private readonly MbEvent<Hero> _onCheckForIssueEvent = new MbEvent<Hero>();
    private readonly MbEvent<IssueBase, IssueBase.IssueUpdateDetails, Hero> _onIssueUpdatedEvent = new MbEvent<IssueBase, IssueBase.IssueUpdateDetails, Hero>();
    private readonly MbEvent<MobileParty, TroopRoster> _onTroopsDesertedEvent = new MbEvent<MobileParty, TroopRoster>();
    private readonly MbEvent<Hero, Settlement, Hero, CharacterObject, int> _onTroopRecruitedEvent = new MbEvent<Hero, Settlement, Hero, CharacterObject, int>();
    private readonly MbEvent<Hero, Settlement, TroopRoster> _onTroopGivenToSettlementEvent = new MbEvent<Hero, Settlement, TroopRoster>();
    private readonly MbEvent<PartyBase, PartyBase, ItemRosterElement, int, Settlement> _onItemSoldEvent = new MbEvent<PartyBase, PartyBase, ItemRosterElement, int, Settlement>();
    private readonly MbEvent<MobileParty, Town, List<(EquipmentElement, int)>> _onCaravanTransactionCompletedEvent = new MbEvent<MobileParty, Town, List<(EquipmentElement, int)>>();
    private readonly MbEvent<PartyBase, PartyBase, TroopRoster> _onPrisonerSoldEvent = new MbEvent<PartyBase, PartyBase, TroopRoster>();
    private readonly MbEvent<MobileParty> _onPartyDisbandStartedEvent = new MbEvent<MobileParty>();
    private readonly MbEvent<MobileParty, Settlement> _onPartyDisbandedEvent = new MbEvent<MobileParty, Settlement>();
    private readonly MbEvent<MobileParty> _onPartyDisbandCanceledEvent = new MbEvent<MobileParty>();
    private readonly MbEvent<PartyBase, PartyBase> _hideoutSpottedEvent = new MbEvent<PartyBase, PartyBase>();
    private readonly MbEvent<Settlement> _hideoutDeactivatedEvent = new MbEvent<Settlement>();
    private readonly MbEvent<Hero, Hero, float> _heroSharedFoodWithAnotherHeroEvent = new MbEvent<Hero, Hero, float>();
    private readonly MbEvent<List<(ItemRosterElement, int)>, List<(ItemRosterElement, int)>, bool> _playerInventoryExchangeEvent = new MbEvent<List<(ItemRosterElement, int)>, List<(ItemRosterElement, int)>, bool>();
    private readonly MbEvent<ItemRoster> _onItemsDiscardedByPlayerEvent = new MbEvent<ItemRoster>();
    private readonly MbEvent<Tuple<PersuasionOptionArgs, PersuasionOptionResult>> _persuasionProgressCommittedEvent = new MbEvent<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>();
    private readonly MbEvent<QuestBase, QuestBase.QuestCompleteDetails> _onQuestCompletedEvent = new MbEvent<QuestBase, QuestBase.QuestCompleteDetails>();
    private readonly MbEvent<QuestBase> _onQuestStartedEvent = new MbEvent<QuestBase>();
    private readonly MbEvent<ItemObject, Settlement, int> _itemProducedEvent = new MbEvent<ItemObject, Settlement, int>();
    private readonly MbEvent<ItemObject, Settlement, int> _itemConsumedEvent = new MbEvent<ItemObject, Settlement, int>();
    private readonly MbEvent<MobileParty> _onPartyConsumedFoodEvent = new MbEvent<MobileParty>();
    private readonly MbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool> _onBeforeMainCharacterDiedEvent = new MbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>();
    private readonly MbEvent<IssueBase> _onNewIssueCreatedEvent = new MbEvent<IssueBase>();
    private readonly MbEvent<IssueBase, Hero> _onIssueOwnerChangedEvent = new MbEvent<IssueBase, Hero>();
    private readonly MbEvent _onGameOverEvent = new MbEvent();
    private readonly MbEvent<Settlement, MobileParty, bool, MapEvent.BattleTypes> _siegeCompletedEvent = new MbEvent<Settlement, MobileParty, bool, MapEvent.BattleTypes>();
    private readonly MbEvent<SiegeEvent, BattleSideEnum, SiegeEngineType> _siegeEngineBuiltEvent = new MbEvent<SiegeEvent, BattleSideEnum, SiegeEngineType>();
    private readonly MbEvent<BattleSideEnum, RaidEventComponent> _raidCompletedEvent = new MbEvent<BattleSideEnum, RaidEventComponent>();
    private readonly MbEvent<BattleSideEnum, ForceVolunteersEventComponent> _forceVolunteersCompletedEvent = new MbEvent<BattleSideEnum, ForceVolunteersEventComponent>();
    private readonly MbEvent<BattleSideEnum, ForceSuppliesEventComponent> _forceSuppliesCompletedEvent = new MbEvent<BattleSideEnum, ForceSuppliesEventComponent>();
    private readonly MbEvent<BattleSideEnum, HideoutEventComponent> _hideoutBattleCompletedEvent = new MbEvent<BattleSideEnum, HideoutEventComponent>();
    private readonly MbEvent<Clan> _onClanDestroyedEvent = new MbEvent<Clan>();
    private readonly MbEvent<ItemObject, ItemModifier, bool> _onNewItemCraftedEvent = new MbEvent<ItemObject, ItemModifier, bool>();
    private readonly MbEvent<CraftingPiece> _craftingPartUnlockedEvent = new MbEvent<CraftingPiece>();
    private readonly MbEvent<Workshop> _onWorkshopInitializedEvent = new MbEvent<Workshop>();
    private readonly MbEvent<Workshop, Hero> _onWorkshopOwnerChangedEvent = new MbEvent<Workshop, Hero>();
    private readonly MbEvent<Workshop> _onWorkshopTypeChangedEvent = new MbEvent<Workshop>();
    private readonly MbEvent _onBeforeSaveEvent = new MbEvent();
    private readonly MbEvent _onSaveStartedEvent = new MbEvent();
    private readonly MbEvent<bool, string> _onSaveOverEvent = new MbEvent<bool, string>();
    private readonly MbEvent<FlattenedTroopRoster> _onPrisonerTakenEvent = new MbEvent<FlattenedTroopRoster>();
    private readonly MbEvent<FlattenedTroopRoster> _onPrisonerReleasedEvent = new MbEvent<FlattenedTroopRoster>();
    private readonly MbEvent<FlattenedTroopRoster> _onMainPartyPrisonerRecruitedEvent = new MbEvent<FlattenedTroopRoster>();
    private readonly MbEvent<MobileParty, FlattenedTroopRoster, Settlement> _onPrisonerDonatedToSettlementEvent = new MbEvent<MobileParty, FlattenedTroopRoster, Settlement>();
    private readonly MbEvent<Hero, EquipmentElement> _onEquipmentSmeltedByHero = new MbEvent<Hero, EquipmentElement>();
    private readonly MbEvent<int> _onPlayerTradeProfit = new MbEvent<int>();
    private readonly MbEvent<Hero, Clan> _onHeroChangedClan = new MbEvent<Hero, Clan>();
    private readonly MbEvent<Hero, HeroGetsBusyReasons> _onHeroGetsBusy = new MbEvent<Hero, HeroGetsBusyReasons>();
    private readonly MbEvent<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>, ItemRoster, MBList<TroopRosterElement>, float> _collectLootsEvent = new MbEvent<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>, ItemRoster, MBList<TroopRosterElement>, float>();
    private readonly MbEvent<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>> _distributeLootToPartyEvent = new MbEvent<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>>();
    private readonly MbEvent<Hero, Settlement, MobileParty, TeleportHeroAction.TeleportationDetail> _onHeroTeleportationRequestedEvent = new MbEvent<Hero, Settlement, MobileParty, TeleportHeroAction.TeleportationDetail>();
    private readonly MbEvent<MobileParty> _onPartyLeaderChangeOfferCanceledEvent = new MbEvent<MobileParty>();
    private readonly MbEvent<Clan, float> _onClanInfluenceChangedEvent = new MbEvent<Clan, float>();
    private readonly MbEvent<CharacterObject> _onPlayerPartyKnockedOrKilledTroopEvent = new MbEvent<CharacterObject>();
    private readonly MbEvent<DefaultClanFinanceModel.AssetIncomeType, int> _onPlayerEarnedGoldFromAssetEvent = new MbEvent<DefaultClanFinanceModel.AssetIncomeType, int>();
    private readonly MbEvent _onMainPartyStarving = new MbEvent();
    private readonly MbEvent<Town, bool> _onPlayerJoinedTournamentEvent = new MbEvent<Town, bool>();
    private readonly MbEvent<Hero> _onHeroUnregisteredEvent = new MbEvent<Hero>();
    private readonly MbEvent _onConfigChanged = new MbEvent();
    private readonly MbEvent<Town, CraftingOrder, ItemObject, Hero> _onCraftingOrderCompleted = new MbEvent<Town, CraftingOrder, ItemObject, Hero>();
    private readonly MbEvent<Hero, TaleWorlds.Core.Crafting.RefiningFormula> _onItemsRefined = new MbEvent<Hero, TaleWorlds.Core.Crafting.RefiningFormula>();
    private readonly ReferenceMBEvent<Hero, bool> _canHeroLeadPartyEvent = new ReferenceMBEvent<Hero, bool>();
    private readonly ReferenceMBEvent<Hero, bool> _canMarryEvent = new ReferenceMBEvent<Hero, bool>();
    private readonly ReferenceMBEvent<Hero, bool> _canHeroEquipmentBeChangedEvent = new ReferenceMBEvent<Hero, bool>();
    private readonly ReferenceMBEvent<Hero, bool> _canBeGovernorOrHavePartyRoleEvent = new ReferenceMBEvent<Hero, bool>();
    private readonly ReferenceMBEvent<Hero, KillCharacterAction.KillCharacterActionDetail, bool> _canHeroDieEvent = new ReferenceMBEvent<Hero, KillCharacterAction.KillCharacterActionDetail, bool>();
    private readonly ReferenceMBEvent<Hero, bool> _canHeroBecomePrisonerEvent = new ReferenceMBEvent<Hero, bool>();
    private readonly ReferenceMBEvent<Hero, bool> _canMoveToSettlementEvent = new ReferenceMBEvent<Hero, bool>();
    private readonly ReferenceMBEvent<Hero, bool> _canHaveQuestsOrIssues = new ReferenceMBEvent<Hero, bool>();
    private readonly MbEvent<IFaction> _onMapEventContinuityNeedsUpdate = new MbEvent<IFaction>();

    private static CampaignEvents Instance => Campaign.Current.CampaignEvents;

    public override void RemoveListeners(object obj)
    {
      this._heroLevelledUp.ClearListeners(obj);
      this._heroGainedSkill.ClearListeners(obj);
      this._heroRelationChanged.ClearListeners(obj);
      this._questLogAddedEvent.ClearListeners(obj);
      this._issueLogAddedEvent.ClearListeners(obj);
      this._onCharacterCreationIsOverEvent.ClearListeners(obj);
      this._clanChangedKingdom.ClearListeners(obj);
      this._onCompanionClanCreatedEvent.ClearListeners(obj);
      this._onHeroJoinedPartyEvent.ClearListeners(obj);
      this._partyAttachedParty.ClearListeners(obj);
      this._nearbyPartyAddedToPlayerMapEvent.ClearListeners(obj);
      this._armyCreated.ClearListeners(obj);
      this._armyGathered.ClearListeners(obj);
      this._armyDispersed.ClearListeners(obj);
      this._villageStateChanged.ClearListeners(obj);
      this._settlementEntered.ClearListeners(obj);
      this._afterSettlementEntered.ClearListeners(obj);
      this._mercenaryTroopChangedInTown.ClearListeners(obj);
      this._mercenaryNumberChangedInTown.ClearListeners(obj);
      this._alleyOwnerChanged.ClearListeners(obj);
      this._alleyOccupiedByPlayer.ClearListeners(obj);
      this._alleyClearedByPlayer.ClearListeners(obj);
      this._romanticStateChanged.ClearListeners(obj);
      this._warDeclared.ClearListeners(obj);
      this._battleStarted.ClearListeners(obj);
      this._rebellionFinished.ClearListeners(obj);
      this._townRebelliousStateChanged.ClearListeners(obj);
      this._rebelliousClanDisbandedAtSettlement.ClearListeners(obj);
      this._mobilePartyDestroyed.ClearListeners(obj);
      this._mobilePartyCreated.ClearListeners(obj);
      this._mobilePartyQuestStatusChanged.ClearListeners(obj);
      this._heroKilled.ClearListeners(obj);
      this._characterDefeated.ClearListeners(obj);
      this._heroPrisonerTaken.ClearListeners(obj);
      this._onPartySizeChangedEvent.ClearListeners(obj);
      this._characterBecameFugitive.ClearListeners(obj);
      this._playerMetHero.ClearListeners(obj);
      this._playerLearnsAboutHero.ClearListeners(obj);
      this._renownGained.ClearListeners(obj);
      this._barterablesRequested.ClearListeners(obj);
      this._crimeRatingChanged.ClearListeners(obj);
      this._newCompanionAdded.ClearListeners(obj);
      this._afterMissionStarted.ClearListeners(obj);
      this._gameMenuOpened.ClearListeners(obj);
      this._makePeace.ClearListeners(obj);
      this._kingdomCreated.ClearListeners(obj);
      this._kingdomDestroyed.ClearListeners(obj);
      this._canKingdomBeDiscontinued.ClearListeners(obj);
      this._villageBeingRaided.ClearListeners(obj);
      this._villageLooted.ClearListeners(obj);
      this._mapEventEnded.ClearListeners(obj);
      this._mapEventStarted.ClearListeners(obj);
      this._prisonersChangeInSettlement.ClearListeners(obj);
      this._onMissionStartedEvent.ClearListeners(obj);
      this._beforeMissionOpenedEvent.ClearListeners(obj);
      this._onPartyRemovedEvent.ClearListeners(obj);
      this._banditPartyRecruited.ClearListeners(obj);
      this._onSettlementOwnerChangedEvent.ClearListeners(obj);
      this._onGovernorChangedEvent.ClearListeners(obj);
      this._onSettlementLeftEvent.ClearListeners(obj);
      this._weeklyTickEvent.ClearListeners(obj);
      this._dailyTickEvent.ClearListeners(obj);
      this._dailyTickPartyEvent.ClearListeners(obj);
      this._hourlyTickEvent.ClearListeners(obj);
      this._tickEvent.ClearListeners(obj);
      this._onSessionLaunchedEvent.ClearListeners(obj);
      this._onAfterSessionLaunchedEvent.ClearListeners(obj);
      this._onNewGameCreatedPartialFollowUpEvent.ClearListeners(obj);
      this._onNewGameCreatedPartialFollowUpEndEvent.ClearListeners(obj);
      this._onNewGameCreatedEvent.ClearListeners(obj);
      this._onGameLoadedEvent.ClearListeners(obj);
      this._onBarterAcceptedEvent.ClearListeners(obj);
      this._onBarterCanceledEvent.ClearListeners(obj);
      this._onGameEarlyLoadedEvent.ClearListeners(obj);
      this._onGameLoadFinishedEvent.ClearListeners(obj);
      this._aiHourlyTickEvent.ClearListeners(obj);
      this._tickPartialHourlyAiEvent.ClearListeners(obj);
      this._onPartyJoinedArmyEvent.ClearListeners(obj);
      this._onPartyRemovedFromArmyEvent.ClearListeners(obj);
      this._onMissionEndedEvent.ClearListeners(obj);
      this._onPlayerBattleEndEvent.ClearListeners(obj);
      this._onPlayerBoardGameOver.ClearListeners(obj);
      this._onRansomOfferedToPlayer.ClearListeners(obj);
      this._onRansomOfferCancelled.ClearListeners(obj);
      this._onPeaceOfferedToPlayer.ClearListeners(obj);
      this._onPeaceOfferCancelled.ClearListeners(obj);
      this._onMarriageOfferedToPlayerEvent.ClearListeners(obj);
      this._onMarriageOfferCanceledEvent.ClearListeners(obj);
      this._onVassalOrMercenaryServiceOfferedToPlayerEvent.ClearListeners(obj);
      this._onVassalOrMercenaryServiceOfferCanceledEvent.ClearListeners(obj);
      this._afterGameMenuOpenedEvent.ClearListeners(obj);
      this._beforeGameMenuOpenedEvent.ClearListeners(obj);
      this._onChildConceived.ClearListeners(obj);
      this._onGivenBirthEvent.ClearListeners(obj);
      this._missionTickEvent.ClearListeners(obj);
      this._armyOverlaySetDirty.ClearListeners(obj);
      this._onArmyLeaderThinkEvent.ClearListeners(obj);
      this._partyVisibilityChanged.ClearListeners(obj);
      this._onHeroCreated.ClearListeners(obj);
      this._heroOccupationChangedEvent.ClearListeners(obj);
      this._onHeroWounded.ClearListeners(obj);
      this._playerDesertedBattle.ClearListeners(obj);
      this._companionRemoved.ClearListeners(obj);
      this._setupPreConversationEvent.ClearListeners(obj);
      this._trackLostEvent.ClearListeners(obj);
      this._trackDetectedEvent.ClearListeners(obj);
      this._locationCharactersAreReadyToSpawn.ClearListeners(obj);
      this._locationCharactersSimulatedSpawned.ClearListeners(obj);
      this._playerUpgradedTroopsEvent.ClearListeners(obj);
      this._onHeroCombatHitEvent.ClearListeners(obj);
      this._characterPortraitPopUpOpenedEvent.ClearListeners(obj);
      this._characterPortraitPopUpClosedEvent.ClearListeners(obj);
      this._playerStartTalkFromMenu.ClearListeners(obj);
      this._gameMenuOptionSelectedEvent.ClearListeners(obj);
      this._playerStartRecruitmentEvent.ClearListeners(obj);
      this._onAgentJoinedConversationEvent.ClearListeners(obj);
      this._onConversationEnded.ClearListeners(obj);
      this._heroesMarried.ClearListeners(obj);
      this._onTroopsDesertedEvent.ClearListeners(obj);
      this._onBeforePlayerCharacterChangedEvent.ClearListeners(obj);
      this._onPlayerCharacterChangedEvent.ClearListeners(obj);
      this._onClanLeaderChangedEvent.ClearListeners(obj);
      this._onSiegeEventStartedEvent.ClearListeners(obj);
      this._onPlayerSiegeStartedEvent.ClearListeners(obj);
      this._onSiegeEventEndedEvent.ClearListeners(obj);
      this._siegeAftermathAppliedEvent.ClearListeners(obj);
      this._onSiegeBombardmentHitEvent.ClearListeners(obj);
      this._onSiegeBombardmentWallHitEvent.ClearListeners(obj);
      this._onSiegeEngineDestroyedEvent.ClearListeners(obj);
      this._kingdomDecisionAdded.ClearListeners(obj);
      this._kingdomDecisionCancelled.ClearListeners(obj);
      this._kingdomDecisionConcluded.ClearListeners(obj);
      this._childEducationCompleted.ClearListeners(obj);
      this._heroComesOfAge.ClearListeners(obj);
      this._heroGrowsOutOfInfancyEvent.ClearListeners(obj);
      this._heroReachesTeenAgeEvent.ClearListeners(obj);
      this._onCheckForIssueEvent.ClearListeners(obj);
      this._onIssueUpdatedEvent.ClearListeners(obj);
      this._onTroopRecruitedEvent.ClearListeners(obj);
      this._onTroopGivenToSettlementEvent.ClearListeners(obj);
      this._onItemSoldEvent.ClearListeners(obj);
      this._onCaravanTransactionCompletedEvent.ClearListeners(obj);
      this._onPrisonerSoldEvent.ClearListeners(obj);
      this._heroPrisonerReleased.ClearListeners(obj);
      this._heroOrPartyTradedGold.ClearListeners(obj);
      this._heroOrPartyGaveItem.ClearListeners(obj);
      this._perkOpenedEvent.ClearListeners(obj);
      this._playerTraitChangedEvent.ClearListeners(obj);
      this._onPartyDisbandedEvent.ClearListeners(obj);
      this._onPartyDisbandStartedEvent.ClearListeners(obj);
      this._onPartyDisbandCanceledEvent.ClearListeners(obj);
      this._itemsLooted.ClearListeners(obj);
      this._hideoutSpottedEvent.ClearListeners(obj);
      this._hideoutBattleCompletedEvent.ClearListeners(obj);
      this._hideoutDeactivatedEvent.ClearListeners(obj);
      this._heroSharedFoodWithAnotherHeroEvent.ClearListeners(obj);
      this._onQuestCompletedEvent.ClearListeners(obj);
      this._itemProducedEvent.ClearListeners(obj);
      this._itemConsumedEvent.ClearListeners(obj);
      this._onQuestStartedEvent.ClearListeners(obj);
      this._onPartyConsumedFoodEvent.ClearListeners(obj);
      this._siegeCompletedEvent.ClearListeners(obj);
      this._raidCompletedEvent.ClearListeners(obj);
      this._forceVolunteersCompletedEvent.ClearListeners(obj);
      this._forceSuppliesCompletedEvent.ClearListeners(obj);
      this._onBeforeMainCharacterDiedEvent.ClearListeners(obj);
      this._onGameOverEvent.ClearListeners(obj);
      this._onClanDestroyedEvent.ClearListeners(obj);
      this._onNewIssueCreatedEvent.ClearListeners(obj);
      this._onIssueOwnerChangedEvent.ClearListeners(obj);
      this._onTutorialCompletedEvent.ClearListeners(obj);
      this._collectAvailableTutorialsEvent.ClearListeners(obj);
      this._playerEliminatedFromTournament.ClearListeners(obj);
      this._playerStartedTournamentMatch.ClearListeners(obj);
      this._tournamentStarted.ClearListeners(obj);
      this._tournamentFinished.ClearListeners(obj);
      this._tournamentCancelled.ClearListeners(obj);
      this._playerInventoryExchangeEvent.ClearListeners(obj);
      this._onItemsDiscardedByPlayerEvent.ClearListeners(obj);
      this._onNewItemCraftedEvent.ClearListeners(obj);
      this._craftingPartUnlockedEvent.ClearListeners(obj);
      this._onWorkshopInitializedEvent.ClearListeners(obj);
      this._onWorkshopOwnerChangedEvent.ClearListeners(obj);
      this._onWorkshopTypeChangedEvent.ClearListeners(obj);
      this._persuasionProgressCommittedEvent.ClearListeners(obj);
      this._onBeforeSaveEvent.ClearListeners(obj);
      this._onPrisonerTakenEvent.ClearListeners(obj);
      this._onPrisonerReleasedEvent.ClearListeners(obj);
      this._onMainPartyPrisonerRecruitedEvent.ClearListeners(obj);
      this._onPrisonerDonatedToSettlementEvent.ClearListeners(obj);
      this._onEquipmentSmeltedByHero.ClearListeners(obj);
      this._onPlayerTradeProfit.ClearListeners(obj);
      this._onBeforeHeroKilled.ClearListeners(obj);
      this._onBuildingLevelChangedEvent.ClearListeners(obj);
      this._hourlyTickSettlementEvent.ClearListeners(obj);
      this._hourlyTickClanEvent.ClearListeners(obj);
      this._onUnitRecruitedEvent.ClearListeners(obj);
      this._trackDetectedEvent.ClearListeners(obj);
      this._trackLostEvent.ClearListeners(obj);
      this._onTradeRumorIsTakenEvent.ClearListeners(obj);
      this._siegeEngineBuiltEvent.ClearListeners(obj);
      this._dailyTickHeroEvent.ClearListeners(obj);
      this._dailyTickSettlementEvent.ClearListeners(obj);
      this._hourlyTickPartyEvent.ClearListeners(obj);
      this._dailyTickClanEvent.ClearListeners(obj);
      this._villageBecomeNormal.ClearListeners(obj);
      this._clanTierIncrease.ClearListeners(obj);
      this._dailyTickTownEvent.ClearListeners(obj);
      this._onHeroChangedClan.ClearListeners(obj);
      this._onHeroGetsBusy.ClearListeners(obj);
      this._onSaveStartedEvent.ClearListeners(obj);
      this._onSaveOverEvent.ClearListeners(obj);
      this._onPlayerBodyPropertiesChangedEvent.ClearListeners(obj);
      this._rulingClanChanged.ClearListeners(obj);
      this._collectLootsEvent.ClearListeners(obj);
      this._distributeLootToPartyEvent.ClearListeners(obj);
      this._onHeroTeleportationRequestedEvent.ClearListeners(obj);
      this._onPartyLeaderChangeOfferCanceledEvent.ClearListeners(obj);
      this._canBeGovernorOrHavePartyRoleEvent.ClearListeners(obj);
      this._canHeroLeadPartyEvent.ClearListeners(obj);
      this._canMarryEvent.ClearListeners(obj);
      this._canHeroDieEvent.ClearListeners(obj);
      this._canHeroBecomePrisonerEvent.ClearListeners(obj);
      this._canHeroEquipmentBeChangedEvent.ClearListeners(obj);
      this._canHaveQuestsOrIssues.ClearListeners(obj);
      this._canMoveToSettlementEvent.ClearListeners(obj);
      this._onQuarterDailyPartyTick.ClearListeners(obj);
      this._onMainPartyStarving.ClearListeners(obj);
      this._onClanInfluenceChangedEvent.ClearListeners(obj);
      this._onPlayerPartyKnockedOrKilledTroopEvent.ClearListeners(obj);
      this._onPlayerEarnedGoldFromAssetEvent.ClearListeners(obj);
      this._onPlayerJoinedTournamentEvent.ClearListeners(obj);
      this._onHeroUnregisteredEvent.ClearListeners(obj);
      this._onConfigChanged.ClearListeners(obj);
      this._onCraftingOrderCompleted.ClearListeners(obj);
      this._onItemsRefined.ClearListeners(obj);
      this._onMapEventContinuityNeedsUpdate.ClearListeners(obj);
    }

    public static IMbEvent OnPlayerBodyPropertiesChangedEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._onPlayerBodyPropertiesChangedEvent;
    }

    public override void OnPlayerBodyPropertiesChanged()
    {
      CampaignEvents.Instance._onPlayerBodyPropertiesChangedEvent.Invoke();
    }

    public static IMbEvent<BarterData> BarterablesRequested
    {
      get => (IMbEvent<BarterData>) CampaignEvents.Instance._barterablesRequested;
    }

    public override void OnBarterablesRequested(BarterData args)
    {
      CampaignEvents.Instance._barterablesRequested.Invoke(args);
    }

    public static IMbEvent<Hero, bool> HeroLevelledUp
    {
      get => (IMbEvent<Hero, bool>) CampaignEvents.Instance._heroLevelledUp;
    }

    public override void OnHeroLevelledUp(Hero hero, bool shouldNotify = true)
    {
      this._heroLevelledUp.Invoke(hero, shouldNotify);
    }

    public static IMbEvent<Hero, SkillObject, int, bool> HeroGainedSkill
    {
      get => (IMbEvent<Hero, SkillObject, int, bool>) CampaignEvents.Instance._heroGainedSkill;
    }

    public override void OnHeroGainedSkill(
      Hero hero,
      SkillObject skill,
      int change = 1,
      bool shouldNotify = true)
    {
      this._heroGainedSkill.Invoke(hero, skill, change, shouldNotify);
    }

    public static IMbEvent OnCharacterCreationIsOverEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._onCharacterCreationIsOverEvent;
    }

    public override void OnCharacterCreationIsOver()
    {
      CampaignEvents.Instance._onCharacterCreationIsOverEvent.Invoke();
    }

    public static IMbEvent<Hero, bool> HeroCreated
    {
      get => (IMbEvent<Hero, bool>) CampaignEvents.Instance._onHeroCreated;
    }

    public override void OnHeroCreated(Hero hero, bool isBornNaturally = false)
    {
      this._onHeroCreated.Invoke(hero, isBornNaturally);
    }

    public static IMbEvent<Hero, Occupation> HeroOccupationChangedEvent
    {
      get => (IMbEvent<Hero, Occupation>) CampaignEvents.Instance._heroOccupationChangedEvent;
    }

    public override void OnHeroOccupationChanged(Hero hero, Occupation oldOccupation)
    {
      this._heroOccupationChangedEvent.Invoke(hero, oldOccupation);
    }

    public static IMbEvent<Hero> HeroWounded
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._onHeroWounded;
    }

    public override void OnHeroWounded(Hero woundedHero) => this._onHeroWounded.Invoke(woundedHero);

    public static IMbEvent<Hero, Hero, List<Barterable>> OnBarterAcceptedEvent
    {
      get
      {
        return (IMbEvent<Hero, Hero, List<Barterable>>) CampaignEvents.Instance._onBarterAcceptedEvent;
      }
    }

    public override void OnBarterAccepted(
      Hero offererHero,
      Hero otherHero,
      List<Barterable> barters)
    {
      CampaignEvents.Instance._onBarterAcceptedEvent.Invoke(offererHero, otherHero, barters);
    }

    public static IMbEvent<Hero, Hero, List<Barterable>> OnBarterCanceledEvent
    {
      get
      {
        return (IMbEvent<Hero, Hero, List<Barterable>>) CampaignEvents.Instance._onBarterCanceledEvent;
      }
    }

    public override void OnBarterCanceled(
      Hero offererHero,
      Hero otherHero,
      List<Barterable> barters)
    {
      CampaignEvents.Instance._onBarterCanceledEvent.Invoke(offererHero, otherHero, barters);
    }

    public static IMbEvent<Hero, Hero, int, bool, ChangeRelationAction.ChangeRelationDetail, Hero, Hero> HeroRelationChanged
    {
      get
      {
        return (IMbEvent<Hero, Hero, int, bool, ChangeRelationAction.ChangeRelationDetail, Hero, Hero>) CampaignEvents.Instance._heroRelationChanged;
      }
    }

    public override void OnHeroRelationChanged(
      Hero effectiveHero,
      Hero effectiveHeroGainedRelationWith,
      int relationChange,
      bool showNotification,
      ChangeRelationAction.ChangeRelationDetail detail,
      Hero originalHero,
      Hero originalGainedRelationWith)
    {
      CampaignEvents.Instance._heroRelationChanged.Invoke(effectiveHero, effectiveHeroGainedRelationWith, relationChange, showNotification, detail, originalHero, originalGainedRelationWith);
    }

    public static IMbEvent<QuestBase, bool> QuestLogAddedEvent
    {
      get => (IMbEvent<QuestBase, bool>) CampaignEvents.Instance._questLogAddedEvent;
    }

    public override void OnQuestLogAdded(QuestBase quest, bool hideInformation)
    {
      CampaignEvents.Instance._questLogAddedEvent.Invoke(quest, hideInformation);
    }

    public static IMbEvent<IssueBase, bool> IssueLogAddedEvent
    {
      get => (IMbEvent<IssueBase, bool>) CampaignEvents.Instance._issueLogAddedEvent;
    }

    public override void OnIssueLogAdded(IssueBase issue, bool hideInformation)
    {
      CampaignEvents.Instance._issueLogAddedEvent.Invoke(issue, hideInformation);
    }

    public static IMbEvent<Clan, bool> ClanTierIncrease
    {
      get => (IMbEvent<Clan, bool>) CampaignEvents.Instance._clanTierIncrease;
    }

    public override void OnClanTierChanged(Clan clan, bool shouldNotify = true)
    {
      CampaignEvents.Instance._clanTierIncrease.Invoke(clan, shouldNotify);
    }

    public static IMbEvent<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool> OnClanChangedKingdomEvent
    {
      get
      {
        return (IMbEvent<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>) CampaignEvents.Instance._clanChangedKingdom;
      }
    }

    public override void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      CampaignEvents.Instance._clanChangedKingdom.Invoke(clan, oldKingdom, newKingdom, detail, showNotification);
    }

    public static IMbEvent<Clan> OnCompanionClanCreatedEvent
    {
      get => (IMbEvent<Clan>) CampaignEvents.Instance._onCompanionClanCreatedEvent;
    }

    public override void OnCompanionClanCreated(Clan clan)
    {
      CampaignEvents.Instance._onCompanionClanCreatedEvent.Invoke(clan);
    }

    public static IMbEvent<Hero, MobileParty> OnHeroJoinedPartyEvent
    {
      get => (IMbEvent<Hero, MobileParty>) CampaignEvents.Instance._onHeroJoinedPartyEvent;
    }

    public override void OnHeroJoinedParty(Hero hero, MobileParty mobileParty)
    {
      CampaignEvents.Instance._onHeroJoinedPartyEvent.Invoke(hero, mobileParty);
    }

    public static IMbEvent<(Hero, PartyBase), (Hero, PartyBase), (int, string), bool> HeroOrPartyTradedGold
    {
      get
      {
        return (IMbEvent<(Hero, PartyBase), (Hero, PartyBase), (int, string), bool>) CampaignEvents.Instance._heroOrPartyTradedGold;
      }
    }

    public override void OnHeroOrPartyTradedGold(
      (Hero, PartyBase) giver,
      (Hero, PartyBase) recipient,
      (int, string) goldAmount,
      bool showNotification)
    {
      CampaignEvents.Instance._heroOrPartyTradedGold.Invoke(giver, recipient, goldAmount, showNotification);
    }

    public static IMbEvent<(Hero, PartyBase), (Hero, PartyBase), ItemRosterElement, bool> HeroOrPartyGaveItem
    {
      get
      {
        return (IMbEvent<(Hero, PartyBase), (Hero, PartyBase), ItemRosterElement, bool>) CampaignEvents.Instance._heroOrPartyGaveItem;
      }
    }

    public override void OnHeroOrPartyGaveItem(
      (Hero, PartyBase) giver,
      (Hero, PartyBase) receiver,
      ItemRosterElement itemRosterElement,
      bool showNotification)
    {
      CampaignEvents.Instance._heroOrPartyGaveItem.Invoke(giver, receiver, itemRosterElement, showNotification);
    }

    public static IMbEvent<MobileParty> BanditPartyRecruited
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._banditPartyRecruited;
    }

    public override void OnBanditPartyRecruited(MobileParty banditParty)
    {
      CampaignEvents.Instance._banditPartyRecruited.Invoke(banditParty);
    }

    public static IMbEvent<KingdomDecision, bool> KingdomDecisionAdded
    {
      get => (IMbEvent<KingdomDecision, bool>) CampaignEvents.Instance._kingdomDecisionAdded;
    }

    public override void OnKingdomDecisionAdded(KingdomDecision decision, bool isPlayerInvolved)
    {
      CampaignEvents.Instance._kingdomDecisionAdded.Invoke(decision, isPlayerInvolved);
    }

    public static IMbEvent<KingdomDecision, bool> KingdomDecisionCancelled
    {
      get => (IMbEvent<KingdomDecision, bool>) CampaignEvents.Instance._kingdomDecisionCancelled;
    }

    public override void OnKingdomDecisionCancelled(KingdomDecision decision, bool isPlayerInvolved)
    {
      CampaignEvents.Instance._kingdomDecisionCancelled.Invoke(decision, isPlayerInvolved);
    }

    public static IMbEvent<KingdomDecision, DecisionOutcome, bool> KingdomDecisionConcluded
    {
      get
      {
        return (IMbEvent<KingdomDecision, DecisionOutcome, bool>) CampaignEvents.Instance._kingdomDecisionConcluded;
      }
    }

    public override void OnKingdomDecisionConcluded(
      KingdomDecision decision,
      DecisionOutcome chosenOutcome,
      bool isPlayerInvolved)
    {
      CampaignEvents.Instance._kingdomDecisionConcluded.Invoke(decision, chosenOutcome, isPlayerInvolved);
    }

    public static IMbEvent<MobileParty> PartyAttachedAnotherParty
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._partyAttachedParty;
    }

    public override void OnPartyAttachedAnotherParty(MobileParty mobileParty)
    {
      CampaignEvents.Instance._partyAttachedParty.Invoke(mobileParty);
    }

    public static IMbEvent<MobileParty> NearbyPartyAddedToPlayerMapEvent
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._nearbyPartyAddedToPlayerMapEvent;
    }

    public override void OnNearbyPartyAddedToPlayerMapEvent(MobileParty mobileParty)
    {
      CampaignEvents.Instance._nearbyPartyAddedToPlayerMapEvent.Invoke(mobileParty);
    }

    public static IMbEvent<Army> ArmyCreated
    {
      get => (IMbEvent<Army>) CampaignEvents.Instance._armyCreated;
    }

    public override void OnArmyCreated(Army army)
    {
      CampaignEvents.Instance._armyCreated.Invoke(army);
    }

    public static IMbEvent<Army, Army.ArmyDispersionReason, bool> ArmyDispersed
    {
      get
      {
        return (IMbEvent<Army, Army.ArmyDispersionReason, bool>) CampaignEvents.Instance._armyDispersed;
      }
    }

    public override void OnArmyDispersed(
      Army army,
      Army.ArmyDispersionReason reason,
      bool isPlayersArmy)
    {
      CampaignEvents.Instance._armyDispersed.Invoke(army, reason, isPlayersArmy);
    }

    public static IMbEvent<Army, Settlement> ArmyGathered
    {
      get => (IMbEvent<Army, Settlement>) CampaignEvents.Instance._armyGathered;
    }

    public override void OnArmyGathered(Army army, Settlement gatheringSettlement)
    {
      CampaignEvents.Instance._armyGathered.Invoke(army, gatheringSettlement);
    }

    public static IMbEvent<Hero, PerkObject> PerkOpenedEvent
    {
      get => (IMbEvent<Hero, PerkObject>) CampaignEvents.Instance._perkOpenedEvent;
    }

    public override void OnPerkOpened(Hero hero, PerkObject perk)
    {
      CampaignEvents.Instance._perkOpenedEvent.Invoke(hero, perk);
    }

    public static IMbEvent<TraitObject, int> PlayerTraitChangedEvent
    {
      get => (IMbEvent<TraitObject, int>) CampaignEvents.Instance._playerTraitChangedEvent;
    }

    public override void OnPlayerTraitChanged(TraitObject trait, int previousLevel)
    {
      CampaignEvents.Instance._playerTraitChangedEvent.Invoke(trait, previousLevel);
    }

    public static IMbEvent<Village, Village.VillageStates, Village.VillageStates, MobileParty> VillageStateChanged
    {
      get
      {
        return (IMbEvent<Village, Village.VillageStates, Village.VillageStates, MobileParty>) CampaignEvents.Instance._villageStateChanged;
      }
    }

    public override void OnVillageStateChanged(
      Village village,
      Village.VillageStates oldState,
      Village.VillageStates newState,
      MobileParty raiderParty)
    {
      CampaignEvents.Instance._villageStateChanged.Invoke(village, oldState, newState, raiderParty);
    }

    public static IMbEvent<MobileParty, Settlement, Hero> SettlementEntered
    {
      get => (IMbEvent<MobileParty, Settlement, Hero>) CampaignEvents.Instance._settlementEntered;
    }

    public override void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
    {
      CampaignEvents.Instance._settlementEntered.Invoke(party, settlement, hero);
    }

    public static IMbEvent<MobileParty, Settlement, Hero> AfterSettlementEntered
    {
      get
      {
        return (IMbEvent<MobileParty, Settlement, Hero>) CampaignEvents.Instance._afterSettlementEntered;
      }
    }

    public override void OnAfterSettlementEntered(
      MobileParty party,
      Settlement settlement,
      Hero hero)
    {
      CampaignEvents.Instance._afterSettlementEntered.Invoke(party, settlement, hero);
    }

    public static IMbEvent<Town, CharacterObject, CharacterObject> MercenaryTroopChangedInTown
    {
      get
      {
        return (IMbEvent<Town, CharacterObject, CharacterObject>) CampaignEvents.Instance._mercenaryTroopChangedInTown;
      }
    }

    public override void OnMercenaryTroopChangedInTown(
      Town town,
      CharacterObject oldTroopType,
      CharacterObject newTroopType)
    {
      CampaignEvents.Instance._mercenaryTroopChangedInTown.Invoke(town, oldTroopType, newTroopType);
    }

    public static IMbEvent<Town, int, int> MercenaryNumberChangedInTown
    {
      get => (IMbEvent<Town, int, int>) CampaignEvents.Instance._mercenaryNumberChangedInTown;
    }

    public override void OnMercenaryNumberChangedInTown(Town town, int oldNumber, int newNumber)
    {
      CampaignEvents.Instance._mercenaryNumberChangedInTown.Invoke(town, oldNumber, newNumber);
    }

    public static IMbEvent<Alley, Hero, Hero> AlleyOwnerChanged
    {
      get => (IMbEvent<Alley, Hero, Hero>) CampaignEvents.Instance._alleyOwnerChanged;
    }

    public static IMbEvent<Alley, TroopRoster> AlleyOccupiedByPlayer
    {
      get => (IMbEvent<Alley, TroopRoster>) CampaignEvents.Instance._alleyOccupiedByPlayer;
    }

    public override void OnAlleyOccupiedByPlayer(Alley alley, TroopRoster troops)
    {
      CampaignEvents.Instance._alleyOccupiedByPlayer.Invoke(alley, troops);
    }

    public override void OnAlleyOwnerChanged(Alley alley, Hero newOwner, Hero oldOwner)
    {
      CampaignEvents.Instance._alleyOwnerChanged.Invoke(alley, newOwner, oldOwner);
    }

    public static IMbEvent<Alley> AlleyClearedByPlayer
    {
      get => (IMbEvent<Alley>) CampaignEvents.Instance._alleyClearedByPlayer;
    }

    public override void OnAlleyClearedByPlayer(Alley alley)
    {
      CampaignEvents.Instance._alleyClearedByPlayer.Invoke(alley);
    }

    public static IMbEvent<Hero, Hero, Romance.RomanceLevelEnum> RomanticStateChanged
    {
      get
      {
        return (IMbEvent<Hero, Hero, Romance.RomanceLevelEnum>) CampaignEvents.Instance._romanticStateChanged;
      }
    }

    public override void OnRomanticStateChanged(
      Hero hero1,
      Hero hero2,
      Romance.RomanceLevelEnum romanceLevel)
    {
      CampaignEvents.Instance._romanticStateChanged.Invoke(hero1, hero2, romanceLevel);
    }

    public static IMbEvent<Hero, Hero, bool> HeroesMarried
    {
      get => (IMbEvent<Hero, Hero, bool>) CampaignEvents.Instance._heroesMarried;
    }

    public override void OnHeroesMarried(Hero hero1, Hero hero2, bool showNotification = true)
    {
      CampaignEvents.Instance._heroesMarried.Invoke(hero1, hero2, showNotification);
    }

    public static IMbEvent<int, Town> PlayerEliminatedFromTournament
    {
      get => (IMbEvent<int, Town>) CampaignEvents.Instance._playerEliminatedFromTournament;
    }

    public override void OnPlayerEliminatedFromTournament(int round, Town town)
    {
      CampaignEvents.Instance._playerEliminatedFromTournament.Invoke(round, town);
    }

    public static IMbEvent<Town> PlayerStartedTournamentMatch
    {
      get => (IMbEvent<Town>) CampaignEvents.Instance._playerStartedTournamentMatch;
    }

    public override void OnPlayerStartedTournamentMatch(Town town)
    {
      CampaignEvents.Instance._playerStartedTournamentMatch.Invoke(town);
    }

    public static IMbEvent<Town> TournamentStarted
    {
      get => (IMbEvent<Town>) CampaignEvents.Instance._tournamentStarted;
    }

    public override void OnTournamentStarted(Town town)
    {
      CampaignEvents.Instance._tournamentStarted.Invoke(town);
    }

    public static IMbEvent<IFaction, IFaction, DeclareWarAction.DeclareWarDetail> WarDeclared
    {
      get
      {
        return (IMbEvent<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>) CampaignEvents.Instance._warDeclared;
      }
    }

    public override void OnWarDeclared(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail declareWarDetail)
    {
      CampaignEvents.Instance._warDeclared.Invoke(faction1, faction2, declareWarDetail);
    }

    public static IMbEvent<CharacterObject, MBReadOnlyList<CharacterObject>, Town, ItemObject> TournamentFinished
    {
      get
      {
        return (IMbEvent<CharacterObject, MBReadOnlyList<CharacterObject>, Town, ItemObject>) CampaignEvents.Instance._tournamentFinished;
      }
    }

    public override void OnTournamentFinished(
      CharacterObject winner,
      MBReadOnlyList<CharacterObject> participants,
      Town town,
      ItemObject prize)
    {
      CampaignEvents.Instance._tournamentFinished.Invoke(winner, participants, town, prize);
    }

    public static IMbEvent<Town> TournamentCancelled
    {
      get => (IMbEvent<Town>) CampaignEvents.Instance._tournamentCancelled;
    }

    public override void OnTournamentCancelled(Town town)
    {
      CampaignEvents.Instance._tournamentCancelled.Invoke(town);
    }

    public static IMbEvent<PartyBase, PartyBase, object, bool> BattleStarted
    {
      get => (IMbEvent<PartyBase, PartyBase, object, bool>) CampaignEvents.Instance._battleStarted;
    }

    public override void OnStartBattle(
      PartyBase attackerParty,
      PartyBase defenderParty,
      object subject,
      bool showNotification)
    {
      CampaignEvents.Instance._battleStarted.Invoke(attackerParty, defenderParty, subject, showNotification);
    }

    public static IMbEvent<Settlement, Clan> RebellionFinished
    {
      get => (IMbEvent<Settlement, Clan>) CampaignEvents.Instance._rebellionFinished;
    }

    public override void OnRebellionFinished(Settlement settlement, Clan oldOwnerClan)
    {
      CampaignEvents.Instance._rebellionFinished.Invoke(settlement, oldOwnerClan);
    }

    public static IMbEvent<Town, bool> TownRebelliosStateChanged
    {
      get => (IMbEvent<Town, bool>) CampaignEvents.Instance._townRebelliousStateChanged;
    }

    public override void TownRebelliousStateChanged(Town town, bool rebelliousState)
    {
      CampaignEvents.Instance._townRebelliousStateChanged.Invoke(town, rebelliousState);
    }

    public static IMbEvent<Settlement, Clan> RebelliousClanDisbandedAtSettlement
    {
      get
      {
        return (IMbEvent<Settlement, Clan>) CampaignEvents.Instance._rebelliousClanDisbandedAtSettlement;
      }
    }

    public override void OnRebelliousClanDisbandedAtSettlement(Settlement settlement, Clan clan)
    {
      CampaignEvents.Instance._rebelliousClanDisbandedAtSettlement.Invoke(settlement, clan);
    }

    public static IMbEvent<MobileParty, ItemRoster> ItemsLooted
    {
      get => (IMbEvent<MobileParty, ItemRoster>) CampaignEvents.Instance._itemsLooted;
    }

    public override void OnItemsLooted(MobileParty mobileParty, ItemRoster items)
    {
      CampaignEvents.Instance._itemsLooted.Invoke(mobileParty, items);
    }

    public static IMbEvent<MobileParty, PartyBase> MobilePartyDestroyed
    {
      get => (IMbEvent<MobileParty, PartyBase>) CampaignEvents.Instance._mobilePartyDestroyed;
    }

    public override void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      CampaignEvents.Instance._mobilePartyDestroyed.Invoke(mobileParty, destroyerParty);
    }

    public static IMbEvent<MobileParty> MobilePartyCreated
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._mobilePartyCreated;
    }

    public override void OnMobilePartyCreated(MobileParty party)
    {
      CampaignEvents.Instance._mobilePartyCreated.Invoke(party);
    }

    public static IMbEvent<MobileParty, bool> MobilePartyQuestStatusChanged
    {
      get => (IMbEvent<MobileParty, bool>) CampaignEvents.Instance._mobilePartyQuestStatusChanged;
    }

    public override void OnMobilePartyQuestStatusChanged(MobileParty party, bool isUsedByQuest)
    {
      CampaignEvents.Instance._mobilePartyQuestStatusChanged.Invoke(party, isUsedByQuest);
    }

    public static IMbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool> HeroKilledEvent
    {
      get
      {
        return (IMbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>) CampaignEvents.Instance._heroKilled;
      }
    }

    public override void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      CampaignEvents.Instance._heroKilled.Invoke(victim, killer, detail, showNotification);
    }

    public static IMbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool> BeforeHeroKilledEvent
    {
      get
      {
        return (IMbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>) CampaignEvents.Instance._onBeforeHeroKilled;
      }
    }

    public override void OnBeforeHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      CampaignEvents.Instance._onBeforeHeroKilled.Invoke(victim, killer, detail, showNotification);
    }

    public static IMbEvent<Hero, int> ChildEducationCompletedEvent
    {
      get => (IMbEvent<Hero, int>) CampaignEvents.Instance._childEducationCompleted;
    }

    public override void OnChildEducationCompleted(Hero hero, int age)
    {
      CampaignEvents.Instance._childEducationCompleted.Invoke(hero, age);
    }

    public static IMbEvent<Hero> HeroComesOfAgeEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._heroComesOfAge;
    }

    public override void OnHeroComesOfAge(Hero hero)
    {
      CampaignEvents.Instance._heroComesOfAge.Invoke(hero);
    }

    public static IMbEvent<Hero> HeroGrowsOutOfInfancyEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._heroGrowsOutOfInfancyEvent;
    }

    public override void OnHeroGrowsOutOfInfancy(Hero hero)
    {
      CampaignEvents.Instance._heroGrowsOutOfInfancyEvent.Invoke(hero);
    }

    public static IMbEvent<Hero> HeroReachesTeenAgeEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._heroReachesTeenAgeEvent;
    }

    public override void OnHeroReachesTeenAge(Hero hero)
    {
      CampaignEvents.Instance._heroReachesTeenAgeEvent.Invoke(hero);
    }

    public static IMbEvent<Hero, Hero> CharacterDefeated
    {
      get => (IMbEvent<Hero, Hero>) CampaignEvents.Instance._characterDefeated;
    }

    public override void OnCharacterDefeated(Hero winner, Hero loser)
    {
      CampaignEvents.Instance._characterDefeated.Invoke(winner, loser);
    }

    public static IMbEvent<Kingdom, Clan> RulingClanChanged
    {
      get => (IMbEvent<Kingdom, Clan>) CampaignEvents.Instance._rulingClanChanged;
    }

    public override void OnRulingClanChanged(Kingdom kingdom, Clan newRulingClan)
    {
      CampaignEvents.Instance._rulingClanChanged.Invoke(kingdom, newRulingClan);
    }

    public static IMbEvent<PartyBase, Hero> HeroPrisonerTaken
    {
      get => (IMbEvent<PartyBase, Hero>) CampaignEvents.Instance._heroPrisonerTaken;
    }

    public override void OnHeroPrisonerTaken(PartyBase capturer, Hero prisoner)
    {
      CampaignEvents.Instance._heroPrisonerTaken.Invoke(capturer, prisoner);
    }

    public static IMbEvent<Hero, PartyBase, IFaction, EndCaptivityDetail> HeroPrisonerReleased
    {
      get
      {
        return (IMbEvent<Hero, PartyBase, IFaction, EndCaptivityDetail>) CampaignEvents.Instance._heroPrisonerReleased;
      }
    }

    public override void OnHeroPrisonerReleased(
      Hero prisoner,
      PartyBase party,
      IFaction capturerFaction,
      EndCaptivityDetail detail)
    {
      CampaignEvents.Instance._heroPrisonerReleased.Invoke(prisoner, party, capturerFaction, detail);
    }

    public static IMbEvent<Hero> CharacterBecameFugitive
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._characterBecameFugitive;
    }

    public override void OnCharacterBecameFugitive(Hero hero)
    {
      CampaignEvents.Instance._characterBecameFugitive.Invoke(hero);
    }

    public static IMbEvent<Hero> OnPlayerMetHeroEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._playerMetHero;
    }

    public override void OnPlayerMetHero(Hero hero)
    {
      CampaignEvents.Instance._playerMetHero.Invoke(hero);
    }

    public static IMbEvent<Hero> OnPlayerLearnsAboutHeroEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._playerLearnsAboutHero;
    }

    public override void OnPlayerLearnsAboutHero(Hero hero)
    {
      CampaignEvents.Instance._playerLearnsAboutHero.Invoke(hero);
    }

    public static IMbEvent<Hero, int, bool> RenownGained
    {
      get => (IMbEvent<Hero, int, bool>) CampaignEvents.Instance._renownGained;
    }

    public override void OnRenownGained(Hero hero, int gainedRenown, bool doNotNotify)
    {
      CampaignEvents.Instance._renownGained.Invoke(hero, gainedRenown, doNotNotify);
    }

    public static IMbEvent<IFaction, float> CrimeRatingChanged
    {
      get => (IMbEvent<IFaction, float>) CampaignEvents.Instance._crimeRatingChanged;
    }

    public override void OnCrimeRatingChanged(IFaction kingdom, float deltaCrimeAmount)
    {
      CampaignEvents.Instance._crimeRatingChanged.Invoke(kingdom, deltaCrimeAmount);
    }

    public static IMbEvent<Hero> NewCompanionAdded
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._newCompanionAdded;
    }

    public override void OnNewCompanionAdded(Hero newCompanion)
    {
      CampaignEvents.Instance._newCompanionAdded.Invoke(newCompanion);
    }

    public static IMbEvent<IMission> AfterMissionStarted
    {
      get => (IMbEvent<IMission>) CampaignEvents.Instance._afterMissionStarted;
    }

    public override void OnAfterMissionStarted(IMission iMission)
    {
      CampaignEvents.Instance._afterMissionStarted.Invoke(iMission);
    }

    public static IMbEvent<MenuCallbackArgs> GameMenuOpened
    {
      get => (IMbEvent<MenuCallbackArgs>) CampaignEvents.Instance._gameMenuOpened;
    }

    public override void OnGameMenuOpened(MenuCallbackArgs args)
    {
      CampaignEvents.Instance._gameMenuOpened.Invoke(args);
    }

    public static IMbEvent<MenuCallbackArgs> AfterGameMenuOpenedEvent
    {
      get => (IMbEvent<MenuCallbackArgs>) CampaignEvents.Instance._afterGameMenuOpenedEvent;
    }

    public override void AfterGameMenuOpened(MenuCallbackArgs args)
    {
      CampaignEvents.Instance._afterGameMenuOpenedEvent.Invoke(args);
    }

    public static IMbEvent<MenuCallbackArgs> BeforeGameMenuOpenedEvent
    {
      get => (IMbEvent<MenuCallbackArgs>) CampaignEvents.Instance._beforeGameMenuOpenedEvent;
    }

    public override void BeforeGameMenuOpened(MenuCallbackArgs args)
    {
      CampaignEvents.Instance._beforeGameMenuOpenedEvent.Invoke(args);
    }

    public static IMbEvent<IFaction, IFaction, MakePeaceAction.MakePeaceDetail> MakePeace
    {
      get
      {
        return (IMbEvent<IFaction, IFaction, MakePeaceAction.MakePeaceDetail>) CampaignEvents.Instance._makePeace;
      }
    }

    public override void OnMakePeace(
      IFaction side1Faction,
      IFaction side2Faction,
      MakePeaceAction.MakePeaceDetail detail)
    {
      CampaignEvents.Instance._makePeace.Invoke(side1Faction, side2Faction, detail);
    }

    public static IMbEvent<Kingdom> KingdomDestroyedEvent
    {
      get => (IMbEvent<Kingdom>) CampaignEvents.Instance._kingdomDestroyed;
    }

    public override void OnKingdomDestroyed(Kingdom destroyedKingdom)
    {
      CampaignEvents.Instance._kingdomDestroyed.Invoke(destroyedKingdom);
    }

    public static ReferenceIMBEvent<Kingdom, bool> CanKingdomBeDiscontinuedEvent
    {
      get => (ReferenceIMBEvent<Kingdom, bool>) CampaignEvents.Instance._canKingdomBeDiscontinued;
    }

    public override void CanKingdomBeDiscontinued(Kingdom kingdom, ref bool result)
    {
      CampaignEvents.Instance._canKingdomBeDiscontinued.Invoke(kingdom, ref result);
    }

    public static IMbEvent<Kingdom> KingdomCreatedEvent
    {
      get => (IMbEvent<Kingdom>) CampaignEvents.Instance._kingdomCreated;
    }

    public override void OnKingdomCreated(Kingdom createdKingdom)
    {
      CampaignEvents.Instance._kingdomCreated.Invoke(createdKingdom);
    }

    public static IMbEvent<Village> VillageBecomeNormal
    {
      get => (IMbEvent<Village>) CampaignEvents.Instance._villageBecomeNormal;
    }

    public override void OnVillageBecomeNormal(Village village)
    {
      CampaignEvents.Instance._villageBecomeNormal.Invoke(village);
    }

    public static IMbEvent<Village> VillageBeingRaided
    {
      get => (IMbEvent<Village>) CampaignEvents.Instance._villageBeingRaided;
    }

    public override void OnVillageBeingRaided(Village village)
    {
      CampaignEvents.Instance._villageBeingRaided.Invoke(village);
    }

    public static IMbEvent<Village> VillageLooted
    {
      get => (IMbEvent<Village>) CampaignEvents.Instance._villageLooted;
    }

    public override void OnVillageLooted(Village village)
    {
      CampaignEvents.Instance._villageLooted.Invoke(village);
    }

    public static IMbEvent<Hero, RemoveCompanionAction.RemoveCompanionDetail> CompanionRemoved
    {
      get
      {
        return (IMbEvent<Hero, RemoveCompanionAction.RemoveCompanionDetail>) CampaignEvents.Instance._companionRemoved;
      }
    }

    public override void OnCompanionRemoved(
      Hero companion,
      RemoveCompanionAction.RemoveCompanionDetail detail)
    {
      CampaignEvents.Instance._companionRemoved.Invoke(companion, detail);
    }

    public static IMbEvent<IAgent> OnAgentJoinedConversationEvent
    {
      get => (IMbEvent<IAgent>) CampaignEvents.Instance._onAgentJoinedConversationEvent;
    }

    public override void OnAgentJoinedConversation(IAgent agent)
    {
      CampaignEvents.Instance._onAgentJoinedConversationEvent.Invoke(agent);
    }

    public static IMbEvent<IEnumerable<CharacterObject>> ConversationEnded
    {
      get => (IMbEvent<IEnumerable<CharacterObject>>) CampaignEvents.Instance._onConversationEnded;
    }

    public override void OnConversationEnded(IEnumerable<CharacterObject> characters)
    {
      CampaignEvents.Instance._onConversationEnded.Invoke(characters);
    }

    public static IMbEvent<MapEvent> MapEventEnded
    {
      get => (IMbEvent<MapEvent>) CampaignEvents.Instance._mapEventEnded;
    }

    public override void OnMapEventEnded(MapEvent mapEvent)
    {
      CampaignEvents.Instance._mapEventEnded.Invoke(mapEvent);
    }

    public static IMbEvent<MapEvent, PartyBase, PartyBase> MapEventStarted
    {
      get => (IMbEvent<MapEvent, PartyBase, PartyBase>) CampaignEvents.Instance._mapEventStarted;
    }

    public override void OnMapEventStarted(
      MapEvent mapEvent,
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      CampaignEvents.Instance._mapEventStarted.Invoke(mapEvent, attackerParty, defenderParty);
    }

    public static IMbEvent<Settlement, FlattenedTroopRoster, Hero, bool> PrisonersChangeInSettlement
    {
      get
      {
        return (IMbEvent<Settlement, FlattenedTroopRoster, Hero, bool>) CampaignEvents.Instance._prisonersChangeInSettlement;
      }
    }

    public override void OnPrisonersChangeInSettlement(
      Settlement settlement,
      FlattenedTroopRoster prisonerRoster,
      Hero prisonerHero,
      bool takenFromDungeon)
    {
      CampaignEvents.Instance._prisonersChangeInSettlement.Invoke(settlement, prisonerRoster, prisonerHero, takenFromDungeon);
    }

    public static IMbEvent<Hero, BoardGameHelper.BoardGameState> OnPlayerBoardGameOverEvent
    {
      get
      {
        return (IMbEvent<Hero, BoardGameHelper.BoardGameState>) CampaignEvents.Instance._onPlayerBoardGameOver;
      }
    }

    public override void OnPlayerBoardGameOver(
      Hero opposingHero,
      BoardGameHelper.BoardGameState state)
    {
      CampaignEvents.Instance._onPlayerBoardGameOver.Invoke(opposingHero, state);
    }

    public static IMbEvent<Hero> OnRansomOfferedToPlayerEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._onRansomOfferedToPlayer;
    }

    public override void OnRansomOfferedToPlayer(Hero captiveHero)
    {
      CampaignEvents.Instance._onRansomOfferedToPlayer.Invoke(captiveHero);
    }

    public static IMbEvent<Hero> OnRansomOfferCancelledEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._onRansomOfferCancelled;
    }

    public override void OnRansomOfferCancelled(Hero captiveHero)
    {
      CampaignEvents.Instance._onRansomOfferCancelled.Invoke(captiveHero);
    }

    public static IMbEvent<IFaction, int> OnPeaceOfferedToPlayerEvent
    {
      get => (IMbEvent<IFaction, int>) CampaignEvents.Instance._onPeaceOfferedToPlayer;
    }

    public override void OnPeaceOfferedToPlayer(IFaction opponentFaction, int tributeAmount)
    {
      CampaignEvents.Instance._onPeaceOfferedToPlayer.Invoke(opponentFaction, tributeAmount);
    }

    public static IMbEvent<IFaction> OnPeaceOfferCancelledEvent
    {
      get => (IMbEvent<IFaction>) CampaignEvents.Instance._onPeaceOfferCancelled;
    }

    public override void OnPeaceOfferCancelled(IFaction opponentFaction)
    {
      CampaignEvents.Instance._onPeaceOfferCancelled.Invoke(opponentFaction);
    }

    public static IMbEvent<Hero, Hero> OnMarriageOfferedToPlayerEvent
    {
      get => (IMbEvent<Hero, Hero>) CampaignEvents.Instance._onMarriageOfferedToPlayerEvent;
    }

    public override void OnMarriageOfferedToPlayer(Hero suitor, Hero maiden)
    {
      CampaignEvents.Instance._onMarriageOfferedToPlayerEvent.Invoke(suitor, maiden);
    }

    public static IMbEvent<Hero, Hero> OnMarriageOfferCanceledEvent
    {
      get => (IMbEvent<Hero, Hero>) CampaignEvents.Instance._onMarriageOfferCanceledEvent;
    }

    public override void OnMarriageOfferCanceled(Hero suitor, Hero maiden)
    {
      CampaignEvents.Instance._onMarriageOfferCanceledEvent.Invoke(suitor, maiden);
    }

    public static IMbEvent<Kingdom> OnVassalOrMercenaryServiceOfferedToPlayerEvent
    {
      get
      {
        return (IMbEvent<Kingdom>) CampaignEvents.Instance._onVassalOrMercenaryServiceOfferedToPlayerEvent;
      }
    }

    public override void OnVassalOrMercenaryServiceOfferedToPlayer(Kingdom offeredKingdom)
    {
      CampaignEvents.Instance._onVassalOrMercenaryServiceOfferedToPlayerEvent.Invoke(offeredKingdom);
    }

    public static IMbEvent<Kingdom> OnVassalOrMercenaryServiceOfferCanceledEvent
    {
      get
      {
        return (IMbEvent<Kingdom>) CampaignEvents.Instance._onVassalOrMercenaryServiceOfferCanceledEvent;
      }
    }

    public override void OnVassalOrMercenaryServiceOfferCanceled(Kingdom offeredKingdom)
    {
      CampaignEvents.Instance._onVassalOrMercenaryServiceOfferCanceledEvent.Invoke(offeredKingdom);
    }

    public static IMbEvent<IMission> OnMissionStartedEvent
    {
      get => (IMbEvent<IMission>) CampaignEvents.Instance._onMissionStartedEvent;
    }

    public override void OnMissionStarted(IMission mission)
    {
      CampaignEvents.Instance._onMissionStartedEvent.Invoke(mission);
    }

    public static IMbEvent BeforeMissionOpenedEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._beforeMissionOpenedEvent;
    }

    public override void BeforeMissionOpened()
    {
      CampaignEvents.Instance._beforeMissionOpenedEvent.Invoke();
    }

    public static IMbEvent<PartyBase> OnPartyRemovedEvent
    {
      get => (IMbEvent<PartyBase>) CampaignEvents.Instance._onPartyRemovedEvent;
    }

    public override void OnPartyRemoved(PartyBase party)
    {
      CampaignEvents.Instance._onPartyRemovedEvent.Invoke(party);
    }

    public static IMbEvent<PartyBase> OnPartySizeChangedEvent
    {
      get => (IMbEvent<PartyBase>) CampaignEvents.Instance._onPartySizeChangedEvent;
    }

    public override void OnPartySizeChanged(PartyBase party)
    {
      CampaignEvents.Instance._onPartySizeChangedEvent.Invoke(party);
    }

    public static IMbEvent<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail> OnSettlementOwnerChangedEvent
    {
      get
      {
        return (IMbEvent<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>) CampaignEvents.Instance._onSettlementOwnerChangedEvent;
      }
    }

    public override void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      CampaignEvents.Instance._onSettlementOwnerChangedEvent.Invoke(settlement, openToClaim, newOwner, oldOwner, capturerHero, detail);
    }

    public static IMbEvent<Town, Hero, Hero> OnGovernorChangedEvent
    {
      get => (IMbEvent<Town, Hero, Hero>) CampaignEvents.Instance._onGovernorChangedEvent;
    }

    public override void OnGovernorChanged(Town fortification, Hero oldGovernor, Hero newGovernor)
    {
      CampaignEvents.Instance._onGovernorChangedEvent.Invoke(fortification, oldGovernor, newGovernor);
    }

    public static IMbEvent<MobileParty, Settlement> OnSettlementLeftEvent
    {
      get => (IMbEvent<MobileParty, Settlement>) CampaignEvents.Instance._onSettlementLeftEvent;
    }

    public override void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      CampaignEvents.Instance._onSettlementLeftEvent.Invoke(party, settlement);
    }

    public static IMbEvent WeeklyTickEvent => (IMbEvent) CampaignEvents.Instance._weeklyTickEvent;

    public override void WeeklyTick() => CampaignEvents.Instance._weeklyTickEvent.Invoke();

    public static IMbEvent DailyTickEvent => (IMbEvent) CampaignEvents.Instance._dailyTickEvent;

    public override void DailyTick() => CampaignEvents.Instance._dailyTickEvent.Invoke();

    public static IMbEvent<MobileParty> DailyTickPartyEvent
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._dailyTickPartyEvent;
    }

    public override void DailyTickParty(MobileParty mobileParty)
    {
      CampaignEvents.Instance._dailyTickPartyEvent.Invoke(mobileParty);
    }

    public static IMbEvent<Town> DailyTickTownEvent
    {
      get => (IMbEvent<Town>) CampaignEvents.Instance._dailyTickTownEvent;
    }

    public override void DailyTickTown(Town town)
    {
      CampaignEvents.Instance._dailyTickTownEvent.Invoke(town);
    }

    public static IMbEvent<Settlement> DailyTickSettlementEvent
    {
      get => (IMbEvent<Settlement>) CampaignEvents.Instance._dailyTickSettlementEvent;
    }

    public override void DailyTickSettlement(Settlement settlement)
    {
      CampaignEvents.Instance._dailyTickSettlementEvent.Invoke(settlement);
    }

    public static IMbEvent<Hero> DailyTickHeroEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._dailyTickHeroEvent;
    }

    public override void DailyTickHero(Hero hero)
    {
      CampaignEvents.Instance._dailyTickHeroEvent.Invoke(hero);
    }

    public static IMbEvent<Clan> DailyTickClanEvent
    {
      get => (IMbEvent<Clan>) CampaignEvents.Instance._dailyTickClanEvent;
    }

    public override void DailyTickClan(Clan clan)
    {
      CampaignEvents.Instance._dailyTickClanEvent.Invoke(clan);
    }

    public static IMbEvent<List<CampaignTutorial>> CollectAvailableTutorialsEvent
    {
      get
      {
        return (IMbEvent<List<CampaignTutorial>>) CampaignEvents.Instance._collectAvailableTutorialsEvent;
      }
    }

    public override void CollectAvailableTutorials(ref List<CampaignTutorial> tutorials)
    {
      CampaignEvents.Instance._collectAvailableTutorialsEvent.Invoke(tutorials);
    }

    public static IMbEvent<string> OnTutorialCompletedEvent
    {
      get => (IMbEvent<string>) CampaignEvents.Instance._onTutorialCompletedEvent;
    }

    public override void OnTutorialCompleted(string tutorial)
    {
      CampaignEvents.Instance._onTutorialCompletedEvent.Invoke(tutorial);
    }

    public static IMbEvent<Town, Building, int> OnBuildingLevelChangedEvent
    {
      get => (IMbEvent<Town, Building, int>) CampaignEvents.Instance._onBuildingLevelChangedEvent;
    }

    public override void OnBuildingLevelChanged(Town town, Building building, int levelChange)
    {
      CampaignEvents.Instance._onBuildingLevelChangedEvent.Invoke(town, building, levelChange);
    }

    public static IMbEvent HourlyTickEvent => (IMbEvent) CampaignEvents.Instance._hourlyTickEvent;

    public override void HourlyTick() => CampaignEvents.Instance._hourlyTickEvent.Invoke();

    public static IMbEvent<MobileParty> HourlyTickPartyEvent
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._hourlyTickPartyEvent;
    }

    public override void HourlyTickParty(MobileParty mobileParty)
    {
      CampaignEvents.Instance._hourlyTickPartyEvent.Invoke(mobileParty);
    }

    public static IMbEvent<Settlement> HourlyTickSettlementEvent
    {
      get => (IMbEvent<Settlement>) CampaignEvents.Instance._hourlyTickSettlementEvent;
    }

    public override void HourlyTickSettlement(Settlement settlement)
    {
      CampaignEvents.Instance._hourlyTickSettlementEvent.Invoke(settlement);
    }

    public static IMbEvent<Clan> HourlyTickClanEvent
    {
      get => (IMbEvent<Clan>) CampaignEvents.Instance._hourlyTickClanEvent;
    }

    public override void HourlyTickClan(Clan clan)
    {
      CampaignEvents.Instance._hourlyTickClanEvent.Invoke(clan);
    }

    public static IMbEvent<float> TickEvent => (IMbEvent<float>) CampaignEvents.Instance._tickEvent;

    public override void Tick(float dt) => CampaignEvents.Instance._tickEvent.Invoke(dt);

    public static IMbEvent<CampaignGameStarter> OnSessionLaunchedEvent
    {
      get => (IMbEvent<CampaignGameStarter>) CampaignEvents.Instance._onSessionLaunchedEvent;
    }

    public override void OnSessionStart(CampaignGameStarter campaignGameStarter)
    {
      CampaignEvents.Instance._onSessionLaunchedEvent.Invoke(campaignGameStarter);
    }

    public static IMbEvent<CampaignGameStarter> OnAfterSessionLaunchedEvent
    {
      get => (IMbEvent<CampaignGameStarter>) CampaignEvents.Instance._onAfterSessionLaunchedEvent;
    }

    public override void OnAfterSessionStart(CampaignGameStarter campaignGameStarter)
    {
      CampaignEvents.Instance._onAfterSessionLaunchedEvent.Invoke(campaignGameStarter);
    }

    public static IMbEvent<CampaignGameStarter> OnNewGameCreatedEvent
    {
      get => (IMbEvent<CampaignGameStarter>) CampaignEvents.Instance._onNewGameCreatedEvent;
    }

    public static IMbEvent<CampaignGameStarter, int> OnNewGameCreatedPartialFollowUpEvent
    {
      get
      {
        return (IMbEvent<CampaignGameStarter, int>) CampaignEvents.Instance._onNewGameCreatedPartialFollowUpEvent;
      }
    }

    public override void OnNewGameCreated(CampaignGameStarter campaignGameStarter)
    {
      CampaignEvents.Instance._onNewGameCreatedEvent.Invoke(campaignGameStarter);
      for (int t2 = 0; t2 < 100; ++t2)
        CampaignEvents.Instance._onNewGameCreatedPartialFollowUpEvent.Invoke(campaignGameStarter, t2);
      CampaignEvents.Instance._onNewGameCreatedPartialFollowUpEndEvent.Invoke(campaignGameStarter);
    }

    public static IMbEvent<CampaignGameStarter> OnNewGameCreatedPartialFollowUpEndEvent
    {
      get
      {
        return (IMbEvent<CampaignGameStarter>) CampaignEvents.Instance._onNewGameCreatedPartialFollowUpEndEvent;
      }
    }

    public static IMbEvent<CampaignGameStarter> OnGameEarlyLoadedEvent
    {
      get => (IMbEvent<CampaignGameStarter>) CampaignEvents.Instance._onGameEarlyLoadedEvent;
    }

    public override void OnGameEarlyLoaded(CampaignGameStarter campaignGameStarter)
    {
      CampaignEvents.Instance._onGameEarlyLoadedEvent.Invoke(campaignGameStarter);
    }

    public static IMbEvent<CampaignGameStarter> OnGameLoadedEvent
    {
      get => (IMbEvent<CampaignGameStarter>) CampaignEvents.Instance._onGameLoadedEvent;
    }

    public override void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      CampaignEvents.Instance._onGameLoadedEvent.Invoke(campaignGameStarter);
    }

    public static IMbEvent OnGameLoadFinishedEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._onGameLoadFinishedEvent;
    }

    public override void OnGameLoadFinished()
    {
      CampaignEvents.Instance._onGameLoadFinishedEvent.Invoke();
    }

    public static IMbEvent<MobileParty, PartyThinkParams> AiHourlyTickEvent
    {
      get => (IMbEvent<MobileParty, PartyThinkParams>) CampaignEvents.Instance._aiHourlyTickEvent;
    }

    public override void AiHourlyTick(MobileParty party, PartyThinkParams partyThinkParams)
    {
      CampaignEvents.Instance._aiHourlyTickEvent.Invoke(party, partyThinkParams);
    }

    public static IMbEvent<MobileParty> TickPartialHourlyAiEvent
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._tickPartialHourlyAiEvent;
    }

    public override void TickPartialHourlyAi(MobileParty party)
    {
      CampaignEvents.Instance._tickPartialHourlyAiEvent.Invoke(party);
    }

    public static IMbEvent<MobileParty> OnPartyJoinedArmyEvent
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._onPartyJoinedArmyEvent;
    }

    public override void OnPartyJoinedArmy(MobileParty mobileParty)
    {
      CampaignEvents.Instance._onPartyJoinedArmyEvent.Invoke(mobileParty);
    }

    public static IMbEvent<MobileParty> PartyRemovedFromArmyEvent
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._onPartyRemovedFromArmyEvent;
    }

    public override void OnPartyRemovedFromArmy(MobileParty mobileParty)
    {
      CampaignEvents.Instance._onPartyRemovedFromArmyEvent.Invoke(mobileParty);
    }

    public static IMbEvent<Hero, Army.ArmyLeaderThinkReason> OnArmyLeaderThinkEvent
    {
      get
      {
        return (IMbEvent<Hero, Army.ArmyLeaderThinkReason>) CampaignEvents.Instance._onArmyLeaderThinkEvent;
      }
    }

    public override void OnArmyLeaderThink(Hero hero, Army.ArmyLeaderThinkReason reason)
    {
      CampaignEvents.Instance._onArmyLeaderThinkEvent.Invoke(hero, reason);
    }

    public static IMbEvent<IMission> OnMissionEndedEvent
    {
      get => (IMbEvent<IMission>) CampaignEvents.Instance._onMissionEndedEvent;
    }

    public override void OnMissionEnded(IMission mission)
    {
      CampaignEvents.Instance._onMissionEndedEvent.Invoke(mission);
    }

    public static IMbEvent<MobileParty> OnQuarterDailyPartyTick
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._onQuarterDailyPartyTick;
    }

    public override void QuarterDailyPartyTick(MobileParty mobileParty)
    {
      CampaignEvents.Instance._onQuarterDailyPartyTick.Invoke(mobileParty);
    }

    public static IMbEvent<MapEvent> OnPlayerBattleEndEvent
    {
      get => (IMbEvent<MapEvent>) CampaignEvents.Instance._onPlayerBattleEndEvent;
    }

    public override void OnPlayerBattleEnd(MapEvent mapEvent)
    {
      CampaignEvents.Instance._onPlayerBattleEndEvent.Invoke(mapEvent);
    }

    public static IMbEvent<CharacterObject, int> OnUnitRecruitedEvent
    {
      get => (IMbEvent<CharacterObject, int>) CampaignEvents.Instance._onUnitRecruitedEvent;
    }

    public override void OnUnitRecruited(CharacterObject character, int amount)
    {
      CampaignEvents.Instance._onUnitRecruitedEvent.Invoke(character, amount);
    }

    public static IMbEvent<Hero> OnChildConceivedEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._onChildConceived;
    }

    public override void OnChildConceived(Hero mother)
    {
      CampaignEvents.Instance._onChildConceived.Invoke(mother);
    }

    public static IMbEvent<Hero, List<Hero>, int> OnGivenBirthEvent
    {
      get => (IMbEvent<Hero, List<Hero>, int>) CampaignEvents.Instance._onGivenBirthEvent;
    }

    public override void OnGivenBirth(Hero mother, List<Hero> aliveChildren, int stillbornCount)
    {
      CampaignEvents.Instance._onGivenBirthEvent.Invoke(mother, aliveChildren, stillbornCount);
    }

    public static IMbEvent<float> MissionTickEvent
    {
      get => (IMbEvent<float>) CampaignEvents.Instance._missionTickEvent;
    }

    public override void MissionTick(float dt)
    {
      CampaignEvents.Instance._missionTickEvent.Invoke(dt);
    }

    public static IMbEvent SetupPreConversationEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._setupPreConversationEvent;
    }

    public static void SetupPreConversation()
    {
      CampaignEvents.Instance._setupPreConversationEvent.Invoke();
    }

    public static IMbEvent ArmyOverlaySetDirtyEvent
    {
      get
      {
        return (IMbEvent) CampaignEvents.Instance._armyOverlaySetDirty ?? (IMbEvent) (CampaignEvents.Instance._armyOverlaySetDirty = new MbEvent());
      }
    }

    public override void OnArmyOverlaySetDirty()
    {
      if (CampaignEvents.Instance._armyOverlaySetDirty == null)
        CampaignEvents.Instance._armyOverlaySetDirty = new MbEvent();
      CampaignEvents.Instance._armyOverlaySetDirty.Invoke();
    }

    public static IMbEvent<int> PlayerDesertedBattleEvent
    {
      get => (IMbEvent<int>) CampaignEvents.Instance._playerDesertedBattle;
    }

    public override void OnPlayerDesertedBattle(int sacrificedMenCount)
    {
      CampaignEvents.Instance._playerDesertedBattle.Invoke(sacrificedMenCount);
    }

    public static IMbEvent<PartyBase> PartyVisibilityChangedEvent
    {
      get
      {
        return (IMbEvent<PartyBase>) CampaignEvents.Instance._partyVisibilityChanged ?? (IMbEvent<PartyBase>) (CampaignEvents.Instance._partyVisibilityChanged = new MbEvent<PartyBase>());
      }
    }

    public override void OnPartyVisibilityChanged(PartyBase party)
    {
      if (CampaignEvents.Instance._partyVisibilityChanged == null)
        CampaignEvents.Instance._partyVisibilityChanged = new MbEvent<PartyBase>();
      CampaignEvents.Instance._partyVisibilityChanged.Invoke(party);
    }

    public static IMbEvent<Track> TrackDetectedEvent
    {
      get => (IMbEvent<Track>) CampaignEvents.Instance._trackDetectedEvent;
    }

    public override void TrackDetected(Track track)
    {
      CampaignEvents.Instance._trackDetectedEvent.Invoke(track);
    }

    public static IMbEvent<Track> TrackLostEvent
    {
      get => (IMbEvent<Track>) CampaignEvents.Instance._trackLostEvent;
    }

    public override void TrackLost(Track track)
    {
      CampaignEvents.Instance._trackLostEvent.Invoke(track);
    }

    public static IMbEvent<Dictionary<string, int>> LocationCharactersAreReadyToSpawnEvent
    {
      get
      {
        return (IMbEvent<Dictionary<string, int>>) CampaignEvents.Instance._locationCharactersAreReadyToSpawn;
      }
    }

    public override void LocationCharactersAreReadyToSpawn(
      Dictionary<string, int> unusedUsablePointCount)
    {
      foreach (KeyValuePair<string, int> keyValuePair in unusedUsablePointCount)
        ;
      CampaignEvents.Instance._locationCharactersAreReadyToSpawn.Invoke(unusedUsablePointCount);
    }

    public static IMbEvent LocationCharactersSimulatedEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._locationCharactersSimulatedSpawned;
    }

    public override void LocationCharactersSimulated()
    {
      CampaignEvents.Instance._locationCharactersSimulatedSpawned.Invoke();
    }

    public static IMbEvent<CharacterObject, CharacterObject, int> PlayerUpgradedTroopsEvent
    {
      get
      {
        return (IMbEvent<CharacterObject, CharacterObject, int>) CampaignEvents.Instance._playerUpgradedTroopsEvent;
      }
    }

    public override void OnPlayerUpgradedTroops(
      CharacterObject upgradeFromTroop,
      CharacterObject upgradeToTroop,
      int number)
    {
      CampaignEvents.Instance._playerUpgradedTroopsEvent.Invoke(upgradeFromTroop, upgradeToTroop, number);
    }

    public static IMbEvent<CharacterObject, CharacterObject, PartyBase, WeaponComponentData, bool, int> OnHeroCombatHitEvent
    {
      get
      {
        return (IMbEvent<CharacterObject, CharacterObject, PartyBase, WeaponComponentData, bool, int>) CampaignEvents.Instance._onHeroCombatHitEvent;
      }
    }

    public override void OnHeroCombatHit(
      CharacterObject attackerTroop,
      CharacterObject attackedTroop,
      PartyBase party,
      WeaponComponentData usedWeapon,
      bool isFatal,
      int xp)
    {
      CampaignEvents.Instance._onHeroCombatHitEvent.Invoke(attackerTroop, attackedTroop, party, usedWeapon, isFatal, xp);
    }

    public static IMbEvent<CharacterObject> CharacterPortraitPopUpOpenedEvent
    {
      get => (IMbEvent<CharacterObject>) CampaignEvents.Instance._characterPortraitPopUpOpenedEvent;
    }

    public override void OnCharacterPortraitPopUpOpened(CharacterObject character)
    {
      this._timeControlModeBeforePopUpOpened = Campaign.Current.TimeControlMode;
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      Campaign.Current.SetTimeControlModeLock(true);
      CampaignEvents.Instance._characterPortraitPopUpOpenedEvent.Invoke(character);
    }

    public static IMbEvent CharacterPortraitPopUpClosedEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._characterPortraitPopUpClosedEvent;
    }

    public override void OnCharacterPortraitPopUpClosed()
    {
      Campaign.Current.SetTimeControlModeLock(false);
      Campaign.Current.TimeControlMode = this._timeControlModeBeforePopUpOpened;
      this._timeControlModeBeforePopUpOpened = CampaignTimeControlMode.Stop;
      CampaignEvents.Instance._characterPortraitPopUpClosedEvent.Invoke();
    }

    public static IMbEvent<Hero> PlayerStartTalkFromMenu
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._playerStartTalkFromMenu;
    }

    public override void OnPlayerStartTalkFromMenu(Hero hero)
    {
      CampaignEvents.Instance._playerStartTalkFromMenu.Invoke(hero);
    }

    public static IMbEvent<GameMenuOption> GameMenuOptionSelectedEvent
    {
      get => (IMbEvent<GameMenuOption>) CampaignEvents.Instance._gameMenuOptionSelectedEvent;
    }

    public override void OnGameMenuOptionSelected(GameMenuOption gameMenuOption)
    {
      CampaignEvents.Instance._gameMenuOptionSelectedEvent.Invoke(gameMenuOption);
    }

    public static IMbEvent<CharacterObject> PlayerStartRecruitmentEvent
    {
      get => (IMbEvent<CharacterObject>) CampaignEvents.Instance._playerStartRecruitmentEvent;
    }

    public override void OnPlayerStartRecruitment(CharacterObject recruitTroopCharacter)
    {
      CampaignEvents.Instance._playerStartRecruitmentEvent.Invoke(recruitTroopCharacter);
    }

    public static IMbEvent<Hero, Hero> OnBeforePlayerCharacterChangedEvent
    {
      get => (IMbEvent<Hero, Hero>) CampaignEvents.Instance._onBeforePlayerCharacterChangedEvent;
    }

    public override void OnBeforePlayerCharacterChanged(Hero oldPlayer, Hero newPlayer)
    {
      CampaignEvents.Instance._onBeforePlayerCharacterChangedEvent.Invoke(oldPlayer, newPlayer);
    }

    public static IMbEvent<Hero, Hero, MobileParty, bool> OnPlayerCharacterChangedEvent
    {
      get
      {
        return (IMbEvent<Hero, Hero, MobileParty, bool>) CampaignEvents.Instance._onPlayerCharacterChangedEvent;
      }
    }

    public override void OnPlayerCharacterChanged(
      Hero oldPlayer,
      Hero newPlayer,
      MobileParty newMainParty,
      bool isMainPartyChanged)
    {
      CampaignEvents.Instance._onPlayerCharacterChangedEvent.Invoke(oldPlayer, newPlayer, newMainParty, isMainPartyChanged);
    }

    public static IMbEvent<Hero, Hero> OnClanLeaderChangedEvent
    {
      get => (IMbEvent<Hero, Hero>) CampaignEvents.Instance._onClanLeaderChangedEvent;
    }

    public override void OnClanLeaderChanged(Hero oldLeader, Hero newLeader)
    {
      CampaignEvents.Instance._onClanLeaderChangedEvent.Invoke(oldLeader, newLeader);
    }

    public static IMbEvent<SiegeEvent> OnSiegeEventStartedEvent
    {
      get => (IMbEvent<SiegeEvent>) CampaignEvents.Instance._onSiegeEventStartedEvent;
    }

    public override void OnSiegeEventStarted(SiegeEvent siegeEvent)
    {
      CampaignEvents.Instance._onSiegeEventStartedEvent.Invoke(siegeEvent);
    }

    public static IMbEvent OnPlayerSiegeStartedEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._onPlayerSiegeStartedEvent;
    }

    public override void OnPlayerSiegeStarted()
    {
      CampaignEvents.Instance._onPlayerSiegeStartedEvent.Invoke();
    }

    public static IMbEvent<SiegeEvent> OnSiegeEventEndedEvent
    {
      get => (IMbEvent<SiegeEvent>) CampaignEvents.Instance._onSiegeEventEndedEvent;
    }

    public override void OnSiegeEventEnded(SiegeEvent siegeEvent)
    {
      CampaignEvents.Instance._onSiegeEventEndedEvent.Invoke(siegeEvent);
    }

    public static IMbEvent<MobileParty, Settlement, SiegeAftermathAction.SiegeAftermath, Clan, Dictionary<MobileParty, float>> OnSiegeAftermathAppliedEvent
    {
      get
      {
        return (IMbEvent<MobileParty, Settlement, SiegeAftermathAction.SiegeAftermath, Clan, Dictionary<MobileParty, float>>) CampaignEvents.Instance._siegeAftermathAppliedEvent;
      }
    }

    public override void OnSiegeAftermathApplied(
      MobileParty attackerParty,
      Settlement settlement,
      SiegeAftermathAction.SiegeAftermath aftermathType,
      Clan previousSettlementOwner,
      Dictionary<MobileParty, float> partyContributions)
    {
      CampaignEvents.Instance._siegeAftermathAppliedEvent.Invoke(attackerParty, settlement, aftermathType, previousSettlementOwner, partyContributions);
    }

    public static IMbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType, SiegeBombardTargets> OnSiegeBombardmentHitEvent
    {
      get
      {
        return (IMbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType, SiegeBombardTargets>) CampaignEvents.Instance._onSiegeBombardmentHitEvent;
      }
    }

    public override void OnSiegeBombardmentHit(
      MobileParty besiegerParty,
      Settlement besiegedSettlement,
      BattleSideEnum side,
      SiegeEngineType weapon,
      SiegeBombardTargets target)
    {
      CampaignEvents.Instance._onSiegeBombardmentHitEvent.Invoke(besiegerParty, besiegedSettlement, side, weapon, target);
    }

    public static IMbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType, bool> OnSiegeBombardmentWallHitEvent
    {
      get
      {
        return (IMbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType, bool>) CampaignEvents.Instance._onSiegeBombardmentWallHitEvent;
      }
    }

    public override void OnSiegeBombardmentWallHit(
      MobileParty besiegerParty,
      Settlement besiegedSettlement,
      BattleSideEnum side,
      SiegeEngineType weapon,
      bool isWallCracked)
    {
      CampaignEvents.Instance._onSiegeBombardmentWallHitEvent.Invoke(besiegerParty, besiegedSettlement, side, weapon, isWallCracked);
    }

    public static IMbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType> OnSiegeEngineDestroyedEvent
    {
      get
      {
        return (IMbEvent<MobileParty, Settlement, BattleSideEnum, SiegeEngineType>) CampaignEvents.Instance._onSiegeEngineDestroyedEvent;
      }
    }

    public override void OnSiegeEngineDestroyed(
      MobileParty besiegerParty,
      Settlement besiegedSettlement,
      BattleSideEnum side,
      SiegeEngineType destroyedEngine)
    {
      CampaignEvents.Instance._onSiegeEngineDestroyedEvent.Invoke(besiegerParty, besiegedSettlement, side, destroyedEngine);
    }

    public static IMbEvent<List<TradeRumor>, Settlement> OnTradeRumorIsTakenEvent
    {
      get
      {
        return (IMbEvent<List<TradeRumor>, Settlement>) CampaignEvents.Instance._onTradeRumorIsTakenEvent;
      }
    }

    public override void OnTradeRumorIsTaken(
      List<TradeRumor> newRumors,
      Settlement sourceSettlement = null)
    {
      CampaignEvents.Instance._onTradeRumorIsTakenEvent.Invoke(newRumors, sourceSettlement);
    }

    public static IMbEvent<Hero> OnCheckForIssueEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._onCheckForIssueEvent;
    }

    public override void OnCheckForIssue(Hero hero)
    {
      CampaignEvents.Instance._onCheckForIssueEvent.Invoke(hero);
    }

    public static IMbEvent<IssueBase, IssueBase.IssueUpdateDetails, Hero> OnIssueUpdatedEvent
    {
      get
      {
        return (IMbEvent<IssueBase, IssueBase.IssueUpdateDetails, Hero>) CampaignEvents.Instance._onIssueUpdatedEvent;
      }
    }

    public override void OnIssueUpdated(
      IssueBase issue,
      IssueBase.IssueUpdateDetails details,
      Hero issueSolver = null)
    {
      CampaignEvents.Instance._onIssueUpdatedEvent.Invoke(issue, details, issueSolver);
    }

    public static IMbEvent<MobileParty, TroopRoster> OnTroopsDesertedEvent
    {
      get => (IMbEvent<MobileParty, TroopRoster>) CampaignEvents.Instance._onTroopsDesertedEvent;
    }

    public override void OnTroopsDeserted(MobileParty mobileParty, TroopRoster desertedTroops)
    {
      CampaignEvents.Instance._onTroopsDesertedEvent.Invoke(mobileParty, desertedTroops);
    }

    public static IMbEvent<Hero, Settlement, Hero, CharacterObject, int> OnTroopRecruitedEvent
    {
      get
      {
        return (IMbEvent<Hero, Settlement, Hero, CharacterObject, int>) CampaignEvents.Instance._onTroopRecruitedEvent;
      }
    }

    public override void OnTroopRecruited(
      Hero recruiterHero,
      Settlement recruitmentSettlement,
      Hero recruitmentSource,
      CharacterObject troop,
      int amount)
    {
      CampaignEvents.Instance._onTroopRecruitedEvent.Invoke(recruiterHero, recruitmentSettlement, recruitmentSource, troop, amount);
    }

    public static IMbEvent<Hero, Settlement, TroopRoster> OnTroopGivenToSettlementEvent
    {
      get
      {
        return (IMbEvent<Hero, Settlement, TroopRoster>) CampaignEvents.Instance._onTroopGivenToSettlementEvent;
      }
    }

    public override void OnTroopGivenToSettlement(
      Hero giverHero,
      Settlement recipientSettlement,
      TroopRoster roster)
    {
      CampaignEvents.Instance._onTroopGivenToSettlementEvent.Invoke(giverHero, recipientSettlement, roster);
    }

    public static IMbEvent<PartyBase, PartyBase, ItemRosterElement, int, Settlement> OnItemSoldEvent
    {
      get
      {
        return (IMbEvent<PartyBase, PartyBase, ItemRosterElement, int, Settlement>) CampaignEvents.Instance._onItemSoldEvent;
      }
    }

    public override void OnItemSold(
      PartyBase receiverParty,
      PartyBase payerParty,
      ItemRosterElement itemRosterElement,
      int number,
      Settlement currentSettlement)
    {
      CampaignEvents.Instance._onItemSoldEvent.Invoke(receiverParty, payerParty, itemRosterElement, number, currentSettlement);
    }

    public static IMbEvent<MobileParty, Town, List<(EquipmentElement, int)>> OnCaravanTransactionCompletedEvent
    {
      get
      {
        return (IMbEvent<MobileParty, Town, List<(EquipmentElement, int)>>) CampaignEvents.Instance._onCaravanTransactionCompletedEvent;
      }
    }

    public override void OnCaravanTransactionCompleted(
      MobileParty caravanParty,
      Town town,
      List<(EquipmentElement, int)> itemRosterElements)
    {
      CampaignEvents.Instance._onCaravanTransactionCompletedEvent.Invoke(caravanParty, town, itemRosterElements);
    }

    public static IMbEvent<PartyBase, PartyBase, TroopRoster> OnPrisonerSoldEvent
    {
      get
      {
        return (IMbEvent<PartyBase, PartyBase, TroopRoster>) CampaignEvents.Instance._onPrisonerSoldEvent;
      }
    }

    public override void OnPrisonerSold(
      PartyBase sellerParty,
      PartyBase buyerParty,
      TroopRoster prisoners)
    {
      CampaignEvents.Instance._onPrisonerSoldEvent.Invoke(sellerParty, buyerParty, prisoners);
    }

    public static IMbEvent<MobileParty> OnPartyDisbandStartedEvent
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._onPartyDisbandStartedEvent;
    }

    public override void OnPartyDisbandStarted(MobileParty disbandParty)
    {
      CampaignEvents.Instance._onPartyDisbandStartedEvent.Invoke(disbandParty);
    }

    public static IMbEvent<MobileParty, Settlement> OnPartyDisbandedEvent
    {
      get => (IMbEvent<MobileParty, Settlement>) CampaignEvents.Instance._onPartyDisbandedEvent;
    }

    public override void OnPartyDisbanded(MobileParty disbandParty, Settlement relatedSettlement)
    {
      CampaignEvents.Instance._onPartyDisbandedEvent.Invoke(disbandParty, relatedSettlement);
    }

    public static IMbEvent<MobileParty> OnPartyDisbandCanceledEvent
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._onPartyDisbandCanceledEvent;
    }

    public override void OnPartyDisbandCanceled(MobileParty disbandParty)
    {
      CampaignEvents.Instance._onPartyDisbandCanceledEvent.Invoke(disbandParty);
    }

    public static IMbEvent<PartyBase, PartyBase> OnHideoutSpottedEvent
    {
      get => (IMbEvent<PartyBase, PartyBase>) CampaignEvents.Instance._hideoutSpottedEvent;
    }

    public override void OnHideoutSpotted(PartyBase party, PartyBase hideoutParty)
    {
      CampaignEvents.Instance._hideoutSpottedEvent.Invoke(party, hideoutParty);
    }

    public static IMbEvent<Settlement> OnHideoutDeactivatedEvent
    {
      get => (IMbEvent<Settlement>) CampaignEvents.Instance._hideoutDeactivatedEvent;
    }

    public override void OnHideoutDeactivated(Settlement hideout)
    {
      CampaignEvents.Instance._hideoutDeactivatedEvent.Invoke(hideout);
    }

    public static IMbEvent<Hero, Hero, float> OnHeroSharedFoodWithAnotherHeroEvent
    {
      get
      {
        return (IMbEvent<Hero, Hero, float>) CampaignEvents.Instance._heroSharedFoodWithAnotherHeroEvent;
      }
    }

    public override void OnHeroSharedFoodWithAnother(
      Hero supporterHero,
      Hero supportedHero,
      float influence)
    {
      CampaignEvents.Instance._heroSharedFoodWithAnotherHeroEvent.Invoke(supporterHero, supportedHero, influence);
    }

    public static IMbEvent<List<(ItemRosterElement, int)>, List<(ItemRosterElement, int)>, bool> PlayerInventoryExchangeEvent
    {
      get
      {
        return (IMbEvent<List<(ItemRosterElement, int)>, List<(ItemRosterElement, int)>, bool>) CampaignEvents.Instance._playerInventoryExchangeEvent;
      }
    }

    public override void OnPlayerInventoryExchange(
      List<(ItemRosterElement, int)> purchasedItems,
      List<(ItemRosterElement, int)> soldItems,
      bool isTrading)
    {
      CampaignEvents.Instance._playerInventoryExchangeEvent.Invoke(purchasedItems, soldItems, isTrading);
    }

    public static IMbEvent<ItemRoster> OnItemsDiscardedByPlayerEvent
    {
      get => (IMbEvent<ItemRoster>) CampaignEvents.Instance._onItemsDiscardedByPlayerEvent;
    }

    public override void OnItemsDiscardedByPlayer(ItemRoster discardedItems)
    {
      CampaignEvents.Instance._onItemsDiscardedByPlayerEvent.Invoke(discardedItems);
    }

    public static IMbEvent<Tuple<PersuasionOptionArgs, PersuasionOptionResult>> PersuasionProgressCommittedEvent
    {
      get
      {
        return (IMbEvent<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>) CampaignEvents.Instance._persuasionProgressCommittedEvent;
      }
    }

    public override void OnPersuasionProgressCommitted(
      Tuple<PersuasionOptionArgs, PersuasionOptionResult> progress)
    {
      CampaignEvents.Instance._persuasionProgressCommittedEvent.Invoke(progress);
    }

    public static IMbEvent<QuestBase, QuestBase.QuestCompleteDetails> OnQuestCompletedEvent
    {
      get
      {
        return (IMbEvent<QuestBase, QuestBase.QuestCompleteDetails>) CampaignEvents.Instance._onQuestCompletedEvent;
      }
    }

    public override void OnQuestCompleted(QuestBase quest, QuestBase.QuestCompleteDetails detail)
    {
      CampaignEvents.Instance._onQuestCompletedEvent.Invoke(quest, detail);
    }

    public static IMbEvent<QuestBase> OnQuestStartedEvent
    {
      get => (IMbEvent<QuestBase>) CampaignEvents.Instance._onQuestStartedEvent;
    }

    public override void OnQuestStarted(QuestBase quest)
    {
      CampaignEvents.Instance._onQuestStartedEvent.Invoke(quest);
    }

    public static IMbEvent<ItemObject, Settlement, int> OnItemProducedEvent
    {
      get => (IMbEvent<ItemObject, Settlement, int>) CampaignEvents.Instance._itemProducedEvent;
    }

    public override void OnItemProduced(ItemObject itemObject, Settlement settlement, int count)
    {
      CampaignEvents.Instance._itemProducedEvent.Invoke(itemObject, settlement, count);
    }

    public static IMbEvent<ItemObject, Settlement, int> OnItemConsumedEvent
    {
      get => (IMbEvent<ItemObject, Settlement, int>) CampaignEvents.Instance._itemConsumedEvent;
    }

    public override void OnItemConsumed(ItemObject itemObject, Settlement settlement, int count)
    {
      CampaignEvents.Instance._itemConsumedEvent.Invoke(itemObject, settlement, count);
    }

    public static IMbEvent<MobileParty> OnPartyConsumedFoodEvent
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._onPartyConsumedFoodEvent;
    }

    public override void OnPartyConsumedFood(MobileParty party)
    {
      CampaignEvents.Instance._onPartyConsumedFoodEvent.Invoke(party);
    }

    public static IMbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool> OnBeforeMainCharacterDiedEvent
    {
      get
      {
        return (IMbEvent<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>) CampaignEvents.Instance._onBeforeMainCharacterDiedEvent;
      }
    }

    public override void OnBeforeMainCharacterDied(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      CampaignEvents.Instance._onBeforeMainCharacterDiedEvent.Invoke(victim, killer, detail, showNotification);
    }

    public static IMbEvent<IssueBase> OnNewIssueCreatedEvent
    {
      get => (IMbEvent<IssueBase>) CampaignEvents.Instance._onNewIssueCreatedEvent;
    }

    public override void OnNewIssueCreated(IssueBase issue)
    {
      CampaignEvents.Instance._onNewIssueCreatedEvent.Invoke(issue);
    }

    public static IMbEvent<IssueBase, Hero> OnIssueOwnerChangedEvent
    {
      get => (IMbEvent<IssueBase, Hero>) CampaignEvents.Instance._onIssueOwnerChangedEvent;
    }

    public override void OnIssueOwnerChanged(IssueBase issue, Hero oldOwner)
    {
      CampaignEvents.Instance._onIssueOwnerChangedEvent.Invoke(issue, oldOwner);
    }

    public override void OnGameOver() => CampaignEvents.Instance._onGameOverEvent.Invoke();

    public static IMbEvent OnGameOverEvent => (IMbEvent) CampaignEvents.Instance._onGameOverEvent;

    public static IMbEvent<Settlement, MobileParty, bool, MapEvent.BattleTypes> SiegeCompletedEvent
    {
      get
      {
        return (IMbEvent<Settlement, MobileParty, bool, MapEvent.BattleTypes>) CampaignEvents.Instance._siegeCompletedEvent;
      }
    }

    public override void SiegeCompleted(
      Settlement siegeSettlement,
      MobileParty attackerParty,
      bool isWin,
      MapEvent.BattleTypes battleType)
    {
      CampaignEvents.Instance._siegeCompletedEvent.Invoke(siegeSettlement, attackerParty, isWin, battleType);
    }

    public static IMbEvent<SiegeEvent, BattleSideEnum, SiegeEngineType> SiegeEngineBuiltEvent
    {
      get
      {
        return (IMbEvent<SiegeEvent, BattleSideEnum, SiegeEngineType>) CampaignEvents.Instance._siegeEngineBuiltEvent;
      }
    }

    public override void SiegeEngineBuilt(
      SiegeEvent siegeEvent,
      BattleSideEnum side,
      SiegeEngineType siegeEngineType)
    {
      CampaignEvents.Instance._siegeEngineBuiltEvent.Invoke(siegeEvent, side, siegeEngineType);
    }

    public static IMbEvent<BattleSideEnum, RaidEventComponent> RaidCompletedEvent
    {
      get
      {
        return (IMbEvent<BattleSideEnum, RaidEventComponent>) CampaignEvents.Instance._raidCompletedEvent;
      }
    }

    public override void RaidCompleted(BattleSideEnum winnerSide, RaidEventComponent raidEvent)
    {
      CampaignEvents.Instance._raidCompletedEvent.Invoke(winnerSide, raidEvent);
    }

    public static IMbEvent<BattleSideEnum, ForceVolunteersEventComponent> ForceVolunteersCompletedEvent
    {
      get
      {
        return (IMbEvent<BattleSideEnum, ForceVolunteersEventComponent>) CampaignEvents.Instance._forceVolunteersCompletedEvent;
      }
    }

    public override void ForceVolunteersCompleted(
      BattleSideEnum winnerSide,
      ForceVolunteersEventComponent forceVolunteersEvent)
    {
      CampaignEvents.Instance._forceVolunteersCompletedEvent.Invoke(winnerSide, forceVolunteersEvent);
    }

    public static IMbEvent<BattleSideEnum, ForceSuppliesEventComponent> ForceSuppliesCompletedEvent
    {
      get
      {
        return (IMbEvent<BattleSideEnum, ForceSuppliesEventComponent>) CampaignEvents.Instance._forceSuppliesCompletedEvent;
      }
    }

    public override void ForceSuppliesCompleted(
      BattleSideEnum winnerSide,
      ForceSuppliesEventComponent forceSuppliesEvent)
    {
      CampaignEvents.Instance._forceSuppliesCompletedEvent.Invoke(winnerSide, forceSuppliesEvent);
    }

    public static MbEvent<BattleSideEnum, HideoutEventComponent> OnHideoutBattleCompletedEvent
    {
      get => CampaignEvents.Instance._hideoutBattleCompletedEvent;
    }

    public override void OnHideoutBattleCompleted(
      BattleSideEnum winnerSide,
      HideoutEventComponent hideoutEventComponent)
    {
      CampaignEvents.Instance._hideoutBattleCompletedEvent.Invoke(winnerSide, hideoutEventComponent);
    }

    public static IMbEvent<Clan> OnClanDestroyedEvent
    {
      get => (IMbEvent<Clan>) CampaignEvents.Instance._onClanDestroyedEvent;
    }

    public override void OnClanDestroyed(Clan destroyedClan)
    {
      CampaignEvents.Instance._onClanDestroyedEvent.Invoke(destroyedClan);
    }

    public static IMbEvent<ItemObject, ItemModifier, bool> OnNewItemCraftedEvent
    {
      get
      {
        return (IMbEvent<ItemObject, ItemModifier, bool>) CampaignEvents.Instance._onNewItemCraftedEvent;
      }
    }

    public override void OnNewItemCrafted(
      ItemObject itemObject,
      ItemModifier overriddenItemModifier,
      bool isCraftingOrderItem)
    {
      CampaignEvents.Instance._onNewItemCraftedEvent.Invoke(itemObject, overriddenItemModifier, isCraftingOrderItem);
    }

    public static IMbEvent<CraftingPiece> CraftingPartUnlockedEvent
    {
      get => (IMbEvent<CraftingPiece>) CampaignEvents.Instance._craftingPartUnlockedEvent;
    }

    public override void CraftingPartUnlocked(CraftingPiece craftingPiece)
    {
      CampaignEvents.Instance._craftingPartUnlockedEvent.Invoke(craftingPiece);
    }

    public static IMbEvent<Workshop> WorkshopInitializedEvent
    {
      get => (IMbEvent<Workshop>) CampaignEvents.Instance._onWorkshopInitializedEvent;
    }

    public override void OnWorkshopInitialized(Workshop workshop)
    {
      CampaignEvents.Instance._onWorkshopInitializedEvent.Invoke(workshop);
    }

    public override void OnWorkshopOwnerChanged(Workshop workshop, Hero oldOwner)
    {
      CampaignEvents.Instance._onWorkshopOwnerChangedEvent.Invoke(workshop, oldOwner);
    }

    public static IMbEvent<Workshop, Hero> WorkshopOwnerChangedEvent
    {
      get => (IMbEvent<Workshop, Hero>) CampaignEvents.Instance._onWorkshopOwnerChangedEvent;
    }

    public static IMbEvent<Workshop> WorkshopTypeChangedEvent
    {
      get => (IMbEvent<Workshop>) CampaignEvents.Instance._onWorkshopTypeChangedEvent;
    }

    public override void OnWorkshopTypeChanged(Workshop workshop)
    {
      CampaignEvents.Instance._onWorkshopTypeChangedEvent.Invoke(workshop);
    }

    public static IMbEvent OnBeforeSaveEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._onBeforeSaveEvent;
    }

    public override void OnBeforeSave() => CampaignEvents.Instance._onBeforeSaveEvent.Invoke();

    public static IMbEvent OnSaveStartedEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._onSaveStartedEvent;
    }

    public override void OnSaveStarted() => CampaignEvents.Instance._onSaveStartedEvent.Invoke();

    public static IMbEvent<bool, string> OnSaveOverEvent
    {
      get => (IMbEvent<bool, string>) CampaignEvents.Instance._onSaveOverEvent;
    }

    public override void OnSaveOver(bool isSuccessful, string saveName)
    {
      CampaignEvents.Instance._onSaveOverEvent.Invoke(isSuccessful, saveName);
    }

    public static IMbEvent<FlattenedTroopRoster> OnPrisonerTakenEvent
    {
      get => (IMbEvent<FlattenedTroopRoster>) CampaignEvents.Instance._onPrisonerTakenEvent;
    }

    public override void OnPrisonerTaken(FlattenedTroopRoster roster)
    {
      CampaignEvents.Instance._onPrisonerTakenEvent.Invoke(roster);
    }

    public static IMbEvent<FlattenedTroopRoster> OnPrisonerReleasedEvent
    {
      get => (IMbEvent<FlattenedTroopRoster>) CampaignEvents.Instance._onPrisonerReleasedEvent;
    }

    public override void OnPrisonerReleased(FlattenedTroopRoster roster)
    {
      CampaignEvents.Instance._onPrisonerReleasedEvent.Invoke(roster);
    }

    public static IMbEvent<FlattenedTroopRoster> OnMainPartyPrisonerRecruitedEvent
    {
      get
      {
        return (IMbEvent<FlattenedTroopRoster>) CampaignEvents.Instance._onMainPartyPrisonerRecruitedEvent;
      }
    }

    public override void OnMainPartyPrisonerRecruited(FlattenedTroopRoster roster)
    {
      CampaignEvents.Instance._onMainPartyPrisonerRecruitedEvent.Invoke(roster);
    }

    public static IMbEvent<MobileParty, FlattenedTroopRoster, Settlement> OnPrisonerDonatedToSettlementEvent
    {
      get
      {
        return (IMbEvent<MobileParty, FlattenedTroopRoster, Settlement>) CampaignEvents.Instance._onPrisonerDonatedToSettlementEvent;
      }
    }

    public override void OnPrisonerDonatedToSettlement(
      MobileParty donatingParty,
      FlattenedTroopRoster donatedPrisoners,
      Settlement donatedSettlement)
    {
      CampaignEvents.Instance._onPrisonerDonatedToSettlementEvent.Invoke(donatingParty, donatedPrisoners, donatedSettlement);
    }

    public static IMbEvent<Hero, EquipmentElement> OnEquipmentSmeltedByHeroEvent
    {
      get => (IMbEvent<Hero, EquipmentElement>) CampaignEvents.Instance._onEquipmentSmeltedByHero;
    }

    public override void OnEquipmentSmeltedByHero(
      Hero hero,
      EquipmentElement smeltedEquipmentElement)
    {
      CampaignEvents.Instance._onEquipmentSmeltedByHero.Invoke(hero, smeltedEquipmentElement);
    }

    public static IMbEvent<int> OnPlayerTradeProfitEvent
    {
      get => (IMbEvent<int>) CampaignEvents.Instance._onPlayerTradeProfit;
    }

    public override void OnPlayerTradeProfit(int profit)
    {
      CampaignEvents.Instance._onPlayerTradeProfit.Invoke(profit);
    }

    public static IMbEvent<Hero, Clan> OnHeroChangedClanEvent
    {
      get => (IMbEvent<Hero, Clan>) CampaignEvents.Instance._onHeroChangedClan;
    }

    public override void OnHeroChangedClan(Hero hero, Clan oldClan)
    {
      CampaignEvents.Instance._onHeroChangedClan.Invoke(hero, oldClan);
    }

    public static IMbEvent<Hero, HeroGetsBusyReasons> OnHeroGetsBusyEvent
    {
      get => (IMbEvent<Hero, HeroGetsBusyReasons>) CampaignEvents.Instance._onHeroGetsBusy;
    }

    public override void OnHeroGetsBusy(Hero hero, HeroGetsBusyReasons heroGetsBusyReason)
    {
      CampaignEvents.Instance._onHeroGetsBusy.Invoke(hero, heroGetsBusyReason);
    }

    public static IMbEvent<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>, ItemRoster, MBList<TroopRosterElement>, float> CollectLootsEvent
    {
      get
      {
        return (IMbEvent<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>, ItemRoster, MBList<TroopRosterElement>, float>) CampaignEvents.Instance._collectLootsEvent;
      }
    }

    public override void CollectLoots(
      MapEvent mapEvent,
      PartyBase party,
      Dictionary<PartyBase, ItemRoster> loot,
      ItemRoster rosterToReceiveLoot,
      MBList<TroopRosterElement> lootedCasualties,
      float lootAmount)
    {
      CampaignEvents.Instance._collectLootsEvent.Invoke(mapEvent, party, loot, rosterToReceiveLoot, lootedCasualties, lootAmount);
    }

    public static IMbEvent<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>> DistributeLootToPartyEvent
    {
      get
      {
        return (IMbEvent<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>>) CampaignEvents.Instance._distributeLootToPartyEvent;
      }
    }

    public override void OnLootDistributedToParty(
      MapEvent mapEvent,
      PartyBase party,
      Dictionary<PartyBase, ItemRoster> loot)
    {
      CampaignEvents.Instance._distributeLootToPartyEvent.Invoke(mapEvent, party, loot);
    }

    public static IMbEvent<Hero, Settlement, MobileParty, TeleportHeroAction.TeleportationDetail> OnHeroTeleportationRequestedEvent
    {
      get
      {
        return (IMbEvent<Hero, Settlement, MobileParty, TeleportHeroAction.TeleportationDetail>) CampaignEvents.Instance._onHeroTeleportationRequestedEvent;
      }
    }

    public override void OnHeroTeleportationRequested(
      Hero hero,
      Settlement targetSettlement,
      MobileParty targetParty,
      TeleportHeroAction.TeleportationDetail detail)
    {
      CampaignEvents.Instance._onHeroTeleportationRequestedEvent.Invoke(hero, targetSettlement, targetParty, detail);
    }

    public static IMbEvent<MobileParty> OnPartyLeaderChangeOfferCanceledEvent
    {
      get => (IMbEvent<MobileParty>) CampaignEvents.Instance._onPartyLeaderChangeOfferCanceledEvent;
    }

    public override void OnPartyLeaderChangeOfferCanceled(MobileParty party)
    {
      CampaignEvents.Instance._onPartyLeaderChangeOfferCanceledEvent.Invoke(party);
    }

    public static IMbEvent<Clan, float> OnClanInfluenceChangedEvent
    {
      get => (IMbEvent<Clan, float>) CampaignEvents.Instance._onClanInfluenceChangedEvent;
    }

    public override void OnClanInfluenceChanged(Clan clan, float change)
    {
      CampaignEvents.Instance._onClanInfluenceChangedEvent.Invoke(clan, change);
    }

    public static IMbEvent<CharacterObject> OnPlayerPartyKnockedOrKilledTroopEvent
    {
      get
      {
        return (IMbEvent<CharacterObject>) CampaignEvents.Instance._onPlayerPartyKnockedOrKilledTroopEvent;
      }
    }

    public override void OnPlayerPartyKnockedOrKilledTroop(CharacterObject strikedTroop)
    {
      CampaignEvents.Instance._onPlayerPartyKnockedOrKilledTroopEvent.Invoke(strikedTroop);
    }

    public static IMbEvent<DefaultClanFinanceModel.AssetIncomeType, int> OnPlayerEarnedGoldFromAssetEvent
    {
      get
      {
        return (IMbEvent<DefaultClanFinanceModel.AssetIncomeType, int>) CampaignEvents.Instance._onPlayerEarnedGoldFromAssetEvent;
      }
    }

    public override void OnPlayerEarnedGoldFromAsset(
      DefaultClanFinanceModel.AssetIncomeType incomeType,
      int incomeAmount)
    {
      CampaignEvents.Instance._onPlayerEarnedGoldFromAssetEvent.Invoke(incomeType, incomeAmount);
    }

    public static IMbEvent OnMainPartyStarvingEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._onMainPartyStarving;
    }

    public override void OnMainPartyStarving()
    {
      CampaignEvents.Instance._onMainPartyStarving.Invoke();
    }

    public static IMbEvent<Town, bool> OnPlayerJoinedTournamentEvent
    {
      get => (IMbEvent<Town, bool>) CampaignEvents.Instance._onPlayerJoinedTournamentEvent;
    }

    public override void OnPlayerJoinedTournament(Town town, bool isParticipant)
    {
      CampaignEvents.Instance._onPlayerJoinedTournamentEvent.Invoke(town, isParticipant);
    }

    public static IMbEvent<Hero> OnHeroUnregisteredEvent
    {
      get => (IMbEvent<Hero>) CampaignEvents.Instance._onHeroUnregisteredEvent;
    }

    public override void OnHeroUnregistered(Hero hero)
    {
      CampaignEvents.Instance._onHeroUnregisteredEvent.Invoke(hero);
    }

    public static IMbEvent OnConfigChangedEvent
    {
      get => (IMbEvent) CampaignEvents.Instance._onConfigChanged;
    }

    public override void OnConfigChanged() => CampaignEvents.Instance._onConfigChanged.Invoke();

    public static IMbEvent<Town, CraftingOrder, ItemObject, Hero> OnCraftingOrderCompletedEvent
    {
      get
      {
        return (IMbEvent<Town, CraftingOrder, ItemObject, Hero>) CampaignEvents.Instance._onCraftingOrderCompleted;
      }
    }

    public override void OnCraftingOrderCompleted(
      Town town,
      CraftingOrder craftingOrder,
      ItemObject craftedItem,
      Hero completerHero)
    {
      CampaignEvents.Instance._onCraftingOrderCompleted.Invoke(town, craftingOrder, craftedItem, completerHero);
    }

    public static IMbEvent<Hero, TaleWorlds.Core.Crafting.RefiningFormula> OnItemsRefinedEvent
    {
      get => (IMbEvent<Hero, TaleWorlds.Core.Crafting.RefiningFormula>) CampaignEvents.Instance._onItemsRefined;
    }

    public override void OnItemsRefined(Hero hero, TaleWorlds.Core.Crafting.RefiningFormula refineFormula)
    {
      CampaignEvents.Instance._onItemsRefined.Invoke(hero, refineFormula);
    }

    public static ReferenceIMBEvent<Hero, bool> CanHeroLeadPartyEvent
    {
      get => (ReferenceIMBEvent<Hero, bool>) CampaignEvents.Instance._canHeroLeadPartyEvent;
    }

    public override void CanHeroLeadParty(Hero hero, ref bool result)
    {
      CampaignEvents.Instance._canHeroLeadPartyEvent.Invoke(hero, ref result);
    }

    public static ReferenceIMBEvent<Hero, bool> CanHeroMarryEvent
    {
      get => (ReferenceIMBEvent<Hero, bool>) CampaignEvents.Instance._canMarryEvent;
    }

    public override void CanHeroMarry(Hero hero, ref bool result)
    {
      CampaignEvents.Instance._canMarryEvent.Invoke(hero, ref result);
    }

    public static ReferenceIMBEvent<Hero, bool> CanHeroEquipmentBeChangedEvent
    {
      get
      {
        return (ReferenceIMBEvent<Hero, bool>) CampaignEvents.Instance._canHeroEquipmentBeChangedEvent;
      }
    }

    public override void CanHeroEquipmentBeChanged(Hero hero, ref bool result)
    {
      CampaignEvents.Instance._canHeroEquipmentBeChangedEvent.Invoke(hero, ref result);
    }

    public static ReferenceIMBEvent<Hero, bool> CanBeGovernorOrHavePartyRoleEvent
    {
      get
      {
        return (ReferenceIMBEvent<Hero, bool>) CampaignEvents.Instance._canBeGovernorOrHavePartyRoleEvent;
      }
    }

    public override void CanBeGovernorOrHavePartyRole(Hero hero, ref bool result)
    {
      CampaignEvents.Instance._canBeGovernorOrHavePartyRoleEvent.Invoke(hero, ref result);
    }

    public static ReferenceIMBEvent<Hero, KillCharacterAction.KillCharacterActionDetail, bool> CanHeroDieEvent
    {
      get
      {
        return (ReferenceIMBEvent<Hero, KillCharacterAction.KillCharacterActionDetail, bool>) CampaignEvents.Instance._canHeroDieEvent;
      }
    }

    public override void CanHeroDie(
      Hero hero,
      KillCharacterAction.KillCharacterActionDetail causeOfDeath,
      ref bool result)
    {
      CampaignEvents.Instance._canHeroDieEvent.Invoke(hero, causeOfDeath, ref result);
    }

    public static ReferenceIMBEvent<Hero, bool> CanHeroBecomePrisonerEvent
    {
      get => (ReferenceIMBEvent<Hero, bool>) CampaignEvents.Instance._canHeroBecomePrisonerEvent;
    }

    public override void CanHeroBecomePrisoner(Hero hero, ref bool result)
    {
      CampaignEvents.Instance._canHeroBecomePrisonerEvent.Invoke(hero, ref result);
    }

    public static ReferenceIMBEvent<Hero, bool> CanMoveToSettlementEvent
    {
      get => (ReferenceIMBEvent<Hero, bool>) CampaignEvents.Instance._canMoveToSettlementEvent;
    }

    public override void CanMoveToSettlement(Hero hero, ref bool result)
    {
      CampaignEvents.Instance._canMoveToSettlementEvent.Invoke(hero, ref result);
    }

    public static ReferenceIMBEvent<Hero, bool> CanHaveQuestsOrIssuesEvent
    {
      get => (ReferenceIMBEvent<Hero, bool>) CampaignEvents.Instance._canHaveQuestsOrIssues;
    }

    public override void CanHaveQuestsOrIssues(Hero hero, ref bool result)
    {
      CampaignEvents.Instance._canHaveQuestsOrIssues.Invoke(hero, ref result);
    }

    public static IMbEvent<IFaction> OnMapEventContinuityNeedsUpdateEvent
    {
      get => (IMbEvent<IFaction>) CampaignEvents.Instance._onMapEventContinuityNeedsUpdate;
    }

    public override void OnMapEventContinuityNeedsUpdate(IFaction faction)
    {
      CampaignEvents.Instance._onMapEventContinuityNeedsUpdate.Invoke(faction);
    }
  }
}
