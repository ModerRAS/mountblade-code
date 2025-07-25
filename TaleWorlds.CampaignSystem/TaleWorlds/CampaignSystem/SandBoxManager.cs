// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SandBoxManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.CampaignBehaviors.AiBehaviors;
using TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors;
using TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class SandBoxManager : GameHandler
  {
    public ISandBoxMissionManager SandBoxMissionManager { get; set; }

    public IAgentBehaviorManager AgentBehaviorManager { get; set; }

    public IModuleManager ModuleManager { get; set; }

    public ISaveManager SandBoxSaveManager { get; set; }

    public static SandBoxManager Instance => Game.Current.GetGameHandler<SandBoxManager>();

    public CampaignGameStarter GameStarter { get; private set; }

    public void Initialize(CampaignGameStarter gameStarter)
    {
      this.GameStarter = gameStarter;
      gameStarter.AddBehavior((CampaignBehaviorBase) new PartyUpgraderCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new EncounterGameMenuBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PlayerCaptivityCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new BackstoryCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new TradeCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new BanditsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CharacterRelationCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new DesertionCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new FoodConsumptionBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new FindingItemOnMapBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new BuildingsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new ItemConsumptionBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new GarrisonTroopsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CaravansCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new GovernorCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new HideoutCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PartiesBuyFoodCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PartiesBuyHorseCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PoliticalStagnationAndBorderIncidentCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PrisonerReleaseCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PrisonerCaptureCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PrisonerRecruitCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new RomanceCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LordDefectionCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PartiesSellPrisonerCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PartiesSellLootCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new SettlementVariablesBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new MilitiasCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new SettlementClaimantCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new TradeRumorsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new NotablesCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LordConversationsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CompanionsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new RetrainOutlawPartyMembersBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new RecruitPrisonersCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new HeroSpawnCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new TournamentCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CraftingCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new MapTracksCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new HeroAgentSpawnCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CharacterDevelopmentCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new TradeSkillCampaingBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new TavernEmployeesCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new RecruitmentCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new VillageHostileActionCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PlayerTownVisitCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PrisonBreakCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new DynamicBodyCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new TownMerchantsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new OutlawClansCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new VillageTradeBoundCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new VillageGoodProductionCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new SiegeAftermathCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new NPCEquipmentsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new VillagerCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new VillageHealCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PlayerVariablesBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new MobilePartyTrainingBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new EducationCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new RansomOfferCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PeaceOfferCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new MarriageOfferCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new VassalAndMercenaryOfferCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnLeaveFactionBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnChangeRomanticStateBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnChangeSettlementOwnerBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnPlayerMeetLordBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnEndPlayerBattleBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnDefeatCharacterBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnCharacterKilledBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnChangeVillageStateBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnDestroyMobilePartyBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnMakePeaceBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnDeclareWarBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnKingdomDestroyedBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnClanDestroyedBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentOnClanLeaderChangedBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentPregnancyBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentChildbirthBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CommentCharacterBornBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new DefaultLogsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new JournalLogsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new ViewDataTrackerCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new AiArmyMemberBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new AiMilitaryBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new AiPatrollingBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new AiEngagePartyBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new AiBanditPatrollingBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new AiVisitSettlementBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new AiPartyThinkBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new DiplomaticBartersBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new SetPrisonerFreeBarterBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new FiefBarterBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new ItemBarterBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new GoldBarterBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new TransferPrisonerBarterBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CompanionGrievanceBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PlayerTrackCompanionBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new RebellionsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new SallyOutsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CrimeCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PlayerArmyWaitBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new ClanVariablesCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new FactionDiscontinuationCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new AgingCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new BattleCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new WorkshopsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PregnancyCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new InitialChildGenerationCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new NotablePowerManagementBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PerkActivationHandlerCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new TownSecurityCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new HeroKnownInformationCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new DisbandPartyCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PartyHealCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CampaignBattleRecoveryBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CampaignWarManagerBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new KingdomDecisionProposalBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PartyRolesCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new EmissarySystemCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new SiegeEventCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new IssuesCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new InfluenceGainCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new BannerCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new TeleportationCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new ArmyNeedsSuppliesIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new ArtisanCantSellProductsAtAFairPriceIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new ArtisanOverpricedGoodsIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CapturedByBountyHuntersIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new CaravanAmbushIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new EscortMerchantCaravanIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new ExtortionByDesertersIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new GangLeaderNeedsToOffloadStolenGoodsIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new GangLeaderNeedsWeaponsIssueQuestBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new RevenueFarmingIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new HeadmanNeedsGrainIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new HeadmanNeedsToDeliverAHerdIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new HeadmanVillageNeedsDraughtAnimalsIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LadysKnightOutIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LandLordCompanyOfTroubleIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LandLordTheArtOfTheTradeIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LandlordNeedsAccessToVillageCommonsIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LandLordNeedsManualLaborersIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LandlordTrainingForRetainersIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LordNeedsGarrisonTroopsIssueQuestBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new TheConquestOfSettlementIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new VillageNeedsCraftingMaterialsIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new SmugglersIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LordNeedsHorsesIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LordsNeedsTutorIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LordWantsRivalCapturedIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new MerchantArmyOfPoachersIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new MerchantNeedsHelpWithOutlawsIssueQuestBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new NearbyBanditBaseIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new RaidAnEnemyTerritoryIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new ScoutEnemyGarrisonsIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new VillageNeedsToolsIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new GangLeaderNeedsRecruitsIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new GangLeaderNeedsSpecialWeaponsIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new LesserNobleRevoltIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new BettingFraudIssueBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new DiscardItemsCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new OrderOfBattleCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new DisorganizedStateCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PerkResetCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new SiegeAmbushCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new MapWeatherCampaignBehavior());
      gameStarter.AddBehavior((CampaignBehaviorBase) new PartyDiplomaticHandlerCampaignBehavior());
      gameStarter.AddModel((GameModel) new DefaultCharacterDevelopmentModel());
      gameStarter.AddModel((GameModel) new DefaultValuationModel());
      gameStarter.AddModel((GameModel) new DefaultItemDiscardModel());
      gameStarter.AddModel((GameModel) new DefaultMapVisibilityModel());
      gameStarter.AddModel((GameModel) new DefaultInformationRestrictionModel());
      gameStarter.AddModel((GameModel) new DefaultMapDistanceModel());
      gameStarter.AddModel((GameModel) new DefaultPartyHealingModel());
      gameStarter.AddModel((GameModel) new DefaultPartyTrainingModel());
      gameStarter.AddModel((GameModel) new DefaultPartyTradeModel());
      gameStarter.AddModel((GameModel) new DefaultRansomValueCalculationModel());
      gameStarter.AddModel((GameModel) new DefaultRaidModel());
      gameStarter.AddModel((GameModel) new DefaultCombatSimulationModel());
      gameStarter.AddModel((GameModel) new DefaultCombatXpModel());
      gameStarter.AddModel((GameModel) new DefaultGenericXpModel());
      gameStarter.AddModel((GameModel) new DefaultSmithingModel());
      gameStarter.AddModel((GameModel) new DefaultPartySpeedCalculatingModel());
      gameStarter.AddModel((GameModel) new DefaultPartyImpairmentModel());
      gameStarter.AddModel((GameModel) new DefaultCharacterStatsModel());
      gameStarter.AddModel((GameModel) new DefaultEncounterModel());
      gameStarter.AddModel((GameModel) new DefaultMobilePartyFoodConsumptionModel());
      gameStarter.AddModel((GameModel) new DefaultPartyFoodBuyingModel());
      gameStarter.AddModel((GameModel) new DefaultPartyMoraleModel());
      gameStarter.AddModel((GameModel) new DefaultDiplomacyModel());
      gameStarter.AddModel((GameModel) new DefaultKingdomCreationModel());
      gameStarter.AddModel((GameModel) new DefaultVillageProductionCalculatorModel());
      gameStarter.AddModel((GameModel) new DefaultVolunteerModel());
      gameStarter.AddModel((GameModel) new DefaultArmyManagementCalculationModel());
      gameStarter.AddModel((GameModel) new DefaultBanditDensityModel());
      gameStarter.AddModel((GameModel) new DefaultNotableSpawnModel());
      gameStarter.AddModel((GameModel) new DefaultEncounterGameMenuModel());
      gameStarter.AddModel((GameModel) new DefaultBattleRewardModel());
      gameStarter.AddModel((GameModel) new DefaultRomanceModel());
      gameStarter.AddModel((GameModel) new DefaultMapTrackModel());
      gameStarter.AddModel((GameModel) new DefaultMapWeatherModel());
      gameStarter.AddModel((GameModel) new DefaultRidingModel());
      gameStarter.AddModel((GameModel) new DefaultTargetScoreCalculatingModel());
      gameStarter.AddModel((GameModel) new DefaultCrimeModel());
      gameStarter.AddModel((GameModel) new DefaultDisguiseDetectionModel());
      gameStarter.AddModel((GameModel) new DefaultBribeCalculationModel());
      gameStarter.AddModel((GameModel) new DefaultTroopSacrificeModel());
      gameStarter.AddModel((GameModel) new DefaultSettlementAccessModel());
      gameStarter.AddModel((GameModel) new DefaultKingdomDecisionPermissionModel());
      gameStarter.AddModel((GameModel) new DefaultEmissaryModel());
      gameStarter.AddModel((GameModel) new DefaultMilitaryPowerModel());
      gameStarter.AddModel((GameModel) new DefaultPartySizeLimitModel());
      gameStarter.AddModel((GameModel) new DefaultPartyWageModel());
      gameStarter.AddModel((GameModel) new DefaultPartyDesertionModel());
      gameStarter.AddModel((GameModel) new DefaultInventoryCapacityModel());
      gameStarter.AddModel((GameModel) new DefaultItemCategorySelector());
      gameStarter.AddModel((GameModel) new DefaultItemValueModel());
      gameStarter.AddModel((GameModel) new DefaultTradeItemPriceFactorModel());
      gameStarter.AddModel((GameModel) new DefaultSettlementValueModel());
      gameStarter.AddModel((GameModel) new DefaultSettlementMilitiaModel());
      gameStarter.AddModel((GameModel) new DefaultSettlementEconomyModel());
      gameStarter.AddModel((GameModel) new DefaultSettlementFoodModel());
      gameStarter.AddModel((GameModel) new DefaultSettlementLoyaltyModel());
      gameStarter.AddModel((GameModel) new DefaultSettlementSecurityModel());
      gameStarter.AddModel((GameModel) new DefaultSettlementProsperityModel());
      gameStarter.AddModel((GameModel) new DefaultSettlementGarrisonModel());
      gameStarter.AddModel((GameModel) new DefaultSettlementTaxModel());
      gameStarter.AddModel((GameModel) new DefaultBarterModel());
      gameStarter.AddModel((GameModel) new DefaultPersuasionModel());
      gameStarter.AddModel((GameModel) new DefaultClanTierModel());
      gameStarter.AddModel((GameModel) new DefaultMinorFactionsModel());
      gameStarter.AddModel((GameModel) new DefaultClanPoliticsModel());
      gameStarter.AddModel((GameModel) new DefaultVassalRewardsModel());
      gameStarter.AddModel((GameModel) new DefaultClanFinanceModel());
      gameStarter.AddModel((GameModel) new DefaultHeirSelectionCalculationModel());
      gameStarter.AddModel((GameModel) new DefaultHeroDeathProbabilityCalculationModel());
      gameStarter.AddModel((GameModel) new DefaultBuildingConstructionModel());
      gameStarter.AddModel((GameModel) new DefaultBuildingEffectModel());
      gameStarter.AddModel((GameModel) new DefaultWallHitPointCalculationModel());
      gameStarter.AddModel((GameModel) new DefaultMarriageModel());
      gameStarter.AddModel((GameModel) new DefaultAgeModel());
      gameStarter.AddModel((GameModel) new DefaultPlayerProgressionModel());
      gameStarter.AddModel((GameModel) new DefaultDailyTroopXpBonusModel());
      gameStarter.AddModel((GameModel) new DefaultPregnancyModel());
      gameStarter.AddModel((GameModel) new DefaultNotablePowerModel());
      gameStarter.AddModel((GameModel) new DefaultTournamentModel());
      gameStarter.AddModel((GameModel) new DefaultSiegeStrategyActionModel());
      gameStarter.AddModel((GameModel) new DefaultSiegeEventModel());
      gameStarter.AddModel((GameModel) new DefaultSiegeAftermathModel());
      gameStarter.AddModel((GameModel) new DefaultSiegeLordsHallFightModel());
      gameStarter.AddModel((GameModel) new DefaultCompanionHiringPriceCalculationModel());
      gameStarter.AddModel((GameModel) new DefaultBuildingScoreCalculationModel());
      gameStarter.AddModel((GameModel) new DefaultIssueModel());
      gameStarter.AddModel((GameModel) new DefaultPrisonerRecruitmentCalculationModel());
      gameStarter.AddModel((GameModel) new DefaultPartyTroopUpgradeModel());
      gameStarter.AddModel((GameModel) new DefaultTavernMercenaryTroopsModel());
      gameStarter.AddModel((GameModel) new DefaultWorkshopModel());
      gameStarter.AddModel((GameModel) new DefaultDifficultyModel());
      gameStarter.AddModel((GameModel) new DefaultLocationModel());
      gameStarter.AddModel((GameModel) new DefaultPrisonerDonationModel());
      gameStarter.AddModel((GameModel) new DefaultPrisonBreakModel());
      gameStarter.AddModel((GameModel) new DefaultBattleCaptainModel());
      gameStarter.AddModel((GameModel) new DefaultExecutionRelationModel());
      gameStarter.AddModel((GameModel) new DefaultBannerItemModel());
      gameStarter.AddModel((GameModel) new DefaultDelayedTeleportationModel());
      gameStarter.AddModel((GameModel) new DefaultTroopSupplierProbabilityModel());
      gameStarter.AddModel((GameModel) new DefaultCutsceneSelectionModel());
      gameStarter.AddModel((GameModel) new DefaultEquipmentSelectionModel());
      gameStarter.AddModel((GameModel) new DefaultAlleyModel());
      gameStarter.AddModel((GameModel) new DefaultVoiceOverModel());
    }

    public void OnCampaignStart(
      CampaignGameStarter gameInitializer,
      GameManagerBase gameManager,
      bool isSavedCampaign)
    {
      gameManager.RegisterSubModuleObjects(isSavedCampaign);
      gameManager.AfterRegisterSubModuleObjects(isSavedCampaign);
      if (!(Campaign.Current.GameMode == CampaignGameMode.Campaign & isSavedCampaign))
        return;
      MBObjectManager.Instance.RemoveTemporaryTypes();
    }

    public void InitializeSandboxXMLs(bool isSavedCampaign)
    {
      MBObjectManager.Instance.LoadXML("NPCCharacters");
      if (!isSavedCampaign)
        MBObjectManager.Instance.LoadXML("Heroes");
      if (Campaign.Current.GameMode == CampaignGameMode.Tutorial)
        MBObjectManager.Instance.LoadXML("MPCharacters");
      if (!isSavedCampaign)
      {
        MBObjectManager.Instance.LoadXML("Kingdoms");
        MBObjectManager.Instance.LoadXML("Factions");
      }
      MBObjectManager.Instance.LoadXML("WorkshopTypes");
      MBObjectManager.Instance.LoadXML("LocationComplexTemplates");
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign || Game.Current.IsEditModeOn)
        return;
      MBObjectManager.Instance.LoadXML("Settlements");
    }

    public void InitializeCharactersAfterLoad(bool isSavedCampaign)
    {
      if (!isSavedCampaign)
        return;
      foreach (Hero aliveHero in (List<Hero>) Campaign.Current.AliveHeroes)
      {
        if (!aliveHero.CharacterObject.IsOriginalCharacter)
          aliveHero.CharacterObject.InitializeHeroCharacterOnAfterLoad();
      }
      foreach (Hero deadOrDisabledHero in (List<Hero>) Campaign.Current.DeadOrDisabledHeroes)
      {
        if (!deadOrDisabledHero.CharacterObject.IsOriginalCharacter)
          deadOrDisabledHero.CharacterObject.InitializeHeroCharacterOnAfterLoad();
      }
      List<CharacterObject> characterObjectList = new List<CharacterObject>();
      foreach (CharacterObject objectType in (List<CharacterObject>) Campaign.Current.ObjectManager.GetObjectTypeList<CharacterObject>())
      {
        if (!objectType.IsReady && !objectType.IsOriginalCharacter)
        {
          if (objectType.HeroObject != null)
          {
            objectType.InitializeHeroCharacterOnAfterLoad();
          }
          else
          {
            Debug.FailedAssert("saved a characterobject but not its heroobject", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\SandBoxManager.cs", nameof (InitializeCharactersAfterLoad), 436);
            characterObjectList.Add(objectType);
          }
        }
      }
      foreach (MBObjectBase mbObjectBase in characterObjectList)
        Campaign.Current.ObjectManager.UnregisterObject(mbObjectBase);
    }

    protected override void OnTick(float dt)
    {
    }

    public override void OnBeforeSave()
    {
    }

    public override void OnAfterSave()
    {
    }
  }
}
