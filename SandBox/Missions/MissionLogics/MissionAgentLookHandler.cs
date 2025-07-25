// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.MissionAgentLookHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Conversation;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class MissionAgentLookHandler : MissionLogic
  {
    private readonly List<MissionAgentLookHandler.PointOfInterest> _staticPointList;
    private readonly List<MissionAgentLookHandler.LookInfo> _checklist;
    private MissionAgentLookHandler.SelectionDelegate _selectionDelegate;

    public MissionAgentLookHandler()
    {
      this._staticPointList = new List<MissionAgentLookHandler.PointOfInterest>();
      this._checklist = new List<MissionAgentLookHandler.LookInfo>();
      this._selectionDelegate = new MissionAgentLookHandler.SelectionDelegate(this.SelectRandomAccordingToScore);
    }

    public override void AfterStart() => this.AddStablePointsOfInterest();

    private void AddStablePointsOfInterest()
    {
      foreach (GameEntity gameEntity in this.Mission.Scene.FindEntitiesWithTag("point_of_interest"))
        this._staticPointList.Add(new MissionAgentLookHandler.PointOfInterest(gameEntity.GetGlobalFrame()));
    }

    private void DebugTick()
    {
    }

    public override void OnMissionTick(float dt)
    {
      if (Game.Current.IsDevelopmentMode)
        this.DebugTick();
      float currentTime = this.Mission.CurrentTime;
      foreach (MissionAgentLookHandler.LookInfo lookInfo in this._checklist)
      {
        if (lookInfo.Agent.IsActive() && !ConversationMission.ConversationAgents.Contains<Agent>(lookInfo.Agent) && (!ConversationMission.ConversationAgents.Any<Agent>() || !lookInfo.Agent.IsPlayerControlled))
        {
          if (lookInfo.CheckTimer.Check(currentTime))
          {
            MissionAgentLookHandler.PointOfInterest pointOfInterest = this._selectionDelegate(lookInfo.Agent);
            if (pointOfInterest != null)
              lookInfo.Reset(pointOfInterest, 5f);
            else
              lookInfo.Reset((MissionAgentLookHandler.PointOfInterest) null, 1f + MBRandom.RandomFloat);
          }
          else if (lookInfo.PointOfInterest != null && (!lookInfo.PointOfInterest.IsActive || !lookInfo.PointOfInterest.IsVisibleFor(lookInfo.Agent)))
          {
            MissionAgentLookHandler.PointOfInterest pointOfInterest = this._selectionDelegate(lookInfo.Agent);
            if (pointOfInterest != null)
              lookInfo.Reset(pointOfInterest, 5f + MBRandom.RandomFloat);
            else
              lookInfo.Reset((MissionAgentLookHandler.PointOfInterest) null, (float) ((double) MBRandom.RandomFloat * 5.0 + 5.0));
          }
          else if (lookInfo.PointOfInterest != null)
          {
            Vec3 targetPosition = lookInfo.PointOfInterest.GetTargetPosition();
            lookInfo.Agent.SetLookToPointOfInterest(targetPosition);
          }
        }
      }
    }

    private MissionAgentLookHandler.PointOfInterest SelectFirstNonAgent(Agent agent)
    {
      if (agent.IsAIControlled)
      {
        int num = MBRandom.RandomInt(this._staticPointList.Count);
        int index = num;
        do
        {
          MissionAgentLookHandler.PointOfInterest staticPoint = this._staticPointList[index];
          if ((double) staticPoint.GetScore(agent) > 0.0)
            return staticPoint;
          index = index + 1 == this._staticPointList.Count ? 0 : index + 1;
        }
        while (index != num);
      }
      return (MissionAgentLookHandler.PointOfInterest) null;
    }

    private MissionAgentLookHandler.PointOfInterest SelectBestOfLimitedNonAgent(Agent agent)
    {
      int num1 = 3;
      MissionAgentLookHandler.PointOfInterest pointOfInterest = (MissionAgentLookHandler.PointOfInterest) null;
      float num2 = -1f;
      if (agent.IsAIControlled)
      {
        int num3 = MBRandom.RandomInt(this._staticPointList.Count);
        int index = num3;
        do
        {
          MissionAgentLookHandler.PointOfInterest staticPoint = this._staticPointList[index];
          float score = staticPoint.GetScore(agent);
          if ((double) score > 0.0)
          {
            if ((double) score > (double) num2)
            {
              num2 = score;
              pointOfInterest = staticPoint;
            }
            --num1;
          }
          index = index + 1 == this._staticPointList.Count ? 0 : index + 1;
        }
        while (index != num3 && num1 > 0);
      }
      return pointOfInterest;
    }

    private MissionAgentLookHandler.PointOfInterest SelectBest(Agent agent)
    {
      MissionAgentLookHandler.PointOfInterest pointOfInterest1 = (MissionAgentLookHandler.PointOfInterest) null;
      float num = -1f;
      if (agent.IsAIControlled)
      {
        foreach (MissionAgentLookHandler.PointOfInterest staticPoint in this._staticPointList)
        {
          float score = staticPoint.GetScore(agent);
          if ((double) score > 0.0 && (double) score > (double) num)
          {
            num = score;
            pointOfInterest1 = staticPoint;
          }
        }
        AgentProximityMap.ProximityMapSearchStruct searchStruct = AgentProximityMap.BeginSearch(this.Mission, agent.Position.AsVec2, 5f);
        while (searchStruct.LastFoundAgent != null)
        {
          MissionAgentLookHandler.PointOfInterest pointOfInterest2 = new MissionAgentLookHandler.PointOfInterest(searchStruct.LastFoundAgent);
          float score = pointOfInterest2.GetScore(agent);
          if ((double) score > 0.0 && (double) score > (double) num)
          {
            num = score;
            pointOfInterest1 = pointOfInterest2;
          }
          AgentProximityMap.FindNext(this.Mission, ref searchStruct);
        }
      }
      return pointOfInterest1;
    }

    private MissionAgentLookHandler.PointOfInterest SelectRandomAccordingToScore(Agent agent)
    {
      float num1 = 0.0f;
      List<KeyValuePair<float, MissionAgentLookHandler.PointOfInterest>> keyValuePairList = new List<KeyValuePair<float, MissionAgentLookHandler.PointOfInterest>>();
      if (agent.IsAIControlled)
      {
        foreach (MissionAgentLookHandler.PointOfInterest staticPoint in this._staticPointList)
        {
          float score = staticPoint.GetScore(agent);
          if ((double) score > 0.0)
          {
            keyValuePairList.Add(new KeyValuePair<float, MissionAgentLookHandler.PointOfInterest>(score, staticPoint));
            num1 += score;
          }
        }
        AgentProximityMap.ProximityMapSearchStruct searchStruct = AgentProximityMap.BeginSearch(Mission.Current, agent.Position.AsVec2, 5f);
        while (searchStruct.LastFoundAgent != null)
        {
          MissionAgentLookHandler.PointOfInterest pointOfInterest = new MissionAgentLookHandler.PointOfInterest(searchStruct.LastFoundAgent);
          float score = pointOfInterest.GetScore(agent);
          if ((double) score > 0.0)
          {
            keyValuePairList.Add(new KeyValuePair<float, MissionAgentLookHandler.PointOfInterest>(score, pointOfInterest));
            num1 += score;
          }
          AgentProximityMap.FindNext(Mission.Current, ref searchStruct);
        }
      }
      if (keyValuePairList.Count == 0)
        return (MissionAgentLookHandler.PointOfInterest) null;
      float num2 = MBRandom.RandomFloat * num1;
      MissionAgentLookHandler.PointOfInterest score1 = keyValuePairList[keyValuePairList.Count - 1].Value;
      foreach (KeyValuePair<float, MissionAgentLookHandler.PointOfInterest> keyValuePair in keyValuePairList)
      {
        num2 -= keyValuePair.Key;
        if ((double) num2 <= 0.0)
        {
          score1 = keyValuePair.Value;
          break;
        }
      }
      return score1;
    }

    public override void OnAgentBuild(Agent agent, Banner banner)
    {
      if (!agent.IsHuman)
        return;
      this._checklist.Add(new MissionAgentLookHandler.LookInfo(agent, MBRandom.RandomFloat));
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      for (int index = 0; index < this._checklist.Count; ++index)
      {
        MissionAgentLookHandler.LookInfo lookInfo = this._checklist[index];
        if (lookInfo.Agent == affectedAgent)
        {
          this._checklist.RemoveAt(index);
          --index;
        }
        else if (lookInfo.PointOfInterest != null && lookInfo.PointOfInterest.IsRelevant(affectedAgent))
          lookInfo.Reset((MissionAgentLookHandler.PointOfInterest) null, (float) ((double) MBRandom.RandomFloat * 2.0 + 2.0));
      }
    }

    private class PointOfInterest
    {
      public const int MaxSelectDistanceForAgent = 5;
      public const int MaxSelectDistanceForFrame = 4;
      private readonly int _selectDistance;
      private readonly int _releaseDistanceSquare;
      private readonly Agent _agent;
      private readonly MatrixFrame _frame;
      private readonly bool _ignoreDirection;
      private readonly int _priority;

      public bool IsActive => this._agent == null || this._agent.IsActive();

      public PointOfInterest(Agent agent)
      {
        this._agent = agent;
        this._selectDistance = 5;
        this._releaseDistanceSquare = 36;
        this._ignoreDirection = false;
        CharacterObject character = (CharacterObject) agent.Character;
        if (!agent.IsHuman)
          this._priority = 1;
        else if (character.IsHero)
          this._priority = 5;
        else if (character.Occupation == Occupation.HorseTrader || character.Occupation == Occupation.Weaponsmith || character.Occupation == Occupation.GoodsTrader || character.Occupation == Occupation.Armorer || character.Occupation == Occupation.Blacksmith)
          this._priority = 3;
        else
          this._priority = 1;
      }

      public PointOfInterest(MatrixFrame frame)
      {
        this._frame = frame;
        this._selectDistance = 4;
        this._releaseDistanceSquare = 25;
        this._ignoreDirection = true;
        this._priority = 2;
      }

      public float GetScore(Agent agent)
      {
        if (agent == this._agent || (double) this.GetBasicPosition().DistanceSquared(agent.Position) > (double) (this._selectDistance * this._selectDistance))
          return -1f;
        Vec3 vec3 = this.GetTargetPosition() - agent.GetEyeGlobalPosition();
        float num = vec3.Normalize();
        if ((double) Vec2.DotProduct(vec3.AsVec2, agent.GetMovementDirection()) < 0.699999988079071)
          return -1f;
        float score = (float) (this._priority * this._selectDistance) / num;
        if (this.IsMoving())
          score *= 5f;
        if (!this._ignoreDirection)
        {
          MatrixFrame matrixFrame = this.GetTargetFrame();
          Vec2 asVec2_1 = matrixFrame.rotation.f.AsVec2;
          matrixFrame = agent.Frame;
          Vec2 asVec2_2 = matrixFrame.rotation.f.AsVec2;
          float f = Vec2.DotProduct(asVec2_1, asVec2_2);
          if ((double) f < -0.699999988079071)
            score *= 2f;
          else if ((double) MathF.Abs(f) < 0.10000000149011612)
            score *= 2f;
        }
        return score;
      }

      public Vec3 GetTargetPosition()
      {
        Agent agent = this._agent;
        return agent == null ? this._frame.origin : agent.GetEyeGlobalPosition();
      }

      public Vec3 GetBasicPosition()
      {
        return this._agent == null ? this._frame.origin : this._agent.Position;
      }

      private bool IsMoving()
      {
        return this._agent == null || (double) this._agent.GetCurrentVelocity().LengthSquared > 0.040000002831220627;
      }

      private MatrixFrame GetTargetFrame() => this._agent == null ? this._frame : this._agent.Frame;

      public bool IsVisibleFor(Agent agent)
      {
        Vec3 basicPosition = this.GetBasicPosition();
        Vec3 position = agent.Position;
        if (agent == this._agent || (double) position.DistanceSquared(basicPosition) > (double) this._releaseDistanceSquare)
          return false;
        Vec3 vec3 = basicPosition - position;
        double num = (double) vec3.Normalize();
        return (double) Vec2.DotProduct(vec3.AsVec2, agent.GetMovementDirection()) > 0.40000000596046448;
      }

      public bool IsRelevant(Agent agent) => agent == this._agent;
    }

    private class LookInfo
    {
      public readonly Agent Agent;
      public MissionAgentLookHandler.PointOfInterest PointOfInterest;
      public readonly Timer CheckTimer;

      public LookInfo(Agent agent, float checkTime)
      {
        this.Agent = agent;
        this.CheckTimer = new Timer(Mission.Current.CurrentTime, checkTime);
      }

      public void Reset(
        MissionAgentLookHandler.PointOfInterest pointOfInterest,
        float duration)
      {
        if (this.PointOfInterest != pointOfInterest)
        {
          this.PointOfInterest = pointOfInterest;
          if (this.PointOfInterest != null)
            this.Agent.SetLookToPointOfInterest(this.PointOfInterest.GetTargetPosition());
          else if (this.Agent.IsActive())
            this.Agent.DisableLookToPointOfInterest();
        }
        this.CheckTimer.Reset(Mission.Current.CurrentTime, duration);
      }
    }

    private delegate MissionAgentLookHandler.PointOfInterest SelectionDelegate(Agent agent);
  }
}
