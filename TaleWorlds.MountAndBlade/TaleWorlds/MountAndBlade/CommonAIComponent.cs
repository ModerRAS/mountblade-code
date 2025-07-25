// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CommonAIComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CommonAIComponent : AgentComponent
  {
    private const float MoraleThresholdForPanicking = 0.01f;
    private const float MaxRecoverableMoraleMultiplier = 0.5f;
    private const float MoraleRecoveryPerSecond = 0.4f;
    private float _recoveryMorale;
    private float _initialMorale;
    private float _morale = 50f;
    private readonly Timer _fadeOutTimer;
    private readonly float _retreatDistanceSquared;

    public bool IsPanicked { get; private set; }

    public bool IsRetreating { get; private set; }

    public int ReservedRiderAgentIndex { get; private set; }

    public float InitialMorale => this._initialMorale;

    public float RecoveryMorale => this._recoveryMorale;

    public float Morale
    {
      get => this._morale;
      set => this._morale = MBMath.ClampFloat(value, 0.0f, 100f);
    }

    public CommonAIComponent(Agent agent)
      : base(agent)
    {
      this._fadeOutTimer = new Timer(Mission.Current.CurrentTime, (float) (0.5 + (double) MBRandom.RandomFloat * 0.10000000149011612));
      float num = (float) ((double) agent.Monster.BodyCapsuleRadius * 2.0 * 7.5);
      this._retreatDistanceSquared = num * num;
      this.ReservedRiderAgentIndex = -1;
    }

    public override void Initialize()
    {
      base.Initialize();
      this.InitializeMorale();
    }

    private void InitializeMorale()
    {
      this._initialMorale = MBMath.ClampFloat(MissionGameModels.Current.BattleMoraleModel.GetEffectiveInitialMorale(this.Agent, 35f + (float) MBRandom.RandomInt(30) + this.Agent.Components.Sum<AgentComponent>((Func<AgentComponent, float>) (c => c.GetMoraleAddition()))), 15f, 100f);
      this._recoveryMorale = this._initialMorale * 0.5f;
      this.Morale = this._initialMorale;
    }

    public override void OnTickAsAI(float dt)
    {
      base.OnTickAsAI(dt);
      if (!this.IsRetreating && (double) this._morale < 0.0099999997764825821)
      {
        if (this.CanPanic())
          this.Panic();
        else
          this.Morale = 0.01f;
      }
      if (!this.IsPanicked && (double) this._morale < (double) this._recoveryMorale)
        this.Morale = Math.Min(this._morale + 0.4f * dt, this._recoveryMorale);
      if (Mission.Current.CanAgentRout(this.Agent) && this._fadeOutTimer.Check(Mission.Current.CurrentTime) && !this.Agent.IsFadingOut())
      {
        Vec3 position = this.Agent.Position;
        WorldPosition retreatPos = this.Agent.GetRetreatPos();
        if (retreatPos.AsVec2.IsValid && (double) retreatPos.AsVec2.DistanceSquared(position.AsVec2) < (double) this._retreatDistanceSquared && (double) retreatPos.GetGroundVec3().DistanceSquared(position) < (double) this._retreatDistanceSquared || !this.Agent.Mission.IsPositionInsideBoundaries(position.AsVec2) || (double) position.DistanceSquared(this.Agent.Mission.GetClosestBoundaryPosition(position.AsVec2).ToVec3()) < (double) this._retreatDistanceSquared)
          this.Agent.StartFadingOut();
      }
      if (!this.IsPanicked || !this.Agent.Mission.MissionEnded)
        return;
      MissionResult missionResult = this.Agent.Mission.MissionResult;
      if (this.Agent.Team == null || missionResult == null || (!missionResult.PlayerVictory || !this.Agent.Team.IsPlayerTeam && !this.Agent.Team.IsPlayerAlly) && (!missionResult.PlayerDefeated || this.Agent.Team.IsPlayerTeam || this.Agent.Team.IsPlayerAlly) || this.Agent == Agent.Main || !this.Agent.IsActive())
        return;
      this.StopRetreating();
    }

    public void Panic()
    {
      if (this.IsPanicked)
        return;
      this.IsPanicked = true;
      this.Agent.Mission.OnAgentPanicked(this.Agent);
    }

    public void Retreat(bool useCachingSystem = false)
    {
      if (this.IsRetreating)
        return;
      this.IsRetreating = true;
      this.Agent.EnforceShieldUsage(Agent.UsageDirection.None);
      WorldPosition worldPosition = WorldPosition.Invalid;
      if (useCachingSystem)
        worldPosition = this.Agent.Formation.RetreatPositionCache.GetRetreatPositionFromCache(this.Agent.Position.AsVec2);
      if (!worldPosition.IsValid)
      {
        worldPosition = this.Agent.Mission.GetClosestFleePositionForAgent(this.Agent);
        if (useCachingSystem)
          this.Agent.Formation.RetreatPositionCache.AddNewPositionToCache(this.Agent.Position.AsVec2, worldPosition);
      }
      this.Agent.Retreat(worldPosition);
    }

    public void StopRetreating()
    {
      if (!this.IsRetreating)
        return;
      this.IsRetreating = false;
      this.IsPanicked = false;
      this.Agent.SetMorale(MathF.Max(0.02f, this.Morale));
      this.Agent.StopRetreating();
    }

    public bool CanPanic()
    {
      if (!MissionGameModels.Current.BattleMoraleModel.CanPanicDueToMorale(this.Agent))
        return false;
      if (Mission.Current.IsSiegeBattle && this.Agent.Team.Side == BattleSideEnum.Attacker && this.Agent.Team.TeamAI is TeamAISiegeComponent teamAi)
      {
        int navigationFaceId = this.Agent.GetCurrentNavigationFaceId();
        if (navigationFaceId % 10 == 1 || teamAi.IsPrimarySiegeWeaponNavmeshFaceId(navigationFaceId))
          return false;
      }
      return true;
    }

    public override void OnHit(Agent affectorAgent, int damage, in MissionWeapon affectorWeapon)
    {
      base.OnHit(affectorAgent, damage, in affectorWeapon);
      if (damage < 1 || !this.Agent.IsMount || !this.Agent.IsAIControlled || this.Agent.RiderAgent != null)
        return;
      this.Panic();
    }

    public override void OnAgentRemoved()
    {
      base.OnAgentRemoved();
      if (!this.Agent.IsMount || this.Agent.RiderAgent != null)
        return;
      this.FindReservingAgent()?.HumanAIComponent.UnreserveMount(this.Agent);
    }

    public override void OnComponentRemoved()
    {
      base.OnComponentRemoved();
      if (!this.Agent.IsMount || this.Agent.RiderAgent != null)
        return;
      this.FindReservingAgent()?.HumanAIComponent.UnreserveMount(this.Agent);
    }

    internal void OnMountReserved(int riderAgentIndex)
    {
      this.ReservedRiderAgentIndex = riderAgentIndex;
    }

    internal void OnMountUnreserved() => this.ReservedRiderAgentIndex = -1;

    private Agent FindReservingAgent()
    {
      Agent reservingAgent = (Agent) null;
      if (this.ReservedRiderAgentIndex >= 0)
      {
        foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
        {
          if (agent.Index == this.ReservedRiderAgentIndex)
          {
            reservingAgent = agent;
            break;
          }
        }
      }
      return reservingAgent;
    }
  }
}
