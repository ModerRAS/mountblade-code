// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.TabControl
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class TabControl : Widget
  {
    private Widget _activeTab;
    private int _selectedIndex;

    public event OnActiveTabChangeEvent OnActiveTabChange;

    public TabControl(UIContext context)
      : base(context)
    {
    }

    protected override void OnChildRemoved(Widget child)
    {
      base.OnChildRemoved(child);
      if (child != this.ActiveTab)
        return;
      this.ActiveTab = (Widget) null;
    }

    [Editor(false)]
    public Widget ActiveTab
    {
      get => this._activeTab;
      private set
      {
        if (this._activeTab == value)
          return;
        this._activeTab = value;
        OnActiveTabChangeEvent onActiveTabChange = this.OnActiveTabChange;
        if (onActiveTabChange == null)
          return;
        onActiveTabChange();
      }
    }

    private void SetActiveTab(int index) => this.SetActiveTab(this.GetChild(index));

    public void SetActiveTab(string tabName) => this.SetActiveTab(this.FindChild(tabName));

    private void SetActiveTab(Widget newTab)
    {
      if (this.ActiveTab == newTab || newTab == null)
        return;
      if (this.ActiveTab != null)
        this.ActiveTab.IsVisible = false;
      this.ActiveTab = newTab;
      this.ActiveTab.IsVisible = true;
      this.SelectedIndex = this.GetChildIndex(this.ActiveTab);
    }

    protected override void OnUpdate(float dt)
    {
      base.OnUpdate(dt);
      if (this.ActiveTab != null && this.ActiveTab.ParentWidget == null)
        this.ActiveTab = (Widget) null;
      if (this.ActiveTab == null || this.ActiveTab.IsDisabled)
      {
        for (int i = 0; i < this.ChildCount; ++i)
        {
          Widget child = this.GetChild(i);
          if (child.IsEnabled && !string.IsNullOrEmpty(child.Id))
          {
            this.ActiveTab = child;
            break;
          }
        }
      }
      for (int i = 0; i < this.ChildCount; ++i)
      {
        Widget child = this.GetChild(i);
        if (this.ActiveTab != child && (child.IsEnabled || child.IsVisible))
          child.IsVisible = false;
        if (this.ActiveTab == child)
          child.IsVisible = true;
      }
    }

    [DataSourceProperty]
    public int SelectedIndex
    {
      get => this._selectedIndex;
      set
      {
        if (this._selectedIndex == value)
          return;
        this._selectedIndex = value;
        this.SetActiveTab(this._selectedIndex);
        this.OnPropertyChanged(value, nameof (SelectedIndex));
      }
    }
  }
}
