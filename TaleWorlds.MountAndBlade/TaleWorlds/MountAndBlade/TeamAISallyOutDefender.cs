// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TeamAISallyOutDefender
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
  public class TeamAISallyOutDefender : TeamAISiegeComponent
  {
    public readonly Func<WorldPosition> DefensePosition;

    public List<ArcherPosition> ArcherPositions { get; }

    public TeamAISallyOutDefender(
      Mission currentMission,
      Team currentTeam,
      float thinkTimerTime,
      float applyTimerTime)
      : base(currentMission, currentTeam, thinkTimerTime, applyTimerTime)
    {
      TeamAISallyOutDefender sallyOutDefender = this;
      TeamAISiegeComponent.QuerySystem = new SiegeQuerySystem(this.Team, (IEnumerable<SiegeLane>) TeamAISiegeComponent.SiegeLanes);
      TeamAISiegeComponent.QuerySystem.Expire();
      this.DefensePosition = (Func<WorldPosition>) (() => new WorldPosition(currentMission.Scene, UIntPtr.Zero, sallyOutDefender.Ram.GameEntity.GlobalPosition, false));
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
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorDefendSiegeWeapon(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSparseSkirmish(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSkirmishLine(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorScreenedSkirmish(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorSkirmish(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorProtectFlank(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorFlank(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorHorseArcherSkirmish(formation));
      formation.AI.AddAiBehavior((BehaviorComponent) new BehaviorDefend(formation));
    }

    public Vec3 CalculateSallyOutReferencePosition(FormationAI.BehaviorSide side)
    {
      switch (side)
      {
        case FormationAI.BehaviorSide.Left:
          SiegeTower siegeTower1 = this.SiegeTowers.FirstOrDefault<SiegeTower>((Func<SiegeTower, bool>) (st => st.WeaponSide == FormationAI.BehaviorSide.Left));
          return siegeTower1 == null ? this.Ram.GameEntity.GlobalPosition : siegeTower1.GameEntity.GlobalPosition;
        case FormationAI.BehaviorSide.Right:
          SiegeTower siegeTower2 = this.SiegeTowers.FirstOrDefault<SiegeTower>((Func<SiegeTower, bool>) (st => st.WeaponSide == FormationAI.BehaviorSide.Right));
          return siegeTower2 == null ? this.Ram.GameEntity.GlobalPosition : siegeTower2.GameEntity.GlobalPosition;
        default:
          return this.Ram.GameEntity.GlobalPosition;
      }
    }

    public override void OnDeploymentFinished()
    {
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
      }
      TeamAISiegeComponent.QuerySystem = new SiegeQuerySystem(this.Team, (IEnumerable<SiegeLane>) TeamAISiegeComponent.SiegeLanes);
      TeamAISiegeComponent.QuerySystem.Expire();
      TeamAISiegeComponent.SiegeLanes.ForEach((Action<SiegeLane>) (sl => sl.SetSiegeQuerySystem(TeamAISiegeComponent.QuerySystem)));
      this.ArcherPositions.ForEach((Action<ArcherPosition>) (ap => ap.OnDeploymentFinished(TeamAISiegeComponent.QuerySystem, BattleSideEnum.Defender)));
    }
  }
}
