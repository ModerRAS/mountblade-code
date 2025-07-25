// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticDefensiveEngagement
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Linq;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TacticDefensiveEngagement : TacticComponent
  {
    private const float DefendersAdvantage = 1.1f;
    private bool _hasBattleBeenJoined;

    public TacticDefensiveEngagement(Team team)
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
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorHoldHighGround>(1f).RangedAllyFormation = this._archers;
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
      }
      if (this._archers != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmishLine>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(1f);
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
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorHoldHighGround>(1f).RangedAllyFormation = this._archers;
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
      }
      if (this._archers != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmish>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(1f);
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

    protected internal override float GetTacticWeight()
    {
      if (!this.Team.TeamAI.IsDefenseApplicable || this.FormationsIncludingEmpty.All<Formation>((Func<Formation, bool>) (f => f.CountOfUnits == 0 || !f.QuerySystem.IsInfantryFormation)))
        return 0.0f;
      Formation formation = this._mainInfantry ?? this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)).MaxBy<Formation, int>((Func<Formation, int>) (f => f.CountOfUnits));
      if (formation == null)
        return 0.0f;
      if (this._mainInfantry == null)
        this._mainInfantry = formation;
      double num1 = (double) this.Team.QuerySystem.InfantryRatio + (double) this.Team.QuerySystem.RangedRatio;
      float num2 = MBMath.Lerp(0.7f, 1f, (float) ((150.0 - (double) MBMath.ClampFloat(this._mainInfantry.QuerySystem.AveragePosition.Distance(this._mainInfantry.QuerySystem.HighGroundCloseToForeseenBattleGround), 50f, 150f)) / 100.0));
      return (float) (num1 * 1.1000000238418579) * TacticComponent.CalculateNotEngagingTacticalAdvantage(this.Team.QuerySystem) * num2 / MathF.Sqrt(this.Team.QuerySystem.RemainingPowerRatio);
    }
  }
}
