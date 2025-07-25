// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapNavigationHandler
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Library.EventSystem;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View.Map
{
  public class MapNavigationHandler : INavigationHandler
  {
    private readonly Game _game;
    private NavigationPermissionItem? _mostRecentClanScreenPermission;
    private readonly TextObject _needToBeInKingdomText;
    private readonly MapNavigationHandler.ClanScreenPermissionEvent _clanScreenPermissionEvent;

    public bool IsNavigationLocked { get; set; }

    private InquiryData _unsavedChangesInquiry => this.GetUnsavedChangedInquiry();

    private InquiryData _unapplicableChangesInquiry => this.GetUnapplicableChangedInquiry();

    public MapNavigationHandler()
    {
      this._game = Game.Current;
      this._needToBeInKingdomText = GameTexts.FindText("str_need_to_be_in_kingdom");
      this._clanScreenPermissionEvent = new MapNavigationHandler.ClanScreenPermissionEvent(new Action<bool, TextObject>(this.OnClanScreenPermission));
    }

    private InquiryData GetUnsavedChangedInquiry()
    {
      return new InquiryData(string.Empty, GameTexts.FindText("str_unsaved_changes").ToString(), true, true, GameTexts.FindText("str_apply").ToString(), GameTexts.FindText("str_cancel").ToString(), (Action) null, (Action) null);
    }

    private InquiryData GetUnapplicableChangedInquiry()
    {
      return new InquiryData(string.Empty, GameTexts.FindText("str_unapplicable_changes").ToString(), true, true, GameTexts.FindText("str_apply").ToString(), GameTexts.FindText("str_cancel").ToString(), (Action) null, (Action) null);
    }

    private bool IsMapTopScreen() => ScreenManager.TopScreen is MapScreen;

    private bool IsNavigationBarEnabled()
    {
      if (Hero.MainHero != null)
      {
        Hero mainHero = Hero.MainHero;
        if ((mainHero != null ? (mainHero.IsDead ? 1 : 0) : 0) == 0)
        {
          Campaign current = Campaign.Current;
          if ((current != null ? (current.SaveHandler.IsSaving ? 1 : 0) : 0) == 0 && !this.IsNavigationLocked && (InventoryManager.InventoryLogic == null || InventoryManager.Instance.CurrentMode == InventoryMode.Default) && (PartyScreenManager.PartyScreenLogic == null || PartyScreenManager.Instance.CurrentMode == PartyScreenMode.Normal) && PlayerEncounter.CurrentBattleSimulation == null && (!(ScreenManager.TopScreen is MapScreen topScreen) || !topScreen.IsInArmyManagement && !topScreen.IsMarriageOfferPopupActive && !topScreen.IsMapCheatsActive) && !this.EscapeMenuActive)
            return true;
        }
      }
      return false;
    }

    public bool PartyEnabled
    {
      get
      {
        if (!this.IsNavigationBarEnabled() || this.PartyActive || Hero.MainHero.HeroState == Hero.CharacterStates.Prisoner || MobileParty.MainParty.MapEvent != null)
          return false;
        Mission current = Mission.Current;
        return (current != null ? (!current.IsPartyWindowAccessAllowed ? 1 : 0) : 0) == 0;
      }
    }

    public bool InventoryEnabled
    {
      get
      {
        if (!this.IsNavigationBarEnabled() || this.InventoryActive || Hero.MainHero.HeroState == Hero.CharacterStates.Prisoner)
          return false;
        Mission current = Mission.Current;
        return (current != null ? (!current.IsInventoryAccessAllowed ? 1 : 0) : 0) == 0;
      }
    }

    public bool QuestsEnabled
    {
      get
      {
        if (!this.IsNavigationBarEnabled() || this.QuestsActive)
          return false;
        Mission current = Mission.Current;
        return (current != null ? (!current.IsQuestScreenAccessAllowed ? 1 : 0) : 0) == 0;
      }
    }

    public bool CharacterDeveloperEnabled
    {
      get
      {
        if (!this.IsNavigationBarEnabled() || this.CharacterDeveloperActive)
          return false;
        Mission current = Mission.Current;
        return (current != null ? (!current.IsCharacterWindowAccessAllowed ? 1 : 0) : 0) == 0;
      }
    }

    public NavigationPermissionItem ClanPermission
    {
      get
      {
        if (!this.IsNavigationBarEnabled())
          return new NavigationPermissionItem(false, (TextObject) null);
        if (this.ClanActive)
          return new NavigationPermissionItem(false, (TextObject) null);
        Mission current = Mission.Current;
        if ((current != null ? (!current.IsClanWindowAccessAllowed ? 1 : 0) : 0) != 0)
          return new NavigationPermissionItem(false, (TextObject) null);
        this._mostRecentClanScreenPermission = new NavigationPermissionItem?();
        Game.Current.EventManager.TriggerEvent<MapNavigationHandler.ClanScreenPermissionEvent>(this._clanScreenPermissionEvent);
        return this._mostRecentClanScreenPermission ?? new NavigationPermissionItem(true, (TextObject) null);
      }
    }

    public void OnClanScreenPermission(bool isAvailable, TextObject reasonString)
    {
      if (isAvailable)
        return;
      this._mostRecentClanScreenPermission = new NavigationPermissionItem?(new NavigationPermissionItem(isAvailable, reasonString));
    }

    public NavigationPermissionItem KingdomPermission
    {
      get
      {
        if (!this.IsNavigationBarEnabled())
          return new NavigationPermissionItem(false, (TextObject) null);
        if (this.KingdomActive)
          return new NavigationPermissionItem(false, (TextObject) null);
        if (!Hero.MainHero.MapFaction.IsKingdomFaction)
          return new NavigationPermissionItem(false, this._needToBeInKingdomText);
        Mission current = Mission.Current;
        return (current != null ? (!current.IsKingdomWindowAccessAllowed ? 1 : 0) : 0) != 0 ? new NavigationPermissionItem(false, (TextObject) null) : new NavigationPermissionItem(true, (TextObject) null);
      }
    }

    public bool EscapeMenuEnabled
    {
      get
      {
        return this.IsNavigationBarEnabled() && !this.EscapeMenuActive && this._game.GameStateManager.ActiveState is MapState;
      }
    }

    public bool PartyActive => this._game.GameStateManager.ActiveState is PartyState;

    public bool InventoryActive => this._game.GameStateManager.ActiveState is InventoryState;

    public bool QuestsActive => this._game.GameStateManager.ActiveState is QuestsState;

    public bool CharacterDeveloperActive
    {
      get => this._game.GameStateManager.ActiveState is CharacterDeveloperState;
    }

    public bool ClanActive => this._game.GameStateManager.ActiveState is ClanState;

    public bool KingdomActive => this._game.GameStateManager.ActiveState is KingdomState;

    public bool EscapeMenuActive
    {
      get
      {
        if (!(this._game.GameStateManager.ActiveState is MapState))
          return false;
        MapScreen instance = MapScreen.Instance;
        return instance != null && instance.IsEscapeMenuOpened;
      }
    }

    void INavigationHandler.OpenQuests()
    {
      this.PrepareToOpenQuestsScreen((Action) (() => this.OpenQuestsAction()));
    }

    void INavigationHandler.OpenQuests(IssueBase issue)
    {
      this.PrepareToOpenQuestsScreen((Action) (() => this.OpenQuestsAction(issue)));
    }

    void INavigationHandler.OpenQuests(QuestBase quest)
    {
      this.PrepareToOpenQuestsScreen((Action) (() => this.OpenQuestsAction(quest)));
    }

    void INavigationHandler.OpenQuests(JournalLogEntry log)
    {
      this.PrepareToOpenQuestsScreen((Action) (() => this.OpenQuestsAction(log)));
    }

    private void PrepareToOpenQuestsScreen(Action openQuestsAction)
    {
      if (!this.QuestsEnabled)
        return;
      if (ScreenManager.TopScreen is IChangeableScreen topScreen && topScreen.AnyUnsavedChanges())
      {
        InquiryData data = topScreen.CanChangesBeApplied() ? this._unsavedChangesInquiry : this._unapplicableChangesInquiry;
        data.SetAffirmativeAction((Action) (() =>
        {
          this.ApplyCurrentChanges();
          openQuestsAction();
        }));
        InformationManager.ShowInquiry(data);
      }
      else
      {
        if (!this.IsMapTopScreen())
          this._game.GameStateManager.PopState();
        openQuestsAction();
      }
    }

    private void OpenQuestsAction()
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<QuestsState>());
    }

    private void OpenQuestsAction(IssueBase issue)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<QuestsState>((object) issue));
    }

    private void OpenQuestsAction(QuestBase quest)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<QuestsState>((object) quest));
    }

    private void OpenQuestsAction(JournalLogEntry log)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<QuestsState>((object) log));
    }

    void INavigationHandler.OpenInventory()
    {
      if (!this.InventoryEnabled)
        return;
      if (ScreenManager.TopScreen is IChangeableScreen topScreen)
      {
        if (topScreen.AnyUnsavedChanges())
        {
          InquiryData data = topScreen.CanChangesBeApplied() ? this._unsavedChangesInquiry : this._unapplicableChangesInquiry;
          data.SetAffirmativeAction((Action) (() =>
          {
            this.ApplyCurrentChanges();
            this.OpenInventoryScreenAction();
          }));
          InformationManager.ShowInquiry(data);
        }
        else
          this.OpenInventoryScreenAction();
      }
      else
        this.OpenInventoryScreenAction();
    }

    private void OpenInventoryScreenAction()
    {
      if (!this.IsMapTopScreen())
        this._game.GameStateManager.PopState();
      InventoryManager.OpenScreenAsInventory();
    }

    void INavigationHandler.OpenParty()
    {
      if (!this.PartyEnabled)
        return;
      if (ScreenManager.TopScreen is IChangeableScreen topScreen)
      {
        if (topScreen.AnyUnsavedChanges())
        {
          InquiryData data = topScreen.CanChangesBeApplied() ? this._unsavedChangesInquiry : this._unapplicableChangesInquiry;
          data.SetAffirmativeAction((Action) (() =>
          {
            this.ApplyCurrentChanges();
            this.OpenPartyScreenAction();
          }));
          InformationManager.ShowInquiry(data);
        }
        else
          this.OpenPartyScreenAction();
      }
      else
        this.OpenPartyScreenAction();
    }

    private void OpenPartyScreenAction()
    {
      if (!this.PartyEnabled)
        return;
      if (!this.IsMapTopScreen())
        this._game.GameStateManager.PopState();
      PartyScreenManager.OpenScreenAsNormal();
    }

    void INavigationHandler.OpenCharacterDeveloper()
    {
      this.PrepareToOpenCharacterDeveloper((Action) (() => this.OpenCharacterDeveloperScreenAction()));
    }

    void INavigationHandler.OpenCharacterDeveloper(Hero hero)
    {
      this.PrepareToOpenCharacterDeveloper((Action) (() => this.OpenCharacterDeveloperScreenAction(hero)));
    }

    private void PrepareToOpenCharacterDeveloper(Action openCharacterDeveloperAction)
    {
      if (!this.CharacterDeveloperEnabled)
        return;
      if (ScreenManager.TopScreen is IChangeableScreen topScreen && topScreen.AnyUnsavedChanges())
      {
        InquiryData data = topScreen.CanChangesBeApplied() ? this._unsavedChangesInquiry : this._unapplicableChangesInquiry;
        data.SetAffirmativeAction((Action) (() =>
        {
          this.ApplyCurrentChanges();
          openCharacterDeveloperAction();
        }));
        InformationManager.ShowInquiry(data);
      }
      else
      {
        if (!this.IsMapTopScreen())
          this._game.GameStateManager.PopState();
        openCharacterDeveloperAction();
      }
    }

    private void OpenCharacterDeveloperScreenAction()
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<CharacterDeveloperState>());
    }

    private void OpenCharacterDeveloperScreenAction(Hero hero)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<CharacterDeveloperState>((object) hero));
    }

    void INavigationHandler.OpenKingdom()
    {
      this.PrepareToOpenKingdomScreen((Action) (() => this.OpenKingdomAction()));
    }

    void INavigationHandler.OpenKingdom(Army army)
    {
      this.PrepareToOpenKingdomScreen((Action) (() => this.OpenKingdomAction(army)));
    }

    void INavigationHandler.OpenKingdom(Settlement settlement)
    {
      this.PrepareToOpenKingdomScreen((Action) (() => this.OpenKingdomAction(settlement)));
    }

    void INavigationHandler.OpenKingdom(Clan clan)
    {
      this.PrepareToOpenKingdomScreen((Action) (() => this.OpenKingdomAction(clan)));
    }

    void INavigationHandler.OpenKingdom(PolicyObject policy)
    {
      this.PrepareToOpenKingdomScreen((Action) (() => this.OpenKingdomAction(policy)));
    }

    void INavigationHandler.OpenKingdom(IFaction faction)
    {
      this.PrepareToOpenKingdomScreen((Action) (() => this.OpenKingdomAction(faction)));
    }

    void INavigationHandler.OpenKingdom(KingdomDecision decision)
    {
      this.PrepareToOpenKingdomScreen((Action) (() => this.OpenKingdomAction(decision)));
    }

    private void PrepareToOpenKingdomScreen(Action openKingdomAction)
    {
      if (!this.KingdomPermission.IsAuthorized)
        return;
      if (ScreenManager.TopScreen is IChangeableScreen topScreen && topScreen.AnyUnsavedChanges())
      {
        InquiryData data = topScreen.CanChangesBeApplied() ? this._unsavedChangesInquiry : this._unapplicableChangesInquiry;
        data.SetAffirmativeAction((Action) (() =>
        {
          this.ApplyCurrentChanges();
          openKingdomAction();
        }));
        InformationManager.ShowInquiry(data);
      }
      else
      {
        if (!this.IsMapTopScreen())
          this._game.GameStateManager.PopState();
        openKingdomAction();
      }
    }

    private void OpenKingdomAction()
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<KingdomState>());
    }

    private void OpenKingdomAction(Army army)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<KingdomState>((object) army));
    }

    private void OpenKingdomAction(Settlement settlement)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<KingdomState>((object) settlement));
    }

    private void OpenKingdomAction(Clan clan)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<KingdomState>((object) clan));
    }

    private void OpenKingdomAction(PolicyObject policy)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<KingdomState>((object) policy));
    }

    private void OpenKingdomAction(IFaction faction)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<KingdomState>((object) faction));
    }

    private void OpenKingdomAction(KingdomDecision decision)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<KingdomState>((object) decision));
    }

    void INavigationHandler.OpenClan()
    {
      this.PrepareToOpenClanScreen((Action) (() => this.OpenClanScreenAction()));
    }

    void INavigationHandler.OpenClan(Hero hero)
    {
      this.PrepareToOpenClanScreen((Action) (() => this.OpenClanScreenAction(hero)));
    }

    void INavigationHandler.OpenClan(PartyBase party)
    {
      this.PrepareToOpenClanScreen((Action) (() => this.OpenClanScreenAction(party)));
    }

    void INavigationHandler.OpenClan(Settlement settlement)
    {
      this.PrepareToOpenClanScreen((Action) (() => this.OpenClanScreenAction(settlement)));
    }

    void INavigationHandler.OpenClan(Workshop workshop)
    {
      this.PrepareToOpenClanScreen((Action) (() => this.OpenClanScreenAction(workshop)));
    }

    void INavigationHandler.OpenClan(Alley alley)
    {
      this.PrepareToOpenClanScreen((Action) (() => this.OpenClanScreenAction(alley)));
    }

    private void PrepareToOpenClanScreen(Action openClanScreenAction)
    {
      if (!this.ClanPermission.IsAuthorized)
        return;
      if (ScreenManager.TopScreen is IChangeableScreen topScreen && topScreen.AnyUnsavedChanges())
      {
        InquiryData data = topScreen.CanChangesBeApplied() ? this._unsavedChangesInquiry : this._unapplicableChangesInquiry;
        data.SetAffirmativeAction((Action) (() =>
        {
          this.ApplyCurrentChanges();
          openClanScreenAction();
        }));
        InformationManager.ShowInquiry(data);
      }
      else
      {
        if (!this.IsMapTopScreen())
          this._game.GameStateManager.PopState();
        openClanScreenAction();
      }
    }

    private void OpenClanScreenAction()
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<ClanState>());
    }

    private void OpenClanScreenAction(Hero hero)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<ClanState>((object) hero));
    }

    private void OpenClanScreenAction(PartyBase party)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<ClanState>((object) party));
    }

    private void OpenClanScreenAction(Settlement settlement)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<ClanState>((object) settlement));
    }

    private void OpenClanScreenAction(Workshop workshop)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<ClanState>((object) workshop));
    }

    private void OpenClanScreenAction(Alley alley)
    {
      this._game.GameStateManager.PushState((TaleWorlds.Core.GameState) this._game.GameStateManager.CreateState<ClanState>((object) alley));
    }

    void INavigationHandler.OpenEscapeMenu()
    {
      if (!this.EscapeMenuEnabled)
        return;
      MapScreen.Instance?.OpenEscapeMenu();
    }

    private void ApplyCurrentChanges()
    {
      if (ScreenManager.TopScreen is IChangeableScreen topScreen && topScreen.AnyUnsavedChanges())
      {
        if (topScreen.CanChangesBeApplied())
          topScreen.ApplyChanges();
        else
          topScreen.ResetChanges();
      }
      if (this.IsMapTopScreen())
        return;
      this._game.GameStateManager.PopState();
    }

    public class ClanScreenPermissionEvent : EventBase
    {
      public Action<bool, TextObject> IsClanScreenAvailable { get; private set; }

      public ClanScreenPermissionEvent(Action<bool, TextObject> isClanScreenAvailable)
      {
        this.IsClanScreenAvailable = isClanScreenAvailable;
      }
    }
  }
}
