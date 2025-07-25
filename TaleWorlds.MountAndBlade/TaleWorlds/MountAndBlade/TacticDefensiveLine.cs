// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticDefensiveLine
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TacticDefensiveLine : TacticComponent
  {
    private bool _hasBattleBeenJoined;
    private const float DefendersAdvantage = 1.2f;
    private TacticalPosition _mainDefensiveLineObject;
    private TacticalPosition _linkedRangedDefensivePosition;

    public TacticDefensiveLine(Team team)
      : base(team)
    {
    }

    protected override void ManageFormationCounts() => this.AssignTacticFormations1121();

    private void Defend()
    {
      if (this.Team.IsPlayerTeam && !this.Team.IsPlayerGeneral && this.Team.IsPlayerSergeant)
        this.SoundTacticalHorn(TacticComponent.MoveHornSoundIndex);
      if (this._mainInfantry != null)
      {
        this._mainInfantry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantry);
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorDefend>(1f).TacticalDefendPosition = this._mainDefensiveLineObject;
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
      }
      if (this._archers != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmishLine>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(1f);
        if (this._linkedRangedDefensivePosition != null)
          this._archers.AI.SetBehaviorWeight<BehaviorDefend>(10f).TacticalDefendPosition = this._linkedRangedDefensivePosition;
      }
      if (this._leftCavalry != null)
      {
        this._leftCavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._leftCavalry);
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorProtectFlank>(1f).FlankSide = FormationAI.BehaviorSide.Left;
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorCavalryScreen>(1f);
      }
      if (this._rightCavalry != null)
      {
        this._rightCavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._rightCavalry);
        this._rightCavalry.AI.SetBehaviorWeight<BehaviorProtectFlank>(1f).FlankSide = FormationAI.BehaviorSide.Right;
        this._rightCavalry.AI.SetBehaviorWeight<BehaviorCavalryScreen>(1f);
      }
      if (this._rangedCavalry == null)
        return;
      this._rangedCavalry.AI.ResetBehaviorWeights();
      TacticComponent.SetDefaultBehaviorWeights(this._rangedCavalry);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorMountedSkirmish>(1f);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorHorseArcherSkirmish>(1f);
    }

    private void Engage()
    {
      if (this.Team.IsPlayerTeam && !this.Team.IsPlayerGeneral && this.Team.IsPlayerSergeant)
        this.SoundTacticalHorn(TacticComponent.AttackHornSoundIndex);
      if (this._mainInfantry != null)
      {
        this._mainInfantry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantry);
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorDefend>(1f).TacticalDefendPosition = this._mainDefensiveLineObject;
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
      }
      if (this._archers != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmish>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(1f);
        if (this._linkedRangedDefensivePosition != null)
          this._archers.AI.SetBehaviorWeight<BehaviorDefend>(1f).TacticalDefendPosition = this._linkedRangedDefensivePosition;
      }
      if (this._leftCavalry != null)
      {
        this._leftCavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._leftCavalry);
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorFlank>(1f);
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
      }
      if (this._rightCavalry != null)
      {
        this._rightCavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._rightCavalry);
        this._rightCavalry.AI.SetBehaviorWeight<BehaviorFlank>(1f);
        this._rightCavalry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
      }
      if (this._rangedCavalry == null)
        return;
      this._rangedCavalry.AI.ResetBehaviorWeights();
      TacticComponent.SetDefaultBehaviorWeights(this._rangedCavalry);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorMountedSkirmish>(1f);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorHorseArcherSkirmish>(1f);
    }

    private bool HasBattleBeenJoined()
    {
      return this._mainInfantry?.QuerySystem.ClosestEnemyFormation == null || this._mainInfantry.AI.ActiveBehavior is BehaviorCharge || this._mainInfantry.AI.ActiveBehavior is BehaviorTacticalCharge || (double) this._mainInfantry.QuerySystem.MedianPosition.AsVec2.Distance(this._mainInfantry.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2) / (double) this._mainInfantry.QuerySystem.ClosestEnemyFormation.MovementSpeedMaximum <= 5.0 + (this._hasBattleBeenJoined ? 5.0 : 0.0);
    }

    protected override bool CheckAndSetAvailableFormationsChanged()
    {
      int controlledFormationCount = this.Team.GetAIControlledFormationCount();
      int num = controlledFormationCount != this._AIControlledFormationCount ? 1 : 0;
      if (num != 0)
      {
        this._AIControlledFormationCount = controlledFormationCount;
        this.IsTacticReapplyNeeded = true;
      }
      if (num != 0 || this._mainInfantry != null && (this._mainInfantry.CountOfUnits == 0 || !this._mainInfantry.QuerySystem.IsInfantryFormation) || this._archers != null && (this._archers.CountOfUnits == 0 || !this._archers.QuerySystem.IsRangedFormation) || this._leftCavalry != null && (this._leftCavalry.CountOfUnits == 0 || !this._leftCavalry.QuerySystem.IsCavalryFormation) || this._rightCavalry != null && (this._rightCavalry.CountOfUnits == 0 || !this._rightCavalry.QuerySystem.IsCavalryFormation))
        return true;
      if (this._rangedCavalry == null)
        return false;
      return this._rangedCavalry.CountOfUnits == 0 || !this._rangedCavalry.QuerySystem.IsRangedCavalryFormation;
    }

    protected internal override void TickOccasionally()
    {
      if (!this.AreFormationsCreated)
        return;
      bool flag = this.HasBattleBeenJoined();
      if (this.CheckAndSetAvailableFormationsChanged())
      {
        this._hasBattleBeenJoined = flag;
        this.ManageFormationCounts();
        if (this._hasBattleBeenJoined)
          this.Engage();
        else
          this.Defend();
        this.IsTacticReapplyNeeded = false;
      }
      if (flag != this._hasBattleBeenJoined || this.IsTacticReapplyNeeded)
      {
        this._hasBattleBeenJoined = flag;
        if (this._hasBattleBeenJoined)
          this.Engage();
        else
          this.Defend();
        this.IsTacticReapplyNeeded = false;
      }
      base.TickOccasionally();
    }

    protected internal override bool ResetTacticalPositions()
    {
      this.DetermineMainDefensiveLine();
      return true;
    }

    protected internal override float GetTacticWeight()
    {
      if (!this.Team.TeamAI.IsDefenseApplicable || !this.CheckAndDetermineFormation(ref this._mainInfantry, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)))
        return 0.0f;
      if (!this.Team.TeamAI.IsCurrentTactic((TacticComponent) this) || this._mainDefensiveLineObject == null || !this.IsTacticalPositionEligible(this._mainDefensiveLineObject))
        this.DetermineMainDefensiveLine();
      return this._mainDefensiveLineObject == null ? 0.0f : (float) (((double) this.Team.QuerySystem.InfantryRatio + (double) this.Team.QuerySystem.RangedRatio) * 1.2000000476837158) * this.GetTacticalPositionScore(this._mainDefensiveLineObject) * TacticComponent.CalculateNotEngagingTacticalAdvantage(this.Team.QuerySystem) / MathF.Sqrt(this.Team.QuerySystem.RemainingPowerRatio);
    }

    private bool IsTacticalPositionEligible(TacticalPosition tacticalPosition)
    {
      if (tacticalPosition.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.SpecialMissionPosition)
        return true;
      Formation mainInfantry1 = this._mainInfantry;
      WorldPosition position;
      Vec2 vec2;
      double num1;
      if (mainInfantry1 == null)
      {
        Vec2 averagePosition = this.Team.QuerySystem.AveragePosition;
        ref Vec2 local = ref averagePosition;
        position = tacticalPosition.Position;
        Vec2 asVec2 = position.AsVec2;
        num1 = (double) local.Distance(asVec2);
      }
      else
      {
        vec2 = mainInfantry1.QuerySystem.AveragePosition;
        ref Vec2 local = ref vec2;
        position = tacticalPosition.Position;
        Vec2 asVec2 = position.AsVec2;
        num1 = (double) local.Distance(asVec2);
      }
      float num2 = (float) num1;
      vec2 = this.Team.QuerySystem.AverageEnemyPosition;
      ref Vec2 local1 = ref vec2;
      Formation mainInfantry2 = this._mainInfantry;
      Vec2 v = mainInfantry2 != null ? mainInfantry2.QuerySystem.AveragePosition : this.Team.QuerySystem.AveragePosition;
      float num3 = local1.Distance(v);
      if ((double) num2 > 20.0 && (double) num2 > (double) num3 * 0.5)
        return false;
      if (tacticalPosition.IsInsurmountable)
        return true;
      Vec2 averageEnemyPosition = this.Team.QuerySystem.AverageEnemyPosition;
      position = tacticalPosition.Position;
      Vec2 asVec2_1 = position.AsVec2;
      vec2 = averageEnemyPosition - asVec2_1;
      vec2 = vec2.Normalized();
      return (double) vec2.DotProduct(tacticalPosition.Direction) > 0.5;
    }

    private float GetTacticalPositionScore(TacticalPosition tacticalPosition)
    {
      if (tacticalPosition.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.SpecialMissionPosition)
        return 100f;
      if (!this.CheckAndDetermineFormation(ref this._mainInfantry, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)))
        return 0.0f;
      double num1 = (double) MBMath.Lerp(1f, 1.5f, MBMath.ClampFloat(tacticalPosition.Slope, 0.0f, 60f) / 60f);
      float num2 = MBMath.Lerp(0.67f, 1f, (float) ((6.0 - (double) MBMath.ClampFloat(this._mainInfantry.MaximumWidth / tacticalPosition.Width, 3f, 6f)) / 3.0));
      float num3 = tacticalPosition.IsInsurmountable ? 1.3f : 1f;
      float num4 = 1f;
      if (this._archers != null && tacticalPosition.LinkedTacticalPositions.Where<TacticalPosition>((Func<TacticalPosition, bool>) (lcp => lcp.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.Cliff)).ToList<TacticalPosition>().Count > 0)
        num4 = MBMath.Lerp(1f, 1.5f, (float) (((double) MBMath.ClampFloat(this.Team.QuerySystem.RangedRatio, 0.05f, 0.25f) - 0.05000000074505806) * 5.0));
      float rangedFactor = this.GetRangedFactor(tacticalPosition);
      float cavalryFactor = this.GetCavalryFactor(tacticalPosition);
      float num5 = MBMath.Lerp(0.7f, 1f, (float) ((150.0 - (double) MBMath.ClampFloat(this._mainInfantry.QuerySystem.AveragePosition.Distance(tacticalPosition.Position.AsVec2), 50f, 150f)) / 100.0));
      double num6 = (double) num2;
      return (float) (num1 * num6) * num4 * rangedFactor * cavalryFactor * num5 * num3;
    }

    private List<TacticalPosition> ExtractPossibleTacticalPositionsFromTacticalRegion(
      TacticalRegion tacticalRegion)
    {
      List<TacticalPosition> fromTacticalRegion = new List<TacticalPosition>();
      if (tacticalRegion.tacticalRegionType == TacticalRegion.TacticalRegionTypeEnum.Forest)
      {
        Vec2 direction = (this.Team.QuerySystem.AverageEnemyPosition - tacticalRegion.Position.AsVec2).Normalized();
        TacticalPosition tacticalPosition1 = new TacticalPosition(tacticalRegion.Position, direction, tacticalRegion.radius, tacticalRegionMembership: TacticalRegion.TacticalRegionTypeEnum.Forest);
        fromTacticalRegion.Add(tacticalPosition1);
        float num = tacticalRegion.radius * 0.87f;
        TacticalPosition tacticalPosition2 = new TacticalPosition(new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, tacticalRegion.Position.GetNavMeshVec3() + new Vec3(num * direction), false), direction, tacticalRegion.radius, tacticalRegionMembership: TacticalRegion.TacticalRegionTypeEnum.Forest);
        fromTacticalRegion.Add(tacticalPosition2);
        TacticalPosition tacticalPosition3 = new TacticalPosition(new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, tacticalRegion.Position.GetNavMeshVec3() - new Vec3(num * direction), false), direction, tacticalRegion.radius, tacticalRegionMembership: TacticalRegion.TacticalRegionTypeEnum.Forest);
        fromTacticalRegion.Add(tacticalPosition3);
      }
      return fromTacticalRegion;
    }

    private float GetCavalryFactor(TacticalPosition tacticalPosition)
    {
      if (tacticalPosition.TacticalRegionMembership != TacticalRegion.TacticalRegionTypeEnum.Forest)
        return 1f;
      float teamPower = this.Team.QuerySystem.TeamPower;
      float num1 = 0.0f;
      foreach (Team team in (List<Team>) this.Team.Mission.Teams)
      {
        if (team.IsEnemyOf(this.Team))
          num1 += team.QuerySystem.TeamPower;
      }
      float num2 = teamPower - (float) ((double) teamPower * ((double) this.Team.QuerySystem.CavalryRatio + (double) this.Team.QuerySystem.RangedCavalryRatio) * 0.5);
      float num3 = num1 - (float) ((double) num1 * ((double) this.Team.QuerySystem.EnemyCavalryRatio + (double) this.Team.QuerySystem.EnemyRangedCavalryRatio) * 0.5);
      if ((double) num3 <= 0.0)
        num3 = 0.01f;
      return num2 / num3 / this.Team.QuerySystem.RemainingPowerRatio;
    }

    private float GetRangedFactor(TacticalPosition tacticalPosition)
    {
      bool isOuterEdge = tacticalPosition.IsOuterEdge;
      if (tacticalPosition.TacticalRegionMembership != TacticalRegion.TacticalRegionTypeEnum.Forest)
        return 1f;
      float teamPower = this.Team.QuerySystem.TeamPower;
      float num1 = 0.0f;
      foreach (Team team in (List<Team>) this.Team.Mission.Teams)
      {
        if (team.IsEnemyOf(this.Team))
          num1 += team.QuerySystem.TeamPower;
      }
      float num2 = num1 - (float) ((double) num1 * ((double) this.Team.QuerySystem.EnemyRangedRatio + (double) this.Team.QuerySystem.EnemyRangedCavalryRatio) * 0.5);
      if ((double) num2 <= 0.0)
        num2 = 0.01f;
      if (!isOuterEdge)
        teamPower -= (float) ((double) teamPower * ((double) this.Team.QuerySystem.RangedRatio + (double) this.Team.QuerySystem.RangedCavalryRatio) * 0.5);
      return teamPower / num2 / this.Team.QuerySystem.RemainingPowerRatio;
    }

    private void DetermineMainDefensiveLine()
    {
      List<(TacticalPosition, float)> list = this.Team.TeamAI.TacticalPositions.Where<TacticalPosition>((Func<TacticalPosition, bool>) (tp => (tp.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.SpecialMissionPosition || tp.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.HighGround) && this.IsTacticalPositionEligible(tp))).Select<TacticalPosition, (TacticalPosition, float)>((Func<TacticalPosition, (TacticalPosition, float)>) (tp => (tp, this.GetTacticalPositionScore(tp)))).Concat<(TacticalPosition, float)>(this.Team.TeamAI.TacticalRegions.SelectMany<TacticalRegion, TacticalPosition>((Func<TacticalRegion, IEnumerable<TacticalPosition>>) (r => (IEnumerable<TacticalPosition>) this.ExtractPossibleTacticalPositionsFromTacticalRegion(r))).Where<TacticalPosition>((Func<TacticalPosition, bool>) (tpftr => (tpftr.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.Regional || tpftr.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.HighGround) && this.IsTacticalPositionEligible(tpftr))).Select<TacticalPosition, (TacticalPosition, float)>((Func<TacticalPosition, (TacticalPosition, float)>) (tp => (tp, this.GetTacticalPositionScore(tp))))).ToList<(TacticalPosition, float)>();
      if (list.Count > 0)
      {
        TacticalPosition tacticalPosition1 = list.MaxBy<(TacticalPosition, float), float>((Func<(TacticalPosition, float), float>) (pst => pst.Item2)).Item1;
        if (tacticalPosition1 != this._mainDefensiveLineObject)
        {
          this._mainDefensiveLineObject = tacticalPosition1;
          this.IsTacticReapplyNeeded = true;
        }
        if (this._mainDefensiveLineObject.LinkedTacticalPositions.Count > 0)
        {
          TacticalPosition tacticalPosition2 = this._mainDefensiveLineObject.LinkedTacticalPositions.FirstOrDefault<TacticalPosition>();
          if (tacticalPosition2 == this._linkedRangedDefensivePosition)
            return;
          this._linkedRangedDefensivePosition = tacticalPosition2;
          this.IsTacticReapplyNeeded = true;
        }
        else
          this._linkedRangedDefensivePosition = (TacticalPosition) null;
      }
      else
      {
        this._mainDefensiveLineObject = (TacticalPosition) null;
        this._linkedRangedDefensivePosition = (TacticalPosition) null;
      }
    }
  }
}
