// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticHoldChokePoint
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
  public class TacticHoldChokePoint : TacticComponent
  {
    private const float DefendersAdvantage = 1.3f;
    private TacticalPosition _chokePointTacticalPosition;
    private TacticalPosition _linkedRangedDefensivePosition;

    public TacticHoldChokePoint(Team team)
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
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorDefend>(1f).TacticalDefendPosition = this._chokePointTacticalPosition;
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

    protected internal override float GetTacticWeight()
    {
      if (!this.Team.TeamAI.IsDefenseApplicable || !this.CheckAndDetermineFormation(ref this._mainInfantry, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)))
        return 0.0f;
      if (!this.Team.TeamAI.IsCurrentTactic((TacticComponent) this) || this._chokePointTacticalPosition == null || !this.IsTacticalPositionEligible(this._chokePointTacticalPosition))
        this.DetermineChokePoints();
      if (this._chokePointTacticalPosition == null)
        return 0.0f;
      double infantryRatio = (double) this.Team.QuerySystem.InfantryRatio;
      return (float) ((infantryRatio + (double) MathF.Min((float) infantryRatio, this.Team.QuerySystem.RangedRatio)) * (double) MBMath.ClampFloat((float) this.Team.QuerySystem.EnemyUnitCount / (float) this.Team.QuerySystem.MemberCount, 0.33f, 3f) * (double) this.GetTacticalPositionScore(this._chokePointTacticalPosition) * (double) TacticComponent.CalculateNotEngagingTacticalAdvantage(this.Team.QuerySystem) * 1.2999999523162842) / MathF.Sqrt(this.Team.QuerySystem.RemainingPowerRatio);
    }

    private bool IsTacticalPositionEligible(TacticalPosition tacticalPosition)
    {
      if (!this.CheckAndDetermineFormation(ref this._mainInfantry, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)))
        return false;
      float num1 = this.Team.QuerySystem.AveragePosition.Distance(tacticalPosition.Position.AsVec2);
      Vec2 vec2 = this.Team.QuerySystem.AverageEnemyPosition;
      float num2 = vec2.Distance(this._mainInfantry.QuerySystem.AveragePosition);
      if ((double) num1 > 20.0 && (double) num1 > (double) num2 * 0.5 || (double) this._mainInfantry.MaximumWidth < (double) tacticalPosition.Width)
        return false;
      vec2 = this.Team.QuerySystem.AverageEnemyPosition - tacticalPosition.Position.AsVec2;
      vec2 = vec2.Normalized();
      float f1 = vec2.DotProduct(tacticalPosition.Direction);
      return tacticalPosition.IsInsurmountable ? (double) MathF.Abs(f1) >= 0.5 : (double) f1 >= 0.5;
    }

    private float GetTacticalPositionScore(TacticalPosition tacticalPosition)
    {
      if (!this.CheckAndDetermineFormation(ref this._mainInfantry, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)))
        return 0.0f;
      double num1 = (double) MBMath.Lerp(1f, 1.5f, MBMath.ClampFloat(tacticalPosition.Slope, 0.0f, 60f) / 60f);
      int countOfUnits = this._mainInfantry.CountOfUnits;
      float num2 = MBMath.Lerp(0.67f, 1.5f, (float) (((double) MBMath.ClampFloat((float) ((double) this._mainInfantry.Interval * (double) (countOfUnits - 1) + (double) this._mainInfantry.UnitDiameter * (double) countOfUnits) / tacticalPosition.Width, 0.5f, 3f) - 0.5) / 2.5));
      float num3 = 1f;
      if (this.CheckAndDetermineFormation(ref this._archers, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation)) && tacticalPosition.LinkedTacticalPositions.Where<TacticalPosition>((Func<TacticalPosition, bool>) (lcp => lcp.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.Cliff)).ToList<TacticalPosition>().Count > 0)
        num3 = MBMath.Lerp(1f, 1.5f, (float) (((double) MBMath.ClampFloat(this.Team.QuerySystem.RangedRatio, 0.05f, 0.25f) - 0.05000000074505806) * 5.0));
      float num4 = MBMath.Lerp(0.7f, 1f, (float) ((150.0 - (double) MBMath.ClampFloat(this._mainInfantry.QuerySystem.AveragePosition.Distance(tacticalPosition.Position.AsVec2), 50f, 150f)) / 100.0));
      double num5 = (double) num2;
      return (float) (num1 * num5) * num3 * num4;
    }

    protected internal override bool ResetTacticalPositions()
    {
      this.DetermineChokePoints();
      return true;
    }

    private void DetermineChokePoints()
    {
      IEnumerable<(TacticalPosition, float)> source = this.Team.TeamAI.TacticalPositions.Where<TacticalPosition>((Func<TacticalPosition, bool>) (tp => tp.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.ChokePoint && this.IsTacticalPositionEligible(tp))).Select<TacticalPosition, (TacticalPosition, float)>((Func<TacticalPosition, (TacticalPosition, float)>) (tp => (tp, this.GetTacticalPositionScore(tp)))).Concat<(TacticalPosition, float)>(this.Team.TeamAI.TacticalRegions.SelectMany<TacticalRegion, TacticalPosition>((Func<TacticalRegion, IEnumerable<TacticalPosition>>) (r => r.LinkedTacticalPositions.Where<TacticalPosition>((Func<TacticalPosition, bool>) (tpftr => tpftr.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.ChokePoint && this.IsTacticalPositionEligible(tpftr))))).Select<TacticalPosition, (TacticalPosition, float)>((Func<TacticalPosition, (TacticalPosition, float)>) (tp => (tp, this.GetTacticalPositionScore(tp)))));
      if (source.Any<(TacticalPosition, float)>())
      {
        TacticalPosition tacticalPosition1 = source.MaxBy<(TacticalPosition, float), float>((Func<(TacticalPosition, float), float>) (pst => pst.Item2)).Item1;
        if (tacticalPosition1 != this._chokePointTacticalPosition)
        {
          this._chokePointTacticalPosition = tacticalPosition1;
          this.IsTacticReapplyNeeded = true;
        }
        if (this._chokePointTacticalPosition.LinkedTacticalPositions.Count > 0)
        {
          TacticalPosition tacticalPosition2 = this._chokePointTacticalPosition.LinkedTacticalPositions.FirstOrDefault<TacticalPosition>();
          if (tacticalPosition2 == this._linkedRangedDefensivePosition)
            return;
          this._linkedRangedDefensivePosition = tacticalPosition2;
          this.IsTacticReapplyNeeded = true;
        }
        else
          this._linkedRangedDefensivePosition = (TacticalPosition) null;
      }
      else
        this._chokePointTacticalPosition = (TacticalPosition) null;
    }
  }
}
