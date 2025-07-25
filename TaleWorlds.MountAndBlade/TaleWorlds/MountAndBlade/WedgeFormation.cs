// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.WedgeFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class WedgeFormation : LineFormation
  {
    public WedgeFormation(IFormation owner)
      : base(owner)
    {
    }

    public override IFormationArrangement Clone(IFormation formation)
    {
      return (IFormationArrangement) new WedgeFormation(formation);
    }

    private int GetUnitCountOfRank(int rankIndex)
    {
      return MathF.Min(this.FileCount, rankIndex * 2 * 3 + 3);
    }

    protected override bool IsUnitPositionRestrained(int fileIndex, int rankIndex)
    {
      if (base.IsUnitPositionRestrained(fileIndex, rankIndex))
        return true;
      int unitCountOfRank = this.GetUnitCountOfRank(rankIndex);
      int num = (this.FileCount - unitCountOfRank) / 2;
      return fileIndex < num || fileIndex >= num + unitCountOfRank;
    }

    protected override void MakeRestrainedPositionsUnavailable()
    {
      for (int index1 = 0; index1 < this.FileCount; ++index1)
      {
        for (int index2 = 0; index2 < this.RankCount; ++index2)
        {
          if (this.IsUnitPositionRestrained(index1, index2))
            this.UnitPositionAvailabilities[index1, index2] = 1;
        }
      }
    }
  }
}
