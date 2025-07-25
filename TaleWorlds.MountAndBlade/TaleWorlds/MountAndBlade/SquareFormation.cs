// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SquareFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SquareFormation : LineFormation
  {
    public override float Width
    {
      get
      {
        return SquareFormation.GetSideWidthFromUnitCount(this.UnitCountOfOuterSide, this.Interval, this.UnitDiameter);
      }
      set => this.FormFromBorderSideWidth(value);
    }

    public override float Depth
    {
      get
      {
        return SquareFormation.GetSideWidthFromUnitCount(this.UnitCountOfOuterSide, this.Interval, this.UnitDiameter);
      }
    }

    public override float MinimumWidth
    {
      get
      {
        return SquareFormation.GetSideWidthFromUnitCount(this.GetUnitsPerSideFromRankCount(SquareFormation.GetMaximumRankCount(this.GetUnitCountWithOverride(), out int _)), this.owner.MinimumInterval, this.UnitDiameter);
      }
    }

    public override float MaximumWidth
    {
      get
      {
        return SquareFormation.GetSideWidthFromUnitCount(this.GetUnitsPerSideFromRankCount(1), this.owner.MaximumInterval, this.UnitDiameter);
      }
    }

    private int UnitCountOfOuterSide => MathF.Ceiling((float) this.FileCount / 4f) + 1;

    private int MaxRank => (this.UnitCountOfOuterSide + 1) / 2;

    private new float Distance => this.Interval;

    public SquareFormation(IFormation owner)
      : base(owner, true, true)
    {
    }

    public override IFormationArrangement Clone(IFormation formation)
    {
      return (IFormationArrangement) new SquareFormation(formation);
    }

    public override void DeepCopyFrom(IFormationArrangement arrangement)
    {
      base.DeepCopyFrom(arrangement);
    }

    public void FormFromBorderSideWidth(float borderSideWidth)
    {
      this.FormFromBorderUnitCountPerSide(MathF.Max(1, (int) (((double) borderSideWidth - (double) this.UnitDiameter) / ((double) this.Interval + (double) this.UnitDiameter) + 9.9999997473787516E-06)) + 1);
    }

    public void FormFromBorderUnitCountPerSide(int unitCountPerSide)
    {
      if (unitCountPerSide == 1)
        this.FlankWidth = this.UnitDiameter;
      else
        this.FlankWidth = (float) (4 * (unitCountPerSide - 1) - 1) * (this.Interval + this.UnitDiameter) + this.UnitDiameter;
    }

    public int GetUnitsPerSideFromRankCount(int rankCount)
    {
      int countWithOverride = this.GetUnitCountWithOverride();
      rankCount = MathF.Min(SquareFormation.GetMaximumRankCount(countWithOverride, out int _), rankCount);
      double f = (double) countWithOverride / (4.0 * (double) rankCount) + (double) rankCount;
      int sideFromRankCount = MathF.Ceiling((float) f);
      int num = MathF.Round((float) f);
      if (num < sideFromRankCount && num * num == countWithOverride)
        sideFromRankCount = num;
      if (sideFromRankCount == 0)
        sideFromRankCount = 1;
      return sideFromRankCount;
    }

    protected static int GetMaximumRankCount(int unitCount, out int minimumFlankCount)
    {
      int num = (int) MathF.Sqrt((float) unitCount);
      if (num * num != unitCount)
        ++num;
      minimumFlankCount = num;
      return MathF.Max(1, (num + 1) / 2);
    }

    public void FormFromRankCount(int rankCount)
    {
      this.FormFromBorderUnitCountPerSide(this.GetUnitsPerSideFromRankCount(rankCount));
    }

    private SquareFormation.Side GetSideOfUnitPosition(int fileIndex)
    {
      return (SquareFormation.Side) (fileIndex / (this.UnitCountOfOuterSide - 1));
    }

    private SquareFormation.Side? GetSideOfUnitPosition(int fileIndex, int rankIndex)
    {
      SquareFormation.Side sideOfUnitPosition = this.GetSideOfUnitPosition(fileIndex);
      if (rankIndex == 0)
        return new SquareFormation.Side?(sideOfUnitPosition);
      int num1 = this.UnitCountOfOuterSide - 2 * rankIndex;
      if (num1 == 1 && sideOfUnitPosition != SquareFormation.Side.Front)
        return new SquareFormation.Side?();
      int num2 = fileIndex % (this.UnitCountOfOuterSide - 1);
      int num3 = (this.UnitCountOfOuterSide - num1) / 2;
      return num2 >= num3 && this.UnitCountOfOuterSide - num2 - 1 > num3 ? new SquareFormation.Side?(sideOfUnitPosition) : new SquareFormation.Side?();
    }

    private Vec2 GetLocalPositionOfUnitAux(int fileIndex, int rankIndex, float usedInterval)
    {
      if (this.UnitCountOfOuterSide == 1)
        return Vec2.Zero;
      SquareFormation.Side sideOfUnitPosition = this.GetSideOfUnitPosition(fileIndex);
      float num1 = (float) (this.UnitCountOfOuterSide - 1) * (usedInterval + this.UnitDiameter);
      float num2 = (float) (fileIndex % (this.UnitCountOfOuterSide - 1)) * (usedInterval + this.UnitDiameter);
      float num3 = (float) rankIndex * (this.Distance + this.UnitDiameter);
      Vec2 positionOfUnitAux;
      switch (sideOfUnitPosition)
      {
        case SquareFormation.Side.Front:
          positionOfUnitAux = new Vec2((float) (-(double) num1 / 2.0), 0.0f) + new Vec2(num2, -num3);
          break;
        case SquareFormation.Side.Right:
          positionOfUnitAux = new Vec2(num1 / 2f, 0.0f) + new Vec2(-num3, -num2);
          break;
        case SquareFormation.Side.Rear:
          positionOfUnitAux = new Vec2(num1 / 2f, -num1) + new Vec2(-num2, num3);
          break;
        case SquareFormation.Side.Left:
          positionOfUnitAux = new Vec2((float) (-(double) num1 / 2.0), -num1) + new Vec2(num3, num2);
          break;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Formation\\SquareFormation.cs", nameof (GetLocalPositionOfUnitAux), 369);
          positionOfUnitAux = Vec2.Zero;
          break;
      }
      return positionOfUnitAux;
    }

    protected override Vec2 GetLocalPositionOfUnit(int fileIndex, int rankIndex)
    {
      return this.GetLocalPositionOfUnitAux(this.ShiftFileIndex(fileIndex), rankIndex, this.Interval);
    }

    protected override Vec2 GetLocalPositionOfUnitWithAdjustment(
      int fileIndex,
      int rankIndex,
      float distanceBetweenAgentsAdjustment)
    {
      return this.GetLocalPositionOfUnitAux(this.ShiftFileIndex(fileIndex), rankIndex, this.Interval + distanceBetweenAgentsAdjustment);
    }

    protected override Vec2 GetLocalDirectionOfUnit(int fileIndex, int rankIndex)
    {
      switch (this.GetSideOfUnitPosition(this.ShiftFileIndex(fileIndex)))
      {
        case SquareFormation.Side.Front:
          return Vec2.Forward;
        case SquareFormation.Side.Right:
          return Vec2.Side;
        case SquareFormation.Side.Rear:
          return -Vec2.Forward;
        case SquareFormation.Side.Left:
          return -Vec2.Side;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Formation\\SquareFormation.cs", nameof (GetLocalDirectionOfUnit), 448);
          return Vec2.Forward;
      }
    }

    public override Vec2? GetLocalDirectionOfUnitOrDefault(IFormationUnit unit)
    {
      return unit.FormationFileIndex < 0 || unit.FormationRankIndex < 0 ? new Vec2?() : new Vec2?(this.GetLocalDirectionOfUnit(unit.FormationFileIndex, unit.FormationRankIndex));
    }

    protected override bool IsUnitPositionRestrained(int fileIndex, int rankIndex)
    {
      return base.IsUnitPositionRestrained(fileIndex, rankIndex) || rankIndex >= this.MaxRank || !this.GetSideOfUnitPosition(this.ShiftFileIndex(fileIndex), rankIndex).HasValue;
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

    private SquareFormation.Side GetSideOfLocalPosition(Vec2 localPosition)
    {
      Vec2 vec2_1 = new Vec2(0.0f, (float) (-(double) ((float) (this.UnitCountOfOuterSide - 1) * (this.Interval + this.UnitDiameter)) / 2.0));
      Vec2 vec2_2 = localPosition - vec2_1;
      vec2_2.y *= (float) (((double) this.Interval + (double) this.UnitDiameter) / ((double) this.Distance + (double) this.UnitDiameter));
      float rotationInRadians = vec2_2.RotationInRadians;
      if ((double) rotationInRadians < 0.0)
        rotationInRadians += 6.28318548f;
      if ((double) rotationInRadians <= 0.78639817237854 || (double) rotationInRadians > 5.4987874031066895)
        return SquareFormation.Side.Front;
      if ((double) rotationInRadians <= 2.3571944236755371)
        return SquareFormation.Side.Left;
      return (double) rotationInRadians <= 3.9279909133911133 ? SquareFormation.Side.Rear : SquareFormation.Side.Right;
    }

    protected override bool TryGetUnitPositionIndexFromLocalPosition(
      Vec2 localPosition,
      out int fileIndex,
      out int rankIndex)
    {
      SquareFormation.Side sideOfLocalPosition = this.GetSideOfLocalPosition(localPosition);
      float num1 = (float) (this.UnitCountOfOuterSide - 1) * (this.Interval + this.UnitDiameter);
      float num2;
      float num3;
      switch (sideOfLocalPosition)
      {
        case SquareFormation.Side.Front:
          Vec2 vec2_1 = localPosition - new Vec2((float) (-(double) num1 / 2.0), 0.0f);
          num2 = vec2_1.x;
          num3 = -vec2_1.y;
          break;
        case SquareFormation.Side.Right:
          Vec2 vec2_2 = localPosition - new Vec2(num1 / 2f, 0.0f);
          num2 = -vec2_2.y;
          num3 = -vec2_2.x;
          break;
        case SquareFormation.Side.Rear:
          Vec2 vec2_3 = localPosition - new Vec2(num1 / 2f, -num1);
          num2 = -vec2_3.x;
          num3 = vec2_3.y;
          break;
        case SquareFormation.Side.Left:
          Vec2 vec2_4 = localPosition - new Vec2((float) (-(double) num1 / 2.0), -num1);
          num2 = vec2_4.y;
          num3 = vec2_4.x;
          break;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Formation\\SquareFormation.cs", nameof (TryGetUnitPositionIndexFromLocalPosition), 575);
          num2 = 0.0f;
          num3 = 0.0f;
          break;
      }
      rankIndex = MathF.Round(num3 / (this.Distance + this.UnitDiameter));
      if (rankIndex < 0 || rankIndex >= this.RankCount || rankIndex >= this.MaxRank)
      {
        fileIndex = -1;
        return false;
      }
      int num4 = MathF.Round(num2 / (this.Interval + this.UnitDiameter));
      if (num4 >= this.UnitCountOfOuterSide - 1)
      {
        fileIndex = 1;
        return false;
      }
      int shiftedFileIndex = num4 + (this.UnitCountOfOuterSide - 1) * (int) sideOfLocalPosition;
      fileIndex = this.UnshiftFileIndex(shiftedFileIndex);
      return fileIndex >= 0 && fileIndex < this.FileCount;
    }

    private int ShiftFileIndex(int fileIndex)
    {
      int num1 = this.UnitCountOfOuterSide + this.UnitCountOfOuterSide / 2 - 2;
      int num2 = fileIndex - num1;
      if (num2 < 0)
        num2 += (this.UnitCountOfOuterSide - 1) * 4;
      return num2;
    }

    private int UnshiftFileIndex(int shiftedFileIndex)
    {
      int num1 = this.UnitCountOfOuterSide + this.UnitCountOfOuterSide / 2 - 2;
      int num2 = shiftedFileIndex + num1;
      if (num2 >= (this.UnitCountOfOuterSide - 1) * 4)
        num2 -= (this.UnitCountOfOuterSide - 1) * 4;
      return num2;
    }

    protected static float GetSideWidthFromUnitCount(
      int sideUnitCount,
      float interval,
      float unitDiameter)
    {
      return sideUnitCount > 0 ? (float) (sideUnitCount - 1) * (interval + unitDiameter) + unitDiameter : 0.0f;
    }

    public override void TurnBackwards()
    {
      int num = this.FileCount / 2;
      for (int fileIndex1 = 0; fileIndex1 <= this.FileCount / 2; ++fileIndex1)
      {
        for (int rankIndex = 0; rankIndex < this.RankCount; ++rankIndex)
        {
          int fileIndex2 = fileIndex1 + num;
          if (fileIndex2 < this.FileCount)
          {
            IFormationUnit unitAt1 = this.GetUnitAt(fileIndex1, rankIndex);
            IFormationUnit unitAt2 = this.GetUnitAt(fileIndex2, rankIndex);
            if (unitAt1 != unitAt2)
            {
              if (unitAt1 != null && unitAt2 != null)
                this.SwitchUnitLocations(unitAt1, unitAt2);
              else if (unitAt1 != null)
              {
                if (this.IsUnitPositionAvailable(fileIndex2, rankIndex))
                  this.RelocateUnit(unitAt1, fileIndex2, rankIndex);
              }
              else if (unitAt2 != null && this.IsUnitPositionAvailable(fileIndex1, rankIndex))
                this.RelocateUnit(unitAt2, fileIndex1, rankIndex);
            }
          }
        }
      }
    }

    private enum Side
    {
      Front,
      Right,
      Rear,
      Left,
    }
  }
}
