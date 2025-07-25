// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.RectilinearSchiltronFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class RectilinearSchiltronFormation : SquareFormation
  {
    public RectilinearSchiltronFormation(IFormation owner)
      : base(owner)
    {
    }

    public override IFormationArrangement Clone(IFormation formation)
    {
      return (IFormationArrangement) new RectilinearSchiltronFormation(formation);
    }

    public override float MaximumWidth
    {
      get
      {
        return SquareFormation.GetSideWidthFromUnitCount(this.GetUnitsPerSideFromRankCount(SquareFormation.GetMaximumRankCount(this.GetUnitCountWithOverride(), out int _)), this.owner.MaximumInterval, this.UnitDiameter);
      }
    }

    public void Form()
    {
      this.FormFromRankCount(SquareFormation.GetMaximumRankCount(this.GetUnitCountWithOverride(), out int _));
    }
  }
}
