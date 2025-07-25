// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticBreachWalls
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TacticBreachWalls : TacticComponent
  {
    public const float SameBehaviorFactor = 3f;
    public const float SameSideFactor = 5f;
    private const int ShockAssaultThresholdCount = 100;
    private readonly TeamAISiegeAttacker _teamAISiegeAttacker;
    private TacticBreachWalls.BreachWallsProgressIndicators _indicators;
    private List<Formation> _meleeFormations;
    private List<Formation> _rangedFormations;
    private int _laneCount;
    private List<SiegeLane> _cachedUsedSiegeLanes;
    private int _lanesInUse;
    private List<ArcherPosition> _cachedUsedArcherPositions;
    private TacticBreachWalls.TacticState _tacticState;
    private bool _isShockAssault;

    public TacticBreachWalls(Team team)
      : base(team)
    {
      Mission current = Mission.Current;
      this._teamAISiegeAttacker = team.TeamAI as TeamAISiegeAttacker;
      this._meleeFormations = new List<Formation>();
      this._rangedFormations = new List<Formation>();
      this._cachedUsedSiegeLanes = new List<SiegeLane>();
      this._cachedUsedArcherPositions = new List<ArcherPosition>();
    }

    private void BalanceAssaultLanes(List<Formation> attackerFormations)
    {
      if (attackerFormations.Count < 2)
        return;
      int num1 = attackerFormations.Sum<Formation>((Func<Formation, int>) (f => f.CountOfUnitsWithoutDetachedOnes));
      int idealCount = num1 / attackerFormations.Count;
      int num2 = MathF.Max((int) ((double) num1 * 0.20000000298023224), 1);
      using (List<Formation>.Enumerator enumerator = attackerFormations.GetEnumerator())
      {
label_7:
        while (enumerator.MoveNext())
        {
          Formation current = enumerator.Current;
          int num3 = 0;
          while (true)
          {
            if (idealCount - current.CountOfUnitsWithoutDetachedOnes > num2 && attackerFormations.Any<Formation>((Func<Formation, bool>) (af => af.CountOfUnitsWithoutDetachedOnes > idealCount)) && num3 < attackerFormations.Count)
            {
              int a = idealCount - current.CountOfUnitsWithoutDetachedOnes;
              Formation formation = attackerFormations.MaxBy<Formation, int>((Func<Formation, int>) (df => df.CountOfUnitsWithoutDetachedOnes - idealCount));
              int unitCount = MathF.Min(a, formation.CountOfUnitsWithoutDetachedOnes - idealCount);
              formation.TransferUnits(current, unitCount);
              ++num3;
            }
            else
              goto label_7;
          }
        }
      }
    }

    private bool ShouldRetreat(List<SiegeLane> lanes, int insideFormationCount)
    {
      return this._indicators != null && (double) this.Team.QuerySystem.RemainingPowerRatio / (double) this._indicators.StartingPowerRatio < (double) this._indicators.GetRetreatThresholdRatio(lanes, insideFormationCount);
    }

    private void AssignMeleeFormationsToLanes(
      List<Formation> meleeFormationsSource,
      List<SiegeLane> currentLanes)
    {
      List<Formation> source = new List<Formation>(meleeFormationsSource.Count);
      source.AddRange((IEnumerable<Formation>) meleeFormationsSource);
      List<SiegeLane> list = currentLanes.ToList<SiegeLane>();
      for (int index = 0; index < currentLanes.Count; ++index)
      {
        SiegeLane currentLane = currentLanes[index];
        Formation assignedFormation = currentLanes[index].GetLastAssignedFormation(this.Team.TeamIndex);
        if (assignedFormation != null && source.Contains(assignedFormation))
        {
          assignedFormation.AI.Side = currentLane.LaneSide;
          assignedFormation.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(assignedFormation);
          assignedFormation.AI.SetBehaviorWeight<BehaviorAssaultWalls>(1f);
          assignedFormation.AI.SetBehaviorWeight<BehaviorUseSiegeMachines>(1f);
          assignedFormation.AI.SetBehaviorWeight<BehaviorWaitForLadders>(1f);
          list.Remove(currentLane);
          source.Remove(assignedFormation);
        }
      }
      while (source.Count > 0 && list.Count > 0)
      {
        Formation largestFormation = source.MaxBy<Formation, int>((Func<Formation, int>) (mf => mf.CountOfUnitsWithoutLooseDetachedOnes));
        SiegeLane siegeLane = list.MinBy<SiegeLane, float>((Func<SiegeLane, float>) (l => l.GetCurrentAttackerPosition().DistanceSquaredWithLimit(largestFormation.QuerySystem.MedianPosition.GetNavMeshVec3(), 10000f)));
        largestFormation.AI.Side = siegeLane.LaneSide;
        largestFormation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(largestFormation);
        largestFormation.AI.SetBehaviorWeight<BehaviorAssaultWalls>(1f);
        largestFormation.AI.SetBehaviorWeight<BehaviorUseSiegeMachines>(1f);
        largestFormation.AI.SetBehaviorWeight<BehaviorWaitForLadders>(1f);
        siegeLane.SetLastAssignedFormation(this.Team.TeamIndex, largestFormation);
        source.Remove(largestFormation);
        list.Remove(siegeLane);
      }
      bool flag = true;
      while (source.Count > 0)
      {
        if (list.IsEmpty<SiegeLane>())
        {
          list.AddRange((IEnumerable<SiegeLane>) currentLanes);
          flag = false;
        }
        Formation nextBiggest = source.MaxBy<Formation, int>((Func<Formation, int>) (mf => mf.CountOfUnitsWithoutLooseDetachedOnes));
        SiegeLane siegeLane = list.MinBy<SiegeLane, float>((Func<SiegeLane, float>) (l => l.GetCurrentAttackerPosition().DistanceSquaredWithLimit(nextBiggest.QuerySystem.MedianPosition.GetNavMeshVec3(), 10000f)));
        nextBiggest.AI.Side = siegeLane.LaneSide;
        nextBiggest.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(nextBiggest);
        nextBiggest.AI.SetBehaviorWeight<BehaviorAssaultWalls>(1f);
        nextBiggest.AI.SetBehaviorWeight<BehaviorUseSiegeMachines>(1f);
        nextBiggest.AI.SetBehaviorWeight<BehaviorWaitForLadders>(1f);
        if (flag)
          siegeLane.SetLastAssignedFormation(this.Team.TeamIndex, nextBiggest);
        source.Remove(nextBiggest);
        list.Remove(siegeLane);
      }
    }

    private void WellRoundedAssault(
      ref List<SiegeLane> currentLanes,
      ref List<ArcherPosition> archerPositions)
    {
      if (currentLanes.Count == 0)
      {
        Debug.Print("TeamAISiegeComponent.SiegeLanes.Count" + (object) TeamAISiegeComponent.SiegeLanes.Count);
        for (int index = 0; index < TeamAISiegeComponent.SiegeLanes.Count; ++index)
        {
          SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes[index];
          Debug.Print("lane " + (object) index + " is breach " + siegeLane.IsBreach.ToString() + " is unusable " + siegeLane.CalculateIsLaneUnusable().ToString() + " has gate " + siegeLane.HasGate.ToString());
        }
        Debug.Print("_teamAISiegeAttacker.PrimarySiegeWeapons.Count " + (object) this._teamAISiegeAttacker.PrimarySiegeWeapons.Count);
        Debug.Print("ladders.Count = " + (object) Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeLadder>().ToList<SiegeLadder>().Count);
        Debug.Print("towers.Count = " + (object) Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeTower>().ToList<SiegeTower>().Count);
        Debug.Print("ram = " + (object) Mission.Current.ActiveMissionObjects.FindAllWithType<BatteringRam>().FirstOrDefault<BatteringRam>());
      }
      this.AssignMeleeFormationsToLanes(this._meleeFormations, currentLanes);
      foreach (Formation rangedFormation in this._rangedFormations)
      {
        rangedFormation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(rangedFormation);
        rangedFormation.AI.SetBehaviorWeight<BehaviorSkirmish>(1f);
      }
      if (archerPositions.Count <= 0)
        return;
      foreach (Formation formation in (IEnumerable<Formation>) this._rangedFormations.OrderByDescending<Formation, int>((Func<Formation, int>) (rf => rf.CountOfUnits)))
      {
        Formation rangedFormation = formation;
        if (archerPositions.IsEmpty<ArcherPosition>())
          archerPositions.AddRange((IEnumerable<ArcherPosition>) this._teamAISiegeAttacker.ArcherPositions);
        ArcherPosition archerPosition1 = (ArcherPosition) null;
        if (rangedFormation.AI.ActiveBehavior is BehaviorSparseSkirmish)
          archerPosition1 = archerPositions.FirstOrDefault<ArcherPosition>((Func<ArcherPosition, bool>) (ap => (NativeObject) ap.Entity == (NativeObject) (rangedFormation.AI.ActiveBehavior as BehaviorSparseSkirmish).ArcherPosition));
        if (archerPosition1 != null)
        {
          rangedFormation.AI.SetBehaviorWeight<BehaviorSparseSkirmish>(1f);
          archerPositions.Remove(archerPosition1);
        }
        else
        {
          ArcherPosition archerPosition2 = archerPositions.MinBy<ArcherPosition, float>((Func<ArcherPosition, float>) (ap => ap.Entity.GlobalPosition.AsVec2.DistanceSquared(rangedFormation.QuerySystem.AveragePosition)));
          rangedFormation.AI.SetBehaviorWeight<BehaviorSparseSkirmish>(1f);
          rangedFormation.AI.GetBehavior<BehaviorSparseSkirmish>().ArcherPosition = archerPosition2.Entity;
          archerPosition2.SetLastAssignedFormation(this.Team.TeamIndex, rangedFormation);
          archerPositions.Remove(archerPosition2);
        }
      }
    }

    private void AllInAssault()
    {
      this.AssignMeleeFormationsToLanes(this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0)).ToList<Formation>(), this.DetermineCurrentLanes());
    }

    private void StartTacticalRetreat()
    {
      this.StopUsingAllMachines();
      foreach (Formation f in (List<Formation>) this.FormationsIncludingSpecialAndEmpty)
      {
        if (f.CountOfUnits > 0)
        {
          f.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(f);
          f.AI.SetBehaviorWeight<BehaviorRetreatToKeep>(1f);
        }
      }
    }

    protected override bool CheckAndSetAvailableFormationsChanged()
    {
      bool flag1 = false;
      int count = this.DetermineCurrentLanes().Count;
      if (this._laneCount != count)
      {
        this._laneCount = count;
        flag1 = true;
      }
      int controlledFormationCount = this.Team.GetAIControlledFormationCount();
      bool flag2 = controlledFormationCount != this._AIControlledFormationCount;
      if (flag2)
      {
        this._AIControlledFormationCount = controlledFormationCount;
        this.IsTacticReapplyNeeded = true;
      }
      bool flag3 = false;
      bool flag4 = false;
      if (this._tacticState == TacticBreachWalls.TacticState.AssaultUnderRangedCover)
      {
        int num1 = 0;
        int num2 = 0;
        foreach (Formation formation in (List<Formation>) this.Team.FormationsIncludingEmpty)
        {
          if (formation.CountOfUnitsWithoutDetachedOnes > 0)
          {
            if (formation.QuerySystem.IsInfantryFormation)
              ++num1;
            if (formation.QuerySystem.IsRangedFormation)
              ++num2;
          }
        }
        if (this._meleeFormations.Count != num1 || this._rangedFormations.Count != num2)
        {
          flag3 = true;
          this._meleeFormations.Clear();
          this._rangedFormations.Clear();
          foreach (Formation formation in (List<Formation>) this.Team.FormationsIncludingEmpty)
          {
            if (formation.CountOfUnitsWithoutDetachedOnes > 0)
            {
              if (formation.QuerySystem.IsInfantryFormation)
                this._meleeFormations.Add(formation);
              if (formation.QuerySystem.IsRangedFormation)
                this._rangedFormations.Add(formation);
            }
          }
        }
      }
      else if (this._tacticState == TacticBreachWalls.TacticState.TotalAttack)
      {
        int formationCount = this.Team.GetFormationCount();
        if (formationCount < count && controlledFormationCount > 0 || formationCount > count && (formationCount - controlledFormationCount < count || controlledFormationCount > 1))
          flag4 = true;
      }
      return flag1 | flag2 | flag3 | flag4;
    }

    private void MergeFormationsIfLanesBecameUnavailable(ref List<SiegeLane> currentLanes)
    {
      if (this._laneCount > currentLanes.Count)
      {
        List<Formation> formationList1 = new List<Formation>();
        int num1 = 0;
        List<Formation> formationList2 = new List<Formation>();
        int num2 = 0;
        for (int index1 = 0; index1 < this._cachedUsedSiegeLanes.Count; ++index1)
        {
          bool flag = false;
          SiegeLane cachedUsedSiegeLane = this._cachedUsedSiegeLanes[index1];
          for (int index2 = 0; index2 < currentLanes.Count; ++index2)
          {
            if (cachedUsedSiegeLane == currentLanes[index2])
            {
              flag = true;
              break;
            }
          }
          if (!flag)
          {
            Formation assignedFormation = cachedUsedSiegeLane.GetLastAssignedFormation(this.Team.TeamIndex);
            if (assignedFormation != null && assignedFormation.IsSplittableByAI)
            {
              num1 += assignedFormation.CountOfUnits;
              formationList1.Add(assignedFormation);
            }
          }
          else
          {
            Formation assignedFormation = cachedUsedSiegeLane.GetLastAssignedFormation(this.Team.TeamIndex);
            if (assignedFormation != null)
            {
              num2 += assignedFormation.CountOfUnits;
              formationList2.Add(assignedFormation);
            }
          }
        }
        int num3 = MathF.Ceiling((float) (num1 + num2) / (float) formationList2.Count);
        for (int index3 = 0; index3 < formationList1.Count; ++index3)
        {
          Formation formation = formationList1[index3];
          int countOfUnits = formation.CountOfUnits;
          for (int index4 = 0; index4 < formationList2.Count; ++index4)
          {
            Formation target = formationList2[index4];
            int b = num3 - target.CountOfUnits;
            if (b > 0)
            {
              int unitCount = MathF.Min(countOfUnits, b);
              countOfUnits -= unitCount;
              formation.TransferUnits(target, unitCount);
            }
          }
        }
        this._AIControlledFormationCount -= num1;
      }
      this._cachedUsedSiegeLanes = currentLanes;
      this._laneCount = currentLanes.Count;
    }

    private void MergeFormationsIfArcherPositionsBecameUnavailable(
      ref List<ArcherPosition> currentArcherPositions)
    {
      if (this._cachedUsedArcherPositions.Count > currentArcherPositions.Count)
      {
        List<Formation> formationList1 = new List<Formation>();
        int num1 = 0;
        List<Formation> formationList2 = new List<Formation>();
        int num2 = 0;
        for (int index1 = 0; index1 < this._cachedUsedArcherPositions.Count; ++index1)
        {
          bool flag = false;
          ArcherPosition usedArcherPosition = this._cachedUsedArcherPositions[index1];
          for (int index2 = 0; index2 < currentArcherPositions.Count; ++index2)
          {
            if (usedArcherPosition == currentArcherPositions[index2])
            {
              flag = true;
              break;
            }
          }
          if (!flag)
          {
            Formation assignedFormation = usedArcherPosition.GetLastAssignedFormation(this.Team.TeamIndex);
            if (assignedFormation != null && assignedFormation.IsSplittableByAI)
            {
              num1 += assignedFormation.CountOfUnits;
              formationList1.Add(assignedFormation);
            }
          }
          else
          {
            Formation assignedFormation = usedArcherPosition.GetLastAssignedFormation(this.Team.TeamIndex);
            if (assignedFormation != null)
            {
              num2 += assignedFormation.CountOfUnits;
              formationList2.Add(assignedFormation);
            }
          }
        }
        int num3 = MathF.Ceiling((float) (num1 + num2) / (float) formationList2.Count);
        for (int index3 = 0; index3 < formationList1.Count; ++index3)
        {
          Formation formation = formationList1[index3];
          int countOfUnits = formation.CountOfUnits;
          for (int index4 = 0; index4 < formationList2.Count; ++index4)
          {
            Formation target = formationList2[index4];
            int b = num3 - target.CountOfUnits;
            if (b > 0)
            {
              int unitCount = MathF.Min(countOfUnits, b);
              countOfUnits -= unitCount;
              formation.TransferUnits(target, unitCount);
            }
          }
        }
        this._AIControlledFormationCount -= num1;
      }
      this._cachedUsedArcherPositions = currentArcherPositions;
    }

    protected override void ManageFormationCounts()
    {
      List<SiegeLane> currentLanes = this.DetermineCurrentLanes();
      if (this._indicators == null && this.Team.QuerySystem.EnemyUnitCount > 0)
        this._indicators = new TacticBreachWalls.BreachWallsProgressIndicators(this.Team, currentLanes);
      if (this._tacticState == TacticBreachWalls.TacticState.Retreating)
        return;
      int count = currentLanes.Count;
      if (this._tacticState == TacticBreachWalls.TacticState.AssaultUnderRangedCover)
      {
        int rangedCount = MathF.Min(this.DetermineCurrentArcherPositions(currentLanes).Count, 8 - count);
        this.ManageFormationCounts(count, rangedCount, 0, 0);
        this._meleeFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.QuerySystem.IsInfantryFormation && f.CountOfUnitsWithoutDetachedOnes > 0)).ToList<Formation>();
        this._rangedFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.QuerySystem.IsRangedFormation && f.CountOfUnitsWithoutDetachedOnes > 0)).ToList<Formation>();
      }
      else
      {
        if (this._tacticState != TacticBreachWalls.TacticState.TotalAttack)
          return;
        this.SplitFormationClassIntoGivenNumber((Func<Formation, bool>) (f => true), count);
      }
    }

    private void CheckAndChangeState()
    {
      if (this._tacticState == TacticBreachWalls.TacticState.Retreating)
        return;
      bool isShockAssault = this._isShockAssault;
      List<SiegeLane> currentLanes = this.DetermineCurrentLanes();
      int insideFormationCount = 0;
      foreach (Formation formation in (List<Formation>) this.Team.FormationsIncludingEmpty)
      {
        if (formation.CountOfUnits > 0 && TeamAISiegeComponent.IsFormationInsideCastle(formation, true))
          ++insideFormationCount;
      }
      if (this.ShouldRetreat(currentLanes, insideFormationCount))
      {
        this._tacticState = TacticBreachWalls.TacticState.Retreating;
        this.StartTacticalRetreat();
        this.IsTacticReapplyNeeded = false;
      }
      else
      {
        TacticBreachWalls.TacticState tacticState = TacticBreachWalls.TacticState.TotalAttack;
        List<ArcherPosition> archerPositions = (List<ArcherPosition>) null;
        if (this._tacticState != TacticBreachWalls.TacticState.TotalAttack)
        {
          archerPositions = this.DetermineCurrentArcherPositions(currentLanes);
          if (archerPositions.Count > 0)
          {
            int num1 = MathF.Max(this._meleeFormations.Sum<Formation>((Func<Formation, int>) (mf => mf.CountOfUnits)), 1);
            int num2 = MathF.Max(this._rangedFormations.Sum<Formation>((Func<Formation, int>) (rf => rf.CountOfUnits)), 1);
            int num3 = num1 + num2;
            int num4 = num3 - this.Team.FormationsIncludingEmpty.Sum<Formation>((Func<Formation, int>) (f => f.CountOfUnitsWithoutDetachedOnes));
            tacticState = (double) num1 / (double) num2 <= 0.5 || (double) num4 / (double) num3 >= 0.20000000298023224 ? TacticBreachWalls.TacticState.TotalAttack : TacticBreachWalls.TacticState.AssaultUnderRangedCover;
          }
        }
        if (tacticState == this._tacticState && isShockAssault == this._isShockAssault)
          return;
        if (tacticState != TacticBreachWalls.TacticState.AssaultUnderRangedCover)
        {
          if (tacticState != TacticBreachWalls.TacticState.TotalAttack)
            return;
          this._tacticState = TacticBreachWalls.TacticState.TotalAttack;
          this.ManageFormationCounts();
          this.AllInAssault();
          this.IsTacticReapplyNeeded = false;
        }
        else
        {
          this._tacticState = TacticBreachWalls.TacticState.AssaultUnderRangedCover;
          this.ManageFormationCounts();
          this.WellRoundedAssault(ref currentLanes, ref archerPositions);
          this.IsTacticReapplyNeeded = false;
        }
      }
    }

    private List<SiegeLane> DetermineCurrentLanes()
    {
      List<SiegeLane> list1 = TeamAISiegeComponent.SiegeLanes.Where<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.IsBreach)).ToList<SiegeLane>();
      if (list1.Count >= 2)
      {
        if (this._indicators == null || this._indicators.InitialUnitCount > 100)
          return list1;
        if (!this._isShockAssault)
        {
          this.StopUsingAllMachines();
          this._isShockAssault = true;
        }
        return list1.Take<SiegeLane>(1).ToList<SiegeLane>();
      }
      List<SiegeLane> list2 = TeamAISiegeComponent.SiegeLanes.Where<SiegeLane>((Func<SiegeLane, bool>) (sl => !sl.CalculateIsLaneUnusable())).ToList<SiegeLane>();
      if (list2.Count <= 0)
        return TeamAISiegeComponent.SiegeLanes.Where<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.HasGate)).ToList<SiegeLane>();
      if (this._indicators == null || this._indicators.InitialUnitCount > 100)
        return list1.Count >= 1 ? list2.Where<SiegeLane>((Func<SiegeLane, bool>) (l => l.IsBreach || l.PrimarySiegeWeapons.Any<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => !(psw is SiegeLadder))))).ToList<SiegeLane>() : list2;
      List<SiegeLane> currentLanes = new List<SiegeLane>();
      currentLanes.Add(list2.MaxBy<SiegeLane, float>((Func<SiegeLane, float>) (ul => ul.CalculateLaneCapacity())));
      if (this._isShockAssault)
        return currentLanes;
      this.StopUsingAllMachines();
      this._isShockAssault = true;
      return currentLanes;
    }

    private List<ArcherPosition> DetermineCurrentArcherPositions(List<SiegeLane> currentLanes)
    {
      return this._teamAISiegeAttacker.ArcherPositions.Where<ArcherPosition>((Func<ArcherPosition, bool>) (ap => currentLanes.Any<SiegeLane>((Func<SiegeLane, bool>) (cl => ap.IsArcherPositionRelatedToSide(cl.LaneSide))))).ToList<ArcherPosition>();
    }

    protected internal override void TickOccasionally()
    {
      if (!this.AreFormationsCreated)
        return;
      this._meleeFormations.RemoveAll((Predicate<Formation>) (mf => mf.CountOfUnitsWithoutDetachedOnes == 0));
      this._rangedFormations.RemoveAll((Predicate<Formation>) (rf => rf.CountOfUnitsWithoutDetachedOnes == 0));
      List<SiegeLane> currentLanes = this.DetermineCurrentLanes();
      this.MergeFormationsIfLanesBecameUnavailable(ref currentLanes);
      bool flag = this.CheckAndSetAvailableFormationsChanged();
      if (this._indicators == null && this.Team.QuerySystem.EnemyUnitCount > 0)
      {
        this._indicators = new TacticBreachWalls.BreachWallsProgressIndicators(this.Team, currentLanes);
        this._indicators.StartingPowerRatio = this.Team.QuerySystem.TotalPowerRatio;
        this._indicators.InitialLaneCount = currentLanes.Count;
        this._indicators.InitialUnitCount = this.Team.QuerySystem.AllyUnitCount;
      }
      int num = 0;
      foreach (SiegeLane siegeLane in currentLanes)
        num |= MathF.PowTwo32((int) siegeLane.LaneSide);
      this.IsTacticReapplyNeeded = num != this._lanesInUse;
      this._lanesInUse = num;
      if (flag)
        this.ManageFormationCounts();
      this.CheckAndChangeState();
      switch (this._tacticState)
      {
        case TacticBreachWalls.TacticState.AssaultUnderRangedCover:
          List<ArcherPosition> currentArcherPositions = this.DetermineCurrentArcherPositions(currentLanes);
          if (flag || this.IsTacticReapplyNeeded)
          {
            this._cachedUsedArcherPositions = currentArcherPositions;
            this.WellRoundedAssault(ref currentLanes, ref currentArcherPositions);
            this.IsTacticReapplyNeeded = false;
          }
          else if (this._cachedUsedArcherPositions.Count != currentArcherPositions.Count)
            this.MergeFormationsIfArcherPositionsBecameUnavailable(ref currentArcherPositions);
          this.BalanceAssaultLanes(this._meleeFormations.Where<Formation>((Func<Formation, bool>) (mf =>
          {
            if (!mf.IsAIControlled || !mf.IsAITickedAfterSplit)
              return false;
            return mf.AI.ActiveBehavior is BehaviorUseSiegeMachines || mf.AI.ActiveBehavior is BehaviorWaitForLadders;
          })).ToList<Formation>());
          break;
        case TacticBreachWalls.TacticState.TotalAttack:
          if (flag || this.IsTacticReapplyNeeded)
          {
            this.AllInAssault();
            this.IsTacticReapplyNeeded = false;
          }
          this.BalanceAssaultLanes(this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f =>
          {
            if (f.CountOfUnits <= 0 || !f.IsAIControlled || !f.IsAITickedAfterSplit)
              return false;
            return f.AI.ActiveBehavior is BehaviorUseSiegeMachines || f.AI.ActiveBehavior is BehaviorWaitForLadders;
          })).ToList<Formation>());
          break;
        case TacticBreachWalls.TacticState.Retreating:
          if (flag || this.IsTacticReapplyNeeded)
          {
            this.StartTacticalRetreat();
            this.IsTacticReapplyNeeded = false;
            break;
          }
          break;
      }
      this._teamAISiegeAttacker.SetAreLaddersReady(currentLanes.Count<SiegeLane>((Func<SiegeLane, bool>) (l => l.IsBreach)) > 1 || !currentLanes.Any<SiegeLane>((Func<SiegeLane, bool>) (l => l.PrimarySiegeWeapons.Any<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw.HoldLadders)))) || currentLanes.Any<SiegeLane>((Func<SiegeLane, bool>) (l => l.PrimarySiegeWeapons.Any<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw.SendLadders)))));
      this.CheckAndSetAvailableFormationsChanged();
      base.TickOccasionally();
    }

    protected internal override float GetTacticWeight() => 10f;

    private class BreachWallsProgressIndicators
    {
      public float StartingPowerRatio;
      public int InitialLaneCount;
      public int InitialUnitCount;
      private readonly float _insideFormationEffect;
      private readonly float _openLaneEffect;
      private readonly float _existingLaneEffect;

      public BreachWallsProgressIndicators(Team team, List<SiegeLane> lanes)
      {
        this.StartingPowerRatio = team.QuerySystem.RemainingPowerRatio;
        this.InitialUnitCount = team.QuerySystem.AllyUnitCount;
        this.InitialLaneCount = this.InitialUnitCount > 100 ? lanes.Count : 1;
        this._insideFormationEffect = 1f / (float) this.InitialLaneCount;
        this._openLaneEffect = 0.7f / (float) this.InitialLaneCount;
        this._existingLaneEffect = 0.4f / (float) this.InitialLaneCount;
      }

      public float GetRetreatThresholdRatio(List<SiegeLane> lanes, int insideFormationCount)
      {
        float num1 = 1f - (float) insideFormationCount * this._insideFormationEffect;
        int num2 = lanes.Count<SiegeLane>((Func<SiegeLane, bool>) (l => !l.IsOpen));
        int num3 = lanes.Count - num2 - insideFormationCount;
        if (num3 > 0)
          num1 -= (float) num3 * this._openLaneEffect;
        return num1 - (float) num2 * this._existingLaneEffect;
      }
    }

    private enum TacticState
    {
      Unset,
      AssaultUnderRangedCover,
      TotalAttack,
      Retreating,
    }
  }
}
