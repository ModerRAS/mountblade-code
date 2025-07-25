// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.GamepadNavigation.GamepadNavigationScopeCollection
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using TaleWorlds.GauntletUI.BaseTypes;

#nullable disable
namespace TaleWorlds.GauntletUI.GamepadNavigation
{
  internal class GamepadNavigationScopeCollection
  {
    private Action<GamepadNavigationScope> _onScopeNavigatableWidgetsChanged;
    private Action<GamepadNavigationScope, bool> _onScopeVisibilityChanged;
    private List<GamepadNavigationScope> _allScopes;
    private List<GamepadNavigationScope> _uninitializedScopes;
    private List<GamepadNavigationScope> _visibleScopes;
    private List<GamepadNavigationScope> _invisibleScopes;
    private List<GamepadNavigationScope> _dirtyScopes;

    public IGamepadNavigationContext Source { get; private set; }

    public ReadOnlyCollection<GamepadNavigationScope> AllScopes { get; private set; }

    public ReadOnlyCollection<GamepadNavigationScope> UninitializedScopes { get; private set; }

    public ReadOnlyCollection<GamepadNavigationScope> VisibleScopes { get; private set; }

    public ReadOnlyCollection<GamepadNavigationScope> InvisibleScopes { get; private set; }

    public GamepadNavigationScopeCollection(
      IGamepadNavigationContext source,
      Action<GamepadNavigationScope> onScopeNavigatableWidgetsChanged,
      Action<GamepadNavigationScope, bool> onScopeVisibilityChanged)
    {
      this._onScopeNavigatableWidgetsChanged = onScopeNavigatableWidgetsChanged;
      this._onScopeVisibilityChanged = onScopeVisibilityChanged;
      this.Source = source;
      this._allScopes = new List<GamepadNavigationScope>();
      this.AllScopes = new ReadOnlyCollection<GamepadNavigationScope>((IList<GamepadNavigationScope>) this._allScopes);
      this._uninitializedScopes = new List<GamepadNavigationScope>();
      this.UninitializedScopes = new ReadOnlyCollection<GamepadNavigationScope>((IList<GamepadNavigationScope>) this._uninitializedScopes);
      this._visibleScopes = new List<GamepadNavigationScope>();
      this.VisibleScopes = new ReadOnlyCollection<GamepadNavigationScope>((IList<GamepadNavigationScope>) this._visibleScopes);
      this._invisibleScopes = new List<GamepadNavigationScope>();
      this.InvisibleScopes = new ReadOnlyCollection<GamepadNavigationScope>((IList<GamepadNavigationScope>) this._invisibleScopes);
      this._dirtyScopes = new List<GamepadNavigationScope>();
    }

    internal void OnFinalize()
    {
      this.ClearAllScopes();
      this._onScopeVisibilityChanged = (Action<GamepadNavigationScope, bool>) null;
      this._onScopeNavigatableWidgetsChanged = (Action<GamepadNavigationScope>) null;
    }

    internal void HandleScopeVisibilities()
    {
      lock (this._dirtyScopes)
      {
        for (int index1 = 0; index1 < this._dirtyScopes.Count; ++index1)
        {
          if (this._dirtyScopes[index1] != null)
          {
            for (int index2 = index1 + 1; index2 < this._dirtyScopes.Count; ++index2)
            {
              if (this._dirtyScopes[index1] == this._dirtyScopes[index2])
                this._dirtyScopes[index2] = (GamepadNavigationScope) null;
            }
          }
        }
        foreach (GamepadNavigationScope dirtyScope in this._dirtyScopes)
        {
          if (dirtyScope != null)
          {
            bool flag = dirtyScope.IsVisible();
            this._visibleScopes.Remove(dirtyScope);
            this._invisibleScopes.Remove(dirtyScope);
            if (flag)
              this._visibleScopes.Add(dirtyScope);
            else
              this._invisibleScopes.Add(dirtyScope);
            this._onScopeVisibilityChanged(dirtyScope, flag);
          }
        }
        this._dirtyScopes.Clear();
      }
    }

    private void OnScopeVisibilityChanged(GamepadNavigationScope scope, bool isVisible)
    {
      lock (this._dirtyScopes)
        this._dirtyScopes.Add(scope);
    }

    private void OnScopeNavigatableWidgetsChanged(GamepadNavigationScope scope)
    {
      this._onScopeNavigatableWidgetsChanged(scope);
    }

    internal int GetTotalNumberOfScopes()
    {
      return this._visibleScopes.Count + this._invisibleScopes.Count + this._uninitializedScopes.Count;
    }

    internal void AddScope(GamepadNavigationScope scope)
    {
      this._uninitializedScopes.Add(scope);
      this._allScopes.Add(scope);
    }

    internal void RemoveScope(GamepadNavigationScope scope)
    {
      this._allScopes.Remove(scope);
      this._uninitializedScopes.Remove(scope);
      this._visibleScopes.Remove(scope);
      this._invisibleScopes.Remove(scope);
      scope.OnVisibilityChanged -= new Action<GamepadNavigationScope, bool>(this.OnScopeVisibilityChanged);
      scope.OnNavigatableWidgetsChanged -= new Action<GamepadNavigationScope>(this.OnScopeNavigatableWidgetsChanged);
    }

    internal bool HasScopeInAnyList(GamepadNavigationScope scope)
    {
      return this._visibleScopes.Contains(scope) || this._invisibleScopes.Contains(scope) || this._uninitializedScopes.Contains(scope);
    }

    internal void OnNavigationScopeInitialized(GamepadNavigationScope scope)
    {
      this._uninitializedScopes.Remove(scope);
      if (scope.IsVisible())
        this._visibleScopes.Add(scope);
      else
        this._invisibleScopes.Add(scope);
      scope.OnVisibilityChanged += new Action<GamepadNavigationScope, bool>(this.OnScopeVisibilityChanged);
      scope.OnNavigatableWidgetsChanged += new Action<GamepadNavigationScope>(this.OnScopeNavigatableWidgetsChanged);
    }

    internal void OnWidgetDisconnectedFromRoot(Widget widget)
    {
      for (int index = 0; index < this._visibleScopes.Count; ++index)
      {
        if (this._visibleScopes[index].FindIndexOfWidget(widget) != -1)
        {
          this._visibleScopes[index].RemoveWidget(widget);
          return;
        }
      }
      for (int index = 0; index < this._invisibleScopes.Count; ++index)
      {
        if (this._invisibleScopes[index].FindIndexOfWidget(widget) != -1)
        {
          this._invisibleScopes[index].RemoveWidget(widget);
          return;
        }
      }
      for (int index = 0; index < this._uninitializedScopes.Count; ++index)
      {
        if (this._uninitializedScopes[index].FindIndexOfWidget(widget) != -1)
        {
          this._uninitializedScopes[index].RemoveWidget(widget);
          break;
        }
      }
    }

    private void ClearAllScopes()
    {
      for (int index = 0; index < this._allScopes.Count; ++index)
      {
        this._allScopes[index].ClearNavigatableWidgets();
        this._allScopes[index].OnNavigatableWidgetsChanged -= new Action<GamepadNavigationScope>(this.OnScopeNavigatableWidgetsChanged);
        this._allScopes[index].OnVisibilityChanged -= new Action<GamepadNavigationScope, bool>(this.OnScopeVisibilityChanged);
      }
      this._allScopes.Clear();
      this._uninitializedScopes.Clear();
      this._invisibleScopes.Clear();
      this._visibleScopes.Clear();
      this._allScopes = (List<GamepadNavigationScope>) null;
      this._uninitializedScopes = (List<GamepadNavigationScope>) null;
      this._invisibleScopes = (List<GamepadNavigationScope>) null;
      this._visibleScopes = (List<GamepadNavigationScope>) null;
    }
  }
}
