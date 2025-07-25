// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ArrangementOrder
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct ArrangementOrder
  {
    private float? _walkRestriction;
    private float? _runRestriction;
    private int _unitSpacing;
    public readonly ArrangementOrder.ArrangementOrderEnum OrderEnum;
    public static readonly ArrangementOrder ArrangementOrderCircle = new ArrangementOrder(ArrangementOrder.ArrangementOrderEnum.Circle);
    public static readonly ArrangementOrder ArrangementOrderColumn = new ArrangementOrder(ArrangementOrder.ArrangementOrderEnum.Column);
    public static readonly ArrangementOrder ArrangementOrderLine = new ArrangementOrder(ArrangementOrder.ArrangementOrderEnum.Line);
    public static readonly ArrangementOrder ArrangementOrderLoose = new ArrangementOrder(ArrangementOrder.ArrangementOrderEnum.Loose);
    public static readonly ArrangementOrder ArrangementOrderScatter = new ArrangementOrder(ArrangementOrder.ArrangementOrderEnum.Scatter);
    public static readonly ArrangementOrder ArrangementOrderShieldWall = new ArrangementOrder(ArrangementOrder.ArrangementOrderEnum.ShieldWall);
    public static readonly ArrangementOrder ArrangementOrderSkein = new ArrangementOrder(ArrangementOrder.ArrangementOrderEnum.Skein);
    public static readonly ArrangementOrder ArrangementOrderSquare = new ArrangementOrder(ArrangementOrder.ArrangementOrderEnum.Square);

    public static int GetUnitSpacingOf(ArrangementOrder.ArrangementOrderEnum a)
    {
      switch (a)
      {
        case ArrangementOrder.ArrangementOrderEnum.Loose:
          return 6;
        case ArrangementOrder.ArrangementOrderEnum.ShieldWall:
        case ArrangementOrder.ArrangementOrderEnum.Square:
          return 0;
        default:
          return 2;
      }
    }

    public static bool GetUnitLooseness(ArrangementOrder.ArrangementOrderEnum a)
    {
      return a != ArrangementOrder.ArrangementOrderEnum.ShieldWall;
    }

    public ArrangementOrder(ArrangementOrder.ArrangementOrderEnum orderEnum)
    {
      this.OrderEnum = orderEnum;
      this._walkRestriction = new float?();
      switch (this.OrderEnum)
      {
        case ArrangementOrder.ArrangementOrderEnum.Circle:
          this._runRestriction = new float?(0.5f);
          break;
        case ArrangementOrder.ArrangementOrderEnum.Line:
          this._runRestriction = new float?(0.8f);
          break;
        case ArrangementOrder.ArrangementOrderEnum.Loose:
        case ArrangementOrder.ArrangementOrderEnum.Scatter:
        case ArrangementOrder.ArrangementOrderEnum.Skein:
          this._runRestriction = new float?(0.9f);
          break;
        case ArrangementOrder.ArrangementOrderEnum.ShieldWall:
        case ArrangementOrder.ArrangementOrderEnum.Square:
          this._runRestriction = new float?(0.3f);
          break;
        default:
          this._runRestriction = new float?(1f);
          break;
      }
      this._unitSpacing = ArrangementOrder.GetUnitSpacingOf(this.OrderEnum);
    }

    public void GetMovementSpeedRestriction(out float? runRestriction, out float? walkRestriction)
    {
      runRestriction = this._runRestriction;
      walkRestriction = this._walkRestriction;
    }

    public IFormationArrangement GetArrangement(Formation formation)
    {
      switch (this.OrderEnum)
      {
        case ArrangementOrder.ArrangementOrderEnum.Circle:
          return (IFormationArrangement) new CircularFormation((IFormation) formation);
        case ArrangementOrder.ArrangementOrderEnum.Column:
          return (IFormationArrangement) new ColumnFormation((IFormation) formation);
        case ArrangementOrder.ArrangementOrderEnum.Skein:
          return (IFormationArrangement) new SkeinFormation((IFormation) formation);
        case ArrangementOrder.ArrangementOrderEnum.Square:
          return (IFormationArrangement) new RectilinearSchiltronFormation((IFormation) formation);
        default:
          return (IFormationArrangement) new LineFormation((IFormation) formation);
      }
    }

    public void OnApply(Formation formation)
    {
      formation.SetPositioning(unitSpacing: new int?(this.GetUnitSpacing()));
      this.Rearrange(formation);
      if (this.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Scatter)
      {
        this.TickOccasionally(formation);
        formation.ResetArrangementOrderTickTimer();
      }
      ArrangementOrder.ArrangementOrderEnum orderEnum = this.OrderEnum;
      formation.ApplyActionOnEachUnit((Action<Agent>) (agent =>
      {
        if (agent.IsAIControlled)
        {
          Agent.UsageDirection shieldDirectionOfUnit = ArrangementOrder.GetShieldDirectionOfUnit(formation, agent, orderEnum);
          agent.EnforceShieldUsage(shieldDirectionOfUnit);
        }
        agent.UpdateAgentProperties();
        agent.RefreshBehaviorValues(formation.GetReadonlyMovementOrderReference().OrderEnum, orderEnum);
      }));
    }

    public void SoftUpdate(Formation formation)
    {
      if (this.OrderEnum != ArrangementOrder.ArrangementOrderEnum.Scatter)
        return;
      this.TickOccasionally(formation);
      formation.ResetArrangementOrderTickTimer();
    }

    public static Agent.UsageDirection GetShieldDirectionOfUnit(
      Formation formation,
      Agent unit,
      ArrangementOrder.ArrangementOrderEnum orderEnum)
    {
      Agent.UsageDirection shieldDirectionOfUnit;
      if (unit.IsDetachedFromFormation)
      {
        shieldDirectionOfUnit = Agent.UsageDirection.None;
      }
      else
      {
        switch (orderEnum)
        {
          case ArrangementOrder.ArrangementOrderEnum.Circle:
          case ArrangementOrder.ArrangementOrderEnum.Square:
            IFormationUnit formationUnit = (IFormationUnit) unit;
            shieldDirectionOfUnit = !formationUnit.IsShieldUsageEncouraged ? Agent.UsageDirection.None : (formationUnit.FormationRankIndex != 0 ? Agent.UsageDirection.AttackEnd : Agent.UsageDirection.DefendDown);
            break;
          case ArrangementOrder.ArrangementOrderEnum.ShieldWall:
            IFormationUnit unit1 = (IFormationUnit) unit;
            shieldDirectionOfUnit = unit1.FormationRankIndex != 0 ? (formation.Arrangement.GetNeighborUnitOfLeftSide(unit1) != null ? (formation.Arrangement.GetNeighborUnitOfRightSide(unit1) != null ? Agent.UsageDirection.AttackEnd : Agent.UsageDirection.DefendRight) : Agent.UsageDirection.DefendLeft) : Agent.UsageDirection.DefendDown;
            break;
          default:
            shieldDirectionOfUnit = Agent.UsageDirection.None;
            break;
        }
      }
      return shieldDirectionOfUnit;
    }

    public int GetUnitSpacing() => this._unitSpacing;

    public void Rearrange(Formation formation)
    {
      if (this.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Column)
        this.RearrangeAux(formation, false);
      else
        formation.Rearrange(this.GetArrangement(formation));
    }

    public void RearrangeAux(Formation formation, bool isDirectly)
    {
      float num = MathF.Max(1f, MathF.Max(formation.Depth, formation.Width) * 0.8f);
      float lengthSquared = (formation.CurrentPosition - formation.OrderPosition).LengthSquared;
      if (!isDirectly && (double) lengthSquared < (double) num * (double) num)
      {
        ArrangementOrder.TransposeLineFormation(formation);
        formation.OnTick += new Action<Formation>(formation.TickForColumnArrangementInitialPositioning);
      }
      else
      {
        formation.OnTick -= new Action<Formation>(formation.TickForColumnArrangementInitialPositioning);
        formation.ReferencePosition = new Vec2?();
        formation.Rearrange(this.GetArrangement(formation));
      }
    }

    private static void TransposeLineFormation(Formation formation)
    {
      formation.Rearrange((IFormationArrangement) new TransposedLineFormation((IFormation) formation));
      formation.SetPositioning(new WorldPosition?(formation.GetReadonlyMovementOrderReference().CreateNewOrderWorldPosition(formation, WorldPosition.WorldPositionEnforcedCache.None)));
      formation.ReferencePosition = new Vec2?(formation.OrderPosition);
    }

    public void OnCancel(Formation formation)
    {
      if (this.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Scatter && formation.Team?.TeamAI != null)
      {
        MBReadOnlyList<StrategicArea> strategicAreas = formation.Team.TeamAI.StrategicAreas;
        for (int index = formation.Detachments.Count - 1; index >= 0; --index)
        {
          IDetachment detachment = formation.Detachments[index];
          foreach (StrategicArea strategicArea in (List<StrategicArea>) strategicAreas)
          {
            if (detachment == strategicArea)
            {
              formation.LeaveDetachment(detachment);
              break;
            }
          }
        }
      }
      if (this.OrderEnum == ArrangementOrder.ArrangementOrderEnum.ShieldWall || this.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Circle || this.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Square)
        formation.ApplyActionOnEachUnit((Action<Agent>) (agent =>
        {
          if (!agent.IsAIControlled)
            return;
          agent.EnforceShieldUsage(Agent.UsageDirection.None);
        }));
      if (this.OrderEnum != ArrangementOrder.ArrangementOrderEnum.Column)
        return;
      formation.OnTick -= new Action<Formation>(formation.TickForColumnArrangementInitialPositioning);
    }

    private static StrategicArea CreateStrategicArea(
      Scene scene,
      WorldPosition position,
      Vec2 direction,
      float width,
      int capacity,
      BattleSideEnum side)
    {
      WorldFrame worldFrame = new WorldFrame(new Mat3()
      {
        f = direction.ToVec3(),
        u = Vec3.Up
      }, position);
      GameEntity gameEntity = GameEntity.Instantiate(scene, "strategic_area_autogen", worldFrame.ToNavMeshMatrixFrame());
      gameEntity.SetMobility(GameEntity.Mobility.dynamic);
      StrategicArea firstScriptOfType = gameEntity.GetFirstScriptOfType<StrategicArea>();
      firstScriptOfType.InitializeAutogenerated(width, capacity, side);
      return firstScriptOfType;
    }

    private static IEnumerable<StrategicArea> CreateStrategicAreas(
      Mission mission,
      int count,
      WorldPosition center,
      float distance,
      WorldPosition target,
      float width,
      int capacity,
      BattleSideEnum side)
    {
      Scene scene = mission.Scene;
      float distanceMultiplied = distance * 0.7f;
      Func<WorldPosition> func1 = (Func<WorldPosition>) (() =>
      {
        WorldPosition strategicAreas = center;
        float rotation = (float) ((double) MBRandom.RandomFloat * 3.1415927410125732 * 2.0);
        strategicAreas.SetVec2(center.AsVec2 + Vec2.FromRotation(rotation) * distanceMultiplied);
        return strategicAreas;
      });
      WorldPosition[] worldPositionArray = ((Func<WorldPosition[]>) (() =>
      {
        float rotation = (float) ((double) MBRandom.RandomFloat * 3.1415927410125732 * 2.0);
        switch (count)
        {
          case 2:
            WorldPosition worldPosition1 = center;
            worldPosition1.SetVec2(center.AsVec2 + Vec2.FromRotation(rotation) * distanceMultiplied);
            WorldPosition worldPosition2 = center;
            worldPosition2.SetVec2(center.AsVec2 + Vec2.FromRotation(rotation + 3.14159274f) * distanceMultiplied);
            return new WorldPosition[2]
            {
              worldPosition1,
              worldPosition2
            };
          case 3:
            WorldPosition worldPosition3 = center;
            worldPosition3.SetVec2(center.AsVec2 + Vec2.FromRotation(rotation + 0.0f) * distanceMultiplied);
            WorldPosition worldPosition4 = center;
            worldPosition4.SetVec2(center.AsVec2 + Vec2.FromRotation(rotation + 2.09439516f) * distanceMultiplied);
            WorldPosition worldPosition5 = center;
            worldPosition5.SetVec2(center.AsVec2 + Vec2.FromRotation(rotation + 4.18879032f) * distanceMultiplied);
            return new WorldPosition[3]
            {
              worldPosition3,
              worldPosition4,
              worldPosition5
            };
          case 4:
            WorldPosition worldPosition6 = center;
            worldPosition6.SetVec2(center.AsVec2 + Vec2.FromRotation(rotation + 0.0f) * distanceMultiplied);
            WorldPosition worldPosition7 = center;
            worldPosition7.SetVec2(center.AsVec2 + Vec2.FromRotation(rotation + 1.57079637f) * distanceMultiplied);
            WorldPosition worldPosition8 = center;
            worldPosition8.SetVec2(center.AsVec2 + Vec2.FromRotation(rotation + 3.14159274f) * distanceMultiplied);
            WorldPosition worldPosition9 = center;
            worldPosition9.SetVec2(center.AsVec2 + Vec2.FromRotation(rotation + 4.712389f) * distanceMultiplied);
            return new WorldPosition[4]
            {
              worldPosition6,
              worldPosition7,
              worldPosition8,
              worldPosition9
            };
          default:
            Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Orders\\ArrangementOrder.cs", nameof (CreateStrategicAreas), 362);
            return new WorldPosition[0];
        }
      }))();
      List<WorldPosition> positions = new List<WorldPosition>();
      foreach (WorldPosition worldPosition in worldPositionArray)
      {
        WorldPosition center1 = worldPosition;
        WorldPosition position = mission.FindPositionWithBiggestSlopeTowardsDirectionInSquare(ref center1, distance * 0.25f, ref target);
        Func<WorldPosition, bool> func2 = (Func<WorldPosition, bool>) (p =>
        {
          float pathDistance;
          if (positions.Any<WorldPosition>((Func<WorldPosition, bool>) (wp => (double) wp.AsVec2.DistanceSquared(p.AsVec2) < 1.0)) || (!scene.GetPathDistanceBetweenPositions(ref center, ref p, 0.0f, out pathDistance) ? 0 : ((double) pathDistance < (double) center.AsVec2.Distance(p.AsVec2) * 2.0 ? 1 : 0)) == 0)
            return false;
          positions.Add(position);
          return true;
        });
        if (!func2(position) && !func2(worldPosition))
        {
          int num = 0;
          do
            ;
          while (num++ < 10 && !func2(func1()));
          if (num >= 10)
            positions.Add(center);
        }
      }
      Vec2 direction = (target.AsVec2 - center.AsVec2).Normalized();
      foreach (WorldPosition position in positions)
        yield return ArrangementOrder.CreateStrategicArea(scene, position, direction, width, capacity, side);
    }

    private bool IsStrategicAreaClose(StrategicArea strategicArea, Formation formation)
    {
      if (!strategicArea.IsUsableBy(formation.Team.Side))
        return false;
      if (!strategicArea.IgnoreHeight)
        return (double) formation.CreateNewOrderWorldPosition(WorldPosition.WorldPositionEnforcedCache.None).DistanceSquaredWithLimit(strategicArea.GameEntity.GlobalPosition, (float) ((double) strategicArea.DistanceToCheck * (double) strategicArea.DistanceToCheck + 9.9999997473787516E-06)) < (double) strategicArea.DistanceToCheck * (double) strategicArea.DistanceToCheck;
      return (double) MathF.Abs(strategicArea.GameEntity.GlobalPosition.x - formation.OrderPosition.X) <= (double) strategicArea.DistanceToCheck && (double) MathF.Abs(strategicArea.GameEntity.GlobalPosition.y - formation.OrderPosition.Y) <= (double) strategicArea.DistanceToCheck;
    }

    public void TickOccasionally(Formation formation)
    {
      if (this.OrderEnum != ArrangementOrder.ArrangementOrderEnum.Scatter || formation.Team?.TeamAI == null)
        return;
      MBReadOnlyList<StrategicArea> strategicAreas = formation.Team.TeamAI.StrategicAreas;
      foreach (StrategicArea strategicArea in (List<StrategicArea>) strategicAreas)
      {
        if (this.IsStrategicAreaClose(strategicArea, formation))
        {
          bool flag = false;
          foreach (IDetachment detachment in (List<IDetachment>) formation.Detachments)
          {
            if (strategicArea == detachment)
            {
              flag = true;
              break;
            }
          }
          if (!flag)
            formation.JoinDetachment((IDetachment) strategicArea);
        }
      }
      for (int index = formation.Detachments.Count - 1; index >= 0; --index)
      {
        IDetachment detachment = formation.Detachments[index];
        foreach (StrategicArea strategicArea in (List<StrategicArea>) strategicAreas)
        {
          if (detachment == strategicArea && !this.IsStrategicAreaClose(strategicArea, formation))
          {
            formation.LeaveDetachment(detachment);
            break;
          }
        }
      }
    }

    public OrderType OrderType
    {
      get
      {
        switch (this.OrderEnum)
        {
          case ArrangementOrder.ArrangementOrderEnum.Circle:
            return OrderType.ArrangementCircular;
          case ArrangementOrder.ArrangementOrderEnum.Column:
            return OrderType.ArrangementColumn;
          case ArrangementOrder.ArrangementOrderEnum.Line:
            return OrderType.ArrangementLine;
          case ArrangementOrder.ArrangementOrderEnum.Loose:
            return OrderType.ArrangementLoose;
          case ArrangementOrder.ArrangementOrderEnum.Scatter:
            return OrderType.ArrangementScatter;
          case ArrangementOrder.ArrangementOrderEnum.ShieldWall:
            return OrderType.ArrangementCloseOrder;
          case ArrangementOrder.ArrangementOrderEnum.Skein:
            return OrderType.ArrangementVee;
          case ArrangementOrder.ArrangementOrderEnum.Square:
            return OrderType.ArrangementSchiltron;
          default:
            return OrderType.ArrangementLine;
        }
      }
    }

    public ArrangementOrder.ArrangementOrderEnum GetNativeEnum() => this.OrderEnum;

    public override bool Equals(object obj)
    {
      return obj is ArrangementOrder arrangementOrder && arrangementOrder == this;
    }

    public override int GetHashCode() => (int) this.OrderEnum;

    public static bool operator !=(ArrangementOrder a1, ArrangementOrder a2)
    {
      return a1.OrderEnum != a2.OrderEnum;
    }

    public static bool operator ==(ArrangementOrder a1, ArrangementOrder a2)
    {
      return a1.OrderEnum == a2.OrderEnum;
    }

    public void OnOrderPositionChanged(Formation formation, Vec2 previousOrderPosition)
    {
      if (this.OrderEnum != ArrangementOrder.ArrangementOrderEnum.Column || !(formation.Arrangement is TransposedLineFormation))
        return;
      float num = formation.Direction.AngleBetween((formation.OrderPosition - previousOrderPosition).Normalized());
      if ((double) num <= 1.5707963705062866 && (double) num >= -1.5707963705062866 || (double) formation.QuerySystem.AveragePosition.DistanceSquared(formation.OrderPosition) >= (double) formation.Depth * (double) formation.Depth / 10.0)
        return;
      formation.ReferencePosition = new Vec2?(formation.OrderPosition);
    }

    public static int GetArrangementOrderDefensiveness(
      ArrangementOrder.ArrangementOrderEnum orderEnum)
    {
      return orderEnum == ArrangementOrder.ArrangementOrderEnum.Circle || orderEnum == ArrangementOrder.ArrangementOrderEnum.ShieldWall || orderEnum == ArrangementOrder.ArrangementOrderEnum.Square ? 1 : 0;
    }

    public static int GetArrangementOrderDefensivenessChange(
      ArrangementOrder.ArrangementOrderEnum previousOrderEnum,
      ArrangementOrder.ArrangementOrderEnum nextOrderEnum)
    {
      return previousOrderEnum == ArrangementOrder.ArrangementOrderEnum.Circle || previousOrderEnum == ArrangementOrder.ArrangementOrderEnum.ShieldWall || previousOrderEnum == ArrangementOrder.ArrangementOrderEnum.Square ? (nextOrderEnum != ArrangementOrder.ArrangementOrderEnum.Circle && nextOrderEnum != ArrangementOrder.ArrangementOrderEnum.ShieldWall && nextOrderEnum != ArrangementOrder.ArrangementOrderEnum.Square ? -1 : 0) : (nextOrderEnum == ArrangementOrder.ArrangementOrderEnum.Circle || nextOrderEnum == ArrangementOrder.ArrangementOrderEnum.ShieldWall || nextOrderEnum == ArrangementOrder.ArrangementOrderEnum.Square ? 1 : 0);
    }

    public float CalculateFormationDirectionEnforcingFactorForRank(
      int formationRankIndex,
      int rankCount)
    {
      if (this.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Circle || this.OrderEnum == ArrangementOrder.ArrangementOrderEnum.ShieldWall || this.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Square)
        return 1f - MBMath.ClampFloat((float) (((double) formationRankIndex + 1.0) / ((double) rankCount * 2.0)), 0.0f, 1f);
      return this.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Column ? 0.0f : 1f - MBMath.ClampFloat((float) (((double) formationRankIndex + 1.0) / ((double) rankCount * 0.5)), 0.0f, 1f);
    }

    public enum ArrangementOrderEnum
    {
      Circle,
      Column,
      Line,
      Loose,
      Scatter,
      ShieldWall,
      Skein,
      Square,
    }
  }
}
