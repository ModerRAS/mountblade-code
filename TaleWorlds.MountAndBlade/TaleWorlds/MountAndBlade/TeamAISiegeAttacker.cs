// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TeamAISiegeAttacker
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
  public class TeamAISiegeAttacker : TeamAISiegeComponent
  {
    private readonly MBList<ArcherPosition> _archerPositions;

    public MBReadOnlyList<ArcherPosition> ArcherPositions
    {
      get => (MBReadOnlyList<ArcherPosition>) this._archerPositions;
    }

    public TeamAISiegeAttacker(
      Mission currentMission,
      Team currentTeam,
      float thinkTimerTime,
      float applyTimerTime)
      : base(currentMission, currentTeam, thinkTimerTime, applyTimerTime)
    {
      this._archerPositions = currentMission.Scene.FindEntitiesWithTag("archer_position_attacker").Select<GameEntity, ArcherPosition>((Func<GameEntity, ArcherPosition>) (ap => new ArcherPosition(ap, TeamAISiegeComponent.QuerySystem, BattleSideEnum.Attacker))).ToMBList<ArcherPosition>();
    }

    public override void OnUnitAddedToFormationForTheFirstTime(Formation formation)
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
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorAssaultWalls(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorShootFromSiegeTower(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorUseSiegeMachines(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorWaitForLadders(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSparseSkirmish(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSkirmish(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorRetreatToKeep(formation));
    }

    public override void OnDeploymentFinished()
    {
      base.OnDeploymentFinished();
      foreach (SiegeTower siegeTower in this.SiegeTowers)
        this.DifficultNavmeshIDs.AddRange((IEnumerable<int>) siegeTower.CollectGetDifficultNavmeshIDsForAttackers());
      foreach (ArcherPosition archerPosition in (List<ArcherPosition>) this._archerPositions)
        archerPosition.OnDeploymentFinished(TeamAISiegeComponent.QuerySystem, BattleSideEnum.Attacker);
    }
  }
}
