// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticDefensiveRing
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TacticDefensiveRing : TacticComponent
  {
    private const float DefendersAdvantage = 1.5f;
    private TacticalPosition _mainRingPosition;

    public TacticDefensiveRing(Team team)
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
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorDefensiveRing>(1f).TacticalDefendPosition = this._mainRingPosition;
      }
      if (this._archers != null && this._mainInfantry != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorFireFromInfantryCover>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmish>(1f);
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
      if (this.CheckAndSetAvailableFormationsChanged() || this.IsTacticReapplyNeeded)
      {
        this.ManageFormationCounts();
        this.Defend();
        this.IsTacticReapplyNeeded = false;
      }
      base.TickOccasionally();
    }

    protected internal override bool ResetTacticalPositions()
    {
      this.DetermineRingPosition();
      return true;
    }

    protected internal override float GetTacticWeight()
    {
      if (!this.Team.TeamAI.IsDefenseApplicable || !this.CheckAndDetermineFormation(ref this._mainInfantry, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)) || !this.CheckAndDetermineFormation(ref this._archers, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation)))
        return 0.0f;
      double num1 = (double) MathF.Max(0, this._mainInfantry.CountOfUnits) * ((double) this._mainInfantry.MaximumInterval + (double) this._mainInfantry.UnitDiameter) / 6.2831854820251465;
      float num2 = MathF.Sqrt((float) this._archers.CountOfUnits);
      double num3 = (double) this._archers.UnitDiameter * (double) num2 + (double) this._archers.Interval * ((double) num2 - 1.0);
      if (num1 < num3)
        return 0.0f;
      if (!this.Team.TeamAI.IsCurrentTactic((TacticComponent) this) || this._mainRingPosition == null || !this.IsTacticalPositionEligible(this._mainRingPosition))
        this.DetermineRingPosition();
      return this._mainRingPosition == null ? 0.0f : (float) ((double) MathF.Min(this.Team.QuerySystem.InfantryRatio, this.Team.QuerySystem.RangedRatio) * 2.0 * 1.5) * this.GetTacticalPositionScore(this._mainRingPosition) * TacticComponent.CalculateNotEngagingTacticalAdvantage(this.Team.QuerySystem) / MathF.Sqrt(this.Team.QuerySystem.RemainingPowerRatio);
    }

    private bool IsTacticalPositionEligible(TacticalPosition tacticalPosition)
    {
      Formation mainInfantry1 = this._mainInfantry;
      float num1 = mainInfantry1 != null ? mainInfantry1.QuerySystem.AveragePosition.Distance(tacticalPosition.Position.AsVec2) : this.Team.QuerySystem.AveragePosition.Distance(tacticalPosition.Position.AsVec2);
      Vec2 averageEnemyPosition = this.Team.QuerySystem.AverageEnemyPosition;
      ref Vec2 local = ref averageEnemyPosition;
      Formation mainInfantry2 = this._mainInfantry;
      Vec2 v = mainInfantry2 != null ? mainInfantry2.QuerySystem.AveragePosition : this.Team.QuerySystem.AveragePosition;
      float num2 = local.Distance(v);
      return ((double) num1 <= 20.0 || (double) num1 <= (double) num2 * 0.5) && tacticalPosition.IsInsurmountable;
    }

    private float GetTacticalPositionScore(TacticalPosition tacticalPosition)
    {
      if (!this.CheckAndDetermineFormation(ref this._mainInfantry, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)) || !this.CheckAndDetermineFormation(ref this._archers, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation)))
        return 0.0f;
      double num1 = (double) MBMath.Lerp(1f, 1.5f, MBMath.ClampFloat(tacticalPosition.Slope, 0.0f, 60f) / 60f);
      Formation formation = this.Team.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation)).MaxBy<Formation, int>((Func<Formation, int>) (f => f.CountOfUnits));
      float num2 = MathF.Max(formation.Arrangement.RankDepth, formation.Arrangement.FlankWidth);
      float num3 = MBMath.ClampFloat(tacticalPosition.Width / num2, 0.7f, 1f);
      float num4 = tacticalPosition.IsInsurmountable ? 1.5f : 1f;
      float cavalryFactor = this.GetCavalryFactor(tacticalPosition);
      float num5 = MBMath.Lerp(0.7f, 1f, (float) ((150.0 - (double) MBMath.ClampFloat(this._mainInfantry.QuerySystem.AveragePosition.Distance(tacticalPosition.Position.AsVec2), 50f, 150f)) / 100.0));
      double num6 = (double) num3;
      return (float) (num1 * num6) * num4 * cavalryFactor * num5;
    }

    private List<TacticalPosition> ExtractPossibleTacticalPositionsFromTacticalRegion(
      TacticalRegion tacticalRegion)
    {
      List<TacticalPosition> fromTacticalRegion = new List<TacticalPosition>();
      foreach (TacticalPosition tacticalPosition in tacticalRegion.LinkedTacticalPositions)
      {
        if (tacticalPosition.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.HighGround)
          fromTacticalRegion.Add(tacticalPosition);
      }
      if (tacticalRegion.tacticalRegionType == TacticalRegion.TacticalRegionTypeEnum.DifficultTerrain || tacticalRegion.tacticalRegionType == TacticalRegion.TacticalRegionTypeEnum.Opening)
      {
        Vec2 direction = (this.Team.QuerySystem.AverageEnemyPosition - tacticalRegion.Position.AsVec2).Normalized();
        TacticalPosition tacticalPosition = new TacticalPosition(tacticalRegion.Position, direction, tacticalRegion.radius, isInsurmountable: true, tacticalRegionMembership: tacticalRegion.tacticalRegionType);
        fromTacticalRegion.Add(tacticalPosition);
      }
      return fromTacticalRegion;
    }

    private float GetCavalryFactor(TacticalPosition tacticalPosition)
    {
      if (tacticalPosition.TacticalRegionMembership == TacticalRegion.TacticalRegionTypeEnum.Opening)
        return 1f;
      float teamPower = this.Team.QuerySystem.TeamPower;
      float num = 0.0f;
      foreach (Team team in (List<Team>) this.Team.Mission.Teams)
      {
        if (team.IsEnemyOf(this.Team))
          num += team.QuerySystem.TeamPower;
      }
      return (teamPower - (float) ((double) teamPower * ((double) this.Team.QuerySystem.CavalryRatio + (double) this.Team.QuerySystem.RangedCavalryRatio) * 0.5)) / (num - (float) ((double) num * ((double) this.Team.QuerySystem.EnemyCavalryRatio + (double) this.Team.QuerySystem.EnemyRangedCavalryRatio) * 0.5)) / this.Team.QuerySystem.RemainingPowerRatio;
    }

    private void DetermineRingPosition()
    {
      List<(TacticalPosition, float)> list = this.Team.TeamAI.TacticalPositions.Where<TacticalPosition>((Func<TacticalPosition, bool>) (tp => tp.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.HighGround && this.IsTacticalPositionEligible(tp))).Select<TacticalPosition, (TacticalPosition, float)>((Func<TacticalPosition, (TacticalPosition, float)>) (tp => (tp, this.GetTacticalPositionScore(tp)))).Concat<(TacticalPosition, float)>(this.Team.TeamAI.TacticalRegions.SelectMany<TacticalRegion, TacticalPosition>((Func<TacticalRegion, IEnumerable<TacticalPosition>>) (r => (IEnumerable<TacticalPosition>) this.ExtractPossibleTacticalPositionsFromTacticalRegion(r))).Where<TacticalPosition>((Func<TacticalPosition, bool>) (tpftr => (tpftr.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.Regional || tpftr.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.HighGround) && this.IsTacticalPositionEligible(tpftr))).Select<TacticalPosition, (TacticalPosition, float)>((Func<TacticalPosition, (TacticalPosition, float)>) (tp => (tp, this.GetTacticalPositionScore(tp))))).ToList<(TacticalPosition, float)>();
      if (list.Count > 0)
      {
        TacticalPosition tacticalPosition = list.MaxBy<(TacticalPosition, float), float>((Func<(TacticalPosition, float), float>) (pst => pst.Item2)).Item1;
        if (tacticalPosition == this._mainRingPosition)
          return;
        this._mainRingPosition = tacticalPosition;
        this.IsTacticReapplyNeeded = true;
      }
      else
        this._mainRingPosition = (TacticalPosition) null;
    }
  }
}
