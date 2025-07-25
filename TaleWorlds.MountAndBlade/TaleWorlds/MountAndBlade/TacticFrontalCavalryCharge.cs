// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticFrontalCavalryCharge
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
  public class TacticFrontalCavalryCharge : TacticComponent
  {
    private Formation _cavalry;
    private bool _hasBattleBeenJoined;

    public TacticFrontalCavalryCharge(Team team)
      : base(team)
    {
    }

    protected override void ManageFormationCounts()
    {
      this.ManageFormationCounts(1, 1, 1, 1);
      this._mainInfantry = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
      if (this._mainInfantry != null)
        this._mainInfantry.AI.IsMainFormation = true;
      this._archers = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
      this._cavalry = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsCavalryFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
      this._rangedCavalry = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedCavalryFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
    }

    private void Advance()
    {
      if (this.Team.IsPlayerTeam && !this.Team.IsPlayerGeneral && this.Team.IsPlayerSergeant)
        this.SoundTacticalHorn(TacticComponent.MoveHornSoundIndex);
      if (this._mainInfantry != null)
      {
        this._mainInfantry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantry);
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorAdvance>(1f);
      }
      if (this._archers != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmishLine>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmish>(1f);
      }
      if (this._cavalry != null)
      {
        this._cavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._cavalry);
        this._cavalry.AI.SetBehaviorWeight<BehaviorAdvance>(1f);
        this._cavalry.AI.SetBehaviorWeight<BehaviorVanguard>(1f);
      }
      if (this._rangedCavalry == null)
        return;
      this._rangedCavalry.AI.ResetBehaviorWeights();
      TacticComponent.SetDefaultBehaviorWeights(this._rangedCavalry);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorMountedSkirmish>(1f);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorHorseArcherSkirmish>(1f);
    }

    private void Attack()
    {
      if (this.Team.IsPlayerTeam && !this.Team.IsPlayerGeneral && this.Team.IsPlayerSergeant)
        this.SoundTacticalHorn(TacticComponent.AttackHornSoundIndex);
      if (this._mainInfantry != null)
      {
        this._mainInfantry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantry);
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorAdvance>(1f);
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
      }
      if (this._archers != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmish>(1f);
      }
      if (this._cavalry != null)
      {
        this._cavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._cavalry);
        this._cavalry.AI.SetBehaviorWeight<BehaviorFlank>(1f);
        this._cavalry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
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
      return this._cavalry?.QuerySystem.ClosestEnemyFormation == null || this._cavalry.AI.ActiveBehavior is BehaviorCharge || this._cavalry.AI.ActiveBehavior is BehaviorTacticalCharge || (double) this._cavalry.QuerySystem.MedianPosition.AsVec2.Distance(this._cavalry.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2) / (double) this._cavalry.QuerySystem.ClosestEnemyFormation.MovementSpeedMaximum <= 7.0 + (this._hasBattleBeenJoined ? 7.0 : 0.0);
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
      if (num != 0 || this._mainInfantry != null && (this._mainInfantry.CountOfUnits == 0 || !this._mainInfantry.QuerySystem.IsInfantryFormation) || this._archers != null && (this._archers.CountOfUnits == 0 || !this._archers.QuerySystem.IsRangedFormation) || this._cavalry != null && (this._cavalry.CountOfUnits == 0 || !this._cavalry.QuerySystem.IsCavalryFormation))
        return true;
      if (this._rangedCavalry == null)
        return false;
      return this._rangedCavalry.CountOfUnits == 0 || !this._rangedCavalry.QuerySystem.IsRangedCavalryFormation;
    }

    protected internal override void TickOccasionally()
    {
      if (!this.AreFormationsCreated)
        return;
      if (this.CheckAndSetAvailableFormationsChanged())
      {
        this.ManageFormationCounts();
        if (this._hasBattleBeenJoined)
          this.Attack();
        else
          this.Advance();
        this.IsTacticReapplyNeeded = false;
      }
      bool flag = this.HasBattleBeenJoined();
      if (flag != this._hasBattleBeenJoined || this.IsTacticReapplyNeeded)
      {
        this._hasBattleBeenJoined = flag;
        if (this._hasBattleBeenJoined)
          this.Attack();
        else
          this.Advance();
        this.IsTacticReapplyNeeded = false;
      }
      base.TickOccasionally();
    }

    protected internal override float GetTacticWeight()
    {
      return (float) ((double) this.Team.QuerySystem.CavalryRatio * (double) this.Team.QuerySystem.MemberCount / ((double) this.Team.QuerySystem.MemberCount - (double) (this.Team.QuerySystem.RangedCavalryRatio * (float) this.Team.QuerySystem.MemberCount))) * MathF.Sqrt(this.Team.QuerySystem.RemainingPowerRatio);
    }
  }
}
