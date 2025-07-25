// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticCoordinatedRetreat
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
  public class TacticCoordinatedRetreat : TacticComponent
  {
    private bool _canWeSafelyRunAway;
    private Vec2 _retreatPosition = Vec2.Invalid;
    private const float RetreatThresholdValue = 2f;

    public TacticCoordinatedRetreat(Team team)
      : base(team)
    {
    }

    protected override void ManageFormationCounts()
    {
      if (this._canWeSafelyRunAway)
        return;
      this.AssignTacticFormations1121();
    }

    private void OrganizedRetreat()
    {
      if (this.Team.IsPlayerTeam && !this.Team.IsPlayerGeneral && this.Team.IsPlayerSergeant)
        this.SoundTacticalHorn(TacticComponent.RetreatHornSoundIndex);
      if (this._mainInfantry != null)
      {
        this._mainInfantry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantry);
        BehaviorDefend behaviorDefend = this._mainInfantry.AI.SetBehaviorWeight<BehaviorDefend>(1f);
        WorldPosition positionForFormation = Mission.Current.GetClosestFleePositionForFormation(this._mainInfantry);
        positionForFormation.SetVec2(Mission.Current.GetClosestBoundaryPosition(positionForFormation.AsVec2));
        this._retreatPosition = positionForFormation.AsVec2;
        WorldPosition worldPosition = positionForFormation;
        behaviorDefend.DefensePosition = worldPosition;
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorPullBack>(1f);
      }
      if (this._archers != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorPullBack>(1.5f);
      }
      if (this._leftCavalry != null)
      {
        this._leftCavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._leftCavalry);
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorProtectFlank>(1f).FlankSide = FormationAI.BehaviorSide.Left;
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorCavalryScreen>(1f);
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorPullBack>(1.5f);
      }
      if (this._rightCavalry != null)
      {
        this._rightCavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._rightCavalry);
        this._rightCavalry.AI.SetBehaviorWeight<BehaviorProtectFlank>(1f).FlankSide = FormationAI.BehaviorSide.Right;
        this._rightCavalry.AI.SetBehaviorWeight<BehaviorCavalryScreen>(1f);
        this._rightCavalry.AI.SetBehaviorWeight<BehaviorPullBack>(1.5f);
      }
      if (this._rangedCavalry == null)
        return;
      this._rangedCavalry.AI.ResetBehaviorWeights();
      TacticComponent.SetDefaultBehaviorWeights(this._rangedCavalry);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorMountedSkirmish>(1f);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorPullBack>(1.5f);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorHorseArcherSkirmish>(1f);
    }

    private void RunForTheBorder()
    {
      if (this.Team.IsPlayerTeam && !this.Team.IsPlayerGeneral && this.Team.IsPlayerSergeant)
        this.SoundTacticalHorn(TacticComponent.RetreatHornSoundIndex);
      foreach (Formation formation in (List<Formation>) this.FormationsIncludingSpecialAndEmpty)
      {
        if (formation.CountOfUnits > 0)
        {
          formation.AI.ResetBehaviorWeights();
          formation.AI.SetBehaviorWeight<BehaviorRetreat>(1f);
        }
      }
    }

    private bool HasRetreatDestinationBeenReached()
    {
      return this.FormationsIncludingEmpty.All<Formation>((Func<Formation, bool>) (f => f.CountOfUnits == 0 || !f.QuerySystem.IsInfantryFormation || (double) f.QuerySystem.AveragePosition.DistanceSquared(this._retreatPosition) < 5625.0));
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
      bool flag = this.HasRetreatDestinationBeenReached();
      if (this.CheckAndSetAvailableFormationsChanged())
      {
        this._canWeSafelyRunAway = flag;
        this.ManageFormationCounts();
        if (this._canWeSafelyRunAway)
          this.RunForTheBorder();
        else
          this.OrganizedRetreat();
        this.IsTacticReapplyNeeded = false;
      }
      if (flag != this._canWeSafelyRunAway || this.IsTacticReapplyNeeded)
      {
        this._canWeSafelyRunAway = flag;
        if (this._canWeSafelyRunAway)
          this.RunForTheBorder();
        else
          this.OrganizedRetreat();
        this.IsTacticReapplyNeeded = false;
      }
      base.TickOccasionally();
    }

    protected internal override float GetTacticWeight()
    {
      float num1 = this.Team.QuerySystem.TotalPowerRatio / this.Team.QuerySystem.RemainingPowerRatio;
      float num2 = MBMath.LinearExtrapolation(0.0f, MathF.Max(this.Team.QuerySystem.InfantryRatio, MathF.Max(this.Team.QuerySystem.RangedRatio, this.Team.QuerySystem.CavalryRatio)), MBMath.ClampFloat(num1, 0.0f, 4f) / 2f);
      float num3 = 0.0f;
      int num4 = 0;
      foreach (Team team in (List<Team>) this.Team.Mission.Teams)
      {
        if (team.IsEnemyOf(this.Team))
        {
          ++num4;
          num3 += team.QuerySystem.CavalryRatio + team.QuerySystem.RangedCavalryRatio;
        }
      }
      if (num4 > 0)
        num3 /= (float) num4;
      float num5 = (double) num3 == 0.0 ? 1.2f : MBMath.Lerp(0.8f, 1.2f, MBMath.ClampFloat((this.Team.QuerySystem.CavalryRatio + this.Team.QuerySystem.RangedCavalryRatio) / num3, 0.0f, 2f) / 2f);
      return num2 * num5 * MathF.Min(1f, MathF.Sqrt(this.Team.QuerySystem.RemainingPowerRatio));
    }
  }
}
