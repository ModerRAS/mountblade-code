// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticDefendCastle
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TacticDefendCastle : TacticComponent
  {
    private const float InfantrySallyOutEffectiveness = 1f;
    private const float RangedSallyOutEffectiveness = 0.3f;
    private const float CavalrySallyOutEffectiveness = 2f;
    private const float SallyOutDecisionPenalty = 3f;
    private readonly TeamAISiegeDefender _teamAISiegeDefender;
    private readonly List<MissionObject> _castleKeyPositions;
    private readonly List<SiegeLane> _lanes;
    private float _startingPowerRatio;
    private float _meleeDefenderPower;
    private float _laneThreatCapacity;
    private float _initialLaneDefensePowerRatio = -1f;
    private bool _isSallyingOut;
    private bool _areRangedNeededForLaneDefense;
    private bool _isTacticFailing;
    private bool _areSiegeWeaponsAbandoned;
    private Formation _invadingEnemyFormation;
    private Formation _emergencyFormation;
    private List<Formation> _meleeFormations;
    private List<Formation> _laneDefendingFormations = new List<Formation>();
    private List<Formation> _rangedFormations;
    private int _laneCount;

    public TacticDefendCastle.TacticState CurrentTacticState { get; private set; }

    public TacticDefendCastle(Team team)
      : base(team)
    {
      Mission current = Mission.Current;
      this._castleKeyPositions = new List<MissionObject>();
      IEnumerable<CastleGate> allWithType1 = current.ActiveMissionObjects.FindAllWithType<CastleGate>();
      IEnumerable<WallSegment> allWithType2 = current.ActiveMissionObjects.FindAllWithType<WallSegment>();
      allWithType1.FirstOrDefault<CastleGate>();
      this._castleKeyPositions.AddRange((IEnumerable<MissionObject>) allWithType1);
      this._castleKeyPositions.AddRange((IEnumerable<MissionObject>) allWithType2);
      this._teamAISiegeDefender = team.TeamAI as TeamAISiegeDefender;
      this._lanes = TeamAISiegeComponent.SiegeLanes;
    }

    private static float GetFormationSallyOutPower(Formation formation)
    {
      if (formation.CountOfUnits <= 0)
        return 0.0f;
      float typeMultiplier = formation.PhysicalClass.IsMeleeCavalry() ? 2f : (formation.PhysicalClass.IsRanged() ? 0.3f : 1f);
      float sum = 0.0f;
      formation.ApplyActionOnEachUnit((Action<Agent>) (agent => sum += agent.CharacterPowerCached * typeMultiplier));
      return sum;
    }

    private Formation GetStrongestSallyOutFormation()
    {
      float num = 0.0f;
      Formation sallyOutFormation = (Formation) null;
      foreach (Formation meleeFormation in this._meleeFormations)
      {
        if (TeamAISiegeComponent.IsFormationInsideCastle(meleeFormation, true))
        {
          float formationSallyOutPower = TacticDefendCastle.GetFormationSallyOutPower(meleeFormation);
          if ((double) formationSallyOutPower > (double) num)
          {
            sallyOutFormation = meleeFormation;
            num = formationSallyOutPower;
          }
        }
      }
      return sallyOutFormation;
    }

    private bool MustRetreatToCastle() => false;

    private bool IsSallyOutApplicable()
    {
      float num1 = this.FormationsIncludingEmpty.Sum<Formation>((Func<Formation, float>) (formation => TacticDefendCastle.GetFormationSallyOutPower(formation)));
      float num2 = 0.0f;
      foreach (Team team in (List<Team>) Mission.Current.Teams)
      {
        if (team.Side.GetOppositeSide() == BattleSideEnum.Defender)
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation.CountOfUnits > 0)
              num2 += TacticDefendCastle.GetFormationSallyOutPower(formation);
          }
        }
      }
      return (double) num1 > (double) num2 * 3.0 && (double) this.Team.QuerySystem.RemainingPowerRatio / (double) this._startingPowerRatio > 3.0;
    }

    private void BalanceLaneDefenders(List<Formation> defenderFormations, out bool transferOccurred)
    {
      transferOccurred = false;
      int length = 3;
      SiegeLane[] source1 = new SiegeLane[length];
      for (int i = 0; i < length; i++)
        source1[i] = this._lanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (l => l.LaneSide == (FormationAI.BehaviorSide) i));
      float[] source2 = new float[length];
      for (int index = 0; index < source1.Length; ++index)
      {
        SiegeLane siegeLane = source1[index];
        source2[index] = siegeLane == null || siegeLane.GetDefenseState() == SiegeLane.LaneDefenseStates.Token ? 0.0f : siegeLane.CalculateLaneCapacity();
      }
      float num1 = ((IEnumerable<float>) source2).Sum();
      float[] source3 = new float[length];
      for (int index = 0; index < length; ++index)
        source3[index] = source2[index] / num1;
      int num2 = ((IEnumerable<SiegeLane>) source1).Count<SiegeLane>((Func<SiegeLane, bool>) (l => l != null && l.GetDefenseState() == SiegeLane.LaneDefenseStates.Token));
      int num3 = 15;
      int num4 = num2 * 15;
      int num5 = defenderFormations.Sum<Formation>((Func<Formation, int>) (f => f.CountOfUnitsWithoutDetachedOnes));
      int num6 = num5 - num4;
      IEnumerable<float> source4 = ((IEnumerable<float>) source3).Where<float>((Func<float, bool>) (ltp => (double) ltp > 0.0));
      if (source4.Any<float>() && (double) num6 * (double) source4.Min() <= (double) num3)
      {
        num6 = num5;
        num3 = MathF.Max((int) ((double) num6 * 0.10000000149011612), 1);
      }
      int[] numArray1 = new int[length];
      for (int index = 0; index < length; ++index)
      {
        int num7 = (int) ((double) source3[index] * (double) num6);
        numArray1[index] = num7 == 0 ? num3 : num7;
      }
      int[] numArray2 = new int[length];
      foreach (Formation defenderFormation in defenderFormations)
      {
        int side = (int) defenderFormation.AI.Side;
        numArray2[side] = defenderFormation.UnitsWithoutLooseDetachedOnes.Count - numArray1[side];
      }
      int num8 = MathF.Max((int) ((double) defenderFormations.Sum<Formation>((Func<Formation, int>) (df => df.CountOfUnits)) * 0.20000000298023224), 1);
      foreach (Formation defenderFormation in defenderFormations)
      {
        Formation receiverDefenderFormation = defenderFormation;
        int side1 = (int) receiverDefenderFormation.AI.Side;
        if (numArray2[side1] < -num8)
        {
          foreach (Formation formation in defenderFormations.Where<Formation>((Func<Formation, bool>) (df => df != receiverDefenderFormation)))
          {
            int side2 = (int) formation.AI.Side;
            if (numArray2[side2] > num8)
            {
              int unitCount = MathF.Min(-numArray2[side1], numArray2[side2]);
              numArray2[side1] += unitCount;
              numArray2[side2] -= unitCount;
              formation.TransferUnits(receiverDefenderFormation, unitCount);
              transferOccurred = true;
              if (numArray2[side1] == 0)
                break;
            }
          }
          if (!transferOccurred)
            break;
        }
      }
    }

    private void ArcherShiftAround(List<Formation> p_RangedFormations)
    {
      List<Formation> list = p_RangedFormations.Where<Formation>((Func<Formation, bool>) (rf => rf.AI.ActiveBehavior is BehaviorShootFromCastleWalls)).ToList<Formation>();
      if (list.Count < 2)
        return;
      float smallerFormationUnitPercentage = 0.1f;
      float mediumFormationUnitPercentage = 0.2f;
      float largerFormationUnitPercentage = 0.4f;
      float num1 = list.Sum<Formation>((Func<Formation, float>) (f =>
      {
        if ((f.AI.ActiveBehavior as BehaviorShootFromCastleWalls).ArcherPosition.HasTag("many"))
          return largerFormationUnitPercentage;
        return !(f.AI.ActiveBehavior as BehaviorShootFromCastleWalls).ArcherPosition.HasTag("few") ? mediumFormationUnitPercentage : smallerFormationUnitPercentage;
      }));
      smallerFormationUnitPercentage /= num1;
      mediumFormationUnitPercentage /= num1;
      largerFormationUnitPercentage /= num1;
      int num2 = list.Sum<Formation>((Func<Formation, int>) (f => f.CountOfUnitsWithoutDetachedOnes));
      int smallFormationCount = MathF.Max((int) ((double) num2 * (double) smallerFormationUnitPercentage), 1);
      int mediumFormationCount = MathF.Max((int) ((double) num2 * (double) mediumFormationUnitPercentage), 1);
      int largeFormationCount = MathF.Max((int) ((double) num2 * (double) largerFormationUnitPercentage), 1);
      int num3 = MathF.Max((int) ((double) num2 * 0.10000000149011612), 1);
      using (List<Formation>.Enumerator enumerator = list.GetEnumerator())
      {
label_7:
        while (enumerator.MoveNext())
        {
          Formation current = enumerator.Current;
          int num4 = (current.AI.ActiveBehavior as BehaviorShootFromCastleWalls).ArcherPosition.HasTag("many") ? largeFormationCount : ((current.AI.ActiveBehavior as BehaviorShootFromCastleWalls).ArcherPosition.HasTag("few") ? smallFormationCount : mediumFormationCount);
          int num5 = 0;
          while (true)
          {
            if (num4 - current.CountOfUnitsWithoutDetachedOnes > num3 && list.Any<Formation>((Func<Formation, bool>) (rf => rf.CountOfUnitsWithoutDetachedOnes > ((rf.AI.ActiveBehavior as BehaviorShootFromCastleWalls).ArcherPosition.HasTag("many") ? largeFormationCount : ((rf.AI.ActiveBehavior as BehaviorShootFromCastleWalls).ArcherPosition.HasTag("few") ? smallFormationCount : mediumFormationCount)))) && num5 < list.Count)
            {
              int a = num4 - current.CountOfUnitsWithoutDetachedOnes;
              Formation formation = list.MaxBy<Formation, int>((Func<Formation, int>) (rf => rf.CountOfUnitsWithoutDetachedOnes - ((rf.AI.ActiveBehavior as BehaviorShootFromCastleWalls).ArcherPosition.HasTag("many") ? largeFormationCount : ((rf.AI.ActiveBehavior as BehaviorShootFromCastleWalls).ArcherPosition.HasTag("few") ? smallFormationCount : mediumFormationCount))));
              int unitCount = MathF.Min(a, formation.CountOfUnitsWithoutDetachedOnes - ((formation.AI.ActiveBehavior as BehaviorShootFromCastleWalls).ArcherPosition.HasTag("many") ? largeFormationCount : ((formation.AI.ActiveBehavior as BehaviorShootFromCastleWalls).ArcherPosition.HasTag("few") ? smallFormationCount : mediumFormationCount)));
              formation.TransferUnits(current, unitCount);
              ++num5;
            }
            else
              goto label_7;
          }
        }
      }
    }

    protected override bool CheckAndSetAvailableFormationsChanged()
    {
      bool flag1 = false;
      if (this._laneCount != this._lanes.Count)
      {
        this._laneCount = this._lanes.Count;
        flag1 = true;
      }
      int controlledFormationCount = this.Team.GetAIControlledFormationCount();
      bool flag2 = controlledFormationCount != this._AIControlledFormationCount;
      if (flag2)
      {
        this._AIControlledFormationCount = controlledFormationCount;
        this.IsTacticReapplyNeeded = true;
      }
      return flag1 | flag2;
    }

    private int GetRequiredMeleeDefenderCount()
    {
      return this._lanes.Count<SiegeLane>((Func<SiegeLane, bool>) (l => l.IsOpen || l.PrimarySiegeWeapons.Any<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (lsw => lsw is SiegeLadder)) || l.PrimarySiegeWeapons.Any<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw.HasCompletedAction() || (psw as SiegeWeapon).IsUsed))));
    }

    protected override void ManageFormationCounts()
    {
      if ((double) this._startingPowerRatio == 0.0)
        this._startingPowerRatio = this.Team.QuerySystem.RemainingPowerRatio;
      switch (this.CurrentTacticState)
      {
        case TacticDefendCastle.TacticState.ProperDefense:
          int meleeDefenderCount1 = this.GetRequiredMeleeDefenderCount();
          int rangedCount1 = MathF.Min(this._teamAISiegeDefender.ArcherPositions.Count, 8 - meleeDefenderCount1);
          this.ManageFormationCounts(meleeDefenderCount1, rangedCount1, 0, 0);
          this._meleeFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)).ToList<Formation>();
          this._rangedFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation)).ToList<Formation>();
          break;
        case TacticDefendCastle.TacticState.DesperateDefense:
          int formationCount = this.Team.GetFormationCount();
          int controlledFormationCount = this.Team.GetAIControlledFormationCount();
          int num1 = formationCount - controlledFormationCount;
          int meleeDefenderCount2 = this.GetRequiredMeleeDefenderCount();
          if (controlledFormationCount > 0 && formationCount != meleeDefenderCount2 && num1 <= meleeDefenderCount2)
          {
            List<Formation> list = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.IsAIControlled)).ToList<Formation>();
            Formation biggestFormation = list.MaxBy<Formation, int>((Func<Formation, int>) (f => f.CountOfUnitsWithoutDetachedOnes));
            foreach (Formation formation in list.Where<Formation>((Func<Formation, bool>) (f => f != biggestFormation)))
              formation.TransferUnits(biggestFormation, formation.CountOfUnits);
            if (controlledFormationCount > 1)
            {
              biggestFormation.Split(controlledFormationCount);
              break;
            }
            break;
          }
          break;
        case TacticDefendCastle.TacticState.SallyOut:
          int infantryCount = 1;
          int rangedCount2 = MathF.Min(this._teamAISiegeDefender.ArcherPositions.Count, 8 - infantryCount);
          this.ManageFormationCounts(infantryCount, rangedCount2, 0, 0);
          this._meleeFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation)).ToList<Formation>();
          this._rangedFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation)).ToList<Formation>();
          break;
      }
      if ((double) this._initialLaneDefensePowerRatio != -1.0)
        return;
      this._meleeDefenderPower = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0)).Sum<Formation>((Func<Formation, float>) (f => f.QuerySystem.FormationMeleeFightingPower));
      this._laneThreatCapacity = this._lanes.Sum<SiegeLane>((Func<SiegeLane, float>) (l => l.CalculateLaneCapacity()));
      float b = 0.0f;
      foreach (Team team in (List<Team>) this.Team.Mission.Teams)
      {
        if (team.IsEnemyOf(this.Team))
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation.CountOfUnits > 0)
              b += formation.QuerySystem.FormationPower;
          }
        }
      }
      int enemyUnitCount = this.Team.QuerySystem.EnemyUnitCount;
      float num2 = enemyUnitCount == 0 ? 0.0f : b / (float) enemyUnitCount;
      this._laneThreatCapacity = MathF.Min(this._lanes.Where<SiegeLane>((Func<SiegeLane, bool>) (l => l.IsOpen || l.PrimarySiegeWeapons.Any<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => !(psw as SiegeWeapon).IsDeactivated)))).Sum<SiegeLane>((Func<SiegeLane, float>) (l => l.CalculateLaneCapacity())) * num2, b);
      this._initialLaneDefensePowerRatio = this._meleeDefenderPower / this._laneThreatCapacity;
    }

    protected override void StopUsingAllMachines()
    {
      base.StopUsingAllMachines();
      this.StopUsingStrategicAreas();
    }

    private void StopUsingStrategicAreas()
    {
      foreach ((IDetachment, DetachmentData) tuple in this.Team.DetachmentManager.Detachments.Where<(IDetachment, DetachmentData)>((Func<(IDetachment, DetachmentData), bool>) (d => d.Item1 is StrategicArea)).ToList<(IDetachment, DetachmentData)>())
        this.Team.DetachmentManager.DestroyDetachment(tuple.Item1);
    }

    private void StartRetreatToKeep()
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

    private void DistributeRangedFormations()
    {
      List<Tuple<Formation, ArcherPosition>> source = this._rangedFormations.CombineWith<Formation, ArcherPosition>((IEnumerable<ArcherPosition>) this._teamAISiegeDefender.ArcherPositions);
      while (source.Count > 0)
      {
        Tuple<Formation, ArcherPosition> tuple = source.MinBy<Tuple<Formation, ArcherPosition>, float>((Func<Tuple<Formation, ArcherPosition>, float>) (c => c.Item1.QuerySystem.MedianPosition.AsVec2.DistanceSquared(c.Item2.Entity.GlobalPosition.AsVec2)));
        Formation bestFormation = tuple.Item1;
        ArcherPosition bestArcherPosition = tuple.Item2;
        bestFormation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(bestFormation);
        bestFormation.AI.SetBehaviorWeight<BehaviorShootFromCastleWalls>(1f);
        bestFormation.AI.GetBehavior<BehaviorShootFromCastleWalls>().ArcherPosition = bestArcherPosition.Entity;
        source.RemoveAll((Predicate<Tuple<Formation, ArcherPosition>>) (c => c.Item1 == bestFormation || c.Item2 == bestArcherPosition));
      }
    }

    private void ManageGatesForSallyingOut()
    {
      if (this._teamAISiegeDefender.InnerGate.IsGateOpen && this._teamAISiegeDefender.OuterGate.IsGateOpen || !this._meleeFormations.Any<Formation>((Func<Formation, bool>) (mf => TeamAISiegeComponent.IsFormationInsideCastle(mf, true))))
        return;
      CastleGate usable = !this._teamAISiegeDefender.InnerGate.IsGateOpen ? this._teamAISiegeDefender.InnerGate : this._teamAISiegeDefender.OuterGate;
      bool flag = false;
      foreach (Formation formation in (List<Formation>) this.FormationsIncludingEmpty)
      {
        if (formation.CountOfUnits != 0 && usable.IsUsedByFormation(formation))
        {
          flag = true;
          break;
        }
      }
      if (flag)
        return;
      Formation sallyOutFormation = this.GetStrongestSallyOutFormation();
      if (sallyOutFormation == null)
        return;
      sallyOutFormation.StartUsingMachine((UsableMachine) usable);
    }

    private void StartSallyOut()
    {
      this.DistributeRangedFormations();
      foreach (Formation meleeFormation in this._meleeFormations)
      {
        meleeFormation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(meleeFormation);
        meleeFormation.AI.SetBehaviorWeight<BehaviorSallyOut>(1000f);
      }
    }

    private void CarryOutDefense(
      List<SiegeLane> defendedLanes,
      List<SiegeLane> lanesToBeRetaken,
      bool isEnemyInside,
      bool doRangedJoinMelee,
      out bool hasTransferOccurred)
    {
      hasTransferOccurred = false;
      List<Formation> formationList1 = new List<Formation>();
      List<Formation> formationList2 = new List<Formation>();
      int neededCount = defendedLanes.Count + MathF.Max(lanesToBeRetaken.Count, isEnemyInside ? 1 : 0);
      List<Formation> formationList3 = new List<Formation>();
      foreach (Formation meleeFormation in this._meleeFormations)
      {
        if (meleeFormation.CountOfUnitsWithoutDetachedOnes > 0)
          formationList3.Add(meleeFormation);
      }
      if (formationList3.Count <= 0)
      {
        foreach (Formation formation in (List<Formation>) this.FormationsIncludingEmpty)
        {
          if (formation.CountOfUnits > 0 && formation.QuerySystem.IsMeleeFormation)
            formationList3.Add(formation);
        }
      }
      int count1 = formationList3.Count;
      List<ArcherPosition> first1 = new List<ArcherPosition>();
      foreach (ArcherPosition archerPosition in this._teamAISiegeDefender.ArcherPositions)
      {
        foreach (SiegeLane lane in this._lanes)
        {
          if (archerPosition.IsArcherPositionRelatedToSide(lane.LaneSide) && lane.LaneState > SiegeLane.LaneStateEnum.Used && lane.LaneState < SiegeLane.LaneStateEnum.Conceited)
            first1.Add(archerPosition);
        }
      }
      List<Formation> first2 = new List<Formation>();
      foreach (Formation rangedFormation in this._rangedFormations)
      {
        if (rangedFormation.CountOfUnitsWithoutDetachedOnes > 0 && !formationList3.Contains(rangedFormation))
          first2.Add(rangedFormation);
      }
      if (first2.Count <= 0)
      {
        foreach (Formation formation in (List<Formation>) this.FormationsIncludingEmpty)
        {
          if (formation.CountOfUnits > 0 && formation.QuerySystem.IsRangedFormation && !formationList3.Contains(formation))
            first2.Add(formation);
        }
      }
      foreach (Formation formation in (List<Formation>) this.FormationsIncludingEmpty)
      {
        if (formation.CountOfUnits != 0 && !formationList3.Contains(formation) && !first2.Contains(formation) && formation.CountOfUnitsWithoutDetachedOnes > 0)
        {
          if (formation.QuerySystem.IsRangedFormation)
          {
            first2.Add(formation);
          }
          else
          {
            formationList3.Add(formation);
            ++count1;
          }
        }
      }
      List<ArcherPosition> archerPositionList = new List<ArcherPosition>();
      if (doRangedJoinMelee)
      {
        foreach (ArcherPosition archerPosition in first1)
        {
          foreach (SiegeLane lane in this._lanes)
          {
            if (lane.LaneState > SiegeLane.LaneStateEnum.Unused && lane.IsUnderAttack() && archerPosition.IsArcherPositionRelatedToSide(lane.LaneSide))
              archerPositionList.Add(archerPosition);
          }
        }
      }
      else
      {
        foreach (ArcherPosition archerPosition in first1)
        {
          bool flag1 = false;
          foreach (SiegeLane lane in this._lanes)
          {
            if (lane.LaneSide == archerPosition.GetArcherPositionClosestSide() && lane.LaneState >= SiegeLane.LaneStateEnum.Conceited)
            {
              archerPositionList.Add(archerPosition);
              flag1 = true;
              break;
            }
          }
          if (!flag1)
          {
            bool flag2 = false;
            foreach (SiegeLane lane in this._lanes)
            {
              if (archerPosition.IsArcherPositionRelatedToSide(lane.LaneSide) && lane.LaneState >= SiegeLane.LaneStateEnum.Conceited)
              {
                archerPositionList.Add(archerPosition);
                flag2 = true;
                break;
              }
            }
            if (!flag2 && this._lanes.Count > 0)
            {
              int num1 = int.MaxValue;
              SiegeLane siegeLane = (SiegeLane) null;
              foreach (SiegeLane lane in this._lanes)
              {
                int num2 = SiegeQuerySystem.SideDistance(archerPosition.ConnectedSides, 1 << (int) (lane.LaneSide & (FormationAI.BehaviorSide) 31));
                if (num2 < num1)
                {
                  siegeLane = lane;
                  num1 = num2;
                }
              }
              if (siegeLane.LaneState >= SiegeLane.LaneStateEnum.Conceited)
              {
                archerPositionList.Add(archerPosition);
                break;
              }
            }
          }
        }
      }
      List<Formation> formationList4 = new List<Formation>();
      foreach (ArcherPosition archerPosition in archerPositionList)
      {
        Formation assignedFormation = archerPosition.GetLastAssignedFormation(this.Team.TeamIndex);
        if (assignedFormation != null && first2.Contains(assignedFormation))
          formationList4.Add(assignedFormation);
      }
      int count2 = formationList4.Count;
      if (count1 > neededCount)
      {
        List<Formation> source = new List<Formation>();
        foreach (SiegeLane defendedLane in defendedLanes)
        {
          if (defendedLane.GetLastAssignedFormation(this.Team.TeamIndex) != null)
            source.Add(defendedLane.GetLastAssignedFormation(this.Team.TeamIndex));
        }
        foreach (SiegeLane siegeLane in lanesToBeRetaken)
        {
          if (siegeLane.GetLastAssignedFormation(this.Team.TeamIndex) != null)
            source.Add(siegeLane.GetLastAssignedFormation(this.Team.TeamIndex));
        }
        if (source.Count > 0)
        {
          Formation formation1 = (Formation) null;
          foreach (Formation formation2 in formationList3)
          {
            Formation excessFormation = formation2;
            if (excessFormation.IsAIControlled && !source.Contains(excessFormation))
            {
              Formation target1 = source.FirstOrDefault<Formation>((Func<Formation, bool>) (aff => aff.AI.Side == excessFormation.AI.Side));
              if (target1 != null)
              {
                excessFormation.TransferUnits(target1, excessFormation.CountOfUnits);
                hasTransferOccurred = true;
                formation1 = excessFormation;
                break;
              }
              float num = (float) (source.Sum<Formation>((Func<Formation, int>) (aff => aff.CountOfUnits)) + excessFormation.CountOfUnits) / (float) source.Count;
              foreach (Formation target2 in source)
              {
                int b = (int) Math.Ceiling((double) num - (double) target2.CountOfUnits);
                int unitCount = MathF.Min(excessFormation.CountOfUnits, b);
                if (unitCount > 0)
                  excessFormation.TransferUnits(target2, unitCount);
              }
              hasTransferOccurred = true;
              formation1 = excessFormation;
              break;
            }
          }
          if (formation1 != null)
            formationList3.Remove(formation1);
        }
        else
        {
          formationList3 = this.ConsolidateFormations(formationList3, neededCount);
          hasTransferOccurred = true;
        }
        count1 = formationList3.Count;
      }
      List<Formation> list1 = formationList3.Concat<Formation>((IEnumerable<Formation>) formationList4).ToList<Formation>();
      if (list1.Count <= 0)
      {
        list1 = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0)).ToList<Formation>();
        first2.Clear();
      }
      if (count1 + count2 < neededCount)
      {
        List<Formation> source = new List<Formation>();
        foreach (Formation formation in list1)
        {
          if (formation.IsSplittableByAI)
            source.Add(formation);
        }
        if (source.Count > 0)
        {
          int num = 0;
          while (count1 + count2 + num < neededCount && !hasTransferOccurred)
          {
            Formation largestFormation = source.MaxBy<Formation, int>((Func<Formation, int>) (rf => rf.UnitsWithoutLooseDetachedOnes.Count));
            List<Formation> list2 = largestFormation.Split().ToList<Formation>();
            hasTransferOccurred = true;
            if (list2.Count >= 2)
            {
              ++num;
              Formation formation = list2.FirstOrDefault<Formation>((Func<Formation, bool>) (rf => rf != largestFormation));
              source.Add(formation);
              list1.Add(formation);
            }
            else
              break;
          }
        }
      }
      List<SiegeLane> second1 = new List<SiegeLane>();
      List<Formation> second2 = new List<Formation>();
      foreach (SiegeLane defendedLane in defendedLanes)
      {
        SiegeLane toBeDefendedLane = defendedLane;
        Formation formation = list1.FirstOrDefault<Formation>((Func<Formation, bool>) (affml => affml == toBeDefendedLane.GetLastAssignedFormation(this.Team.TeamIndex)));
        if (formation != null)
        {
          formation.AI.Side = toBeDefendedLane.LaneSide;
          formation.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(formation);
          formation.AI.SetBehaviorWeight<BehaviorDefendCastleKeyPosition>(1f);
          toBeDefendedLane.SetLastAssignedFormation(this.Team.TeamIndex, formation);
          list1.Remove(formation);
          second1.Add(toBeDefendedLane);
          second2.Add(formation);
          formationList1.Add(formation);
        }
      }
      List<SiegeLane> list3 = defendedLanes.Except<SiegeLane>((IEnumerable<SiegeLane>) second1).ToList<SiegeLane>();
      List<SiegeLane> second3 = new List<SiegeLane>();
      foreach (SiegeLane siegeLane in lanesToBeRetaken)
      {
        SiegeLane toBeRetakenLane = siegeLane;
        Formation formation = list1.FirstOrDefault<Formation>((Func<Formation, bool>) (affml => affml == toBeRetakenLane.GetLastAssignedFormation(this.Team.TeamIndex)));
        if (formation != null)
        {
          formation.AI.Side = toBeRetakenLane.LaneSide;
          formation.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(formation);
          formation.AI.SetBehaviorWeight<BehaviorRetakeCastleKeyPosition>(1f);
          toBeRetakenLane.SetLastAssignedFormation(this.Team.TeamIndex, formation);
          list1.Remove(formation);
          second3.Add(toBeRetakenLane);
          second2.Add(formation);
          formationList1.Add(formation);
          second1.Add(toBeRetakenLane);
        }
      }
      bool flag3 = false;
      while (list3.Count > 0)
      {
        SiegeLane firstToDefend = list3.MaxBy<SiegeLane, float>((Func<SiegeLane, float>) (tbdl => tbdl.CalculateLaneCapacity()));
        Formation formation3 = list1.FirstOrDefault<Formation>((Func<Formation, bool>) (affml => affml.AI.Side == firstToDefend.LaneSide));
        if (formation3 != null)
        {
          formation3.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(formation3);
          formation3.AI.SetBehaviorWeight<BehaviorDefendCastleKeyPosition>(1f);
          firstToDefend.SetLastAssignedFormation(this.Team.TeamIndex, formation3);
          list1.Remove(formation3);
          second2.Add(formation3);
          formationList1.Add(formation3);
          second1.Add(firstToDefend);
        }
        else if (list1.Count > 0)
        {
          Formation formation4 = list1.MaxBy<Formation, float>((Func<Formation, float>) (f => f.QuerySystem.FormationPower));
          formation4.AI.Side = firstToDefend.LaneSide;
          formation4.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(formation4);
          formation4.AI.SetBehaviorWeight<BehaviorDefendCastleKeyPosition>(1f);
          firstToDefend.SetLastAssignedFormation(this.Team.TeamIndex, formation4);
          list1.Remove(formation4);
          second2.Add(formation4);
          formationList1.Add(formation4);
          second1.Add(firstToDefend);
        }
        else
        {
          flag3 = true;
          list3.Clear();
          break;
        }
        list3.Remove(firstToDefend);
      }
      List<SiegeLane> siegeLaneList = flag3 ? new List<SiegeLane>() : lanesToBeRetaken.Except<SiegeLane>((IEnumerable<SiegeLane>) second3).ToList<SiegeLane>();
      while (siegeLaneList.Count > 0 && list1.Count > 0)
      {
        SiegeLane firstToRetake = lanesToBeRetaken.MaxBy<SiegeLane, float>((Func<SiegeLane, float>) (ltbr => ltbr.CalculateLaneCapacity()));
        Formation formation5 = list1.FirstOrDefault<Formation>((Func<Formation, bool>) (affml => affml.AI.Side == firstToRetake.LaneSide));
        if (formation5 != null)
        {
          formation5.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(formation5);
          formation5.AI.SetBehaviorWeight<BehaviorRetakeCastleKeyPosition>(1f);
          firstToRetake.SetLastAssignedFormation(this.Team.TeamIndex, formation5);
          list1.Remove(formation5);
          second2.Add(formation5);
          formationList1.Add(formation5);
          second1.Add(firstToRetake);
        }
        else if (list1.Count > 0)
        {
          Formation formation6 = list1.MaxBy<Formation, float>((Func<Formation, float>) (f => f.QuerySystem.FormationPower));
          formation6.AI.Side = firstToRetake.LaneSide;
          formation6.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(formation6);
          formation6.AI.SetBehaviorWeight<BehaviorRetakeCastleKeyPosition>(1f);
          firstToRetake.SetLastAssignedFormation(this.Team.TeamIndex, formation6);
          list1.Remove(formation6);
          second2.Add(formation6);
          formationList1.Add(formation6);
          second1.Add(firstToRetake);
        }
        else
          break;
        siegeLaneList.Remove(firstToRetake);
      }
      Formation formation7 = (Formation) null;
      if (isEnemyInside && list1.Count > 0)
      {
        Formation f = this._emergencyFormation == null || !list1.Contains(this._emergencyFormation) ? list1.MaxBy<Formation, float>((Func<Formation, float>) (affml => affml.QuerySystem.FormationPower)) : this._emergencyFormation;
        f.AI.Side = FormationAI.BehaviorSide.BehaviorSideNotSet;
        f.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(f);
        f.AI.SetBehaviorWeight<BehaviorEliminateEnemyInsideCastle>(1f);
        list1.Remove(f);
        second2.Add(f);
        formationList1.Add(f);
        formation7 = f;
      }
      IEnumerable<Formation> second4 = formationList4.Except<Formation>((IEnumerable<Formation>) second2);
      if (!hasTransferOccurred)
      {
        using (IEnumerator<Formation> enumerator = second4.GetEnumerator())
        {
          if (enumerator.MoveNext())
          {
            Formation rangedFormation = enumerator.Current;
            ArcherPosition archerPosition = archerPositionList.FirstOrDefault<ArcherPosition>((Func<ArcherPosition, bool>) (aptba => aptba.GetLastAssignedFormation(this.Team.TeamIndex) == rangedFormation));
            List<SiegeLane> source1 = new List<SiegeLane>();
            foreach (SiegeLane siegeLane in defendedLanes.Union<SiegeLane>((IEnumerable<SiegeLane>) lanesToBeRetaken))
            {
              if (siegeLane.GetLastAssignedFormation(this.Team.TeamIndex) != null)
                source1.Add(siegeLane);
            }
            bool flag4 = source1.Count > 0;
            SiegeLane siegeLane1 = (SiegeLane) null;
            if (archerPosition == null)
            {
              if (flag4)
                siegeLane1 = source1.MaxBy<SiegeLane, SiegeLane.LaneStateEnum>((Func<SiegeLane, SiegeLane.LaneStateEnum>) (arl => arl.LaneState));
            }
            else if (flag4)
            {
              List<SiegeLane> source2 = new List<SiegeLane>();
              foreach (SiegeLane siegeLane2 in source1)
              {
                if (archerPosition.IsArcherPositionRelatedToSide(siegeLane2.LaneSide))
                  source2.Add(siegeLane2);
              }
              siegeLane1 = source2.Count <= 0 ? source1.MaxBy<SiegeLane, SiegeLane.LaneStateEnum>((Func<SiegeLane, SiegeLane.LaneStateEnum>) (arl => arl.LaneState)) : source2.MaxBy<SiegeLane, SiegeLane.LaneStateEnum>((Func<SiegeLane, SiegeLane.LaneStateEnum>) (rl => rl.LaneState));
            }
            Formation target = siegeLane1 != null ? siegeLane1.GetLastAssignedFormation(this.Team.TeamIndex) : formation7;
            rangedFormation.TransferUnits(target, rangedFormation.CountOfUnits);
            hasTransferOccurred = true;
          }
        }
      }
      List<ArcherPosition> list4 = first1.Except<ArcherPosition>((IEnumerable<ArcherPosition>) archerPositionList).ToList<ArcherPosition>();
      List<Formation> formationList5 = first2.Except<Formation>((IEnumerable<Formation>) second2).Except<Formation>(second4).ToList<Formation>();
      List<ArcherPosition> second5 = new List<ArcherPosition>();
      if (formationList5.Count > list4.Count)
      {
        if (list4.Count > 0 && !hasTransferOccurred)
        {
          formationList5 = this.ConsolidateFormations(formationList5, list4.Count);
          hasTransferOccurred = true;
        }
      }
      else if (formationList5.Count < list4.Count && formationList5.Count > 0 && !hasTransferOccurred)
      {
        int num = list4.Count - formationList5.Count;
        Formation formation8 = formationList5.MaxBy<Formation, int>((Func<Formation, int>) (rrf => rrf.CountOfUnits));
        List<Formation> list5 = formation8.Split(num + 1).ToList<Formation>();
        list5.Remove(formation8);
        hasTransferOccurred = true;
        formationList5.AddRange((IEnumerable<Formation>) list5);
      }
      foreach (ArcherPosition archerPosition in list4)
      {
        ArcherPosition remainingArcherPosition = archerPosition;
        if (remainingArcherPosition.GetLastAssignedFormation(this.Team.TeamIndex) != null)
        {
          if (formationList5.Contains(remainingArcherPosition.GetLastAssignedFormation(this.Team.TeamIndex)))
          {
            Formation assignedFormation = remainingArcherPosition.GetLastAssignedFormation(this.Team.TeamIndex);
            assignedFormation.AI.Side = remainingArcherPosition.GetArcherPositionClosestSide();
            assignedFormation.AI.ResetBehaviorWeights();
            TacticComponent.SetDefaultBehaviorWeights(assignedFormation);
            assignedFormation.AI.SetBehaviorWeight<BehaviorShootFromCastleWalls>(1f).ArcherPosition = remainingArcherPosition.Entity;
            remainingArcherPosition.SetLastAssignedFormation(this.Team.TeamIndex, assignedFormation);
            formationList5.Remove(assignedFormation);
            second2.Add(remainingArcherPosition.GetLastAssignedFormation(this.Team.TeamIndex));
            formationList2.Add(remainingArcherPosition.GetLastAssignedFormation(this.Team.TeamIndex));
            second5.Add(remainingArcherPosition);
          }
          else
          {
            Formation formation9 = formationList5.FirstOrDefault<Formation>((Func<Formation, bool>) (rrf => remainingArcherPosition.IsArcherPositionRelatedToSide(rrf.AI.Side))) ?? formationList5.FirstOrDefault<Formation>();
            if (formation9 != null)
            {
              formation9.AI.Side = remainingArcherPosition.GetArcherPositionClosestSide();
              formation9.AI.ResetBehaviorWeights();
              TacticComponent.SetDefaultBehaviorWeights(formation9);
              formation9.AI.SetBehaviorWeight<BehaviorShootFromCastleWalls>(1f).ArcherPosition = remainingArcherPosition.Entity;
              remainingArcherPosition.SetLastAssignedFormation(this.Team.TeamIndex, formation9);
              formationList5.Remove(formation9);
              second2.Add(formation9);
              formationList2.Add(formation9);
              second5.Add(remainingArcherPosition);
            }
            else
              break;
          }
        }
      }
      foreach (ArcherPosition archerPosition in list4.Except<ArcherPosition>((IEnumerable<ArcherPosition>) second5).ToList<ArcherPosition>())
      {
        ArcherPosition remainingArcherPosition = archerPosition;
        Formation formation10 = formationList5.FirstOrDefault<Formation>((Func<Formation, bool>) (rrf => remainingArcherPosition.IsArcherPositionRelatedToSide(rrf.AI.Side))) ?? formationList5.FirstOrDefault<Formation>();
        if (formation10 != null)
        {
          formation10.AI.Side = remainingArcherPosition.GetArcherPositionClosestSide();
          formation10.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(formation10);
          formation10.AI.SetBehaviorWeight<BehaviorShootFromCastleWalls>(1f).ArcherPosition = remainingArcherPosition.Entity;
          remainingArcherPosition.SetLastAssignedFormation(this.Team.TeamIndex, formation10);
          formationList5.Remove(formation10);
          second2.Add(formation10);
          formationList2.Add(formation10);
          second5.Add(remainingArcherPosition);
        }
        else
          break;
      }
      this._meleeFormations = formationList1;
      this._laneDefendingFormations = new List<Formation>();
      foreach (Formation formation11 in formationList1)
      {
        if (formation11.AI.Side < FormationAI.BehaviorSide.BehaviorSideNotSet)
          this._laneDefendingFormations.Add(formation11);
      }
      this._rangedFormations = formationList2;
      foreach (SiegeLane siegeLane in this._lanes.Except<SiegeLane>((IEnumerable<SiegeLane>) second1))
        siegeLane.SetLastAssignedFormation(this.Team.TeamIndex, (Formation) null);
      this._emergencyFormation = formation7;
      foreach (ArcherPosition archerPosition in this._teamAISiegeDefender.ArcherPositions.Except<ArcherPosition>((IEnumerable<ArcherPosition>) second5))
        archerPosition.SetLastAssignedFormation(this.Team.TeamIndex, (Formation) null);
    }

    private void CheckAndChangeState()
    {
      if (this.MustRetreatToCastle())
      {
        if (this.CurrentTacticState == TacticDefendCastle.TacticState.RetreatToKeep)
          return;
        this.CurrentTacticState = TacticDefendCastle.TacticState.RetreatToKeep;
        this.ManageFormationCounts();
        this.StartRetreatToKeep();
      }
      else if (this.IsSallyOutApplicable())
      {
        if (this.CurrentTacticState == TacticDefendCastle.TacticState.SallyOut)
        {
          if (this._isSallyingOut)
            return;
          this.ManageGatesForSallyingOut();
          if (!this._teamAISiegeDefender.InnerGate.IsGateOpen || !this._teamAISiegeDefender.OuterGate.IsGateOpen)
            return;
          this.StartSallyOut();
          this._isSallyingOut = true;
        }
        else
          this.CurrentTacticState = TacticDefendCastle.TacticState.SallyOut;
      }
      else
      {
        bool flag1 = false;
        if (this._invadingEnemyFormation != null)
        {
          flag1 = TeamAISiegeComponent.IsFormationInsideCastle(this._invadingEnemyFormation, true);
          if (!flag1)
            this._invadingEnemyFormation = (Formation) null;
        }
        if (!flag1)
        {
          flag1 = TeamAISiegeComponent.QuerySystem.InsideAttackerCount > 30;
          if (flag1)
          {
            Formation formation1 = (Formation) null;
            foreach (Team team in (List<Team>) this.Team.Mission.Teams)
            {
              if (team.IsEnemyOf(this.Team))
              {
                for (int index = 0; index < Math.Min(team.FormationsIncludingSpecialAndEmpty.Count, 8); ++index)
                {
                  Formation formation2 = team.FormationsIncludingSpecialAndEmpty[index];
                  if (formation2.CountOfUnits > 0 && TeamAISiegeComponent.IsFormationInsideCastle(formation2, true))
                  {
                    formation1 = formation2;
                    break;
                  }
                }
              }
            }
            if (formation1 != null)
              this._invadingEnemyFormation = formation1;
            else
              flag1 = false;
          }
        }
        List<SiegeLane> list = this._lanes.Where<SiegeLane>((Func<SiegeLane, bool>) (l => l.LaneState == SiegeLane.LaneStateEnum.Conceited)).ToList<SiegeLane>();
        List<SiegeLane> activeLanes = this._lanes.Except<SiegeLane>((IEnumerable<SiegeLane>) list).Where<SiegeLane>((Func<SiegeLane, bool>) (l => l.GetDefenseState() != 0)).ToList<SiegeLane>();
        if (flag1)
          list.Clear();
        int num1 = list.Count > 0 ? 1 : 0;
        if (num1 == 0 && !flag1 && activeLanes.Count == 0)
          activeLanes = this._lanes.Where<SiegeLane>((Func<SiegeLane, bool>) (l => l.HasGate)).ToList<SiegeLane>();
        if (num1 != 0 && activeLanes.Count > 0)
        {
          SiegeLane siegeLane = list.MinBy<SiegeLane, int>((Func<SiegeLane, int>) (cl => activeLanes.Min<SiegeLane>((Func<SiegeLane, int>) (al => SiegeQuerySystem.SideDistance(1 << (int) (al.LaneSide & (FormationAI.BehaviorSide) 31), 1 << (int) (cl.LaneSide & (FormationAI.BehaviorSide) 31))))));
          list.Clear();
          list.Add(siegeLane);
        }
        int num2 = num1 | (flag1 ? 1 : 0);
        this._meleeFormations = this._meleeFormations.Where<Formation>((Func<Formation, bool>) (mf => mf.CountOfUnits > 0)).ToList<Formation>();
        this._rangedFormations = this._rangedFormations.Where<Formation>((Func<Formation, bool>) (rf => rf.CountOfUnits > 0)).ToList<Formation>();
        int num3 = MathF.Max(this._meleeFormations.Sum<Formation>((Func<Formation, int>) (mf => mf.CountOfUnits)), 1);
        int num4 = MathF.Max(this._rangedFormations.Sum<Formation>((Func<Formation, int>) (rf => rf.CountOfUnits)), 1);
        int num5 = num3 + num4;
        if (!this._areRangedNeededForLaneDefense)
          this._areRangedNeededForLaneDefense = (double) num3 < (double) num5 * 0.33000001311302185;
        int num6 = 0;
        if (num2 != 0)
        {
          float num7 = (float) num3 - this._lanes.Sum<SiegeLane>((Func<SiegeLane, float>) (l => l.CalculateLaneCapacity()));
          num6 = !flag1 ? MathF.Min((int) num7 / 15, list.Count) : ((double) num7 >= 15.0 ? 1 : 0);
        }
        if (activeLanes.Count + list.Count + num6 <= 0)
        {
          this._isTacticFailing = true;
          num6 = 1;
        }
        bool flag2;
        this.CarryOutDefense(activeLanes, list, flag1 && num6 > 0, this._areRangedNeededForLaneDefense, out flag2);
        if (flag2)
          return;
        this.BalanceLaneDefenders(this._laneDefendingFormations.Where<Formation>((Func<Formation, bool>) (ldf => ldf.IsAIControlled && ldf.AI.ActiveBehavior is BehaviorDefendCastleKeyPosition)).ToList<Formation>(), out flag2);
        if (flag2)
          return;
        this.ArcherShiftAround(this._rangedFormations);
      }
    }

    protected internal override void TickOccasionally()
    {
      if (!this.AreFormationsCreated)
        return;
      if (!this._areSiegeWeaponsAbandoned)
      {
        foreach (Team team in (List<Team>) this.Team.Mission.Teams)
        {
          if (team.IsEnemyOf(this.Team))
          {
            if ((double) team.QuerySystem.InsideWallsRatio > 0.5)
            {
              this.StopUsingAllRangedSiegeWeapons();
              this._areSiegeWeaponsAbandoned = true;
              break;
            }
            break;
          }
        }
      }
      this.CheckAndChangeState();
      this.CheckAndSetAvailableFormationsChanged();
      base.TickOccasionally();
    }

    protected internal override float GetTacticWeight() => this._isTacticFailing ? 5f : 10f;

    public enum TacticState
    {
      ProperDefense,
      DesperateDefense,
      RetreatToKeep,
      SallyOut,
    }
  }
}
