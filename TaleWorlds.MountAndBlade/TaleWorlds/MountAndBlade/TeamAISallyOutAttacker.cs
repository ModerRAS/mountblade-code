// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TeamAISallyOutAttacker
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
  public class TeamAISallyOutAttacker : TeamAISiegeComponent
  {
    public MBList<GameEntity> ArcherPositions;
    public readonly List<UsableMachine> BesiegerRangedSiegeWeapons;

    public TeamAISallyOutAttacker(
      Mission currentMission,
      Team currentTeam,
      float thinkTimerTime,
      float applyTimerTime)
      : base(currentMission, currentTeam, thinkTimerTime, applyTimerTime)
    {
      this.ArcherPositions = currentMission.Scene.FindEntitiesWithTag("archer_position").ToMBList<GameEntity>();
      this.BesiegerRangedSiegeWeapons = new List<UsableMachine>((IEnumerable<UsableMachine>) currentMission.ActiveMissionObjects.FindAllWithType<RangedSiegeWeapon>().Where<RangedSiegeWeapon>((Func<RangedSiegeWeapon, bool>) (w => w.Side == BattleSideEnum.Attacker && !w.IsDisabled)));
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
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorShootFromCastleWalls(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorDestroySiegeWeapons(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSparseSkirmish(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorDefend(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorRetreatToCastle(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorRetreatToKeep(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorDefendCastleKeyPosition(formation));
    }

    public override void OnDeploymentFinished()
    {
      base.OnDeploymentFinished();
      if (this.CurrentTactic == null)
        return;
      this.CurrentTactic.ResetTactic();
    }
  }
}
