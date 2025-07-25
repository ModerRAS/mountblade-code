// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameMenus.GameMenu
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameMenus
{
  public class GameMenu
  {
    private TextObject _defaultText;
    public OnInitDelegate OnInit;
    public List<object> MenuRepeatObjects = new List<object>();
    public object LastSelectedMenuObject;
    private CampaignTime _previousTickTime;
    private readonly List<GameMenuOption> _menuItems;

    public GameMenu.MenuAndOptionType Type { get; private set; }

    public string StringId { get; private set; }

    public object RelatedObject { get; private set; }

    public TextObject MenuTitle { get; private set; }

    public GameOverlays.MenuOverlayType OverlayType { get; private set; }

    public bool IsReady { get; private set; }

    public int MenuItemAmount => this._menuItems.Count;

    public object CurrentRepeatableObject
    {
      get
      {
        return this.MenuRepeatObjects.Count <= this.CurrentRepeatableIndex ? (object) null : this.MenuRepeatObjects[this.CurrentRepeatableIndex];
      }
    }

    public bool IsWaitMenu { get; private set; }

    public bool IsWaitActive { get; private set; }

    public bool IsEmpty => this.MenuRepeatObjects.Count == 0 && this.MenuItemAmount == 0;

    public float Progress { get; private set; }

    public float TargetWaitHours { get; private set; }

    public OnTickDelegate OnTick { get; private set; }

    public OnConditionDelegate OnCondition { get; private set; }

    public OnConsequenceDelegate OnConsequence { get; private set; }

    public int CurrentRepeatableIndex { get; set; }

    public IEnumerable<GameMenuOption> MenuOptions => (IEnumerable<GameMenuOption>) this._menuItems;

    internal GameMenu(string idString)
    {
      this.StringId = idString;
      this._menuItems = new List<GameMenuOption>();
    }

    internal void Initialize(
      TextObject text,
      OnInitDelegate initDelegate,
      GameOverlays.MenuOverlayType overlay,
      GameMenu.MenuFlags flags = GameMenu.MenuFlags.None,
      object relatedObject = null)
    {
      this.CurrentRepeatableIndex = 0;
      this.LastSelectedMenuObject = (object) null;
      this._defaultText = text;
      this.OnInit = initDelegate;
      this.OverlayType = overlay;
      this.AutoSelectFirst = (flags & GameMenu.MenuFlags.AutoSelectFirst) != 0;
      this.RelatedObject = relatedObject;
      this.IsReady = true;
    }

    internal void Initialize(
      TextObject text,
      OnInitDelegate initDelegate,
      OnConditionDelegate condition,
      OnConsequenceDelegate consequence,
      OnTickDelegate tick,
      GameMenu.MenuAndOptionType type,
      GameOverlays.MenuOverlayType overlay,
      float targetWaitHours = 0.0f,
      GameMenu.MenuFlags flags = GameMenu.MenuFlags.None,
      object relatedObject = null)
    {
      this.CurrentRepeatableIndex = 0;
      this.LastSelectedMenuObject = (object) null;
      this._defaultText = text;
      this.OnInit = initDelegate;
      this.OverlayType = overlay;
      this.AutoSelectFirst = (flags & GameMenu.MenuFlags.AutoSelectFirst) != 0;
      this.RelatedObject = relatedObject;
      this.OnConsequence = consequence;
      this.OnCondition = condition;
      this.Type = type;
      this.OnTick = tick;
      this.TargetWaitHours = targetWaitHours;
      this.IsWaitMenu = type != 0;
      this.IsReady = true;
    }

    private void AddOption(GameMenuOption newOption, int index = -1)
    {
      if (index >= 0 && this._menuItems.Count >= index)
        this._menuItems.Insert(index, newOption);
      else
        this._menuItems.Add(newOption);
    }

    public bool GetMenuOptionConditionsHold(Game game, MenuContext menuContext, int menuItemNumber)
    {
      if (!this.IsWaitMenu)
        return this._menuItems[menuItemNumber].GetConditionsHold(game, menuContext);
      return this._menuItems[menuItemNumber].GetConditionsHold(game, menuContext) && this.RunWaitMenuCondition(menuContext);
    }

    public TextObject GetMenuOptionText(int menuItemNumber) => this._menuItems[menuItemNumber].Text;

    public GameMenuOption GetGameMenuOption(int menuItemNumber) => this._menuItems[menuItemNumber];

    public TextObject GetMenuOptionText2(int menuItemNumber)
    {
      return this._menuItems[menuItemNumber].Text2;
    }

    public string GetMenuOptionIdString(int menuItemNumber)
    {
      return this._menuItems[menuItemNumber].IdString;
    }

    public TextObject GetMenuOptionTooltip(int menuItemNumber)
    {
      return this._menuItems[menuItemNumber].Tooltip;
    }

    public bool GetMenuOptionIsLeave(int menuItemNumber) => this._menuItems[menuItemNumber].IsLeave;

    public void SetProgressOfWaitingInMenu(float progress) => this.Progress = progress;

    public void SetTargetedWaitingTimeAndInitialProgress(
      float targetedWaitingTime,
      float initialProgress)
    {
      this.TargetWaitHours = targetedWaitingTime;
      this.SetProgressOfWaitingInMenu(initialProgress);
    }

    public GameMenuOption GetLeaveMenuOption(Game game, MenuContext menuContext)
    {
      for (int index = 0; index < this._menuItems.Count; ++index)
      {
        if (this._menuItems[index].IsLeave && this._menuItems[index].IsEnabled && this._menuItems[index].GetConditionsHold(game, menuContext))
          return this._menuItems[index];
      }
      return (GameMenuOption) null;
    }

    public void RunOnTick(MenuContext menuContext, float dt)
    {
      if (!this.IsWaitMenu || !this.IsWaitActive)
        return;
      if (this.OnTick != null)
      {
        this.OnTick(new MenuCallbackArgs(menuContext, this.MenuTitle), CampaignTime.Now - this._previousTickTime);
        this._previousTickTime = CampaignTime.Now;
      }
      if ((double) this.Progress < 1.0)
        return;
      this.EndWait();
      this.RunWaitMenuConsequence(menuContext);
    }

    public bool RunWaitMenuCondition(MenuContext menuContext)
    {
      if (this.OnCondition == null)
        return true;
      int num = this.OnCondition(new MenuCallbackArgs(menuContext, this.MenuTitle)) ? 1 : 0;
      if (num == 0)
        return num != 0;
      if (this.IsWaitActive)
        return num != 0;
      menuContext.GameMenu.StartWait();
      return num != 0;
    }

    public void RunWaitMenuConsequence(MenuContext menuContext)
    {
      if (this.OnConsequence == null)
        return;
      this.OnConsequence(new MenuCallbackArgs(menuContext, this.MenuTitle));
    }

    public void RunMenuOptionConsequence(MenuContext menuContext, int menuItemNumber)
    {
      if (menuItemNumber >= this._menuItems.Count)
        menuItemNumber = this._menuItems.Count - 1;
      if (this._menuItems[menuItemNumber].IsLeave && this.IsWaitMenu)
        this.EndWait();
      this._menuItems[menuItemNumber].RunConsequence(menuContext);
    }

    public void StartWait()
    {
      this._previousTickTime = CampaignTime.Now;
      this.IsWaitActive = true;
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.UnstoppableFastForward;
    }

    public void EndWait()
    {
      this.IsWaitActive = false;
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
    }

    public void RunOnInit(Game game, MenuContext menuContext)
    {
      MenuCallbackArgs args = new MenuCallbackArgs(menuContext, this.MenuTitle);
      if (this.OnInit != null)
      {
        Debug.Print("[GAME MENU] " + menuContext.GameMenu.StringId);
        this.OnInit(args);
        this.MenuTitle = args.MenuTitle;
      }
      CampaignEventDispatcher.Instance.OnGameMenuOpened(args);
    }

    public void PreInit(MenuContext menuContext)
    {
      CampaignEventDispatcher.Instance.BeforeGameMenuOpened(new MenuCallbackArgs(menuContext, this.MenuTitle));
    }

    public void AfterInit(MenuContext menuContext)
    {
      CampaignEventDispatcher.Instance.AfterGameMenuOpened(new MenuCallbackArgs(menuContext, this.MenuTitle));
    }

    public TextObject GetText() => this._defaultText;

    public bool AutoSelectFirst { get; private set; }

    public static void ActivateGameMenu(string menuId)
    {
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      if (Campaign.Current.CurrentMenuContext == null)
      {
        Campaign.Current.GameMenuManager.SetNextMenu(menuId);
        MapState mapState = Game.Current.GameStateManager.LastOrDefault<MapState>();
        mapState?.EnterMenuMode();
        if (mapState == null)
          return;
        bool? isWaitMenu = mapState.MenuContext?.GameMenu?.IsWaitMenu;
        bool flag = true;
        if (!(isWaitMenu.GetValueOrDefault() == flag & isWaitMenu.HasValue))
          return;
        mapState.MenuContext.GameMenu.StartWait();
      }
      else
        GameMenu.SwitchToMenu(menuId);
    }

    public static void SwitchToMenu(string menuId)
    {
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      MenuContext currentMenuContext1 = Campaign.Current.CurrentMenuContext;
      if (currentMenuContext1 != null)
      {
        currentMenuContext1.SwitchToMenu(menuId);
        if (currentMenuContext1.GameMenu.IsWaitMenu && Campaign.Current.TimeControlMode == CampaignTimeControlMode.Stop)
          currentMenuContext1.GameMenu.StartWait();
        MenuContext currentMenuContext2 = Campaign.Current.CurrentMenuContext;
        if (currentMenuContext2 == null || !(currentMenuContext2.GameMenu.StringId == menuId))
          return;
        currentMenuContext2.GameMenu.AfterInit(currentMenuContext2);
      }
      else
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\GameMenus\\GameMenu.cs", nameof (SwitchToMenu), 363);
    }

    public static void ExitToLast()
    {
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      Campaign.Current.GameMenuManager.ExitToLast();
    }

    internal void AddOption(
      string optionId,
      TextObject optionText,
      GameMenuOption.OnConditionDelegate condition,
      GameMenuOption.OnConsequenceDelegate consequence,
      int index = -1,
      bool isLeave = false,
      bool isRepeatable = false,
      object relatedObject = null)
    {
      this.AddOption(new GameMenuOption(GameMenu.MenuAndOptionType.RegularMenuOption, optionId, optionText, optionText, condition, consequence, isLeave, isRepeatable, relatedObject), index);
    }

    internal void RemoveMenuOption(GameMenuOption option) => this._menuItems.Remove(option);

    public enum MenuFlags
    {
      None,
      AutoSelectFirst,
    }

    public enum MenuAndOptionType
    {
      RegularMenuOption,
      WaitMenuShowProgressAndHoursOption,
      WaitMenuShowOnlyProgressOption,
      WaitMenuHideProgressAndHoursOption,
    }
  }
}
