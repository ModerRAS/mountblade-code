// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TeamAISiegeComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class TeamAISiegeComponent : TeamAIComponent
  {
    public const int InsideCastleNavMeshID = 1;
    public const int SiegeTokenForceSize = 15;
    private const float FormationInsideCastleThresholdPercentage = 0.4f;
    private const float CastleBreachThresholdPercentage = 0.7f;
    public readonly IEnumerable<WallSegment> WallSegments;
    public readonly List<SiegeWeapon> SceneSiegeWeapons;
    protected readonly IEnumerable<CastleGate> CastleGates;
    protected readonly List<SiegeTower> SiegeTowers;
    protected readonly HashSet<int> PrimarySiegeWeaponNavMeshFaceIDs;
    protected BatteringRam Ram;
    protected List<MissionObject> CastleKeyPositions;
    private readonly MBList<SiegeLadder> _ladders;
    private bool _noProperLaneRemains;

    public static List<SiegeLane> SiegeLanes { get; private set; }

    public static SiegeQuerySystem QuerySystem { get; protected set; }

    public CastleGate OuterGate { get; }

    public List<IPrimarySiegeWeapon> PrimarySiegeWeapons { get; }

    public CastleGate InnerGate { get; }

    public MBReadOnlyList<SiegeLadder> Ladders => (MBReadOnlyList<SiegeLadder>) this._ladders;

    public bool AreLaddersReady { get; private set; }

    public List<int> DifficultNavmeshIDs { get; private set; }

    protected TeamAISiegeComponent(
      Mission currentMission,
      Team currentTeam,
      float thinkTimerTime,
      float applyTimerTime)
      : base(currentMission, currentTeam, thinkTimerTime, applyTimerTime)
    {
      this.CastleGates = (IEnumerable<CastleGate>) currentMission.ActiveMissionObjects.FindAllWithType<CastleGate>().ToList<CastleGate>();
      this.WallSegments = (IEnumerable<WallSegment>) currentMission.ActiveMissionObjects.FindAllWithType<WallSegment>().ToList<WallSegment>();
      this.OuterGate = this.CastleGates.FirstOrDefault<CastleGate>((Func<CastleGate, bool>) (g => g.GameEntity.HasTag("outer_gate")));
      this.InnerGate = this.CastleGates.FirstOrDefault<CastleGate>((Func<CastleGate, bool>) (g => g.GameEntity.HasTag("inner_gate")));
      this.SceneSiegeWeapons = Mission.Current.MissionObjects.FindAllWithType<SiegeWeapon>().ToList<SiegeWeapon>();
      this._ladders = this.SceneSiegeWeapons.OfType<SiegeLadder>().ToMBList<SiegeLadder>();
      this.Ram = this.SceneSiegeWeapons.FirstOrDefault<SiegeWeapon>((Func<SiegeWeapon, bool>) (ssw => ssw is BatteringRam)) as BatteringRam;
      this.SiegeTowers = this.SceneSiegeWeapons.OfType<SiegeTower>().ToList<SiegeTower>();
      this.PrimarySiegeWeapons = new List<IPrimarySiegeWeapon>();
      this.PrimarySiegeWeapons.AddRange((IEnumerable<IPrimarySiegeWeapon>) this._ladders);
      if (this.Ram != null)
        this.PrimarySiegeWeapons.Add((IPrimarySiegeWeapon) this.Ram);
      this.PrimarySiegeWeapons.AddRange((IEnumerable<IPrimarySiegeWeapon>) this.SiegeTowers);
      this.PrimarySiegeWeaponNavMeshFaceIDs = new HashSet<int>();
      foreach (IPrimarySiegeWeapon primarySiegeWeapon1 in this.PrimarySiegeWeapons)
      {
        IPrimarySiegeWeapon primarySiegeWeapon2;
        List<int> navmeshFaceIds;
        if ((primarySiegeWeapon2 = primarySiegeWeapon1) != null && primarySiegeWeapon2.GetNavmeshFaceIds(out navmeshFaceIds))
          this.PrimarySiegeWeaponNavMeshFaceIDs.UnionWith((IEnumerable<int>) navmeshFaceIds);
      }
      this.CastleKeyPositions = new List<MissionObject>();
      this.CastleKeyPositions.AddRange((IEnumerable<MissionObject>) this.CastleGates);
      this.CastleKeyPositions.AddRange((IEnumerable<MissionObject>) this.WallSegments);
      TeamAISiegeComponent.SiegeLanes = new List<SiegeLane>();
      for (int i = 0; i < 3; i++)
      {
        TeamAISiegeComponent.SiegeLanes.Add(new SiegeLane((FormationAI.BehaviorSide) i, TeamAISiegeComponent.QuerySystem));
        TeamAISiegeComponent.SiegeLanes[i].SetPrimarySiegeWeapons(this.PrimarySiegeWeapons.Where<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw.WeaponSide == (FormationAI.BehaviorSide) i)).Select<IPrimarySiegeWeapon, IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, IPrimarySiegeWeapon>) (um => um)).ToList<IPrimarySiegeWeapon>());
        TeamAISiegeComponent.SiegeLanes[i].SetDefensePoints(this.CastleKeyPositions.Where<MissionObject>((Func<MissionObject, bool>) (ckp => ((ICastleKeyPosition) ckp).DefenseSide == (FormationAI.BehaviorSide) i)).Select<MissionObject, ICastleKeyPosition>((Func<MissionObject, ICastleKeyPosition>) (dp => (ICastleKeyPosition) dp)).ToList<ICastleKeyPosition>());
        TeamAISiegeComponent.SiegeLanes[i].RefreshLane();
      }
      TeamAISiegeComponent.SiegeLanes.ForEach((Action<SiegeLane>) (sl => sl.SetSiegeQuerySystem(TeamAISiegeComponent.QuerySystem)));
      this.DifficultNavmeshIDs = new List<int>();
    }

    protected internal override void Tick(float dt)
    {
      if (!this._noProperLaneRemains)
      {
        int num = 0;
        SiegeLane siegeLane1 = (SiegeLane) null;
        foreach (SiegeLane siegeLane2 in TeamAISiegeComponent.SiegeLanes)
        {
          siegeLane2.RefreshLane();
          siegeLane2.DetermineLaneState();
          if (siegeLane2.IsBreach)
            ++num;
          else
            siegeLane1 = siegeLane2;
        }
        if (siegeLane1 != null && num >= 2 && !siegeLane1.IsOpen && siegeLane1.LaneState >= SiegeLane.LaneStateEnum.Used)
          siegeLane1.SetLaneState(SiegeLane.LaneStateEnum.Unused);
        if (TeamAISiegeComponent.SiegeLanes.Count == 0)
        {
          this._noProperLaneRemains = true;
          foreach (FormationAI.BehaviorSide behaviorSide in this.CastleKeyPositions.Where<MissionObject>((Func<MissionObject, bool>) (ckp => ckp is CastleGate castleGate && castleGate.DefenseSide != FormationAI.BehaviorSide.BehaviorSideNotSet)).Select<MissionObject, FormationAI.BehaviorSide>((Func<MissionObject, FormationAI.BehaviorSide>) (ckp => ((CastleGate) ckp).DefenseSide)))
          {
            FormationAI.BehaviorSide difficultLaneSide = behaviorSide;
            SiegeLane siegeLane3 = new SiegeLane(difficultLaneSide, TeamAISiegeComponent.QuerySystem);
            siegeLane3.SetPrimarySiegeWeapons(new List<IPrimarySiegeWeapon>());
            siegeLane3.SetDefensePoints(this.CastleKeyPositions.Where<MissionObject>((Func<MissionObject, bool>) (ckp => ((ICastleKeyPosition) ckp).DefenseSide == difficultLaneSide && ckp is CastleGate)).Select<MissionObject, ICastleKeyPosition>((Func<MissionObject, ICastleKeyPosition>) (dp => dp as ICastleKeyPosition)).ToList<ICastleKeyPosition>());
            siegeLane3.RefreshLane();
            siegeLane3.DetermineLaneState();
            TeamAISiegeComponent.SiegeLanes.Add(siegeLane3);
          }
        }
      }
      else
      {
        foreach (SiegeLane siegeLane in TeamAISiegeComponent.SiegeLanes)
        {
          siegeLane.RefreshLane();
          siegeLane.DetermineLaneState();
        }
      }
      base.Tick(dt);
    }

    public static void OnMissionFinalize()
    {
      if (TeamAISiegeComponent.SiegeLanes != null)
      {
        TeamAISiegeComponent.SiegeLanes.Clear();
        TeamAISiegeComponent.SiegeLanes = (List<SiegeLane>) null;
      }
      TeamAISiegeComponent.QuerySystem = (SiegeQuerySystem) null;
    }

    public bool CalculateIsChargePastWallsApplicable(FormationAI.BehaviorSide side)
    {
      if (Mission.Current.MissionTeamAIType == Mission.MissionTeamAITypeEnum.SallyOut || side == FormationAI.BehaviorSide.BehaviorSideNotSet && this.InnerGate != null && !this.InnerGate.IsGateOpen)
        return false;
      foreach (SiegeLane siegeLane in TeamAISiegeComponent.SiegeLanes)
      {
        if (side == FormationAI.BehaviorSide.BehaviorSideNotSet)
        {
          if (!siegeLane.IsOpen)
            return false;
        }
        else if (side == siegeLane.LaneSide)
          return siegeLane.IsOpen && (siegeLane.IsBreach || siegeLane.HasGate && (this.InnerGate == null || this.InnerGate.IsGateOpen));
      }
      return true;
    }

    public void SetAreLaddersReady(bool areLaddersReady) => this.AreLaddersReady = areLaddersReady;

    public bool CalculateIsAnyLaneOpenToGetInside()
    {
      return TeamAISiegeComponent.SiegeLanes.Any<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.IsOpen));
    }

    public bool CalculateIsAnyLaneOpenToGoOutside()
    {
      return TeamAISiegeComponent.SiegeLanes.Any<SiegeLane>((Func<SiegeLane, bool>) (sl =>
      {
        if (!sl.IsOpen)
          return false;
        return sl.IsBreach || sl.HasGate || sl.PrimarySiegeWeapons.Any<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw is SiegeTower));
      }));
    }

    public bool IsPrimarySiegeWeaponNavmeshFaceId(int id)
    {
      return this.PrimarySiegeWeaponNavMeshFaceIDs.Contains(id);
    }

    public static bool IsFormationGroupInsideCastle(
      MBList<Formation> formationGroup,
      bool includeOnlyPositionedUnits,
      float thresholdPercentage = 0.4f)
    {
      int num1 = 0;
      foreach (Formation formation in (List<Formation>) formationGroup)
        num1 += includeOnlyPositionedUnits ? formation.Arrangement.PositionedUnitCount : formation.CountOfUnits;
      float num2 = (float) num1 * thresholdPercentage;
      foreach (Formation formation in (List<Formation>) formationGroup)
      {
        if (formation.CountOfUnits > 0)
        {
          num2 -= (float) formation.CountUnitsOnNavMeshIDMod10(1, includeOnlyPositionedUnits);
          if ((double) num2 <= 0.0)
            return true;
        }
      }
      return false;
    }

    public static bool IsFormationInsideCastle(
      Formation formation,
      bool includeOnlyPositionedUnits,
      float thresholdPercentage = 0.4f)
    {
      int num1 = includeOnlyPositionedUnits ? formation.Arrangement.PositionedUnitCount : formation.CountOfUnits;
      float num2 = (float) num1 * thresholdPercentage;
      return num1 == 0 ? !(formation.Team.TeamAI is TeamAISiegeAttacker) && !(formation.Team.TeamAI is TeamAISallyOutDefender) && (formation.Team.TeamAI is TeamAISiegeDefender || formation.Team.TeamAI is TeamAISallyOutAttacker) : (includeOnlyPositionedUnits ? (double) formation.QuerySystem.InsideCastleUnitCountPositioned >= (double) num2 : (double) formation.QuerySystem.InsideCastleUnitCountIncludingUnpositioned >= (double) num2);
    }

    public bool IsCastleBreached()
    {
      int num1 = 0;
      int num2 = 0;
      foreach (Formation formation in (List<Formation>) this.Mission.AttackerTeam.FormationsIncludingSpecialAndEmpty)
      {
        if (formation.CountOfUnits > 0)
        {
          ++num2;
          if (TeamAISiegeComponent.IsFormationInsideCastle(formation, true))
            ++num1;
        }
      }
      if (this.Mission.AttackerAllyTeam != null)
      {
        foreach (Formation formation in (List<Formation>) this.Mission.AttackerAllyTeam.FormationsIncludingSpecialAndEmpty)
        {
          if (formation.CountOfUnits > 0)
          {
            ++num2;
            if (TeamAISiegeComponent.IsFormationInsideCastle(formation, true))
              ++num1;
          }
        }
      }
      return (double) num1 >= (double) num2 * 0.699999988079071;
    }

    public override void OnDeploymentFinished()
    {
      foreach (SiegeLadder siegeLadder in this._ladders.Where<SiegeLadder>((Func<SiegeLadder, bool>) (l => !l.IsDisabled)))
        this.DifficultNavmeshIDs.Add(siegeLadder.OnWallNavMeshId);
      foreach (SiegeTower siegeTower in this.SiegeTowers)
        this.DifficultNavmeshIDs.AddRange((IEnumerable<int>) siegeTower.CollectGetDifficultNavmeshIDs());
      foreach (Formation formation in (List<Formation>) this.Team.FormationsIncludingEmpty)
        formation.OnDeploymentFinished();
    }
  }
}
