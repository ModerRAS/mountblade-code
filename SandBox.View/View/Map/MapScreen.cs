// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapScreen
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using Helpers;
using SandBox.View.Menu;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Engine.Screens;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.MountAndBlade.View.Scripts;
using TaleWorlds.MountAndBlade.ViewModelCollection.EscapeMenu;
using TaleWorlds.ObjectSystem;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View.Map
{
  [GameStateScreen(typeof (MapState))]
  public class MapScreen : ScreenBase, IMapStateHandler, IGameStateListener
  {
    private const float DoubleClickTimeLimit = 0.3f;
    private MenuViewContext _menuViewContext;
    private MenuContext _latestMenuContext;
    private bool _partyIconNeedsRefreshing;
    private uint _tooltipTargetHash;
    private object _tooltipTargetObject;
    private readonly ObservableCollection<MapView> _mapViews;
    private MapView[] _mapViewsCopyCache;
    private MapView _encounterOverlay;
    private MapView _armyOverlay;
    private MapReadyView _mapReadyView;
    private MapView _escapeMenuView;
    private MapView _battleSimulationView;
    private MapView _mapSiegeOverlayView;
    private MapView _campaignOptionsView;
    private MapView _mapConversationView;
    private MapView _marriageOfferPopupView;
    private MapView _mapCheatsView;
    public MapCameraView _mapCameraView;
    private MapNavigationHandler _navigationHandler = new MapNavigationHandler();
    private const int _frameDelayAmountForRenderActivation = 5;
    private float _timeSinceCreation;
    private bool _leftButtonDraggingMode;
    private UIntPtr _preSelectedSiegeEntityID;
    private Vec2 _oldMousePosition;
    private Vec2 _clickedPositionPixel;
    private Vec3 _clickedPosition;
    private Ray _mouseRay;
    private PartyVisual _preVisualOfSelectedEntity;
    private int _activatedFrameNo = Utilities.EngineFrameNo;
    public Dictionary<Tuple<Material, BannerCode>, Material> _characterBannerMaterialCache = new Dictionary<Tuple<Material, BannerCode>, Material>();
    private Tuple<ConversationCharacterData, ConversationCharacterData, MapScreen.TempConversationStateHandler> _conversationDataCache;
    private readonly int _displayedContextMenuType = -1;
    private double _lastReleaseTime;
    private double _lastPressTime;
    private double _secondLastPressTime;
    private bool _leftButtonDoubleClickOnSceneWidget;
    private float _waitForDoubleClickUntilTime;
    private float _timeToggleTimer = float.MaxValue;
    private bool _ignoreNextTimeToggle;
    private bool _exitOnSaveOver;
    private Scene _mapScene;
    private Campaign _campaign;
    private readonly MapState _mapState;
    private bool _isSceneViewEnabled;
    private bool _isReadyForRender;
    private bool _gpuMemoryCleared;
    private bool _focusLost;
    private bool _isKingdomDecisionsDirty;
    private bool _conversationOverThisFrame;
    private float _cheatPressTimer;
    private Dictionary<Tuple<Material, BannerCode>, Material> _bannerTexturedMaterialCache;
    private GameEntity _targetCircleEntitySmall;
    private GameEntity _targetCircleEntityBig;
    private GameEntity _targetCircleTown;
    private GameEntity _partyOutlineEntity;
    private GameEntity _townOutlineEntity;
    private Decal _targetDecalMeshSmall;
    private Decal _targetDecalMeshBig;
    private Decal _partyOutlineMesh;
    private Decal _settlementOutlineMesh;
    private Decal _targetTownMesh;
    private float _targetCircleRotationStartTime;
    private MapCursor _mapCursor = new MapCursor();
    private bool _mapSceneCursorWanted = true;
    private bool _mapSceneCursorActive;
    public IMapTracksCampaignBehavior MapTracksCampaignBehavior;
    private bool _isSoundOn = true;
    private float _soundCalculationTime;
    private const float SoundCalculationInterval = 0.2f;
    private uint _enemyPartyDecalColor = 4281663744;
    private uint _allyPartyDecalColor = 4279308800;
    private uint _neutralPartyDecalColor = 4294919959;
    private MapColorGradeManager _colorGradeManager;
    private bool _playerSiegeMachineSlotMeshesAdded;
    private GameEntity[] _defenderMachinesCircleEntities;
    private GameEntity[] _attackerRamMachinesCircleEntities;
    private GameEntity[] _attackerTowerMachinesCircleEntities;
    private GameEntity[] _attackerRangedMachinesCircleEntities;
    private string _emptyAttackerRangedDecalMaterialName = "decal_siege_ranged";
    private string _attackerRamMachineDecalMaterialName = "decal_siege_ram";
    private string _attackerTowerMachineDecalMaterialName = "decal_siege_tower";
    private string _attackerRangedMachineDecalMaterialName = "decal_siege_ranged";
    private string _defenderRangedMachineDecalMaterialName = "decal_defender_ranged_siege";
    private uint _preperationOrEnemySiegeEngineDecalColor = 4287064638;
    private uint _normalStartSiegeEngineDecalColor = 4278394186;
    private float _defenderMachineCircleDecalScale = 0.25f;
    private float _attackerMachineDecalScale = 0.38f;
    private bool _isNewDecalScaleImplementationEnabled;
    private uint _normalEndSiegeEngineDecalColor = 4284320212;
    private uint _hoveredSiegeEngineDecalColor = 4293956364;
    private uint _withMachineSiegeEngineDecalColor = 4283683126;
    private float _machineDecalAnimLoopTime = 0.5f;
    public bool TooltipHandlingDisabled;
    private readonly UIntPtr[] _intersectedEntityIDs = new UIntPtr[128];
    private readonly Intersection[] _intersectionInfos = new Intersection[128];
    private GameEntity[] _tickedMapEntities;
    private Mesh[] _tickedMapMeshes;
    private readonly List<MBCampaignEvent> _periodicCampaignUIEvents;
    private bool _ignoreLeftMouseRelease;

    public static MapScreen Instance { get; private set; }

    public CampaignMapSiegePrefabEntityCache PrefabEntityCache { get; private set; }

    public MapEncyclopediaView EncyclopediaScreenManager { get; private set; }

    public MapNotificationView MapNotificationView { get; private set; }

    public bool IsInMenu => this._menuViewContext != null;

    public bool IsEscapeMenuOpened { get; private set; }

    public PartyVisual CurrentVisualOfTooltip { get; private set; }

    public SceneLayer SceneLayer { get; private set; }

    public IInputContext Input => (IInputContext) this.SceneLayer.Input;

    public bool IsReady => this._isReadyForRender;

    public bool IsInBattleSimulation { get; private set; }

    public bool IsInTownManagement { get; private set; }

    public bool IsInHideoutTroopManage { get; private set; }

    public bool IsInArmyManagement { get; private set; }

    public bool IsInRecruitment { get; private set; }

    public bool IsBarExtended { get; private set; }

    public bool IsInCampaignOptions { get; private set; }

    public bool IsMarriageOfferPopupActive { get; private set; }

    public bool IsMapCheatsActive { get; private set; }

    public Dictionary<Tuple<Material, BannerCode>, Material> BannerTexturedMaterialCache
    {
      get
      {
        return this._bannerTexturedMaterialCache ?? (this._bannerTexturedMaterialCache = new Dictionary<Tuple<Material, BannerCode>, Material>());
      }
    }

    public bool MapSceneCursorActive
    {
      get => this._mapSceneCursorActive;
      set
      {
        if (this._mapSceneCursorActive == value)
          return;
        this._mapSceneCursorActive = value;
      }
    }

    public GameEntity ContourMaskEntity { get; private set; }

    public List<Mesh> InactiveLightMeshes { get; private set; }

    public List<Mesh> ActiveLightMeshes { get; private set; }

    public MapScreen(MapState mapState)
    {
      this._mapState = mapState;
      mapState.Handler = (IMapStateHandler) this;
      this._periodicCampaignUIEvents = new List<MBCampaignEvent>();
      this.InitializeVisuals();
      CampaignMusicHandler.Create();
      this._mapViews = new ObservableCollection<MapView>();
      this._mapViewsCopyCache = new MapView[0];
      this._mapCameraView = (MapCameraView) this.AddMapView<MapCameraView>();
      this.MapTracksCampaignBehavior = Campaign.Current.GetCampaignBehavior<IMapTracksCampaignBehavior>();
    }

    public void OnHoverMapEntity(IMapEntity mapEntity)
    {
      uint hashCode = (uint) mapEntity.GetHashCode();
      if ((int) this._tooltipTargetHash == (int) hashCode)
        return;
      this._tooltipTargetHash = hashCode;
      this._tooltipTargetObject = (object) null;
      mapEntity.OnHover();
    }

    public void SetupMapTooltipForTrack(Track track)
    {
      if (this._tooltipTargetObject == track)
        return;
      this._tooltipTargetObject = (object) track;
      this._tooltipTargetHash = 0U;
      InformationManager.ShowTooltip(typeof (Track), (object) track);
    }

    public void RemoveMapTooltip()
    {
      if (this._tooltipTargetObject == null && this._tooltipTargetHash == 0U)
        return;
      this._tooltipTargetObject = (object) null;
      this._tooltipTargetHash = 0U;
      MBInformationManager.HideInformations();
    }

    private static void PreloadTextures()
    {
      List<string> stringList = new List<string>();
      stringList.Add("gui_map_circle_enemy");
      stringList.Add("gui_map_circle_enemy_selected");
      stringList.Add("gui_map_circle_neutral");
      stringList.Add("gui_map_circle_neutral_selected");
      for (int index = 2; index <= 5; ++index)
      {
        stringList.Add("gui_map_circle_enemy_selected_" + (object) index);
        stringList.Add("gui_map_circle_neutral_selected_" + (object) index);
      }
      for (int index = 0; index < stringList.Count; ++index)
        Texture.GetFromResource(stringList[index]).PreloadTexture(false);
      stringList.Clear();
    }

    private void HandleSiegeEngineHoverEnd()
    {
      if (!(this._preSelectedSiegeEntityID != UIntPtr.Zero))
        return;
      MapScreen.FrameAndVisualOfEngines[this._preSelectedSiegeEntityID].Item2.OnMapHoverSiegeEngineEnd();
      this._preSelectedSiegeEntityID = UIntPtr.Zero;
    }

    private void SetCameraOfSceneLayer()
    {
      this.SceneLayer.SetCamera(this._mapCameraView.Camera);
      Vec3 origin = this._mapCameraView.CameraFrame.origin with
      {
        z = 0.0f
      };
      this.SceneLayer.SetFocusedShadowmap(false, ref origin, 0.0f);
    }

    protected override void OnResume()
    {
      base.OnResume();
      MapScreen.PreloadTextures();
      this._isSoundOn = true;
      this.RestartAmbientSounds();
      if (this._gpuMemoryCleared)
        this._gpuMemoryCleared = false;
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnResume();
      MenuContext menuContext = this._mapState.MenuContext;
      if (this._menuViewContext != null)
      {
        if (menuContext != null && menuContext != this._menuViewContext.MenuContext)
          this._menuViewContext.UpdateMenuContext(menuContext);
        else if (menuContext == null)
          this.ExitMenuContext();
      }
      this._menuViewContext?.OnResume();
      (Campaign.Current.MapSceneWrapper as MapScene).ValidateAgentVisualsReseted();
    }

    protected override void OnPause()
    {
      base.OnPause();
      MBInformationManager.HideInformations();
      this.PauseAmbientSounds();
      this._isSoundOn = false;
      this._activatedFrameNo = Utilities.EngineFrameNo;
      this.HandleIfSceneIsReady();
      this._conversationOverThisFrame = false;
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this._mapCameraView.OnActivate(this._leftButtonDraggingMode, this._clickedPosition);
      this._activatedFrameNo = Utilities.EngineFrameNo;
      this.HandleIfSceneIsReady();
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.MapWindow));
      this.SetCameraOfSceneLayer();
      this.RestartAmbientSounds();
      PartyBase.MainParty.SetVisualAsDirty();
    }

    public void ClearGPUMemory()
    {
      if (true)
        this.SceneLayer.ClearRuntimeGPUMemory(true);
      Texture.ReleaseGpuMemories();
      this._gpuMemoryCleared = true;
    }

    protected override void OnDeactivate()
    {
      Game.Current?.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.None));
      this.PauseAmbientSounds();
      this._menuViewContext?.StopAllSounds();
      MBInformationManager.HideInformations();
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnDeactivate();
      base.OnDeactivate();
    }

    public override void OnFocusChangeOnGameWindow(bool focusGained)
    {
      base.OnFocusChangeOnGameWindow(focusGained);
      if (!focusGained && BannerlordConfig.StopGameOnFocusLost)
      {
        Func<bool> anyInquiryActive = InformationManager.IsAnyInquiryActive;
        if ((anyInquiryActive != null ? (!anyInquiryActive() ? 1 : 0) : 0) != 0)
        {
          MapEncyclopediaView encyclopediaScreenManager = this.EncyclopediaScreenManager;
          if ((encyclopediaScreenManager != null ? (!encyclopediaScreenManager.IsEncyclopediaOpen ? 1 : 0) : 1) != 0 && this._mapViews.All<MapView>((Func<MapView, bool>) (m => m.IsOpeningEscapeMenuOnFocusChangeAllowed())))
            this.OnEscapeMenuToggled(true);
        }
      }
      this._focusLost = !focusGained;
    }

    public MapView AddMapView<T>(params object[] parameters) where T : MapView, new()
    {
      for (int index = 0; index < this._mapViews.Count; ++index)
      {
        if (this._mapViews[index] is T mapView)
        {
          Debug.FailedAssert("Map view already added to the list", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Map\\MapScreen.cs", nameof (AddMapView), 492);
          Debug.Print("Map view already added to the list: " + typeof (T).Name + ". Returning existing view instead of creating new one.");
          return (MapView) mapView;
        }
      }
      MapView mapView1 = SandBoxViewCreator.CreateMapView<T>(parameters);
      mapView1.MapScreen = this;
      mapView1.MapState = this._mapState;
      this._mapViews.Add(mapView1);
      mapView1.CreateLayout();
      return mapView1;
    }

    public T GetMapView<T>() where T : MapView
    {
      foreach (MapView mapView1 in (Collection<MapView>) this._mapViews)
      {
        if (mapView1 is T mapView2)
          return mapView2;
      }
      return default (T);
    }

    public void RemoveMapView(MapView mapView)
    {
      mapView.OnFinalize();
      this._mapViews.Remove(mapView);
    }

    public void AddEncounterOverlay(GameOverlays.MenuOverlayType type)
    {
      if (this._encounterOverlay != null)
        return;
      this._encounterOverlay = this.AddMapView<MapOverlayView>((object) type);
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnOverlayCreated();
    }

    public void AddArmyOverlay(GameOverlays.MapOverlayType type)
    {
      if (this._armyOverlay != null)
        return;
      this._armyOverlay = this.AddMapView<MapOverlayView>((object) type);
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnOverlayCreated();
    }

    public void RemoveEncounterOverlay()
    {
      if (this._encounterOverlay == null)
        return;
      this.RemoveMapView(this._encounterOverlay);
      this._encounterOverlay = (MapView) null;
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnOverlayClosed();
    }

    public void RemoveArmyOverlay()
    {
      if (this._armyOverlay == null)
        return;
      this.RemoveMapView(this._armyOverlay);
      this._armyOverlay = (MapView) null;
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnOverlayClosed();
    }

    protected override void OnInitialize()
    {
      base.OnInitialize();
      if (MBDebug.TestModeEnabled)
        this.CheckValidityOfItems();
      MapScreen.Instance = this;
      this._mapCameraView.Initialize();
      ViewSubModule.BannerTexturedMaterialCache = this.BannerTexturedMaterialCache;
      this.SceneLayer = new SceneLayer(autoToggleSceneView: false);
      this.SceneLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("Generic"));
      this.SceneLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.SceneLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this.SceneLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("MapHotKeyCategory"));
      this.AddLayer((ScreenLayer) this.SceneLayer);
      this._mapScene = ((MapScene) Campaign.Current.MapSceneWrapper).Scene;
      Utilities.SetAllocationAlwaysValidScene((Scene) null);
      this.SceneLayer.SetScene(this._mapScene);
      this.SceneLayer.SceneView.SetEnable(false);
      this.SceneLayer.SetSceneUsesShadows(true);
      this.SceneLayer.SetRenderWithPostfx(true);
      this.SceneLayer.SetSceneUsesContour(true);
      this.SceneLayer.SceneView.SetAcceptGlobalDebugRenderObjects(true);
      this.SceneLayer.SceneView.SetResolutionScaling(true);
      this.CollectTickableMapMeshes();
      this.MapNotificationView = this.AddMapView<MapNotificationView>() as MapNotificationView;
      this.AddMapView<MapBasicView>();
      this.AddMapView<MapSettlementNameplateView>();
      this.AddMapView<MapPartyNameplateView>();
      this.AddMapView<MapEventVisualsView>();
      this.AddMapView<MapMobilePartyTrackerView>();
      this.AddMapView<MapSaveView>();
      this.AddMapView<MapGamepadEffectsView>();
      this.EncyclopediaScreenManager = this.AddMapView<MapEncyclopediaView>() as MapEncyclopediaView;
      this.AddMapView<MapBarView>();
      this._mapReadyView = this.AddMapView<MapReadyView>() as MapReadyView;
      this._mapReadyView.SetIsMapSceneReady(false);
      this._mouseRay = new Ray(Vec3.Zero, Vec3.Up);
      if (PlayerSiege.PlayerSiegeEvent != null)
        ((IMapStateHandler) this)?.OnPlayerSiegeActivated();
      this.PrefabEntityCache = this.SceneLayer.SceneView.GetScene().GetFirstEntityWithScriptComponent<CampaignMapSiegePrefabEntityCache>().GetFirstScriptOfType<CampaignMapSiegePrefabEntityCache>();
      CampaignEvents.OnSaveOverEvent.AddNonSerializedListener((object) this, new Action<bool, string>(this.OnSaveOver));
      CampaignEvents.OnMarriageOfferedToPlayerEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero>(this.OnMarriageOfferedToPlayer));
      CampaignEvents.OnMarriageOfferCanceledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero>(this.OnMarriageOfferCanceled));
      GameEntity withScriptComponent = this._mapScene.GetFirstEntityWithScriptComponent<MapColorGradeManager>();
      if (!((NativeObject) withScriptComponent != (NativeObject) null))
        return;
      this._colorGradeManager = withScriptComponent.GetFirstScriptOfType<MapColorGradeManager>();
    }

    private void OnSaveOver(bool isSuccessful, string newSaveGameName)
    {
      if (!this._exitOnSaveOver)
        return;
      if (isSuccessful)
        this.OnExit();
      this._exitOnSaveOver = false;
    }

    private void OnMarriageOfferedToPlayer(Hero suitor, Hero maiden)
    {
      this._marriageOfferPopupView = this.AddMapView<MarriageOfferPopupView>((object) suitor, (object) maiden);
    }

    private void OnMarriageOfferCanceled(Hero suitor, Hero maiden)
    {
      if (this._marriageOfferPopupView == null)
        return;
      this.RemoveMapView(this._marriageOfferPopupView);
      this._marriageOfferPopupView = (MapView) null;
    }

    protected override void OnFinalize()
    {
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnFinalize();
      PartyVisualManager.Current.OnFinalized();
      base.OnFinalize();
      if ((NativeObject) this._mapScene != (NativeObject) null)
        this._mapScene.ClearAll();
      Common.MemoryCleanupGC();
      this._characterBannerMaterialCache.Clear();
      this._characterBannerMaterialCache = (Dictionary<Tuple<Material, BannerCode>, Material>) null;
      ViewSubModule.BannerTexturedMaterialCache = (Dictionary<Tuple<Material, BannerCode>, Material>) null;
      MBMusicManager.Current.DeactivateCampaignMode();
      MBMusicManager.Current.OnCampaignMusicHandlerFinalize();
      CampaignEvents.OnSaveOverEvent.ClearListeners((object) this);
      CampaignEvents.OnMarriageOfferedToPlayerEvent.ClearListeners((object) this);
      CampaignEvents.OnMarriageOfferCanceledEvent.ClearListeners((object) this);
      this._mapScene = (Scene) null;
      this._campaign = (Campaign) null;
      this._navigationHandler = (MapNavigationHandler) null;
      this._mapCameraView = (MapCameraView) null;
      MapScreen.Instance = (MapScreen) null;
    }

    public void OnHourlyTick()
    {
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnHourlyTick();
      Kingdom kingdom = Clan.PlayerClan.Kingdom;
      this._isKingdomDecisionsDirty = (kingdom != null ? kingdom.UnresolvedDecisions.FirstOrDefault<KingdomDecision>((Func<KingdomDecision, bool>) (d => d.NotifyPlayer && d.IsEnforced && d.IsPlayerParticipant && !d.ShouldBeCancelled())) : (KingdomDecision) null) != null;
    }

    private void OnRenderingStateChanged(bool startedRendering)
    {
      if (!startedRendering || !this._isSceneViewEnabled || this._conversationDataCache == null)
        return;
      Campaign.Current.ConversationManager.Handler = (IConversationStateHandler) null;
      Game.Current.GameStateManager.UnregisterActiveStateDisableRequest((object) this);
      this.HandleMapConversationInit(this._conversationDataCache.Item1, this._conversationDataCache.Item2);
      this._conversationDataCache.Item3.ApplyHandlerChangesTo(this._mapConversationView as IConversationStateHandler);
      this._conversationDataCache = (Tuple<ConversationCharacterData, ConversationCharacterData, MapScreen.TempConversationStateHandler>) null;
    }

    private void ShowNextKingdomDecisionPopup()
    {
      Kingdom kingdom = Clan.PlayerClan.Kingdom;
      KingdomDecision kingdomDecision = kingdom != null ? kingdom.UnresolvedDecisions.FirstOrDefault<KingdomDecision>((Func<KingdomDecision, bool>) (d => d.NotifyPlayer && d.IsEnforced && d.IsPlayerParticipant && !d.ShouldBeCancelled())) : (KingdomDecision) null;
      if (kingdomDecision != null)
      {
        InquiryData data = new InquiryData(new TextObject("{=A7349NHy}Critical Kingdom Decision").ToString(), kingdomDecision.GetChooseTitle().ToString(), true, false, new TextObject("{=bFzZwwjT}Examine").ToString(), "", (Action) (() => this.OpenKingdom()), (Action) null);
        kingdomDecision.NotifyPlayer = false;
        InformationManager.ShowInquiry(data, true);
        this._isKingdomDecisionsDirty = false;
      }
      else
        Debug.FailedAssert("There is no dirty decision but still demanded one", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Map\\MapScreen.cs", nameof (ShowNextKingdomDecisionPopup), 773);
    }

    void IMapStateHandler.OnMenuModeTick(float dt)
    {
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnMenuModeTick(dt);
    }

    private void HandleIfBlockerStatesDisabled()
    {
      int num1 = this._isReadyForRender ? 1 : 0;
      bool flag = this.SceneLayer.SceneView.ReadyToRender() && this.SceneLayer.SceneView.CheckSceneReadyToRender();
      bool isReady = ((this._isSceneViewEnabled ? 1 : (this._mapConversationView != null ? 1 : 0)) & (flag ? 1 : 0)) != 0;
      if (LoadingWindow.IsLoadingWindowActive & isReady)
        LoadingWindow.DisableGlobalLoadingWindow();
      this._mapReadyView.SetIsMapSceneReady(isReady);
      this._isReadyForRender = isReady;
      int num2 = this._isReadyForRender ? 1 : 0;
      if (num1 == num2)
        return;
      this.OnRenderingStateChanged(this._isReadyForRender);
    }

    private void CheckCursorState()
    {
      Vec3 zero1 = Vec3.Zero;
      Vec3 zero2 = Vec3.Zero;
      this.SceneLayer.SceneView.TranslateMouse(ref zero1, ref zero2);
      Vec3 clippedMouseNear = zero1;
      Vec3 clippedMouseFar = zero2;
      PathFaceRecord nullFaceRecord = PathFaceRecord.NullFaceRecord;
      this.GetCursorIntersectionPoint(ref clippedMouseNear, ref clippedMouseFar, out float _, out Vec3 _, ref nullFaceRecord);
      this.SceneLayer.ActiveCursor = Campaign.Current.MapSceneWrapper.AreFacesOnSameIsland(nullFaceRecord, MobileParty.MainParty.CurrentNavigationFace, false) ? CursorType.Default : CursorType.Disabled;
    }

    private void HandleIfSceneIsReady()
    {
      int num = Utilities.EngineFrameNo - this._activatedFrameNo;
      bool sceneViewEnabled = this._isSceneViewEnabled;
      bool flag;
      if (num < 5)
      {
        flag = false;
        this._colorGradeManager?.ApplyAtmosphere(true);
      }
      else
        flag = (this._mapConversationView != null ? 1 : 0) == 0 & ScreenManager.TopScreen == this;
      if (flag != this._isSceneViewEnabled)
      {
        this._isSceneViewEnabled = flag;
        this.SceneLayer.SceneView.SetEnable(this._isSceneViewEnabled);
        if (this._isSceneViewEnabled)
        {
          this._mapScene.CheckResources();
          if (this._focusLost && !this.IsEscapeMenuOpened)
            this.OnFocusChangeOnGameWindow(false);
        }
      }
      this.HandleIfBlockerStatesDisabled();
    }

    void IMapStateHandler.StartCameraAnimation(Vec2 targetPosition, float animationStopDuration)
    {
      this._mapCameraView.StartCameraAnimation(targetPosition, animationStopDuration);
    }

    void IMapStateHandler.BeforeTick(float dt)
    {
      this.HandleIfSceneIsReady();
      bool flag1 = MobileParty.MainParty != null && PartyBase.MainParty.IsValid;
      if (flag1 && !this._mapCameraView.CameraAnimationInProgress)
      {
        if (!this.IsInMenu && this.SceneLayer.Input.IsHotKeyPressed("MapChangeCursorMode"))
          this._mapSceneCursorWanted = !this._mapSceneCursorWanted;
        if (this.SceneLayer.Input.IsHotKeyPressed("MapClick"))
        {
          this._secondLastPressTime = this._lastPressTime;
          this._lastPressTime = (double) Time.ApplicationTime;
        }
        this._leftButtonDoubleClickOnSceneWidget = false;
        if (this.SceneLayer.Input.IsHotKeyReleased("MapClick"))
        {
          Vec2 mousePositionPixel = this.SceneLayer.Input.GetMousePositionPixel();
          float applicationTime = Time.ApplicationTime;
          this._leftButtonDoubleClickOnSceneWidget = (double) applicationTime - this._lastReleaseTime < 0.30000001192092896 && (double) applicationTime - this._secondLastPressTime < 0.44999998807907104 && (double) mousePositionPixel.Distance(this._oldMousePosition) < 10.0;
          if (this._leftButtonDoubleClickOnSceneWidget)
            this._waitForDoubleClickUntilTime = 0.0f;
          this._oldMousePosition = this.SceneLayer.Input.GetMousePositionPixel();
          this._lastReleaseTime = (double) applicationTime;
        }
        if (this.IsReady)
          this.HandleMouse(dt);
      }
      float deltaMouseScroll = this.SceneLayer.Input.GetDeltaMouseScroll();
      Vec3 zero1 = Vec3.Zero;
      Vec3 zero2 = Vec3.Zero;
      this.SceneLayer.SceneView.TranslateMouse(ref zero1, ref zero2);
      float gameKeyAxis = this.SceneLayer.Input.GetGameKeyAxis("CameraAxisX");
      float collisionDistance;
      Vec3 closestPoint;
      bool flag2 = this._mapScene.RayCastForClosestEntityOrTerrain(zero1, zero2, out collisionDistance, out closestPoint, excludeBodyFlags: BodyFlags.CameraCollisionRayCastExludeFlags);
      float num1 = 0.0f;
      float num2 = 0.0f;
      float num3 = 1f;
      if (((TaleWorlds.InputSystem.Input.IsGamepadActive || this.IsInMenu ? 0 : (ScreenManager.FocusedLayer == this.SceneLayer ? 1 : 0)) | (!TaleWorlds.InputSystem.Input.IsGamepadActive ? (false ? 1 : 0) : (this.MapSceneCursorActive ? 1 : 0))) != 0)
      {
        if (this.SceneLayer.Input.IsGameKeyDown(54))
          num3 = this._mapCameraView.CameraFastMoveMultiplier;
        num1 = this.SceneLayer.Input.GetGameKeyAxis("MapMovementAxisX") * num3;
        num2 = this.SceneLayer.Input.GetGameKeyAxis("MapMovementAxisY") * num3;
      }
      this._ignoreLeftMouseRelease = false;
      if (this.SceneLayer.Input.IsKeyPressed(InputKey.LeftMouseButton))
      {
        this._clickedPositionPixel = this.SceneLayer.Input.GetMousePositionPixel();
        this._mapScene.RayCastForClosestEntityOrTerrain(this._mouseRay.Origin, this._mouseRay.EndPoint, out collisionDistance, out this._clickedPosition, excludeBodyFlags: BodyFlags.CameraCollisionRayCastExludeFlags);
        if (this.CurrentVisualOfTooltip != null)
          this.RemoveMapTooltip();
        this._leftButtonDraggingMode = false;
      }
      else if (this.SceneLayer.Input.IsKeyDown(InputKey.LeftMouseButton) && !this.SceneLayer.Input.IsKeyReleased(InputKey.LeftMouseButton) && ((double) this.SceneLayer.Input.GetMousePositionPixel().DistanceSquared(this._clickedPositionPixel) > 300.0 || this._leftButtonDraggingMode) && !this.IsInMenu)
        this._leftButtonDraggingMode = true;
      else if (this._leftButtonDraggingMode)
      {
        this._leftButtonDraggingMode = false;
        this._ignoreLeftMouseRelease = true;
      }
      if (this.SceneLayer.Input.IsKeyDown(InputKey.MiddleMouseButton))
        MBWindowManager.DontChangeCursorPos();
      if (this.SceneLayer.Input.IsKeyReleased(InputKey.LeftMouseButton))
        this._clickedPositionPixel = this.SceneLayer.Input.GetMousePositionPixel();
      this.MapSceneCursorActive = !this.SceneLayer.Input.GetIsMouseActive() && !this.IsInMenu && ScreenManager.FocusedLayer == this.SceneLayer && this._mapSceneCursorWanted;
      MapCameraView.InputInformation inputInformation;
      inputInformation.IsMainPartyValid = flag1;
      inputInformation.IsMapReady = this.IsReady;
      inputInformation.IsControlDown = this.SceneLayer.Input.IsControlDown();
      inputInformation.IsMouseActive = this.SceneLayer.Input.GetIsMouseActive();
      inputInformation.CheatModeEnabled = Game.Current.CheatMode;
      inputInformation.DeltaMouseScroll = deltaMouseScroll;
      inputInformation.LeftMouseButtonPressed = this.SceneLayer.Input.IsKeyPressed(InputKey.LeftMouseButton);
      inputInformation.LeftMouseButtonDown = this.SceneLayer.Input.IsKeyDown(InputKey.LeftMouseButton);
      inputInformation.LeftMouseButtonReleased = this.SceneLayer.Input.IsKeyReleased(InputKey.LeftMouseButton);
      inputInformation.MiddleMouseButtonDown = this.SceneLayer.Input.IsKeyDown(InputKey.MiddleMouseButton);
      inputInformation.RightMouseButtonDown = this.SceneLayer.Input.IsKeyDown(InputKey.RightMouseButton);
      inputInformation.RotateLeftKeyDown = this.SceneLayer.Input.IsGameKeyDown(57);
      inputInformation.RotateRightKeyDown = this.SceneLayer.Input.IsGameKeyDown(58);
      inputInformation.PartyMoveUpKey = this.SceneLayer.Input.IsGameKeyDown(49);
      inputInformation.PartyMoveDownKey = this.SceneLayer.Input.IsGameKeyDown(50);
      inputInformation.PartyMoveLeftKey = this.SceneLayer.Input.IsGameKeyDown(52);
      inputInformation.PartyMoveRightKey = this.SceneLayer.Input.IsGameKeyDown(51);
      inputInformation.MapZoomIn = this.SceneLayer.Input.GetGameKeyState(55);
      inputInformation.MapZoomOut = this.SceneLayer.Input.GetGameKeyState(56);
      inputInformation.CameraFollowModeKeyPressed = this.SceneLayer.Input.IsGameKeyPressed(63);
      inputInformation.MousePositionPixel = this.SceneLayer.Input.GetMousePositionPixel();
      inputInformation.ClickedPositionPixel = this._clickedPositionPixel;
      inputInformation.ClickedPosition = this._clickedPosition;
      inputInformation.LeftButtonDraggingMode = this._leftButtonDraggingMode;
      inputInformation.IsInMenu = this.IsInMenu;
      inputInformation.WorldMouseNear = zero1;
      inputInformation.WorldMouseFar = zero2;
      inputInformation.MouseSensitivity = this.SceneLayer.Input.GetMouseSensitivity();
      inputInformation.MouseMoveX = this.SceneLayer.Input.GetMouseMoveX();
      inputInformation.MouseMoveY = this.SceneLayer.Input.GetMouseMoveY();
      inputInformation.HorizontalCameraInput = gameKeyAxis;
      inputInformation.RayCastForClosestEntityOrTerrainCondition = flag2;
      inputInformation.ProjectedPosition = closestPoint;
      inputInformation.RX = num1;
      inputInformation.RY = num2;
      inputInformation.RS = num3;
      inputInformation.Dt = dt;
      this._mapCameraView.OnBeforeTick(in inputInformation);
      this._mapCursor.SetVisible(this.MapSceneCursorActive);
      if (flag1 && !this._campaign.TimeControlModeLock)
      {
        if (this._mapState.AtMenu)
        {
          if (Campaign.Current.CurrentMenuContext != null)
          {
            GameMenu gameMenu = Campaign.Current.CurrentMenuContext.GameMenu;
            if ((gameMenu != null ? (gameMenu.IsWaitActive ? 1 : 0) : 0) == 0)
              goto label_63;
          }
          else
            goto label_63;
        }
        float applicationTime = Time.ApplicationTime;
        if (this.SceneLayer.Input.IsGameKeyPressed(62) && (double) this._timeToggleTimer == 3.4028234663852886E+38)
          this._timeToggleTimer = applicationTime;
        if (this.SceneLayer.Input.IsGameKeyPressed(62) && (double) applicationTime - (double) this._timeToggleTimer > 0.40000000596046448)
        {
          if (this._campaign.TimeControlMode == CampaignTimeControlMode.StoppablePlay || this._campaign.TimeControlMode == CampaignTimeControlMode.UnstoppablePlay)
            this._campaign.SetTimeSpeed(2);
          else if (this._campaign.TimeControlMode == CampaignTimeControlMode.StoppableFastForward || this._campaign.TimeControlMode == CampaignTimeControlMode.UnstoppableFastForward)
            this._campaign.SetTimeSpeed(1);
          else if (this._campaign.TimeControlMode == CampaignTimeControlMode.Stop)
            this._campaign.SetTimeSpeed(1);
          else if (this._campaign.TimeControlMode == CampaignTimeControlMode.FastForwardStop)
            this._campaign.SetTimeSpeed(2);
          this._timeToggleTimer = float.MaxValue;
          this._ignoreNextTimeToggle = true;
        }
        else if (this.SceneLayer.Input.IsGameKeyPressed(62))
        {
          if (this._ignoreNextTimeToggle)
          {
            this._ignoreNextTimeToggle = false;
          }
          else
          {
            this._waitForDoubleClickUntilTime = 0.0f;
            if (this._campaign.TimeControlMode == CampaignTimeControlMode.UnstoppableFastForward || this._campaign.TimeControlMode == CampaignTimeControlMode.UnstoppablePlay || (this._campaign.TimeControlMode == CampaignTimeControlMode.StoppableFastForward || this._campaign.TimeControlMode == CampaignTimeControlMode.StoppablePlay) && !this._campaign.IsMainPartyWaiting)
              this._campaign.SetTimeSpeed(0);
            else if (this._campaign.TimeControlMode == CampaignTimeControlMode.Stop || this._campaign.TimeControlMode == CampaignTimeControlMode.StoppablePlay)
              this._campaign.SetTimeSpeed(1);
            else if (this._campaign.TimeControlMode == CampaignTimeControlMode.FastForwardStop || this._campaign.TimeControlMode == CampaignTimeControlMode.StoppableFastForward)
              this._campaign.SetTimeSpeed(2);
          }
          this._timeToggleTimer = float.MaxValue;
        }
        else if (this.SceneLayer.Input.IsGameKeyPressed(59))
        {
          this._waitForDoubleClickUntilTime = 0.0f;
          this._campaign.SetTimeSpeed(0);
        }
        else if (this.SceneLayer.Input.IsGameKeyPressed(60))
        {
          this._waitForDoubleClickUntilTime = 0.0f;
          this._campaign.SetTimeSpeed(1);
        }
        else if (this.SceneLayer.Input.IsGameKeyPressed(61))
        {
          this._waitForDoubleClickUntilTime = 0.0f;
          this._campaign.SetTimeSpeed(2);
        }
        else if (this.SceneLayer.Input.IsGameKeyPressed(64))
        {
          if (this._campaign.TimeControlMode == CampaignTimeControlMode.UnstoppableFastForward || this._campaign.TimeControlMode == CampaignTimeControlMode.StoppableFastForward)
            this._campaign.SetTimeSpeed(0);
          else
            this._campaign.SetTimeSpeed(2);
        }
      }
label_63:
      if (!flag1 && this.CurrentVisualOfTooltip != null)
      {
        this.CurrentVisualOfTooltip = (PartyVisual) null;
        this.RemoveMapTooltip();
      }
      this.SetCameraOfSceneLayer();
      if (this.SceneLayer.Input.GetIsMouseActive() || !Campaign.Current.GameStarted)
        return;
      this._mapCursor.BeforeTick(dt);
    }

    void IMapStateHandler.Tick(float dt)
    {
      if (this._mapViewsCopyCache.Length != this._mapViews.Count || !((IEnumerable<MapView>) this._mapViewsCopyCache).SequenceEqual<MapView>((IEnumerable<MapView>) this._mapViews))
      {
        this._mapViewsCopyCache = new MapView[this._mapViews.Count];
        this._mapViews.CopyTo(this._mapViewsCopyCache, 0);
      }
      if (!this.IsInMenu)
      {
        if (this._isKingdomDecisionsDirty)
        {
          this.ShowNextKingdomDecisionPopup();
        }
        else
        {
          if (ViewModel.UIDebugMode && this.DebugInput.IsHotKeyDown("UIExtendedDebugKey") && this.DebugInput.IsHotKeyPressed("MapScreenHotkeyOpenEncyclopedia"))
            this.OpenEncyclopedia();
          int num = Game.Current.CheatMode ? 1 : 0;
          if (num != 0 && this.DebugInput.IsHotKeyPressed("MapScreenHotkeySwitchCampaignTrueSight"))
            this._campaign.TrueSight = !this._campaign.TrueSight;
          if (num != 0)
            this.DebugInput.IsHotKeyPressed("MapScreenPrintMultiLineText");
          for (int index = this._mapViewsCopyCache.Length - 1; index >= 0; --index)
          {
            if (!this._mapViewsCopyCache[index].IsFinalized)
              this._mapViewsCopyCache[index].OnFrameTick(dt);
          }
        }
      }
      this._conversationOverThisFrame = false;
    }

    void IMapStateHandler.OnIdleTick(float dt)
    {
      this.HandleIfSceneIsReady();
      this.RemoveMapTooltip();
      if (this._mapViewsCopyCache.Length != this._mapViews.Count || !((IEnumerable<MapView>) this._mapViewsCopyCache).SequenceEqual<MapView>((IEnumerable<MapView>) this._mapViews))
      {
        this._mapViewsCopyCache = new MapView[this._mapViews.Count];
        this._mapViews.CopyTo(this._mapViewsCopyCache, 0);
      }
      for (int index = this._mapViewsCopyCache.Length - 1; index >= 0; --index)
      {
        if (!this._mapViewsCopyCache[index].IsFinalized)
          this._mapViewsCopyCache[index].OnIdleTick(dt);
      }
      this._conversationOverThisFrame = false;
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      MBDebug.SetErrorReportScene(this._mapScene);
      this.UpdateMenuView();
      if (this.IsInMenu)
      {
        this._menuViewContext.OnFrameTick(dt);
        if (this.SceneLayer.Input.IsGameKeyPressed(4))
        {
          GameMenuOption leaveMenuOption = Campaign.Current.GameMenuManager.GetLeaveMenuOption(this._menuViewContext.MenuContext);
          if (leaveMenuOption != null)
          {
            UISoundsHelper.PlayUISound("event:/ui/default");
            if (this._menuViewContext.MenuContext.GameMenu.IsWaitMenu)
              this._menuViewContext.MenuContext.GameMenu.EndWait();
            leaveMenuOption.RunConsequence(this._menuViewContext.MenuContext);
          }
        }
      }
      else if (Campaign.Current != null && !this.IsInBattleSimulation && !this.IsInArmyManagement && !this.IsMarriageOfferPopupActive && !this.IsMapCheatsActive)
      {
        Kingdom kingdom = Clan.PlayerClan.Kingdom;
        KingdomDecision kingdomDecision;
        if (kingdom == null)
        {
          kingdomDecision = (KingdomDecision) null;
        }
        else
        {
          MBReadOnlyList<KingdomDecision> unresolvedDecisions = kingdom.UnresolvedDecisions;
          kingdomDecision = unresolvedDecisions != null ? unresolvedDecisions.FirstOrDefault<KingdomDecision>((Func<KingdomDecision, bool>) (d => d.NeedsPlayerResolution && !d.ShouldBeCancelled())) : (KingdomDecision) null;
        }
        if (kingdomDecision != null)
          this.OpenKingdom();
      }
      if (this._partyIconNeedsRefreshing)
      {
        this._partyIconNeedsRefreshing = false;
        PartyBase.MainParty.SetVisualAsDirty();
      }
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnMapScreenUpdate(dt);
      this.RefreshMapSiegeOverlayRequired();
      if (PlayerSiege.PlayerSiegeEvent != null && this._playerSiegeMachineSlotMeshesAdded)
        this.TickSiegeMachineCircles();
      this._timeSinceCreation += dt;
    }

    private void UpdateMenuView()
    {
      if (this._latestMenuContext == null && this.IsInMenu)
      {
        this.ExitMenuContext();
      }
      else
      {
        if ((this.IsInMenu || this._latestMenuContext == null) && (!this.IsInMenu || this._menuViewContext.MenuContext == this._latestMenuContext))
          return;
        this.EnterMenuContext(this._latestMenuContext);
      }
    }

    private void EnterMenuContext(MenuContext menuContext)
    {
      this._mapCameraView.SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
      Campaign.Current.CameraFollowParty = PartyBase.MainParty;
      if (!this.IsInMenu)
        this._menuViewContext = new MenuViewContext((ScreenBase) this, menuContext);
      else
        this._menuViewContext.UpdateMenuContext(menuContext);
      this._menuViewContext.OnInitialize();
      this._menuViewContext.OnActivate();
      if (this._mapConversationView == null)
        return;
      this._menuViewContext.OnMapConversationActivated();
    }

    private void ExitMenuContext()
    {
      this._menuViewContext.OnGameStateDeactivate();
      this._menuViewContext.OnDeactivate();
      this._menuViewContext.OnFinalize();
      this._menuViewContext = (MenuViewContext) null;
    }

    private void OpenBannerEditorScreen()
    {
      if (!Campaign.Current.IsBannerEditorEnabled)
        return;
      this._partyIconNeedsRefreshing = true;
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<BannerEditorState>());
    }

    private void OpenFaceGeneratorScreen()
    {
      if (!Campaign.Current.IsFaceGenEnabled)
        return;
      GameStateManager.Current.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<BarberState>((object) Hero.MainHero.CharacterObject, (object) CharacterHelper.GetFaceGeneratorFilter()));
    }

    public void OnExit()
    {
      this._mapCameraView.OnExit();
      MBGameManager.EndGame();
    }

    private void SetMapSiegeOverlayState(bool isActive)
    {
      this._mapCameraView.OnSetMapSiegeOverlayState(isActive, this._mapSiegeOverlayView == null);
      if (this._mapSiegeOverlayView != null && !isActive)
      {
        this.RemoveMapView(this._mapSiegeOverlayView);
        this._mapSiegeOverlayView = (MapView) null;
      }
      else
      {
        if (!(this._mapSiegeOverlayView == null & isActive) || PlayerSiege.PlayerSiegeEvent == null)
          return;
        this._mapSiegeOverlayView = this.AddMapView<MapSiegeOverlayView>();
        if (this._playerSiegeMachineSlotMeshesAdded)
          return;
        this.InitializeSiegeCircleVisuals();
        this._playerSiegeMachineSlotMeshesAdded = true;
      }
    }

    private void RefreshMapSiegeOverlayRequired()
    {
      this._mapCameraView.OnRefreshMapSiegeOverlayRequired(this._mapSiegeOverlayView == null);
      if (this._playerSiegeMachineSlotMeshesAdded && PlayerSiege.PlayerSiegeEvent != null)
      {
        Settlement besiegedSettlement = PlayerSiege.PlayerSiegeEvent.BesiegedSettlement;
        if ((besiegedSettlement != null ? (besiegedSettlement.CurrentSiegeState == Settlement.SiegeState.InTheLordsHall ? 1 : 0) : 0) != 0)
        {
          this.RemoveSiegeCircleVisuals();
          this._playerSiegeMachineSlotMeshesAdded = false;
          return;
        }
      }
      if (PlayerSiege.PlayerSiegeEvent == null && this._mapSiegeOverlayView != null)
      {
        this.RemoveMapView(this._mapSiegeOverlayView);
        this._mapSiegeOverlayView = (MapView) null;
        if (!this._playerSiegeMachineSlotMeshesAdded)
          return;
        this.RemoveSiegeCircleVisuals();
        this._playerSiegeMachineSlotMeshesAdded = false;
      }
      else
      {
        if (PlayerSiege.PlayerSiegeEvent == null || this._mapSiegeOverlayView != null)
          return;
        this._mapSiegeOverlayView = this.AddMapView<MapSiegeOverlayView>();
        if (this._playerSiegeMachineSlotMeshesAdded)
          return;
        this.InitializeSiegeCircleVisuals();
        this._playerSiegeMachineSlotMeshesAdded = true;
      }
    }

    private void OnEscapeMenuToggled(bool isOpened = false)
    {
      this._mapCameraView.OnEscapeMenuToggled(isOpened);
      if (this.IsEscapeMenuOpened == isOpened)
        return;
      this.IsEscapeMenuOpened = isOpened;
      if (isOpened)
      {
        List<EscapeMenuItemVM> escapeMenuItems = this.GetEscapeMenuItems();
        Game.Current.GameStateManager.RegisterActiveStateDisableRequest((object) this);
        this._escapeMenuView = this.AddMapView<MapEscapeMenuView>((object) escapeMenuItems);
      }
      else
      {
        this.RemoveMapView(this._escapeMenuView);
        this._escapeMenuView = (MapView) null;
        Game.Current.GameStateManager.UnregisterActiveStateDisableRequest((object) this);
      }
    }

    private void CheckValidityOfItems()
    {
      foreach (ItemObject objectType in (List<ItemObject>) MBObjectManager.Instance.GetObjectTypeList<ItemObject>())
      {
        if (objectType.IsUsingTeamColor)
        {
          MetaMesh copy = MetaMesh.GetCopy(objectType.MultiMeshName, false);
          for (int meshIndex = 0; meshIndex < copy.MeshCount; ++meshIndex)
          {
            Material material = copy.GetMeshAtIndex(meshIndex).GetMaterial();
            if (material.Name != "vertex_color_lighting_skinned" && material.Name != "vertex_color_lighting" && (NativeObject) material.GetTexture(Material.MBTextureType.DiffuseMap2) == (NativeObject) null)
            {
              MBDebug.ShowWarning("Item object(" + (object) objectType.Name + ") has 'Using Team Color' flag but does not have a mask texture in diffuse2 slot. ");
              break;
            }
          }
        }
      }
    }

    public void GetCursorIntersectionPoint(
      ref Vec3 clippedMouseNear,
      ref Vec3 clippedMouseFar,
      out float closestDistanceSquared,
      out Vec3 intersectionPoint,
      ref PathFaceRecord currentFace,
      BodyFlags excludedBodyFlags = BodyFlags.CommonFocusRayCastExcludeFlags)
    {
      double num = (double) (clippedMouseFar - clippedMouseNear).Normalize();
      Vec3 direction = clippedMouseFar - clippedMouseNear;
      float maxDistance = direction.Normalize();
      this._mouseRay.Reset(clippedMouseNear, direction, maxDistance);
      intersectionPoint = Vec3.Zero;
      closestDistanceSquared = 1E+12f;
      float collisionDistance;
      if (this.SceneLayer.SceneView.RayCastForClosestEntityOrTerrain(clippedMouseNear, clippedMouseFar, out collisionDistance, out Vec3 _, excludeBodyFlags: excludedBodyFlags))
      {
        closestDistanceSquared = collisionDistance * collisionDistance;
        intersectionPoint = clippedMouseNear + direction * collisionDistance;
      }
      currentFace = Campaign.Current.MapSceneWrapper.GetFaceIndex(intersectionPoint.AsVec2);
    }

    public void FastMoveCameraToPosition(Vec2 target)
    {
      this._mapCameraView.FastMoveCameraToPosition(target, this.IsInMenu);
    }

    private void HandleMouse(float dt)
    {
      if (!Campaign.Current.GameStarted)
        return;
      Track track = (Track) null;
      Vec3 zero1 = Vec3.Zero;
      Vec3 zero2 = Vec3.Zero;
      this.SceneLayer.SceneView.TranslateMouse(ref zero1, ref zero2);
      Vec3 clippedMouseNear = zero1;
      Vec3 clippedMouseFar = zero2;
      PathFaceRecord nullFaceRecord = PathFaceRecord.NullFaceRecord;
      this.CheckCursorState();
      float closestDistanceSquared;
      this.GetCursorIntersectionPoint(ref clippedMouseNear, ref clippedMouseFar, out closestDistanceSquared, out Vec3 _, ref nullFaceRecord);
      Vec3 intersectionPoint;
      this.GetCursorIntersectionPoint(ref clippedMouseNear, ref clippedMouseFar, out float _, out intersectionPoint, ref nullFaceRecord, BodyFlags.CommonFocusRayCastExcludeFlags | BodyFlags.Moveable);
      int length1 = this._mapScene.SelectEntitiesCollidedWith(ref this._mouseRay, this._intersectionInfos, this._intersectedEntityIDs);
      bool flag1 = false;
      float num1 = MathF.Sqrt(closestDistanceSquared) + 1f;
      float num2 = num1;
      PartyVisual partyVisual1 = (PartyVisual) null;
      PartyVisual visualOfSelectedEntity = (PartyVisual) null;
      bool flag2 = false;
      for (int index = length1 - 1; index >= 0; --index)
      {
        UIntPtr intersectedEntityId = this._intersectedEntityIDs[index];
        if (intersectedEntityId != UIntPtr.Zero)
        {
          PartyVisual partyVisual2;
          if (MapScreen.VisualsOfEntities.TryGetValue(intersectedEntityId, out partyVisual2) && partyVisual2.IsVisibleOrFadingOut())
          {
            PartyVisual partyVisual3 = partyVisual2;
            Intersection intersectionInfo = this._intersectionInfos[index];
            float length2 = (zero1 - intersectionInfo.IntersectionPoint).Length;
            if (partyVisual3.PartyBase.IsMobile)
              length2 -= 1.5f;
            if ((double) length2 < (double) num2)
            {
              num2 = length2;
              partyVisual1 = !partyVisual3.PartyBase.IsMobile || partyVisual3.PartyBase.MobileParty.AttachedTo == null ? partyVisual2 : PartyVisualManager.Current.GetVisualOfParty(partyVisual3.PartyBase.MobileParty.AttachedTo.Party);
              flag1 = true;
            }
            if ((double) length2 < (double) num1 && (!partyVisual3.PartyBase.IsMobile || partyVisual3.PartyBase != PartyBase.MainParty && (partyVisual3.PartyBase.MobileParty.AttachedTo == null || partyVisual3.PartyBase.MobileParty.AttachedTo != MobileParty.MainParty)))
            {
              num1 = length2;
              visualOfSelectedEntity = !partyVisual3.PartyBase.IsMobile || partyVisual3.PartyBase.MobileParty.AttachedTo == null ? partyVisual3 : PartyVisualManager.Current.GetVisualOfParty(partyVisual3.PartyBase.MobileParty.AttachedTo.Party);
            }
          }
          else if (ScreenManager.FirstHitLayer == this.SceneLayer && MapScreen.FrameAndVisualOfEngines.ContainsKey(intersectedEntityId))
          {
            flag2 = true;
            if (this._preSelectedSiegeEntityID != intersectedEntityId)
            {
              Tuple<MatrixFrame, PartyVisual> andVisualOfEngine = MapScreen.FrameAndVisualOfEngines[intersectedEntityId];
              andVisualOfEngine.Item2.OnMapHoverSiegeEngine(andVisualOfEngine.Item1);
              this._preSelectedSiegeEntityID = intersectedEntityId;
            }
          }
        }
      }
      if (!flag2)
        this.HandleSiegeEngineHoverEnd();
      Array.Clear((Array) this._intersectedEntityIDs, 0, length1);
      Array.Clear((Array) this._intersectionInfos, 0, length1);
      if (flag1)
      {
        if (this._displayedContextMenuType < 0)
          this.SceneLayer.ActiveCursor = CursorType.Default;
      }
      else
        track = this._campaign.GetEntityComponent<MapTracksVisual>().GetTrackOnMouse(this._mouseRay, intersectionPoint);
      float gameKeyAxis = this.SceneLayer.Input.GetGameKeyAxis("CameraAxisY");
      this._mapCameraView.HandleMouse(this.SceneLayer.Input.IsKeyDown(InputKey.RightMouseButton), gameKeyAxis, this.SceneLayer.Input.GetMouseMoveY(), dt);
      if (this.SceneLayer.Input.IsKeyDown(InputKey.RightMouseButton))
        MBWindowManager.DontChangeCursorPos();
      if (ScreenManager.FirstHitLayer == this.SceneLayer && this.SceneLayer.Input.IsHotKeyReleased("MapClick") && !this._leftButtonDraggingMode && !this._ignoreLeftMouseRelease)
      {
        if (this._leftButtonDoubleClickOnSceneWidget)
        {
          this.HandleLeftMouseButtonClick(this._preSelectedSiegeEntityID, this._preVisualOfSelectedEntity, intersectionPoint, nullFaceRecord);
        }
        else
        {
          this.HandleLeftMouseButtonClick(this._preSelectedSiegeEntityID, visualOfSelectedEntity, intersectionPoint, nullFaceRecord);
          this._preVisualOfSelectedEntity = visualOfSelectedEntity;
        }
      }
      if (Campaign.Current.TimeControlMode == CampaignTimeControlMode.StoppableFastForward && (double) this._waitForDoubleClickUntilTime > 0.0 && (double) this._waitForDoubleClickUntilTime < (double) Time.ApplicationTime)
      {
        Campaign.Current.TimeControlMode = CampaignTimeControlMode.StoppablePlay;
        this._waitForDoubleClickUntilTime = 0.0f;
      }
      if (ScreenManager.FirstHitLayer == this.SceneLayer)
      {
        if (partyVisual1 != null)
        {
          if (this.CurrentVisualOfTooltip != partyVisual1)
            this.RemoveMapTooltip();
          IMapEntity mapEntity = partyVisual1.GetMapEntity();
          if (this.SceneLayer.Input.IsGameKeyPressed(66))
          {
            mapEntity.OnOpenEncyclopedia();
            this._mapCursor.SetVisible(false);
          }
          if (mapEntity is ITrackableCampaignObject trackableCampaignObject && this.SceneLayer.Input.IsGameKeyPressed(65))
          {
            if (Campaign.Current.VisualTrackerManager.CheckTracked((ITrackableBase) trackableCampaignObject))
              Campaign.Current.VisualTrackerManager.RemoveTrackedObject((ITrackableBase) trackableCampaignObject);
            else
              Campaign.Current.VisualTrackerManager.RegisterObject(trackableCampaignObject);
          }
          this.OnHoverMapEntity(mapEntity);
          this.CurrentVisualOfTooltip = partyVisual1;
        }
        else if (track != null)
        {
          this.CurrentVisualOfTooltip = (PartyVisual) null;
          this.SetupMapTooltipForTrack(track);
        }
        else
        {
          if (this.TooltipHandlingDisabled)
            return;
          this.CurrentVisualOfTooltip = (PartyVisual) null;
          this.RemoveMapTooltip();
        }
      }
      else
      {
        this.CurrentVisualOfTooltip = (PartyVisual) null;
        this.RemoveMapTooltip();
        this.HandleSiegeEngineHoverEnd();
      }
    }

    private void HandleLeftMouseButtonClick(
      UIntPtr selectedSiegeEntityID,
      PartyVisual visualOfSelectedEntity,
      Vec3 intersectionPoint,
      PathFaceRecord mouseOverFaceIndex)
    {
      this._mapCameraView.HandleLeftMouseButtonClick(this.SceneLayer.Input.GetIsMouseActive());
      if (!this._mapState.AtMenu)
      {
        if (visualOfSelectedEntity?.GetMapEntity() != null)
        {
          IMapEntity mapEntity = visualOfSelectedEntity.GetMapEntity();
          if (visualOfSelectedEntity.PartyBase == PartyBase.MainParty)
          {
            MobileParty.MainParty.Ai.SetMoveModeHold();
          }
          else
          {
            if (!this._mapScene.DoesPathExistBetweenFaces(Campaign.Current.MapSceneWrapper.GetFaceIndex(mapEntity.InteractionPosition).FaceIndex, MobileParty.MainParty.CurrentNavigationFace.FaceIndex, false) || !this._mapCameraView.ProcessCameraInput || PartyBase.MainParty.MapEvent != null)
              return;
            if (mapEntity.OnMapClick(this.SceneLayer.Input.IsHotKeyDown("MapFollowModifier")))
            {
              if (!this._leftButtonDoubleClickOnSceneWidget && Campaign.Current.TimeControlMode == CampaignTimeControlMode.StoppableFastForward)
              {
                this._waitForDoubleClickUntilTime = Time.ApplicationTime + 0.3f;
                Campaign.Current.TimeControlMode = CampaignTimeControlMode.StoppableFastForward;
              }
              else
                Campaign.Current.TimeControlMode = this._leftButtonDoubleClickOnSceneWidget ? CampaignTimeControlMode.StoppableFastForward : CampaignTimeControlMode.StoppablePlay;
              if (TaleWorlds.InputSystem.Input.IsGamepadActive)
              {
                if (mapEntity.IsMobileEntity)
                {
                  if (mapEntity.IsAllyOf(PartyBase.MainParty.MapFaction))
                    UISoundsHelper.PlayUISound("event:/ui/campaign/click_party");
                  else
                    UISoundsHelper.PlayUISound("event:/ui/campaign/click_party_enemy");
                }
                else if (mapEntity.IsAllyOf(PartyBase.MainParty.MapFaction))
                  UISoundsHelper.PlayUISound("event:/ui/campaign/click_settlement");
                else
                  UISoundsHelper.PlayUISound("event:/ui/campaign/click_settlement_enemy");
              }
            }
            MobileParty.MainParty.Ai.ForceAiNoPathMode = false;
          }
        }
        else
        {
          if (!mouseOverFaceIndex.IsValid())
            return;
          bool flag;
          if (this.Input.IsControlDown() && Game.Current.CheatMode)
          {
            if (MobileParty.MainParty.Army != null)
            {
              foreach (MobileParty attachedParty in (List<MobileParty>) MobileParty.MainParty.Army.LeaderParty.AttachedParties)
                attachedParty.Position2D += intersectionPoint.AsVec2 - MobileParty.MainParty.Position2D;
            }
            MobileParty.MainParty.Position2D = intersectionPoint.AsVec2;
            MobileParty.MainParty.Ai.SetMoveModeHold();
            foreach (MobileParty mobileParty in (List<MobileParty>) MobileParty.All)
              mobileParty.Party.UpdateVisibilityAndInspected();
            foreach (Settlement settlement in (List<Settlement>) Settlement.All)
              settlement.Party.UpdateVisibilityAndInspected();
            MBDebug.Print("main party cheat move! - " + (object) intersectionPoint.x + " " + (object) intersectionPoint.y);
            flag = true;
          }
          else
            flag = Campaign.Current.MapSceneWrapper.AreFacesOnSameIsland(mouseOverFaceIndex, MobileParty.MainParty.CurrentNavigationFace, false);
          if (flag && this._mapCameraView.ProcessCameraInput && MobileParty.MainParty.MapEvent == null)
          {
            this._mapState.ProcessTravel(intersectionPoint.AsVec2);
            if (!this._leftButtonDoubleClickOnSceneWidget && Campaign.Current.TimeControlMode == CampaignTimeControlMode.StoppableFastForward)
            {
              this._waitForDoubleClickUntilTime = Time.ApplicationTime + 0.3f;
              Campaign.Current.TimeControlMode = CampaignTimeControlMode.StoppableFastForward;
            }
            else
              Campaign.Current.TimeControlMode = this._leftButtonDoubleClickOnSceneWidget ? CampaignTimeControlMode.StoppableFastForward : CampaignTimeControlMode.StoppablePlay;
          }
          this.OnTerrainClick();
        }
      }
      else if (selectedSiegeEntityID != UIntPtr.Zero)
        this.OnSiegeEngineFrameClick(MapScreen.FrameAndVisualOfEngines[selectedSiegeEntityID].Item1);
      else
        this.OnTerrainClick();
    }

    private void OnTerrainClick()
    {
      foreach (MapView mapView in (Collection<MapView>) this._mapViews)
        mapView.OnMapTerrainClick();
      this._mapCursor.OnMapTerrainClick();
    }

    private void OnSiegeEngineFrameClick(MatrixFrame siegeFrame)
    {
      foreach (MapView mapView in (Collection<MapView>) this._mapViews)
        mapView.OnSiegeEngineClick(siegeFrame);
    }

    private void InitializeSiegeCircleVisuals()
    {
      PartyVisual visualOfParty = PartyVisualManager.Current.GetVisualOfParty(PlayerSiege.PlayerSiegeEvent.BesiegedSettlement.Party);
      MapScene mapSceneWrapper = Campaign.Current.MapSceneWrapper as MapScene;
      MatrixFrame[] siegeEngineFrames1 = visualOfParty.GetDefenderRangedSiegeEngineFrames();
      this._defenderMachinesCircleEntities = new GameEntity[siegeEngineFrames1.Length];
      for (int index = 0; index < siegeEngineFrames1.Length; ++index)
      {
        MatrixFrame matrixFrame = siegeEngineFrames1[index];
        this._defenderMachinesCircleEntities[index] = GameEntity.CreateEmpty(mapSceneWrapper.Scene);
        this._defenderMachinesCircleEntities[index].Name = "dRangedMachineCircle_" + (object) index;
        Decal decal = Decal.CreateDecal();
        decal.SetMaterial(Material.GetFromResource(this._defenderRangedMachineDecalMaterialName));
        decal.SetFactor1Linear(this._preperationOrEnemySiegeEngineDecalColor);
        this._defenderMachinesCircleEntities[index].AddComponent((GameEntityComponent) decal);
        MatrixFrame frame = matrixFrame;
        if (this._isNewDecalScaleImplementationEnabled)
          frame.Scale(new Vec3(this._defenderMachineCircleDecalScale, this._defenderMachineCircleDecalScale, this._defenderMachineCircleDecalScale));
        this._defenderMachinesCircleEntities[index].SetGlobalFrame(in frame);
        this._defenderMachinesCircleEntities[index].SetVisibilityExcludeParents(true);
        mapSceneWrapper.Scene.AddDecalInstance(decal, "editor_set", true);
      }
      MatrixFrame[] siegeEngineFrames2 = visualOfParty.GetAttackerBatteringRamSiegeEngineFrames();
      this._attackerRamMachinesCircleEntities = new GameEntity[siegeEngineFrames2.Length];
      for (int index = 0; index < siegeEngineFrames2.Length; ++index)
      {
        MatrixFrame matrixFrame = siegeEngineFrames2[index];
        this._attackerRamMachinesCircleEntities[index] = GameEntity.CreateEmpty(mapSceneWrapper.Scene);
        this._attackerRamMachinesCircleEntities[index].Name = nameof (InitializeSiegeCircleVisuals);
        this._attackerRamMachinesCircleEntities[index].Name = "aRamMachineCircle_" + (object) index;
        Decal decal = Decal.CreateDecal();
        decal.SetMaterial(Material.GetFromResource(this._attackerRamMachineDecalMaterialName));
        decal.SetFactor1Linear(this._preperationOrEnemySiegeEngineDecalColor);
        this._attackerRamMachinesCircleEntities[index].AddComponent((GameEntityComponent) decal);
        MatrixFrame frame = matrixFrame;
        if (this._isNewDecalScaleImplementationEnabled)
          frame.Scale(new Vec3(this._attackerMachineDecalScale, this._attackerMachineDecalScale, this._attackerMachineDecalScale));
        this._attackerRamMachinesCircleEntities[index].SetGlobalFrame(in frame);
        this._attackerRamMachinesCircleEntities[index].SetVisibilityExcludeParents(true);
        mapSceneWrapper.Scene.AddDecalInstance(decal, "editor_set", true);
      }
      MatrixFrame[] siegeEngineFrames3 = visualOfParty.GetAttackerTowerSiegeEngineFrames();
      this._attackerTowerMachinesCircleEntities = new GameEntity[siegeEngineFrames3.Length];
      for (int index = 0; index < siegeEngineFrames3.Length; ++index)
      {
        MatrixFrame matrixFrame = siegeEngineFrames3[index];
        this._attackerTowerMachinesCircleEntities[index] = GameEntity.CreateEmpty(mapSceneWrapper.Scene);
        this._attackerTowerMachinesCircleEntities[index].Name = "aTowerMachineCircle_" + (object) index;
        Decal decal = Decal.CreateDecal();
        decal.SetMaterial(Material.GetFromResource(this._attackerTowerMachineDecalMaterialName));
        decal.SetFactor1Linear(this._preperationOrEnemySiegeEngineDecalColor);
        this._attackerTowerMachinesCircleEntities[index].AddComponent((GameEntityComponent) decal);
        MatrixFrame frame = matrixFrame;
        if (this._isNewDecalScaleImplementationEnabled)
          frame.Scale(new Vec3(this._attackerMachineDecalScale, this._attackerMachineDecalScale, this._attackerMachineDecalScale));
        this._attackerTowerMachinesCircleEntities[index].SetGlobalFrame(in frame);
        this._attackerTowerMachinesCircleEntities[index].SetVisibilityExcludeParents(true);
        mapSceneWrapper.Scene.AddDecalInstance(decal, "editor_set", true);
      }
      MatrixFrame[] siegeEngineFrames4 = visualOfParty.GetAttackerRangedSiegeEngineFrames();
      this._attackerRangedMachinesCircleEntities = new GameEntity[siegeEngineFrames4.Length];
      for (int index = 0; index < siegeEngineFrames4.Length; ++index)
      {
        MatrixFrame matrixFrame = siegeEngineFrames4[index];
        this._attackerRangedMachinesCircleEntities[index] = GameEntity.CreateEmpty(mapSceneWrapper.Scene);
        this._attackerRangedMachinesCircleEntities[index].Name = "aRangedMachineCircle_" + (object) index;
        Decal decal = Decal.CreateDecal();
        decal.SetMaterial(Material.GetFromResource(this._emptyAttackerRangedDecalMaterialName));
        decal.SetFactor1Linear(this._preperationOrEnemySiegeEngineDecalColor);
        this._attackerRangedMachinesCircleEntities[index].AddComponent((GameEntityComponent) decal);
        MatrixFrame frame = matrixFrame;
        if (this._isNewDecalScaleImplementationEnabled)
          frame.Scale(new Vec3(this._attackerMachineDecalScale, this._attackerMachineDecalScale, this._attackerMachineDecalScale));
        this._attackerRangedMachinesCircleEntities[index].SetGlobalFrame(in frame);
        this._attackerRangedMachinesCircleEntities[index].SetVisibilityExcludeParents(true);
        mapSceneWrapper.Scene.AddDecalInstance(decal, "editor_set", true);
      }
    }

    private void TickSiegeMachineCircles()
    {
      SiegeEvent playerSiegeEvent = PlayerSiege.PlayerSiegeEvent;
      bool isPlayerLeader = playerSiegeEvent != null && playerSiegeEvent.IsPlayerSiegeEvent && Campaign.Current.Models.EncounterModel.GetLeaderOfSiegeEvent(playerSiegeEvent, PlayerSiege.PlayerSide) == Hero.MainHero;
      bool preparationComplete = playerSiegeEvent.BesiegerCamp.IsPreparationComplete;
      PartyVisual visualOfParty = PartyVisualManager.Current.GetVisualOfParty(playerSiegeEvent.BesiegedSettlement.Party);
      Tuple<MatrixFrame, PartyVisual> tuple = (Tuple<MatrixFrame, PartyVisual>) null;
      if (this._preSelectedSiegeEntityID != UIntPtr.Zero)
        tuple = MapScreen.FrameAndVisualOfEngines[this._preSelectedSiegeEntityID];
      MatrixFrame globalFrame;
      for (int index = 0; index < visualOfParty.GetDefenderRangedSiegeEngineFrames().Length; ++index)
      {
        bool isEmpty = playerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Defender).SiegeEngines.DeployedRangedSiegeEngines[index] == null;
        bool isEnemy = PlayerSiege.PlayerSide != 0;
        string desiredMaterialName = this.GetDesiredMaterialName(true, false, isEmpty, false);
        Decal componentAtIndex = this._defenderMachinesCircleEntities[index].GetComponentAtIndex(0, GameEntity.ComponentType.Decal) as Decal;
        if (componentAtIndex.GetMaterial()?.Name != desiredMaterialName)
          componentAtIndex.SetMaterial(Material.GetFromResource(desiredMaterialName));
        int num;
        if (tuple != null)
        {
          globalFrame = this._defenderMachinesCircleEntities[index].GetGlobalFrame();
          num = globalFrame.NearlyEquals(tuple.Item1) ? 1 : 0;
        }
        else
          num = 0;
        bool isHovered = num != 0;
        uint desiredDecalColor = this.GetDesiredDecalColor(preparationComplete, isHovered, isEnemy, isEmpty, isPlayerLeader);
        if ((int) desiredDecalColor != (int) componentAtIndex.GetFactor1())
          componentAtIndex.SetFactor1(desiredDecalColor);
      }
      for (int index = 0; index < visualOfParty.GetAttackerRangedSiegeEngineFrames().Length; ++index)
      {
        bool isEmpty = playerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.DeployedRangedSiegeEngines[index] == null;
        bool isEnemy = PlayerSiege.PlayerSide != BattleSideEnum.Attacker;
        string desiredMaterialName = this.GetDesiredMaterialName(true, true, isEmpty, false);
        Decal componentAtIndex = this._attackerRangedMachinesCircleEntities[index].GetComponentAtIndex(0, GameEntity.ComponentType.Decal) as Decal;
        if (componentAtIndex.GetMaterial()?.Name != desiredMaterialName)
          componentAtIndex.SetMaterial(Material.GetFromResource(desiredMaterialName));
        int num;
        if (tuple != null)
        {
          globalFrame = this._attackerRangedMachinesCircleEntities[index].GetGlobalFrame();
          num = globalFrame.NearlyEquals(tuple.Item1) ? 1 : 0;
        }
        else
          num = 0;
        bool isHovered = num != 0;
        uint desiredDecalColor = this.GetDesiredDecalColor(preparationComplete, isHovered, isEnemy, isEmpty, isPlayerLeader);
        if ((int) desiredDecalColor != (int) componentAtIndex.GetFactor1())
          componentAtIndex.SetFactor1(desiredDecalColor);
      }
      for (int index = 0; index < visualOfParty.GetAttackerBatteringRamSiegeEngineFrames().Length; ++index)
      {
        bool isEmpty = playerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.DeployedMeleeSiegeEngines[index] == null;
        bool isEnemy = PlayerSiege.PlayerSide != BattleSideEnum.Attacker;
        string desiredMaterialName = this.GetDesiredMaterialName(false, true, isEmpty, false);
        Decal componentAtIndex = this._attackerRamMachinesCircleEntities[index].GetComponentAtIndex(0, GameEntity.ComponentType.Decal) as Decal;
        if (componentAtIndex.GetMaterial()?.Name != desiredMaterialName)
          componentAtIndex.SetMaterial(Material.GetFromResource(desiredMaterialName));
        int num;
        if (tuple != null)
        {
          globalFrame = this._attackerRamMachinesCircleEntities[index].GetGlobalFrame();
          num = globalFrame.NearlyEquals(tuple.Item1) ? 1 : 0;
        }
        else
          num = 0;
        bool isHovered = num != 0;
        uint desiredDecalColor = this.GetDesiredDecalColor(preparationComplete, isHovered, isEnemy, isEmpty, isPlayerLeader);
        if ((int) desiredDecalColor != (int) componentAtIndex.GetFactor1())
          componentAtIndex.SetFactor1(desiredDecalColor);
      }
      for (int index = 0; index < visualOfParty.GetAttackerTowerSiegeEngineFrames().Length; ++index)
      {
        bool isEmpty = playerSiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).SiegeEngines.DeployedMeleeSiegeEngines[visualOfParty.GetAttackerBatteringRamSiegeEngineFrames().Length + index] == null;
        bool isEnemy = PlayerSiege.PlayerSide != BattleSideEnum.Attacker;
        string desiredMaterialName = this.GetDesiredMaterialName(false, true, isEmpty, true);
        Decal componentAtIndex = this._attackerTowerMachinesCircleEntities[index].GetComponentAtIndex(0, GameEntity.ComponentType.Decal) as Decal;
        if (componentAtIndex.GetMaterial()?.Name != desiredMaterialName)
          componentAtIndex.SetMaterial(Material.GetFromResource(desiredMaterialName));
        int num;
        if (tuple != null)
        {
          globalFrame = this._attackerTowerMachinesCircleEntities[index].GetGlobalFrame();
          num = globalFrame.NearlyEquals(tuple.Item1) ? 1 : 0;
        }
        else
          num = 0;
        bool isHovered = num != 0;
        uint desiredDecalColor = this.GetDesiredDecalColor(preparationComplete, isHovered, isEnemy, isEmpty, isPlayerLeader);
        if ((int) desiredDecalColor != (int) componentAtIndex.GetFactor1())
          componentAtIndex.SetFactor1(desiredDecalColor);
      }
    }

    private uint GetDesiredDecalColor(
      bool isPrepOver,
      bool isHovered,
      bool isEnemy,
      bool isEmpty,
      bool isPlayerLeader)
    {
      isPrepOver = true;
      if (!isPrepOver || isEnemy)
        return this._preperationOrEnemySiegeEngineDecalColor;
      if (isHovered & isPlayerLeader)
        return this._hoveredSiegeEngineDecalColor;
      if (!isEmpty)
        return this._withMachineSiegeEngineDecalColor;
      if (!isPlayerLeader)
        return this._normalStartSiegeEngineDecalColor;
      float ratio = MathF.PingPong(0.0f, this._machineDecalAnimLoopTime, this._timeSinceCreation) / this._machineDecalAnimLoopTime;
      return Color.Lerp(Color.FromUint(this._normalStartSiegeEngineDecalColor), Color.FromUint(this._normalEndSiegeEngineDecalColor), ratio).ToUnsignedInteger();
    }

    private string GetDesiredMaterialName(
      bool isRanged,
      bool isAttacker,
      bool isEmpty,
      bool isTower)
    {
      return isRanged ? (!isAttacker ? this._defenderRangedMachineDecalMaterialName : this._attackerRangedMachineDecalMaterialName) : (!isTower ? this._attackerRamMachineDecalMaterialName : this._attackerTowerMachineDecalMaterialName);
    }

    private void RemoveSiegeCircleVisuals()
    {
      if (!this._playerSiegeMachineSlotMeshesAdded)
        return;
      MapScene mapSceneWrapper = Campaign.Current.MapSceneWrapper as MapScene;
      for (int index = 0; index < this._defenderMachinesCircleEntities.Length; ++index)
      {
        this._defenderMachinesCircleEntities[index].SetVisibilityExcludeParents(false);
        mapSceneWrapper.Scene.RemoveEntity(this._defenderMachinesCircleEntities[index], 107);
        this._defenderMachinesCircleEntities[index] = (GameEntity) null;
      }
      for (int index = 0; index < this._attackerRamMachinesCircleEntities.Length; ++index)
      {
        this._attackerRamMachinesCircleEntities[index].SetVisibilityExcludeParents(false);
        mapSceneWrapper.Scene.RemoveEntity(this._attackerRamMachinesCircleEntities[index], 108);
        this._attackerRamMachinesCircleEntities[index] = (GameEntity) null;
      }
      for (int index = 0; index < this._attackerTowerMachinesCircleEntities.Length; ++index)
      {
        this._attackerTowerMachinesCircleEntities[index].SetVisibilityExcludeParents(false);
        mapSceneWrapper.Scene.RemoveEntity(this._attackerTowerMachinesCircleEntities[index], 109);
        this._attackerTowerMachinesCircleEntities[index] = (GameEntity) null;
      }
      for (int index = 0; index < this._attackerRangedMachinesCircleEntities.Length; ++index)
      {
        this._attackerRangedMachinesCircleEntities[index].SetVisibilityExcludeParents(false);
        mapSceneWrapper.Scene.RemoveEntity(this._attackerRangedMachinesCircleEntities[index], 110);
        this._attackerRangedMachinesCircleEntities[index] = (GameEntity) null;
      }
      this._playerSiegeMachineSlotMeshesAdded = false;
    }

    void IMapStateHandler.AfterTick(float dt)
    {
      if (ScreenManager.TopScreen == this)
      {
        this.TickVisuals(dt);
        SceneLayer sceneLayer = this.SceneLayer;
        if ((sceneLayer != null ? (sceneLayer.Input.IsGameKeyPressed(53) ? 1 : 0) : 0) != 0)
          Campaign.Current.SaveHandler.QuickSaveCurrentGame();
      }
      this.DebugInput.IsHotKeyPressed("MapScreenHotkeyShowPos");
    }

    void IMapStateHandler.AfterWaitTick(float dt)
    {
      if (this.SceneLayer.Input.IsShiftDown() || this.SceneLayer.Input.IsControlDown())
        return;
      bool flag = false;
      if (this.SceneLayer.Input.IsGameKeyPressed(38) && this._navigationHandler.InventoryEnabled)
      {
        this.OpenInventory();
        flag = true;
      }
      else if (this.SceneLayer.Input.IsGameKeyPressed(43) && this._navigationHandler.PartyEnabled)
      {
        this.OpenParty();
        flag = true;
      }
      else if (this.SceneLayer.Input.IsGameKeyPressed(39) && !this.IsInArmyManagement && !this.IsMapCheatsActive)
      {
        this.OpenEncyclopedia();
        flag = true;
      }
      else if (this.SceneLayer.Input.IsGameKeyPressed(36) && !this.IsInArmyManagement && !this.IsMarriageOfferPopupActive && !this.IsMapCheatsActive)
      {
        this.OpenBannerEditorScreen();
        flag = true;
      }
      else
      {
        NavigationPermissionItem navigationPermissionItem;
        if (this.SceneLayer.Input.IsGameKeyPressed(40))
        {
          navigationPermissionItem = this._navigationHandler.KingdomPermission;
          if (navigationPermissionItem.IsAuthorized)
          {
            this.OpenKingdom();
            flag = true;
            goto label_26;
          }
        }
        if (this.SceneLayer.Input.IsGameKeyPressed(42) && this._navigationHandler.QuestsEnabled)
        {
          this.OpenQuestsScreen();
          flag = true;
        }
        else
        {
          if (this.SceneLayer.Input.IsGameKeyPressed(41))
          {
            navigationPermissionItem = this._navigationHandler.ClanPermission;
            if (navigationPermissionItem.IsAuthorized)
            {
              this.OpenClanScreen();
              flag = true;
              goto label_26;
            }
          }
          if (this.SceneLayer.Input.IsGameKeyPressed(37) && this._navigationHandler.CharacterDeveloperEnabled)
          {
            this.OpenCharacterDevelopmentScreen();
            flag = true;
          }
          else if (this.SceneLayer.Input.IsHotKeyReleased("ToggleEscapeMenu"))
          {
            if (!this._mapViews.Any<MapView>((Func<MapView, bool>) (m => m.IsEscaped())))
            {
              this.OpenEscapeMenu();
              flag = true;
            }
          }
          else if (this.SceneLayer.Input.IsGameKeyPressed(44))
          {
            this.OpenFaceGeneratorScreen();
            flag = true;
          }
          else if (TaleWorlds.InputSystem.Input.IsGamepadActive)
            this.HandleCheatMenuInput(dt);
        }
      }
label_26:
      if (!flag)
        return;
      this._mapCursor.SetVisible(false);
    }

    private void HandleCheatMenuInput(float dt)
    {
      if (!this.IsMapCheatsActive && this.Input.IsKeyDown(InputKey.ControllerLBumper) && this.Input.IsKeyDown(InputKey.ControllerRTrigger) && this.Input.IsKeyDown(InputKey.ControllerLDown))
      {
        this._cheatPressTimer += dt;
        if ((double) this._cheatPressTimer <= 0.550000011920929)
          return;
        this.OpenGameplayCheats();
      }
      else
        this._cheatPressTimer = 0.0f;
    }

    void IMapStateHandler.OnRefreshState()
    {
      if (!(Game.Current.GameStateManager.ActiveState is MapState))
        return;
      if (MobileParty.MainParty.Army != null && this._armyOverlay == null)
      {
        this.AddArmyOverlay(GameOverlays.MapOverlayType.Army);
      }
      else
      {
        if (MobileParty.MainParty.Army != null || this._armyOverlay == null)
          return;
        for (int index = this._mapViews.Count - 1; index >= 0; --index)
          this._mapViews[index].OnArmyLeft();
        for (int index = this._mapViews.Count - 1; index >= 0; --index)
          this._mapViews[index].OnDispersePlayerLeadedArmy();
      }
    }

    void IMapStateHandler.OnExitingMenuMode() => this._latestMenuContext = (MenuContext) null;

    void IMapStateHandler.OnEnteringMenuMode(MenuContext menuContext)
    {
      this._latestMenuContext = menuContext;
    }

    void IMapStateHandler.OnMainPartyEncounter()
    {
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnMainPartyEncounter();
    }

    void IMapStateHandler.OnSignalPeriodicEvents() => this.DeleteMarkedPeriodicEvents();

    void IMapStateHandler.OnBattleSimulationStarted(BattleSimulation battleSimulation)
    {
      this.IsInBattleSimulation = true;
      this._battleSimulationView = this.AddMapView<BattleSimulationMapView>((object) battleSimulation);
    }

    void IMapStateHandler.OnBattleSimulationEnded()
    {
      this.IsInBattleSimulation = false;
      this.RemoveMapView(this._battleSimulationView);
      this._battleSimulationView = (MapView) null;
    }

    void IMapStateHandler.OnSiegeEngineClick(MatrixFrame siegeEngineFrame)
    {
      this._mapCameraView.SiegeEngineClick(siegeEngineFrame);
    }

    void IGameStateListener.OnInitialize()
    {
    }

    void IMapStateHandler.OnPlayerSiegeActivated()
    {
    }

    void IMapStateHandler.OnPlayerSiegeDeactivated()
    {
    }

    void IMapStateHandler.OnGameplayCheatsEnabled() => this.OpenGameplayCheats();

    void IGameStateListener.OnActivate()
    {
    }

    void IGameStateListener.OnDeactivate()
    {
    }

    void IMapStateHandler.OnMapConversationStarts(
      ConversationCharacterData playerCharacterData,
      ConversationCharacterData conversationPartnerData)
    {
      if (this._isReadyForRender || this._conversationOverThisFrame)
      {
        this.HandleMapConversationInit(playerCharacterData, conversationPartnerData);
      }
      else
      {
        MapScreen.TempConversationStateHandler conversationStateHandler = new MapScreen.TempConversationStateHandler();
        this._conversationDataCache = new Tuple<ConversationCharacterData, ConversationCharacterData, MapScreen.TempConversationStateHandler>(playerCharacterData, conversationPartnerData, conversationStateHandler);
        Campaign.Current.ConversationManager.Handler = (IConversationStateHandler) conversationStateHandler;
        Game.Current.GameStateManager.RegisterActiveStateDisableRequest((object) this);
      }
    }

    private void HandleMapConversationInit(
      ConversationCharacterData playerCharacterData,
      ConversationCharacterData conversationPartnerData)
    {
      if (this._mapConversationView == null)
      {
        for (int index = this._mapViews.Count - 1; index >= 0; --index)
          this._mapViews[index].OnMapConversationStart();
      }
      this._menuViewContext?.OnMapConversationActivated();
      if (this._mapConversationView == null)
      {
        this._mapConversationView = this.AddMapView<MapConversationView>((object) playerCharacterData, (object) conversationPartnerData);
      }
      else
      {
        for (int index = this._mapViews.Count - 1; index >= 0; --index)
          this._mapViews[index].OnMapConversationUpdate(playerCharacterData, conversationPartnerData);
      }
      this._mapCursor.SetVisible(false);
      this.HandleIfSceneIsReady();
    }

    void IMapStateHandler.OnMapConversationOver()
    {
      this._conversationOverThisFrame = true;
      for (int index = this._mapViews.Count - 1; index >= 0; --index)
        this._mapViews[index].OnMapConversationOver();
      this._menuViewContext?.OnMapConversationDeactivated();
      this.HandleMapConversationOver();
      this._activatedFrameNo = Utilities.EngineFrameNo;
      this.HandleIfSceneIsReady();
    }

    private void HandleMapConversationOver()
    {
      if (this._mapConversationView != null)
        this.RemoveMapView(this._mapConversationView);
      this._mapConversationView = (MapView) null;
    }

    private void InitializeVisuals()
    {
      this.InactiveLightMeshes = new List<Mesh>();
      this.ActiveLightMeshes = new List<Mesh>();
      MapScene mapSceneWrapper = Campaign.Current.MapSceneWrapper as MapScene;
      this._targetCircleEntitySmall = GameEntity.CreateEmpty(mapSceneWrapper.Scene);
      this._targetCircleEntitySmall.Name = "tCircleSmall";
      this._targetCircleEntityBig = GameEntity.CreateEmpty(mapSceneWrapper.Scene);
      this._targetCircleEntityBig.Name = "tCircleBig";
      this._targetCircleTown = GameEntity.CreateEmpty(mapSceneWrapper.Scene);
      this._targetCircleTown.Name = "tTown";
      this._partyOutlineEntity = GameEntity.CreateEmpty(mapSceneWrapper.Scene);
      this._partyOutlineEntity.Name = "sCircle";
      this._townOutlineEntity = GameEntity.CreateEmpty(mapSceneWrapper.Scene);
      this._townOutlineEntity.Name = "sSettlementOutline";
      this._targetDecalMeshSmall = Decal.CreateDecal();
      if ((NativeObject) this._targetDecalMeshSmall != (NativeObject) null)
      {
        this._settlementOutlineMesh = this._targetDecalMeshSmall.CreateCopy();
        Material fromResource1 = Material.GetFromResource("decal_city_circle_a");
        if ((NativeObject) fromResource1 != (NativeObject) null)
          this._settlementOutlineMesh.SetMaterial(fromResource1);
        this._targetTownMesh = this._settlementOutlineMesh.CreateCopy();
        this._targetDecalMeshSmall = this._targetDecalMeshSmall.CreateCopy();
        Material fromResource2 = Material.GetFromResource("map_circle_decal");
        if ((NativeObject) fromResource2 != (NativeObject) null)
          this._targetDecalMeshSmall.SetMaterial(fromResource2);
        else
          MBDebug.ShowWarning("Material(map_circle_decal) for party circles could not be found.");
        this._targetDecalMeshBig = this._targetDecalMeshSmall.CreateCopy();
        this._partyOutlineMesh = this._targetDecalMeshSmall.CreateCopy();
        mapSceneWrapper.Scene.AddDecalInstance(this._targetDecalMeshSmall, "editor_set", false);
        mapSceneWrapper.Scene.AddDecalInstance(this._targetDecalMeshBig, "editor_set", false);
        mapSceneWrapper.Scene.AddDecalInstance(this._partyOutlineMesh, "editor_set", false);
        mapSceneWrapper.Scene.AddDecalInstance(this._settlementOutlineMesh, "editor_set", false);
        mapSceneWrapper.Scene.AddDecalInstance(this._targetTownMesh, "editor_set", false);
        this._targetCircleEntitySmall.AddComponent((GameEntityComponent) this._targetDecalMeshSmall);
        this._targetCircleEntityBig.AddComponent((GameEntityComponent) this._targetDecalMeshBig);
        this._partyOutlineEntity.AddComponent((GameEntityComponent) this._partyOutlineMesh);
        this._townOutlineEntity.AddComponent((GameEntityComponent) this._settlementOutlineMesh);
        this._targetCircleTown.AddComponent((GameEntityComponent) this._targetTownMesh);
      }
      else
        MBDebug.ShowWarning("Mesh(decal_mesh) for party circles could not be found.");
      this._mapCursor.Initialize(this);
      this._campaign = Campaign.Current;
      this._campaign.AddEntityComponent<MapTracksVisual>();
      this._campaign.AddEntityComponent<MapWeatherVisualManager>();
      this._campaign.AddEntityComponent<MapAudioManager>();
      this._campaign.AddEntityComponent<PartyVisualManager>();
      this.ContourMaskEntity = GameEntity.CreateEmpty(mapSceneWrapper.Scene);
      this.ContourMaskEntity.Name = "aContourMask";
    }

    internal void TickCircles(float realDt)
    {
      bool visible1 = false;
      bool visible2 = false;
      bool visible3 = false;
      float num1 = 0.5f;
      float num2 = 0.5f;
      int num3 = 0;
      int num4 = 0;
      uint linearFactorColor1_1 = 4293199122;
      uint linearFactorColor1_2 = 4293199122;
      uint linearFactorColor1_3 = 4293199122;
      bool flag1 = false;
      bool flag2 = false;
      MatrixFrame frame1 = MatrixFrame.Identity;
      PartyBase partyBase = (PartyBase) null;
      if (MobileParty.MainParty.Ai.PartyMoveMode == MoveModeType.Point && MobileParty.MainParty.DefaultBehavior != AiBehavior.GoToSettlement && MobileParty.MainParty.DefaultBehavior != AiBehavior.Hold && !MobileParty.MainParty.Ai.ForceAiNoPathMode && MobileParty.MainParty.MapEvent == null && (double) MobileParty.MainParty.TargetPosition.DistanceSquared(MobileParty.MainParty.Position2D) > 0.0099999997764825821)
      {
        visible1 = true;
        visible2 = true;
        num1 = 0.238846f;
        num2 = 0.278584f;
        num3 = 4;
        num4 = 5;
        linearFactorColor1_1 = 4293993473U;
        linearFactorColor1_2 = 4293993473U;
        frame1.origin = new Vec3(MobileParty.MainParty.TargetPosition);
        flag2 = true;
      }
      else
      {
        if (MobileParty.MainParty.Ai.PartyMoveMode == MoveModeType.Party && MobileParty.MainParty.Ai.MoveTargetParty != null && MobileParty.MainParty.Ai.MoveTargetParty.IsVisible)
          partyBase = MobileParty.MainParty.Ai.MoveTargetParty.CurrentSettlement == null || MobileParty.MainParty.Ai.MoveTargetParty.CurrentSettlement.IsHideout ? MobileParty.MainParty.Ai.MoveTargetParty.Party : MobileParty.MainParty.Ai.MoveTargetParty.CurrentSettlement.Party;
        else if (MobileParty.MainParty.DefaultBehavior == AiBehavior.GoToSettlement && MobileParty.MainParty.TargetSettlement != null)
          partyBase = MobileParty.MainParty.TargetSettlement.Party;
        if (partyBase != null)
        {
          bool flag3 = FactionManager.IsAtWarAgainstFaction(partyBase.MapFaction, Hero.MainHero.MapFaction);
          bool flag4 = FactionManager.IsAlliedWithFaction(partyBase.MapFaction, Hero.MainHero.MapFaction);
          frame1 = PartyVisualManager.Current.GetVisualOfParty(partyBase).CircleLocalFrame;
          if (partyBase.IsMobile)
          {
            visible1 = true;
            num3 = this.GetCircleIndex();
            linearFactorColor1_1 = flag3 ? this._enemyPartyDecalColor : (flag4 ? this._allyPartyDecalColor : this._neutralPartyDecalColor);
            num1 = frame1.rotation.GetScaleVector().x * 1.2f;
          }
          else if ((!partyBase.IsSettlement ? 0 : (partyBase.Settlement.IsTown ? 1 : (partyBase.Settlement.IsCastle ? 1 : 0))) != 0)
          {
            flag1 = true;
            visible3 = true;
            linearFactorColor1_3 = flag3 ? this._enemyPartyDecalColor : (flag4 ? this._allyPartyDecalColor : this._neutralPartyDecalColor);
            num1 = frame1.rotation.GetScaleVector().x * 1.2f;
          }
          else
          {
            visible1 = true;
            num3 = 5;
            linearFactorColor1_1 = flag3 ? this._enemyPartyDecalColor : (flag4 ? this._allyPartyDecalColor : this._neutralPartyDecalColor);
            num1 = frame1.rotation.GetScaleVector().x * 1.2f;
          }
          if (!flag1)
            frame1.origin += new Vec3(partyBase.Position2D + (partyBase.IsMobile ? partyBase.MobileParty.EventPositionAdder + partyBase.MobileParty.ArmyPositionAdder : Vec2.Zero));
        }
      }
      if (flag2)
      {
        float num5 = MathF.Clamp((float) (((double) this._mapCameraView.CameraDistance + 80.0) * ((double) this._mapCameraView.CameraDistance + 80.0) / 5000.0), 0.2f, 45f);
        num1 *= num5;
        num2 *= num5;
      }
      if (partyBase == null)
        this._targetCircleRotationStartTime = 0.0f;
      else if ((double) this._targetCircleRotationStartTime == 0.0)
        this._targetCircleRotationStartTime = MBCommon.GetApplicationTime();
      Vec3 normalAt = this._mapScene.GetNormalAt(frame1.origin.AsVec2);
      if (!flag1)
      {
        Vec3 origin = this._targetCircleTown.GetGlobalFrame().origin;
        frame1.origin.z = origin.AsVec2 != frame1.origin.AsVec2 ? this._mapScene.GetTerrainHeight(frame1.origin.AsVec2) : origin.z;
      }
      MatrixFrame frame2 = MatrixFrame.Identity with
      {
        origin = frame1.origin
      };
      frame2.rotation.u = normalAt;
      MatrixFrame frame3 = frame2;
      frame2.rotation.ApplyScaleLocal(new Vec3(num1, num1, num1));
      frame3.rotation.ApplyScaleLocal(new Vec3(num2, num2, num2));
      this._targetCircleEntitySmall.SetVisibilityExcludeParents(visible1);
      this._targetCircleEntityBig.SetVisibilityExcludeParents(visible2);
      this._targetCircleTown.SetVisibilityExcludeParents(visible3);
      if (visible1)
      {
        this._targetDecalMeshSmall.SetVectorArgument(0.166f, 1f, 0.166f * (float) num3, 0.0f);
        this._targetDecalMeshSmall.SetFactor1Linear(linearFactorColor1_1);
        this._targetCircleEntitySmall.SetGlobalFrame(in frame2);
      }
      if (visible2)
      {
        this._targetDecalMeshBig.SetVectorArgument(0.166f, 1f, 0.166f * (float) num4, 0.0f);
        this._targetDecalMeshBig.SetFactor1Linear(linearFactorColor1_2);
        this._targetCircleEntityBig.SetGlobalFrame(in frame3);
      }
      if (visible3)
      {
        this._targetTownMesh.SetVectorArgument(1f, 1f, 0.0f, 0.0f);
        this._targetTownMesh.SetFactor1Linear(linearFactorColor1_3);
        this._targetCircleTown.SetGlobalFrame(in frame1);
      }
      MatrixFrame frame4 = MatrixFrame.Identity;
      if (this.CurrentVisualOfTooltip != null && partyBase?.MapEntity != this.CurrentVisualOfTooltip.GetMapEntity())
      {
        this._mapCursor.OnAnotherEntityHighlighted();
        IMapEntity mapEntity = this.CurrentVisualOfTooltip.GetMapEntity();
        if (mapEntity != null && mapEntity.ShowCircleAroundEntity)
        {
          bool flag5 = mapEntity.IsEnemyOf(Hero.MainHero.MapFaction);
          bool flag6 = mapEntity.IsAllyOf(Hero.MainHero.MapFaction);
          bool flag7 = mapEntity is Settlement settlement && settlement.IsFortification;
          Vec3 origin;
          if (flag7)
          {
            origin = this._townOutlineEntity.GetGlobalFrame().origin;
            frame4 = this.CurrentVisualOfTooltip.CircleLocalFrame;
            if (flag5)
              this._settlementOutlineMesh.SetFactor1Linear(this._enemyPartyDecalColor);
            else if (flag6)
              this._settlementOutlineMesh.SetFactor1Linear(this._allyPartyDecalColor);
            else
              this._settlementOutlineMesh.SetFactor1Linear(this._neutralPartyDecalColor);
          }
          else
          {
            origin = this._partyOutlineEntity.GetGlobalFrame().origin;
            frame4.origin = this.CurrentVisualOfTooltip.GetVisualPosition() + this.CurrentVisualOfTooltip.CircleLocalFrame.origin;
            frame4.rotation = this.CurrentVisualOfTooltip.CircleLocalFrame.rotation;
            this._partyOutlineMesh.SetFactor1Linear(flag5 ? this._enemyPartyDecalColor : (flag6 ? this._allyPartyDecalColor : this._neutralPartyDecalColor));
            this._partyOutlineMesh.SetVectorArgument(0.166f, 1f, 0.83f, 0.0f);
          }
          frame4.origin.z = origin.AsVec2 != frame4.origin.AsVec2 ? this._mapScene.GetTerrainHeight(frame4.origin.AsVec2) : origin.z;
          if (flag7)
          {
            frame4.rotation.u = normalAt * frame4.rotation.u.Length;
            this._townOutlineEntity.SetGlobalFrame(in frame4);
            this._townOutlineEntity.SetVisibilityExcludeParents(true);
            this._partyOutlineEntity.SetVisibilityExcludeParents(false);
          }
          else
          {
            this._partyOutlineEntity.SetGlobalFrame(in frame4);
            this._townOutlineEntity.SetVisibilityExcludeParents(false);
            this._partyOutlineEntity.SetVisibilityExcludeParents(true);
          }
        }
        else
        {
          this._townOutlineEntity.SetVisibilityExcludeParents(false);
          this._partyOutlineEntity.SetVisibilityExcludeParents(false);
        }
      }
      else
      {
        this._townOutlineEntity.SetVisibilityExcludeParents(false);
        this._partyOutlineEntity.SetVisibilityExcludeParents(false);
      }
    }

    public void SetIsInTownManagement(bool isInTownManagement)
    {
      if (this.IsInTownManagement == isInTownManagement)
        return;
      this.IsInTownManagement = isInTownManagement;
    }

    public void SetIsInHideoutTroopManage(bool isInHideoutTroopManage)
    {
      if (this.IsInHideoutTroopManage == isInHideoutTroopManage)
        return;
      this.IsInHideoutTroopManage = isInHideoutTroopManage;
    }

    public void SetIsInArmyManagement(bool isInArmyManagement)
    {
      if (this.IsInArmyManagement == isInArmyManagement)
        return;
      this.IsInArmyManagement = isInArmyManagement;
      if (this.IsInArmyManagement)
        return;
      this._menuViewContext?.OnResume();
    }

    public void SetIsInRecruitment(bool isInRecruitment)
    {
      if (this.IsInRecruitment == isInRecruitment)
        return;
      this.IsInRecruitment = isInRecruitment;
    }

    public void SetIsBarExtended(bool isBarExtended)
    {
      if (this.IsBarExtended == isBarExtended)
        return;
      this.IsBarExtended = isBarExtended;
    }

    public void SetIsInCampaignOptions(bool isInCampaignOptions)
    {
      if (this.IsInCampaignOptions == isInCampaignOptions)
        return;
      this.IsInCampaignOptions = isInCampaignOptions;
    }

    public void SetIsMarriageOfferPopupActive(bool isMarriageOfferPopupActive)
    {
      if (this.IsMarriageOfferPopupActive == isMarriageOfferPopupActive)
        return;
      this.IsMarriageOfferPopupActive = isMarriageOfferPopupActive;
    }

    public void SetIsMapCheatsActive(bool isMapCheatsActive)
    {
      if (this.IsMapCheatsActive == isMapCheatsActive)
        return;
      this.IsMapCheatsActive = isMapCheatsActive;
      this._cheatPressTimer = 0.0f;
    }

    private void TickVisuals(float realDt)
    {
      if ((double) this._campaign.CampaignDt < 9.9999997473787516E-06)
        this.ApplySoundSceneProps(realDt);
      else
        this.ApplySoundSceneProps(this._campaign.CampaignDt);
      this._mapScene.TimeOfDay = CampaignTime.Now.CurrentHourInDay;
      float timeFactorForSnow;
      Campaign.Current.Models.MapWeatherModel.GetSeasonTimeFactorOfCampaignTime(CampaignTime.Now, out timeFactorForSnow, out float _, false);
      MBMapScene.SetSeasonTimeFactor(this._mapScene, timeFactorForSnow);
      if (!NativeConfig.DisableSound && ScreenManager.TopScreen is MapScreen)
      {
        this._soundCalculationTime += realDt;
        if (this._isSoundOn)
          this.TickStepSounds();
        if ((double) this._soundCalculationTime > 0.20000000298023224)
          this._soundCalculationTime -= 0.2f;
      }
      if (this.IsReady)
      {
        foreach (CampaignEntityComponent campaignEntityComponent in (List<CampaignEntityComponent>) this._campaign.CampaignEntityComponents)
        {
          if (campaignEntityComponent is CampaignEntityVisualComponent entityVisualComponent)
            entityVisualComponent.OnVisualTick(this, realDt, this._campaign.CampaignDt);
        }
      }
      MBMapScene.TickVisuals(this._mapScene, Campaign.CurrentTime % 24f, this._tickedMapMeshes);
      this.TickCircles(realDt);
      MBWindowManager.PreDisplay();
    }

    private void TickStepSounds()
    {
      if ((double) Campaign.Current.CampaignDt <= 0.0)
        return;
      MobileParty mainParty = MobileParty.MainParty;
      LocatableSearchData<MobileParty> data = MobileParty.StartFindingLocatablesAroundPosition(mainParty.Position2D, mainParty.SeeingRange + 25f);
      for (MobileParty nextLocatable = MobileParty.FindNextLocatable(ref data); nextLocatable != null; nextLocatable = MobileParty.FindNextLocatable(ref data))
      {
        if (!nextLocatable.IsMilitia && !nextLocatable.IsGarrison)
          this.StepSounds(nextLocatable);
      }
    }

    private void StepSounds(MobileParty party)
    {
      if (!party.IsVisible || party.MemberRoster.TotalManCount <= 0)
        return;
      PartyVisual visualOfParty = PartyVisualManager.Current.GetVisualOfParty(party.Party);
      if (visualOfParty.HumanAgentVisuals == null)
        return;
      TerrainType faceTerrainType = Campaign.Current.MapSceneWrapper.GetFaceTerrainType(party.CurrentNavigationFace);
      AgentVisuals agentVisuals = (AgentVisuals) null;
      int soundType = 0;
      if (visualOfParty.CaravanMountAgentVisuals != null)
      {
        soundType = 3;
        agentVisuals = visualOfParty.CaravanMountAgentVisuals;
      }
      else if (visualOfParty.HumanAgentVisuals != null)
      {
        if (visualOfParty.MountAgentVisuals != null)
        {
          soundType = 1;
          agentVisuals = visualOfParty.MountAgentVisuals;
        }
        else
        {
          soundType = 0;
          agentVisuals = visualOfParty.HumanAgentVisuals;
        }
      }
      MBMapScene.TickStepSound(this._mapScene, agentVisuals.GetVisuals(), (int) faceTerrainType, soundType);
    }

    public void SetMouseVisible(bool value)
    {
      this.SceneLayer.InputRestrictions.SetMouseVisibility(value);
    }

    public bool GetMouseVisible() => MBMapScene.GetMouseVisible();

    public void RestartAmbientSounds()
    {
      if (!((NativeObject) this._mapScene != (NativeObject) null))
        return;
      this._mapScene.ResumeSceneSounds();
    }

    void IGameStateListener.OnFinalize()
    {
    }

    public void PauseAmbientSounds()
    {
      if (!((NativeObject) this._mapScene != (NativeObject) null))
        return;
      this._mapScene.PauseSceneSounds();
    }

    public void StopSoundSceneProps()
    {
      if (!((NativeObject) this._mapScene != (NativeObject) null))
        return;
      this._mapScene.FinishSceneSounds();
    }

    public void ApplySoundSceneProps(float dt)
    {
    }

    private void CollectTickableMapMeshes()
    {
      this._tickedMapEntities = this._mapScene.FindEntitiesWithTag("ticked_map_entity").ToArray<GameEntity>();
      this._tickedMapMeshes = new Mesh[this._tickedMapEntities.Length];
      for (int index = 0; index < this._tickedMapEntities.Length; ++index)
        this._tickedMapMeshes[index] = this._tickedMapEntities[index].GetFirstMesh();
    }

    public void OnPauseTick(float dt) => this.ApplySoundSceneProps(dt);

    public static Dictionary<UIntPtr, PartyVisual> VisualsOfEntities
    {
      get => SandBoxViewSubModule.VisualsOfEntities;
    }

    public MBCampaignEvent CreatePeriodicUIEvent(
      CampaignTime triggerPeriod,
      CampaignTime initialWait)
    {
      MBCampaignEvent periodicUiEvent = new MBCampaignEvent(triggerPeriod, initialWait);
      this._periodicCampaignUIEvents.Add(periodicUiEvent);
      return periodicUiEvent;
    }

    internal static Dictionary<UIntPtr, Tuple<MatrixFrame, PartyVisual>> FrameAndVisualOfEngines
    {
      get => SandBoxViewSubModule.FrameAndVisualOfEngines;
    }

    private void DeleteMarkedPeriodicEvents()
    {
      for (int index = this._periodicCampaignUIEvents.Count - 1; index >= 0; --index)
      {
        if (this._periodicCampaignUIEvents[index].isEventDeleted)
          this._periodicCampaignUIEvents.RemoveAt(index);
      }
    }

    public void DeletePeriodicUIEvent(MBCampaignEvent campaignEvent)
    {
      campaignEvent.isEventDeleted = true;
    }

    private static float CalculateCameraElevation(float cameraDistance)
    {
      return (float) ((double) cameraDistance * 0.5 * 0.014999999664723873 + 0.34999999403953552);
    }

    public void OpenOptions() => ScreenManager.PushScreen(ViewCreator.CreateOptionsScreen(false));

    public void OpenEncyclopedia() => Campaign.Current.EncyclopediaManager.GoToLink("LastPage", "");

    public void OpenSaveLoad(bool isSaving)
    {
      ScreenManager.PushScreen(SandBoxViewCreator.CreateSaveLoadScreen(isSaving));
    }

    private void OpenGameplayCheats()
    {
      this._mapCheatsView = this.AddMapView<MapCheatsView>();
      this.IsMapCheatsActive = true;
    }

    public void CloseGameplayCheats()
    {
      if (this._mapCheatsView != null)
        this.RemoveMapView(this._mapCheatsView);
      else
        Debug.FailedAssert("Requested remove map cheats but cheats is not enabled", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Map\\MapScreen.cs", nameof (CloseGameplayCheats), 3433);
    }

    public void CloseEscapeMenu() => this.OnEscapeMenuToggled();

    public void OpenEscapeMenu() => this.OnEscapeMenuToggled(true);

    public void CloseCampaignOptions()
    {
      if (this._campaignOptionsView == null)
      {
        Debug.FailedAssert("Trying to close campaign options when it's not set", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Map\\MapScreen.cs", nameof (CloseCampaignOptions), 3451);
        this._campaignOptionsView = (MapView) this.GetMapView<MapCampaignOptionsView>();
        if (this._campaignOptionsView == null)
        {
          Debug.FailedAssert("Trying to close campaign options when it's not open", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Map\\MapScreen.cs", nameof (CloseCampaignOptions), 3456);
          this.IsInCampaignOptions = false;
          this._campaignOptionsView = (MapView) null;
          return;
        }
      }
      if (this._campaignOptionsView != null)
        this.RemoveMapView(this._campaignOptionsView);
      this._campaignOptionsView = (MapView) null;
      this.IsInCampaignOptions = false;
    }

    private List<EscapeMenuItemVM> GetEscapeMenuItems()
    {
      bool isMapConversationActive = this._mapConversationView != null;
      bool isAtSaveLimit = MBSaveLoad.IsMaxNumberOfSavesReached();
      return new List<EscapeMenuItemVM>()
      {
        new EscapeMenuItemVM(new TextObject("{=e139gKZc}Return to the Game"), (Action<object>) (o => this.OnEscapeMenuToggled()), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(false, TextObject.Empty)), true),
        new EscapeMenuItemVM(new TextObject("{=PXT6aA4J}Campaign Options"), (Action<object>) (o =>
        {
          this._campaignOptionsView = this.AddMapView<MapCampaignOptionsView>();
          this.IsInCampaignOptions = true;
        }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(false, TextObject.Empty)), false),
        new EscapeMenuItemVM(new TextObject("{=NqarFr4P}Options"), (Action<object>) (o =>
        {
          this.OnEscapeMenuToggled();
          this.OpenOptions();
        }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(false, TextObject.Empty)), false),
        new EscapeMenuItemVM(new TextObject("{=bV75iwKa}Save"), (Action<object>) (o =>
        {
          this.OnEscapeMenuToggled();
          Campaign.Current.SaveHandler.QuickSaveCurrentGame();
        }), (object) null, (Func<Tuple<bool, TextObject>>) (() => this.GetIsEscapeMenuOptionDisabledReason(isMapConversationActive, false, false)), false),
        new EscapeMenuItemVM(new TextObject("{=e0KdfaNe}Save As"), (Action<object>) (o =>
        {
          this.OnEscapeMenuToggled();
          this.OpenSaveLoad(true);
        }), (object) null, (Func<Tuple<bool, TextObject>>) (() => this.GetIsEscapeMenuOptionDisabledReason(isMapConversationActive, CampaignOptions.IsIronmanMode, false)), false),
        new EscapeMenuItemVM(new TextObject("{=9NuttOBC}Load"), (Action<object>) (o =>
        {
          this.OnEscapeMenuToggled();
          this.OpenSaveLoad(false);
        }), (object) null, (Func<Tuple<bool, TextObject>>) (() => this.GetIsEscapeMenuOptionDisabledReason(isMapConversationActive, CampaignOptions.IsIronmanMode, false)), false),
        new EscapeMenuItemVM(new TextObject("{=AbEh2y8o}Save And Exit"), (Action<object>) (o =>
        {
          Campaign.Current.SaveHandler.QuickSaveCurrentGame();
          this.OnEscapeMenuToggled();
          InformationManager.HideInquiry();
          this._exitOnSaveOver = true;
        }), (object) null, (Func<Tuple<bool, TextObject>>) (() => this.GetIsEscapeMenuOptionDisabledReason(isMapConversationActive, false, isAtSaveLimit)), false),
        new EscapeMenuItemVM(new TextObject("{=RamV6yLM}Exit to Main Menu"), (Action<object>) (o => InformationManager.ShowInquiry(new InquiryData(GameTexts.FindText("str_exit").ToString(), GameTexts.FindText("str_mission_exit_query").ToString(), true, true, GameTexts.FindText("str_yes").ToString(), GameTexts.FindText("str_no").ToString(), new Action(this.OnExitToMainMenu), (Action) (() => this.OnEscapeMenuToggled())))), (object) null, (Func<Tuple<bool, TextObject>>) (() => this.GetIsEscapeMenuOptionDisabledReason(false, CampaignOptions.IsIronmanMode, false)), false)
      };
    }

    private Tuple<bool, TextObject> GetIsEscapeMenuOptionDisabledReason(
      bool isMapConversationActive,
      bool isIronmanMode,
      bool isAtSaveLimit)
    {
      if (isIronmanMode)
        return new Tuple<bool, TextObject>(true, GameTexts.FindText("str_pause_menu_disabled_hint", "IronmanMode"));
      if (isMapConversationActive)
        return new Tuple<bool, TextObject>(true, GameTexts.FindText("str_pause_menu_disabled_hint", "OngoingConversation"));
      return isAtSaveLimit ? new Tuple<bool, TextObject>(true, GameTexts.FindText("str_pause_menu_disabled_hint", "SaveLimitReached")) : new Tuple<bool, TextObject>(false, TextObject.Empty);
    }

    private void OpenParty()
    {
      if (Hero.MainHero.HeroState == Hero.CharacterStates.Prisoner || Hero.MainHero == null)
        return;
      Hero mainHero = Hero.MainHero;
      if ((mainHero != null ? (!mainHero.IsDead ? 1 : 0) : 0) == 0)
        return;
      PartyScreenManager.OpenScreenAsNormal();
    }

    public void OpenInventory()
    {
      if (Hero.MainHero == null)
        return;
      Hero mainHero = Hero.MainHero;
      if ((mainHero != null ? (!mainHero.IsDead ? 1 : 0) : 0) == 0)
        return;
      InventoryManager.OpenScreenAsInventory();
    }

    private void OpenKingdom()
    {
      if (Hero.MainHero == null)
        return;
      Hero mainHero = Hero.MainHero;
      if ((mainHero != null ? (!mainHero.IsDead ? 1 : 0) : 0) == 0 || !Hero.MainHero.MapFaction.IsKingdomFaction)
        return;
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<KingdomState>());
    }

    private void OnExitToMainMenu()
    {
      this.OnEscapeMenuToggled();
      InformationManager.HideInquiry();
      this.OnExit();
    }

    private void OpenQuestsScreen()
    {
      if (Hero.MainHero == null)
        return;
      Hero mainHero = Hero.MainHero;
      if ((mainHero != null ? (!mainHero.IsDead ? 1 : 0) : 0) == 0)
        return;
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<QuestsState>());
    }

    private void OpenClanScreen()
    {
      if (Hero.MainHero == null)
        return;
      Hero mainHero = Hero.MainHero;
      if ((mainHero != null ? (!mainHero.IsDead ? 1 : 0) : 0) == 0)
        return;
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<ClanState>());
    }

    private void OpenCharacterDevelopmentScreen()
    {
      if (Hero.MainHero == null)
        return;
      Hero mainHero = Hero.MainHero;
      if ((mainHero != null ? (!mainHero.IsDead ? 1 : 0) : 0) == 0)
        return;
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<CharacterDeveloperState>());
    }

    public void OpenFacegenScreenAux() => this.OpenFaceGeneratorScreen();

    private int GetCircleIndex()
    {
      int circleIndex = (int) (((double) MBCommon.GetApplicationTime() - (double) this._targetCircleRotationStartTime) / 0.10000000149011612) % 10;
      if (circleIndex >= 5)
        circleIndex = 10 - circleIndex - 1;
      return circleIndex;
    }

    public void FastMoveCameraToMainParty() => this._mapCameraView.FastMoveCameraToMainParty();

    public void ResetCamera(bool resetDistance, bool teleportToMainParty)
    {
      this._mapCameraView.ResetCamera(resetDistance, teleportToMainParty);
    }

    public void TeleportCameraToMainParty() => this._mapCameraView.TeleportCameraToMainParty();

    public bool IsCameraLockedToPlayerParty() => this._mapCameraView.IsCameraLockedToPlayerParty();

    private enum TerrainTypeSoundSlot
    {
      dismounted,
      mounted,
      mounted_slow,
      caravan,
      ambient,
    }

    private class TempConversationStateHandler : IConversationStateHandler
    {
      private Queue<Action> _actionQueue = new Queue<Action>();
      private IConversationStateHandler _tempHandler;

      void IConversationStateHandler.ExecuteConversationContinue()
      {
        this._actionQueue.Enqueue((Action) (() => this._tempHandler?.ExecuteConversationContinue()));
      }

      void IConversationStateHandler.OnConversationActivate()
      {
        this._actionQueue.Enqueue((Action) (() => this._tempHandler?.OnConversationActivate()));
      }

      void IConversationStateHandler.OnConversationContinue()
      {
        this._actionQueue.Enqueue((Action) (() => this._tempHandler?.OnConversationContinue()));
      }

      void IConversationStateHandler.OnConversationDeactivate()
      {
        this._actionQueue.Enqueue((Action) (() => this._tempHandler?.OnConversationDeactivate()));
      }

      void IConversationStateHandler.OnConversationInstall()
      {
        this._actionQueue.Enqueue((Action) (() => this._tempHandler?.OnConversationInstall()));
      }

      void IConversationStateHandler.OnConversationUninstall()
      {
        this._actionQueue.Enqueue((Action) (() => this._tempHandler?.OnConversationUninstall()));
      }

      public void ApplyHandlerChangesTo(IConversationStateHandler newHandler)
      {
        this._tempHandler = newHandler;
        while (this._actionQueue.Count > 0)
        {
          Action action = this._actionQueue.Dequeue();
          if (action != null)
            action();
        }
        this._tempHandler = (IConversationStateHandler) null;
      }
    }
  }
}
