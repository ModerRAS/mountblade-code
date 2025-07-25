// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionReinforcementsHelper
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MissionReinforcementsHelper
  {
    private const float DominantClassThreshold = 0.5f;
    private const float CommonClassThreshold = 0.25f;
    private static uint _localInitTime;
    private static MissionReinforcementsHelper.ReinforcementFormationData[,] _reinforcementFormationsData;

    public static void OnMissionStart()
    {
      Mission current = Mission.Current;
      MissionReinforcementsHelper._reinforcementFormationsData = new MissionReinforcementsHelper.ReinforcementFormationData[current.Teams.Count, 8];
      foreach (Team team in (List<Team>) current.Teams)
      {
        for (int index = 0; index < 8; ++index)
          MissionReinforcementsHelper._reinforcementFormationsData[team.TeamIndex, index] = new MissionReinforcementsHelper.ReinforcementFormationData();
      }
      MissionReinforcementsHelper._localInitTime = 0U;
    }

    public static List<(IAgentOriginBase origin, int formationIndex)> GetReinforcementAssignments(
      BattleSideEnum battleSide,
      List<IAgentOriginBase> troopOrigins)
    {
      Mission current = Mission.Current;
      ++MissionReinforcementsHelper._localInitTime;
      List<(IAgentOriginBase, int)> reinforcementAssignments = new List<(IAgentOriginBase, int)>();
      PriorityQueue<MissionReinforcementsHelper.ReinforcementFormationPriority, Formation> priorityQueue = new PriorityQueue<MissionReinforcementsHelper.ReinforcementFormationPriority, Formation>((IComparer<MissionReinforcementsHelper.ReinforcementFormationPriority>) new MissionReinforcementsHelper.ReinforcementFormationPreferenceComparer());
      foreach (IAgentOriginBase troopOrigin in troopOrigins)
      {
        priorityQueue.Clear();
        FormationClass agentTroopClass = Mission.Current.GetAgentTroopClass(battleSide, troopOrigin.Troop);
        bool isPlayerSide = Mission.Current.PlayerTeam.Side == battleSide;
        Team agentTeam = Mission.GetAgentTeam(troopOrigin, isPlayerSide);
        foreach (Formation formation in (List<Formation>) agentTeam.FormationsIncludingEmpty)
        {
          int formationIndex = (int) formation.FormationIndex;
          if (formation.GetReadonlyMovementOrderReference().OrderEnum != MovementOrder.MovementOrderEnum.Retreat)
          {
            MissionReinforcementsHelper.ReinforcementFormationData reinforcementFormationData = MissionReinforcementsHelper._reinforcementFormationsData[agentTeam.TeamIndex, formationIndex];
            if (!reinforcementFormationData.IsInitialized(MissionReinforcementsHelper._localInitTime))
              reinforcementFormationData.Initialize(formation, MissionReinforcementsHelper._localInitTime);
            MissionReinforcementsHelper.ReinforcementFormationPriority priority = reinforcementFormationData.GetPriority(agentTroopClass);
            if (priorityQueue.IsEmpty<KeyValuePair<MissionReinforcementsHelper.ReinforcementFormationPriority, Formation>>() || priority >= priorityQueue.Peek().Key)
              priorityQueue.Enqueue(priority, formation);
          }
        }
        Formation formation1 = MissionReinforcementsHelper.FindBestFormationAmong(priorityQueue) ?? agentTeam.GetFormation(agentTroopClass);
        int formationIndex1 = (int) formation1.FormationIndex;
        MissionReinforcementsHelper._reinforcementFormationsData[formation1.Team.TeamIndex, formationIndex1].AddProspectiveTroop(agentTroopClass);
        (IAgentOriginBase, int) valueTuple = (troopOrigin, formationIndex1);
        reinforcementAssignments.Add(valueTuple);
      }
      return reinforcementAssignments;
    }

    public static void OnMissionEnd()
    {
      MissionReinforcementsHelper._reinforcementFormationsData = (MissionReinforcementsHelper.ReinforcementFormationData[,]) null;
    }

    private static Formation FindBestFormationAmong(
      PriorityQueue<MissionReinforcementsHelper.ReinforcementFormationPriority, Formation> matchingFormations)
    {
      Formation bestFormationAmong = (Formation) null;
      float num = float.MinValue;
      if (!matchingFormations.IsEmpty<KeyValuePair<MissionReinforcementsHelper.ReinforcementFormationPriority, Formation>>())
      {
        int key1 = (int) matchingFormations.Peek().Key;
        foreach (KeyValuePair<MissionReinforcementsHelper.ReinforcementFormationPriority, Formation> matchingFormation in matchingFormations)
        {
          int key2 = (int) matchingFormation.Key;
          if (key2 >= key1)
          {
            Formation formation = matchingFormation.Value;
            if (key2 == 3 || key2 == 4)
            {
              if (bestFormationAmong == null || formation.FormationIndex < bestFormationAmong.FormationIndex)
                bestFormationAmong = formation;
            }
            else
            {
              float reinforcementScore = MissionReinforcementsHelper.GetFormationReinforcementScore(formation);
              if ((double) reinforcementScore > (double) num)
              {
                num = reinforcementScore;
                bestFormationAmong = formation;
              }
            }
          }
          else
            break;
        }
      }
      return bestFormationAmong;
    }

    private static float GetFormationReinforcementScore(Formation formation)
    {
      Mission current = Mission.Current;
      float num1 = MathF.Max(0.0f, 1f - (float) formation.CountOfUnits / (float) Math.Max(1, formation.Team.ActiveAgents.Count));
      float num2 = 0.0f;
      BattleSideEnum side = formation.Team.Side;
      if (formation.HasBeenPositioned && current.DeploymentPlan.IsPlanMadeForBattleSide(side, DeploymentPlanType.Reinforcement))
      {
        Vec2 asVec2 = current.DeploymentPlan.GetMeanPositionOfPlan(side, DeploymentPlanType.Reinforcement).AsVec2;
        num2 = MathF.Max(0.0f, 1f - MathF.Min(1f, formation.CurrentPosition.DistanceSquared(asVec2) / 62500f));
      }
      return (float) (0.60000002384185791 * (double) num1 + 0.40000000596046448 * (double) num2);
    }

    public enum ReinforcementFormationPriority
    {
      Default,
      AlternativeCommon,
      AlternativeDominant,
      EmptyNoMatch,
      EmptyRepresentativeMatch,
      Common,
      Dominant,
    }

    public class ReinforcementFormationPreferenceComparer : 
      IComparer<MissionReinforcementsHelper.ReinforcementFormationPriority>
    {
      public int Compare(
        MissionReinforcementsHelper.ReinforcementFormationPriority left,
        MissionReinforcementsHelper.ReinforcementFormationPriority right)
      {
        int num1 = (int) right;
        int num2 = (int) left;
        if (num1 < num2)
          return 1;
        return num1 > num2 ? -1 : 0;
      }
    }

    public class ReinforcementFormationData
    {
      private uint _initTime;
      private bool _isClassified;
      private int[] _expectedTroopCountPerClass;
      private int _expectedTotalTroopCount;
      private bool[] _troopClasses;
      private FormationClass _representativeClass;

      public ReinforcementFormationData()
      {
        this._initTime = 0U;
        this._expectedTroopCountPerClass = new int[4];
        this._expectedTotalTroopCount = 0;
        this._isClassified = false;
        this._representativeClass = FormationClass.NumberOfAllFormations;
        this._troopClasses = new bool[4];
      }

      public void Initialize(Formation formation, uint initTime)
      {
        int countOfUnits = formation.CountOfUnits;
        this._expectedTroopCountPerClass[0] = (int) ((double) formation.QuerySystem.InfantryUnitRatio * (double) countOfUnits);
        this._expectedTroopCountPerClass[1] = (int) ((double) formation.QuerySystem.RangedUnitRatio * (double) countOfUnits);
        this._expectedTroopCountPerClass[2] = (int) ((double) formation.QuerySystem.CavalryUnitRatio * (double) countOfUnits);
        this._expectedTroopCountPerClass[3] = (int) ((double) formation.QuerySystem.RangedCavalryUnitRatio * (double) countOfUnits);
        this._expectedTotalTroopCount = countOfUnits;
        this._isClassified = false;
        this._representativeClass = formation.RepresentativeClass;
        this._initTime = initTime;
      }

      public void AddProspectiveTroop(FormationClass troopClass)
      {
        ++this._expectedTroopCountPerClass[(int) troopClass];
        ++this._expectedTotalTroopCount;
        this._isClassified = false;
      }

      public bool IsInitialized(uint initTime) => (int) initTime == (int) this._initTime;

      public MissionReinforcementsHelper.ReinforcementFormationPriority GetPriority(
        FormationClass troopClass)
      {
        if (this._expectedTotalTroopCount == 0)
          return this._representativeClass == troopClass ? MissionReinforcementsHelper.ReinforcementFormationPriority.EmptyRepresentativeMatch : MissionReinforcementsHelper.ReinforcementFormationPriority.EmptyNoMatch;
        if (!this._isClassified)
          this.Classify();
        bool isDominant;
        if (this.HasTroopClass(troopClass, out isDominant))
          return !isDominant ? MissionReinforcementsHelper.ReinforcementFormationPriority.Common : MissionReinforcementsHelper.ReinforcementFormationPriority.Dominant;
        if (!this.HasTroopClass(troopClass.AlternativeClass(), out isDominant))
          return MissionReinforcementsHelper.ReinforcementFormationPriority.Default;
        return !isDominant ? MissionReinforcementsHelper.ReinforcementFormationPriority.AlternativeCommon : MissionReinforcementsHelper.ReinforcementFormationPriority.AlternativeDominant;
      }

      private void Classify()
      {
        if (this._expectedTotalTroopCount > 0)
        {
          int index1 = -1;
          int num1 = 4;
          for (int index2 = 0; index2 < num1; ++index2)
          {
            float num2 = (float) this._expectedTroopCountPerClass[index2] / (float) this._expectedTotalTroopCount;
            this._troopClasses[index2] = (double) num2 >= 0.25;
            if ((double) num2 > 0.5)
            {
              index1 = index2;
              break;
            }
          }
          if (index1 >= 0)
          {
            this.ResetClassAssignments();
            this._troopClasses[index1] = true;
          }
        }
        else
          this.ResetClassAssignments();
        this._isClassified = true;
      }

      private bool HasTroopClass(FormationClass troopClass, out bool isDominant)
      {
        int num1 = (int) troopClass;
        int num2 = 0;
        for (int index = 0; index < 4; ++index)
        {
          if (index == num1 && this._troopClasses[index])
            ++num2;
        }
        isDominant = num2 == 1;
        return num2 >= 1;
      }

      private void ResetClassAssignments()
      {
        int num = 4;
        for (int index = 0; index < num; ++index)
          this._troopClasses[index] = false;
      }
    }
  }
}
