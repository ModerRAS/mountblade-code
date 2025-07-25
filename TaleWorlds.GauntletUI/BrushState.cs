// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BrushState
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public struct BrushState : IBrushAnimationState, IDataSource
  {
    public Color FontColor;
    public Color TextGlowColor;
    public Color TextOutlineColor;
    public float TextOutlineAmount;
    public float TextGlowRadius;
    public float TextBlur;
    public float TextShadowOffset;
    public float TextShadowAngle;
    public float TextColorFactor;
    public float TextAlphaFactor;
    public float TextHueFactor;
    public float TextSaturationFactor;
    public float TextValueFactor;

    public void FillFrom(Style style)
    {
      this.FontColor = style.FontColor;
      this.TextGlowColor = style.TextGlowColor;
      this.TextOutlineColor = style.TextOutlineColor;
      this.TextOutlineAmount = style.TextOutlineAmount;
      this.TextGlowRadius = style.TextGlowRadius;
      this.TextBlur = style.TextBlur;
      this.TextShadowOffset = style.TextShadowOffset;
      this.TextShadowAngle = style.TextShadowAngle;
      this.TextColorFactor = style.TextColorFactor;
      this.TextAlphaFactor = style.TextAlphaFactor;
      this.TextHueFactor = style.TextHueFactor;
      this.TextSaturationFactor = style.TextSaturationFactor;
      this.TextValueFactor = style.TextValueFactor;
    }

    public void LerpFrom(BrushState start, Style end, float ratio)
    {
      this.FontColor = Color.Lerp(start.FontColor, end.FontColor, ratio);
      this.TextGlowColor = Color.Lerp(start.TextGlowColor, end.TextGlowColor, ratio);
      this.TextOutlineColor = Color.Lerp(start.TextOutlineColor, end.TextOutlineColor, ratio);
      this.TextOutlineAmount = Mathf.Lerp(start.TextOutlineAmount, end.TextOutlineAmount, ratio);
      this.TextGlowRadius = Mathf.Lerp(start.TextGlowRadius, end.TextGlowRadius, ratio);
      this.TextBlur = Mathf.Lerp(start.TextBlur, end.TextBlur, ratio);
      this.TextShadowOffset = Mathf.Lerp(start.TextShadowOffset, end.TextShadowOffset, ratio);
      this.TextShadowAngle = Mathf.Lerp(start.TextShadowAngle, end.TextShadowAngle, ratio);
      this.TextColorFactor = Mathf.Lerp(start.TextColorFactor, end.TextColorFactor, ratio);
      this.TextAlphaFactor = Mathf.Lerp(start.TextAlphaFactor, end.TextAlphaFactor, ratio);
      this.TextHueFactor = Mathf.Lerp(start.TextHueFactor, end.TextHueFactor, ratio);
      this.TextSaturationFactor = Mathf.Lerp(start.TextSaturationFactor, end.TextSaturationFactor, ratio);
      this.TextValueFactor = Mathf.Lerp(start.TextValueFactor, end.TextValueFactor, ratio);
    }

    void IBrushAnimationState.FillFrom(IDataSource source) => this.FillFrom((Style) source);

    void IBrushAnimationState.LerpFrom(IBrushAnimationState start, IDataSource end, float ratio)
    {
      this.LerpFrom((BrushState) start, (Style) end, ratio);
    }

    public float GetValueAsFloat(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      switch (propertyType)
      {
        case BrushAnimationProperty.BrushAnimationPropertyType.FontColor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowColor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineColor:
          Debug.FailedAssert("Invalid value type for BrushState.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (GetValueAsFloat), 102);
          return 0.0f;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineAmount:
          return this.TextOutlineAmount;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowRadius:
          return this.TextGlowRadius;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextBlur:
          return this.TextBlur;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowOffset:
          return this.TextShadowOffset;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowAngle:
          return this.TextShadowAngle;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextColorFactor:
          return this.TextColorFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextAlphaFactor:
          return this.TextAlphaFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextHueFactor:
          return this.TextHueFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextSaturationFactor:
          return this.TextSaturationFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextValueFactor:
          return this.TextValueFactor;
        default:
          Debug.FailedAssert("Invalid BrushState property.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (GetValueAsFloat), 106);
          return 0.0f;
      }
    }

    public Color GetValueAsColor(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      switch (propertyType)
      {
        case BrushAnimationProperty.BrushAnimationPropertyType.FontColor:
          return this.FontColor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowColor:
          return this.TextGlowColor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineColor:
          return this.TextOutlineColor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineAmount:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowRadius:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextBlur:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowOffset:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowAngle:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextColorFactor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextAlphaFactor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextHueFactor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextSaturationFactor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextValueFactor:
          Debug.FailedAssert("Invalid value type for BrushState.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (GetValueAsColor), 132);
          return Color.Black;
        default:
          Debug.FailedAssert("Invalid BrushState property.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (GetValueAsColor), 135);
          return Color.Black;
      }
    }

    public Sprite GetValueAsSprite(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      if (propertyType == BrushAnimationProperty.BrushAnimationPropertyType.FontColor || (uint) (propertyType - 10) <= 11U)
      {
        Debug.FailedAssert("Invalid value type for BrushState.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (GetValueAsSprite), 157);
        return (Sprite) null;
      }
      Debug.FailedAssert("Invalid BrushState property.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (GetValueAsSprite), 161);
      return (Sprite) null;
    }

    public void SetValueAsFloat(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType,
      float value)
    {
      switch (propertyType)
      {
        case BrushAnimationProperty.BrushAnimationPropertyType.FontColor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowColor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineColor:
          Debug.FailedAssert("Invalid value type for BrushState.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (SetValueAsFloat), 204);
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineAmount:
          this.TextOutlineAmount = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowRadius:
          this.TextGlowRadius = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextBlur:
          this.TextBlur = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowOffset:
          this.TextShadowOffset = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowAngle:
          this.TextShadowAngle = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextColorFactor:
          this.TextColorFactor = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextAlphaFactor:
          this.TextAlphaFactor = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextHueFactor:
          this.TextHueFactor = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextSaturationFactor:
          this.TextSaturationFactor = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextValueFactor:
          this.TextValueFactor = value;
          break;
        default:
          Debug.FailedAssert("Invalid BrushState property.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (SetValueAsFloat), 208);
          break;
      }
    }

    public void SetValueAsColor(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType,
      in Color value)
    {
      switch (propertyType)
      {
        case BrushAnimationProperty.BrushAnimationPropertyType.FontColor:
          this.FontColor = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowColor:
          this.TextGlowColor = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineColor:
          this.TextOutlineColor = value;
          break;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineAmount:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowRadius:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextBlur:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowOffset:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowAngle:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextColorFactor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextAlphaFactor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextHueFactor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextSaturationFactor:
        case BrushAnimationProperty.BrushAnimationPropertyType.TextValueFactor:
          Debug.FailedAssert("Invalid value type for BrushState.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (SetValueAsColor), 237);
          break;
        default:
          Debug.FailedAssert("Invalid BrushState property.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (SetValueAsColor), 240);
          break;
      }
    }

    public void SetValueAsSprite(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType,
      Sprite value)
    {
      if (propertyType == BrushAnimationProperty.BrushAnimationPropertyType.FontColor || (uint) (propertyType - 10) <= 11U)
        Debug.FailedAssert("Invalid value type for BrushState.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (SetValueAsSprite), 262);
      else
        Debug.FailedAssert("Invalid BrushState property.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushState.cs", nameof (SetValueAsSprite), 265);
    }

    public TextMaterial CreateTextMaterial(TwoDimensionDrawContext drawContext)
    {
      TextMaterial textMaterial = drawContext.CreateTextMaterial();
      textMaterial.Color = this.FontColor;
      textMaterial.GlowColor = this.TextGlowColor;
      textMaterial.OutlineColor = this.TextOutlineColor;
      textMaterial.OutlineAmount = this.TextOutlineAmount;
      textMaterial.GlowRadius = this.TextGlowRadius;
      textMaterial.Blur = this.TextBlur;
      textMaterial.ShadowOffset = this.TextShadowOffset;
      textMaterial.ShadowAngle = this.TextShadowAngle;
      textMaterial.ColorFactor = this.TextColorFactor;
      textMaterial.AlphaFactor = this.TextAlphaFactor;
      textMaterial.HueFactor = this.TextHueFactor;
      textMaterial.SaturationFactor = this.TextSaturationFactor;
      textMaterial.ValueFactor = this.TextValueFactor;
      return textMaterial;
    }

    void IBrushAnimationState.SetValueAsColor(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType,
      in Color value)
    {
      this.SetValueAsColor(propertyType, in value);
    }
  }
}
