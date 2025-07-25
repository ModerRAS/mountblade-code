// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Campaign
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Encyclopedia;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ModuleManager;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;
using TaleWorlds.SaveSystem.Load;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class Campaign : GameType
  {
    public const float ConfigTimeMultiplier = 0.25f;
    private EntitySystem<CampaignEntityComponent> _campaignEntitySystem;
    public ITask CampaignLateAITickTask;
    [SaveableField(210)]
    private CampaignPeriodicEventManager _campaignPeriodicEventManager;
    [SaveableField(53)]
    private bool _isMainPartyWaiting;
    [SaveableField(344)]
    private string _newGameVersion;
    [SaveableField(78)]
    private MBList<string> _previouslyUsedModules;
    [SaveableField(81)]
    private MBList<string> _usedGameVersions;
    [SaveableField(77)]
    private Dictionary<CharacterObject, FormationClass> _playerFormationPreferences;
    [SaveableField(7)]
    private ICampaignBehaviorManager _campaignBehaviorManager;
    private CampaignTickCacheDataStore _tickData;
    [SaveableField(2)]
    public readonly CampaignOptions Options;
    public MBReadOnlyDictionary<CharacterObject, FormationClass> PlayerFormationPreferences;
    [SaveableField(13)]
    public ITournamentManager TournamentManager;
    public float MinSettlementX;
    public float MaxSettlementX;
    public float MinSettlementY;
    public float MaxSettlementY;
    [SaveableField(27)]
    public bool IsInitializedSinglePlayerReferences;
    private LocatorGrid<MobileParty> _mobilePartyLocator;
    private LocatorGrid<Settlement> _settlementLocator;
    private GameModels _gameModels;
    [SaveableField(31)]
    public CampaignTimeControlMode LastTimeControlMode = CampaignTimeControlMode.UnstoppablePlay;
    private IMapScene _mapSceneWrapper;
    public bool GameStarted;
    [SaveableField(44)]
    public PartyBase autoEnterTown;
    private Campaign.GameLoadingType _gameLoadingType;
    public ConversationContext CurrentConversationContext;
    [CachedData]
    private float _dt;
    private CampaignTimeControlMode _timeControlMode;
    private int _curSessionFrame;
    [SaveableField(30)]
    public int MainHeroIllDays = -1;
    private MBCampaignEvent _dailyTickEvent;
    private MBCampaignEvent _hourlyTickEvent;
    [CachedData]
    private int _lastNonZeroDtFrame;
    [SaveableField(84)]
    public List<Settlement> BusyHideouts = new List<Settlement>();
    private MBList<Town> _towns;
    private MBList<Town> _castles;
    private MBList<Village> _villages;
    private MBList<Hideout> _hideouts;
    private MBReadOnlyList<CharacterObject> _characters;
    private MBReadOnlyList<WorkshopType> _workshops;
    private MBReadOnlyList<ItemModifier> _itemModifiers;
    private MBReadOnlyList<Concept> _concepts;
    private MBReadOnlyList<ItemModifierGroup> _itemModifierGroups;
    [SaveableField(79)]
    private int _lastPartyIndex;
    [SaveableField(61)]
    private PartyBase _cameraFollowParty;
    [SaveableField(64)]
    private readonly LogEntryHistory _logEntryHistory = new LogEntryHistory();
    [SaveableField(65)]
    public KingdomManager KingdomManager;

    public static float MapDiagonal { get; private set; }

    public static float MapDiagonalSquared { get; private set; }

    public static float MaximumDistanceBetweenTwoSettlements { get; private set; }

    public static Vec2 MapMinimumPosition { get; private set; }

    public static Vec2 MapMaximumPosition { get; private set; }

    public static float MapMaximumHeight { get; private set; }

    public static float AverageDistanceBetweenTwoFortifications { get; private set; }

    [CachedData]
    public float AverageWage { get; private set; }

    public string NewGameVersion => this._newGameVersion;

    public MBReadOnlyList<string> PreviouslyUsedModules
    {
      get => (MBReadOnlyList<string>) this._previouslyUsedModules;
    }

    public MBReadOnlyList<string> UsedGameVersions
    {
      get => (MBReadOnlyList<string>) this._usedGameVersions;
    }

    [SaveableProperty(83)]
    public bool EnabledCheatsBefore { get; set; }

    [SaveableProperty(82)]
    public string PlatformID { get; private set; }

    internal CampaignEventDispatcher CampaignEventDispatcher { get; private set; }

    [SaveableProperty(80)]
    public string UniqueGameId { get; private set; }

    public SaveHandler SaveHandler { get; private set; }

    public override bool SupportsSaving => this.GameMode == CampaignGameMode.Campaign;

    [SaveableProperty(211)]
    public CampaignObjectManager CampaignObjectManager { get; private set; }

    public override bool IsDevelopment => this.GameMode == CampaignGameMode.Tutorial;

    [SaveableProperty(3)]
    public bool IsCraftingEnabled { get; set; } = true;

    [SaveableProperty(4)]
    public bool IsBannerEditorEnabled { get; set; } = true;

    [SaveableProperty(5)]
    public bool IsFaceGenEnabled { get; set; } = true;

    public ICampaignBehaviorManager CampaignBehaviorManager => this._campaignBehaviorManager;

    [SaveableProperty(8)]
    public QuestManager QuestManager { get; private set; }

    [SaveableProperty(9)]
    public IssueManager IssueManager { get; private set; }

    [SaveableProperty(11)]
    public FactionManager FactionManager { get; private set; }

    [SaveableProperty(12)]
    public CharacterRelationManager CharacterRelationManager { get; private set; }

    [SaveableProperty(14)]
    public Romance Romance { get; private set; }

    [SaveableProperty(16)]
    public PlayerCaptivity PlayerCaptivity { get; private set; }

    [SaveableProperty(17)]
    internal Clan PlayerDefaultFaction { get; set; }

    public CampaignMission.ICampaignMissionManager CampaignMissionManager { get; set; }

    public ISkillLevelingManager SkillLevelingManager { get; set; }

    public IMapSceneCreator MapSceneCreator { get; set; }

    public override bool IsInventoryAccessibleAtMission
    {
      get => this.GameMode == CampaignGameMode.Tutorial;
    }

    public GameMenuCallbackManager GameMenuCallbackManager { get; private set; }

    public VisualCreator VisualCreator { get; set; }

    [SaveableProperty(28)]
    public MapStateData MapStateData { get; private set; }

    public DefaultPerks DefaultPerks { get; private set; }

    public DefaultTraits DefaultTraits { get; private set; }

    public DefaultPolicies DefaultPolicies { get; private set; }

    public DefaultBuildingTypes DefaultBuildingTypes { get; private set; }

    public DefaultIssueEffects DefaultIssueEffects { get; private set; }

    public DefaultItems DefaultItems { get; private set; }

    public DefaultSiegeStrategies DefaultSiegeStrategies { get; private set; }

    internal MBReadOnlyList<PerkObject> AllPerks { get; private set; }

    public DefaultSkillEffects DefaultSkillEffects { get; private set; }

    public DefaultVillageTypes DefaultVillageTypes { get; private set; }

    internal MBReadOnlyList<TraitObject> AllTraits { get; private set; }

    internal MBReadOnlyList<MBEquipmentRoster> AllEquipmentRosters { get; private set; }

    public DefaultCulturalFeats DefaultFeats { get; private set; }

    internal MBReadOnlyList<PolicyObject> AllPolicies { get; private set; }

    internal MBReadOnlyList<BuildingType> AllBuildingTypes { get; private set; }

    internal MBReadOnlyList<IssueEffect> AllIssueEffects { get; private set; }

    internal MBReadOnlyList<SiegeStrategy> AllSiegeStrategies { get; private set; }

    internal MBReadOnlyList<VillageType> AllVillageTypes { get; private set; }

    internal MBReadOnlyList<SkillEffect> AllSkillEffects { get; private set; }

    internal MBReadOnlyList<FeatObject> AllFeats { get; private set; }

    internal MBReadOnlyList<SkillObject> AllSkills { get; private set; }

    internal MBReadOnlyList<SiegeEngineType> AllSiegeEngineTypes { get; private set; }

    internal MBReadOnlyList<ItemCategory> AllItemCategories { get; private set; }

    internal MBReadOnlyList<CharacterAttribute> AllCharacterAttributes { get; private set; }

    internal MBReadOnlyList<ItemObject> AllItems { get; private set; }

    [SaveableProperty(100)]
    internal MapTimeTracker MapTimeTracker { get; private set; }

    public bool TimeControlModeLock { get; private set; }

    public CampaignTimeControlMode TimeControlMode
    {
      get => this._timeControlMode;
      set
      {
        if (this.TimeControlModeLock || value == this._timeControlMode)
          return;
        this._timeControlMode = value;
      }
    }

    public bool IsMapTooltipLongForm { get; set; }

    public float SpeedUpMultiplier { get; set; } = 4f;

    public float CampaignDt => this._dt;

    public bool TrueSight { get; set; }

    public static Campaign Current { get; private set; }

    [SaveableProperty(36)]
    public CampaignTime CampaignStartTime { get; private set; }

    [SaveableProperty(37)]
    public CampaignGameMode GameMode { get; private set; }

    [SaveableProperty(38)]
    public float PlayerProgress { get; private set; }

    public GameMenuManager GameMenuManager { get; private set; }

    public GameModels Models => this._gameModels;

    public SandBoxManager SandBoxManager { get; private set; }

    public Campaign.GameLoadingType CampaignGameLoadingType => this._gameLoadingType;

    public Campaign(CampaignGameMode gameMode)
    {
      this.GameMode = gameMode;
      this.Options = new CampaignOptions();
      this.MapTimeTracker = new MapTimeTracker(CampaignData.CampaignStartTime);
      this.CampaignStartTime = this.MapTimeTracker.Now;
      this.CampaignObjectManager = new CampaignObjectManager();
      this.CurrentConversationContext = ConversationContext.Default;
      this.QuestManager = new QuestManager();
      this.IssueManager = new IssueManager();
      this.FactionManager = new FactionManager();
      this.CharacterRelationManager = new CharacterRelationManager();
      this.Romance = new Romance();
      this.PlayerCaptivity = new PlayerCaptivity();
      this.BarterManager = new BarterManager();
      this.GameMenuCallbackManager = new GameMenuCallbackManager();
      this._campaignPeriodicEventManager = new CampaignPeriodicEventManager();
      this._tickData = new CampaignTickCacheDataStore();
    }

    [SaveableProperty(40)]
    public SiegeEventManager SiegeEventManager { get; internal set; }

    [SaveableProperty(41)]
    public MapEventManager MapEventManager { get; internal set; }

    internal CampaignEvents CampaignEvents { get; private set; }

    public MenuContext CurrentMenuContext
    {
      get
      {
        GameStateManager gameStateManager = this.CurrentGame.GameStateManager;
        if (gameStateManager.ActiveState is TutorialState activeState1)
          return activeState1.MenuContext;
        if (gameStateManager.ActiveState is MapState activeState2)
          return activeState2.MenuContext;
        return gameStateManager.ActiveState?.Predecessor != null && gameStateManager.ActiveState.Predecessor is MapState predecessor ? predecessor.MenuContext : (MenuContext) null;
      }
    }

    internal List<MBCampaignEvent> CustomPeriodicCampaignEvents { get; private set; }

    public bool IsMainPartyWaiting
    {
      get => this._isMainPartyWaiting;
      private set => this._isMainPartyWaiting = value;
    }

    [SaveableProperty(45)]
    private int _curMapFrame { get; set; }

    internal LocatorGrid<Settlement> SettlementLocator
    {
      get => this._settlementLocator ?? (this._settlementLocator = new LocatorGrid<Settlement>());
    }

    internal LocatorGrid<MobileParty> MobilePartyLocator
    {
      get
      {
        return this._mobilePartyLocator ?? (this._mobilePartyLocator = new LocatorGrid<MobileParty>());
      }
    }

    public IMapScene MapSceneWrapper => this._mapSceneWrapper;

    [SaveableProperty(54)]
    public PlayerEncounter PlayerEncounter { get; internal set; }

    [CachedData]
    internal LocationEncounter LocationEncounter { get; set; }

    internal NameGenerator NameGenerator { get; private set; }

    [SaveableProperty(58)]
    public BarterManager BarterManager { get; private set; }

    [SaveableProperty(69)]
    public bool IsMainHeroDisguised { get; set; }

    [SaveableProperty(70)]
    public bool DesertionEnabled { get; set; }

    public Vec2 DefaultStartingPosition => new Vec2(685.3f, 410.9f);

    public Equipment DeadBattleEquipment { get; set; }

    public Equipment DeadCivilianEquipment { get; set; }

    public void InitializeMainParty()
    {
      this.InitializeSinglePlayerReferences();
      this.MainParty.InitializeMobilePartyAtPosition(this.CurrentGame.ObjectManager.GetObject<PartyTemplateObject>("main_hero_party_template"), this.DefaultStartingPosition);
      this.MainParty.ActualClan = Clan.PlayerClan;
      this.MainParty.PartyComponent = (PartyComponent) new LordPartyComponent(Hero.MainHero, Hero.MainHero);
      this.MainParty.ItemRoster.AddToCounts(DefaultItems.Grain, 1);
    }

    [LoadInitializationCallback]
    private void OnLoad(MetaData metaData, ObjectLoadData objectLoadData)
    {
      this._campaignEntitySystem = new EntitySystem<CampaignEntityComponent>();
      this.PlayerFormationPreferences = this._playerFormationPreferences.GetReadOnlyDictionary<CharacterObject, FormationClass>();
      this.SpeedUpMultiplier = 4f;
      if (this.UniqueGameId == null && MBSaveLoad.IsUpdatingGameVersion && MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.2"))
        this.UniqueGameId = "oldSave";
      if (this.BusyHideouts != null)
        return;
      this.BusyHideouts = new List<Settlement>();
    }

    private void InitializeForSavedGame()
    {
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
        settlement.Party.OnFinishLoadState();
      foreach (MobileParty mobileParty in this.MobileParties.ToList<MobileParty>())
        mobileParty.Party.OnFinishLoadState();
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
        settlement.OnFinishLoadState();
      this.GameMenuCallbackManager = new GameMenuCallbackManager();
      this.GameMenuCallbackManager.OnGameLoad();
      this.IssueManager.InitializeForSavedGame();
      this.MinSettlementX = 1000f;
      this.MinSettlementY = 1000f;
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if ((double) settlement.Position2D.x < (double) this.MinSettlementX)
          this.MinSettlementX = settlement.Position2D.x;
        if ((double) settlement.Position2D.y < (double) this.MinSettlementY)
          this.MinSettlementY = settlement.Position2D.y;
        if ((double) settlement.Position2D.x > (double) this.MaxSettlementX)
          this.MaxSettlementX = settlement.Position2D.x;
        if ((double) settlement.Position2D.y > (double) this.MaxSettlementY)
          this.MaxSettlementY = settlement.Position2D.y;
      }
    }

    private void OnGameLoaded(CampaignGameStarter starter)
    {
      this._tickData = new CampaignTickCacheDataStore();
      this.ObjectManager.PreAfterLoad();
      this.CampaignObjectManager.PreAfterLoad();
      this.ObjectManager.AfterLoad();
      this.CampaignObjectManager.AfterLoad();
      this.CharacterRelationManager.AfterLoad();
      CampaignEventDispatcher.Instance.OnGameEarlyLoaded(starter);
      TroopRoster.CalculateCachedStatsOnLoad();
      CampaignEventDispatcher.Instance.OnGameLoaded(starter);
      this.InitializeForSavedGame();
      this._tickData.InitializeDataCache();
    }

    private void OnDataLoadFinished(CampaignGameStarter starter)
    {
      this._towns = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (x => x.IsTown)).Select<Settlement, Town>((Func<Settlement, Town>) (x => x.Town)).ToMBList<Town>();
      this._castles = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (x => x.IsCastle)).Select<Settlement, Town>((Func<Settlement, Town>) (x => x.Town)).ToMBList<Town>();
      this._villages = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (x => x.Village != null)).Select<Settlement, Village>((Func<Settlement, Village>) (x => x.Village)).ToMBList<Village>();
      this._hideouts = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (x => x.IsHideout)).Select<Settlement, Hideout>((Func<Settlement, Hideout>) (x => x.Hideout)).ToMBList<Hideout>();
      this._campaignPeriodicEventManager.InitializeTickers();
      this.CreateCampaignEvents();
    }

    private void OnSessionStart(CampaignGameStarter starter)
    {
      CampaignEventDispatcher.Instance.OnSessionStart(starter);
      CampaignEventDispatcher.Instance.OnAfterSessionStart(starter);
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
      this.ConversationManager.Build();
      foreach (Settlement settlement in (List<Settlement>) this.Settlements)
        settlement.OnSessionStart();
      this.IsCraftingEnabled = true;
      this.IsBannerEditorEnabled = true;
      this.IsFaceGenEnabled = true;
      this.MapEventManager.OnAfterLoad();
      this.KingdomManager.RegisterEvents();
      this.KingdomManager.OnSessionStart();
      this.CampaignInformationManager.RegisterEvents();
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      if (settlement.IsVillage)
      {
        settlement.Village.DailyTick();
      }
      else
      {
        if (settlement.Town == null)
          return;
        settlement.Town.DailyTick();
      }
    }

    private void GameInitTick()
    {
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
        settlement.Party.UpdateVisibilityAndInspected();
      foreach (MobileParty mobileParty in (List<MobileParty>) this.MobileParties)
        mobileParty.Party.UpdateVisibilityAndInspected();
    }

    internal void HourlyTick(MBCampaignEvent campaignEvent, object[] delegateParams)
    {
      CampaignEventDispatcher.Instance.HourlyTick();
      if (!(Game.Current.GameStateManager.ActiveState is MapState activeState))
        return;
      activeState.OnHourlyTick();
    }

    internal void DailyTick(MBCampaignEvent campaignEvent, object[] delegateParams)
    {
      this.PlayerProgress = (float) (((double) this.PlayerProgress + (double) Campaign.Current.Models.PlayerProgressionModel.GetPlayerProgress()) / 2.0);
      Debug.Print("Before Daily Tick: " + CampaignTime.Now.ToString());
      CampaignEventDispatcher.Instance.DailyTick();
      if ((int) this.CampaignStartTime.ElapsedDaysUntilNow % 7 != 0)
        return;
      CampaignEventDispatcher.Instance.WeeklyTick();
      this.OnWeeklyTick();
    }

    public void WaitAsyncTasks()
    {
      if (this.CampaignLateAITickTask == null)
        return;
      this.CampaignLateAITickTask.Wait();
    }

    private void OnWeeklyTick() => this.LogEntryHistory.DeleteOutdatedLogs();

    public CampaignTimeControlMode GetSimplifiedTimeControlMode()
    {
      switch (this.TimeControlMode)
      {
        case CampaignTimeControlMode.Stop:
          return CampaignTimeControlMode.Stop;
        case CampaignTimeControlMode.UnstoppablePlay:
          return CampaignTimeControlMode.UnstoppablePlay;
        case CampaignTimeControlMode.UnstoppableFastForward:
        case CampaignTimeControlMode.UnstoppableFastForwardForPartyWaitTime:
          return CampaignTimeControlMode.UnstoppableFastForward;
        case CampaignTimeControlMode.StoppablePlay:
          return !this.IsMainPartyWaiting ? CampaignTimeControlMode.StoppablePlay : CampaignTimeControlMode.Stop;
        case CampaignTimeControlMode.StoppableFastForward:
          return !this.IsMainPartyWaiting ? CampaignTimeControlMode.StoppableFastForward : CampaignTimeControlMode.Stop;
        default:
          return CampaignTimeControlMode.Stop;
      }
    }

    private void CheckMainPartyNeedsUpdate() => MobileParty.MainParty.Ai.CheckPartyNeedsUpdate();

    private void TickMapTime(float realDt)
    {
      float num1 = 0.0f;
      float speedUpMultiplier = this.SpeedUpMultiplier;
      float num2 = 0.25f * realDt;
      this.IsMainPartyWaiting = MobileParty.MainParty.ComputeIsWaiting();
      switch (this.TimeControlMode)
      {
        case CampaignTimeControlMode.Stop:
        case CampaignTimeControlMode.FastForwardStop:
          this._dt = num1;
          this.MapTimeTracker.Tick(4320f * num1);
          break;
        case CampaignTimeControlMode.UnstoppablePlay:
          num1 = num2;
          goto case CampaignTimeControlMode.Stop;
        case CampaignTimeControlMode.UnstoppableFastForward:
        case CampaignTimeControlMode.UnstoppableFastForwardForPartyWaitTime:
          num1 = num2 * speedUpMultiplier;
          goto case CampaignTimeControlMode.Stop;
        case CampaignTimeControlMode.StoppablePlay:
          if (!this.IsMainPartyWaiting)
          {
            num1 = num2;
            goto case CampaignTimeControlMode.Stop;
          }
          else
            goto case CampaignTimeControlMode.Stop;
        case CampaignTimeControlMode.StoppableFastForward:
          if (!this.IsMainPartyWaiting)
          {
            num1 = num2 * speedUpMultiplier;
            goto case CampaignTimeControlMode.Stop;
          }
          else
            goto case CampaignTimeControlMode.Stop;
        default:
          throw new ArgumentOutOfRangeException();
      }
    }

    public void OnGameOver()
    {
      if (!CampaignOptions.IsIronmanMode)
        return;
      this.SaveHandler.QuickSaveCurrentGame();
    }

    internal void RealTick(float realDt)
    {
      this.WaitAsyncTasks();
      this.CheckMainPartyNeedsUpdate();
      this.TickMapTime(realDt);
      foreach (CampaignEntityComponent component in (List<CampaignEntityComponent>) this._campaignEntitySystem.GetComponents())
        component.OnTick(realDt, this._dt);
      if (!this.GameStarted)
      {
        this.GameStarted = true;
        this._tickData.InitializeDataCache();
        this.SiegeEventManager.Tick(this._dt);
      }
      this._tickData.RealTick(this._dt, realDt);
      this.SiegeEventManager.Tick(this._dt);
    }

    public static float CurrentTime => (float) CampaignTime.Now.ToHours;

    public void SetTimeSpeed(int speed)
    {
      switch (speed)
      {
        case 0:
          if (this.TimeControlMode == CampaignTimeControlMode.UnstoppableFastForward || this.TimeControlMode == CampaignTimeControlMode.StoppableFastForward)
          {
            this.TimeControlMode = CampaignTimeControlMode.FastForwardStop;
            break;
          }
          if (this.TimeControlMode == CampaignTimeControlMode.FastForwardStop || this.TimeControlMode == CampaignTimeControlMode.Stop)
            break;
          this.TimeControlMode = CampaignTimeControlMode.Stop;
          break;
        case 1:
          if ((this.TimeControlMode == CampaignTimeControlMode.Stop || this.TimeControlMode == CampaignTimeControlMode.FastForwardStop) && this.MainParty.DefaultBehavior == AiBehavior.Hold || this.IsMainPartyWaiting || MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty)
          {
            this.TimeControlMode = CampaignTimeControlMode.UnstoppablePlay;
            break;
          }
          this.TimeControlMode = CampaignTimeControlMode.StoppablePlay;
          break;
        case 2:
          if ((this.TimeControlMode == CampaignTimeControlMode.Stop || this.TimeControlMode == CampaignTimeControlMode.FastForwardStop) && this.MainParty.DefaultBehavior == AiBehavior.Hold || this.IsMainPartyWaiting || MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty)
          {
            this.TimeControlMode = CampaignTimeControlMode.UnstoppableFastForward;
            break;
          }
          this.TimeControlMode = CampaignTimeControlMode.StoppableFastForward;
          break;
      }
    }

    public static void LateAITick() => Campaign.Current.LateAITickAux();

    internal void LateAITickAux()
    {
      if ((double) this._dt <= 0.0 && this._curSessionFrame >= 3)
        return;
      this.PartiesThink(this._dt);
    }

    internal void Tick()
    {
      ++this._curMapFrame;
      ++this._curSessionFrame;
      if ((double) this._dt > 0.0 || this._curSessionFrame < 3)
      {
        CampaignEventDispatcher.Instance.Tick(this._dt);
        this._campaignPeriodicEventManager.OnTick(this._dt);
        this.MapEventManager.Tick();
        this._lastNonZeroDtFrame = this._curMapFrame;
        this._campaignPeriodicEventManager.MobilePartyHourlyTick();
      }
      if ((double) this._dt > 0.0)
        this._campaignPeriodicEventManager.TickPeriodicEvents();
      this._tickData.Tick();
      Campaign.Current.PlayerCaptivity.Update(this._dt);
      if ((double) this._dt > 0.0 || MobileParty.MainParty.MapEvent == null && this._curMapFrame == this._lastNonZeroDtFrame + 1)
      {
        EncounterManager.Tick(this._dt);
        if (Game.Current.GameStateManager.ActiveState is MapState activeState && activeState.AtMenu && !activeState.MenuContext.GameMenu.IsWaitActive)
          this._dt = 0.0f;
      }
      if ((double) this._dt > 0.0 || this._curSessionFrame < 3)
        this._campaignPeriodicEventManager.TickPartialHourlyAi();
      if (Game.Current.GameStateManager.ActiveState is MapState activeState1 && !activeState1.AtMenu)
      {
        string genericStateMenu = this.Models.EncounterGameMenuModel.GetGenericStateMenu();
        if (!string.IsNullOrEmpty(genericStateMenu))
          GameMenu.ActivateGameMenu(genericStateMenu);
      }
      this.CampaignLateAITickTask.Invoke();
    }

    private void CreateCampaignEvents()
    {
      long numTicks = (CampaignTime.Now - CampaignData.CampaignStartTime).NumTicks;
      CampaignTime initialWait1 = CampaignTime.Days(1f);
      if (numTicks % 864000000L != 0L)
        initialWait1 = CampaignTime.Days((float) (numTicks % 864000000L) / 8.64E+08f);
      this._dailyTickEvent = CampaignPeriodicEventManager.CreatePeriodicEvent(CampaignTime.Days(1f), initialWait1);
      this._dailyTickEvent.AddHandler(new MBCampaignEvent.CampaignEventDelegate(this.DailyTick));
      CampaignTime initialWait2 = CampaignTime.Hours(0.5f);
      if (numTicks % 36000000L != 0L)
        initialWait2 = CampaignTime.Hours((float) (numTicks % 36000000L) / 3.6E+07f);
      this._hourlyTickEvent = CampaignPeriodicEventManager.CreatePeriodicEvent(CampaignTime.Hours(1f), initialWait2);
      this._hourlyTickEvent.AddHandler(new MBCampaignEvent.CampaignEventDelegate(this.HourlyTick));
    }

    private void PartiesThink(float dt)
    {
      for (int index = 0; index < this.MobileParties.Count; ++index)
        this.MobileParties[index].Ai.Tick(dt);
    }

    public TComponent GetEntityComponent<TComponent>() where TComponent : CampaignEntityComponent
    {
      EntitySystem<CampaignEntityComponent> campaignEntitySystem = this._campaignEntitySystem;
      return campaignEntitySystem == null ? default (TComponent) : campaignEntitySystem.GetComponent<TComponent>();
    }

    public TComponent AddEntityComponent<TComponent>() where TComponent : CampaignEntityComponent, new()
    {
      return this._campaignEntitySystem.AddComponent<TComponent>();
    }

    public MBReadOnlyList<CampaignEntityComponent> CampaignEntityComponents
    {
      get => this._campaignEntitySystem.Components;
    }

    public T GetCampaignBehavior<T>() => this._campaignBehaviorManager.GetBehavior<T>();

    public IEnumerable<T> GetCampaignBehaviors<T>()
    {
      return this._campaignBehaviorManager.GetBehaviors<T>();
    }

    public void AddCampaignBehaviorManager(ICampaignBehaviorManager manager)
    {
      this._campaignBehaviorManager = manager;
    }

    public MBReadOnlyList<Hero> AliveHeroes => this.CampaignObjectManager.AliveHeroes;

    public MBReadOnlyList<Hero> DeadOrDisabledHeroes
    {
      get => this.CampaignObjectManager.DeadOrDisabledHeroes;
    }

    public MBReadOnlyList<MobileParty> MobileParties => this.CampaignObjectManager.MobileParties;

    public MBReadOnlyList<MobileParty> CaravanParties => this.CampaignObjectManager.CaravanParties;

    public MBReadOnlyList<MobileParty> VillagerParties
    {
      get => this.CampaignObjectManager.VillagerParties;
    }

    public MBReadOnlyList<MobileParty> MilitiaParties => this.CampaignObjectManager.MilitiaParties;

    public MBReadOnlyList<MobileParty> GarrisonParties
    {
      get => this.CampaignObjectManager.GarrisonParties;
    }

    public MBReadOnlyList<MobileParty> CustomParties => this.CampaignObjectManager.CustomParties;

    public MBReadOnlyList<MobileParty> LordParties => this.CampaignObjectManager.LordParties;

    public MBReadOnlyList<MobileParty> BanditParties => this.CampaignObjectManager.BanditParties;

    public MBReadOnlyList<MobileParty> PartiesWithoutPartyComponent
    {
      get => this.CampaignObjectManager.PartiesWithoutPartyComponent;
    }

    public MBReadOnlyList<Settlement> Settlements => this.CampaignObjectManager.Settlements;

    public IEnumerable<IFaction> Factions
    {
      get => (IEnumerable<IFaction>) this.CampaignObjectManager.Factions;
    }

    public MBReadOnlyList<Kingdom> Kingdoms => this.CampaignObjectManager.Kingdoms;

    public MBReadOnlyList<Clan> Clans => this.CampaignObjectManager.Clans;

    public MBReadOnlyList<CharacterObject> Characters => this._characters;

    public MBReadOnlyList<WorkshopType> Workshops => this._workshops;

    public MBReadOnlyList<ItemModifier> ItemModifiers => this._itemModifiers;

    public MBReadOnlyList<ItemModifierGroup> ItemModifierGroups => this._itemModifierGroups;

    public MBReadOnlyList<Concept> Concepts => this._concepts;

    [SaveableProperty(60)]
    public MobileParty MainParty { get; private set; }

    public PartyBase CameraFollowParty
    {
      get => this._cameraFollowParty;
      set => this._cameraFollowParty = value;
    }

    [SaveableProperty(62)]
    public CampaignInformationManager CampaignInformationManager { get; set; }

    [SaveableProperty(63)]
    public VisualTrackerManager VisualTrackerManager { get; set; }

    public LogEntryHistory LogEntryHistory => this._logEntryHistory;

    public EncyclopediaManager EncyclopediaManager { get; private set; }

    public InventoryManager InventoryManager { get; private set; }

    public PartyScreenManager PartyScreenManager { get; private set; }

    public ConversationManager ConversationManager { get; private set; }

    public bool IsDay => !this.IsNight;

    public bool IsNight => CampaignTime.Now.IsNightTime;

    internal int GeneratePartyId(PartyBase party)
    {
      int lastPartyIndex = this._lastPartyIndex;
      ++this._lastPartyIndex;
      return lastPartyIndex;
    }

    [SaveableProperty(68)]
    public HeroTraitDeveloper PlayerTraitDeveloper { get; private set; }

    private void LoadMapScene()
    {
      this._mapSceneWrapper = this.MapSceneCreator.CreateMapScene();
      this._mapSceneWrapper.SetSceneLevels(new List<string>()
      {
        "level_1",
        "level_2",
        "level_3",
        "siege",
        "raid",
        "burned"
      });
      this._mapSceneWrapper.Load();
      Vec2 minimumPosition;
      Vec2 maximumPosition;
      float maximumHeight;
      this._mapSceneWrapper.GetMapBorders(out minimumPosition, out maximumPosition, out maximumHeight);
      Campaign.MapMinimumPosition = minimumPosition;
      Campaign.MapMaximumPosition = maximumPosition;
      Campaign.MapMaximumHeight = maximumHeight;
      Campaign.MapDiagonal = Campaign.MapMinimumPosition.Distance(Campaign.MapMaximumPosition);
      Campaign.MapDiagonalSquared = Campaign.MapDiagonal * Campaign.MapDiagonal;
      this.UpdateMaximumDistanceBetweenTwoSettlements();
      MapWeatherModel mapWeatherModel = Campaign.Current.Models.MapWeatherModel;
      if (mapWeatherModel == null)
        return;
      byte[] numArray = new byte[2097152];
      this._mapSceneWrapper.GetSnowAmountData(numArray);
      mapWeatherModel.InitializeSnowAndRainAmountData(numArray);
    }

    public void UpdateMaximumDistanceBetweenTwoSettlements()
    {
      Campaign.MaximumDistanceBetweenTwoSettlements = Campaign.Current.Models.MapDistanceModel.MaximumDistanceBetweenTwoSettlements;
    }

    private void InitializeCachedLists()
    {
      MBObjectManager objectManager = Game.Current.ObjectManager;
      this._characters = objectManager.GetObjectTypeList<CharacterObject>();
      this._workshops = objectManager.GetObjectTypeList<WorkshopType>();
      this._itemModifiers = objectManager.GetObjectTypeList<ItemModifier>();
      this._itemModifierGroups = objectManager.GetObjectTypeList<ItemModifierGroup>();
      this._concepts = objectManager.GetObjectTypeList<Concept>();
    }

    private void InitializeDefaultEquipments()
    {
      this.DeadBattleEquipment = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>("default_battle_equipment_roster_neutral").DefaultEquipment;
      this.DeadCivilianEquipment = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>("default_civilian_equipment_roster_neutral").DefaultEquipment;
    }

    public override void OnDestroy()
    {
      this.WaitAsyncTasks();
      GameTexts.ClearInstance();
      this._mapSceneWrapper?.Destroy();
      ConversationManager.Clear();
      MBTextManager.ClearAll();
      GameSceneDataManager.Destroy();
      this.CampaignInformationManager.DeRegisterEvents();
      MBSaveLoad.OnGameDestroy();
      Campaign.Current = (Campaign) null;
    }

    public void InitializeSinglePlayerReferences()
    {
      this.IsInitializedSinglePlayerReferences = true;
      this.InitializeGamePlayReferences();
    }

    private void CreateLists()
    {
      this.AllPerks = MBObjectManager.Instance.GetObjectTypeList<PerkObject>();
      this.AllTraits = MBObjectManager.Instance.GetObjectTypeList<TraitObject>();
      this.AllEquipmentRosters = MBObjectManager.Instance.GetObjectTypeList<MBEquipmentRoster>();
      this.AllPolicies = MBObjectManager.Instance.GetObjectTypeList<PolicyObject>();
      this.AllBuildingTypes = MBObjectManager.Instance.GetObjectTypeList<BuildingType>();
      this.AllIssueEffects = MBObjectManager.Instance.GetObjectTypeList<IssueEffect>();
      this.AllSiegeStrategies = MBObjectManager.Instance.GetObjectTypeList<SiegeStrategy>();
      this.AllVillageTypes = MBObjectManager.Instance.GetObjectTypeList<VillageType>();
      this.AllSkillEffects = MBObjectManager.Instance.GetObjectTypeList<SkillEffect>();
      this.AllFeats = MBObjectManager.Instance.GetObjectTypeList<FeatObject>();
      this.AllSkills = MBObjectManager.Instance.GetObjectTypeList<SkillObject>();
      this.AllSiegeEngineTypes = MBObjectManager.Instance.GetObjectTypeList<SiegeEngineType>();
      this.AllItemCategories = MBObjectManager.Instance.GetObjectTypeList<ItemCategory>();
      this.AllCharacterAttributes = MBObjectManager.Instance.GetObjectTypeList<CharacterAttribute>();
      this.AllItems = MBObjectManager.Instance.GetObjectTypeList<ItemObject>();
    }

    private void CalculateCachedValues()
    {
      this.CalculateAverageDistanceBetweenTowns();
      this.CalculateAverageWage();
    }

    private void CalculateAverageWage()
    {
      float num1 = 0.0f;
      float num2 = 0.0f;
      foreach (CultureObject objectType in (List<CultureObject>) MBObjectManager.Instance.GetObjectTypeList<CultureObject>())
      {
        if (objectType.IsMainCulture)
        {
          foreach (PartyTemplateStack stack in (List<PartyTemplateStack>) objectType.DefaultPartyTemplate.Stacks)
          {
            int troopWage = stack.Character.TroopWage;
            float num3 = (float) (stack.MaxValue + stack.MinValue) * 0.5f;
            num1 += (float) troopWage * num3;
            num2 += num3;
          }
        }
      }
      if ((double) num2 <= 0.0)
        return;
      this.AverageWage = num1 / num2;
    }

    private void CalculateAverageDistanceBetweenTowns()
    {
      if (this.GameMode == CampaignGameMode.Tutorial)
        return;
      float num1 = 0.0f;
      int num2 = 0;
      foreach (Town allTown1 in (List<Town>) this.AllTowns)
      {
        float num3 = 5000f;
        foreach (Town allTown2 in (List<Town>) this.AllTowns)
        {
          if (allTown1 != allTown2)
          {
            float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(allTown1.Settlement, allTown2.Settlement);
            if ((double) distance < (double) num3)
              num3 = distance;
          }
        }
        num1 += num3;
        ++num2;
      }
      Campaign.AverageDistanceBetweenTwoFortifications = num1 / (float) num2;
    }

    public void InitializeGamePlayReferences()
    {
      this.CurrentGame.PlayerTroop = (BasicCharacterObject) this.CurrentGame.ObjectManager.GetObject<CharacterObject>("main_hero");
      if (Hero.MainHero.Mother != null)
        Hero.MainHero.Mother.SetHasMet();
      if (Hero.MainHero.Father != null)
        Hero.MainHero.Father.SetHasMet();
      this.PlayerDefaultFaction = this.CampaignObjectManager.Find<Clan>("player_faction");
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, 1000, true);
    }

    private void InitializeScenes()
    {
      foreach (ModuleInfo module in ModuleHelper.GetModules())
      {
        string str = ModuleHelper.GetModuleFullPath(module.Id) + "ModuleData/";
        string path1 = str + "sp_battle_scenes.xml";
        string path2 = str + "conversation_scenes.xml";
        string path3 = str + "meeting_scenes.xml";
        if (File.Exists(path1))
          GameSceneDataManager.Instance.LoadSPBattleScenes(path1);
        if (File.Exists(path2))
          GameSceneDataManager.Instance.LoadConversationScenes(path2);
        if (File.Exists(path3))
          GameSceneDataManager.Instance.LoadMeetingScenes(path3);
      }
    }

    public void SetLoadingParameters(Campaign.GameLoadingType gameLoadingType)
    {
      Campaign.Current = this;
      this._gameLoadingType = gameLoadingType;
      if (gameLoadingType != Campaign.GameLoadingType.SavedCampaign)
        return;
      Campaign.Current.GameStarted = true;
    }

    public void AddCampaignEventReceiver(CampaignEventReceiver receiver)
    {
      this.CampaignEventDispatcher.AddCampaignEventReceiver(receiver);
    }

    protected override void OnInitialize()
    {
      this.CampaignEvents = new CampaignEvents();
      this.CustomPeriodicCampaignEvents = new List<MBCampaignEvent>();
      this.CampaignEventDispatcher = new CampaignEventDispatcher((IEnumerable<CampaignEventReceiver>) new CampaignEventReceiver[3]
      {
        (CampaignEventReceiver) this.CampaignEvents,
        (CampaignEventReceiver) this.IssueManager,
        (CampaignEventReceiver) this.QuestManager
      });
      this.SandBoxManager = Game.Current.AddGameHandler<SandBoxManager>();
      this.SaveHandler = new SaveHandler();
      this.VisualCreator = new VisualCreator();
      this.GameMenuManager = new GameMenuManager();
      if (this._gameLoadingType != Campaign.GameLoadingType.Editor)
        this.CreateManagers();
      CampaignGameStarter campaignGameStarter = new CampaignGameStarter(this.GameMenuManager, this.ConversationManager, this.CurrentGame.GameTextManager);
      this.SandBoxManager.Initialize(campaignGameStarter);
      this.GameManager.InitializeGameStarter(this.CurrentGame, (IGameStarter) campaignGameStarter);
      GameSceneDataManager.Initialize();
      if (this._gameLoadingType == Campaign.GameLoadingType.NewCampaign || this._gameLoadingType == Campaign.GameLoadingType.SavedCampaign)
        this.InitializeScenes();
      this.GameManager.OnGameStart(this.CurrentGame, (IGameStarter) campaignGameStarter);
      this.CurrentGame.SetBasicModels(campaignGameStarter.Models);
      this._gameModels = this.CurrentGame.AddGameModelsManager<GameModels>(campaignGameStarter.Models);
      this.CurrentGame.CreateGameManager();
      if (this._gameLoadingType == Campaign.GameLoadingType.SavedCampaign)
        this.InitializeDefaultCampaignObjects();
      this.GameManager.BeginGameStart(this.CurrentGame);
      if (this._gameLoadingType != Campaign.GameLoadingType.SavedCampaign)
        this.OnNewCampaignStart();
      this.CreateLists();
      this.InitializeBasicObjectXmls();
      if (this._gameLoadingType != Campaign.GameLoadingType.SavedCampaign)
        this.GameManager.OnNewCampaignStart(this.CurrentGame, (object) campaignGameStarter);
      this.SandBoxManager.OnCampaignStart(campaignGameStarter, this.GameManager, this._gameLoadingType == Campaign.GameLoadingType.SavedCampaign);
      if (this._gameLoadingType != Campaign.GameLoadingType.SavedCampaign)
      {
        this.AddCampaignBehaviorManager((ICampaignBehaviorManager) new TaleWorlds.CampaignSystem.CampaignBehaviors.CampaignBehaviorManager((IEnumerable<CampaignBehaviorBase>) campaignGameStarter.CampaignBehaviors));
        this.GameManager.OnAfterCampaignStart(this.CurrentGame);
      }
      else
      {
        this.GameManager.OnGameLoaded(this.CurrentGame, (object) campaignGameStarter);
        this._campaignBehaviorManager.InitializeCampaignBehaviors((IEnumerable<CampaignBehaviorBase>) campaignGameStarter.CampaignBehaviors);
        this._campaignBehaviorManager.LoadBehaviorData();
        this._campaignBehaviorManager.RegisterEvents();
      }
      Campaign.Current.GetCampaignBehavior<ICraftingCampaignBehavior>()?.InitializeCraftingElements();
      campaignGameStarter.UnregisterNonReadyObjects();
      if (this._gameLoadingType == Campaign.GameLoadingType.SavedCampaign)
        this.InitializeCampaignObjectsOnAfterLoad();
      else if (this._gameLoadingType == Campaign.GameLoadingType.NewCampaign || this._gameLoadingType == Campaign.GameLoadingType.Tutorial)
        this.CampaignObjectManager.InitializeOnNewGame();
      this.InitializeCachedLists();
      this.InitializeDefaultEquipments();
      this.NameGenerator.Initialize();
      this.CurrentGame.OnGameStart();
      this.GameManager.OnGameInitializationFinished(this.CurrentGame);
    }

    private void CalculateCachedStatsOnLoad() => ItemRoster.CalculateCachedStatsOnLoad();

    private void InitializeBasicObjectXmls()
    {
      this.ObjectManager.LoadXML("SPCultures");
      this.ObjectManager.LoadXML("Concepts");
    }

    private void InitializeDefaultCampaignObjects()
    {
      this.CurrentGame.InitializeDefaultGameObjects();
      this.DefaultItems = new DefaultItems();
      this.CurrentGame.LoadBasicFiles();
      this.ObjectManager.LoadXML("Items");
      this.ObjectManager.LoadXML("EquipmentRosters");
      this.ObjectManager.LoadXML("partyTemplates");
      WeaponDescription weaponDescription1 = MBObjectManager.Instance.GetObject<WeaponDescription>("OneHandedBastardSwordAlternative");
      if (weaponDescription1 != null)
        weaponDescription1.IsHiddenFromUI = true;
      WeaponDescription weaponDescription2 = MBObjectManager.Instance.GetObject<WeaponDescription>("OneHandedBastardAxeAlternative");
      if (weaponDescription2 != null)
        weaponDescription2.IsHiddenFromUI = true;
      Campaign campaign = this;
      campaign.DefaultIssueEffects = new DefaultIssueEffects();
      campaign.DefaultTraits = new DefaultTraits();
      campaign.DefaultPolicies = new DefaultPolicies();
      campaign.DefaultPerks = new DefaultPerks();
      campaign.DefaultBuildingTypes = new DefaultBuildingTypes();
      campaign.DefaultVillageTypes = new DefaultVillageTypes();
      campaign.DefaultSiegeStrategies = new DefaultSiegeStrategies();
      campaign.DefaultSkillEffects = new DefaultSkillEffects();
      campaign.DefaultFeats = new DefaultCulturalFeats();
    }

    private void InitializeManagers()
    {
      this.KingdomManager = new KingdomManager();
      this.CampaignInformationManager = new CampaignInformationManager();
      this.VisualTrackerManager = new VisualTrackerManager();
      this.TournamentManager = (ITournamentManager) new TaleWorlds.CampaignSystem.TournamentGames.TournamentManager();
    }

    private void InitializeCampaignObjectsOnAfterLoad()
    {
      this.CampaignObjectManager.InitializeOnLoad();
      this.FactionManager.AfterLoad();
      this.AllPerks = new MBReadOnlyList<PerkObject>((IEnumerable<PerkObject>) this.AllPerks.Where<PerkObject>((Func<PerkObject, bool>) (x => !x.IsTrash)).ToList<PerkObject>());
      this.LogEntryHistory.OnAfterLoad();
      foreach (Kingdom kingdom in (List<Kingdom>) this.Kingdoms)
      {
        foreach (Army army in (List<Army>) kingdom.Armies)
          army.OnAfterLoad();
      }
    }

    private void OnNewCampaignStart()
    {
      Game.Current.PlayerTroop = (BasicCharacterObject) null;
      this.MapStateData = new MapStateData();
      this.InitializeDefaultCampaignObjects();
      this.MainParty = MBObjectManager.Instance.CreateObject<MobileParty>("player_party");
      this.MainParty.Ai.SetAsMainParty();
      this.InitializeManagers();
    }

    protected override void BeforeRegisterTypes(MBObjectManager objectManager)
    {
      objectManager.RegisterType<FeatObject>("Feat", "Feats", 0U);
    }

    protected override void OnRegisterTypes(MBObjectManager objectManager)
    {
      objectManager.RegisterType<MobileParty>("MobileParty", "MobileParties", 14U, isTemporary: true);
      objectManager.RegisterType<CharacterObject>("NPCCharacter", "NPCCharacters", 16U);
      if (this.GameMode == CampaignGameMode.Tutorial)
        objectManager.RegisterType<BasicCharacterObject>("NPCCharacter", "MPCharacters", 43U);
      objectManager.RegisterType<CultureObject>("Culture", "SPCultures", 17U);
      objectManager.RegisterType<Clan>("Faction", "Factions", 18U, isTemporary: true);
      objectManager.RegisterType<PerkObject>("Perk", "Perks", 19U);
      objectManager.RegisterType<Kingdom>("Kingdom", "Kingdoms", 20U, isTemporary: true);
      objectManager.RegisterType<TraitObject>("Trait", "Traits", 21U);
      objectManager.RegisterType<VillageType>("VillageType", "VillageTypes", 22U);
      objectManager.RegisterType<BuildingType>("BuildingType", "BuildingTypes", 23U);
      objectManager.RegisterType<PartyTemplateObject>("PartyTemplate", "partyTemplates", 24U);
      objectManager.RegisterType<Settlement>("Settlement", "Settlements", 25U);
      objectManager.RegisterType<WorkshopType>("WorkshopType", "WorkshopTypes", 26U);
      objectManager.RegisterType<Village>("Village", "Components", 27U);
      objectManager.RegisterType<Hideout>("Hideout", "Components", 30U);
      objectManager.RegisterType<Town>("Town", "Components", 31U);
      objectManager.RegisterType<Hero>("Hero", "Heroes", 32U, isTemporary: true);
      objectManager.RegisterType<MenuContext>("MenuContext", "MenuContexts", 35U);
      objectManager.RegisterType<PolicyObject>("Policy", "Policies", 36U);
      objectManager.RegisterType<Concept>("Concept", "Concepts", 37U);
      objectManager.RegisterType<IssueEffect>("IssueEffect", "IssueEffects", 39U);
      objectManager.RegisterType<SiegeStrategy>("SiegeStrategy", "SiegeStrategies", 40U);
      objectManager.RegisterType<SkillEffect>("SkillEffect", "SkillEffects", 53U);
      objectManager.RegisterType<LocationComplexTemplate>("LocationComplexTemplate", "LocationComplexTemplates", 42U);
      objectManager.RegisterType<RetirementSettlementComponent>("RetirementSettlementComponent", "Components", 56U);
    }

    private void CreateManagers()
    {
      this.EncyclopediaManager = new EncyclopediaManager();
      this.InventoryManager = new InventoryManager();
      this.PartyScreenManager = new PartyScreenManager();
      this.ConversationManager = new ConversationManager();
      this.NameGenerator = new NameGenerator();
      this.SkillLevelingManager = (ISkillLevelingManager) new DefaultSkillLevelingManager();
    }

    private void OnNewGameCreated(CampaignGameStarter gameStarter)
    {
      this.OnNewGameCreatedInternal();
      this.GameManager?.OnNewGameCreated(this.CurrentGame, (object) gameStarter);
      CampaignEventDispatcher.Instance.OnNewGameCreated(gameStarter);
      this.OnAfterNewGameCreatedInternal();
    }

    private void OnNewGameCreatedInternal()
    {
      this.UniqueGameId = MiscHelper.GenerateCampaignId(12);
      this._newGameVersion = ApplicationVersion.FromParametersFile().ToString();
      this.PlatformID = ApplicationPlatform.CurrentPlatform.ToString();
      this.PlayerTraitDeveloper = new HeroTraitDeveloper(Hero.MainHero);
      this.TimeControlMode = CampaignTimeControlMode.Stop;
      this._campaignEntitySystem = new EntitySystem<CampaignEntityComponent>();
      this.SiegeEventManager = new SiegeEventManager();
      this.MapEventManager = new MapEventManager();
      this.autoEnterTown = (PartyBase) null;
      this.MinSettlementX = 1000f;
      this.MinSettlementY = 1000f;
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if ((double) settlement.Position2D.x < (double) this.MinSettlementX)
          this.MinSettlementX = settlement.Position2D.x;
        if ((double) settlement.Position2D.y < (double) this.MinSettlementY)
          this.MinSettlementY = settlement.Position2D.y;
        if ((double) settlement.Position2D.x > (double) this.MaxSettlementX)
          this.MaxSettlementX = settlement.Position2D.x;
        if ((double) settlement.Position2D.y > (double) this.MaxSettlementY)
          this.MaxSettlementY = settlement.Position2D.y;
      }
      this.CampaignBehaviorManager.RegisterEvents();
      this.CameraFollowParty = this.MainParty.Party;
    }

    private void OnAfterNewGameCreatedInternal()
    {
      Hero.MainHero.Gold = 1000;
      ChangeClanInfluenceAction.Apply(Clan.PlayerClan, -Clan.PlayerClan.Influence);
      Hero.MainHero.ChangeState(Hero.CharacterStates.Active);
      this.GameInitTick();
      this._playerFormationPreferences = new Dictionary<CharacterObject, FormationClass>();
      this.PlayerFormationPreferences = this._playerFormationPreferences.GetReadOnlyDictionary<CharacterObject, FormationClass>();
      Campaign.Current.DesertionEnabled = true;
    }

    protected override void DoLoadingForGameType(
      GameTypeLoadingStates gameTypeLoadingState,
      out GameTypeLoadingStates nextState)
    {
      nextState = GameTypeLoadingStates.None;
      switch (gameTypeLoadingState)
      {
        case GameTypeLoadingStates.InitializeFirstStep:
          this.CurrentGame.Initialize();
          nextState = GameTypeLoadingStates.WaitSecondStep;
          break;
        case GameTypeLoadingStates.WaitSecondStep:
          nextState = GameTypeLoadingStates.LoadVisualsThirdState;
          break;
        case GameTypeLoadingStates.LoadVisualsThirdState:
          if (this.GameMode == CampaignGameMode.Campaign)
            this.LoadMapScene();
          nextState = GameTypeLoadingStates.PostInitializeFourthState;
          break;
        case GameTypeLoadingStates.PostInitializeFourthState:
          CampaignGameStarter gameStarter = this.SandBoxManager.GameStarter;
          if (this._gameLoadingType == Campaign.GameLoadingType.SavedCampaign)
          {
            this.OnDataLoadFinished(gameStarter);
            this.CalculateCachedValues();
            this.DeterminedSavedStats(this._gameLoadingType);
            foreach (Settlement settlement in (List<Settlement>) Settlement.All)
              settlement.Party.OnGameInitialized();
            foreach (MobileParty mobileParty in this.MobileParties.ToList<MobileParty>())
              mobileParty.Party.OnGameInitialized();
            this.CalculateCachedStatsOnLoad();
            this.OnGameLoaded(gameStarter);
            this.OnSessionStart(gameStarter);
            foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
              allAliveHero.CheckInvalidEquipmentsAndReplaceIfNeeded();
            foreach (Hero deadOrDisabledHero in (List<Hero>) Hero.DeadOrDisabledHeroes)
              deadOrDisabledHero.CheckInvalidEquipmentsAndReplaceIfNeeded();
          }
          else if (this._gameLoadingType == Campaign.GameLoadingType.NewCampaign)
          {
            this.OnDataLoadFinished(gameStarter);
            this.CalculateCachedValues();
            MBSaveLoad.OnNewGame();
            this.InitializeMainParty();
            this.DeterminedSavedStats(this._gameLoadingType);
            foreach (Settlement settlement in (List<Settlement>) Settlement.All)
              settlement.Party.OnGameInitialized();
            foreach (MobileParty mobileParty in this.MobileParties.ToList<MobileParty>())
              mobileParty.Party.OnGameInitialized();
            foreach (Settlement settlement in (List<Settlement>) Settlement.All)
              settlement.OnGameCreated();
            foreach (Clan clan in (List<Clan>) Clan.All)
              clan.OnGameCreated();
            MBObjectManager.Instance.RemoveTemporaryTypes();
            this.OnNewGameCreated(gameStarter);
            this.OnSessionStart(gameStarter);
            Debug.Print("Finished starting a new game.");
          }
          this.GameManager.OnAfterGameInitializationFinished(this.CurrentGame, (object) gameStarter);
          break;
      }
    }

    private void DeterminedSavedStats(Campaign.GameLoadingType gameLoadingType)
    {
      if (this._previouslyUsedModules == null)
        this._previouslyUsedModules = new MBList<string>();
      foreach (string moduleName in SandBoxManager.Instance.ModuleManager.ModuleNames)
      {
        if (!this._previouslyUsedModules.Contains(moduleName))
          this._previouslyUsedModules.Add(moduleName);
      }
      if (this._usedGameVersions == null)
        this._usedGameVersions = new MBList<string>();
      string str = MBSaveLoad.LastLoadedGameVersion.ToString();
      if (this._usedGameVersions.Count > 0 && this._usedGameVersions[this._usedGameVersions.Count - 1].Equals(str))
        return;
      this._usedGameVersions.Add(str);
    }

    public override void OnMissionIsStarting(string missionName, MissionInitializerRecord rec)
    {
      if (!rec.PlayingInCampaignMode)
        return;
      CampaignEventDispatcher.Instance.BeforeMissionOpened();
    }

    public override void InitializeParameters()
    {
      ManagedParameters.Instance.Initialize(ModuleHelper.GetXmlPath("Native", "managed_campaign_parameters"));
    }

    public void SetTimeControlModeLock(bool isLocked) => this.TimeControlModeLock = isLocked;

    public override bool IsPartyWindowAccessibleAtMission
    {
      get => this.GameMode == CampaignGameMode.Tutorial;
    }

    internal MBReadOnlyList<Town> AllTowns => (MBReadOnlyList<Town>) this._towns;

    internal MBReadOnlyList<Town> AllCastles => (MBReadOnlyList<Town>) this._castles;

    internal MBReadOnlyList<Village> AllVillages => (MBReadOnlyList<Village>) this._villages;

    internal MBReadOnlyList<Hideout> AllHideouts => (MBReadOnlyList<Hideout>) this._hideouts;

    public void OnPlayerCharacterChanged(out bool isMainPartyChanged)
    {
      isMainPartyChanged = false;
      if (MobileParty.MainParty != Hero.MainHero.PartyBelongedTo)
        isMainPartyChanged = true;
      this.MainParty = Hero.MainHero.PartyBelongedTo;
      if (Hero.MainHero.CurrentSettlement != null && !Hero.MainHero.IsPrisoner)
      {
        if (this.MainParty == null)
          LeaveSettlementAction.ApplyForCharacterOnly(Hero.MainHero);
        else
          LeaveSettlementAction.ApplyForParty(this.MainParty);
      }
      if (Hero.MainHero.IsFugitive)
        Hero.MainHero.ChangeState(Hero.CharacterStates.Active);
      this.PlayerTraitDeveloper = new HeroTraitDeveloper(Hero.MainHero);
      if (this.MainParty == null)
      {
        this.MainParty = MobileParty.CreateParty("player_party_" + Hero.MainHero.StringId, (PartyComponent) new LordPartyComponent(Hero.MainHero, Hero.MainHero), (PartyComponent.OnPartyComponentCreatedDelegate) (mobileParty => mobileParty.ActualClan = Clan.PlayerClan));
        isMainPartyChanged = true;
        if (Hero.MainHero.IsPrisoner)
        {
          this.MainParty.InitializeMobilePartyAtPosition(this.CurrentGame.ObjectManager.GetObject<PartyTemplateObject>("main_hero_party_template"), Hero.MainHero.GetPosition().AsVec2, 0);
          this.MainParty.IsActive = false;
        }
        else
        {
          Vec2 position = Hero.MainHero.GetPosition().AsVec2 != Vec2.Zero ? Hero.MainHero.GetPosition().AsVec2 : SettlementHelper.FindRandomSettlement((Func<Settlement, bool>) (s => s.OwnerClan != null && !s.OwnerClan.IsAtWarWith((IFaction) Clan.PlayerClan))).GetPosition2D;
          this.MainParty.InitializeMobilePartyAtPosition(this.CurrentGame.ObjectManager.GetObject<PartyTemplateObject>("main_hero_party_template"), position, 0);
          this.MainParty.IsActive = true;
          this.MainParty.MemberRoster.AddToCounts(Hero.MainHero.CharacterObject, 1, true);
        }
      }
      Campaign.Current.MainParty.Ai.SetAsMainParty();
      PartyBase.MainParty.ItemRoster.UpdateVersion();
      PartyBase.MainParty.MemberRoster.UpdateVersion();
      if (MobileParty.MainParty.IsActive)
        PartyBase.MainParty.SetAsCameraFollowParty();
      PartyBase.MainParty.UpdateVisibilityAndInspected();
      if (Hero.MainHero.Mother != null)
        Hero.MainHero.Mother.SetHasMet();
      if (Hero.MainHero.Father != null)
        Hero.MainHero.Father.SetHasMet();
      this.MainParty.SetWagePaymentLimit(Campaign.Current.Models.PartyWageModel.MaxWage);
    }

    public void SetPlayerFormationPreference(CharacterObject character, FormationClass formation)
    {
      if (!this._playerFormationPreferences.ContainsKey(character))
        this._playerFormationPreferences.Add(character, formation);
      else
        this._playerFormationPreferences[character] = formation;
    }

    public override void OnStateChanged(TaleWorlds.Core.GameState oldState)
    {
    }

    internal static void AutoGeneratedStaticCollectObjectsCampaign(
      object o,
      List<object> collectedObjects)
    {
      ((GameType) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this.Options);
      collectedObjects.Add((object) this.TournamentManager);
      collectedObjects.Add((object) this.autoEnterTown);
      collectedObjects.Add((object) this.BusyHideouts);
      collectedObjects.Add((object) this.KingdomManager);
      collectedObjects.Add((object) this._campaignPeriodicEventManager);
      collectedObjects.Add((object) this._previouslyUsedModules);
      collectedObjects.Add((object) this._usedGameVersions);
      collectedObjects.Add((object) this._playerFormationPreferences);
      collectedObjects.Add((object) this._campaignBehaviorManager);
      collectedObjects.Add((object) this._cameraFollowParty);
      collectedObjects.Add((object) this._logEntryHistory);
      collectedObjects.Add((object) this.CampaignObjectManager);
      collectedObjects.Add((object) this.QuestManager);
      collectedObjects.Add((object) this.IssueManager);
      collectedObjects.Add((object) this.FactionManager);
      collectedObjects.Add((object) this.CharacterRelationManager);
      collectedObjects.Add((object) this.Romance);
      collectedObjects.Add((object) this.PlayerCaptivity);
      collectedObjects.Add((object) this.PlayerDefaultFaction);
      collectedObjects.Add((object) this.MapStateData);
      collectedObjects.Add((object) this.MapTimeTracker);
      CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this.CampaignStartTime, collectedObjects);
      collectedObjects.Add((object) this.SiegeEventManager);
      collectedObjects.Add((object) this.MapEventManager);
      collectedObjects.Add((object) this.PlayerEncounter);
      collectedObjects.Add((object) this.BarterManager);
      collectedObjects.Add((object) this.MainParty);
      collectedObjects.Add((object) this.CampaignInformationManager);
      collectedObjects.Add((object) this.VisualTrackerManager);
      collectedObjects.Add((object) this.PlayerTraitDeveloper);
    }

    internal static object AutoGeneratedGetMemberValueEnabledCheatsBefore(object o)
    {
      return (object) ((Campaign) o).EnabledCheatsBefore;
    }

    internal static object AutoGeneratedGetMemberValuePlatformID(object o)
    {
      return (object) ((Campaign) o).PlatformID;
    }

    internal static object AutoGeneratedGetMemberValueUniqueGameId(object o)
    {
      return (object) ((Campaign) o).UniqueGameId;
    }

    internal static object AutoGeneratedGetMemberValueCampaignObjectManager(object o)
    {
      return (object) ((Campaign) o).CampaignObjectManager;
    }

    internal static object AutoGeneratedGetMemberValueIsCraftingEnabled(object o)
    {
      return (object) ((Campaign) o).IsCraftingEnabled;
    }

    internal static object AutoGeneratedGetMemberValueIsBannerEditorEnabled(object o)
    {
      return (object) ((Campaign) o).IsBannerEditorEnabled;
    }

    internal static object AutoGeneratedGetMemberValueIsFaceGenEnabled(object o)
    {
      return (object) ((Campaign) o).IsFaceGenEnabled;
    }

    internal static object AutoGeneratedGetMemberValueQuestManager(object o)
    {
      return (object) ((Campaign) o).QuestManager;
    }

    internal static object AutoGeneratedGetMemberValueIssueManager(object o)
    {
      return (object) ((Campaign) o).IssueManager;
    }

    internal static object AutoGeneratedGetMemberValueFactionManager(object o)
    {
      return (object) ((Campaign) o).FactionManager;
    }

    internal static object AutoGeneratedGetMemberValueCharacterRelationManager(object o)
    {
      return (object) ((Campaign) o).CharacterRelationManager;
    }

    internal static object AutoGeneratedGetMemberValueRomance(object o)
    {
      return (object) ((Campaign) o).Romance;
    }

    internal static object AutoGeneratedGetMemberValuePlayerCaptivity(object o)
    {
      return (object) ((Campaign) o).PlayerCaptivity;
    }

    internal static object AutoGeneratedGetMemberValuePlayerDefaultFaction(object o)
    {
      return (object) ((Campaign) o).PlayerDefaultFaction;
    }

    internal static object AutoGeneratedGetMemberValueMapStateData(object o)
    {
      return (object) ((Campaign) o).MapStateData;
    }

    internal static object AutoGeneratedGetMemberValueMapTimeTracker(object o)
    {
      return (object) ((Campaign) o).MapTimeTracker;
    }

    internal static object AutoGeneratedGetMemberValueCampaignStartTime(object o)
    {
      return (object) ((Campaign) o).CampaignStartTime;
    }

    internal static object AutoGeneratedGetMemberValueGameMode(object o)
    {
      return (object) ((Campaign) o).GameMode;
    }

    internal static object AutoGeneratedGetMemberValuePlayerProgress(object o)
    {
      return (object) ((Campaign) o).PlayerProgress;
    }

    internal static object AutoGeneratedGetMemberValueSiegeEventManager(object o)
    {
      return (object) ((Campaign) o).SiegeEventManager;
    }

    internal static object AutoGeneratedGetMemberValueMapEventManager(object o)
    {
      return (object) ((Campaign) o).MapEventManager;
    }

    internal static object AutoGeneratedGetMemberValue_curMapFrame(object o)
    {
      return (object) ((Campaign) o)._curMapFrame;
    }

    internal static object AutoGeneratedGetMemberValuePlayerEncounter(object o)
    {
      return (object) ((Campaign) o).PlayerEncounter;
    }

    internal static object AutoGeneratedGetMemberValueBarterManager(object o)
    {
      return (object) ((Campaign) o).BarterManager;
    }

    internal static object AutoGeneratedGetMemberValueIsMainHeroDisguised(object o)
    {
      return (object) ((Campaign) o).IsMainHeroDisguised;
    }

    internal static object AutoGeneratedGetMemberValueDesertionEnabled(object o)
    {
      return (object) ((Campaign) o).DesertionEnabled;
    }

    internal static object AutoGeneratedGetMemberValueMainParty(object o)
    {
      return (object) ((Campaign) o).MainParty;
    }

    internal static object AutoGeneratedGetMemberValueCampaignInformationManager(object o)
    {
      return (object) ((Campaign) o).CampaignInformationManager;
    }

    internal static object AutoGeneratedGetMemberValueVisualTrackerManager(object o)
    {
      return (object) ((Campaign) o).VisualTrackerManager;
    }

    internal static object AutoGeneratedGetMemberValuePlayerTraitDeveloper(object o)
    {
      return (object) ((Campaign) o).PlayerTraitDeveloper;
    }

    internal static object AutoGeneratedGetMemberValueOptions(object o)
    {
      return (object) ((Campaign) o).Options;
    }

    internal static object AutoGeneratedGetMemberValueTournamentManager(object o)
    {
      return (object) ((Campaign) o).TournamentManager;
    }

    internal static object AutoGeneratedGetMemberValueIsInitializedSinglePlayerReferences(object o)
    {
      return (object) ((Campaign) o).IsInitializedSinglePlayerReferences;
    }

    internal static object AutoGeneratedGetMemberValueLastTimeControlMode(object o)
    {
      return (object) ((Campaign) o).LastTimeControlMode;
    }

    internal static object AutoGeneratedGetMemberValueautoEnterTown(object o)
    {
      return (object) ((Campaign) o).autoEnterTown;
    }

    internal static object AutoGeneratedGetMemberValueMainHeroIllDays(object o)
    {
      return (object) ((Campaign) o).MainHeroIllDays;
    }

    internal static object AutoGeneratedGetMemberValueBusyHideouts(object o)
    {
      return (object) ((Campaign) o).BusyHideouts;
    }

    internal static object AutoGeneratedGetMemberValueKingdomManager(object o)
    {
      return (object) ((Campaign) o).KingdomManager;
    }

    internal static object AutoGeneratedGetMemberValue_campaignPeriodicEventManager(object o)
    {
      return (object) ((Campaign) o)._campaignPeriodicEventManager;
    }

    internal static object AutoGeneratedGetMemberValue_isMainPartyWaiting(object o)
    {
      return (object) ((Campaign) o)._isMainPartyWaiting;
    }

    internal static object AutoGeneratedGetMemberValue_newGameVersion(object o)
    {
      return (object) ((Campaign) o)._newGameVersion;
    }

    internal static object AutoGeneratedGetMemberValue_previouslyUsedModules(object o)
    {
      return (object) ((Campaign) o)._previouslyUsedModules;
    }

    internal static object AutoGeneratedGetMemberValue_usedGameVersions(object o)
    {
      return (object) ((Campaign) o)._usedGameVersions;
    }

    internal static object AutoGeneratedGetMemberValue_playerFormationPreferences(object o)
    {
      return (object) ((Campaign) o)._playerFormationPreferences;
    }

    internal static object AutoGeneratedGetMemberValue_campaignBehaviorManager(object o)
    {
      return (object) ((Campaign) o)._campaignBehaviorManager;
    }

    internal static object AutoGeneratedGetMemberValue_lastPartyIndex(object o)
    {
      return (object) ((Campaign) o)._lastPartyIndex;
    }

    internal static object AutoGeneratedGetMemberValue_cameraFollowParty(object o)
    {
      return (object) ((Campaign) o)._cameraFollowParty;
    }

    internal static object AutoGeneratedGetMemberValue_logEntryHistory(object o)
    {
      return (object) ((Campaign) o)._logEntryHistory;
    }

    [Flags]
    public enum PartyRestFlags : uint
    {
      None = 0,
      SafeMode = 1,
    }

    public enum GameLoadingType
    {
      Tutorial,
      NewCampaign,
      SavedCampaign,
      Editor,
    }
  }
}
