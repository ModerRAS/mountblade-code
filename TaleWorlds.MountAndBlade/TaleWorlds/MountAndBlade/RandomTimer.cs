// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.RandomTimer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class RandomTimer : Timer
  {
    private float durationMin;
    private float durationMax;

    public RandomTimer(float gameTime, float durationMin, float durationMax)
      : base(gameTime, MBRandom.RandomFloatRanged(durationMin, durationMax))
    {
      this.durationMin = durationMin;
      this.durationMax = durationMax;
    }

    public override bool Check(float gameTime)
    {
      bool flag1 = false;
      bool flag2;
      do
      {
        flag2 = base.Check(gameTime);
        if (flag2)
        {
          this.RecomputeDuration();
          flag1 = true;
        }
      }
      while (flag2);
      return flag1;
    }

    public void ChangeDuration(float min, float max)
    {
      this.durationMin = min;
      this.durationMax = max;
      this.RecomputeDuration();
    }

    public void RecomputeDuration()
    {
      this.Duration = MBRandom.RandomFloatRanged(this.durationMin, this.durationMax);
    }
  }
}
