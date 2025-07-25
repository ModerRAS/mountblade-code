// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameMenus.GameMenuCallbackManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Reflection;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameMenus
{
  public class GameMenuCallbackManager
  {
    private Dictionary<string, GameMenuInitializationHandlerDelegate> _gameMenuInitializationHandlers;
    private Dictionary<string, Dictionary<string, GameMenuEventHandlerDelegate>> _eventHandlers;

    public static GameMenuCallbackManager Instance => Campaign.Current.GameMenuCallbackManager;

    public GameMenuCallbackManager()
    {
      this.FillInitializationHandlers();
      this.FillEventHandlers();
    }

    private void FillInitializationHandlers()
    {
      this._gameMenuInitializationHandlers = new Dictionary<string, GameMenuInitializationHandlerDelegate>();
      this.FillInitializationHandlerWith(typeof (GameMenuInitializationHandler).Assembly);
      foreach (Assembly geAssembly in GameMenuCallbackManager.GeAssemblies())
        this.FillInitializationHandlerWith(geAssembly);
    }

    private static Assembly[] GeAssemblies()
    {
      List<Assembly> assemblyList = new List<Assembly>();
      Assembly assembly1 = typeof (GameMenu).Assembly;
      foreach (Assembly assembly2 in AppDomain.CurrentDomain.GetAssemblies())
      {
        foreach (object referencedAssembly in assembly2.GetReferencedAssemblies())
        {
          if (referencedAssembly.ToString() == assembly1.GetName().ToString())
          {
            assemblyList.Add(assembly2);
            break;
          }
        }
      }
      return assemblyList.ToArray();
    }

    public void OnGameLoad()
    {
      this.FillInitializationHandlers();
      this.FillEventHandlers();
    }

    private void FillInitializationHandlerWith(Assembly assembly)
    {
      foreach (Type type in assembly.GetTypesSafe())
      {
        foreach (MethodInfo method in type.GetMethods(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
        {
          object[] customAttributesSafe = method.GetCustomAttributesSafe(typeof (GameMenuInitializationHandler), false);
          if (customAttributesSafe != null && customAttributesSafe.Length != 0)
          {
            foreach (GameMenuInitializationHandler initializationHandler in customAttributesSafe)
            {
              GameMenuInitializationHandlerDelegate initializationHandlerDelegate = Delegate.CreateDelegate(typeof (GameMenuInitializationHandlerDelegate), method) as GameMenuInitializationHandlerDelegate;
              if (!this._gameMenuInitializationHandlers.ContainsKey(initializationHandler.MenuId))
                this._gameMenuInitializationHandlers.Add(initializationHandler.MenuId, initializationHandlerDelegate);
              else
                this._gameMenuInitializationHandlers[initializationHandler.MenuId] = initializationHandlerDelegate;
            }
          }
        }
      }
    }

    private void FillEventHandlers()
    {
      this._eventHandlers = new Dictionary<string, Dictionary<string, GameMenuEventHandlerDelegate>>();
      this.FillEventHandlersWith(typeof (GameMenuEventHandler).Assembly);
      foreach (Assembly geAssembly in GameMenuCallbackManager.GeAssemblies())
        this.FillEventHandlersWith(geAssembly);
    }

    private void FillEventHandlersWith(Assembly assembly)
    {
      foreach (Type type in assembly.GetTypesSafe())
      {
        foreach (MethodInfo method in type.GetMethods(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
        {
          object[] customAttributesSafe = method.GetCustomAttributesSafe(typeof (GameMenuEventHandler), false);
          if (customAttributesSafe != null && customAttributesSafe.Length != 0)
          {
            foreach (GameMenuEventHandler menuEventHandler in customAttributesSafe)
            {
              GameMenuEventHandlerDelegate eventHandlerDelegate = Delegate.CreateDelegate(typeof (GameMenuEventHandlerDelegate), method) as GameMenuEventHandlerDelegate;
              Dictionary<string, GameMenuEventHandlerDelegate> dictionary;
              if (!this._eventHandlers.TryGetValue(menuEventHandler.MenuId, out dictionary))
              {
                dictionary = new Dictionary<string, GameMenuEventHandlerDelegate>();
                this._eventHandlers.Add(menuEventHandler.MenuId, dictionary);
              }
              if (!dictionary.ContainsKey(menuEventHandler.MenuOptionId))
                dictionary.Add(menuEventHandler.MenuOptionId, eventHandlerDelegate);
              else
                dictionary[menuEventHandler.MenuOptionId] = eventHandlerDelegate;
            }
          }
        }
      }
    }

    public void InitializeState(string menuId, MenuContext state)
    {
      GameMenuInitializationHandlerDelegate initializationHandlerDelegate = (GameMenuInitializationHandlerDelegate) null;
      if (!this._gameMenuInitializationHandlers.TryGetValue(menuId, out initializationHandlerDelegate))
        return;
      MenuCallbackArgs args = new MenuCallbackArgs(state, (TextObject) null);
      initializationHandlerDelegate(args);
    }

    public void OnConsequence(string menuId, GameMenuOption gameMenuOption, MenuContext state)
    {
      Dictionary<string, GameMenuEventHandlerDelegate> dictionary = (Dictionary<string, GameMenuEventHandlerDelegate>) null;
      if (!this._eventHandlers.TryGetValue(menuId, out dictionary))
        return;
      GameMenuEventHandlerDelegate eventHandlerDelegate = (GameMenuEventHandlerDelegate) null;
      if (!dictionary.TryGetValue(gameMenuOption.IdString, out eventHandlerDelegate))
        return;
      MenuCallbackArgs args = new MenuCallbackArgs(state, gameMenuOption.Text);
      eventHandlerDelegate(args);
    }

    public TextObject GetMenuOptionTooltip(MenuContext menuContext, int menuItemNumber)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.GetMenuOptionTooltip(menuItemNumber);
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetMenuOptionText");
      return TextObject.Empty;
    }

    public TextObject GetVirtualMenuOptionTooltip(MenuContext menuContext, int virtualMenuItemIndex)
    {
      if (menuContext.GameMenu != null)
      {
        int num = menuContext.GameMenu.MenuRepeatObjects.Count > 0 ? menuContext.GameMenu.MenuRepeatObjects.Count : 1;
        return virtualMenuItemIndex < num ? this.GetMenuOptionTooltip(menuContext, 0) : this.GetMenuOptionTooltip(menuContext, virtualMenuItemIndex + 1 - num);
      }
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionText");
      return TextObject.Empty;
    }

    public TextObject GetVirtualMenuOptionText(MenuContext menuContext, int virtualMenuItemIndex)
    {
      if (menuContext.GameMenu != null)
      {
        int num = menuContext.GameMenu.MenuRepeatObjects.Count > 0 ? menuContext.GameMenu.MenuRepeatObjects.Count : 1;
        return virtualMenuItemIndex < num ? this.GetMenuOptionText(menuContext, 0) : this.GetMenuOptionText(menuContext, virtualMenuItemIndex + 1 - num);
      }
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetVirtualMenuOptionText");
      return TextObject.Empty;
    }

    public TextObject GetMenuOptionText(MenuContext menuContext, int menuItemNumber)
    {
      if (menuContext.GameMenu != null)
        return menuContext.GameMenu.GetMenuOptionText(menuItemNumber);
      if (menuContext.GameMenu == null)
        throw new MBMisuseException("Current game menu empty, can not run GetMenuOptionText");
      return TextObject.Empty;
    }
  }
}
