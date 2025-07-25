// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.AnimationPoints.AnimationPoint
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Conversation;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.Objects.AnimationPoints
{
  public class AnimationPoint : StandingPoint
  {
    private const string AlternativeTag = "alternative";
    private const float RangeThreshold = 0.2f;
    private const float RotationScoreThreshold = 0.99f;
    private const float ActionSpeedRandomMinValue = 0.8f;
    private const float AnimationRandomProgressMaxValue = 0.5f;
    public string ArriveAction = "";
    public string LoopStartAction = "";
    public string PairLoopStartAction = "";
    public string LeaveAction = "";
    public int GroupId = -1;
    public string RightHandItem = "";
    public HumanBone RightHandItemBone = HumanBone.ItemR;
    public string LeftHandItem = "";
    public HumanBone LeftHandItemBone = HumanBone.ItemL;
    public GameEntity PairEntity;
    public int MinUserToStartInteraction = 1;
    public bool ActivatePairs;
    public float MinWaitinSeconds = 30f;
    public float MaxWaitInSeconds = 120f;
    public float ForwardDistanceToPivotPoint;
    public float SideDistanceToPivotPoint;
    private bool _startPairAnimationWithGreeting;
    protected float ActionSpeed = 1f;
    public bool KeepOldVisibility;
    private ActionIndexCache ArriveActionCode;
    protected ActionIndexCache LoopStartActionCode;
    protected ActionIndexCache PairLoopStartActionCode;
    private ActionIndexCache LeaveActionCode;
    protected ActionIndexCache DefaultActionCode;
    private bool _resyncAnimations;
    private string _selectedRightHandItem;
    private string _selectedLeftHandItem;
    private AnimationPoint.State _state;
    private AnimationPoint.PairState _pairState;
    private Vec3 _pointRotation;
    private List<AnimationPoint> _pairPoints;
    private List<AnimationPoint.ItemForBone> _itemsForBones;
    private ActionIndexValueCache _lastAction;
    private Timer _greetingTimer;
    private GameEntity _animatedEntity;
    private Vec3 _animatedEntityDisplacement = Vec3.Zero;
    private EquipmentIndex _equipmentIndexMainHand;
    private EquipmentIndex _equipmentIndexOffHand;
    private readonly ActionIndexCache[] _greetingFrontActions = new ActionIndexCache[4]
    {
      ActionIndexCache.Create("act_greeting_front_1"),
      ActionIndexCache.Create("act_greeting_front_2"),
      ActionIndexCache.Create("act_greeting_front_3"),
      ActionIndexCache.Create("act_greeting_front_4")
    };
    private readonly ActionIndexCache[] _greetingRightActions = new ActionIndexCache[4]
    {
      ActionIndexCache.Create("act_greeting_right_1"),
      ActionIndexCache.Create("act_greeting_right_2"),
      ActionIndexCache.Create("act_greeting_right_3"),
      ActionIndexCache.Create("act_greeting_right_4")
    };
    private readonly ActionIndexCache[] _greetingLeftActions = new ActionIndexCache[4]
    {
      ActionIndexCache.Create("act_greeting_left_1"),
      ActionIndexCache.Create("act_greeting_left_2"),
      ActionIndexCache.Create("act_greeting_left_3"),
      ActionIndexCache.Create("act_greeting_left_4")
    };

    public override bool PlayerStopsUsingWhenInteractsWithOther => false;

    public bool IsArriveActionFinished { get; private set; }

    protected string SelectedRightHandItem
    {
      get => this._selectedRightHandItem;
      set
      {
        if (!(value != this._selectedRightHandItem))
          return;
        this.AssignItemToBone(new AnimationPoint.ItemForBone(this.RightHandItemBone, value, false));
        this._selectedRightHandItem = value;
      }
    }

    protected string SelectedLeftHandItem
    {
      get => this._selectedLeftHandItem;
      set
      {
        if (!(value != this._selectedLeftHandItem))
          return;
        this.AssignItemToBone(new AnimationPoint.ItemForBone(this.LeftHandItemBone, value, false));
        this._selectedLeftHandItem = value;
      }
    }

    public bool IsActive { get; private set; } = true;

    public AnimationPoint() => this._greetingTimer = (Timer) null;

    public override bool DisableCombatActionsOnUse => !this.IsInstantUse;

    private void CreateVisualizer()
    {
      if (!(this.PairLoopStartActionCode != ActionIndexCache.act_none) && !(this.LoopStartActionCode != ActionIndexCache.act_none))
        return;
      this._animatedEntity = GameEntity.CreateEmpty(this.GameEntity.Scene, false);
      this._animatedEntity.EntityFlags |= EntityFlags.DontSaveToScene;
      this._animatedEntity.Name = "ap_visual_entity";
      MBActionSet actionSet = MBActionSet.GetActionSetWithIndex(0);
      ActionIndexCache actionIndex = ActionIndexCache.act_none;
      int numberOfActionSets = MBActionSet.GetNumberOfActionSets();
      for (int index = 0; index < numberOfActionSets; ++index)
      {
        MBActionSet actionSetWithIndex = MBActionSet.GetActionSetWithIndex(index);
        if (this.ArriveActionCode == ActionIndexCache.act_none || MBActionSet.CheckActionAnimationClipExists(actionSetWithIndex, this.ArriveActionCode))
        {
          if (this.PairLoopStartActionCode != ActionIndexCache.act_none && MBActionSet.CheckActionAnimationClipExists(actionSetWithIndex, this.PairLoopStartActionCode))
          {
            actionSet = actionSetWithIndex;
            actionIndex = this.PairLoopStartActionCode;
            break;
          }
          if (this.LoopStartActionCode != ActionIndexCache.act_none && MBActionSet.CheckActionAnimationClipExists(actionSetWithIndex, this.LoopStartActionCode))
          {
            actionSet = actionSetWithIndex;
            actionIndex = this.LoopStartActionCode;
            break;
          }
        }
      }
      if (actionIndex == (ActionIndexCache) null || actionIndex == ActionIndexCache.act_none)
        actionIndex = ActionIndexCache.Create("act_jump_loop");
      this._animatedEntity.CreateAgentSkeleton("human_skeleton", true, actionSet, "human", MBObjectManager.Instance.GetObject<Monster>("human"));
      this._animatedEntity.Skeleton.SetAgentActionChannel(0, actionIndex);
      this._animatedEntity.AddMultiMeshToSkeleton(MetaMesh.GetCopy("roman_cloth_tunic_a"));
      this._animatedEntity.AddMultiMeshToSkeleton(MetaMesh.GetCopy("casual_02_boots"));
      this._animatedEntity.AddMultiMeshToSkeleton(MetaMesh.GetCopy("hands_male_a"));
      this._animatedEntity.AddMultiMeshToSkeleton(MetaMesh.GetCopy("head_male_a"));
      this._animatedEntityDisplacement = Vec3.Zero;
      if (this.ArriveActionCode != ActionIndexCache.act_none && (MBActionSet.GetActionAnimationFlags(actionSet, this.ArriveActionCode) & AnimFlags.anf_displace_position) != (AnimFlags) 0)
        this._animatedEntityDisplacement = MBActionSet.GetActionDisplacementVector(actionSet, this.ArriveActionCode);
      this.UpdateAnimatedEntityFrame();
    }

    private void UpdateAnimatedEntityFrame()
    {
      MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
      MatrixFrame parent = globalFrame.TransformToParent(new MatrixFrame()
      {
        rotation = Mat3.Identity,
        origin = this._animatedEntityDisplacement
      });
      globalFrame.origin = parent.origin;
      this._animatedEntity.SetFrame(ref globalFrame);
    }

    protected override void OnEditModeVisibilityChanged(bool currentVisibility)
    {
      if (!((NativeObject) this._animatedEntity != (NativeObject) null))
        return;
      this._animatedEntity.SetVisibilityExcludeParents(currentVisibility);
      if (this.GameEntity.IsGhostObject())
        return;
      this._resyncAnimations = true;
    }

    protected override void OnEditorTick(float dt)
    {
      if (!((NativeObject) this._animatedEntity != (NativeObject) null))
        return;
      if (this._resyncAnimations)
      {
        this.ResetAnimations();
        this._resyncAnimations = false;
      }
      bool flag = this._animatedEntity.IsVisibleIncludeParents();
      if (flag && !MBEditor.HelpersEnabled())
      {
        this._animatedEntity.SetVisibilityExcludeParents(false);
        flag = false;
      }
      if (!flag)
        return;
      this.UpdateAnimatedEntityFrame();
    }

    protected override void OnEditorInit()
    {
      this._itemsForBones = new List<AnimationPoint.ItemForBone>();
      this.SetActionCodes();
      this.InitParameters();
      if (this.GameEntity.IsGhostObject())
        return;
      this.CreateVisualizer();
    }

    protected override void OnRemoved(int removeReason)
    {
      base.OnRemoved(removeReason);
      if (!((NativeObject) this._animatedEntity != (NativeObject) null) || !((NativeObject) this._animatedEntity.Scene == (NativeObject) this.GameEntity.Scene))
        return;
      this._animatedEntity.Remove(removeReason);
      this._animatedEntity = (GameEntity) null;
    }

    protected void ResetAnimations()
    {
      ActionIndexCache actionIndex = ActionIndexCache.act_none;
      int numberOfActionSets = MBActionSet.GetNumberOfActionSets();
      for (int index = 0; index < numberOfActionSets; ++index)
      {
        MBActionSet actionSetWithIndex = MBActionSet.GetActionSetWithIndex(index);
        if (this.ArriveActionCode == ActionIndexCache.act_none || MBActionSet.CheckActionAnimationClipExists(actionSetWithIndex, this.ArriveActionCode))
        {
          if (this.PairLoopStartActionCode != ActionIndexCache.act_none && MBActionSet.CheckActionAnimationClipExists(actionSetWithIndex, this.PairLoopStartActionCode))
          {
            actionIndex = this.PairLoopStartActionCode;
            break;
          }
          if (this.LoopStartActionCode != ActionIndexCache.act_none && MBActionSet.CheckActionAnimationClipExists(actionSetWithIndex, this.LoopStartActionCode))
          {
            actionIndex = this.LoopStartActionCode;
            break;
          }
        }
      }
      if (!(actionIndex != (ActionIndexCache) null) || !(actionIndex != ActionIndexCache.act_none))
        return;
      this._animatedEntity.Skeleton.SetAgentActionChannel(0, ActionIndexCache.Create("act_jump_loop"));
      this._animatedEntity.Skeleton.SetAgentActionChannel(0, actionIndex);
    }

    protected override void OnEditorVariableChanged(string variableName)
    {
      if (!this.ShouldUpdateOnEditorVariableChanged(variableName))
        return;
      if ((NativeObject) this._animatedEntity != (NativeObject) null)
        this._animatedEntity.Remove(91);
      this.SetActionCodes();
      this.CreateVisualizer();
    }

    public void RequestResync() => this._resyncAnimations = true;

    public override void AfterMissionStart()
    {
      if (Agent.Main == null || !(this.LoopStartActionCode != ActionIndexCache.act_none) || MBActionSet.CheckActionAnimationClipExists(Agent.Main.ActionSet, this.LoopStartActionCode))
        return;
      this.IsDisabledForPlayers = true;
    }

    protected virtual bool ShouldUpdateOnEditorVariableChanged(string variableName)
    {
      return variableName == "ArriveAction" || variableName == "LoopStartAction" || variableName == "PairLoopStartAction";
    }

    protected void ClearAssignedItems()
    {
      this.SetAgentItemsVisibility(false);
      this._itemsForBones.Clear();
    }

    protected void AssignItemToBone(AnimationPoint.ItemForBone newItem)
    {
      if (string.IsNullOrEmpty(newItem.ItemPrefabName) || this._itemsForBones.Contains(newItem))
        return;
      this._itemsForBones.Add(newItem);
    }

    public override bool IsDisabledForAgent(Agent agent)
    {
      if (this.HasUser && this.UserAgent == agent)
        return !this.IsActive || this.IsDeactivated;
      if (!this.IsActive || agent.MountAgent != null || this.IsDeactivated || !agent.IsOnLand() || !agent.IsAIControlled && (this.IsDisabledForPlayers || this.HasUser))
        return true;
      GameEntity parent = this.GameEntity.Parent;
      if ((NativeObject) parent == (NativeObject) null || !parent.HasScriptOfType<UsableMachine>() || !this.GameEntity.HasTag("alternative"))
        return base.IsDisabledForAgent(agent);
      if (agent.IsAIControlled && parent.HasTag("reserved"))
        return true;
      string tag = agent.GetComponent<CampaignAgentComponent>()?.AgentNavigator != null ? agent.GetComponent<CampaignAgentComponent>().AgentNavigator.SpecialTargetTag : string.Empty;
      if (!string.IsNullOrEmpty(tag) && !parent.HasTag(tag))
        return true;
      foreach (StandingPoint standingPoint in (List<StandingPoint>) parent.GetFirstScriptOfType<UsableMachine>().StandingPoints)
      {
        if (standingPoint is AnimationPoint animationPoint && this.GroupId == animationPoint.GroupId && !animationPoint.IsDeactivated && (animationPoint.HasUser || animationPoint.HasAIMovingTo && !animationPoint.IsAIMovingTo(agent)) && animationPoint.GameEntity.HasTag("alternative"))
          return true;
      }
      return false;
    }

    protected override void OnInit()
    {
      base.OnInit();
      this._itemsForBones = new List<AnimationPoint.ItemForBone>();
      this.SetActionCodes();
      this.InitParameters();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    private void InitParameters()
    {
      this._greetingTimer = (Timer) null;
      this._pointRotation = Vec3.Zero;
      this._state = AnimationPoint.State.NotUsing;
      this._pairPoints = this.GetPairs(this.PairEntity);
      if (this.ActivatePairs)
        this.SetPairsActivity(false);
      this.LockUserPositions = true;
    }

    protected virtual void SetActionCodes()
    {
      this.ArriveActionCode = ActionIndexCache.Create(this.ArriveAction);
      this.LoopStartActionCode = ActionIndexCache.Create(this.LoopStartAction);
      this.PairLoopStartActionCode = ActionIndexCache.Create(this.PairLoopStartAction);
      this.LeaveActionCode = ActionIndexCache.Create(this.LeaveAction);
      this.SelectedRightHandItem = this.RightHandItem;
      this.SelectedLeftHandItem = this.LeftHandItem;
    }

    protected override bool DoesActionTypeStopUsingGameObject(Agent.ActionCodeType actionType)
    {
      return false;
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.HasUser ? base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick : base.GetTickRequirement();
    }

    protected override void OnTick(float dt)
    {
      base.OnTick(dt);
      this.Tick(dt);
    }

    private List<AnimationPoint> GetPairs(GameEntity entity)
    {
      List<AnimationPoint> pairs = new List<AnimationPoint>();
      if ((NativeObject) entity != (NativeObject) null)
      {
        if (entity.HasScriptOfType<AnimationPoint>())
        {
          AnimationPoint firstScriptOfType = entity.GetFirstScriptOfType<AnimationPoint>();
          pairs.Add(firstScriptOfType);
        }
        else
        {
          foreach (GameEntity child in entity.GetChildren())
            pairs.AddRange((IEnumerable<AnimationPoint>) this.GetPairs(child));
        }
      }
      if (pairs.Contains(this))
        pairs.Remove(this);
      return pairs;
    }

    public override WorldFrame GetUserFrameForAgent(Agent agent)
    {
      WorldFrame userFrameForAgent = base.GetUserFrameForAgent(agent);
      float agentScale = agent.AgentScale;
      userFrameForAgent.Origin.SetVec2(userFrameForAgent.Origin.AsVec2 + (userFrameForAgent.Rotation.f.AsVec2 * -this.ForwardDistanceToPivotPoint + userFrameForAgent.Rotation.s.AsVec2 * this.SideDistanceToPivotPoint) * (1f - agentScale));
      return userFrameForAgent;
    }

    private void Tick(float dt, bool isSimulation = false)
    {
      if (!this.HasUser)
        return;
      Vec2 vec2;
      if (Game.Current != null && Game.Current.IsDevelopmentMode)
      {
        vec2 = this.UserAgent.GetTargetPosition();
        vec2.IsNonZero();
      }
      ActionIndexValueCache currentActionValue = this.UserAgent.GetCurrentActionValue(0);
      switch (this._state)
      {
        case AnimationPoint.State.NotUsing:
          if (!this.IsTargetReached())
            break;
          vec2 = this.UserAgent.MovementVelocity;
          if ((double) vec2.LengthSquared >= 0.10000000149011612 || !this.UserAgent.IsOnLand())
            break;
          if (this.ArriveActionCode != ActionIndexCache.act_none)
          {
            Agent userAgent = this.UserAgent;
            ActionIndexCache arriveActionCode = this.ArriveActionCode;
            float num = isSimulation ? 0.0f : 0.0f;
            double actionSpeed = (double) MBRandom.RandomFloatRanged(0.8f, 1f);
            double blendInPeriod = (double) num;
            userAgent.SetActionChannel(0, arriveActionCode, actionSpeed: (float) actionSpeed, blendInPeriod: (float) blendInPeriod);
          }
          this._state = AnimationPoint.State.StartToUse;
          break;
        case AnimationPoint.State.StartToUse:
          if (this.ArriveActionCode != ActionIndexCache.act_none & isSimulation)
            this.SimulateAnimations(0.1f);
          if (!(this.ArriveActionCode == ActionIndexCache.act_none) && !(currentActionValue == this.ArriveActionCode) && !this.UserAgent.ActionSet.AreActionsAlternatives(currentActionValue, this.ArriveActionCode))
            break;
          this.UserAgent.ClearTargetFrame();
          WorldFrame userFrameForAgent = this.GetUserFrameForAgent(this.UserAgent);
          this._pointRotation = userFrameForAgent.Rotation.f;
          double num1 = (double) this._pointRotation.Normalize();
          if (this.UserAgent != Agent.Main)
          {
            Agent userAgent = this.UserAgent;
            ref WorldPosition local = ref userFrameForAgent.Origin;
            vec2 = userFrameForAgent.Rotation.f.AsVec2;
            double rotationInRadians = (double) vec2.RotationInRadians;
            userAgent.SetScriptedPositionAndDirection(ref local, (float) rotationInRadians, false, Agent.AIScriptedFrameFlags.DoNotRun);
          }
          this._state = AnimationPoint.State.Using;
          break;
        case AnimationPoint.State.Using:
          if (isSimulation)
          {
            float dt1 = 0.1f;
            if (currentActionValue != this.ArriveActionCode)
              dt1 = (float) (0.0099999997764825821 + (double) MBRandom.RandomFloat * 0.090000003576278687);
            this.SimulateAnimations(dt1);
          }
          if (!this.IsArriveActionFinished && (this.ArriveActionCode == ActionIndexCache.act_none || this.UserAgent.GetCurrentActionValue(0) != this.ArriveActionCode))
          {
            this.IsArriveActionFinished = true;
            this.AddItemsToAgent();
          }
          if (this.IsRotationCorrectDuringUsage())
            this.UserAgent.SetActionChannel(0, this.LoopStartActionCode, actionSpeed: (double) this.ActionSpeed < 0.800000011920929 ? this.ActionSpeed : MBRandom.RandomFloatRanged(0.8f, this.ActionSpeed), blendInPeriod: isSimulation ? 0.0f : 0.0f, startProgress: isSimulation ? MBRandom.RandomFloatRanged(0.0f, 0.5f) : 0.0f);
          if (!this.IsArriveActionFinished || this.UserAgent == Agent.Main)
            break;
          this.PairTick(isSimulation);
          break;
      }
    }

    private void PairTick(bool isSimulation)
    {
      MBList<Agent> pairEntityUsers = this.GetPairEntityUsers();
      if ((NativeObject) this.PairEntity != (NativeObject) null)
        this.SetAgentItemsVisibility(this.UserAgent != ConversationMission.OneToOneConversationAgent && pairEntityUsers.Count + 1 >= this.MinUserToStartInteraction);
      if (this._pairState != AnimationPoint.PairState.NoPair && pairEntityUsers.Count < this.MinUserToStartInteraction)
      {
        this._pairState = AnimationPoint.PairState.NoPair;
        if (this.UserAgent != ConversationMission.OneToOneConversationAgent)
        {
          this.UserAgent.SetActionChannel(0, this._lastAction, additionalFlags: (ulong) this.UserAgent.GetCurrentActionPriority(0));
          this.UserAgent.ResetLookAgent();
        }
        this._greetingTimer = (Timer) null;
      }
      else if (this._pairState == AnimationPoint.PairState.NoPair && pairEntityUsers.Count >= this.MinUserToStartInteraction && this.IsRotationCorrectDuringUsage())
      {
        this._lastAction = this.UserAgent.GetCurrentActionValue(0);
        if (this._startPairAnimationWithGreeting)
        {
          this._pairState = AnimationPoint.PairState.BecomePair;
          this._greetingTimer = new Timer(Mission.Current.CurrentTime, (float) MBRandom.RandomInt(5) * 0.3f);
        }
        else
          this._pairState = AnimationPoint.PairState.StartPairAnimation;
      }
      else if (this._pairState == AnimationPoint.PairState.BecomePair && this._greetingTimer.Check(Mission.Current.CurrentTime))
      {
        this._greetingTimer = (Timer) null;
        this._pairState = AnimationPoint.PairState.Greeting;
        Vec3 eyeGlobalPosition1 = pairEntityUsers.GetRandomElement<Agent>().GetEyeGlobalPosition();
        Vec3 eyeGlobalPosition2 = this.UserAgent.GetEyeGlobalPosition();
        Vec3 v2 = eyeGlobalPosition1 - eyeGlobalPosition2;
        double num = (double) v2.Normalize();
        Mat3 rotation = this.UserAgent.Frame.rotation;
        if ((double) Vec3.DotProduct(rotation.f, v2) > 0.0)
          this.UserAgent.SetActionChannel(1, this.GetGreetingActionId(eyeGlobalPosition2, eyeGlobalPosition1, rotation));
      }
      else if (this._pairState == AnimationPoint.PairState.Greeting && this.UserAgent.GetCurrentActionValue(1) == ActionIndexCache.act_none)
        this._pairState = AnimationPoint.PairState.StartPairAnimation;
      if (this._pairState == AnimationPoint.PairState.StartPairAnimation)
      {
        this._pairState = AnimationPoint.PairState.Pair;
        this.UserAgent.SetActionChannel(0, this.PairLoopStartActionCode, actionSpeed: MBRandom.RandomFloatRanged(0.8f, this.ActionSpeed), blendInPeriod: isSimulation ? 0.0f : 0.0f, startProgress: isSimulation ? MBRandom.RandomFloatRanged(0.0f, 0.5f) : 0.0f);
      }
      if (this._pairState != AnimationPoint.PairState.Pair || !this.IsRotationCorrectDuringUsage())
        return;
      this.UserAgent.SetActionChannel(0, this.PairLoopStartActionCode, actionSpeed: MBRandom.RandomFloatRanged(0.8f, this.ActionSpeed), blendInPeriod: isSimulation ? 0.0f : 0.0f, startProgress: isSimulation ? MBRandom.RandomFloatRanged(0.0f, 0.5f) : 0.0f);
    }

    private ActionIndexCache GetGreetingActionId(
      Vec3 userAgentGlobalEyePoint,
      Vec3 lookTarget,
      Mat3 userAgentRot)
    {
      Vec3 vec3 = lookTarget - userAgentGlobalEyePoint;
      double num1 = (double) vec3.Normalize();
      float num2 = Vec3.DotProduct(userAgentRot.f, vec3);
      if ((double) num2 > 0.800000011920929)
        return this._greetingFrontActions[MBRandom.RandomInt(this._greetingFrontActions.Length)];
      if ((double) num2 <= 0.0)
        return ActionIndexCache.act_none;
      return (double) Vec3.DotProduct(Vec3.CrossProduct(vec3, userAgentRot.f), userAgentRot.u) > 0.0 ? this._greetingRightActions[MBRandom.RandomInt(this._greetingRightActions.Length)] : this._greetingLeftActions[MBRandom.RandomInt(this._greetingLeftActions.Length)];
    }

    private MBList<Agent> GetPairEntityUsers()
    {
      MBList<Agent> pairEntityUsers = new MBList<Agent>();
      if (this.UserAgent != ConversationMission.OneToOneConversationAgent)
      {
        foreach (AnimationPoint pairPoint in this._pairPoints)
        {
          if (pairPoint.HasUser && pairPoint._state == AnimationPoint.State.Using && pairPoint.UserAgent != ConversationMission.OneToOneConversationAgent)
            pairEntityUsers.Add(pairPoint.UserAgent);
        }
      }
      return pairEntityUsers;
    }

    private void SetPairsActivity(bool isActive)
    {
      foreach (AnimationPoint pairPoint in this._pairPoints)
      {
        pairPoint.IsActive = isActive;
        if (!isActive)
        {
          if (pairPoint.HasAIUser)
            pairPoint.UserAgent.StopUsingGameObject();
          pairPoint.MovingAgent?.StopUsingGameObject();
        }
      }
    }

    public override bool IsUsableByAgent(Agent userAgent)
    {
      return this.IsActive && base.IsUsableByAgent(userAgent);
    }

    public override void OnUse(Agent userAgent)
    {
      base.OnUse(userAgent);
      this._equipmentIndexMainHand = this.UserAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      this._equipmentIndexOffHand = this.UserAgent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
      this._state = AnimationPoint.State.NotUsing;
      if (!this.ActivatePairs)
        return;
      this.SetPairsActivity(true);
    }

    private void RevertWeaponWieldSheathState()
    {
      if (this._equipmentIndexMainHand != EquipmentIndex.None && this.AutoSheathWeapons)
        this.UserAgent.TryToWieldWeaponInSlot(this._equipmentIndexMainHand, Agent.WeaponWieldActionType.WithAnimation, false);
      else if (this._equipmentIndexMainHand == EquipmentIndex.None && this.AutoWieldWeapons)
        this.UserAgent.TryToSheathWeaponInHand(Agent.HandIndex.MainHand, Agent.WeaponWieldActionType.WithAnimation);
      if (this._equipmentIndexOffHand != EquipmentIndex.None && this.AutoSheathWeapons)
      {
        this.UserAgent.TryToWieldWeaponInSlot(this._equipmentIndexOffHand, Agent.WeaponWieldActionType.WithAnimation, false);
      }
      else
      {
        if (this._equipmentIndexOffHand != EquipmentIndex.None || !this.AutoWieldWeapons)
          return;
        this.UserAgent.TryToSheathWeaponInHand(Agent.HandIndex.OffHand, Agent.WeaponWieldActionType.WithAnimation);
      }
    }

    public override void OnUseStopped(Agent userAgent, bool isSuccessful, int preferenceIndex)
    {
      this.SetAgentItemsVisibility(false);
      this.RevertWeaponWieldSheathState();
      if (this.UserAgent.IsActive())
      {
        if (this.LeaveActionCode == ActionIndexCache.act_none)
          this.UserAgent.SetActionChannel(0, this.LeaveActionCode, additionalFlags: (ulong) this.UserAgent.GetCurrentActionPriority(0));
        else if (this.IsArriveActionFinished)
        {
          ActionIndexValueCache currentActionValue = this.UserAgent.GetCurrentActionValue(0);
          if (currentActionValue != this.LeaveActionCode && !this.UserAgent.ActionSet.AreActionsAlternatives(currentActionValue, this.LeaveActionCode))
            this.UserAgent.SetActionChannel(0, this.LeaveActionCode, additionalFlags: (ulong) this.UserAgent.GetCurrentActionPriority(0));
        }
        else
        {
          ActionIndexValueCache currentActionValue = userAgent.GetCurrentActionValue(0);
          if (currentActionValue == this.ArriveActionCode && this.ArriveActionCode != ActionIndexCache.act_none)
          {
            MBActionSet actionSet = userAgent.ActionSet;
            float currentActionProgress = userAgent.GetCurrentActionProgress(0);
            float outStartProgress1 = MBActionSet.GetActionBlendOutStartProgress(actionSet, currentActionValue);
            if ((double) currentActionProgress < (double) outStartProgress1)
            {
              float num = (outStartProgress1 - currentActionProgress) / outStartProgress1;
              double outStartProgress2 = (double) MBActionSet.GetActionBlendOutStartProgress(actionSet, this.LeaveActionCode);
            }
          }
        }
      }
      this._pairState = AnimationPoint.PairState.NoPair;
      this._lastAction = ActionIndexValueCache.act_none;
      if (this.UserAgent.GetLookAgent() != null)
        this.UserAgent.ResetLookAgent();
      this.IsArriveActionFinished = false;
      base.OnUseStopped(userAgent, isSuccessful, preferenceIndex);
      if (!this.ActivatePairs)
        return;
      this.SetPairsActivity(false);
    }

    public override void SimulateTick(float dt) => this.Tick(dt, true);

    public override bool HasAlternative() => this.GroupId >= 0;

    public float GetRandomWaitInSeconds()
    {
      if ((double) this.MinWaitinSeconds < 0.0 || (double) this.MaxWaitInSeconds < 0.0)
        return -1f;
      return (double) MathF.Abs(this.MinWaitinSeconds - this.MaxWaitInSeconds) >= 1.4012984643248171E-45 ? this.MinWaitinSeconds + MBRandom.RandomFloat * (this.MaxWaitInSeconds - this.MinWaitinSeconds) : this.MinWaitinSeconds;
    }

    public List<AnimationPoint> GetAlternatives()
    {
      List<AnimationPoint> alternatives = new List<AnimationPoint>();
      IEnumerable<GameEntity> children = this.GameEntity.Parent.GetChildren();
      if (children != null)
      {
        foreach (GameEntity gameEntity in children)
        {
          AnimationPoint firstScriptOfType = gameEntity.GetFirstScriptOfType<AnimationPoint>();
          if (firstScriptOfType != null && firstScriptOfType.HasAlternative() && this.GroupId == firstScriptOfType.GroupId)
            alternatives.Add(firstScriptOfType);
        }
      }
      return alternatives;
    }

    private void SimulateAnimations(float dt)
    {
      this.UserAgent.TickActionChannels(dt);
      Vec3 animationDisplacement = this.UserAgent.ComputeAnimationDisplacement(dt);
      if ((double) animationDisplacement.LengthSquared > 0.0)
        this.UserAgent.TeleportToPosition(this.UserAgent.Position + animationDisplacement);
      this.UserAgent.AgentVisuals.GetSkeleton().TickAnimations(dt, this.UserAgent.AgentVisuals.GetGlobalFrame(), true);
    }

    private bool IsTargetReached()
    {
      float num = Vec2.DotProduct(this.UserAgent.GetTargetDirection().AsVec2, this.UserAgent.GetMovementDirection());
      return (double) (this.UserAgent.Position.AsVec2 - this.UserAgent.GetTargetPosition()).LengthSquared < 0.040000002831220627 && (double) num > 0.99000000953674316;
    }

    public bool IsRotationCorrectDuringUsage()
    {
      return this._pointRotation.IsNonZero && (double) Vec2.DotProduct(this._pointRotation.AsVec2, this.UserAgent.GetMovementDirection()) > 0.99000000953674316;
    }

    protected bool CanAgentUseItem(Agent agent)
    {
      return agent.GetComponent<CampaignAgentComponent>() != null && agent.GetComponent<CampaignAgentComponent>().AgentNavigator != null;
    }

    protected void AddItemsToAgent()
    {
      if (!this.CanAgentUseItem(this.UserAgent) || !this.IsArriveActionFinished)
        return;
      if (this._itemsForBones.Count != 0)
        this.UserAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.HoldAndHideRecentlyUsedMeshes();
      foreach (AnimationPoint.ItemForBone itemsForBone in this._itemsForBones)
      {
        ItemObject itemObject = Game.Current.ObjectManager.GetObject<ItemObject>(itemsForBone.ItemPrefabName);
        if (itemObject != null)
        {
          EquipmentIndex properSlot = this.FindProperSlot(itemObject);
          if (!this.UserAgent.Equipment[properSlot].IsEmpty)
            this.UserAgent.DropItem(properSlot);
          MissionWeapon weapon = new MissionWeapon(itemObject, (ItemModifier) null, this.UserAgent.Origin?.Banner);
          this.UserAgent.EquipWeaponWithNewEntity(properSlot, ref weapon);
          this.UserAgent.TryToWieldWeaponInSlot(properSlot, Agent.WeaponWieldActionType.Instant, false);
        }
        else
        {
          sbyte realBoneIndex = this.UserAgent.AgentVisuals.GetRealBoneIndex(itemsForBone.HumanBone);
          this.UserAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SetPrefabVisibility(realBoneIndex, itemsForBone.ItemPrefabName, true);
        }
      }
    }

    public override void OnUserConversationStart()
    {
      this._pointRotation = this.UserAgent.Frame.rotation.f;
      double num = (double) this._pointRotation.Normalize();
      if (this.KeepOldVisibility)
        return;
      foreach (AnimationPoint.ItemForBone itemsForBone in this._itemsForBones)
        itemsForBone.OldVisibility = itemsForBone.IsVisible;
      this.SetAgentItemsVisibility(false);
    }

    public override void OnUserConversationEnd()
    {
      this.UserAgent.ResetLookAgent();
      this.UserAgent.LookDirection = this._pointRotation;
      this.UserAgent.SetActionChannel(0, this.LoopStartActionCode);
      foreach (AnimationPoint.ItemForBone itemsForBone in this._itemsForBones)
      {
        if (itemsForBone.OldVisibility)
          this.SetAgentItemVisibility(itemsForBone, true);
      }
    }

    public void SetAgentItemsVisibility(bool isVisible)
    {
      if (this.UserAgent.IsMainAgent)
        return;
      foreach (AnimationPoint.ItemForBone itemsForBone in this._itemsForBones)
      {
        sbyte realBoneIndex = this.UserAgent.AgentVisuals.GetRealBoneIndex(itemsForBone.HumanBone);
        this.UserAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SetPrefabVisibility(realBoneIndex, itemsForBone.ItemPrefabName, isVisible);
        itemsForBone.IsVisible = isVisible;
      }
    }

    private void SetAgentItemVisibility(AnimationPoint.ItemForBone item, bool isVisible)
    {
      sbyte realBoneIndex = this.UserAgent.AgentVisuals.GetRealBoneIndex(item.HumanBone);
      this.UserAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SetPrefabVisibility(realBoneIndex, item.ItemPrefabName, isVisible);
      item.IsVisible = isVisible;
    }

    private EquipmentIndex FindProperSlot(ItemObject item)
    {
      EquipmentIndex properSlot = EquipmentIndex.Weapon3;
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index <= EquipmentIndex.Weapon3; ++index)
      {
        MissionWeapon missionWeapon = this.UserAgent.Equipment[index];
        if (missionWeapon.IsEmpty)
        {
          properSlot = index;
        }
        else
        {
          missionWeapon = this.UserAgent.Equipment[index];
          if (missionWeapon.Item == item)
            return index;
        }
      }
      return properSlot;
    }

    protected struct ItemForBone
    {
      public HumanBone HumanBone;
      public string ItemPrefabName;
      public bool IsVisible;
      public bool OldVisibility;

      public ItemForBone(HumanBone bone, string name, bool isVisible)
      {
        this.HumanBone = bone;
        this.ItemPrefabName = name;
        this.IsVisible = isVisible;
        this.OldVisibility = isVisible;
      }
    }

    private enum State
    {
      NotUsing,
      StartToUse,
      Using,
    }

    private enum PairState
    {
      NoPair,
      BecomePair,
      Greeting,
      StartPairAnimation,
      Pair,
    }
  }
}
