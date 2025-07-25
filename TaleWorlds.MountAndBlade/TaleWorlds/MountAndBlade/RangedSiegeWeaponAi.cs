// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.RangedSiegeWeaponAi
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.DividableTasks;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class RangedSiegeWeaponAi : UsableMachineAIBase
  {
    private const float TargetEvaluationDelay = 0.5f;
    private const int MaxTargetEvaluationCount = 4;
    private readonly RangedSiegeWeaponAi.ThreatSeeker _threatSeeker;
    private Threat _target;
    private float _delayTimer;
    private float _delayDuration = 1f;
    private int _cannotShootCounter;
    private readonly Timer _targetEvaluationTimer;

    public RangedSiegeWeaponAi(RangedSiegeWeapon rangedSiegeWeapon)
      : base((UsableMachine) rangedSiegeWeapon)
    {
      this._threatSeeker = new RangedSiegeWeaponAi.ThreatSeeker(rangedSiegeWeapon);
      ((RangedSiegeWeapon) this.UsableMachine).OnReloadDone += new RangedSiegeWeapon.OnSiegeWeaponReloadDone(this.FindNextTarget);
      this._delayTimer = this._delayDuration;
      this._targetEvaluationTimer = new Timer(Mission.Current.CurrentTime, 0.5f);
    }

    protected override void OnTick(
      Agent agentToCompareTo,
      Formation formationToCompareTo,
      Team potentialUsersTeam,
      float dt)
    {
      base.OnTick(agentToCompareTo, formationToCompareTo, potentialUsersTeam, dt);
      if (this.UsableMachine.PilotAgent != null && this.UsableMachine.PilotAgent.IsAIControlled)
      {
        RangedSiegeWeapon usableMachine = this.UsableMachine as RangedSiegeWeapon;
        if (usableMachine.State == RangedSiegeWeapon.WeaponState.WaitingAfterShooting && usableMachine.PilotAgent != null && usableMachine.PilotAgent.IsAIControlled)
          usableMachine.AiRequestsManualReload();
        if (this._threatSeeker.UpdateThreatSeekerTask() && (double) dt > 0.0 && this._target == null && usableMachine.State == RangedSiegeWeapon.WeaponState.Idle)
        {
          if ((double) this._delayTimer <= 0.0)
            this.FindNextTarget();
          this._delayTimer -= dt;
        }
        if (this._target != null)
        {
          if (this._target.Agent != null && !this._target.Agent.IsActive())
          {
            this._target = (Threat) null;
            return;
          }
          if (usableMachine.State == RangedSiegeWeapon.WeaponState.Idle && usableMachine.UserCountNotInStruckAction > 0)
          {
            if (DebugSiegeBehavior.ToggleTargetDebug)
            {
              Agent pilotAgent = this.UsableMachine.PilotAgent;
            }
            if (this._targetEvaluationTimer.Check(Mission.Current.CurrentTime) && !((RangedSiegeWeapon) this.UsableMachine).CanShootAtBox(this._target.BoundingBoxMin, this._target.BoundingBoxMax))
              ++this._cannotShootCounter;
            if (this._cannotShootCounter < 4)
            {
              if (usableMachine.AimAtThreat(this._target) && usableMachine.PilotAgent != null)
              {
                this._delayTimer -= dt;
                if ((double) this._delayTimer <= 0.0)
                {
                  usableMachine.AiRequestsShoot();
                  this._target = (Threat) null;
                  this.SetTargetingTimer();
                  this._cannotShootCounter = 0;
                  this._targetEvaluationTimer.Reset(Mission.Current.CurrentTime);
                }
              }
            }
            else
            {
              this._target = (Threat) null;
              this.SetTargetingTimer();
              this._cannotShootCounter = 0;
            }
          }
          else
            this._targetEvaluationTimer.Reset(Mission.Current.CurrentTime);
        }
      }
      this.AfterTick(agentToCompareTo, formationToCompareTo, potentialUsersTeam, dt);
    }

    private void SetTargetFromThreatSeeker()
    {
      this._target = this._threatSeeker.PrepareTargetFromTask();
    }

    public void FindNextTarget()
    {
      if (this.UsableMachine.PilotAgent == null || !this.UsableMachine.PilotAgent.IsAIControlled)
        return;
      this._threatSeeker.PrepareThreatSeekerTask(new Action(this.SetTargetFromThreatSeeker));
      this.SetTargetingTimer();
    }

    private void AfterTick(
      Agent agentToCompareTo,
      Formation formationToCompareTo,
      Team potentialUsersTeam,
      float dt)
    {
      if ((double) dt > 0.0 && (agentToCompareTo == null || this.UsableMachine.PilotAgent == agentToCompareTo) && (formationToCompareTo == null || this.UsableMachine.PilotAgent != null && this.UsableMachine.PilotAgent.IsAIControlled && this.UsableMachine.PilotAgent.Formation == formationToCompareTo) || this.UsableMachine.PilotAgent != null)
        return;
      this._threatSeeker.Release();
      this._target = (Threat) null;
    }

    private void SetTargetingTimer()
    {
      this._delayTimer = this._delayDuration + MBRandom.RandomFloat * 0.5f;
    }

    public class ThreatSeeker
    {
      private FindMostDangerousThreat _getMostDangerousThreat;
      private const float SingleUnitThreatValue = 3f;
      private const float InsideWallsThreatMultiplier = 3f;
      private Threat _currentThreat;
      private Agent _targetAgent;
      public RangedSiegeWeapon Weapon;
      public List<Vec3> WeaponPositions;
      private readonly List<ITargetable> _potentialTargetUsableMachines;
      private readonly List<ICastleKeyPosition> _referencePositions;

      public ThreatSeeker(RangedSiegeWeapon weapon)
      {
        this.Weapon = weapon;
        this.WeaponPositions = new List<Vec3>()
        {
          this.Weapon.GameEntity.GlobalPosition
        };
        this._targetAgent = (Agent) null;
        IEnumerable<UsableMachine> allWithType = Mission.Current.ActiveMissionObjects.FindAllWithType<UsableMachine>();
        this._potentialTargetUsableMachines = allWithType.WhereQ<UsableMachine>((Func<UsableMachine, bool>) (um => um.GameEntity.HasScriptOfType<DestructableComponent>() && um is ITargetable targetable && targetable.GetSide() != this.Weapon.Side && (NativeObject) targetable.GetTargetEntity() != (NativeObject) null)).Select<UsableMachine, ITargetable>((Func<UsableMachine, ITargetable>) (um => um as ITargetable)).ToList<ITargetable>();
        this._referencePositions = allWithType.OfType<ICastleKeyPosition>().ToList<ICastleKeyPosition>();
        this._getMostDangerousThreat = new FindMostDangerousThreat();
      }

      public Threat PrepareTargetFromTask()
      {
        Agent targetAgent;
        this._currentThreat = this._getMostDangerousThreat.GetResult(out targetAgent);
        if (this._currentThreat != null && this._currentThreat.WeaponEntity == null)
        {
          this._currentThreat.Agent = this._targetAgent;
          if (this._targetAgent == null || !this._targetAgent.IsActive() || this._targetAgent.Formation != this._currentThreat.Formation || !this.Weapon.CanShootAtAgent(this._targetAgent))
          {
            this._targetAgent = targetAgent;
            float selectedAgentScore = float.MaxValue;
            Agent selectedAgent = this._targetAgent;
            Action<Agent> action = (Action<Agent>) (agent =>
            {
              float num = agent.Position.DistanceSquared(this.Weapon.GameEntity.GlobalPosition) * (float) ((double) MBRandom.RandomFloat * 0.20000000298023224 + 0.800000011920929);
              if (agent == this._targetAgent)
                num *= 0.5f;
              if ((double) selectedAgentScore <= (double) num || !this.Weapon.CanShootAtAgent(agent))
                return;
              selectedAgent = agent;
              selectedAgentScore = num;
            });
            if (targetAgent.Detachment == null)
              this._currentThreat.Formation.ApplyActionOnEachAttachedUnit(action);
            else
              this._currentThreat.Formation.ApplyActionOnEachDetachedUnit(action);
            this._targetAgent = selectedAgent ?? this._currentThreat.Formation.GetUnitWithIndex(MBRandom.RandomInt(this._currentThreat.Formation.CountOfUnits));
            this._currentThreat.Agent = this._targetAgent;
          }
        }
        if (this._currentThreat != null && this._currentThreat.WeaponEntity == null && this._currentThreat.Agent == null)
          this._currentThreat = (Threat) null;
        return this._currentThreat;
      }

      public bool UpdateThreatSeekerTask()
      {
        Agent targetAgent = this._targetAgent;
        if ((targetAgent != null ? (!targetAgent.IsActive() ? 1 : 0) : 0) != 0)
          this._targetAgent = (Agent) null;
        return this._getMostDangerousThreat.Update();
      }

      public void PrepareThreatSeekerTask(Action lastAction)
      {
        this._getMostDangerousThreat.Prepare(this.GetAllThreats(), this.Weapon);
        this._getMostDangerousThreat.SetLastAction(lastAction);
      }

      public void Release()
      {
        this._targetAgent = (Agent) null;
        this._currentThreat = (Threat) null;
      }

      public List<Threat> GetAllThreats()
      {
        List<Threat> allThreats = new List<Threat>();
        for (int index = this._potentialTargetUsableMachines.Count - 1; index >= 0; --index)
        {
          ITargetable targetUsableMachine = this._potentialTargetUsableMachines[index];
          if (targetUsableMachine is UsableMachine usableMachine && (usableMachine.IsDestroyed || usableMachine.IsDeactivated || (NativeObject) usableMachine.GameEntity == (NativeObject) null))
          {
            this._potentialTargetUsableMachines.RemoveAt(index);
          }
          else
          {
            Threat threat = new Threat()
            {
              WeaponEntity = targetUsableMachine,
              ThreatValue = this.Weapon.ProcessTargetValue(targetUsableMachine.GetTargetValue(this.WeaponPositions), targetUsableMachine.GetTargetFlags())
            };
            allThreats.Add(threat);
          }
        }
        foreach (Team team in (List<Team>) Mission.Current.Teams)
        {
          if (team.Side.GetOppositeSide() == this.Weapon.Side)
          {
            foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
            {
              if (formation.CountOfUnits > 0)
              {
                float valueOfFormation = RangedSiegeWeaponAi.ThreatSeeker.GetTargetValueOfFormation(formation, (IEnumerable<ICastleKeyPosition>) this._referencePositions);
                if ((double) valueOfFormation != -1.0)
                  allThreats.Add(new Threat()
                  {
                    Formation = formation,
                    ThreatValue = this.Weapon.ProcessTargetValue(valueOfFormation, RangedSiegeWeaponAi.ThreatSeeker.GetTargetFlagsOfFormation())
                  });
              }
            }
          }
        }
        return allThreats;
      }

      private static float GetTargetValueOfFormation(
        Formation formation,
        IEnumerable<ICastleKeyPosition> referencePositions)
      {
        if ((double) formation.QuerySystem.LocalEnemyPower / (double) formation.QuerySystem.LocalAllyPower > 0.5)
          return -1f;
        float num = (float) formation.CountOfUnits * 3f;
        if (TeamAISiegeComponent.IsFormationInsideCastle(formation, true))
          num *= 3f;
        return num * RangedSiegeWeaponAi.ThreatSeeker.GetPositionMultiplierOfFormation(formation, referencePositions) * (MBMath.ClampFloat(formation.QuerySystem.LocalAllyPower / (formation.QuerySystem.LocalEnemyPower + 0.01f), 0.0f, 5f) / 5f);
      }

      public static TargetFlags GetTargetFlagsOfFormation() => (TargetFlags) (0 | 1 | 2 | 16);

      private static float GetPositionMultiplierOfFormation(
        Formation formation,
        IEnumerable<ICastleKeyPosition> referencePositions)
      {
        ICastleKeyPosition closestCastlePosition;
        float betweenPositions = RangedSiegeWeaponAi.ThreatSeeker.GetMinimumDistanceBetweenPositions(formation.GetMedianAgent(false, false, formation.GetAveragePositionOfUnits(false, false)).Position, referencePositions, out closestCastlePosition);
        bool flag = closestCastlePosition.AttackerSiegeWeapon != null && closestCastlePosition.AttackerSiegeWeapon.HasCompletedAction();
        return formation.PhysicalClass.IsRanged() ? (float) (((double) betweenPositions >= 20.0 ? ((double) betweenPositions >= 35.0 ? 0.60000002384185791 : 0.800000011920929) : 1.0) + (flag ? 0.20000000298023224 : 0.0)) : (float) (((double) betweenPositions >= 15.0 ? ((double) betweenPositions >= 40.0 ? 0.11999999731779099 : 0.15000000596046448) : 0.20000000298023224) * (flag ? 7.5 : 1.0));
      }

      private static float GetMinimumDistanceBetweenPositions(
        Vec3 position,
        IEnumerable<ICastleKeyPosition> referencePositions,
        out ICastleKeyPosition closestCastlePosition)
      {
        if (referencePositions != null && referencePositions.Count<ICastleKeyPosition>() != 0)
        {
          closestCastlePosition = referencePositions.MinBy<ICastleKeyPosition, float>((Func<ICastleKeyPosition, float>) (rp => rp.GetPosition().DistanceSquared(position)));
          return MathF.Sqrt(closestCastlePosition.GetPosition().DistanceSquared(position));
        }
        closestCastlePosition = (ICastleKeyPosition) null;
        return -1f;
      }

      public static Threat GetMaxThreat(List<ICastleKeyPosition> castleKeyPositions)
      {
        List<ITargetable> source1 = new List<ITargetable>();
        List<Threat> source2 = new List<Threat>();
        foreach (GameEntity gameEntity in Mission.Current.ActiveMissionObjects.Select<MissionObject, GameEntity>((Func<MissionObject, GameEntity>) (amo => amo.GameEntity)))
        {
          if (gameEntity.GetFirstScriptOfType<UsableMachine>() is ITargetable firstScriptOfType)
            source1.Add(firstScriptOfType);
        }
        source1.RemoveAll((Predicate<ITargetable>) (um => um.GetSide() == BattleSideEnum.Defender));
        source2.AddRange(source1.Select<ITargetable, Threat>((Func<ITargetable, Threat>) (um => new Threat()
        {
          WeaponEntity = um,
          ThreatValue = um.GetTargetValue(castleKeyPositions.Select<ICastleKeyPosition, Vec3>((Func<ICastleKeyPosition, Vec3>) (c => c.GetPosition())).ToList<Vec3>())
        })));
        return source2.MaxBy<Threat, float>((Func<Threat, float>) (t => t.ThreatValue));
      }
    }
  }
}
