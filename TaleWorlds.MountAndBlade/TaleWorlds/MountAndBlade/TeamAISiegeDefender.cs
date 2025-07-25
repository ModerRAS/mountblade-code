// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TeamAISiegeDefender
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

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TeamAISiegeDefender : TeamAISiegeComponent
  {
    public const float InsideEnemyThresholdRatio = 0.5f;
    public Vec3 MurderHolePosition;

    public List<ArcherPosition> ArcherPositions { get; }

    public TeamAISiegeDefender(
      Mission currentMission,
      Team currentTeam,
      float thinkTimerTime,
      float applyTimerTime)
      : base(currentMission, currentTeam, thinkTimerTime, applyTimerTime)
    {
      TeamAISiegeComponent.QuerySystem = new SiegeQuerySystem(this.Team, (IEnumerable<SiegeLane>) TeamAISiegeComponent.SiegeLanes);
      TeamAISiegeComponent.QuerySystem.Expire();
      this.ArcherPositions = currentMission.Scene.FindEntitiesWithTag("archer_position").Where<GameEntity>((Func<GameEntity, bool>) (ap => (NativeObject) ap.Parent == (NativeObject) null || ap.Parent.IsVisibleIncludeParents())).Select<GameEntity, ArcherPosition>((Func<GameEntity, ArcherPosition>) (ap => new ArcherPosition(ap, TeamAISiegeComponent.QuerySystem, BattleSideEnum.Defender))).ToList<ArcherPosition>();
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
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorDefendCastleKeyPosition(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorEliminateEnemyInsideCastle(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorRetakeCastleKeyPosition(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorRetreatToKeep(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSallyOut(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorUseMurderHole(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorShootFromCastleWalls(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSparseSkirmish(formation));
    }

    public override void OnDeploymentFinished()
    {
      base.OnDeploymentFinished();
      foreach (SiegeTower siegeTower in this.SiegeTowers)
        this.DifficultNavmeshIDs.AddRange((IEnumerable<int>) siegeTower.CollectGetDifficultNavmeshIDsForDefenders());
      List<SiegeLane> list = TeamAISiegeComponent.SiegeLanes.ToList<SiegeLane>();
      TeamAISiegeComponent.SiegeLanes.Clear();
      for (int i = 0; i < 3; i++)
      {
        TeamAISiegeComponent.SiegeLanes.Add(new SiegeLane((FormationAI.BehaviorSide) i, TeamAISiegeComponent.QuerySystem));
        SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes[i];
        siegeLane.SetPrimarySiegeWeapons(this.PrimarySiegeWeapons.Where<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw.WeaponSide == (FormationAI.BehaviorSide) i)).ToList<IPrimarySiegeWeapon>());
        siegeLane.SetDefensePoints(this.CastleKeyPositions.Where<MissionObject>((Func<MissionObject, bool>) (ckp => (ckp as ICastleKeyPosition).DefenseSide == (FormationAI.BehaviorSide) i)).Select<MissionObject, ICastleKeyPosition>((Func<MissionObject, ICastleKeyPosition>) (dp => dp as ICastleKeyPosition)).ToList<ICastleKeyPosition>());
        siegeLane.RefreshLane();
        siegeLane.DetermineLaneState();
        siegeLane.DetermineOrigins();
        if (i < list.Count)
        {
          for (int teamIndex = 0; teamIndex < Mission.Current.Teams.Count; ++teamIndex)
            siegeLane.SetLastAssignedFormation(teamIndex, list[i].GetLastAssignedFormation(teamIndex));
        }
      }
      TeamAISiegeComponent.QuerySystem = new SiegeQuerySystem(this.Team, (IEnumerable<SiegeLane>) TeamAISiegeComponent.SiegeLanes);
      TeamAISiegeComponent.QuerySystem.Expire();
      TeamAISiegeComponent.SiegeLanes.ForEach((Action<SiegeLane>) (sl => sl.SetSiegeQuerySystem(TeamAISiegeComponent.QuerySystem)));
      this.ArcherPositions.ForEach((Action<ArcherPosition>) (ap => ap.OnDeploymentFinished(TeamAISiegeComponent.QuerySystem, BattleSideEnum.Defender)));
    }
  }
}
