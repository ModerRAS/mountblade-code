// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SallyOutMissionController
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
  public abstract class SallyOutMissionController : MissionLogic
  {
    private const float BesiegedTotalTroopRatio = 0.25f;
    private const float BesiegedInitialTroopRatio = 0.1f;
    private const float BesiegedReinforcementRatio = 0.01f;
    private const float BesiegerInitialTroopRatio = 0.1f;
    private const float BesiegerReinforcementRatio = 0.1f;
    private const float BesiegedInitialInterval = 1f;
    private const float BesiegerInitialInterval = 90f;
    private const float BesiegerIntervalChange = 15f;
    private const int BesiegerIntervalChangeCount = 5;
    private const float PlayerToGateSquaredDistanceThreshold = 25f;
    private SallyOutMissionNotificationsHandler _sallyOutNotificationsHandler;
    private List<CastleGate> _castleGates;
    private BasicMissionTimer _besiegedDeploymentTimer;
    private BasicMissionTimer _besiegerActivationTimer;
    private MBReadOnlyList<SiegeWeapon> _besiegerSiegeEngines;
    protected MissionAgentSpawnLogic MissionAgentSpawnLogic;

    private float BesiegedDeploymentDuration => 55f;

    private float BesiegerActivationDuration => 8f;

    public MBReadOnlyList<SiegeWeapon> BesiegerSiegeEngines => this._besiegerSiegeEngines;

    public override void OnBehaviorInitialize()
    {
      this.MissionAgentSpawnLogic = this.Mission.GetMissionBehavior<MissionAgentSpawnLogic>();
      this._sallyOutNotificationsHandler = new SallyOutMissionNotificationsHandler(this.MissionAgentSpawnLogic, this);
      Mission.Current.GetOverriddenFleePositionForAgent += new Func<Agent, WorldPosition?>(this.GetSallyOutFleePositionForAgent);
    }

    public override void AfterStart()
    {
      this._sallyOutNotificationsHandler.OnAfterStart();
      int besiegedTotalTroopCount;
      int besiegerTotalTroopCount;
      this.GetInitialTroopCounts(out besiegedTotalTroopCount, out besiegerTotalTroopCount);
      this.SetupInitialSpawn(besiegedTotalTroopCount, besiegerTotalTroopCount);
      this._castleGates = this.Mission.MissionObjects.FindAllWithType<CastleGate>().ToList<CastleGate>();
      this._besiegedDeploymentTimer = new BasicMissionTimer();
      this.Mission.DefenderTeam.TeamAI.OnNotifyTacticalDecision += new TeamAIComponent.TacticalDecisionDelegate(this.OnDefenderTeamTacticalDecision);
    }

    public override void OnMissionTick(float dt)
    {
      this._sallyOutNotificationsHandler.OnMissionTick(dt);
      this.UpdateTimers();
    }

    public override void OnDeploymentFinished()
    {
      this._besiegerSiegeEngines = SallyOutMissionController.GetBesiegerSiegeEngines();
      SallyOutMissionController.DisableSiegeEngines();
      Mission.Current.AddMissionBehavior((MissionBehavior) new SallyOutEndLogic());
      this._sallyOutNotificationsHandler.OnDeploymentFinished();
      this._besiegerActivationTimer = new BasicMissionTimer();
      this.DeactivateBesiegers();
    }

    protected override void OnEndMission()
    {
      this._sallyOutNotificationsHandler.OnMissionEnd();
      Mission.Current.GetOverriddenFleePositionForAgent -= new Func<Agent, WorldPosition?>(this.GetSallyOutFleePositionForAgent);
    }

    protected abstract void GetInitialTroopCounts(
      out int besiegedTotalTroopCount,
      out int besiegerTotalTroopCount);

    private void UpdateTimers()
    {
      if (this._besiegedDeploymentTimer != null)
      {
        if ((double) this._besiegedDeploymentTimer.ElapsedTime >= (double) this.BesiegedDeploymentDuration)
        {
          foreach (CastleGate castleGate in this._castleGates)
            castleGate.SetAutoOpenState(true);
          this._besiegedDeploymentTimer = (BasicMissionTimer) null;
        }
        else
        {
          foreach (CastleGate castleGate in this._castleGates)
          {
            if (!castleGate.IsDestroyed && !castleGate.IsGateOpen)
              castleGate.OpenDoor();
          }
        }
      }
      else
      {
        Agent mainAgent = this.Mission.MainAgent;
        if (mainAgent != null && mainAgent.IsActive())
        {
          Vec3 eyeGlobalPosition = mainAgent.GetEyeGlobalPosition();
          foreach (CastleGate castleGate in this._castleGates)
          {
            if (!castleGate.IsDestroyed && !castleGate.IsGateOpen && (double) eyeGlobalPosition.DistanceSquared(castleGate.GameEntity.GlobalPosition) <= 25.0)
              castleGate.OpenDoor();
          }
        }
      }
      if (this._besiegerActivationTimer == null || (double) this._besiegerActivationTimer.ElapsedTime < (double) this.BesiegerActivationDuration)
        return;
      this.ActivateBesiegers();
      this._besiegerActivationTimer = (BasicMissionTimer) null;
    }

    private void AdjustTotalTroopCounts(
      ref int besiegedTotalTroopCount,
      ref int besiegerTotalTroopCount)
    {
      float num1 = 0.25f;
      float num2 = 1f - num1;
      int b1 = (int) ((double) this.MissionAgentSpawnLogic.BattleSize * (double) num1);
      int b2 = (int) ((double) this.MissionAgentSpawnLogic.BattleSize * (double) num2);
      besiegedTotalTroopCount = MathF.Min(besiegedTotalTroopCount, b1);
      besiegerTotalTroopCount = MathF.Min(besiegerTotalTroopCount, b2);
      float num3 = num2 / num1;
      if ((double) besiegerTotalTroopCount / (double) besiegedTotalTroopCount <= (double) num3)
      {
        int a = (int) ((double) besiegerTotalTroopCount / (double) num3);
        besiegedTotalTroopCount = MathF.Min(a, besiegedTotalTroopCount);
      }
      else
      {
        int a = (int) ((double) besiegedTotalTroopCount * (double) num3);
        besiegerTotalTroopCount = MathF.Min(a, besiegerTotalTroopCount);
      }
    }

    private void SetupInitialSpawn(int besiegedTotalTroopCount, int besiegerTotalTroopCount)
    {
      this.AdjustTotalTroopCounts(ref besiegedTotalTroopCount, ref besiegerTotalTroopCount);
      int num = besiegedTotalTroopCount + besiegerTotalTroopCount;
      int defenderInitialSpawn = MathF.Min(besiegedTotalTroopCount, MathF.Ceiling((float) num * 0.1f));
      int attackerInitialSpawn = MathF.Min(besiegerTotalTroopCount, MathF.Ceiling((float) num * 0.1f));
      this.MissionAgentSpawnLogic.SetSpawnHorses(BattleSideEnum.Defender, true);
      this.MissionAgentSpawnLogic.SetSpawnHorses(BattleSideEnum.Attacker, false);
      MissionSpawnSettings spawnSettings = SallyOutMissionController.CreateSallyOutSpawnSettings(0.01f, 0.1f);
      this.MissionAgentSpawnLogic.InitWithSinglePhase(besiegedTotalTroopCount, besiegerTotalTroopCount, defenderInitialSpawn, attackerInitialSpawn, false, false, in spawnSettings);
      this.MissionAgentSpawnLogic.SetCustomReinforcementSpawnTimer((ICustomReinforcementSpawnTimer) new SallyOutReinforcementSpawnTimer(1f, 90f, 15f, 5));
    }

    private WorldPosition? GetSallyOutFleePositionForAgent(Agent agent)
    {
      if (!agent.IsHuman)
        return new WorldPosition?();
      Formation formation = agent.Formation;
      if (formation == null || formation.Team.Side == BattleSideEnum.Attacker)
        return new WorldPosition?();
      int num = !agent.HasMount ? 1 : 0;
      bool isRangedCached = agent.IsRangedCached;
      FormationClass fClass = num == 0 ? (isRangedCached ? FormationClass.HorseArcher : FormationClass.Cavalry) : (isRangedCached ? FormationClass.Ranged : FormationClass.Infantry);
      return new WorldPosition?(Mission.Current.DeploymentPlan.GetFormationPlan(formation.Team.Side, fClass, DeploymentPlanType.Initial).CreateNewDeploymentWorldPosition(WorldPosition.WorldPositionEnforcedCache.GroundVec3));
    }

    private static MissionSpawnSettings CreateSallyOutSpawnSettings(
      float besiegedReinforcementPercentage,
      float besiegerReinforcementPercentage)
    {
      return new MissionSpawnSettings(MissionSpawnSettings.InitialSpawnMethod.FreeAllocation, MissionSpawnSettings.ReinforcementTimingMethod.CustomTimer, MissionSpawnSettings.ReinforcementSpawnMethod.Fixed, defenderReinforcementBatchPercentage: besiegedReinforcementPercentage, attackerReinforcementBatchPercentage: besiegerReinforcementPercentage);
    }

    private void OnDefenderTeamTacticalDecision(in TacticalDecision decision)
    {
      if (decision.DecisionCode != (byte) 31)
        return;
      this._sallyOutNotificationsHandler.OnBesiegedSideFallsbackToKeep();
    }

    private void DeactivateBesiegers()
    {
      foreach (Formation formation in (List<Formation>) this.Mission.AttackerTeam.FormationsIncludingSpecialAndEmpty)
      {
        formation.SetMovementOrder(MovementOrder.MovementOrderStop);
        formation.FiringOrder = FiringOrder.FiringOrderHoldYourFire;
        formation.SetControlledByAI(false);
      }
    }

    private void ActivateBesiegers()
    {
      Team attackerTeam = this.Mission.AttackerTeam;
      foreach (Formation formation in (List<Formation>) this.Mission.AttackerTeam.FormationsIncludingSpecialAndEmpty)
        formation.SetControlledByAI(true);
    }

    public static MBReadOnlyList<SiegeWeapon> GetBesiegerSiegeEngines()
    {
      MBList<SiegeWeapon> besiegerSiegeEngines = new MBList<SiegeWeapon>();
      foreach (MissionObject activeMissionObject in (List<MissionObject>) Mission.Current.ActiveMissionObjects)
      {
        if (activeMissionObject is SiegeWeapon siegeWeapon && siegeWeapon.DestructionComponent != null && siegeWeapon.Side == BattleSideEnum.Attacker)
          besiegerSiegeEngines.Add(siegeWeapon);
      }
      return (MBReadOnlyList<SiegeWeapon>) besiegerSiegeEngines;
    }

    public static void DisableSiegeEngines()
    {
      foreach (MissionObject activeMissionObject in (List<MissionObject>) Mission.Current.ActiveMissionObjects)
      {
        if (activeMissionObject is SiegeWeapon siegeWeapon && siegeWeapon.DestructionComponent != null && !siegeWeapon.IsDeactivated)
        {
          siegeWeapon.Disable();
          siegeWeapon.Deactivate();
        }
      }
    }
  }
}
