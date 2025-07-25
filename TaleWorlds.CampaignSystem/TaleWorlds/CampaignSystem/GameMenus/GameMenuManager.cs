// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameMenus.GameMenuManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameMenus
{
  public class GameMenuManager
  {
    private Dictionary<string, GameMenu> _gameMenus;
    public int PreviouslySelectedGameMenuItem = -1;
    public Location NextLocation;
    public Location PreviousLocation;
    public List<Location> MenuLocations = new List<Location>();
    public object PreviouslySelectedGameMenuObject;

    public string NextGameMenuId { get; private set; }

    public GameMenuManager()
    {
      this.NextGameMenuId = (string) null;
      this._gameMenus = new Dictionary<string, GameMenu>();
    }

    public GameMenu NextMenu
    {
      get
      {
        GameMenu nextMenu;
        this._gameMenus.TryGetValue(this.NextGameMenuId, out nextMenu);
        return nextMenu;
      }
    }

    public void SetNextMenu(string name) => this.NextGameMenuId = name;

    public void ExitToLast()
    {
      if (Campaign.Current.CurrentMenuContext == null)
        return;
      Game.Current.GameStateManager.LastOrDefault<MapState>().ExitMenuMode();
    }

    internal object GetSelectedRepeatableObject(MenuContext menuContext)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.LastSelectedMenuObject;
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetSelectedObject");
      return (object) 0;
    }

    internal object ObjectGetCurrentRepeatableObject(MenuContext menuContext)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.CurrentRepeatableObject;
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not return CurrentRepeatableIndex");
      return (object) null;
    }

    public void SetCurrentRepeatableIndex(MenuContext menuContext, int index)
    {
      if (menuContext.GameMenu != null)
        menuContext.GameMenu.CurrentRepeatableIndex = index;
      else if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run SetCurrentRepeatableIndex");
    }

    public bool GetMenuOptionConditionsHold(MenuContext menuContext, int menuItemNumber)
    {
      if (menuContext.GameMenu != null)
      {
        if (Game.Current == null)
          throw new MBNullParameterException("Game");
        return menuContext.GameMenu.GetMenuOptionConditionsHold(Game.Current, menuContext, menuItemNumber);
      }
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetMenuOptionConditionsHold");
      return false;
    }

    public void RefreshMenuOptions(MenuContext menuContext)
    {
      if (menuContext.GameMenu != null)
      {
        if (Game.Current == null)
          throw new MBNullParameterException("Game");
        int menuOptionAmount = Campaign.Current.GameMenuManager.GetVirtualMenuOptionAmount(menuContext);
        for (int menuItemNumber = 0; menuItemNumber < menuOptionAmount; ++menuItemNumber)
          this.GetMenuOptionConditionsHold(menuContext, menuItemNumber);
      }
      else if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetMenuOptionConditionsHold");
    }

    public string GetMenuOptionIdString(MenuContext menuContext, int menuItemNumber)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.GetMenuOptionIdString(menuItemNumber);
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetMenuOptionIdString");
      return "";
    }

    internal bool GetMenuOptionIsLeave(MenuContext menuContext, int menuItemNumber)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.GetMenuOptionIsLeave(menuItemNumber);
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetMenuOptionText");
      return false;
    }

    public void RunConsequencesOfMenuOption(MenuContext menuContext, int menuItemNumber)
    {
      if (menuContext.GameMenu != null)
      {
        if (Game.Current == null)
          throw new MBNullParameterException("Game");
        menuContext.GameMenu.RunMenuOptionConsequence(menuContext, menuItemNumber);
      }
      else if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run RunConsequencesOfMenuOption");
    }

    internal void SetRepeatObjectList(MenuContext menuContext, IEnumerable<object> list)
    {
      if (menuContext.GameMenu != null)
        menuContext.GameMenu.MenuRepeatObjects = list.ToList<object>();
      else
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\GameMenus\\GameMenuManager.cs", nameof (SetRepeatObjectList), 228);
    }

    public TextObject GetVirtualMenuOptionTooltip(MenuContext menuContext, int virtualMenuItemIndex)
    {
      if (menuContext.GameMenu != null && !menuContext.GameMenu.IsEmpty)
      {
        int num = menuContext.GameMenu.MenuRepeatObjects.Count > 0 ? menuContext.GameMenu.MenuRepeatObjects.Count : 1;
        return virtualMenuItemIndex < num ? this.GetMenuOptionTooltip(menuContext, 0) : this.GetMenuOptionTooltip(menuContext, virtualMenuItemIndex + 1 - num);
      }
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionText");
      return TextObject.Empty;
    }

    public GameOverlays.MenuOverlayType GetMenuOverlayType(MenuContext menuContext)
    {
      return menuContext.GameMenu != null ? menuContext.GameMenu.OverlayType : GameOverlays.MenuOverlayType.SettlementWithCharacters;
    }

    public TextObject GetVirtualMenuOptionText(MenuContext menuContext, int virtualMenuItemIndex)
    {
      if (menuContext.GameMenu != null && !menuContext.GameMenu.IsEmpty)
      {
        int num = menuContext.GameMenu.MenuRepeatObjects.Count > 0 ? menuContext.GameMenu.MenuRepeatObjects.Count : 1;
        return virtualMenuItemIndex < num ? this.GetMenuOptionText(menuContext, 0) : this.GetMenuOptionText(menuContext, virtualMenuItemIndex + 1 - num);
      }
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionText");
      return TextObject.Empty;
    }

    public GameMenuOption GetVirtualGameMenuOption(
      MenuContext menuContext,
      int virtualMenuItemIndex)
    {
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetGameMenuOption");
      int num = menuContext.GameMenu.MenuRepeatObjects.Count > 0 ? menuContext.GameMenu.MenuRepeatObjects.Count : 1;
      return virtualMenuItemIndex < num ? menuContext.GameMenu.GetGameMenuOption(0) : menuContext.GameMenu.GetGameMenuOption(virtualMenuItemIndex + 1 - num);
    }

    public TextObject GetVirtualMenuOptionText2(MenuContext menuContext, int virtualMenuItemIndex)
    {
      if (menuContext.GameMenu != null && !menuContext.GameMenu.IsEmpty)
      {
        int num = menuContext.GameMenu.MenuRepeatObjects.Count > 0 ? menuContext.GameMenu.MenuRepeatObjects.Count : 1;
        return virtualMenuItemIndex < num ? this.GetMenuOptionText2(menuContext, 0) : this.GetMenuOptionText2(menuContext, virtualMenuItemIndex + 1 - num);
      }
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionText");
      return TextObject.Empty;
    }

    public float GetVirtualMenuProgress(MenuContext menuContext)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.Progress;
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionText");
      return 0.0f;
    }

    public GameMenu.MenuAndOptionType GetVirtualMenuAndOptionType(MenuContext menuContext)
    {
      return menuContext.GameMenu != null ? menuContext.GameMenu.Type : GameMenu.MenuAndOptionType.RegularMenuOption;
    }

    public bool GetVirtualMenuIsWaitActive(MenuContext menuContext)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.IsWaitActive;
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionText");
      return false;
    }

    public float GetVirtualMenuTargetWaitHours(MenuContext menuContext)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.TargetWaitHours;
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionText");
      return 0.0f;
    }

    public bool GetVirtualMenuOptionIsEnabled(MenuContext menuContext, int virtualMenuItemIndex)
    {
      if (menuContext.GameMenu != null && !menuContext.GameMenu.IsEmpty)
      {
        int num = menuContext.GameMenu.MenuRepeatObjects.Count > 0 ? menuContext.GameMenu.MenuRepeatObjects.Count : 1;
        return virtualMenuItemIndex < num ? menuContext.GameMenu.MenuOptions.ElementAt<GameMenuOption>(0).IsEnabled : menuContext.GameMenu.MenuOptions.ElementAt<GameMenuOption>(virtualMenuItemIndex + 1 - num).IsEnabled;
      }
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionText");
      return false;
    }

    public int GetVirtualMenuOptionAmount(MenuContext menuContext)
    {
      if (menuContext.GameMenu != null)
      {
        int count = menuContext.GameMenu.MenuRepeatObjects.Count;
        int menuItemAmount = menuContext.GameMenu.MenuItemAmount;
        return count == 0 ? menuItemAmount : menuItemAmount - 1 + count;
      }
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionAmount");
      return 0;
    }

    public bool GetVirtualMenuOptionIsLeave(MenuContext menuContext, int virtualMenuItemIndex)
    {
      if (menuContext.GameMenu != null && !menuContext.GameMenu.IsEmpty)
      {
        int num = menuContext.GameMenu.MenuRepeatObjects.Count > 0 ? menuContext.GameMenu.MenuRepeatObjects.Count : 1;
        return virtualMenuItemIndex < num ? this.GetMenuOptionIsLeave(menuContext, 0) : this.GetMenuOptionIsLeave(menuContext, virtualMenuItemIndex + 1 - num);
      }
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionText");
      return false;
    }

    public GameMenuOption GetLeaveMenuOption(MenuContext menuContext)
    {
      return menuContext.GameMenu != null ? menuContext.GameMenu.GetLeaveMenuOption(Game.Current, menuContext) : (GameMenuOption) null;
    }

    internal void RunConsequenceOfVirtualMenuOption(
      MenuContext menuContext,
      int virtualMenuItemIndex)
    {
      if (menuContext.GameMenu != null)
      {
        int num = menuContext.GameMenu.MenuRepeatObjects.Count > 0 ? menuContext.GameMenu.MenuRepeatObjects.Count : 1;
        if (virtualMenuItemIndex < num)
        {
          if (menuContext.GameMenu.MenuRepeatObjects.Count > 0)
            menuContext.GameMenu.LastSelectedMenuObject = menuContext.GameMenu.MenuRepeatObjects[virtualMenuItemIndex];
          this.RunConsequencesOfMenuOption(menuContext, 0);
        }
        else
          this.RunConsequencesOfMenuOption(menuContext, virtualMenuItemIndex + 1 - num);
      }
      else if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run RunVirtualMenuItemConsequence");
    }

    public bool GetVirtualMenuOptionConditionsHold(
      MenuContext menuContext,
      int virtualMenuItemIndex)
    {
      if (menuContext.GameMenu != null && !menuContext.GameMenu.IsEmpty)
      {
        int num = menuContext.GameMenu.MenuRepeatObjects.Count > 0 ? menuContext.GameMenu.MenuRepeatObjects.Count : 1;
        return virtualMenuItemIndex < num ? this.GetMenuOptionConditionsHold(menuContext, 0) : this.GetMenuOptionConditionsHold(menuContext, virtualMenuItemIndex + 1 - num);
      }
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionConditionsHold");
      return false;
    }

    public void OnFrameTick(MenuContext menuContext, float dt)
    {
      if (menuContext.GameMenu == null)
        return;
      menuContext.GameMenu.RunOnTick(menuContext, dt);
    }

    public TextObject GetMenuText(MenuContext menuContext)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.GetText();
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetMenuText");
      return TextObject.Empty;
    }

    private TextObject GetMenuOptionText(MenuContext menuContext, int menuItemNumber)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.GetMenuOptionText(menuItemNumber);
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetMenuOptionText");
      return TextObject.Empty;
    }

    private TextObject GetMenuOptionText2(MenuContext menuContext, int menuItemNumber)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.GetMenuOptionText2(menuItemNumber);
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetMenuOptionText");
      return TextObject.Empty;
    }

    private TextObject GetMenuOptionTooltip(MenuContext menuContext, int menuItemNumber)
    {
      if (menuContext.GameMenu != null && !menuContext.GameMenu.IsEmpty)
        return menuContext.GameMenu.GetMenuOptionTooltip(menuItemNumber);
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetMenuOptionText");
      return TextObject.Empty;
    }

    public void AddGameMenu(GameMenu gameMenu) => this._gameMenus.Add(gameMenu.StringId, gameMenu);

    public void RemoveRelatedGameMenus(object relatedObject)
    {
      List<string> stringList = new List<string>();
      foreach (KeyValuePair<string, GameMenu> gameMenu in this._gameMenus)
      {
        if (gameMenu.Value.RelatedObject == relatedObject)
          stringList.Add(gameMenu.Key);
      }
      foreach (string key in stringList)
        this._gameMenus.Remove(key);
    }

    public void RemoveRelatedGameMenuOptions(object relatedObject)
    {
      foreach (KeyValuePair<string, GameMenu> keyValuePair in this._gameMenus.ToList<KeyValuePair<string, GameMenu>>())
      {
        foreach (GameMenuOption option in keyValuePair.Value.MenuOptions.ToList<GameMenuOption>())
        {
          if (option.RelatedObject == relatedObject)
            keyValuePair.Value.RemoveMenuOption(option);
        }
      }
    }

    internal void UnregisterNonReadyObjects()
    {
      MBList<KeyValuePair<string, GameMenu>> mbList = this._gameMenus.ToMBList<KeyValuePair<string, GameMenu>>();
      for (int index = mbList.Count - 1; index >= 0; --index)
      {
        KeyValuePair<string, GameMenu> keyValuePair = mbList[index];
        if (!keyValuePair.Value.IsReady)
        {
          Dictionary<string, GameMenu> gameMenus = this._gameMenus;
          keyValuePair = mbList[index];
          string key = keyValuePair.Key;
          gameMenus.Remove(key);
        }
      }
    }

    public GameMenu GetGameMenu(string menuId)
    {
      GameMenu gameMenu;
      this._gameMenus.TryGetValue(menuId, out gameMenu);
      return gameMenu;
    }
  }
}
