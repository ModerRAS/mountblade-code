// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.ScrollablePanelFixedHeaderWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class ScrollablePanelFixedHeaderWidget : Widget
  {
    private bool _isDirty;
    private float _headerHeight;
    private float _additionalTopOffset;
    private float _additionalBottomOffset;
    private bool _isRelevant = true;

    public Widget FixedHeader { get; set; }

    public float TopOffset { get; set; }

    public float BottomOffset { get; set; } = float.MinValue;

    public ScrollablePanelFixedHeaderWidget(UIContext context)
      : base(context)
    {
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      if (!this._isDirty)
        return;
      this.EventFired("FixedHeaderPropertyChanged");
      this._isDirty = false;
    }

    public float HeaderHeight
    {
      get => this._headerHeight;
      set
      {
        if ((double) value == (double) this._headerHeight)
          return;
        this._headerHeight = value;
        this.SuggestedHeight = this._headerHeight;
        this._isDirty = true;
      }
    }

    public float AdditionalTopOffset
    {
      get => this._additionalTopOffset;
      set
      {
        if ((double) value == (double) this._additionalTopOffset)
          return;
        this._additionalTopOffset = value;
        this._isDirty = true;
      }
    }

    public float AdditionalBottomOffset
    {
      get => this._additionalBottomOffset;
      set
      {
        if ((double) value == (double) this._additionalBottomOffset)
          return;
        this._additionalBottomOffset = value;
        this._isDirty = true;
      }
    }

    [Editor(false)]
    public bool IsRelevant
    {
      get => this._isRelevant;
      set
      {
        if (value == this._isRelevant)
          return;
        this._isRelevant = value;
        this.IsVisible = value;
        this._isDirty = true;
        this.OnPropertyChanged(value, nameof (IsRelevant));
      }
    }
  }
}
