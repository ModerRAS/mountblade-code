// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.GauntletUI.Widgets.DimensionSyncWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using TaleWorlds.GauntletUI;
using TaleWorlds.GauntletUI.BaseTypes;

#nullable disable
namespace TaleWorlds.MountAndBlade.GauntletUI.Widgets
{
  public class DimensionSyncWidget : Widget
  {
    private Widget _widgetToCopyHeightFrom;
    private DimensionSyncWidget.Dimensions _dimensionToSync;
    private int _paddingAmount;

    public DimensionSyncWidget(UIContext context)
      : base(context)
    {
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      if (this.DimensionToSync == DimensionSyncWidget.Dimensions.None || this.WidgetToCopyHeightFrom == null)
        return;
      if (this.DimensionToSync == DimensionSyncWidget.Dimensions.Horizontal || this.DimensionToSync == DimensionSyncWidget.Dimensions.HorizontalAndVertical)
        this.ScaledSuggestedWidth = this.WidgetToCopyHeightFrom.Size.X + (float) this.PaddingAmount * this._scaleToUse;
      if (this.DimensionToSync != DimensionSyncWidget.Dimensions.Vertical && this.DimensionToSync != DimensionSyncWidget.Dimensions.HorizontalAndVertical)
        return;
      this.ScaledSuggestedHeight = this.WidgetToCopyHeightFrom.Size.Y + (float) this.PaddingAmount * this._scaleToUse;
    }

    public Widget WidgetToCopyHeightFrom
    {
      get => this._widgetToCopyHeightFrom;
      set
      {
        if (this._widgetToCopyHeightFrom == value)
          return;
        this._widgetToCopyHeightFrom = value;
        this.OnPropertyChanged<Widget>(value, nameof (WidgetToCopyHeightFrom));
      }
    }

    public int PaddingAmount
    {
      get => this._paddingAmount;
      set
      {
        if (this._paddingAmount == value)
          return;
        this._paddingAmount = value;
      }
    }

    public DimensionSyncWidget.Dimensions DimensionToSync
    {
      get => this._dimensionToSync;
      set
      {
        if (this._dimensionToSync == value)
          return;
        this._dimensionToSync = value;
      }
    }

    public enum Dimensions
    {
      None,
      Horizontal,
      Vertical,
      HorizontalAndVertical,
    }
  }
}
