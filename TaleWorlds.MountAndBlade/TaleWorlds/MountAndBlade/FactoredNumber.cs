// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FactoredNumber
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct FactoredNumber
  {
    private float _limitMinValue;
    private float _limitMaxValue;
    private float _sumOfFactors;

    public float ResultNumber
    {
      get
      {
        return MathF.Clamp(this.BaseNumber + this.BaseNumber * this._sumOfFactors, this.LimitMinValue, this.LimitMaxValue);
      }
    }

    public float BaseNumber { get; private set; }

    public float LimitMinValue => this._limitMinValue;

    public float LimitMaxValue => this._limitMaxValue;

    public FactoredNumber(float baseNumber = 0.0f)
    {
      this.BaseNumber = baseNumber;
      this._sumOfFactors = 0.0f;
      this._limitMinValue = float.MinValue;
      this._limitMaxValue = float.MaxValue;
    }

    public void Add(float value)
    {
      if (value.ApproximatelyEqualsTo(0.0f))
        return;
      this.BaseNumber += value;
    }

    public void AddFactor(float value)
    {
      if (value.ApproximatelyEqualsTo(0.0f))
        return;
      this._sumOfFactors += value;
    }

    public void LimitMin(float minValue) => this._limitMinValue = minValue;

    public void LimitMax(float maxValue) => this._limitMaxValue = maxValue;

    public void Clamp(float minValue, float maxValue)
    {
      this.LimitMin(minValue);
      this.LimitMax(maxValue);
    }
  }
}
