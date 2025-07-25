// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TeamAIGeneral
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TeamAIGeneral : TeamAIComponent
  {
    private int _numberOfEnemiesInShootRange;
    private int _numberOfEnemiesCloseToAttack;

    public TeamAIGeneral(
      Mission currentMission,
      Team currentTeam,
      float thinkTimerTime = 10f,
      float applyTimerTime = 1f)
      : base(currentMission, currentTeam, thinkTimerTime, applyTimerTime)
    {
    }

    public override void OnUnitAddedToFormationForTheFirstTime(Formation formation)
    {
      if (GameNetwork.IsServer)
      {
        if (formation.AI.GetBehavior<BehaviorCharge>() != null)
          return;
        if (formation.FormationIndex == FormationClass.NumberOfRegularFormations)
          formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorGeneral(formation));
        else if (formation.FormationIndex == FormationClass.Bodyguard)
          formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorProtectGeneral(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorCharge(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorPullBack(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorRegroup(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorReserve(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorRetreat(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorStop(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorTacticalCharge(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSergeantMPInfantry(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSergeantMPLastFlagLastStand(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSergeantMPMounted(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSergeantMPMountedRanged(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSergeantMPRanged(formation));
      }
      else
      {
        if (GameNetwork.IsClientOrReplay || formation.AI.GetBehavior<BehaviorCharge>() != null)
          return;
        if (formation.FormationIndex == FormationClass.NumberOfRegularFormations)
          formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorGeneral(formation));
        else if (formation.FormationIndex == FormationClass.Bodyguard)
          formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorProtectGeneral(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorCharge(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorPullBack(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorRegroup(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorReserve(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorRetreat(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorStop(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorTacticalCharge(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorAdvance(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorCautiousAdvance(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorCavalryScreen(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorDefend(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorDefensiveRing(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorFireFromInfantryCover(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorFlank(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorHoldHighGround(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorHorseArcherSkirmish(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorMountedSkirmish(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorProtectFlank(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorScreenedSkirmish(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSkirmish(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSkirmishBehindFormation(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSkirmishLine(formation));
        formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorVanguard(formation));
      }
    }

    private void UpdateVariables()
    {
      TeamQuerySystem querySystem = this.Team.QuerySystem;
      this._numberOfEnemiesInShootRange = 0;
      this._numberOfEnemiesCloseToAttack = 0;
      Vec2 averagePosition = querySystem.AveragePosition;
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        if (!agent.IsMount && agent.Team.IsValid && agent.Team.IsEnemyOf(this.Team))
        {
          double num = (double) agent.Position.DistanceSquared(new Vec3(averagePosition.x, averagePosition.y));
          if (num < 40000.0)
            ++this._numberOfEnemiesInShootRange;
          if (num < 1600.0)
            ++this._numberOfEnemiesCloseToAttack;
        }
      }
    }

    protected override void DebugTick(float dt)
    {
    }
  }
}
