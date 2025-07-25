// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.TabToggleWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class TabToggleWidget : ButtonWidget
  {
    private string _tabName;

    public TabControl TabControlWidget { get; set; }

    public TabToggleWidget(UIContext context)
      : base(context)
    {
    }

    protected override void OnClick()
    {
      base.OnClick();
      if (this.TabControlWidget == null || string.IsNullOrEmpty(this.TabName))
        return;
      this.TabControlWidget.SetActiveTab(this.TabName);
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      bool flag = false;
      if (this.TabControlWidget == null || string.IsNullOrEmpty(this.TabName))
      {
        flag = true;
      }
      else
      {
        Widget child = this.TabControlWidget.FindChild(this.TabName);
        if (child == null || child.IsDisabled)
          flag = true;
      }
      this.IsDisabled = flag;
      this.IsSelected = this.DetermineIfIsSelected();
    }

    private bool DetermineIfIsSelected()
    {
      return this.TabControlWidget?.ActiveTab != null && !string.IsNullOrEmpty(this.TabName) && this.TabControlWidget.ActiveTab.Id == this.TabName && this.IsVisible;
    }

    [Editor(false)]
    public string TabName
    {
      get => this._tabName;
      set
      {
        if (!(this._tabName != value))
          return;
        this._tabName = value;
        this.OnPropertyChanged<string>(value, nameof (TabName));
      }
    }
  }
}
