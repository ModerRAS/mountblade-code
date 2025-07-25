// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DetachmentManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DetachmentManager
  {
    private readonly MBList<(IDetachment, DetachmentData)> _detachments;
    private readonly Dictionary<IDetachment, DetachmentData> _detachmentDataDictionary;
    private readonly List<(int, float)> _slotIndexWeightTuplesCache;
    private List<float> _templateCostCache;
    private readonly Team _team;

    public MBReadOnlyList<(IDetachment, DetachmentData)> Detachments
    {
      get => (MBReadOnlyList<(IDetachment, DetachmentData)>) this._detachments;
    }

    public DetachmentManager(Team team)
    {
      this._detachments = new MBList<(IDetachment, DetachmentData)>();
      this._detachmentDataDictionary = new Dictionary<IDetachment, DetachmentData>();
      this._team = team;
      team.OnFormationsChanged += new Action<Team, Formation>(this.Team_OnFormationsChanged);
      this._slotIndexWeightTuplesCache = new List<(int, float)>();
      this._templateCostCache = new List<float>();
    }

    private void Team_OnFormationsChanged(Team team, Formation formation)
    {
      float currentTime = Mission.Current.CurrentTime;
      foreach (IDetachment detachment in (List<IDetachment>) formation.Detachments)
      {
        DetachmentData detachmentData = this._detachmentDataDictionary[detachment];
        detachmentData.agentScores.Clear();
        detachmentData.firstTime = currentTime;
      }
    }

    public void Clear()
    {
      this._team.OnFormationsChanged -= new Action<Team, Formation>(this.Team_OnFormationsChanged);
      this._team.OnFormationsChanged += new Action<Team, Formation>(this.Team_OnFormationsChanged);
      foreach ((IDetachment, DetachmentData) tuple in this.Detachments.ToList<(IDetachment, DetachmentData)>())
        this.DestroyDetachment(tuple.Item1);
    }

    public bool ContainsDetachment(IDetachment detachment)
    {
      return this._detachmentDataDictionary.ContainsKey(detachment);
    }

    public void MakeDetachment(IDetachment detachment)
    {
      DetachmentData detachmentData = new DetachmentData();
      this._detachments.Add((detachment, detachmentData));
      this._detachmentDataDictionary[detachment] = detachmentData;
    }

    public void DestroyDetachment(IDetachment destroyedDetachment)
    {
      for (int index1 = 0; index1 < this._detachments.Count; ++index1)
      {
        (IDetachment, DetachmentData) detachment = this._detachments[index1];
        if (detachment.Item1 == destroyedDetachment)
        {
          for (int index2 = detachment.Item2.joinedFormations.Count - 1; index2 >= 0; --index2)
            detachment.Item2.joinedFormations[index2].LeaveDetachment(destroyedDetachment);
          this._detachments.RemoveAt(index1);
          break;
        }
      }
      this._detachmentDataDictionary.Remove(destroyedDetachment);
    }

    public void OnFormationJoinDetachment(Formation formation, IDetachment joinedDetachment)
    {
      DetachmentData detachmentData = this._detachmentDataDictionary[joinedDetachment];
      detachmentData.joinedFormations.Add(formation);
      detachmentData.firstTime = MBCommon.GetTotalMissionTime();
      joinedDetachment.FormationStartUsing(formation);
    }

    public void OnFormationLeaveDetachment(Formation formation, IDetachment leftDetachment)
    {
      DetachmentData detachmentData = this._detachmentDataDictionary[leftDetachment];
      detachmentData.joinedFormations.Remove(formation);
      detachmentData.agentScores.RemoveAll((Predicate<(Agent, List<float>)>) (ags => ags.Item1.Formation == formation));
      detachmentData.firstTime = MBCommon.GetTotalMissionTime();
      leftDetachment.FormationStopUsing(formation);
    }

    public void TickDetachments()
    {
      float totalMissionTime = MBCommon.GetTotalMissionTime();
      if (!Mission.Current.IsLoadingFinished || !Mission.Current.AllowAiTicking)
      {
        foreach ((IDetachment, DetachmentData) detachment in (List<(IDetachment, DetachmentData)>) this._detachments)
          detachment.Item2.firstTime = totalMissionTime;
      }
      else
      {
        foreach ((IDetachment, DetachmentData) detachment in (List<(IDetachment, DetachmentData)>) this._detachments)
        {
          if ((double) detachment.Item1.ComputeAndCacheDetachmentWeight(this._team.Side) > -3.4028234663852886E+38 && detachment.Item2.IsPrecalculated())
            detachment.Item1.ResetEvaluation();
        }
        bool flag = this._detachments.Count == 0;
        while (!flag)
        {
          (IDetachment, DetachmentData) valueTuple1 = ((IDetachment) null, (DetachmentData) null);
          float num1 = float.MinValue;
          foreach ((IDetachment, DetachmentData) detachment in (List<(IDetachment, DetachmentData)>) this._detachments)
          {
            if (this._team.Mission.Mode != MissionMode.Deployment || !this._team.IsAttacker || !(detachment.Item1 is SiegeLadder) && !(detachment.Item1 is StrategicArea))
            {
              float detachmentWeightFromCache = detachment.Item1.GetDetachmentWeightFromCache();
              if ((double) num1 < (double) detachmentWeightFromCache && detachment.Item2.IsPrecalculated() && !detachment.Item1.IsEvaluated())
              {
                num1 = detachmentWeightFromCache;
                valueTuple1 = detachment;
              }
            }
          }
          if (valueTuple1.Item1 != null)
          {
            IDetachment detachment1 = valueTuple1.Item1;
            DetachmentData detachmentData = valueTuple1.Item2;
            if (valueTuple1.Item1.IsDetachmentRecentlyEvaluated())
            {
              foreach ((IDetachment, DetachmentData) detachment2 in (List<(IDetachment, DetachmentData)>) this._detachments)
              {
                if (!detachment2.Item1.IsEvaluated())
                  detachment2.Item1.UnmarkDetachment();
              }
            }
            detachment1.GetSlotIndexWeightTuples(this._slotIndexWeightTuplesCache);
            while (!flag && this._slotIndexWeightTuplesCache.Count > 0)
            {
              (int, float) valueTuple2 = (0, 0.0f);
              float num2 = float.MinValue;
              foreach ((int, float) tuple in this._slotIndexWeightTuplesCache)
              {
                if ((double) num2 < (double) tuple.Item2)
                {
                  num2 = tuple.Item2;
                  valueTuple2 = tuple;
                }
              }
              float num3 = float.MaxValue;
              int index1 = -1;
              for (int index2 = 0; index2 < detachmentData.agentScores.Count; ++index2)
              {
                (Agent, List<float>) agentScore = detachmentData.agentScores[index2];
                if (detachment1.IsSlotAtIndexAvailableForAgent(valueTuple2.Item1, agentScore.Item1))
                {
                  float num4 = agentScore.Item2[valueTuple2.Item1];
                  if ((double) num3 > (double) num4)
                  {
                    num3 = num4;
                    index1 = index2;
                  }
                }
              }
              if (index1 != -1)
              {
                Agent agentAtSlotIndex = detachment1.GetMovingAgentAtSlotIndex(valueTuple2.Item1);
                float num5 = float.MaxValue;
                float maxValue = float.MaxValue;
                if (agentAtSlotIndex != null)
                {
                  int index3 = -1;
                  for (int index4 = 0; index4 < detachmentData.agentScores.Count; ++index4)
                  {
                    if (detachmentData.agentScores[index4].Item1 == agentAtSlotIndex)
                    {
                      index3 = index4;
                      break;
                    }
                  }
                  float costOfAgentAtSlot = detachment1.GetExactCostOfAgentAtSlot(agentAtSlotIndex, valueTuple2.Item1);
                  if (index3 == -1)
                  {
                    this._templateCostCache = detachment1.GetTemplateCostsOfAgent(agentAtSlotIndex, this._templateCostCache);
                    maxValue = this._templateCostCache[valueTuple2.Item1];
                  }
                  else
                  {
                    (Agent, List<float>) agentScore = detachmentData.agentScores[index3];
                    maxValue = agentScore.Item2[valueTuple2.Item1];
                    agentScore.Item2[valueTuple2.Item1] = costOfAgentAtSlot;
                  }
                  num5 = costOfAgentAtSlot;
                }
                if (agentAtSlotIndex != null)
                  detachment1.MarkSlotAtIndex(valueTuple2.Item1);
                (Agent, List<float>) agentScore1 = detachmentData.agentScores[index1];
                float num6 = agentScore1.Item2[valueTuple2.Item1];
                if (agentAtSlotIndex != null && (double) num5 <= (double) num6)
                  flag = true;
                else if (agentAtSlotIndex != null)
                {
                  float costOfAgentAtSlot = detachment1.GetExactCostOfAgentAtSlot(agentScore1.Item1, valueTuple2.Item1);
                  agentScore1.Item2[valueTuple2.Item1] = costOfAgentAtSlot;
                  if ((double) num5 < (double) costOfAgentAtSlot)
                    flag = true;
                  else if ((double) num5 == (double) costOfAgentAtSlot && (double) maxValue < (double) num6)
                    flag = true;
                }
                if (!flag)
                {
                  detachment1.AddAgentAtSlotIndex(agentScore1.Item1, valueTuple2.Item1);
                  flag = true;
                }
              }
              else
                this._slotIndexWeightTuplesCache.Remove(valueTuple2);
            }
            this._slotIndexWeightTuplesCache.Clear();
            if (!flag)
              valueTuple1.Item1.SetAsEvaluated();
          }
          else
            flag = true;
        }
      }
    }

    public void TickAgent(Agent agent)
    {
      bool detachedFromFormation = agent.IsDetachedFromFormation;
      if (!agent.IsDetachableFromFormation)
        return;
      if (detachedFromFormation && !agent.Detachment.IsAgentEligible(agent))
      {
        agent.Detachment.RemoveAgent(agent);
        agent.Formation?.AttachUnit(agent);
      }
      if (!agent.IsDetachedFromFormation)
      {
        float totalMissionTime = MBCommon.GetTotalMissionTime();
        bool flag = (double) totalMissionTime - (double) agent.LastDetachmentTickAgentTime > 1.5;
        foreach (IDetachment detachment in (List<IDetachment>) agent.Formation.Detachments)
        {
          double detachmentWeight = (double) detachment.GetDetachmentWeight(agent.Formation.Team.Side);
          DetachmentData detachmentData = this._detachmentDataDictionary[detachment];
          if (detachmentWeight > -3.4028234663852886E+38)
          {
            int index1 = -1;
            for (int index2 = 0; index2 < detachmentData.agentScores.Count; ++index2)
            {
              if (detachmentData.agentScores[index2].Item1 == agent)
              {
                index1 = index2;
                break;
              }
            }
            if (index1 == -1)
            {
              if (detachmentData.agentScores.Count == 0)
                detachmentData.firstTime = totalMissionTime;
              List<float> templateCostsOfAgent = detachment.GetTemplateCostsOfAgent(agent, (List<float>) null);
              detachmentData.agentScores.Add((agent, templateCostsOfAgent));
              agent.LastDetachmentTickAgentTime = totalMissionTime;
            }
            else if (flag)
            {
              (Agent, List<float>) agentScore = detachmentData.agentScores[index1];
              detachmentData.agentScores[index1] = (agentScore.Item1, detachment.GetTemplateCostsOfAgent(agent, agentScore.Item2));
              agent.LastDetachmentTickAgentTime = totalMissionTime;
            }
          }
          else
            detachmentData.firstTime = totalMissionTime;
        }
      }
      else
      {
        if (!agent.AIMoveToGameObjectIsEnabled())
          return;
        float totalMissionTime = MBCommon.GetTotalMissionTime();
        DetachmentData detachmentData = this._detachmentDataDictionary[agent.Detachment];
        int index3 = -1;
        for (int index4 = 0; index4 < detachmentData.agentScores.Count; ++index4)
        {
          if (detachmentData.agentScores[index4].Item1 == agent)
          {
            index3 = index4;
            break;
          }
        }
        if (index3 == -1)
        {
          if (detachmentData.agentScores.Count == 0)
            detachmentData.firstTime = totalMissionTime;
          List<float> templateCostsOfAgent = agent.Detachment.GetTemplateCostsOfAgent(agent, (List<float>) null);
          detachmentData.agentScores.Add((agent, templateCostsOfAgent));
          agent.LastDetachmentTickAgentTime = totalMissionTime;
        }
        else
        {
          if ((double) totalMissionTime - (double) agent.LastDetachmentTickAgentTime <= 1.5)
            return;
          (Agent, List<float>) agentScore = detachmentData.agentScores[index3];
          detachmentData.agentScores[index3] = (agentScore.Item1, agent.Detachment.GetTemplateCostsOfAgent(agent, agentScore.Item2));
          agent.LastDetachmentTickAgentTime = totalMissionTime;
        }
      }
    }

    public void OnAgentRemoved(Agent agent)
    {
      foreach (IDetachment detachment in (List<IDetachment>) agent.Formation.Detachments)
        this._detachmentDataDictionary[detachment].agentScores.RemoveAll((Predicate<(Agent, List<float>)>) (ags => ags.Item1 == agent));
    }

    public void RemoveScoresOfAgentFromDetachments(Agent agent)
    {
      foreach ((IDetachment, DetachmentData) detachment in (List<(IDetachment, DetachmentData)>) this._detachments)
      {
        if (!agent.AIMoveToGameObjectIsEnabled() || agent.Detachment != detachment.Item1)
          detachment.Item2.RemoveScoreOfAgent(agent);
      }
    }

    public void RemoveScoresOfAgentFromDetachment(
      Agent agent,
      IDetachment detachmentToBeRemovedFrom)
    {
      foreach ((IDetachment, DetachmentData) detachment in (List<(IDetachment, DetachmentData)>) this._detachments)
      {
        if (detachmentToBeRemovedFrom == detachment.Item1)
          detachment.Item2.RemoveScoreOfAgent(agent);
      }
    }

    public void AddAgentAsMovingToDetachment(Agent agent, IDetachment detachment)
    {
      if (detachment == null)
        return;
      ++this._detachmentDataDictionary[detachment].MovingAgentCount;
    }

    public void RemoveAgentAsMovingToDetachment(Agent agent)
    {
      if (agent.Detachment == null)
        return;
      if (!this._detachmentDataDictionary.ContainsKey(agent.Detachment))
        TaleWorlds.Library.Debug.Print("DUMP-1671 | " + agent.Detachment.ToString());
      --this._detachmentDataDictionary[agent.Detachment].MovingAgentCount;
    }

    public void AddAgentAsDefendingToDetachment(Agent agent, IDetachment detachment)
    {
      ++this._detachmentDataDictionary[detachment].DefendingAgentCount;
    }

    public void RemoveAgentAsDefendingToDetachment(Agent agent)
    {
      if (!this._detachmentDataDictionary.ContainsKey(agent.Detachment))
        TaleWorlds.Library.Debug.Print("DUMP-1671 | " + (agent.Detachment != null ? agent.Detachment.ToString() : "null"));
      --this._detachmentDataDictionary[agent.Detachment].DefendingAgentCount;
    }

    [Conditional("DEBUG")]
    private void AssertDetachments()
    {
    }

    [Conditional("DEBUG")]
    public void AssertDetachment(Team team, IDetachment detachment)
    {
      this._detachmentDataDictionary[detachment].joinedFormations.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0));
      team.FormationsIncludingSpecialAndEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.Detachments.Contains(detachment)));
    }
  }
}
