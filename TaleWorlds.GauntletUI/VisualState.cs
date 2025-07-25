// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.VisualState
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using TaleWorlds.GauntletUI.BaseTypes;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class VisualState
  {
    private float _transitionDuration;
    private float _positionXOffset;
    private float _positionYOffset;
    private float _suggestedWidth;
    private float _suggestedHeight;
    private float _marginTop;
    private float _marginBottom;
    private float _marginLeft;
    private float _marginRight;

    public string State { get; private set; }

    public float TransitionDuration
    {
      get => this._transitionDuration;
      set
      {
        this._transitionDuration = value;
        this.GotTransitionDuration = true;
      }
    }

    public float PositionXOffset
    {
      get => this._positionXOffset;
      set
      {
        this._positionXOffset = value;
        this.GotPositionXOffset = true;
      }
    }

    public float PositionYOffset
    {
      get => this._positionYOffset;
      set
      {
        this._positionYOffset = value;
        this.GotPositionYOffset = true;
      }
    }

    public float SuggestedWidth
    {
      get => this._suggestedWidth;
      set
      {
        this._suggestedWidth = value;
        this.GotSuggestedWidth = true;
      }
    }

    public float SuggestedHeight
    {
      get => this._suggestedHeight;
      set
      {
        this._suggestedHeight = value;
        this.GotSuggestedHeight = true;
      }
    }

    public float MarginTop
    {
      get => this._marginTop;
      set
      {
        this._marginTop = value;
        this.GotMarginTop = true;
      }
    }

    public float MarginBottom
    {
      get => this._marginBottom;
      set
      {
        this._marginBottom = value;
        this.GotMarginBottom = true;
      }
    }

    public float MarginLeft
    {
      get => this._marginLeft;
      set
      {
        this._marginLeft = value;
        this.GotMarginLeft = true;
      }
    }

    public float MarginRight
    {
      get => this._marginRight;
      set
      {
        this._marginRight = value;
        this.GotMarginRight = true;
      }
    }

    public bool GotTransitionDuration { get; private set; }

    public bool GotPositionXOffset { get; private set; }

    public bool GotPositionYOffset { get; private set; }

    public bool GotSuggestedWidth { get; private set; }

    public bool GotSuggestedHeight { get; private set; }

    public bool GotMarginTop { get; private set; }

    public bool GotMarginBottom { get; private set; }

    public bool GotMarginLeft { get; private set; }

    public bool GotMarginRight { get; private set; }

    public VisualState(string state) => this.State = state;

    public void FillFromWidget(Widget widget)
    {
      this.PositionXOffset = widget.PositionXOffset;
      this.PositionYOffset = widget.PositionYOffset;
      this.SuggestedWidth = widget.SuggestedWidth;
      this.SuggestedHeight = widget.SuggestedHeight;
      this.MarginTop = widget.MarginTop;
      this.MarginBottom = widget.MarginBottom;
      this.MarginLeft = widget.MarginLeft;
      this.MarginRight = widget.MarginRight;
    }
  }
}
