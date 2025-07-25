// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class TacticComponent
  {
    public static readonly int MoveHornSoundIndex = SoundEvent.GetEventIdFromString("event:/ui/mission/horns/move");
    public static readonly int AttackHornSoundIndex = SoundEvent.GetEventIdFromString("event:/ui/mission/horns/attack");
    public static readonly int RetreatHornSoundIndex = SoundEvent.GetEventIdFromString("event:/ui/mission/horns/retreat");
    protected int _AIControlledFormationCount;
    protected bool IsTacticReapplyNeeded;
    private bool _areFormationsCreated;
    protected Formation _mainInfantry;
    protected Formation _archers;
    protected Formation _leftCavalry;
    protected Formation _rightCavalry;
    protected Formation _rangedCavalry;
    private float _hornCooldownExpireTime;
    private const float HornCooldownTime = 10f;

    public Team Team { get; protected set; }

    protected MBList<Formation> FormationsIncludingSpecialAndEmpty
    {
      get => this.Team.FormationsIncludingSpecialAndEmpty;
    }

    protected MBList<Formation> FormationsIncludingEmpty => this.Team.FormationsIncludingEmpty;

    protected TacticComponent(Team team) => this.Team = team;

    protected internal virtual void OnCancel()
    {
    }

    protected internal virtual void OnApply() => this.IsTacticReapplyNeeded = true;

    protected internal virtual void TickOccasionally()
    {
      TeamAIComponent teamAi = this.Team.TeamAI;
      if (teamAi.GetIsFirstTacticChosen)
        teamAi.OnTacticAppliedForFirstTime();
      if (!Mission.Current.IsMissionEnding)
        return;
      this.StopUsingAllMachines();
      if (!teamAi.HasStrategicAreas)
        return;
      teamAi.RemoveAllStrategicAreas();
    }

    private static void GetUnitCountByAttackType(
      Formation formation,
      out int unitCount,
      out int rangedCount,
      out int semiRangedCount,
      out int nonRangedCount)
    {
      FormationQuerySystem querySystem = formation.QuerySystem;
      unitCount = formation.CountOfUnits;
      rangedCount = (int) ((double) querySystem.RangedUnitRatio * (double) unitCount);
      semiRangedCount = 0;
      nonRangedCount = unitCount - rangedCount;
    }

    protected static float GetFormationGroupEffectivenessOverOrder(
      IEnumerable<Formation> formationGroup,
      OrderType orderType,
      IOrderable targetObject = null)
    {
      int unitCount;
      int rangedCount;
      int semiRangedCount;
      int nonRangedCount;
      TacticComponent.GetUnitCountByAttackType(formationGroup.FirstOrDefault<Formation>(), out unitCount, out rangedCount, out semiRangedCount, out nonRangedCount);
      switch (orderType)
      {
        case OrderType.Charge:
          return (float) ((double) nonRangedCount * 1.0 + (double) semiRangedCount * 0.89999997615814209 + (double) rangedCount * 0.30000001192092896) / (float) unitCount;
        case OrderType.Use:
          double num1 = ((double) nonRangedCount * 1.0 + (double) semiRangedCount * 0.89999997615814209 + (double) rangedCount * 0.30000001192092896) / (double) unitCount;
          int maxUserCount = (targetObject as UsableMachine).MaxUserCount;
          double num2 = (double) MathF.Min((float) unitCount * 1f / (float) maxUserCount, 1f);
          return (float) (num1 * num2);
        case OrderType.PointDefence:
          double num3 = ((double) nonRangedCount * 0.10000000149011612 + (double) semiRangedCount * 0.30000001192092896 + (double) rangedCount * 1.0) / (double) unitCount;
          int num4 = (targetObject as IPointDefendable).DefencePoints.Count<DefencePoint>() * 3;
          double num5 = (double) MathF.Min((float) unitCount * 1f / (float) num4, 1f);
          return (float) (num3 * num5);
        default:
          return 1f;
      }
    }

    protected static float GetFormationEffectivenessOverOrder(
      Formation formation,
      OrderType orderType,
      IOrderable targetObject = null)
    {
      int unitCount;
      int rangedCount;
      int semiRangedCount;
      int nonRangedCount;
      TacticComponent.GetUnitCountByAttackType(formation, out unitCount, out rangedCount, out semiRangedCount, out nonRangedCount);
      switch (orderType)
      {
        case OrderType.Charge:
          return (float) ((double) nonRangedCount * 1.0 + (double) semiRangedCount * 0.89999997615814209 + (double) rangedCount * 0.30000001192092896) / (float) unitCount;
        case OrderType.Use:
          float minDistanceSquared = float.MaxValue;
          formation.ApplyActionOnEachUnit((Action<Agent>) (agent => minDistanceSquared = MathF.Min(agent.Position.DistanceSquared((targetObject as UsableMachine).GameEntity.GlobalPosition), minDistanceSquared)));
          return 1f / MBMath.ClampFloat(minDistanceSquared, 1f, float.MaxValue);
        case OrderType.PointDefence:
          double num1 = ((double) nonRangedCount * 0.10000000149011612 + (double) semiRangedCount * 0.30000001192092896 + (double) rangedCount * 1.0) / (double) unitCount;
          int num2 = (targetObject as IPointDefendable).DefencePoints.Count<DefencePoint>() * 3;
          double num3 = (double) MathF.Min((float) unitCount * 1f / (float) num2, 1f);
          return (float) (num1 * num3);
        default:
          return 1f;
      }
    }

    [Conditional("DEBUG")]
    protected internal virtual void DebugTick(float dt)
    {
    }

    private static int GetAvailableUnitCount(
      Formation formation,
      IEnumerable<(Formation, UsableMachine, int)> appliedCombinations)
    {
      int num1 = appliedCombinations.Where<(Formation, UsableMachine, int)>((Func<(Formation, UsableMachine, int), bool>) (c => c.Item1 == formation)).Sum<(Formation, UsableMachine, int)>((Func<(Formation, UsableMachine, int), int>) (c => c.Item3));
      int num2 = 0;
      return formation.CountOfUnits - (num1 + num2);
    }

    private static int GetVacantSlotCount(
      UsableMachine weapon,
      IEnumerable<(Formation, UsableMachine, int)> appliedCombinations)
    {
      int num = appliedCombinations.Where<(Formation, UsableMachine, int)>((Func<(Formation, UsableMachine, int), bool>) (c => c.Item2 == weapon)).Sum<(Formation, UsableMachine, int)>((Func<(Formation, UsableMachine, int), int>) (c => c.Item3));
      return weapon.MaxUserCount - num;
    }

    protected List<Formation> ConsolidateFormations(
      List<Formation> formationsToBeConsolidated,
      int neededCount)
    {
      if (formationsToBeConsolidated.Count <= neededCount || neededCount <= 0)
        return formationsToBeConsolidated;
      List<Formation> list1 = formationsToBeConsolidated.OrderByDescending<Formation, int>((Func<Formation, int>) (f => f.CountOfUnits + (!f.IsAIControlled ? 10000 : 0))).ToList<Formation>();
      List<Formation> list2 = list1.Take<Formation>(neededCount).Reverse<Formation>().ToList<Formation>();
      list1.RemoveRange(0, neededCount);
      Queue<Formation> source = new Queue<Formation>((IEnumerable<Formation>) list2);
      List<Formation> second = new List<Formation>();
      foreach (Formation formation in list1)
      {
        if (!formation.IsAIControlled)
        {
          second.Add(formation);
        }
        else
        {
          if (source.IsEmpty<Formation>())
            source = new Queue<Formation>((IEnumerable<Formation>) list2);
          Formation target = source.Dequeue();
          formation.TransferUnits(target, formation.CountOfUnits);
        }
      }
      return list2.Concat<Formation>((IEnumerable<Formation>) second).ToList<Formation>();
    }

    protected static float CalculateNotEngagingTacticalAdvantage(TeamQuerySystem team)
    {
      float a = team.CavalryRatio + team.RangedCavalryRatio;
      float b = team.EnemyCavalryRatio + team.EnemyRangedCavalryRatio;
      return MathF.Pow(MBMath.ClampFloat((double) a > 0.0 ? b / a : 1.5f, 1f, 1.5f), 1.5f * MathF.Max(a, b));
    }

    protected void SplitFormationClassIntoGivenNumber(
      Func<Formation, bool> formationClass,
      int count)
    {
      List<Formation> formationList1 = new List<Formation>();
      List<int> intList1 = new List<int>();
      int num1 = 0;
      List<int> intList2 = new List<int>();
      int num2 = 0;
      int num3 = 0;
      int num4 = 0;
      foreach (Formation formation in (List<Formation>) this.Team.FormationsIncludingEmpty)
      {
        if (formation.CountOfUnits == 0)
        {
          formationList1.Add(formation);
          ++num3;
        }
        else if (formationClass(formation))
        {
          formationList1.Add(formation);
          if (formation.IsAIOwned)
          {
            intList1.Add(num3);
            num1 += formation.CountOfUnits;
            if (formation.IsConvenientForTransfer)
            {
              intList2.Add(num3);
              num2 += formation.CountOfUnits;
            }
          }
          else
            ++num4;
          ++num3;
        }
      }
      int num5 = count - num4;
      int count1 = intList2.Count;
      int count2 = intList1.Count;
      if (count2 <= 0)
        return;
      List<int> intList3 = new List<int>();
      if (num5 > count2 && count1 > 0)
      {
        int num6 = num5 - count2;
        double num7 = (double) num1 / (double) num5;
        double num8 = Math.Ceiling((double) num2 / (double) (intList2.Count + num6));
        List<int> intList4 = new List<int>();
        int num9 = 0;
        for (int index = 0; index < count2; ++index)
        {
          if (formationList1[intList1[index]].IsConvenientForTransfer || (double) formationList1[intList1[index]].CountOfUnits <= num8)
          {
            intList4.Add(index);
            num9 += formationList1[intList1[index]].CountOfUnits;
          }
        }
        double num10 = Math.Ceiling((double) num9 / (double) (intList4.Count + num6));
        List<int> intList5 = new List<int>();
        for (int index = 0; index < formationList1.Count; ++index)
        {
          if (formationList1[index].CountOfUnits == 0 && intList5.Count < num6)
            intList5.Add(index);
        }
        for (int index1 = 0; index1 < count1; ++index1)
        {
          Formation formation = formationList1[intList2[index1]];
          int a = (int) ((double) formation.CountOfUnits - num10);
          for (int index2 = 0; a >= 1 && index2 < intList4.Count; ++index2)
          {
            Formation target = formationList1[intList4[index2]];
            if (formation != target)
            {
              int b = (int) (num10 - (double) target.CountOfUnits);
              if (b >= 1)
              {
                int unitCount = MathF.Min(a, b);
                formation.TransferUnits(target, unitCount);
                if (!intList3.Contains(intList2[index1]))
                  intList3.Add(intList2[index1]);
                if (!intList3.Contains(intList4[index2]))
                  intList3.Add(intList4[index2]);
                a -= unitCount;
              }
            }
          }
          if (a >= 1)
          {
            for (int index3 = 0; a >= 1 && index3 < intList5.Count; ++index3)
            {
              Formation target = formationList1[intList5[index3]];
              int b = (int) (num8 - (double) target.CountOfUnits);
              if (b >= 1)
              {
                int unitCount = MathF.Min(a, b);
                formation.TransferUnits(target, unitCount);
                if (!intList3.Contains(intList2[index1]))
                  intList3.Add(intList2[index1]);
                if (!intList3.Contains(intList5[index3]))
                  intList3.Add(intList5[index3]);
                a -= unitCount;
              }
            }
          }
        }
      }
      else if (num5 < count2 && count2 != 1)
      {
        if (num5 < 1)
          num5 = 1;
        float num11 = (float) num1 / (float) num5;
        int num12 = 0;
        List<int> intList6 = new List<int>();
        int num13 = 0;
        int num14 = 0;
        for (int index = 0; index < intList1.Count; ++index)
        {
          Formation formation = formationList1[intList1[index]];
          bool flag = false;
          if (!formation.IsConvenientForTransfer)
          {
            ++num12;
            if ((double) formation.CountOfUnits < (double) num11)
              flag = true;
            else
              ++num14;
          }
          else
            flag = true;
          if (flag)
          {
            intList6.Add(intList1[index]);
            num13 += formation.CountOfUnits;
          }
        }
        if (num5 < 1)
          num5 = 1;
        else if (num5 < num12)
          num5 = num12;
        float num15 = (float) num13 / (float) (num5 - num14);
        List<int> intList7 = new List<int>();
        int num16 = count2 - num5;
        while (intList7.Count < num16 && count1 > 0)
        {
          int num17 = int.MaxValue;
          int num18 = -1;
          for (int index = 0; index < intList2.Count; ++index)
          {
            Formation formation = formationList1[intList2[index]];
            if (formation.CountOfUnits < num17)
            {
              num17 = formation.CountOfUnits;
              num18 = intList2[index];
            }
          }
          intList2.Remove(num18);
          intList7.Add(num18);
        }
        for (int index4 = 0; index4 < intList7.Count + intList2.Count; ++index4)
        {
          int num19 = index4 < intList7.Count ? 1 : 0;
          int index5 = num19 == 0 ? intList2[index4 - intList7.Count] : intList7[index4];
          Formation formation = formationList1[index5];
          int a = num19 == 0 ? (int) ((double) formation.CountOfUnits - (double) num15) : formation.CountOfUnits;
          for (int index6 = 0; a >= 1 && index6 < intList6.Count; ++index6)
          {
            Formation target = formationList1[intList6[index6]];
            if (formation != target && target.CountOfUnits != 0)
            {
              int b = (int) Math.Ceiling((double) num15 - (double) target.CountOfUnits);
              if (b >= 1)
              {
                int unitCount = MathF.Min(a, b);
                formation.TransferUnits(target, unitCount);
                if (!intList3.Contains(index5))
                  intList3.Add(index5);
                if (!intList3.Contains(intList6[index6]))
                  intList3.Add(intList6[index6]);
                a -= unitCount;
              }
            }
          }
        }
      }
      if (num5 <= 1 || intList3.Count <= 1)
        return;
      List<Formation> formationList2 = new List<Formation>();
      for (int index = 0; index < intList3.Count; ++index)
      {
        Formation f = formationList1[intList3[index]];
        if (f.CountOfUnits > 0)
        {
          f.AI.Side = FormationAI.BehaviorSide.BehaviorSideNotSet;
          f.AI.IsMainFormation = false;
          f.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(f);
          formationList2.Add(f);
        }
      }
      this.IsTacticReapplyNeeded = true;
    }

    protected virtual bool CheckAndSetAvailableFormationsChanged() => false;

    protected bool AreFormationsCreated
    {
      get
      {
        if (this._areFormationsCreated)
          return true;
        if (!this.FormationsIncludingEmpty.AnyQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0)))
          return false;
        this._areFormationsCreated = true;
        this.ManageFormationCounts();
        this.CheckAndSetAvailableFormationsChanged();
        this.IsTacticReapplyNeeded = true;
        return true;
      }
    }

    public void ResetTactic()
    {
      this.ManageFormationCounts();
      this.CheckAndSetAvailableFormationsChanged();
      this.IsTacticReapplyNeeded = true;
    }

    protected void AssignTacticFormations1121()
    {
      this.ManageFormationCounts(1, 1, 2, 1);
      this._mainInfantry = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsInfantryFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
      if (this._mainInfantry != null)
      {
        this._mainInfantry.AI.IsMainFormation = true;
        this._mainInfantry.AI.Side = FormationAI.BehaviorSide.Middle;
      }
      this._archers = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
      List<Formation> formationList = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsCavalryFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower));
      if (formationList.Count > 0)
      {
        this._leftCavalry = formationList[0];
        this._leftCavalry.AI.Side = FormationAI.BehaviorSide.Left;
        if (formationList.Count > 1)
        {
          this._rightCavalry = formationList[1];
          this._rightCavalry.AI.Side = FormationAI.BehaviorSide.Right;
        }
        else
          this._rightCavalry = (Formation) null;
      }
      else
      {
        this._leftCavalry = (Formation) null;
        this._rightCavalry = (Formation) null;
      }
      this._rangedCavalry = TacticComponent.ChooseAndSortByPriority((IEnumerable<Formation>) this.FormationsIncludingEmpty, (Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedCavalryFormation), (Func<Formation, bool>) (f => f.IsAIControlled), (Func<Formation, float>) (f => f.QuerySystem.FormationPower)).FirstOrDefault<Formation>();
    }

    protected static List<Formation> ChooseAndSortByPriority(
      IEnumerable<Formation> formations,
      Func<Formation, bool> isEligible,
      Func<Formation, bool> isPrioritized,
      Func<Formation, float> score)
    {
      formations = formations.Where<Formation>(isEligible);
      IOrderedEnumerable<Formation> orderedEnumerable = formations.Where<Formation>(isPrioritized).OrderByDescending<Formation, float>(score);
      IOrderedEnumerable<Formation> second = formations.Except<Formation>((IEnumerable<Formation>) orderedEnumerable).OrderByDescending<Formation, float>(score);
      return orderedEnumerable.Concat<Formation>((IEnumerable<Formation>) second).ToList<Formation>();
    }

    protected virtual void ManageFormationCounts()
    {
    }

    protected void ManageFormationCounts(
      int infantryCount,
      int rangedCount,
      int cavalryCount,
      int rangedCavalryCount)
    {
      this.SplitFormationClassIntoGivenNumber((Func<Formation, bool>) (f => f.QuerySystem.IsInfantryFormation), infantryCount);
      this.SplitFormationClassIntoGivenNumber((Func<Formation, bool>) (f => f.QuerySystem.IsRangedFormation), rangedCount);
      this.SplitFormationClassIntoGivenNumber((Func<Formation, bool>) (f => f.QuerySystem.IsCavalryFormation), cavalryCount);
      this.SplitFormationClassIntoGivenNumber((Func<Formation, bool>) (f => f.QuerySystem.IsRangedCavalryFormation), rangedCavalryCount);
    }

    protected virtual void StopUsingAllMachines()
    {
      if (!(this.Team.TeamAI is TeamAISiegeComponent teamAi))
        return;
      foreach (SiegeWeapon sceneSiegeWeapon in teamAi.SceneSiegeWeapons)
      {
        if (sceneSiegeWeapon.Side == this.Team.Side)
        {
          sceneSiegeWeapon.SetForcedUse(false);
          for (int index = sceneSiegeWeapon.UserFormations.Count - 1; index >= 0; --index)
          {
            Formation userFormation = sceneSiegeWeapon.UserFormations[index];
            if (userFormation.Team == this.Team)
              userFormation.StopUsingMachine((UsableMachine) sceneSiegeWeapon);
          }
        }
      }
    }

    protected void StopUsingAllRangedSiegeWeapons()
    {
      foreach (Formation formation in (List<Formation>) this.FormationsIncludingSpecialAndEmpty)
      {
        if (formation.CountOfUnits > 0)
        {
          for (int index = formation.Detachments.Count - 1; index >= 0; --index)
          {
            if (formation.Detachments[index] is RangedSiegeWeapon detachment)
            {
              formation.StopUsingMachine((UsableMachine) detachment);
              detachment.SetForcedUse(false);
            }
          }
        }
      }
    }

    protected void SoundTacticalHorn(int soundCode)
    {
      float currentTime = Mission.Current.CurrentTime;
      if ((double) currentTime <= (double) this._hornCooldownExpireTime)
        return;
      this._hornCooldownExpireTime = currentTime + 10f;
      SoundEvent.PlaySound2D(soundCode);
    }

    public static void SetDefaultBehaviorWeights(Formation f)
    {
      f.AI.SetBehaviorWeight<BehaviorCharge>(1f);
      f.AI.SetBehaviorWeight<BehaviorPullBack>(1f);
      f.AI.SetBehaviorWeight<BehaviorStop>(1f);
      f.AI.SetBehaviorWeight<BehaviorReserve>(1f);
    }

    protected internal virtual float GetTacticWeight() => 0.0f;

    protected bool CheckAndDetermineFormation(
      ref Formation formation,
      Func<Formation, bool> isEligible)
    {
      if (formation != null && formation.CountOfUnits != 0 && isEligible(formation))
        return true;
      List<Formation> list = this.FormationsIncludingEmpty.Where<Formation>(isEligible).ToList<Formation>();
      if (list.Count > 0)
      {
        formation = list.MaxBy<Formation, int>((Func<Formation, int>) (f => f.CountOfUnits));
        this.IsTacticReapplyNeeded = true;
        return true;
      }
      if (formation != null)
      {
        formation = (Formation) null;
        this.IsTacticReapplyNeeded = true;
      }
      return false;
    }

    protected internal virtual bool ResetTacticalPositions() => false;
  }
}
