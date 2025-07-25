// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BrushAnimationProperty
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Linq;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class BrushAnimationProperty
  {
    public BrushAnimationProperty.BrushAnimationPropertyType PropertyType;
    private List<BrushAnimationKeyFrame> _keyFrames;

    public string LayerName { get; set; }

    public IEnumerable<BrushAnimationKeyFrame> KeyFrames
    {
      get => (IEnumerable<BrushAnimationKeyFrame>) this._keyFrames.AsReadOnly();
    }

    public int Count => this._keyFrames.Count;

    public BrushAnimationProperty() => this._keyFrames = new List<BrushAnimationKeyFrame>();

    public BrushAnimationKeyFrame GetFrameAfter(float time)
    {
      for (int index = 0; index < this._keyFrames.Count; ++index)
      {
        BrushAnimationKeyFrame keyFrame = this._keyFrames[index];
        if ((double) time < (double) keyFrame.Time)
          return keyFrame;
      }
      return (BrushAnimationKeyFrame) null;
    }

    public BrushAnimationKeyFrame GetFrameAt(int i)
    {
      return i >= 0 && i < this._keyFrames.Count ? this._keyFrames[i] : (BrushAnimationKeyFrame) null;
    }

    public BrushAnimationProperty Clone()
    {
      BrushAnimationProperty animationProperty = new BrushAnimationProperty();
      animationProperty.FillFrom(this);
      return animationProperty;
    }

    private void FillFrom(BrushAnimationProperty collection)
    {
      this.PropertyType = collection.PropertyType;
      this._keyFrames = new List<BrushAnimationKeyFrame>(collection._keyFrames.Count);
      for (int index = 0; index < collection._keyFrames.Count; ++index)
        this._keyFrames.Add(collection._keyFrames[index].Clone());
    }

    public void AddKeyFrame(BrushAnimationKeyFrame keyFrame)
    {
      this._keyFrames.Add(keyFrame);
      this._keyFrames = this._keyFrames.OrderBy<BrushAnimationKeyFrame, float>((Func<BrushAnimationKeyFrame, float>) (k => k.Time)).ToList<BrushAnimationKeyFrame>();
      for (int index = 0; index < this._keyFrames.Count; ++index)
        this._keyFrames[index].InitializeIndex(index);
    }

    public void RemoveKeyFrame(BrushAnimationKeyFrame keyFrame) => this._keyFrames.Remove(keyFrame);

    public enum BrushAnimationPropertyType
    {
      Name,
      ColorFactor,
      Color,
      AlphaFactor,
      HueFactor,
      SaturationFactor,
      ValueFactor,
      FontColor,
      OverlayXOffset,
      OverlayYOffset,
      TextGlowColor,
      TextOutlineColor,
      TextOutlineAmount,
      TextGlowRadius,
      TextBlur,
      TextShadowOffset,
      TextShadowAngle,
      TextColorFactor,
      TextAlphaFactor,
      TextHueFactor,
      TextSaturationFactor,
      TextValueFactor,
      Sprite,
      IsHidden,
      XOffset,
      YOffset,
      OverridenWidth,
      OverridenHeight,
      WidthPolicy,
      HeightPolicy,
      HorizontalFlip,
      VerticalFlip,
      OverlayMethod,
      OverlaySprite,
      ExtendLeft,
      ExtendRight,
      ExtendTop,
      ExtendBottom,
      UseRandomBaseOverlayXOffset,
      UseRandomBaseOverlayYOffset,
      Font,
      FontStyle,
      FontSize,
    }
  }
}
