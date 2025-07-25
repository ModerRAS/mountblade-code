// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CircularFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CircularFormation : LineFormation
  {
    public CircularFormation(IFormation owner)
      : base(owner, true, true)
    {
    }

    public override IFormationArrangement Clone(IFormation formation)
    {
      return (IFormationArrangement) new CircularFormation(formation);
    }

    private float GetDistanceFromCenterOfRank(int rankIndex)
    {
      float num = this.Radius - (float) rankIndex * (this.Distance + this.UnitDiameter);
      return (double) num >= 0.0 ? num : 0.0f;
    }

    protected override bool IsDeepenApplicable()
    {
      return (double) this.Radius - (double) this.RankCount * ((double) this.Distance + (double) this.UnitDiameter) >= 0.0;
    }

    protected override bool IsNarrowApplicable(int amount)
    {
      return ((double) (this.FileCount - 1 - amount) * ((double) this.Interval + (double) this.UnitDiameter) + (double) this.UnitDiameter) / 6.2831854820251465 - (double) this.RankCount * ((double) this.Distance + (double) this.UnitDiameter) >= 0.0;
    }

    private int GetUnitCountOfRank(int rankIndex)
    {
      return rankIndex == 0 ? this.FileCount : MathF.Max(1, MathF.Floor((float) (6.2831854820251465 * (double) this.GetDistanceFromCenterOfRank(rankIndex) / ((double) this.Interval + (double) this.UnitDiameter))));
    }

    public override float Width
    {
      get => this.Diameter;
      set => this.FormFromCircumference(3.14159274f * value);
    }

    public override float Depth => this.Diameter;

    private float Diameter => 2f * this.Radius;

    private float Radius
    {
      get => (float) (((double) this.FlankWidth + (double) this.Interval) / 6.2831854820251465);
    }

    public override float MinimumWidth
    {
      get
      {
        int countWithOverride = this.GetUnitCountWithOverride();
        int maximumRankCount = this.GetCurrentMaximumRankCount(countWithOverride);
        float radialInterval = this.owner.MinimumInterval + this.UnitDiameter;
        float distanceInterval = this.owner.MinimumDistance + this.UnitDiameter;
        return this.GetCircumferenceAux(countWithOverride, maximumRankCount, radialInterval, distanceInterval) / 3.14159274f;
      }
    }

    public override float MaximumWidth
    {
      get
      {
        return MathF.Max(0.0f, (float) this.GetUnitCountWithOverride() * (this.owner.MaximumInterval + this.UnitDiameter)) / 3.14159274f;
      }
    }

    private int MaxRank => MathF.Floor(this.Radius / (this.Distance + this.UnitDiameter));

    protected override bool IsUnitPositionRestrained(int fileIndex, int rankIndex)
    {
      if (base.IsUnitPositionRestrained(fileIndex, rankIndex) || rankIndex > this.MaxRank)
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

    protected override Vec2 GetLocalDirectionOfUnit(int fileIndex, int rankIndex)
    {
      int unitCountOfRank = this.GetUnitCountOfRank(rankIndex);
      int num = (this.FileCount - unitCountOfRank) / 2;
      Vec2 localDirectionOfUnit = Vec2.FromRotation((float) ((double) ((fileIndex - num) * 2) * 3.1415927410125732 / (double) unitCountOfRank + 3.1415927410125732));
      localDirectionOfUnit.x *= -1f;
      return localDirectionOfUnit;
    }

    public override Vec2? GetLocalDirectionOfUnitOrDefault(IFormationUnit unit)
    {
      return unit.FormationFileIndex < 0 || unit.FormationRankIndex < 0 ? new Vec2?() : new Vec2?(this.GetLocalDirectionOfUnit(unit.FormationFileIndex, unit.FormationRankIndex));
    }

    protected override Vec2 GetLocalPositionOfUnit(int fileIndex, int rankIndex)
    {
      return new Vec2(0.0f, -this.Radius) + this.GetLocalDirectionOfUnit(fileIndex, rankIndex) * this.GetDistanceFromCenterOfRank(rankIndex);
    }

    protected override Vec2 GetLocalPositionOfUnitWithAdjustment(
      int fileIndex,
      int rankIndex,
      float distanceBetweenAgentsAdjustment)
    {
      return this.GetLocalPositionOfUnit(fileIndex, rankIndex);
    }

    protected override bool TryGetUnitPositionIndexFromLocalPosition(
      Vec2 localPosition,
      out int fileIndex,
      out int rankIndex)
    {
      Vec2 vec2_1 = new Vec2(0.0f, -this.Radius);
      Vec2 vec2_2 = localPosition - vec2_1;
      float length = vec2_2.Length;
      rankIndex = MathF.Round((float) (((double) length - (double) this.Radius) / ((double) this.Distance + (double) this.UnitDiameter) * -1.0));
      if (rankIndex < 0 || rankIndex >= this.RankCount)
      {
        fileIndex = -1;
        return false;
      }
      if ((double) this.Radius - (double) rankIndex * ((double) this.Distance + (double) this.UnitDiameter) < 0.0)
      {
        fileIndex = -1;
        return false;
      }
      int unitCountOfRank = this.GetUnitCountOfRank(rankIndex);
      int num1 = (this.FileCount - unitCountOfRank) / 2;
      vec2_2.x *= -1f;
      float num2 = vec2_2.RotationInRadians - 3.14159274f;
      if ((double) num2 < 0.0)
        num2 += 6.28318548f;
      int num3 = MathF.Round((float) ((double) num2 / 2.0 / 3.1415927410125732) * (float) unitCountOfRank);
      fileIndex = num3 + num1;
      return fileIndex >= 0 && fileIndex < this.FileCount;
    }

    protected int GetCurrentMaximumRankCount(int unitCount)
    {
      int a = 0;
      int num1 = 0;
      float num2 = this.Interval + this.UnitDiameter;
      float num3 = this.Distance + this.UnitDiameter;
      while (num1 < unitCount)
      {
        int b = (int) (6.2831854820251465 * (double) ((float) a * num3) / (double) num2);
        num1 += MathF.Max(1, b);
        ++a;
      }
      return MathF.Max(a, 1);
    }

    public float GetCircumferenceFromRankCount(int rankCount)
    {
      int countWithOverride = this.GetUnitCountWithOverride();
      rankCount = MathF.Min(this.GetCurrentMaximumRankCount(countWithOverride), rankCount);
      float radialInterval = this.Interval + this.UnitDiameter;
      float distanceInterval = this.Distance + this.UnitDiameter;
      return this.GetCircumferenceAux(countWithOverride, rankCount, radialInterval, distanceInterval);
    }

    public void FormFromCircumference(float circumference)
    {
      int countWithOverride = this.GetUnitCountWithOverride();
      int maximumRankCount = this.GetCurrentMaximumRankCount(countWithOverride);
      float radialInterval = this.Interval + this.UnitDiameter;
      float distanceInterval = this.Distance + this.UnitDiameter;
      float circumferenceAux = this.GetCircumferenceAux(countWithOverride, maximumRankCount, radialInterval, distanceInterval);
      float maxValue = MathF.Max(0.0f, (float) countWithOverride * radialInterval);
      circumference = MBMath.ClampFloat(circumference, circumferenceAux, maxValue);
      this.FlankWidth = Math.Max(circumference - this.Interval, this.UnitDiameter);
    }

    protected float GetCircumferenceAux(
      int unitCount,
      int rankCount,
      float radialInterval,
      float distanceInterval)
    {
      float num = 6.28318548f * distanceInterval;
      float circumference = MathF.Max(0.0f, (float) unitCount * radialInterval);
      float circumferenceAux;
      do
      {
        circumferenceAux = circumference;
        circumference = MathF.Max(0.0f, circumferenceAux - num);
      }
      while (CircularFormation.GetUnitCountAux(circumference, rankCount, radialInterval, distanceInterval) > unitCount && (double) circumferenceAux > 0.0);
      return circumferenceAux;
    }

    private static int GetUnitCountAux(
      float circumference,
      int rankCount,
      float radialInterval,
      float distanceInterval)
    {
      int unitCountAux = 0;
      double num = 2.0 * Math.PI * (double) distanceInterval;
      for (int index = 1; index <= rankCount; ++index)
        unitCountAux += (int) (Math.Max(0.0, (double) circumference - (double) (rankCount - index) * num) / (double) radialInterval);
      return unitCountAux;
    }
  }
}
