// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticSallyOutDefense
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TacticSallyOutDefense : TacticComponent
  {
    private bool _hasBattleBeenJoined;
    private WorldPosition SallyOutDefensePosition;
    private Formation _cavalryFormation;
    private readonly TeamAISallyOutDefender _teamAISallyOutDefender;
    private List<SiegeWeapon> _destructableSiegeWeapons;
    private TacticSallyOutDefense.WeaponsToBeDefended _weaponsToBeDefendedState;

    protected override void ManageFormationCounts()
    {
      if (this._weaponsToBeDefendedState == TacticSallyOutDefense.WeaponsToBeDefended.TwoPrimary)
      {
        this.ManageFormationCounts(1, 1, 1, 1);
        this._mainInfantry = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
        if (this._mainInfantry != null)
          this._mainInfantry.AI.IsMainFormation = true;
        this._archers = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
        this._cavalryFormation = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsCavalryFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
        this._rangedCavalry = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedCavalryFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
      }
      else
        this.AssignTacticFormations1121();
    }

    private void Engage()
    {
      if (this._leftCavalry != null)
      {
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorFlank>(1f);
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
      }
      if (this._rightCavalry == null)
        return;
      this._rightCavalry.AI.SetBehaviorWeight<BehaviorFlank>(1f);
      this._rightCavalry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
    }

    private void DetermineState()
    {
      if (this._destructableSiegeWeapons.Count == 0)
      {
        this._weaponsToBeDefendedState = TacticSallyOutDefense.WeaponsToBeDefended.NoWeapons;
      }
      else
      {
        switch (this._destructableSiegeWeapons.Count<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => dsw is IPrimarySiegeWeapon && !dsw.IsDisabled && !dsw.IsDestroyed)))
        {
          case 0:
            this._weaponsToBeDefendedState = TacticSallyOutDefense.WeaponsToBeDefended.OnlyRangedWeapons;
            break;
          case 1:
            this._weaponsToBeDefendedState = TacticSallyOutDefense.WeaponsToBeDefended.OnePrimary;
            break;
          case 2:
            this._weaponsToBeDefendedState = TacticSallyOutDefense.WeaponsToBeDefended.TwoPrimary;
            break;
          case 3:
            this._weaponsToBeDefendedState = TacticSallyOutDefense.WeaponsToBeDefended.ThreePrimary;
            break;
        }
      }
    }

    public TacticSallyOutDefense(Team team)
      : base(team)
    {
      this._teamAISallyOutDefender = team.TeamAI as TeamAISallyOutDefender;
      this._destructableSiegeWeapons = Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeWeapon>().Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (sw => sw.Side == team.Side && sw.IsDestructible)).ToList<SiegeWeapon>();
      this.SallyOutDefensePosition = team.TeamAI is TeamAISallyOutDefender ? (team.TeamAI as TeamAISallyOutDefender).DefensePosition() : WorldPosition.Invalid;
    }

    private bool CalculateHasBattleBeenJoined()
    {
      return this._mainInfantry?.QuerySystem.ClosestEnemyFormation == null || this._mainInfantry.AI.ActiveBehavior is BehaviorCharge || this._mainInfantry.AI.ActiveBehavior is BehaviorTacticalCharge || (double) this._mainInfantry.QuerySystem.MedianPosition.AsVec2.Distance(this._mainInfantry.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2) / (double) this._mainInfantry.QuerySystem.ClosestEnemyFormation.MovementSpeedMaximum <= 3.0 + (this._hasBattleBeenJoined ? 2.0 : 0.0);
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

    private void DefendCenterLocation()
    {
      if (this._mainInfantry != null)
      {
        this._mainInfantry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantry);
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1f);
        BehaviorDefendSiegeWeapon behavior = this._mainInfantry.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
        behavior.SetDefensePositionFromTactic(this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(FormationAI.BehaviorSide.Middle).ToWorldPosition());
        behavior.SetDefendedSiegeWeaponFromTactic(this._teamAISallyOutDefender.PrimarySiegeWeapons.FirstOrDefault<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw.WeaponSide == FormationAI.BehaviorSide.Middle && psw is SiegeWeapon)) as SiegeWeapon);
      }
      if (this._archers != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmishLine>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmish>(1f);
      }
      if (this._leftCavalry != null)
      {
        this._leftCavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._leftCavalry);
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1.5f);
        BehaviorDefendSiegeWeapon behavior1 = this._leftCavalry.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
        behavior1.SetDefensePositionFromTactic(this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(FormationAI.BehaviorSide.Left).ToWorldPosition());
        behavior1.SetDefendedSiegeWeaponFromTactic(this._teamAISallyOutDefender.PrimarySiegeWeapons.FirstOrDefault<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw.WeaponSide == FormationAI.BehaviorSide.Left && psw is SiegeWeapon)) as SiegeWeapon);
        BehaviorProtectFlank behavior2 = this._leftCavalry.AI.SetBehaviorWeight<BehaviorProtectFlank>(1f);
        behavior2.FlankSide = FormationAI.BehaviorSide.Left;
        this._leftCavalry.AI.AddSpecialBehavior((BehaviorComponent) behavior2, true);
      }
      if (this._rightCavalry != null)
      {
        this._rightCavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._rightCavalry);
        this._rightCavalry.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1.5f);
        BehaviorDefendSiegeWeapon behavior3 = this._rightCavalry.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
        behavior3.SetDefensePositionFromTactic(this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(FormationAI.BehaviorSide.Right).ToWorldPosition());
        behavior3.SetDefendedSiegeWeaponFromTactic(this._teamAISallyOutDefender.PrimarySiegeWeapons.FirstOrDefault<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw.WeaponSide == FormationAI.BehaviorSide.Right && psw is SiegeWeapon)) as SiegeWeapon);
        this._rightCavalry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
        BehaviorProtectFlank behavior4 = this._leftCavalry.AI.SetBehaviorWeight<BehaviorProtectFlank>(1f);
        behavior4.FlankSide = FormationAI.BehaviorSide.Right;
        this._rightCavalry.AI.AddSpecialBehavior((BehaviorComponent) behavior4, true);
      }
      if (this._rangedCavalry == null)
        return;
      this._rangedCavalry.AI.ResetBehaviorWeights();
      TacticComponent.SetDefaultBehaviorWeights(this._rangedCavalry);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorHorseArcherSkirmish>(1f);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(0.3f);
    }

    private void DefendTwoMainPositions()
    {
      FormationAI.BehaviorSide infantrySide = FormationAI.BehaviorSide.BehaviorSideNotSet;
      if (this._mainInfantry != null)
      {
        this._mainInfantry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantry);
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1f);
        BehaviorDefendSiegeWeapon behavior = this._mainInfantry.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
        SiegeWeapon siegeWeapon = this._destructableSiegeWeapons.FirstOrDefault<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => dsw is IPrimarySiegeWeapon && dsw is IMoveableSiegeWeapon && (dsw as IPrimarySiegeWeapon).WeaponSide == FormationAI.BehaviorSide.Middle));
        if (siegeWeapon != null)
        {
          infantrySide = FormationAI.BehaviorSide.Middle;
        }
        else
        {
          siegeWeapon = this._destructableSiegeWeapons.Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => dsw is IPrimarySiegeWeapon && dsw is IMoveableSiegeWeapon)).MinBy<SiegeWeapon, float>((Func<SiegeWeapon, float>) (dsw => dsw.GameEntity.GlobalPosition.AsVec2.DistanceSquared(this._mainInfantry.QuerySystem.AveragePosition)));
          infantrySide = (siegeWeapon as IPrimarySiegeWeapon).WeaponSide;
        }
        behavior.SetDefensePositionFromTactic(this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(infantrySide).ToWorldPosition());
        behavior.SetDefendedSiegeWeaponFromTactic(siegeWeapon);
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
        this._mainInfantry.AI.Side = infantrySide;
      }
      if (this._archers != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmishLine>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmish>(1f);
      }
      if (this._cavalryFormation != null)
      {
        if (infantrySide != FormationAI.BehaviorSide.BehaviorSideNotSet)
        {
          this._cavalryFormation.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(this._cavalryFormation);
          this._cavalryFormation.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1f);
          BehaviorDefendSiegeWeapon behavior = this._cavalryFormation.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
          SiegeWeapon siegeWeapon = this._destructableSiegeWeapons.FirstOrDefault<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => dsw is IPrimarySiegeWeapon && (dsw as IPrimarySiegeWeapon).WeaponSide != infantrySide));
          FormationAI.BehaviorSide side = siegeWeapon == null ? (this._destructableSiegeWeapons.Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => dsw is IPrimarySiegeWeapon && dsw is IMoveableSiegeWeapon)).MinBy<SiegeWeapon, float>((Func<SiegeWeapon, float>) (dsw => dsw.GameEntity.GlobalPosition.AsVec2.DistanceSquared(this._cavalryFormation.QuerySystem.AveragePosition))) as IPrimarySiegeWeapon).WeaponSide : (siegeWeapon as IPrimarySiegeWeapon).WeaponSide;
          behavior.SetDefensePositionFromTactic(this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(side).ToWorldPosition());
          behavior.SetDefendedSiegeWeaponFromTactic(siegeWeapon);
          this._cavalryFormation.AI.Side = side;
        }
        else
        {
          this._cavalryFormation.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(this._cavalryFormation);
          this._cavalryFormation.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1f);
          BehaviorDefendSiegeWeapon behavior = this._cavalryFormation.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
          SiegeWeapon siegeWeapon = this._destructableSiegeWeapons.FirstOrDefault<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => dsw is IPrimarySiegeWeapon && (dsw as IPrimarySiegeWeapon).WeaponSide == FormationAI.BehaviorSide.Middle));
          FormationAI.BehaviorSide side;
          if (siegeWeapon != null)
          {
            side = FormationAI.BehaviorSide.Middle;
          }
          else
          {
            siegeWeapon = this._destructableSiegeWeapons.Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => dsw is IPrimarySiegeWeapon && dsw is IMoveableSiegeWeapon)).MinBy<SiegeWeapon, float>((Func<SiegeWeapon, float>) (dsw => dsw.GameEntity.GlobalPosition.AsVec2.DistanceSquared(this._cavalryFormation.QuerySystem.AveragePosition)));
            side = (siegeWeapon as IPrimarySiegeWeapon).WeaponSide;
          }
          behavior.SetDefensePositionFromTactic(this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(side).ToWorldPosition());
          behavior.SetDefendedSiegeWeaponFromTactic(siegeWeapon);
          this._cavalryFormation.AI.Side = side;
        }
      }
      if (this._rangedCavalry == null)
        return;
      this._rangedCavalry.AI.ResetBehaviorWeights();
      TacticComponent.SetDefaultBehaviorWeights(this._rangedCavalry);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorHorseArcherSkirmish>(1f);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(0.3f);
    }

    private void DefendSingleMainPosition()
    {
      if (this._mainInfantry != null)
      {
        this._mainInfantry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantry);
        if (this._destructableSiegeWeapons.FirstOrDefault<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => dsw is IPrimarySiegeWeapon && dsw is IMoveableSiegeWeapon)) is IPrimarySiegeWeapon primarySiegeWeapon)
        {
          this._mainInfantry.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1f);
          BehaviorDefendSiegeWeapon behavior = this._mainInfantry.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
          behavior.SetDefensePositionFromTactic(this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(primarySiegeWeapon.WeaponSide).ToWorldPosition());
          behavior.SetDefendedSiegeWeaponFromTactic(primarySiegeWeapon as SiegeWeapon);
        }
        else if (this._destructableSiegeWeapons.Any<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => !dsw.IsDisabled)))
        {
          SiegeWeapon siegeWeapon = this._destructableSiegeWeapons.Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => !dsw.IsDisabled)).MinBy<SiegeWeapon, float>((Func<SiegeWeapon, float>) (dsw => dsw.GameEntity.GlobalPosition.AsVec2.DistanceSquared(this._mainInfantry.QuerySystem.AveragePosition)));
          this._mainInfantry.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(this._mainInfantry);
          this._mainInfantry.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1f);
          BehaviorDefendSiegeWeapon behavior = this._mainInfantry.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
          behavior.SetDefensePositionFromTactic(siegeWeapon.GameEntity.GlobalPosition.ToWorldPosition());
          behavior.SetDefendedSiegeWeaponFromTactic(siegeWeapon);
        }
        else
        {
          this._mainInfantry.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(this._mainInfantry);
          this._mainInfantry.AI.SetBehaviorWeight<BehaviorDefend>(1f);
          this._mainInfantry.AI.GetBehavior<BehaviorDefend>().DefensePosition = this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(FormationAI.BehaviorSide.Middle).ToWorldPosition();
        }
        this._mainInfantry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
      }
      if (this._archers != null)
      {
        this._archers.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._archers);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmishLine>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(1f);
        this._archers.AI.SetBehaviorWeight<BehaviorSkirmish>(1f);
      }
      if (this._leftCavalry != null)
      {
        this._leftCavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._leftCavalry);
        this._leftCavalry.AI.SetBehaviorWeight<BehaviorProtectFlank>(1f).FlankSide = FormationAI.BehaviorSide.Left;
        if (this._mainInfantry == null)
        {
          if (this._destructableSiegeWeapons.FirstOrDefault<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => dsw is IPrimarySiegeWeapon && dsw is IMoveableSiegeWeapon)) is IPrimarySiegeWeapon primarySiegeWeapon)
          {
            this._leftCavalry.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1f);
            BehaviorDefendSiegeWeapon behavior = this._leftCavalry.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
            behavior.SetDefensePositionFromTactic(this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(primarySiegeWeapon.WeaponSide).ToWorldPosition());
            behavior.SetDefendedSiegeWeaponFromTactic(primarySiegeWeapon as SiegeWeapon);
          }
          else if (this._destructableSiegeWeapons.Any<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => !dsw.IsDisabled)))
          {
            SiegeWeapon siegeWeapon = this._destructableSiegeWeapons.Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => !dsw.IsDisabled)).MinBy<SiegeWeapon, float>((Func<SiegeWeapon, float>) (dsw => dsw.GameEntity.GlobalPosition.AsVec2.DistanceSquared(this._leftCavalry.QuerySystem.AveragePosition)));
            this._leftCavalry.AI.ResetBehaviorWeights();
            TacticComponent.SetDefaultBehaviorWeights(this._leftCavalry);
            this._leftCavalry.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1f);
            BehaviorDefendSiegeWeapon behavior = this._leftCavalry.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
            behavior.SetDefensePositionFromTactic(siegeWeapon.GameEntity.GlobalPosition.ToWorldPosition());
            behavior.SetDefendedSiegeWeaponFromTactic(siegeWeapon);
          }
          else
          {
            this._leftCavalry.AI.ResetBehaviorWeights();
            TacticComponent.SetDefaultBehaviorWeights(this._leftCavalry);
            this._leftCavalry.AI.SetBehaviorWeight<BehaviorDefend>(1f);
            this._leftCavalry.AI.GetBehavior<BehaviorDefend>().DefensePosition = this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(FormationAI.BehaviorSide.Middle).ToWorldPosition();
          }
          this._leftCavalry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
        }
      }
      if (this._rightCavalry != null)
      {
        this._rightCavalry.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._rightCavalry);
        this._rightCavalry.AI.SetBehaviorWeight<BehaviorProtectFlank>(1f).FlankSide = FormationAI.BehaviorSide.Right;
        if (this._mainInfantry == null)
        {
          if (this._destructableSiegeWeapons.FirstOrDefault<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => dsw is IPrimarySiegeWeapon && dsw is IMoveableSiegeWeapon)) is IPrimarySiegeWeapon primarySiegeWeapon)
          {
            this._rightCavalry.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1f);
            BehaviorDefendSiegeWeapon behavior = this._rightCavalry.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
            behavior.SetDefensePositionFromTactic(this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(primarySiegeWeapon.WeaponSide).ToWorldPosition());
            behavior.SetDefendedSiegeWeaponFromTactic(primarySiegeWeapon as SiegeWeapon);
          }
          else if (this._destructableSiegeWeapons.Any<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => !dsw.IsDisabled)))
          {
            SiegeWeapon siegeWeapon = this._destructableSiegeWeapons.Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (dsw => !dsw.IsDisabled)).MinBy<SiegeWeapon, float>((Func<SiegeWeapon, float>) (dsw => dsw.GameEntity.GlobalPosition.AsVec2.DistanceSquared(this._rightCavalry.QuerySystem.AveragePosition)));
            this._rightCavalry.AI.ResetBehaviorWeights();
            TacticComponent.SetDefaultBehaviorWeights(this._rightCavalry);
            this._rightCavalry.AI.SetBehaviorWeight<BehaviorDefendSiegeWeapon>(1f);
            BehaviorDefendSiegeWeapon behavior = this._rightCavalry.AI.GetBehavior<BehaviorDefendSiegeWeapon>();
            behavior.SetDefensePositionFromTactic(siegeWeapon.GameEntity.GlobalPosition.ToWorldPosition());
            behavior.SetDefendedSiegeWeaponFromTactic(siegeWeapon);
          }
          else
          {
            this._rightCavalry.AI.ResetBehaviorWeights();
            TacticComponent.SetDefaultBehaviorWeights(this._rightCavalry);
            this._rightCavalry.AI.SetBehaviorWeight<BehaviorDefend>(1f);
            this._rightCavalry.AI.GetBehavior<BehaviorDefend>().DefensePosition = this._teamAISallyOutDefender.CalculateSallyOutReferencePosition(FormationAI.BehaviorSide.Middle).ToWorldPosition();
          }
          this._rightCavalry.AI.SetBehaviorWeight<BehaviorTacticalCharge>(1f);
        }
      }
      if (this._rangedCavalry == null)
        return;
      this._rangedCavalry.AI.ResetBehaviorWeights();
      TacticComponent.SetDefaultBehaviorWeights(this._rangedCavalry);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorHorseArcherSkirmish>(1f);
      this._rangedCavalry.AI.SetBehaviorWeight<BehaviorScreenedSkirmish>(0.3f);
    }

    private void ApplyDefenseBasedOnState()
    {
      this._destructableSiegeWeapons.RemoveAll((Predicate<SiegeWeapon>) (dsw => dsw.IsDisabled || dsw.IsDestroyed));
      switch (this._weaponsToBeDefendedState)
      {
        case TacticSallyOutDefense.WeaponsToBeDefended.TwoPrimary:
          this.DefendTwoMainPositions();
          break;
        case TacticSallyOutDefense.WeaponsToBeDefended.ThreePrimary:
          this.DefendCenterLocation();
          break;
        default:
          this.DefendSingleMainPosition();
          break;
      }
    }

    protected internal override void TickOccasionally()
    {
      if (!this.AreFormationsCreated)
        return;
      if (this.CheckAndSetAvailableFormationsChanged())
      {
        this.ManageFormationCounts();
        this.ApplyDefenseBasedOnState();
        if (this._hasBattleBeenJoined)
          this.Engage();
        this.IsTacticReapplyNeeded = false;
      }
      int toBeDefendedState1 = (int) this._weaponsToBeDefendedState;
      this.DetermineState();
      int toBeDefendedState2 = (int) this._weaponsToBeDefendedState;
      if (toBeDefendedState1 != toBeDefendedState2)
      {
        this.ApplyDefenseBasedOnState();
        this.IsTacticReapplyNeeded = false;
      }
      bool battleBeenJoined = this.CalculateHasBattleBeenJoined();
      if (battleBeenJoined != this._hasBattleBeenJoined || this.IsTacticReapplyNeeded)
      {
        this._hasBattleBeenJoined = battleBeenJoined;
        if (this._hasBattleBeenJoined)
          this.Engage();
        else
          this.ApplyDefenseBasedOnState();
        this.IsTacticReapplyNeeded = false;
      }
      base.TickOccasionally();
    }

    protected internal override float GetTacticWeight() => 10f;

    private enum WeaponsToBeDefended
    {
      Unset,
      NoWeapons,
      OnlyRangedWeapons,
      OnePrimary,
      TwoPrimary,
      ThreePrimary,
    }
  }
}
