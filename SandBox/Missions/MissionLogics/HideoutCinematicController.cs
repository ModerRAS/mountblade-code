// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.HideoutCinematicController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Objects.Cinematics;
using System.Collections.Generic;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class HideoutCinematicController : MissionLogic
  {
    private const float AgentTargetProximityThreshold = 0.5f;
    private const float AgentMaxSpeedCinematicOverride = 0.65f;
    public const string HideoutSceneEntityTag = "hideout_boss_fight";
    public const float DefaultTransitionDuration = 0.4f;
    public const float DefaultStateDuration = 0.2f;
    public const float DefaultCinematicDuration = 8f;
    public const float DefaultPlacementPerturbation = 0.25f;
    public const float DefaultPlacementAngle = 0.209439516f;
    private HideoutCinematicController.OnInitialFadeOutFinished _initialFadeOutFinished;
    private HideoutCinematicController.OnHideoutCinematicFinished _cinematicFinishedCallback;
    private HideoutCinematicController.OnHideoutCinematicStateChanged _stateChangedCallback;
    private HideoutCinematicController.OnHideoutCinematicTransition _transitionCallback;
    private float _cinematicDuration = 8f;
    private float _stateDuration = 0.2f;
    private float _transitionDuration = 0.4f;
    private float _remainingCinematicDuration = 8f;
    private float _remainingStateDuration = 0.2f;
    private float _remainingTransitionDuration = 0.4f;
    private List<Formation> _cachedAgentFormations;
    private List<HideoutCinematicController.HideoutCinematicAgentInfo> _hideoutAgentsInfo;
    private HideoutCinematicController.HideoutCinematicAgentInfo _bossAgentInfo;
    private HideoutCinematicController.HideoutCinematicAgentInfo _playerAgentInfo;
    private bool _isBehaviorInit;
    private HideoutCinematicController.HideoutPreCinematicPhase _preCinematicPhase;
    private HideoutCinematicController.HideoutPostCinematicPhase _postCinematicPhase;
    private HideoutBossFightBehavior _hideoutBossFightBehavior;

    public HideoutCinematicController.HideoutCinematicState State { get; private set; }

    public bool InStateTransition { get; private set; }

    public bool IsCinematicActive => this.State != 0;

    public float CinematicDuration => this._cinematicDuration;

    public float TransitionDuration => this._transitionDuration;

    public override MissionBehaviorType BehaviorType => MissionBehaviorType.Logic;

    public HideoutCinematicController()
    {
      this.State = HideoutCinematicController.HideoutCinematicState.None;
      this._cinematicFinishedCallback = (HideoutCinematicController.OnHideoutCinematicFinished) null;
      this._transitionCallback = (HideoutCinematicController.OnHideoutCinematicTransition) null;
      this._stateChangedCallback = (HideoutCinematicController.OnHideoutCinematicStateChanged) null;
      this.InStateTransition = false;
      this._isBehaviorInit = false;
    }

    public void SetStateTransitionCallback(
      HideoutCinematicController.OnHideoutCinematicStateChanged onStateChanged,
      HideoutCinematicController.OnHideoutCinematicTransition onTransition)
    {
      this._stateChangedCallback = onStateChanged;
      this._transitionCallback = onTransition;
    }

    public void StartCinematic(
      HideoutCinematicController.OnInitialFadeOutFinished initialFadeOutFinished,
      HideoutCinematicController.OnHideoutCinematicFinished cinematicFinishedCallback,
      float transitionDuration = 0.4f,
      float stateDuration = 0.2f,
      float cinematicDuration = 8f)
    {
      if (this._isBehaviorInit && this.State == HideoutCinematicController.HideoutCinematicState.None)
      {
        this._cinematicFinishedCallback = cinematicFinishedCallback;
        this._initialFadeOutFinished = initialFadeOutFinished;
        this._preCinematicPhase = HideoutCinematicController.HideoutPreCinematicPhase.InitializeFormations;
        this._postCinematicPhase = HideoutCinematicController.HideoutPostCinematicPhase.MoveAgents;
        this._transitionDuration = transitionDuration;
        this._stateDuration = stateDuration;
        this._cinematicDuration = cinematicDuration;
        this._remainingCinematicDuration = this._cinematicDuration;
        this.BeginStateTransition(HideoutCinematicController.HideoutCinematicState.InitialFadeOut);
      }
      else if (!this._isBehaviorInit)
      {
        Debug.FailedAssert("Hideout cinematic controller is not initialized.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\MissionLogics\\HideoutCinematicController.cs", nameof (StartCinematic), 195);
      }
      else
      {
        if (this.State == HideoutCinematicController.HideoutCinematicState.None)
          return;
        Debug.FailedAssert("There is already an ongoing cinematic.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\MissionLogics\\HideoutCinematicController.cs", nameof (StartCinematic), 199);
      }
    }

    public MatrixFrame GetBanditsInitialFrame()
    {
      MatrixFrame frame;
      this._hideoutBossFightBehavior.GetBanditsInitialFrame(out frame);
      return frame;
    }

    public void GetBossStandingEyePosition(out Vec3 eyePosition)
    {
      if (this._bossAgentInfo.Agent?.Monster != null)
      {
        eyePosition = this._bossAgentInfo.InitialFrame.origin + Vec3.Up * (this._bossAgentInfo.Agent.AgentScale * this._bossAgentInfo.Agent.Monster.StandingEyeHeight);
      }
      else
      {
        eyePosition = Vec3.Zero;
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\MissionLogics\\HideoutCinematicController.cs", nameof (GetBossStandingEyePosition), 218);
      }
    }

    public void GetPlayerStandingEyePosition(out Vec3 eyePosition)
    {
      if (this._playerAgentInfo.Agent?.Monster != null)
      {
        eyePosition = this._playerAgentInfo.InitialFrame.origin + Vec3.Up * (this._playerAgentInfo.Agent.AgentScale * this._playerAgentInfo.Agent.Monster.StandingEyeHeight);
      }
      else
      {
        eyePosition = Vec3.Zero;
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\MissionLogics\\HideoutCinematicController.cs", nameof (GetPlayerStandingEyePosition), 231);
      }
    }

    public void GetScenePrefabParameters(
      out float innerRadius,
      out float outerRadius,
      out float walkDistance)
    {
      innerRadius = 0.0f;
      outerRadius = 0.0f;
      walkDistance = 0.0f;
      if (this._hideoutBossFightBehavior == null)
        return;
      innerRadius = this._hideoutBossFightBehavior.InnerRadius;
      outerRadius = this._hideoutBossFightBehavior.OuterRadius;
      walkDistance = this._hideoutBossFightBehavior.WalkDistance;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("hideout_boss_fight");
      this._hideoutBossFightBehavior = entityWithTag?.GetFirstScriptOfType<HideoutBossFightBehavior>();
      this._isBehaviorInit = (NativeObject) entityWithTag != (NativeObject) null && this._hideoutBossFightBehavior != null;
    }

    public override void OnMissionTick(float dt)
    {
      if (!this._isBehaviorInit || !this.IsCinematicActive)
        return;
      if (this.InStateTransition)
      {
        this.TickStateTransition(dt);
      }
      else
      {
        switch (this.State)
        {
          case HideoutCinematicController.HideoutCinematicState.InitialFadeOut:
            if (!this.TickInitialFadeOut(dt))
              break;
            this.BeginStateTransition(HideoutCinematicController.HideoutCinematicState.PreCinematic);
            break;
          case HideoutCinematicController.HideoutCinematicState.PreCinematic:
            if (!this.TickPreCinematic(dt))
              break;
            this.BeginStateTransition(HideoutCinematicController.HideoutCinematicState.Cinematic);
            break;
          case HideoutCinematicController.HideoutCinematicState.Cinematic:
            if (!this.TickCinematic(dt))
              break;
            this.BeginStateTransition(HideoutCinematicController.HideoutCinematicState.PostCinematic);
            break;
          case HideoutCinematicController.HideoutCinematicState.PostCinematic:
            if (!this.TickPostCinematic(dt))
              break;
            this.BeginStateTransition(HideoutCinematicController.HideoutCinematicState.Completed);
            break;
          case HideoutCinematicController.HideoutCinematicState.Completed:
            HideoutCinematicController.OnHideoutCinematicFinished finishedCallback = this._cinematicFinishedCallback;
            if (finishedCallback != null)
              finishedCallback();
            this.State = HideoutCinematicController.HideoutCinematicState.None;
            break;
        }
      }
    }

    private void TickStateTransition(float dt)
    {
      this._remainingTransitionDuration -= dt;
      if ((double) this._remainingTransitionDuration > 0.0)
        return;
      this.InStateTransition = false;
      HideoutCinematicController.OnHideoutCinematicStateChanged stateChangedCallback = this._stateChangedCallback;
      if (stateChangedCallback != null)
        stateChangedCallback(this.State);
      this._remainingStateDuration = this._stateDuration;
    }

    private bool TickInitialFadeOut(float dt)
    {
      this._remainingStateDuration -= dt;
      if ((double) this._remainingStateDuration <= 0.0)
      {
        Agent playerAgent = (Agent) null;
        Agent bossAgent = (Agent) null;
        List<Agent> playerCompanions = (List<Agent>) null;
        List<Agent> bossCompanions = (List<Agent>) null;
        float placementPerturbation = 0.25f;
        float placementAngle = 0.209439516f;
        HideoutCinematicController.OnInitialFadeOutFinished initialFadeOutFinished = this._initialFadeOutFinished;
        if (initialFadeOutFinished != null)
          initialFadeOutFinished(ref playerAgent, ref playerCompanions, ref bossAgent, ref bossCompanions, ref placementPerturbation, ref placementAngle);
        this.ComputeAgentFrames(playerAgent, playerCompanions, bossAgent, bossCompanions, placementPerturbation, placementAngle);
      }
      return (double) this._remainingStateDuration <= 0.0;
    }

    private bool TickPreCinematic(float dt)
    {
      Scene scene = this.Mission.Scene;
      this._remainingStateDuration -= dt;
      switch (this._preCinematicPhase)
      {
        case HideoutCinematicController.HideoutPreCinematicPhase.InitializeFormations:
          this._playerAgentInfo.Agent.Controller = Agent.ControllerType.AI;
          bool teleportingAgents1 = this.Mission.IsTeleportingAgents;
          this.Mission.IsTeleportingAgents = true;
          MatrixFrame frame1;
          this._hideoutBossFightBehavior.GetAlliesInitialFrame(out frame1);
          foreach (Formation formation in (List<Formation>) this.Mission.Teams.Attacker.FormationsIncludingEmpty)
          {
            if (formation.CountOfUnits > 0)
            {
              WorldPosition position = new WorldPosition(scene, frame1.origin);
              formation.SetMovementOrder(MovementOrder.MovementOrderMove(position));
            }
          }
          MatrixFrame frame2;
          this._hideoutBossFightBehavior.GetBanditsInitialFrame(out frame2);
          foreach (Formation formation in (List<Formation>) this.Mission.Teams.Defender.FormationsIncludingEmpty)
          {
            if (formation.CountOfUnits > 0)
            {
              WorldPosition position = new WorldPosition(scene, frame2.origin);
              formation.SetMovementOrder(MovementOrder.MovementOrderMove(position));
            }
          }
          foreach (HideoutCinematicController.HideoutCinematicAgentInfo cinematicAgentInfo in this._hideoutAgentsInfo)
          {
            Agent agent1 = cinematicAgentInfo.Agent;
            Vec3 f = cinematicAgentInfo.InitialFrame.rotation.f;
            agent1.LookDirection = f;
            Agent agent2 = agent1;
            Vec2 vec2 = f.AsVec2;
            vec2 = vec2.Normalized();
            ref Vec2 local = ref vec2;
            agent2.SetMovementDirection(in local);
          }
          this.Mission.IsTeleportingAgents = teleportingAgents1;
          this._preCinematicPhase = HideoutCinematicController.HideoutPreCinematicPhase.StopFormations;
          break;
        case HideoutCinematicController.HideoutPreCinematicPhase.StopFormations:
          foreach (Formation formation in (List<Formation>) this.Mission.Teams.Attacker.FormationsIncludingEmpty)
          {
            if (formation.CountOfUnits > 0)
              formation.SetMovementOrder(MovementOrder.MovementOrderStop);
          }
          foreach (Formation formation in (List<Formation>) this.Mission.Teams.Defender.FormationsIncludingEmpty)
          {
            if (formation.CountOfUnits > 0)
              formation.SetMovementOrder(MovementOrder.MovementOrderStop);
          }
          this._preCinematicPhase = HideoutCinematicController.HideoutPreCinematicPhase.InitializeAgents;
          break;
        case HideoutCinematicController.HideoutPreCinematicPhase.InitializeAgents:
          bool teleportingAgents2 = this.Mission.IsTeleportingAgents;
          this.Mission.IsTeleportingAgents = true;
          this._cachedAgentFormations = new List<Formation>();
          foreach (HideoutCinematicController.HideoutCinematicAgentInfo cinematicAgentInfo in this._hideoutAgentsInfo)
          {
            Agent agent3 = cinematicAgentInfo.Agent;
            this._cachedAgentFormations.Add(agent3.Formation);
            agent3.Formation = (Formation) null;
            MatrixFrame initialFrame = cinematicAgentInfo.InitialFrame;
            WorldPosition worldPosition = new WorldPosition(scene, initialFrame.origin);
            Vec3 f = initialFrame.rotation.f;
            agent3.TeleportToPosition(worldPosition.GetGroundVec3());
            agent3.LookDirection = f;
            Agent agent4 = agent3;
            Vec2 vec2 = f.AsVec2;
            vec2 = vec2.Normalized();
            ref Vec2 local = ref vec2;
            agent4.SetMovementDirection(in local);
          }
          this.Mission.IsTeleportingAgents = teleportingAgents2;
          this._preCinematicPhase = HideoutCinematicController.HideoutPreCinematicPhase.MoveAgents;
          break;
        case HideoutCinematicController.HideoutPreCinematicPhase.MoveAgents:
          foreach (HideoutCinematicController.HideoutCinematicAgentInfo cinematicAgentInfo in this._hideoutAgentsInfo)
          {
            Agent agent = cinematicAgentInfo.Agent;
            MatrixFrame targetFrame = cinematicAgentInfo.TargetFrame;
            WorldPosition scriptedPosition = new WorldPosition(scene, targetFrame.origin);
            agent.SetMaximumSpeedLimit(0.65f, false);
            agent.SetScriptedPositionAndDirection(ref scriptedPosition, targetFrame.rotation.f.AsVec2.RotationInRadians, true);
          }
          this._preCinematicPhase = HideoutCinematicController.HideoutPreCinematicPhase.Completed;
          break;
      }
      return this._preCinematicPhase == HideoutCinematicController.HideoutPreCinematicPhase.Completed && (double) this._remainingStateDuration <= 0.0;
    }

    private bool TickCinematic(float dt)
    {
      this._remainingCinematicDuration -= dt;
      this._remainingStateDuration -= dt;
      return (double) this._remainingCinematicDuration <= 0.0 && (double) this._remainingStateDuration <= 0.0;
    }

    private bool TickPostCinematic(float dt)
    {
      this._remainingStateDuration -= dt;
      switch (this._postCinematicPhase)
      {
        case HideoutCinematicController.HideoutPostCinematicPhase.MoveAgents:
          int index = 0;
          foreach (HideoutCinematicController.HideoutCinematicAgentInfo cinematicAgentInfo in this._hideoutAgentsInfo)
          {
            Agent agent1 = cinematicAgentInfo.Agent;
            if (!cinematicAgentInfo.HasReachedTarget())
            {
              MatrixFrame targetFrame = cinematicAgentInfo.TargetFrame;
              WorldPosition worldPosition = new WorldPosition(this.Mission.Scene, targetFrame.origin);
              agent1.TeleportToPosition(worldPosition.GetGroundVec3());
              Agent agent2 = agent1;
              Vec2 vec2 = targetFrame.rotation.f.AsVec2;
              vec2 = vec2.Normalized();
              ref Vec2 local = ref vec2;
              agent2.SetMovementDirection(in local);
            }
            agent1.Formation = this._cachedAgentFormations[index];
            ++index;
          }
          this._postCinematicPhase = HideoutCinematicController.HideoutPostCinematicPhase.FinalizeAgents;
          break;
        case HideoutCinematicController.HideoutPostCinematicPhase.FinalizeAgents:
          foreach (HideoutCinematicController.HideoutCinematicAgentInfo cinematicAgentInfo in this._hideoutAgentsInfo)
          {
            Agent agent = cinematicAgentInfo.Agent;
            agent.DisableScriptedMovement();
            agent.SetMaximumSpeedLimit(-1f, false);
          }
          this._postCinematicPhase = HideoutCinematicController.HideoutPostCinematicPhase.Completed;
          break;
      }
      return this._postCinematicPhase == HideoutCinematicController.HideoutPostCinematicPhase.Completed && (double) this._remainingStateDuration <= 0.0;
    }

    private void BeginStateTransition(
      HideoutCinematicController.HideoutCinematicState nextState)
    {
      this.State = nextState;
      this._remainingTransitionDuration = this._transitionDuration;
      this.InStateTransition = true;
      HideoutCinematicController.OnHideoutCinematicTransition transitionCallback = this._transitionCallback;
      if (transitionCallback == null)
        return;
      transitionCallback(this.State, this._remainingTransitionDuration);
    }

    private bool CheckNavMeshValidity(ref Vec3 initial, ref Vec3 target)
    {
      Scene scene = this.Mission.Scene;
      bool flag = false;
      if (scene.GetNavigationMeshForPosition(ref initial) & scene.GetNavigationMeshForPosition(ref target))
      {
        WorldPosition position = new WorldPosition(scene, initial);
        WorldPosition destination = new WorldPosition(scene, target);
        flag = scene.DoesPathExistBetweenPositions(position, destination);
      }
      return flag;
    }

    private void ComputeAgentFrames(
      Agent playerAgent,
      List<Agent> playerCompanions,
      Agent bossAgent,
      List<Agent> bossCompanions,
      float placementPerturbation,
      float placementAngle)
    {
      this._hideoutAgentsInfo = new List<HideoutCinematicController.HideoutCinematicAgentInfo>();
      MatrixFrame initialFrame;
      MatrixFrame targetFrame;
      this._hideoutBossFightBehavior.GetPlayerFrames(out initialFrame, out targetFrame, placementPerturbation);
      this._playerAgentInfo = new HideoutCinematicController.HideoutCinematicAgentInfo(playerAgent, HideoutCinematicController.HideoutAgentType.Player, in initialFrame, in targetFrame);
      this._hideoutAgentsInfo.Add(this._playerAgentInfo);
      List<MatrixFrame> initialFrames;
      List<MatrixFrame> targetFrames;
      this._hideoutBossFightBehavior.GetAllyFrames(out initialFrames, out targetFrames, playerCompanions.Count, placementAngle, placementPerturbation);
      for (int index = 0; index < playerCompanions.Count; ++index)
      {
        initialFrame = initialFrames[index];
        targetFrame = targetFrames[index];
        this._hideoutAgentsInfo.Add(new HideoutCinematicController.HideoutCinematicAgentInfo(playerCompanions[index], HideoutCinematicController.HideoutAgentType.Ally, in initialFrame, in targetFrame));
      }
      this._hideoutBossFightBehavior.GetBossFrames(out initialFrame, out targetFrame, placementPerturbation);
      this._bossAgentInfo = new HideoutCinematicController.HideoutCinematicAgentInfo(bossAgent, HideoutCinematicController.HideoutAgentType.Boss, in initialFrame, in targetFrame);
      this._hideoutAgentsInfo.Add(this._bossAgentInfo);
      this._hideoutBossFightBehavior.GetBanditFrames(out initialFrames, out targetFrames, bossCompanions.Count, placementAngle, placementPerturbation);
      for (int index = 0; index < bossCompanions.Count; ++index)
      {
        initialFrame = initialFrames[index];
        targetFrame = targetFrames[index];
        this._hideoutAgentsInfo.Add(new HideoutCinematicController.HideoutCinematicAgentInfo(bossCompanions[index], HideoutCinematicController.HideoutAgentType.Bandit, in initialFrame, in targetFrame));
      }
    }

    public delegate void OnInitialFadeOutFinished(
      ref Agent playerAgent,
      ref List<Agent> playerCompanions,
      ref Agent bossAgent,
      ref List<Agent> bossCompanions,
      ref float placementPerturbation,
      ref float placementAngle);

    public delegate void OnHideoutCinematicFinished();

    public delegate void OnHideoutCinematicStateChanged(
      HideoutCinematicController.HideoutCinematicState state);

    public delegate void OnHideoutCinematicTransition(
      HideoutCinematicController.HideoutCinematicState nextState,
      float duration);

    public readonly struct HideoutCinematicAgentInfo
    {
      public readonly Agent Agent;
      public readonly MatrixFrame InitialFrame;
      public readonly MatrixFrame TargetFrame;
      public readonly HideoutCinematicController.HideoutAgentType Type;

      public HideoutCinematicAgentInfo(
        Agent agent,
        HideoutCinematicController.HideoutAgentType type,
        in MatrixFrame initialFrame,
        in MatrixFrame targetFrame)
      {
        this.Agent = agent;
        this.InitialFrame = initialFrame;
        this.TargetFrame = targetFrame;
        this.Type = type;
      }

      public bool HasReachedTarget(float proximityThreshold = 0.5f)
      {
        return (double) this.Agent.Position.Distance(this.TargetFrame.origin) <= (double) proximityThreshold;
      }
    }

    public enum HideoutCinematicState
    {
      None,
      InitialFadeOut,
      PreCinematic,
      Cinematic,
      PostCinematic,
      Completed,
    }

    public enum HideoutAgentType
    {
      Player,
      Boss,
      Ally,
      Bandit,
    }

    public enum HideoutPreCinematicPhase
    {
      NotStarted,
      InitializeFormations,
      StopFormations,
      InitializeAgents,
      MoveAgents,
      Completed,
    }

    public enum HideoutPostCinematicPhase
    {
      NotStarted,
      MoveAgents,
      FinalizeAgents,
      Completed,
    }
  }
}
