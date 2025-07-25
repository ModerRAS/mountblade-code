// Decompiled with JetBrains decompiler
// Type: SandBox.View.SandBoxViewSubModule
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.View.Conversation;
using SandBox.View.Map;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.CampaignSystem.ViewModelCollection;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Core.ViewModelCollection.Information.RundownTooltip;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.Tableaus;
using TaleWorlds.SaveSystem;
using TaleWorlds.SaveSystem.Load;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View
{
  public class SandBoxViewSubModule : MBSubModuleBase
  {
    private TextObject _sandBoxAchievementsHint = new TextObject("{=j09m7S2E}Achievements are disabled in SandBox mode!");
    private bool _isInitialized;
    private ConversationViewManager _conversationViewManager;
    private IMapConversationDataProvider _mapConversationDataProvider;
    private Dictionary<UIntPtr, PartyVisual> _visualsOfEntities;
    private Dictionary<UIntPtr, Tuple<MatrixFrame, PartyVisual>> _frameAndVisualOfEngines;
    private static SandBoxViewSubModule _instance;

    public static ConversationViewManager ConversationViewManager
    {
      get => SandBoxViewSubModule._instance._conversationViewManager;
    }

    public static IMapConversationDataProvider MapConversationDataProvider
    {
      get => SandBoxViewSubModule._instance._mapConversationDataProvider;
    }

    internal static Dictionary<UIntPtr, PartyVisual> VisualsOfEntities
    {
      get => SandBoxViewSubModule._instance._visualsOfEntities;
    }

    internal static Dictionary<UIntPtr, Tuple<MatrixFrame, PartyVisual>> FrameAndVisualOfEngines
    {
      get => SandBoxViewSubModule._instance._frameAndVisualOfEngines;
    }

    protected override void OnSubModuleLoad()
    {
      base.OnSubModuleLoad();
      SandBoxViewSubModule._instance = this;
      SandBoxSaveHelper.OnStateChange += new Action<SandBoxSaveHelper.SaveHelperState>(SandBoxViewSubModule.OnSaveHelperStateChange);
      this.RegisterTooltipTypes();
      Module.CurrentModule.AddInitialStateOption(new InitialStateOption("CampaignResumeGame", new TextObject("{=6mN03uTP}Saved Games"), 0, (Action) (() => ScreenManager.PushScreen(SandBoxViewCreator.CreateSaveLoadScreen(false))), (Func<(bool, TextObject)>) (() => this.IsSavedGamesDisabled())));
      Module.CurrentModule.AddInitialStateOption(new InitialStateOption("ContinueCampaign", new TextObject("{=0tJ1oarX}Continue Campaign"), 1, new Action(this.ContinueCampaign), (Func<(bool, TextObject)>) (() => this.IsContinueCampaignDisabled())));
      Module.CurrentModule.AddInitialStateOption(new InitialStateOption("SandBoxNewGame", new TextObject("{=171fTtIN}SandBox"), 3, (Action) (() => MBGameManager.StartNewGame((MBGameManager) new SandBoxGameManager())), (Func<(bool, TextObject)>) (() => this.IsSandboxDisabled()), this._sandBoxAchievementsHint));
      Module.CurrentModule.ImguiProfilerTick += new Action(this.OnImguiProfilerTick);
      this._mapConversationDataProvider = (IMapConversationDataProvider) new DefaultMapConversationDataProvider();
    }

    protected override void OnSubModuleUnloaded()
    {
      Module.CurrentModule.ImguiProfilerTick -= new Action(this.OnImguiProfilerTick);
      SandBoxSaveHelper.OnStateChange -= new Action<SandBoxSaveHelper.SaveHelperState>(SandBoxViewSubModule.OnSaveHelperStateChange);
      this.UnregisterTooltipTypes();
      SandBoxViewSubModule._instance = (SandBoxViewSubModule) null;
      base.OnSubModuleUnloaded();
    }

    protected override void OnBeforeInitialModuleScreenSetAsRoot()
    {
      base.OnBeforeInitialModuleScreenSetAsRoot();
      if (this._isInitialized)
        return;
      CampaignOptionsManager.Initialize();
      this._isInitialized = true;
    }

    public override void OnCampaignStart(Game game, object starterObject)
    {
      base.OnCampaignStart(game, starterObject);
      if (Campaign.Current == null)
        return;
      this._conversationViewManager = new ConversationViewManager();
    }

    public override void OnGameLoaded(Game game, object initializerObject)
    {
      this._conversationViewManager = new ConversationViewManager();
    }

    public override void OnAfterGameInitializationFinished(Game game, object starterObject)
    {
      base.OnAfterGameInitializationFinished(game, starterObject);
    }

    public override void BeginGameStart(Game game)
    {
      base.BeginGameStart(game);
      if (Campaign.Current == null)
        return;
      this._visualsOfEntities = new Dictionary<UIntPtr, PartyVisual>();
      this._frameAndVisualOfEngines = new Dictionary<UIntPtr, Tuple<MatrixFrame, PartyVisual>>();
      Campaign.Current.SaveHandler.MainHeroVisualSupplier = (IMainHeroVisualSupplier) new MainHeroSaveVisualSupplier();
      TableauCacheManager.InitializeSandboxValues();
    }

    public override void OnGameEnd(Game game)
    {
      if (this._visualsOfEntities != null)
      {
        foreach (PartyVisual partyVisual in this._visualsOfEntities.Values)
          partyVisual.ReleaseResources();
      }
      this._visualsOfEntities = (Dictionary<UIntPtr, PartyVisual>) null;
      this._frameAndVisualOfEngines = (Dictionary<UIntPtr, Tuple<MatrixFrame, PartyVisual>>) null;
      this._conversationViewManager = (ConversationViewManager) null;
      if (Campaign.Current == null)
        return;
      Campaign.Current.SaveHandler.MainHeroVisualSupplier = (IMainHeroVisualSupplier) null;
      TableauCacheManager.ReleaseSandboxValues();
    }

    private (bool, TextObject) IsSavedGamesDisabled()
    {
      if (Module.CurrentModule.IsOnlyCoreContentEnabled)
        return (true, new TextObject("{=V8BXjyYq}Disabled during installation."));
      return MBSaveLoad.NumberOfCurrentSaves == 0 ? (true, new TextObject("{=XcVVE1mp}No saved games found.")) : (false, TextObject.Empty);
    }

    private (bool, TextObject) IsContinueCampaignDisabled()
    {
      if (Module.CurrentModule.IsOnlyCoreContentEnabled)
        return (true, new TextObject("{=V8BXjyYq}Disabled during installation."));
      if (string.IsNullOrEmpty(BannerlordConfig.LatestSaveGameName))
        return (true, new TextObject("{=aWMZQKXZ}Save the game at least once to continue"));
      SaveGameFileInfo saveFileWithName = MBSaveLoad.GetSaveFileWithName(BannerlordConfig.LatestSaveGameName);
      if (saveFileWithName == null)
        return (true, new TextObject("{=60LTq0tQ}Can't find the save file for the latest save game."));
      return saveFileWithName.IsCorrupted ? (true, new TextObject("{=t6W3UjG0}Save game file appear to be corrupted. Try starting a new campaign or load another one from Saved Games menu.")) : (false, TextObject.Empty);
    }

    private (bool, TextObject) IsSandboxDisabled()
    {
      return Module.CurrentModule.IsOnlyCoreContentEnabled ? (true, new TextObject("{=V8BXjyYq}Disabled during installation.")) : (false, TextObject.Empty);
    }

    private void ContinueCampaign()
    {
      SaveGameFileInfo saveFileWithName = MBSaveLoad.GetSaveFileWithName(BannerlordConfig.LatestSaveGameName);
      if (saveFileWithName != null && !saveFileWithName.IsCorrupted)
        SandBoxSaveHelper.TryLoadSave(saveFileWithName, new Action<LoadResult>(this.StartGame));
      else
        InformationManager.ShowInquiry(new InquiryData(new TextObject("{=oZrVNUOk}Error").ToString(), new TextObject("{=t6W3UjG0}Save game file appear to be corrupted. Try starting a new campaign or load another one from Saved Games menu.").ToString(), true, false, new TextObject("{=yS7PvrTD}OK").ToString(), (string) null, (Action) null, (Action) null));
    }

    private void StartGame(LoadResult loadResult)
    {
      MBGameManager.StartNewGame((MBGameManager) new SandBoxGameManager(loadResult));
    }

    private void OnImguiProfilerTick()
    {
      if (Campaign.Current == null)
        return;
      MBReadOnlyList<MobileParty> all = MobileParty.All;
      int num1 = 0;
      int num2 = 0;
      int num3 = 0;
      foreach (MobileParty mobileParty in (List<MobileParty>) all)
      {
        if (mobileParty.IsVisible)
          ++num1;
        PartyVisual visualOfParty = PartyVisualManager.Current.GetVisualOfParty(mobileParty.Party);
        if (visualOfParty.HumanAgentVisuals != null)
          ++num2;
        if (visualOfParty.MountAgentVisuals != null)
          ++num2;
        if (visualOfParty.CaravanMountAgentVisuals != null)
          ++num2;
        ++num3;
      }
      Imgui.BeginMainThreadScope();
      Imgui.Begin("Bannerlord Campaign Statistics");
      Imgui.Columns(2);
      Imgui.Text("Name");
      Imgui.NextColumn();
      Imgui.Text("Count");
      Imgui.NextColumn();
      Imgui.Separator();
      Imgui.Text("Total Mobile Party");
      Imgui.NextColumn();
      Imgui.Text(num3.ToString());
      Imgui.NextColumn();
      Imgui.Text("Visible Mobile Party");
      Imgui.NextColumn();
      Imgui.Text(num1.ToString());
      Imgui.NextColumn();
      Imgui.Text("Total Agent Visuals");
      Imgui.NextColumn();
      Imgui.Text(num2.ToString());
      Imgui.NextColumn();
      Imgui.End();
      Imgui.EndMainThreadScope();
    }

    private void RegisterTooltipTypes()
    {
      InformationManager.RegisterTooltip<List<MobileParty>, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshEncounterTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<Track, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshTrackTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<MapEvent, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshMapEventTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<Army, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshArmyTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<MobileParty, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshMobilePartyTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<Hero, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshHeroTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<Settlement, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshSettlementTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<CharacterObject, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshCharacterTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<WeaponDesignElement, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshCraftingPartTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<InventoryLogic, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshInventoryTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<ItemObject, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshItemTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<Building, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshBuildingTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<Workshop, PropertyBasedTooltipVM>(new Action<PropertyBasedTooltipVM, object[]>(TooltipRefresherCollection.RefreshWorkshopTooltip), "PropertyBasedTooltip");
      InformationManager.RegisterTooltip<ExplainedNumber, RundownTooltipVM>(new Action<RundownTooltipVM, object[]>(TooltipRefresherCollection.RefreshExplainedNumberTooltip), "RundownTooltip");
    }

    private void UnregisterTooltipTypes()
    {
      InformationManager.UnregisterTooltip<List<MobileParty>>();
      InformationManager.UnregisterTooltip<Track>();
      InformationManager.UnregisterTooltip<MapEvent>();
      InformationManager.UnregisterTooltip<Army>();
      InformationManager.UnregisterTooltip<MobileParty>();
      InformationManager.UnregisterTooltip<Hero>();
      InformationManager.UnregisterTooltip<Settlement>();
      InformationManager.UnregisterTooltip<CharacterObject>();
      InformationManager.UnregisterTooltip<WeaponDesignElement>();
      InformationManager.UnregisterTooltip<InventoryLogic>();
      InformationManager.UnregisterTooltip<ItemObject>();
      InformationManager.UnregisterTooltip<Building>();
      InformationManager.UnregisterTooltip<Workshop>();
      InformationManager.UnregisterTooltip<ExplainedNumber>();
    }

    public static void SetMapConversationDataProvider(
      IMapConversationDataProvider mapConversationDataProvider)
    {
      SandBoxViewSubModule._instance._mapConversationDataProvider = mapConversationDataProvider;
    }

    private static void OnSaveHelperStateChange(SandBoxSaveHelper.SaveHelperState currentState)
    {
      switch (currentState)
      {
        case SandBoxSaveHelper.SaveHelperState.Start:
        case SandBoxSaveHelper.SaveHelperState.LoadGame:
          LoadingWindow.EnableGlobalLoadingWindow();
          break;
        case SandBoxSaveHelper.SaveHelperState.Inquiry:
          LoadingWindow.DisableGlobalLoadingWindow();
          break;
        default:
          Debug.FailedAssert("Undefined save state for listener!", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\SandBoxViewSubModule.cs", nameof (OnSaveHelperStateChange), 426);
          break;
      }
    }
  }
}
