// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.GamepadNavigation.GamepadNavigationForcedScopeCollection
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.GauntletUI.BaseTypes;

#nullable disable
namespace TaleWorlds.GauntletUI.GamepadNavigation
{
  public class GamepadNavigationForcedScopeCollection
  {
    public Action<GamepadNavigationForcedScopeCollection> OnAvailabilityChanged;
    private List<Widget> _invisibleParents;
    private bool _isEnabled;
    private Widget _parentWidget;

    public bool IsEnabled
    {
      get => this._isEnabled;
      set
      {
        if (value == this._isEnabled)
          return;
        this._isEnabled = value;
        Action<GamepadNavigationForcedScopeCollection> availabilityChanged = this.OnAvailabilityChanged;
        if (availabilityChanged == null)
          return;
        availabilityChanged(this);
      }
    }

    public bool IsDisabled
    {
      get => !this.IsEnabled;
      set
      {
        if (value != this.IsEnabled)
          return;
        this.IsEnabled = !value;
      }
    }

    public string CollectionID { get; set; }

    public int CollectionOrder { get; set; }

    public Widget ParentWidget
    {
      get => this._parentWidget;
      set
      {
        if (value == this._parentWidget)
          return;
        if (this._parentWidget != null)
        {
          this._invisibleParents.Clear();
          for (Widget parentWidget = this._parentWidget; parentWidget != null; parentWidget = parentWidget.ParentWidget)
            parentWidget.OnVisibilityChanged -= new Action<Widget>(this.OnParentVisibilityChanged);
        }
        this._parentWidget = value;
        for (Widget parentWidget = this._parentWidget; parentWidget != null; parentWidget = parentWidget.ParentWidget)
        {
          if (!parentWidget.IsVisible)
            this._invisibleParents.Add(parentWidget);
          parentWidget.OnVisibilityChanged += new Action<Widget>(this.OnParentVisibilityChanged);
        }
      }
    }

    public List<GamepadNavigationScope> Scopes { get; private set; }

    public GamepadNavigationScope ActiveScope { get; set; }

    public GamepadNavigationScope PreviousScope { get; set; }

    public GamepadNavigationForcedScopeCollection()
    {
      this.Scopes = new List<GamepadNavigationScope>();
      this._invisibleParents = new List<Widget>();
      this.IsEnabled = true;
    }

    private void OnParentVisibilityChanged(Widget parent)
    {
      int num1 = this._invisibleParents.Count == 0 ? 1 : 0;
      if (!parent.IsVisible)
        this._invisibleParents.Add(parent);
      else
        this._invisibleParents.Remove(parent);
      int num2 = this._invisibleParents.Count == 0 ? 1 : 0;
      if (num1 == num2)
        return;
      Action<GamepadNavigationForcedScopeCollection> availabilityChanged = this.OnAvailabilityChanged;
      if (availabilityChanged == null)
        return;
      availabilityChanged(this);
    }

    public bool IsAvailable()
    {
      return this.IsEnabled && this._invisibleParents.Count == 0 && this.Scopes.Any<GamepadNavigationScope>((Func<GamepadNavigationScope, bool>) (x => x.IsAvailable())) && this.ParentWidget.Context.GamepadNavigation.IsAvailableForNavigation();
    }

    public void AddScope(GamepadNavigationScope scope)
    {
      if (!this.Scopes.Contains(scope))
        this.Scopes.Add(scope);
      Action<GamepadNavigationForcedScopeCollection> availabilityChanged = this.OnAvailabilityChanged;
      if (availabilityChanged == null)
        return;
      availabilityChanged(this);
    }

    public void RemoveScope(GamepadNavigationScope scope)
    {
      if (this.Scopes.Contains(scope))
        this.Scopes.Remove(scope);
      Action<GamepadNavigationForcedScopeCollection> availabilityChanged = this.OnAvailabilityChanged;
      if (availabilityChanged == null)
        return;
      availabilityChanged(this);
    }

    public void ClearScopes() => this.Scopes.Clear();

    public override string ToString()
    {
      return string.Format("ID:{0} C.C.:{1}", (object) this.CollectionID, (object) this.Scopes.Count);
    }
  }
}
