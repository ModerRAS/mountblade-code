// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.IBrushAnimationState
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public interface IBrushAnimationState
  {
    void FillFrom(IDataSource source);

    void LerpFrom(IBrushAnimationState start, IDataSource end, float ratio);

    float GetValueAsFloat(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType);

    Color GetValueAsColor(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType);

    Sprite GetValueAsSprite(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType);

    void SetValueAsFloat(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType,
      float value);

    void SetValueAsColor(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType,
      in Color value);

    void SetValueAsSprite(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType,
      Sprite value);
  }
}
