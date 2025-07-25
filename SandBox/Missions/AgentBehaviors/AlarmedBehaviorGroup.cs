// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.AlarmedBehaviorGroup
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class AlarmedBehaviorGroup : AgentBehaviorGroup
  {
    private static readonly ActionIndexCache act_scared_to_normal_1 = ActionIndexCache.Create(nameof (act_scared_to_normal_1));
    public const float SafetyDistance = 15f;
    public const float SafetyDistanceSquared = 225f;
    private readonly MissionAgentHandler _missionAgentHandler;
    private readonly MissionFightHandler _missionFightHandler;
    public bool DisableCalmDown;
    private readonly BasicMissionTimer _alarmedTimer;
    private readonly BasicMissionTimer _checkCalmDownTimer;
    private bool _isCalmingDown;

    public AlarmedBehaviorGroup(AgentNavigator navigator, Mission mission)
      : base(navigator, mission)
    {
      this._alarmedTimer = new BasicMissionTimer();
      this._checkCalmDownTimer = new BasicMissionTimer();
      this._missionAgentHandler = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      this._missionFightHandler = this.Mission.GetMissionBehavior<MissionFightHandler>();
    }

    public override void Tick(float dt, bool isSimulation)
    {
      if (this.ScriptedBehavior != null)
      {
        if (!this.ScriptedBehavior.IsActive)
        {
          this.DisableAllBehaviors();
          this.ScriptedBehavior.IsActive = true;
        }
      }
      else
      {
        float num = 0.0f;
        int index1 = -1;
        for (int index2 = 0; index2 < this.Behaviors.Count; ++index2)
        {
          float availability = this.Behaviors[index2].GetAvailability(isSimulation);
          if ((double) availability > (double) num)
          {
            num = availability;
            index1 = index2;
          }
        }
        if ((double) num > 0.0 && index1 != -1 && !this.Behaviors[index1].IsActive)
        {
          this.DisableAllBehaviors();
          this.Behaviors[index1].IsActive = true;
        }
      }
      this.TickActiveBehaviors(dt, isSimulation);
    }

    private void TickActiveBehaviors(float dt, bool isSimulation)
    {
      foreach (AgentBehavior behavior in this.Behaviors)
      {
        if (behavior.IsActive)
          behavior.Tick(dt, isSimulation);
      }
    }

    public override float GetScore(bool isSimulation)
    {
      if (this.OwnerAgent.CurrentWatchState == Agent.WatchState.Alarmed)
      {
        if (!this.DisableCalmDown && (double) this._alarmedTimer.ElapsedTime > 10.0 && (double) this._checkCalmDownTimer.ElapsedTime > 1.0)
        {
          if (!this._isCalmingDown)
          {
            this._checkCalmDownTimer.Reset();
            if (!this.IsNearDanger())
            {
              this._isCalmingDown = true;
              this.OwnerAgent.DisableScriptedMovement();
              this.OwnerAgent.SetActionChannel(0, AlarmedBehaviorGroup.act_scared_to_normal_1, startProgress: MBRandom.RandomFloat);
            }
          }
          else if (!this.OwnerAgent.ActionSet.AreActionsAlternatives(this.OwnerAgent.GetCurrentActionValue(0), AlarmedBehaviorGroup.act_scared_to_normal_1))
          {
            this._isCalmingDown = false;
            return 0.0f;
          }
        }
        return 1f;
      }
      if (!this.IsNearDanger())
        return 0.0f;
      AlarmedBehaviorGroup.AlarmAgent(this.OwnerAgent);
      return 1f;
    }

    private bool IsNearDanger()
    {
      float distanceSquared;
      Agent closestAlarmSource = this.GetClosestAlarmSource(out distanceSquared);
      if (closestAlarmSource == null)
        return false;
      return (double) distanceSquared < 225.0 || this.Navigator.CanSeeAgent(closestAlarmSource);
    }

    public Agent GetClosestAlarmSource(out float distanceSquared)
    {
      distanceSquared = float.MaxValue;
      if (this._missionFightHandler == null || !this._missionFightHandler.IsThereActiveFight())
        return (Agent) null;
      Agent closestAlarmSource = (Agent) null;
      foreach (Agent dangerSource in this._missionFightHandler.GetDangerSources(this.OwnerAgent))
      {
        float num = dangerSource.Position.DistanceSquared(this.OwnerAgent.Position);
        if ((double) num < (double) distanceSquared)
        {
          distanceSquared = num;
          closestAlarmSource = dangerSource;
        }
      }
      return closestAlarmSource;
    }

    public static void AlarmAgent(Agent agent) => agent.SetWatchState(Agent.WatchState.Alarmed);

    protected override void OnActivate()
    {
      TextObject textObject = new TextObject("{=!}{p0} {p1} activate alarmed behavior group.");
      textObject.SetTextVariable("p0", this.OwnerAgent.Name);
      textObject.SetTextVariable("p1", this.OwnerAgent.Index);
      this._isCalmingDown = false;
      this._alarmedTimer.Reset();
      this._checkCalmDownTimer.Reset();
      this.OwnerAgent.DisableScriptedMovement();
      this.OwnerAgent.ClearTargetFrame();
      this.Navigator.SetItemsVisibility(false);
      LocationCharacter locationCharacter = CampaignMission.Current.Location.GetLocationCharacter(this.OwnerAgent.Origin);
      if (locationCharacter.ActionSetCode != locationCharacter.AlarmedActionSetCode)
      {
        AnimationSystemData animationSystemData = locationCharacter.GetAgentBuildData().AgentMonster.FillAnimationSystemData(MBGlobals.GetActionSet(locationCharacter.AlarmedActionSetCode), locationCharacter.Character.GetStepSize(), false);
        this.OwnerAgent.SetActionSet(ref animationSystemData);
      }
      if (this.Navigator.MemberOfAlley == null && !MissionFightHandler.IsAgentAggressive(this.OwnerAgent))
        return;
      this.DisableCalmDown = true;
    }

    protected override void OnDeactivate()
    {
      base.OnDeactivate();
      this._isCalmingDown = false;
      if (!this.OwnerAgent.IsActive())
        return;
      this.OwnerAgent.TryToSheathWeaponInHand(Agent.HandIndex.OffHand, Agent.WeaponWieldActionType.WithAnimationUninterruptible);
      this.OwnerAgent.TryToSheathWeaponInHand(Agent.HandIndex.MainHand, Agent.WeaponWieldActionType.WithAnimationUninterruptible);
      if (this.OwnerAgent.Team.IsValid && this.OwnerAgent.Team == this.Mission.PlayerEnemyTeam)
        this.OwnerAgent.SetTeam(new Team(MBTeam.InvalidTeam, BattleSideEnum.None, (Mission) null), true);
      this.OwnerAgent.SetWatchState(Agent.WatchState.Patrolling);
      this.OwnerAgent.ResetLookAgent();
      this.OwnerAgent.SetActionChannel(0, ActionIndexCache.act_none, true);
      this.OwnerAgent.SetActionChannel(1, ActionIndexCache.act_none, true);
    }

    public override void ForceThink(float inSeconds)
    {
    }
  }
}
