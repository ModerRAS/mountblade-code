// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SkeinFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SkeinFormation : LineFormation
  {
    public SkeinFormation(IFormation owner)
      : base(owner)
    {
    }

    public override IFormationArrangement Clone(IFormation formation)
    {
      return (IFormationArrangement) new SkeinFormation(formation);
    }

    protected override Vec2 GetLocalPositionOfUnit(int fileIndex, int rankIndex)
    {
      float num = (float) (this.FileCount - 1) * (this.Interval + this.UnitDiameter);
      Vec2 localPositionOfUnit = new Vec2((float) ((double) fileIndex * ((double) this.Interval + (double) this.UnitDiameter) - (double) num / 2.0), (float) -rankIndex * (this.Distance + this.UnitDiameter));
      float offsetOfFile = this.GetOffsetOfFile(fileIndex);
      localPositionOfUnit.y -= offsetOfFile;
      return localPositionOfUnit;
    }

    protected override Vec2 GetLocalPositionOfUnitWithAdjustment(
      int fileIndex,
      int rankIndex,
      float distanceBetweenAgentsAdjustment)
    {
      float num1 = this.Interval + distanceBetweenAgentsAdjustment;
      float num2 = (float) (this.FileCount - 1) * (num1 + this.UnitDiameter);
      Vec2 unitWithAdjustment = new Vec2((float) ((double) fileIndex * ((double) num1 + (double) this.UnitDiameter) - (double) num2 / 2.0), (float) -rankIndex * (this.Distance + this.UnitDiameter));
      float offsetOfFile = this.GetOffsetOfFile(fileIndex);
      unitWithAdjustment.y -= offsetOfFile;
      return unitWithAdjustment;
    }

    private float GetOffsetOfFile(int fileIndex)
    {
      int num = this.FileCount / 2;
      return (float) ((double) MathF.Abs(fileIndex - num) * ((double) this.Interval + (double) this.UnitDiameter) / 2.0);
    }

    protected override bool TryGetUnitPositionIndexFromLocalPosition(
      Vec2 localPosition,
      out int fileIndex,
      out int rankIndex)
    {
      float num = (float) (this.FileCount - 1) * (this.Interval + this.UnitDiameter);
      fileIndex = MathF.Round((float) (((double) localPosition.x + (double) num / 2.0) / ((double) this.Interval + (double) this.UnitDiameter)));
      if (fileIndex < 0 || fileIndex >= this.FileCount)
      {
        rankIndex = -1;
        return false;
      }
      float offsetOfFile = this.GetOffsetOfFile(fileIndex);
      localPosition.y += offsetOfFile;
      rankIndex = MathF.Round((float) (-(double) localPosition.y / ((double) this.Distance + (double) this.UnitDiameter)));
      if (rankIndex >= 0 && rankIndex < this.RankCount)
        return true;
      fileIndex = -1;
      return false;
    }
  }
}
