// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorSergeantMPRanged
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorSergeantMPRanged : BehaviorComponent
  {
    private List<FlagCapturePoint> _flagpositions;
    private Formation _attachedInfantry;
    private MissionMultiplayerFlagDomination _flagDominationGameMode;

    public BehaviorSergeantMPRanged(Formation formation)
      : base(formation)
    {
      this._flagpositions = this.Formation.Team.Mission.ActiveMissionObjects.FindAllWithType<FlagCapturePoint>().ToList<FlagCapturePoint>();
      this._flagDominationGameMode = this.Formation.Team.Mission.GetMissionBehavior<MissionMultiplayerFlagDomination>();
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      bool flag = false;
      Formation formation1 = (Formation) null;
      float num1 = float.MaxValue;
      foreach (Team team in (List<Team>) this.Formation.Team.Mission.Teams)
      {
        if (team.IsEnemyOf(this.Formation.Team))
        {
          for (int index = 0; index < Math.Min(team.FormationsIncludingSpecialAndEmpty.Count, 8); ++index)
          {
            Formation formation2 = team.FormationsIncludingSpecialAndEmpty[index];
            if (formation2.CountOfUnits > 0)
            {
              flag = true;
              if (formation2.QuerySystem.IsCavalryFormation || formation2.QuerySystem.IsRangedCavalryFormation)
              {
                float num2 = formation2.QuerySystem.MedianPosition.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition);
                if ((double) num2 < (double) num1)
                {
                  num1 = num2;
                  formation1 = formation2;
                }
              }
            }
          }
        }
      }
      if (this.Formation.Team.FormationsIncludingEmpty.AnyQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f != this.Formation && f.QuerySystem.IsInfantryFormation)))
      {
        this._attachedInfantry = this.Formation.Team.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f != this.Formation && f.QuerySystem.IsInfantryFormation)).MinBy<Formation, float>((Func<Formation, float>) (f => f.QuerySystem.MedianPosition.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition)));
        Formation formation3 = (Formation) null;
        if (flag)
        {
          if ((double) this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition) <= 4900.0)
            formation3 = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.Formation;
          else if (formation1 != null)
            formation3 = formation1;
        }
        Vec2 direction = formation3 == null ? this._attachedInfantry.Direction : (formation3.QuerySystem.MedianPosition.AsVec2 - this._attachedInfantry.QuerySystem.MedianPosition.AsVec2).Normalized();
        WorldPosition medianPosition = this._attachedInfantry.QuerySystem.MedianPosition;
        medianPosition.SetVec2(medianPosition.AsVec2 - direction * (float) (((double) this._attachedInfantry.Depth + (double) this.Formation.Depth) / 2.0));
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
      }
      else if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null && (double) this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition) <= 4900.0)
      {
        Vec2 direction = (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized();
        float num3 = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2.Distance(this.Formation.QuerySystem.AveragePosition);
        WorldPosition medianPosition = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition;
        if ((double) num3 > (double) this.Formation.QuerySystem.MissileRangeAdjusted)
          medianPosition.SetVec2(medianPosition.AsVec2 - direction * (this.Formation.QuerySystem.MissileRangeAdjusted - this.Formation.Depth * 0.5f));
        else if ((double) num3 < (double) this.Formation.QuerySystem.MissileRangeAdjusted * 0.40000000596046448)
          medianPosition.SetVec2(medianPosition.AsVec2 - direction * (this.Formation.QuerySystem.MissileRangeAdjusted * 0.4f));
        else
          medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
      }
      else if (this._flagpositions.Any<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team)))
      {
        Vec3 position = this._flagpositions.Where<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team)).MinBy<FlagCapturePoint, float>((Func<FlagCapturePoint, float>) (fp => fp.Position.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition))).Position;
        if (this.CurrentOrder.OrderEnum != MovementOrder.MovementOrderEnum.Invalid && !(this.CurrentOrder.GetPosition(this.Formation) != position.AsVec2))
          return;
        Vec2 direction = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null ? (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized() : this.Formation.Direction;
        this.CurrentOrder = MovementOrder.MovementOrderMove(new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, position, false));
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
      }
      else if (this._flagpositions.Any<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) == this.Formation.Team)))
      {
        Vec3 position = this._flagpositions.Where<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) == this.Formation.Team)).MinBy<FlagCapturePoint, float>((Func<FlagCapturePoint, float>) (fp => fp.Position.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition))).Position;
        this.CurrentOrder = MovementOrder.MovementOrderMove(new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, position, false));
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      else
      {
        WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
    }

    public override void TickOccasionally()
    {
      this._flagpositions.RemoveAll((Predicate<FlagCapturePoint>) (fp => fp.IsDeactivated));
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    protected override float GetAiWeight()
    {
      return this.Formation.QuerySystem.IsRangedFormation ? 1.2f : 0.0f;
    }
  }
}
