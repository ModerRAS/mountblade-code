// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.MapState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class MapState : TaleWorlds.Core.GameState
  {
    private MenuContext _menuContext;
    private bool _mapConversationActive;
    private bool _closeScreenNextFrame;
    private IMapStateHandler _handler;
    private BattleSimulation _battleSimulation;

    public MenuContext MenuContext
    {
      get => this._menuContext;
      private set => this._menuContext = value;
    }

    public string GameMenuId
    {
      get => Campaign.Current.MapStateData.GameMenuId;
      set => Campaign.Current.MapStateData.GameMenuId = value;
    }

    public bool AtMenu => this.MenuContext != null;

    public bool MapConversationActive => this._mapConversationActive;

    public IMapStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public bool IsSimulationActive => this._battleSimulation != null;

    protected override void OnIdleTick(float dt)
    {
      base.OnIdleTick(dt);
      this.Handler?.OnIdleTick(dt);
    }

    private void RefreshHandler() => this.Handler?.OnRefreshState();

    public void OnJoinArmy() => this.RefreshHandler();

    public void OnLeaveArmy() => this.RefreshHandler();

    public void OnDispersePlayerLeadedArmy() => this.RefreshHandler();

    public void OnArmyCreated(MobileParty mobileParty) => this.RefreshHandler();

    public void OnMainPartyEncounter() => this.Handler?.OnMainPartyEncounter();

    public void ProcessTravel(Vec2 point)
    {
      MobileParty.MainParty.Ai.ForceAiNoPathMode = false;
      MobileParty.MainParty.Ai.SetMoveGoToPoint(point);
    }

    public void ProcessTravel(PartyBase party)
    {
      if (party.IsMobile)
        MobileParty.MainParty.Ai.SetMoveEngageParty(party.MobileParty);
      else
        MobileParty.MainParty.Ai.SetMoveGoToSettlement(party.Settlement);
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.StoppablePlay;
      MobileParty.MainParty.Ai.ForceAiNoPathMode = false;
    }

    protected override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (Campaign.Current.SaveHandler.IsSaving)
      {
        Campaign.Current.SaveHandler.SaveTick();
      }
      else
      {
        if (this._battleSimulation != null)
          this._battleSimulation.Tick(dt);
        else if (this.AtMenu)
          this.OnMenuModeTick(dt);
        this.OnMapModeTick(dt);
        if (Campaign.Current.SaveHandler.IsSaving)
          return;
        Campaign.Current.SaveHandler.CampaignTick();
      }
    }

    private void OnMenuModeTick(float dt)
    {
      this.MenuContext.OnTick(dt);
      this.Handler?.OnMenuModeTick(dt);
    }

    private void OnMapModeTick(float dt)
    {
      if (this._closeScreenNextFrame)
      {
        Game.Current.GameStateManager.CleanStates();
      }
      else
      {
        if (this.Handler != null)
          this.Handler.BeforeTick(dt);
        if (Campaign.Current == null || this.GameStateManager.ActiveState != this)
          return;
        Campaign.Current.RealTick(dt);
        this.Handler?.Tick(dt);
        this.Handler?.AfterTick(dt);
        Campaign.Current.Tick();
        this.Handler?.AfterWaitTick(dt);
      }
    }

    public void OnLoadingFinished()
    {
      if (!string.IsNullOrEmpty(this.GameMenuId))
        this.EnterMenuMode();
      this.RefreshHandler();
      if (Campaign.Current.CurrentMenuContext != null && Campaign.Current.CurrentMenuContext.GameMenu != null && Campaign.Current.CurrentMenuContext.GameMenu.IsWaitMenu)
        Campaign.Current.CurrentMenuContext.GameMenu.StartWait();
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
    }

    public void OnMapConversationStarts(
      ConversationCharacterData playerCharacterData,
      ConversationCharacterData conversationPartnerData)
    {
      this._mapConversationActive = true;
      this._handler?.OnMapConversationStarts(playerCharacterData, conversationPartnerData);
    }

    public void OnMapConversationOver()
    {
      this._handler?.OnMapConversationOver();
      this._mapConversationActive = false;
      if (Game.Current.GameStateManager.ActiveState is MapState)
        this.MenuContext?.Refresh();
      this.RefreshHandler();
    }

    internal void OnSignalPeriodicEvents() => this._handler?.OnSignalPeriodicEvents();

    internal void OnHourlyTick()
    {
      this._handler?.OnHourlyTick();
      this.MenuContext?.OnHourlyTick();
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this.MenuContext?.Refresh();
      this.RefreshHandler();
    }

    public void EnterMenuMode()
    {
      this.MenuContext = MBObjectManager.Instance.CreateObject<MenuContext>();
      this._handler?.OnEnteringMenuMode(this.MenuContext);
      this.MenuContext.Refresh();
    }

    public void ExitMenuMode()
    {
      this._handler?.OnExitingMenuMode();
      this.MenuContext.Destroy();
      MBObjectManager.Instance.UnregisterObject((MBObjectBase) this.MenuContext);
      this.MenuContext = (MenuContext) null;
    }

    public void StartBattleSimulation()
    {
      this._battleSimulation = PlayerEncounter.Current.BattleSimulation;
      this._handler?.OnBattleSimulationStarted(this._battleSimulation);
    }

    public void EndBattleSimulation()
    {
      this._battleSimulation = (BattleSimulation) null;
      this._handler?.OnBattleSimulationEnded();
    }

    public void OnPlayerSiegeActivated() => this._handler?.OnPlayerSiegeActivated();

    public void OnPlayerSiegeDeactivated() => this._handler?.OnPlayerSiegeDeactivated();

    public void OnSiegeEngineClick(MatrixFrame siegeEngineFrame)
    {
      this._handler?.OnSiegeEngineClick(siegeEngineFrame);
    }
  }
}
