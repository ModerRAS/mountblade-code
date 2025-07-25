// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticSallyOutHitAndRun
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
  public class TacticSallyOutHitAndRun : TacticComponent
  {
    private TacticSallyOutHitAndRun.TacticState _state;
    private Formation _mainInfantryFormation;
    private MBList<Formation> _archerFormations;
    private MBList<Formation> _cavalryFormations;
    private readonly TeamAISallyOutAttacker _teamAISallyOutAttacker;
    private readonly List<SiegeWeapon> _destructibleEnemySiegeWeapons;

    protected override void ManageFormationCounts()
    {
      List<IPrimarySiegeWeapon> list = this._teamAISallyOutAttacker.PrimarySiegeWeapons.Where<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw is SiegeWeapon siegeWeapon && !siegeWeapon.IsDisabled && siegeWeapon.IsDestructible)).ToList<IPrimarySiegeWeapon>();
      int count1 = list.Count;
      bool flag1 = false;
      foreach (UsableMachine rangedSiegeWeapon in this._teamAISallyOutAttacker.BesiegerRangedSiegeWeapons)
      {
        if (!rangedSiegeWeapon.IsDisabled && !rangedSiegeWeapon.IsDestroyed)
        {
          flag1 = true;
          break;
        }
      }
      int count2 = MathF.Max(count1, 1 + (list.Count > 0 & flag1 ? 1 : 0));
      int count3 = MathF.Min(this._teamAISallyOutAttacker.ArcherPositions.Count, 7 - count2);
      int num = this.FormationsIncludingEmpty.Count<Formation>((Func<Formation, bool>) (f =>
      {
        if (f.CountOfUnits <= 0)
          return false;
        return f.QuerySystem.IsCavalryFormation || f.QuerySystem.IsRangedCavalryFormation;
      })) <= 0 ? 0 : ((double) this.Team.QuerySystem.CavalryRatio + (double) this.Team.QuerySystem.RangedCavalryRatio > 0.10000000149011612 ? 1 : 0);
      bool flag2 = true;
      if (num == 0)
      {
        count2 = 1;
        flag2 = this.FormationsIncludingEmpty.Count<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)) > 0 && (double) this.Team.QuerySystem.CavalryRatio + (double) this.Team.QuerySystem.RangedCavalryRatio + (double) this.Team.QuerySystem.InfantryRatio > 0.15000000596046448;
        if (!flag2)
          count3 = 1;
      }
      this.SplitFormationClassIntoGivenNumber((Func<Formation, bool>) (f => f.QuerySystem.IsInfantryFormation), 1);
      this.SplitFormationClassIntoGivenNumber((Func<Formation, bool>) (f => f.QuerySystem.IsRangedFormation), count3);
      this.SplitFormationClassIntoGivenNumber((Func<Formation, bool>) (f => f.QuerySystem.IsCavalryFormation || f.QuerySystem.IsRangedCavalryFormation), count2);
      this._mainInfantryFormation = this.FormationsIncludingEmpty.FirstOrDefault<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation));
      if (this._mainInfantryFormation != null)
        this._mainInfantryFormation.AI.IsMainFormation = true;
      this._archerFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation)).ToMBList<Formation>();
      this._cavalryFormations.Clear();
      this._cavalryFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f =>
      {
        if (f.CountOfUnits <= 0)
          return false;
        return f.QuerySystem.IsCavalryFormation || f.QuerySystem.IsRangedCavalryFormation;
      })).ToMBList<Formation>();
      if (num == 0)
      {
        if (this._mainInfantryFormation != null)
        {
          this._cavalryFormations.Add(this._mainInfantryFormation);
          this._mainInfantryFormation.AI.IsMainFormation = false;
          this._mainInfantryFormation = (Formation) null;
        }
        if (!flag2)
        {
          this._cavalryFormations.AddRange((IEnumerable<Formation>) this._archerFormations);
          this._archerFormations.Clear();
        }
      }
      bool flag3 = list.Count == 0 || list.Count == 1 & flag1 && this._cavalryFormations.Count + (this._mainInfantryFormation != null ? 1 : 0) > 1;
      for (int index = 0; index < this._cavalryFormations.Count - (flag3 ? 1 : 0); ++index)
      {
        if (list.Count > 0)
          this._cavalryFormations[index].AI.Side = list[index % list.Count].WeaponSide;
        else
          this._cavalryFormations[index].AI.Side = FormationAI.BehaviorSide.Middle;
      }
      for (int index = 0; index < this._archerFormations.Count - (flag3 ? 1 : 0); ++index)
      {
        if (list.Count > 0)
          this._archerFormations[index].AI.Side = list[index % list.Count].WeaponSide;
        else
          this._archerFormations[index].AI.Side = FormationAI.BehaviorSide.Middle;
      }
      if (this._cavalryFormations.Count > 0 & flag3)
      {
        if (list.Any<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw != null && psw.WeaponSide == FormationAI.BehaviorSide.Middle)))
          this._cavalryFormations[0].AI.Side = FormationAI.BehaviorSide.Left;
        else
          this._cavalryFormations[this._cavalryFormations.Count - 1].AI.Side = FormationAI.BehaviorSide.Middle;
      }
      if (this._archerFormations.Count > 0 & flag3)
      {
        if (list.Any<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw != null && psw.WeaponSide == FormationAI.BehaviorSide.Middle)))
          this._archerFormations[0].AI.Side = FormationAI.BehaviorSide.Left;
        else
          this._archerFormations[this._archerFormations.Count - 1].AI.Side = FormationAI.BehaviorSide.Middle;
      }
      this._AIControlledFormationCount = this.Team.GetAIControlledFormationCount();
    }

    private void DestroySiegeWeapons()
    {
      if (this._mainInfantryFormation != null)
      {
        this._mainInfantryFormation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantryFormation);
        BehaviorDefend behaviorDefend = this._mainInfantryFormation.AI.SetBehaviorWeight<BehaviorDefend>(1f);
        Vec2 vec2 = (this._teamAISallyOutAttacker.OuterGate.GameEntity.GlobalPosition.AsVec2 - this._teamAISallyOutAttacker.InnerGate.GameEntity.GlobalPosition.AsVec2).Normalized();
        WorldPosition worldPosition1 = new WorldPosition(this._mainInfantryFormation.Team.Mission.Scene, UIntPtr.Zero, this._teamAISallyOutAttacker.OuterGate.GameEntity.GlobalPosition, false);
        worldPosition1.SetVec2(worldPosition1.AsVec2 + (3f + this._mainInfantryFormation.Depth) * vec2);
        WorldPosition worldPosition2 = worldPosition1;
        behaviorDefend.DefensePosition = worldPosition2;
        this._mainInfantryFormation.AI.SetBehaviorWeight<BehaviorDestroySiegeWeapons>(1f);
        this._mainInfantryFormation.AI.SetBehaviorWeight<BehaviorCharge>(0.1f);
      }
      if (this._teamAISallyOutAttacker.ArcherPositions.Count > 0)
      {
        for (int index = 0; index < this._archerFormations.Count; ++index)
        {
          Formation archerFormation = this._archerFormations[index];
          archerFormation.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(archerFormation);
          archerFormation.AI.SetBehaviorWeight<BehaviorShootFromCastleWalls>(0.1f);
          archerFormation.AI.GetBehavior<BehaviorShootFromCastleWalls>().ArcherPosition = this._teamAISallyOutAttacker.ArcherPositions[index % this._teamAISallyOutAttacker.ArcherPositions.Count];
          archerFormation.AI.SetBehaviorWeight<BehaviorDestroySiegeWeapons>(1f);
          archerFormation.AI.SetBehaviorWeight<BehaviorCharge>(0.1f);
        }
      }
      foreach (Formation cavalryFormation in (List<Formation>) this._cavalryFormations)
      {
        cavalryFormation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(cavalryFormation);
        cavalryFormation.AI.SetBehaviorWeight<BehaviorDestroySiegeWeapons>(1f);
        cavalryFormation.AI.SetBehaviorWeight<BehaviorCharge>(0.1f);
      }
    }

    private void CavalryRetreat()
    {
      if (this._mainInfantryFormation != null)
      {
        this._mainInfantryFormation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantryFormation);
        BehaviorDefend behaviorDefend = this._mainInfantryFormation.AI.SetBehaviorWeight<BehaviorDefend>(1f);
        Vec2 vec2 = (this._teamAISallyOutAttacker.OuterGate.GameEntity.GlobalPosition.AsVec2 - this._teamAISallyOutAttacker.InnerGate.GameEntity.GlobalPosition.AsVec2).Normalized();
        WorldPosition worldPosition1 = new WorldPosition(this._mainInfantryFormation.Team.Mission.Scene, UIntPtr.Zero, this._teamAISallyOutAttacker.OuterGate.GameEntity.GlobalPosition, false);
        worldPosition1.SetVec2(worldPosition1.AsVec2 + (3f + this._mainInfantryFormation.Depth) * vec2);
        WorldPosition worldPosition2 = worldPosition1;
        behaviorDefend.DefensePosition = worldPosition2;
      }
      if (this._teamAISallyOutAttacker.ArcherPositions.Count > 0)
      {
        for (int index = 0; index < this._archerFormations.Count; ++index)
        {
          Formation archerFormation = this._archerFormations[index];
          archerFormation.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(archerFormation);
          archerFormation.AI.SetBehaviorWeight<BehaviorShootFromCastleWalls>(1f);
          archerFormation.AI.GetBehavior<BehaviorShootFromCastleWalls>().ArcherPosition = this._teamAISallyOutAttacker.ArcherPositions[index % this._teamAISallyOutAttacker.ArcherPositions.Count];
        }
      }
      foreach (Formation cavalryFormation in (List<Formation>) this._cavalryFormations)
      {
        cavalryFormation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(cavalryFormation);
        cavalryFormation.AI.SetBehaviorWeight<BehaviorRetreatToCastle>(3f);
        cavalryFormation.AI.SetBehaviorWeight<BehaviorCharge>(0.1f);
      }
    }

    private void InfantryRetreat()
    {
      if (this._mainInfantryFormation == null)
        return;
      for (int index = 0; index < TeamAISiegeComponent.SiegeLanes.Count; ++index)
      {
        SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes[index];
        if (siegeLane.HasGate)
        {
          this._mainInfantryFormation.AI.Side = siegeLane.LaneSide;
          break;
        }
      }
      this._mainInfantryFormation.AI.ResetBehaviorWeights();
      TacticComponent.SetDefaultBehaviorWeights(this._mainInfantryFormation);
      this._mainInfantryFormation.AI.SetBehaviorWeight<BehaviorDefendCastleKeyPosition>(1f);
    }

    private void HeadOutFromTheCastle()
    {
      if (this._mainInfantryFormation != null)
      {
        this._mainInfantryFormation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(this._mainInfantryFormation);
        this._mainInfantryFormation.AI.SetBehaviorWeight<BehaviorStop>(1000f);
      }
      if (this._teamAISallyOutAttacker.ArcherPositions.Count > 0)
      {
        for (int index = 0; index < this._archerFormations.Count; ++index)
        {
          Formation archerFormation = this._archerFormations[index];
          archerFormation.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(archerFormation);
          archerFormation.AI.SetBehaviorWeight<BehaviorShootFromCastleWalls>(1f);
          archerFormation.AI.GetBehavior<BehaviorShootFromCastleWalls>().ArcherPosition = this._teamAISallyOutAttacker.ArcherPositions[index % this._teamAISallyOutAttacker.ArcherPositions.Count];
        }
      }
      foreach (Formation cavalryFormation in (List<Formation>) this._cavalryFormations)
      {
        cavalryFormation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(cavalryFormation);
        cavalryFormation.AI.SetBehaviorWeight<BehaviorDestroySiegeWeapons>(1f);
        cavalryFormation.AI.SetBehaviorWeight<BehaviorCharge>(0.1f);
      }
    }

    public TacticSallyOutHitAndRun(Team team)
      : base(team)
    {
      this._archerFormations = new MBList<Formation>();
      this._cavalryFormations = new MBList<Formation>();
      this._teamAISallyOutAttacker = team.TeamAI as TeamAISallyOutAttacker;
      this._state = TacticSallyOutHitAndRun.TacticState.HeadingOutFromCastle;
      this._destructibleEnemySiegeWeapons = Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeWeapon>().Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (sw => sw.Side != team.Side && sw.IsDestructible)).ToList<SiegeWeapon>();
      this.ManageFormationCounts();
      this.HeadOutFromTheCastle();
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
      if (num != 0 || this._mainInfantryFormation != null && (this._mainInfantryFormation.CountOfUnits == 0 || !this._mainInfantryFormation.QuerySystem.IsInfantryFormation) || this._archerFormations.Count > 0 && this._archerFormations.Any<Formation>((Func<Formation, bool>) (af => af.CountOfUnits == 0 || !af.QuerySystem.IsRangedFormation)))
        return true;
      return this._cavalryFormations.Count > 0 && this._cavalryFormations.Any<Formation>((Func<Formation, bool>) (cf => cf.CountOfUnits == 0));
    }

    private void CheckAndChangeState()
    {
      switch (this._state)
      {
        case TacticSallyOutHitAndRun.TacticState.HeadingOutFromCastle:
          if (!this._cavalryFormations.All<Formation>((Func<Formation, bool>) (cf => !TeamAISiegeComponent.IsFormationInsideCastle(cf, false))))
            break;
          this._state = TacticSallyOutHitAndRun.TacticState.DestroyingSiegeWeapons;
          this.DestroySiegeWeapons();
          break;
        case TacticSallyOutHitAndRun.TacticState.DestroyingSiegeWeapons:
          bool flag1 = true;
          foreach (UsableMachine enemySiegeWeapon in this._destructibleEnemySiegeWeapons)
          {
            if (!enemySiegeWeapon.IsDestroyed)
            {
              flag1 = false;
              break;
            }
          }
          bool flag2 = true;
          if (!flag1)
          {
            foreach (Formation cavalryFormation in (List<Formation>) this._cavalryFormations)
            {
              if (cavalryFormation.AI.ActiveBehavior == null)
              {
                flag2 = false;
                break;
              }
              if (!(ref cavalryFormation.GetReadonlyMovementOrderReference() == MovementOrder.MovementOrderRetreat) && cavalryFormation.AI.ActiveBehavior is BehaviorDestroySiegeWeapons activeBehavior)
              {
                if (activeBehavior.LastTargetWeapon == null)
                {
                  flag2 = false;
                  break;
                }
                Vec2 asVec2 = activeBehavior.LastTargetWeapon.GameEntity.GlobalPosition.AsVec2;
                if ((double) this.Team.QuerySystem.GetLocalEnemyPower(asVec2) <= (double) this.Team.QuerySystem.GetLocalAllyPower(asVec2) + (double) cavalryFormation.QuerySystem.FormationPower)
                {
                  flag2 = false;
                  break;
                }
              }
            }
          }
          if (!(flag1 | flag2))
            break;
          this._state = TacticSallyOutHitAndRun.TacticState.CavalryRetreating;
          this.CavalryRetreat();
          this.Team.TeamAI.NotifyTacticalDecision(new TacticalDecision((TacticComponent) this, (byte) 31));
          break;
        case TacticSallyOutHitAndRun.TacticState.CavalryRetreating:
          if (!this._cavalryFormations.IsEmpty<Formation>() && !TeamAISiegeComponent.IsFormationGroupInsideCastle(this._cavalryFormations, false))
            break;
          this._state = TacticSallyOutHitAndRun.TacticState.InfantryRetreating;
          this.InfantryRetreat();
          break;
      }
    }

    protected internal override void TickOccasionally()
    {
      if (!this.AreFormationsCreated)
        return;
      if (this.CheckAndSetAvailableFormationsChanged() || this.IsTacticReapplyNeeded)
      {
        this.ManageFormationCounts();
        switch (this._state)
        {
          case TacticSallyOutHitAndRun.TacticState.HeadingOutFromCastle:
            this.HeadOutFromTheCastle();
            break;
          case TacticSallyOutHitAndRun.TacticState.DestroyingSiegeWeapons:
            this.DestroySiegeWeapons();
            break;
          case TacticSallyOutHitAndRun.TacticState.CavalryRetreating:
            this.CavalryRetreat();
            break;
          case TacticSallyOutHitAndRun.TacticState.InfantryRetreating:
            this.InfantryRetreat();
            break;
        }
        this.IsTacticReapplyNeeded = false;
      }
      this.CheckAndChangeState();
      base.TickOccasionally();
    }

    protected internal override float GetTacticWeight() => 10f;

    private enum TacticState
    {
      HeadingOutFromCastle,
      DestroyingSiegeWeapons,
      CavalryRetreating,
      InfantryRetreating,
    }
  }
}
