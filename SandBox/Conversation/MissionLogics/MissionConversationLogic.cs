// Decompiled with JetBrains decompiler
// Type: SandBox.Conversation.MissionLogics.MissionConversationLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.AgentBehaviors;
using SandBox.Missions.MissionLogics;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace SandBox.Conversation.MissionLogics
{
  public class MissionConversationLogic : MissionLogic
  {
    private const string CenterConversationPointMappingTag = "CenterConversationPoint";
    private MissionMode _oldMissionMode;
    private readonly CharacterObject _teleportNearCharacter;
    private GameEntity _selectedConversationPoint;
    private bool _conversationStarted;
    private bool _teleported;
    private bool _conversationAgentFound;
    private bool _disableStartConversation;
    private readonly Dictionary<string, MBList<GameEntity>> _conversationPoints;
    private string _customSpawnTag;

    public static MissionConversationLogic Current
    {
      get => Mission.Current.GetMissionBehavior<MissionConversationLogic>();
    }

    public MissionState State { get; private set; }

    public ConversationManager ConversationManager { get; private set; }

    public bool IsReadyForConversation
    {
      get
      {
        return this.ConversationAgent != null && this.ConversationManager != null && Agent.Main != null && Agent.Main.IsActive();
      }
    }

    public Agent ConversationAgent { get; private set; }

    public MissionConversationLogic(CharacterObject teleportNearChar)
    {
      this._teleportNearCharacter = teleportNearChar;
      this._conversationPoints = new Dictionary<string, MBList<GameEntity>>();
    }

    public MissionConversationLogic()
    {
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      CampaignEvents.LocationCharactersSimulatedEvent.AddNonSerializedListener((object) this, new Action(this.OnLocationCharactersSimulated));
    }

    public override void OnAgentBuild(Agent agent, Banner banner)
    {
      if (this._teleportNearCharacter == null || agent.Character != this._teleportNearCharacter)
        return;
      this.ConversationAgent = agent;
      this._conversationAgentFound = true;
    }

    public void SetSpawnArea(Alley alley) => this._customSpawnTag = alley.Tag;

    public void SetSpawnArea(Workshop workshop) => this._customSpawnTag = workshop.Tag;

    public void SetSpawnArea(string customTag) => this._customSpawnTag = customTag;

    private void OnLocationCharactersSimulated()
    {
      if (!this._conversationAgentFound)
        return;
      if (this.FillConversationPointList())
      {
        this.DetermineSpawnPoint();
        this._teleported = this.TryToTeleportBothToCertainPoints();
      }
      else
        this.Mission.GetMissionBehavior<MissionAgentHandler>()?.TeleportTargetAgentNearReferenceAgent(this.ConversationAgent, Agent.Main, true, false);
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (!this.IsReadyForConversation)
        return;
      if (!this._teleported)
      {
        this.Mission.GetMissionBehavior<MissionAgentHandler>().TeleportTargetAgentNearReferenceAgent(this.ConversationAgent, Agent.Main, true, false);
        this._teleported = true;
      }
      if (this._teleportNearCharacter == null || this._conversationStarted)
        return;
      this.StartConversation(this.ConversationAgent, true, true);
      if (!this.ConversationManager.NeedsToActivateForMapConversation || GameNetwork.IsReplay)
        return;
      this.ConversationManager.BeginConversation();
    }

    private bool TryToTeleportBothToCertainPoints()
    {
      MissionAgentHandler missionBehavior = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      bool flag = Agent.Main.MountAgent != null;
      WorldFrame worldFrame1 = new WorldFrame(this._selectedConversationPoint.GetGlobalFrame().rotation, new WorldPosition(Agent.Main.Mission.Scene, this._selectedConversationPoint.GetGlobalFrame().origin));
      worldFrame1.Origin.SetVec2(worldFrame1.Origin.AsVec2 + worldFrame1.Rotation.f.AsVec2 * (flag ? 1f : 0.5f));
      WorldFrame worldFrame2 = new WorldFrame(this._selectedConversationPoint.GetGlobalFrame().rotation, new WorldPosition(Agent.Main.Mission.Scene, this._selectedConversationPoint.GetGlobalFrame().origin));
      worldFrame2.Origin.SetVec2(worldFrame2.Origin.AsVec2 - worldFrame2.Rotation.f.AsVec2 * (flag ? 1f : 0.5f));
      Vec3 vec3_1 = new Vec3(worldFrame1.Origin.AsVec2 - worldFrame2.Origin.AsVec2);
      Vec3 vec3_2 = new Vec3(worldFrame2.Origin.AsVec2 - worldFrame1.Origin.AsVec2);
      worldFrame1.Rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      this.ConversationAgent.LookDirection = vec3_2.NormalizedCopy();
      this.ConversationAgent.TeleportToPosition(worldFrame1.Origin.GetGroundVec3());
      worldFrame2.Rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      if (Agent.Main.MountAgent != null)
      {
        Vec2 vec2 = vec3_2.AsVec2;
        vec2 = vec2.RightVec();
        Agent.Main.MountAgent.LookDirection = vec2.ToVec3().NormalizedCopy();
      }
      this.Mission.MainAgent.LookDirection = vec3_1.NormalizedCopy();
      this.Mission.MainAgent.TeleportToPosition(worldFrame2.Origin.GetGroundVec3());
      this.SetConversationAgentAnimations(this.ConversationAgent);
      WorldPosition origin = worldFrame2.Origin;
      origin.SetVec2(origin.AsVec2 - worldFrame2.Rotation.s.AsVec2 * 2f);
      if (missionBehavior != null)
      {
        foreach (Agent agent1 in (List<Agent>) this.Mission.Agents)
        {
          AccompanyingCharacter accompanyingCharacter = PlayerEncounter.LocationEncounter.GetAccompanyingCharacter(LocationComplex.Current.FindCharacter((IAgent) agent1));
          if (accompanyingCharacter != null && accompanyingCharacter.IsFollowingPlayerAtMissionStart)
          {
            if (agent1.MountAgent != null && Agent.Main.MountAgent != null)
              agent1.MountAgent.LookDirection = Agent.Main.MountAgent.LookDirection;
            Vec2 asVec2;
            if (accompanyingCharacter.LocationCharacter.Character == this._teleportNearCharacter)
            {
              agent1.LookDirection = vec3_2.NormalizedCopy();
              Agent agent2 = agent1;
              asVec2 = worldFrame2.Rotation.f.AsVec2;
              ref Vec2 local = ref asVec2;
              agent2.SetMovementDirection(in local);
              agent1.TeleportToPosition(worldFrame1.Origin.GetGroundVec3());
            }
            else
            {
              agent1.LookDirection = vec3_1.NormalizedCopy();
              Agent agent3 = agent1;
              asVec2 = worldFrame1.Rotation.f.AsVec2;
              ref Vec2 local = ref asVec2;
              agent3.SetMovementDirection(in local);
              agent1.TeleportToPosition(origin.GetGroundVec3());
            }
          }
        }
      }
      this._teleported = true;
      return true;
    }

    private void SetConversationAgentAnimations(Agent conversationAgent)
    {
      CampaignAgentComponent component = conversationAgent.GetComponent<CampaignAgentComponent>();
      AgentBehavior activeBehavior = component.AgentNavigator?.GetActiveBehavior();
      if (activeBehavior == null)
        return;
      activeBehavior.IsActive = false;
      component.AgentNavigator.ForceThink(0.0f);
      conversationAgent.SetActionChannel(0, ActionIndexCache.act_none, additionalFlags: (ulong) conversationAgent.GetCurrentActionPriority(0), blendInPeriod: 0.0f);
      conversationAgent.TickActionChannels(0.1f);
      conversationAgent.AgentVisuals.GetSkeleton().TickAnimationsAndForceUpdate(0.1f, conversationAgent.AgentVisuals.GetGlobalFrame(), true);
    }

    private void OnConversationEnd()
    {
      foreach (Agent conversationAgent in (IEnumerable<IAgent>) this.ConversationManager.ConversationAgents)
      {
        conversationAgent.AgentVisuals.SetVisible(true);
        conversationAgent.AgentVisuals.SetClothComponentKeepStateOfAllMeshes(false);
        conversationAgent.MountAgent?.AgentVisuals.SetVisible(true);
      }
      if (this.Mission.Mode == MissionMode.Conversation)
        this.Mission.SetMissionMode(this._oldMissionMode, false);
      if (Agent.Main != null)
      {
        Agent.Main.AgentVisuals.SetVisible(true);
        Agent.Main.AgentVisuals.SetClothComponentKeepStateOfAllMeshes(false);
        if (Agent.Main.MountAgent != null)
          Agent.Main.MountAgent.AgentVisuals.SetVisible(true);
      }
      this.Mission.MainAgentServer.Controller = Agent.ControllerType.Player;
      this.ConversationManager.ConversationEnd -= new Action(this.OnConversationEnd);
    }

    public override void EarlyStart()
    {
      this.State = Game.Current.GameStateManager.ActiveState as MissionState;
    }

    protected override void OnEndMission()
    {
      if (this.ConversationManager != null && this.ConversationManager.IsConversationInProgress)
        this.ConversationManager.EndConversation();
      this.State = (MissionState) null;
      CampaignEvents.LocationCharactersSimulatedEvent.ClearListeners((object) this);
    }

    public override void OnAgentInteraction(Agent userAgent, Agent agent)
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign)
        return;
      if (Game.Current.GameStateManager.ActiveState is MissionState)
      {
        if (!this.IsThereAgentAction(userAgent, agent))
          return;
        this.StartConversation(agent, false);
      }
      else
        Debug.FailedAssert("Agent interaction must occur in MissionState.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Conversation\\Logics\\MissionConversationLogic.cs", nameof (OnAgentInteraction), 281);
    }

    public void StartConversation(Agent agent, bool setActionsInstantly, bool isInitialization = false)
    {
      this._oldMissionMode = this.Mission.Mode;
      this.ConversationManager = Campaign.Current.ConversationManager;
      this.ConversationManager.SetupAndStartMissionConversation((IAgent) agent, (IAgent) this.Mission.MainAgent, setActionsInstantly);
      this.ConversationManager.ConversationEnd += new Action(this.OnConversationEnd);
      this._conversationStarted = true;
      foreach (Agent conversationAgent in (IEnumerable<IAgent>) this.ConversationManager.ConversationAgents)
      {
        conversationAgent.ForceAiBehaviorSelection();
        conversationAgent.AgentVisuals.SetClothComponentKeepStateOfAllMeshes(true);
      }
      this.Mission.MainAgentServer.AgentVisuals.SetClothComponentKeepStateOfAllMeshes(true);
      this.Mission.SetMissionMode(MissionMode.Conversation, setActionsInstantly);
    }

    public override bool IsThereAgentAction(Agent userAgent, Agent otherAgent)
    {
      return this.Mission.Mode != MissionMode.Battle && this.Mission.Mode != MissionMode.Duel && this.Mission.Mode != MissionMode.Conversation && !this._disableStartConversation && otherAgent.IsActive() && !otherAgent.IsEnemyOf(userAgent);
    }

    public override void OnRenderingStarted()
    {
      this.ConversationManager = Campaign.Current.ConversationManager;
      if (this.ConversationManager == null)
        throw new ArgumentNullException("conversationManager");
    }

    public void DisableStartConversation(bool isDisabled)
    {
      this._disableStartConversation = isDisabled;
    }

    private bool FillConversationPointList()
    {
      List<GameEntity> list1 = this.Mission.Scene.FindEntitiesWithTag("sp_player_conversation").ToList<GameEntity>();
      bool flag1 = false;
      if (!list1.IsEmpty<GameEntity>())
      {
        List<AreaMarker> list2 = this.Mission.ActiveMissionObjects.FindAllWithType<AreaMarker>().ToList<AreaMarker>();
        foreach (GameEntity gameEntity in list1)
        {
          bool flag2 = false;
          foreach (AreaMarker areaMarker in list2)
          {
            if (areaMarker.IsPositionInRange(gameEntity.GlobalPosition))
            {
              if (this._conversationPoints.ContainsKey(areaMarker.Tag))
              {
                this._conversationPoints[areaMarker.Tag].Add(gameEntity);
              }
              else
              {
                Dictionary<string, MBList<GameEntity>> conversationPoints = this._conversationPoints;
                string tag = areaMarker.Tag;
                MBList<GameEntity> mbList = new MBList<GameEntity>();
                mbList.Add(gameEntity);
                conversationPoints.Add(tag, mbList);
              }
              flag2 = true;
              break;
            }
          }
          if (!flag2)
          {
            if (this._conversationPoints.ContainsKey("CenterConversationPoint"))
            {
              this._conversationPoints["CenterConversationPoint"].Add(gameEntity);
            }
            else
            {
              Dictionary<string, MBList<GameEntity>> conversationPoints = this._conversationPoints;
              MBList<GameEntity> mbList = new MBList<GameEntity>();
              mbList.Add(gameEntity);
              conversationPoints.Add("CenterConversationPoint", mbList);
            }
          }
        }
        flag1 = true;
      }
      else
        Debug.FailedAssert("Scene must have at least one 'sp_player_conversation' game entity. Scene Name: " + Mission.Current.Scene.GetName(), "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Conversation\\Logics\\MissionConversationLogic.cs", nameof (FillConversationPointList), 375);
      return flag1;
    }

    private void DetermineSpawnPoint()
    {
      MBList<GameEntity> e1;
      if (this._customSpawnTag != null && this._conversationPoints.TryGetValue(this._customSpawnTag, out e1))
      {
        this._selectedConversationPoint = e1.GetRandomElement<GameEntity>();
      }
      else
      {
        string agentsTag = this.ConversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SpecialTargetTag;
        if (agentsTag != null)
        {
          MBList<GameEntity> e2 = this._conversationPoints.FirstOrDefault<KeyValuePair<string, MBList<GameEntity>>>((Func<KeyValuePair<string, MBList<GameEntity>>, bool>) (x => agentsTag.Contains(x.Key))).Value;
          this._selectedConversationPoint = e2 != null ? e2.GetRandomElement<GameEntity>() : (GameEntity) null;
        }
        if (!((NativeObject) this._selectedConversationPoint == (NativeObject) null))
          return;
        if (this._conversationPoints.ContainsKey("CenterConversationPoint"))
          this._selectedConversationPoint = this._conversationPoints["CenterConversationPoint"].GetRandomElement<GameEntity>();
        else
          this._selectedConversationPoint = this._conversationPoints.GetRandomElementInefficiently<KeyValuePair<string, MBList<GameEntity>>>().Value.GetRandomElement<GameEntity>();
      }
    }
  }
}
