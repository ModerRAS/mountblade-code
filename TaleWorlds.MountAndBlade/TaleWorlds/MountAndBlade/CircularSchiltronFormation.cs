// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CircularSchiltronFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CircularSchiltronFormation : CircularFormation
  {
    public CircularSchiltronFormation(IFormation owner)
      : base(owner)
    {
    }

    public override IFormationArrangement Clone(IFormation formation)
    {
      return (IFormationArrangement) new CircularSchiltronFormation(formation);
    }

    public override float MaximumWidth
    {
      get
      {
        int countWithOverride = this.GetUnitCountWithOverride();
        int maximumRankCount = this.GetCurrentMaximumRankCount(countWithOverride);
        float radialInterval = this.owner.MaximumInterval + this.UnitDiameter;
        float distanceInterval = this.owner.MaximumDistance + this.UnitDiameter;
        return this.GetCircumferenceAux(countWithOverride, maximumRankCount, radialInterval, distanceInterval) / 3.14159274f;
      }
    }

    public void Form()
    {
      this.FormFromCircumference(this.GetCircumferenceFromRankCount(this.GetCurrentMaximumRankCount(this.GetUnitCountWithOverride())));
    }
  }
}
