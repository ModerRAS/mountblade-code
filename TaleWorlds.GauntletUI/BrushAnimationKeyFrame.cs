// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BrushAnimationKeyFrame
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class BrushAnimationKeyFrame
  {
    private BrushAnimationKeyFrame.ValueType _valueType;
    private float _valueAsFloat;
    private Color _valueAsColor;
    private Sprite _valueAsSprite;

    public float Time { get; private set; }

    public int Index { get; private set; }

    public void InitializeAsFloat(float time, float value)
    {
      this.Time = time;
      this._valueType = BrushAnimationKeyFrame.ValueType.Float;
      this._valueAsFloat = value;
    }

    public void InitializeAsColor(float time, Color value)
    {
      this.Time = time;
      this._valueType = BrushAnimationKeyFrame.ValueType.Color;
      this._valueAsColor = value;
    }

    public void InitializeAsSprite(float time, Sprite value)
    {
      this.Time = time;
      this._valueType = BrushAnimationKeyFrame.ValueType.Sprite;
      this._valueAsSprite = value;
    }

    public void InitializeIndex(int index) => this.Index = index;

    public float GetValueAsFloat() => this._valueAsFloat;

    public Color GetValueAsColor() => this._valueAsColor;

    public Sprite GetValueAsSprite() => this._valueAsSprite;

    public object GetValueAsObject()
    {
      switch (this._valueType)
      {
        case BrushAnimationKeyFrame.ValueType.Float:
          return (object) this._valueAsFloat;
        case BrushAnimationKeyFrame.ValueType.Color:
          return (object) this._valueAsColor;
        case BrushAnimationKeyFrame.ValueType.Sprite:
          return (object) this._valueAsSprite;
        default:
          return (object) null;
      }
    }

    public BrushAnimationKeyFrame Clone()
    {
      return new BrushAnimationKeyFrame()
      {
        _valueType = this._valueType,
        _valueAsFloat = this._valueAsFloat,
        _valueAsColor = this._valueAsColor,
        _valueAsSprite = this._valueAsSprite,
        Time = this.Time,
        Index = this.Index
      };
    }

    public enum ValueType
    {
      Float,
      Color,
      Sprite,
    }
  }
}
