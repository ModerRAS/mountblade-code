// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.Handlers.LordsHallFightMissionController
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
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions.Handlers
{
  public class LordsHallFightMissionController : 
    MissionLogic,
    IMissionAgentSpawnLogic,
    IMissionBehavior
  {
    private readonly float _areaLostRatio;
    private readonly float _attackerDefenderTroopCountRatio;
    private readonly int _attackerSideTroopCountMax;
    private readonly int _defenderSideTroopCountMax;
    private readonly LordsHallFightMissionController.MissionSide[] _missionSides;
    private Team[] _attackerTeams;
    private Team[] _defenderTeams;
    private Dictionary<int, Dictionary<int, LordsHallFightMissionController.AreaData>> _dividedAreaDictionary;
    private List<int> _areaIndexList;
    private int _lastAreaLostByDefender;
    private bool _troopsInitialized;
    private bool _isMissionInitialized;
    private bool _spawnReinforcements;
    private bool _setChargeOrderNextFrame;

    public LordsHallFightMissionController(
      IMissionTroopSupplier[] suppliers,
      float areaLostRatio,
      float attackerDefenderTroopCountRatio,
      int attackerSideTroopCountMax,
      int defenderSideTroopCountMax,
      BattleSideEnum playerSide)
    {
      this._areaLostRatio = areaLostRatio;
      this._attackerDefenderTroopCountRatio = attackerDefenderTroopCountRatio;
      this._attackerSideTroopCountMax = attackerSideTroopCountMax;
      this._defenderSideTroopCountMax = defenderSideTroopCountMax;
      this._missionSides = new LordsHallFightMissionController.MissionSide[2];
      for (int side = 0; side < 2; ++side)
      {
        IMissionTroopSupplier supplier = suppliers[side];
        bool isPlayerSide = (BattleSideEnum) side == playerSide;
        this._missionSides[side] = new LordsHallFightMissionController.MissionSide((BattleSideEnum) side, supplier, isPlayerSide);
      }
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this.Mission.GetAgentTroopClass_Override += new Func<BattleSideEnum, BasicCharacterObject, FormationClass>(this.GetLordsHallFightTroopClass);
    }

    public override void OnMissionStateFinalized()
    {
      base.OnMissionStateFinalized();
      this.Mission.GetAgentTroopClass_Override -= new Func<BattleSideEnum, BasicCharacterObject, FormationClass>(this.GetLordsHallFightTroopClass);
    }

    public override void OnCreated()
    {
      base.OnCreated();
      this.Mission.DoesMissionRequireCivilianEquipment = false;
    }

    public override void OnMissionTick(float dt)
    {
      if (!this._isMissionInitialized)
      {
        this.InitializeMission();
        this._isMissionInitialized = true;
      }
      else
      {
        if (!this._troopsInitialized)
          this._troopsInitialized = true;
        if (this._setChargeOrderNextFrame)
        {
          if (this.Mission.PlayerTeam.ActiveAgents.Count > 0)
          {
            this.Mission.PlayerTeam.PlayerOrderController.SelectAllFormations();
            this.Mission.PlayerTeam.PlayerOrderController.SetOrder(OrderType.Charge);
          }
          this._setChargeOrderNextFrame = false;
        }
        this.CheckForReinforcement();
        this.CheckIfAnyAreaIsLostByDefender();
      }
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow blow)
    {
      if (affectedAgent.Team.IsDefender)
      {
        this.FindAgentMachine(affectedAgent)?.Item2.StopUse();
      }
      else
      {
        this._setChargeOrderNextFrame = affectedAgent.IsMainAgent;
        this._spawnReinforcements = true;
      }
    }

    private Tuple<int, LordsHallFightMissionController.AreaEntityData> FindAgentMachine(Agent agent)
    {
      Tuple<int, LordsHallFightMissionController.AreaEntityData> agentMachine1 = (Tuple<int, LordsHallFightMissionController.AreaEntityData>) null;
      foreach (KeyValuePair<int, Dictionary<int, LordsHallFightMissionController.AreaData>> dividedArea in this._dividedAreaDictionary)
      {
        if (agentMachine1 == null)
        {
          foreach (KeyValuePair<int, LordsHallFightMissionController.AreaData> keyValuePair in dividedArea.Value)
          {
            LordsHallFightMissionController.AreaEntityData agentMachine2 = keyValuePair.Value.FindAgentMachine(agent);
            if (agentMachine2 != null)
            {
              agentMachine1 = new Tuple<int, LordsHallFightMissionController.AreaEntityData>(dividedArea.Key, agentMachine2);
              break;
            }
          }
        }
        else
          break;
      }
      return agentMachine1;
    }

    private void InitializeMission()
    {
      this._areaIndexList = new List<int>();
      this._dividedAreaDictionary = new Dictionary<int, Dictionary<int, LordsHallFightMissionController.AreaData>>();
      IOrderedEnumerable<FightAreaMarker> orderedEnumerable = this.Mission.ActiveMissionObjects.FindAllWithType<FightAreaMarker>().OrderBy<FightAreaMarker, int>((Func<FightAreaMarker, int>) (area => area.AreaIndex));
      this.Mission.MakeDefaultDeploymentPlans();
      foreach (FightAreaMarker marker in (IEnumerable<FightAreaMarker>) orderedEnumerable)
      {
        if (!this._dividedAreaDictionary.ContainsKey(marker.AreaIndex))
          this._dividedAreaDictionary.Add(marker.AreaIndex, new Dictionary<int, LordsHallFightMissionController.AreaData>());
        if (!this._dividedAreaDictionary[marker.AreaIndex].ContainsKey(marker.SubAreaIndex))
          this._dividedAreaDictionary[marker.AreaIndex].Add(marker.SubAreaIndex, new LordsHallFightMissionController.AreaData(new List<FightAreaMarker>()
          {
            marker
          }));
        else
          this._dividedAreaDictionary[marker.AreaIndex][marker.SubAreaIndex].AddAreaMarker(marker);
      }
      this._areaIndexList = this._dividedAreaDictionary.Keys.ToList<int>();
      this._missionSides[0].SpawnTroops(this._dividedAreaDictionary, this._defenderSideTroopCountMax);
      int numberOfActiveTroops = this._missionSides[0].NumberOfActiveTroops;
      this._defenderTeams = new Team[2];
      this._defenderTeams[0] = Mission.Current.DefenderTeam;
      this._defenderTeams[1] = Mission.Current.DefenderAllyTeam;
      this._missionSides[1].SpawnTroops(MathF.Max(1, MathF.Min(this._attackerSideTroopCountMax, MathF.Round((float) numberOfActiveTroops * this._attackerDefenderTroopCountRatio))), false);
      bool flag = Mission.Current.AttackerTeam == Mission.Current.PlayerTeam || Mission.Current.AttackerAllyTeam != null && Mission.Current.AttackerAllyTeam == Mission.Current.PlayerTeam;
      this._attackerTeams = new Team[2];
      this._attackerTeams[0] = Mission.Current.AttackerTeam;
      this._attackerTeams[1] = Mission.Current.AttackerAllyTeam;
      foreach (Team attackerTeam in this._attackerTeams)
      {
        if (attackerTeam != null)
        {
          foreach (Formation formation in (List<Formation>) attackerTeam.FormationsIncludingEmpty)
          {
            if (formation.CountOfUnits > 0)
            {
              formation.ArrangementOrder = ArrangementOrder.ArrangementOrderSquare;
              formation.FormOrder = FormOrder.FormOrderDeep;
            }
            formation.SetMovementOrder(MovementOrder.MovementOrderCharge);
            formation.FiringOrder = FiringOrder.FiringOrderHoldYourFire;
            if (flag)
              formation.PlayerOwner = Mission.Current.MainAgent;
          }
        }
      }
    }

    private void CheckForReinforcement()
    {
      if (!this._spawnReinforcements)
        return;
      this._missionSides[1].SpawnTroops(1, true);
      this._spawnReinforcements = false;
    }

    public void StartSpawner(BattleSideEnum side)
    {
      this._missionSides[(int) side].SetSpawnTroops(true);
    }

    public void StopSpawner(BattleSideEnum side)
    {
      this._missionSides[(int) side].SetSpawnTroops(false);
    }

    public bool IsSideSpawnEnabled(BattleSideEnum side)
    {
      return this._missionSides[(int) side].TroopSpawningActive;
    }

    public float GetReinforcementInterval() => 0.0f;

    public bool IsSideDepleted(BattleSideEnum side)
    {
      return this._missionSides[(int) side].NumberOfActiveTroops == 0;
    }

    private void CheckIfAnyAreaIsLostByDefender()
    {
      int areaIndex1 = -1;
      for (int index = 0; index < this._areaIndexList.Count; ++index)
      {
        int areaIndex2 = this._areaIndexList[index];
        if (areaIndex2 > this._lastAreaLostByDefender && areaIndex1 < 0)
        {
          foreach (KeyValuePair<int, LordsHallFightMissionController.AreaData> keyValuePair in this._dividedAreaDictionary[areaIndex2])
          {
            if (this.IsAreaLostByDefender(keyValuePair.Value))
            {
              areaIndex1 = areaIndex2;
              break;
            }
          }
        }
      }
      if (areaIndex1 <= 0)
        return;
      this.OnAreaLost(areaIndex1);
    }

    private void OnAreaLost(int areaIndex)
    {
      int index1 = MathF.Min(this._areaIndexList.IndexOf(areaIndex) + 1, this._areaIndexList.Count - 1);
      for (int index2 = MathF.Max(0, this._areaIndexList.IndexOf(this._lastAreaLostByDefender)); index2 < index1; ++index2)
      {
        foreach (KeyValuePair<int, LordsHallFightMissionController.AreaData> keyValuePair in this._dividedAreaDictionary[this._areaIndexList[index2]])
          this.StartAreaPullBack(keyValuePair.Value, this._areaIndexList[index1]);
      }
      this._lastAreaLostByDefender = areaIndex;
    }

    private void StartAreaPullBack(
      LordsHallFightMissionController.AreaData areaData,
      int nextAreaIndex)
    {
      foreach (LordsHallFightMissionController.AreaEntityData archerUsablePoint in areaData.ArcherUsablePoints)
      {
        if (archerUsablePoint.InUse)
        {
          Agent userAgent = archerUsablePoint.UserAgent;
          archerUsablePoint.StopUse();
          this.FindPosition(nextAreaIndex, true)?.AssignAgent(userAgent);
        }
      }
      foreach (LordsHallFightMissionController.AreaEntityData infantryUsablePoint in areaData.InfantryUsablePoints)
      {
        if (infantryUsablePoint.InUse)
        {
          Agent userAgent = infantryUsablePoint.UserAgent;
          infantryUsablePoint.StopUse();
          this.FindPosition(nextAreaIndex, false)?.AssignAgent(userAgent);
        }
      }
    }

    private LordsHallFightMissionController.AreaEntityData FindPosition(
      int nextAreaIndex,
      bool isArcher)
    {
      int key = this.SelectBestSubArea(nextAreaIndex, isArcher);
      if (key < 0)
      {
        isArcher = !isArcher;
        key = this.SelectBestSubArea(nextAreaIndex, isArcher);
      }
      return this._dividedAreaDictionary[nextAreaIndex][key].GetAvailableMachines(isArcher).GetRandomElementInefficiently<LordsHallFightMissionController.AreaEntityData>();
    }

    private int SelectBestSubArea(int areaIndex, bool isArcher)
    {
      int num1 = -1;
      float num2 = 0.0f;
      foreach (KeyValuePair<int, LordsHallFightMissionController.AreaData> keyValuePair in this._dividedAreaDictionary[areaIndex])
      {
        float availabilityRatio = this.GetAreaAvailabilityRatio(keyValuePair.Value, isArcher);
        if ((double) availabilityRatio > (double) num2)
        {
          num2 = availabilityRatio;
          num1 = keyValuePair.Key;
        }
      }
      return num1;
    }

    private float GetAreaAvailabilityRatio(
      LordsHallFightMissionController.AreaData areaData,
      bool isArcher)
    {
      int num1 = isArcher ? areaData.ArcherUsablePoints.Count<LordsHallFightMissionController.AreaEntityData>() : areaData.InfantryUsablePoints.Count<LordsHallFightMissionController.AreaEntityData>();
      int num2 = isArcher ? areaData.ArcherUsablePoints.Count<LordsHallFightMissionController.AreaEntityData>((Func<LordsHallFightMissionController.AreaEntityData, bool>) (x => !x.InUse)) : areaData.InfantryUsablePoints.Count<LordsHallFightMissionController.AreaEntityData>((Func<LordsHallFightMissionController.AreaEntityData, bool>) (x => !x.InUse));
      return num1 != 0 ? (float) num2 / (float) num1 : 0.0f;
    }

    private bool IsAreaLostByDefender(LordsHallFightMissionController.AreaData areaData)
    {
      int num1 = 0;
      foreach (Team defenderTeam in this._defenderTeams)
      {
        if (defenderTeam != null)
        {
          foreach (Agent activeAgent in (List<Agent>) defenderTeam.ActiveAgents)
          {
            if (this.IsAgentInArea(activeAgent, areaData))
              ++num1;
          }
        }
      }
      int num2 = MathF.Round((float) num1 * this._areaLostRatio);
      bool flag = num2 == 0;
      if (!flag)
      {
        foreach (Team attackerTeam in this._attackerTeams)
        {
          if (attackerTeam != null)
          {
            foreach (Agent activeAgent in (List<Agent>) attackerTeam.ActiveAgents)
            {
              if (this.IsAgentInArea(activeAgent, areaData))
              {
                --num2;
                if (num2 == 0)
                {
                  flag = true;
                  break;
                }
              }
            }
            if (flag)
              break;
          }
        }
      }
      return flag;
    }

    private bool IsAgentInArea(Agent agent, LordsHallFightMissionController.AreaData areaData)
    {
      bool flag = false;
      Vec3 position = agent.Position;
      foreach (AreaMarker area in areaData.AreaList)
      {
        if (area.IsPositionInRange(position))
        {
          flag = true;
          break;
        }
      }
      return flag;
    }

    private FormationClass GetLordsHallFightTroopClass(
      BattleSideEnum side,
      BasicCharacterObject agentCharacter)
    {
      return agentCharacter.GetFormationClass().DismountedClass();
    }

    private class MissionSide
    {
      private readonly BattleSideEnum _side;
      private readonly IMissionTroopSupplier _troopSupplier;
      private readonly bool _isPlayerSide;
      private bool _troopSpawningActive = true;
      private int _numberOfSpawnedTroops;

      public bool TroopSpawningActive => this._troopSpawningActive;

      public int NumberOfActiveTroops
      {
        get => this._numberOfSpawnedTroops - this._troopSupplier.NumRemovedTroops;
      }

      public MissionSide(
        BattleSideEnum side,
        IMissionTroopSupplier troopSupplier,
        bool isPlayerSide)
      {
        this._side = side;
        this._isPlayerSide = isPlayerSide;
        this._troopSupplier = troopSupplier;
      }

      public void SpawnTroops(
        Dictionary<int, Dictionary<int, LordsHallFightMissionController.AreaData>> areaMarkerDictionary,
        int spawnCount)
      {
        List<IAgentOriginBase> list1 = this._troopSupplier.SupplyTroops(spawnCount).OrderByDescending<IAgentOriginBase, int>((Func<IAgentOriginBase, int>) (x =>
        {
          switch (Mission.Current.GetAgentTroopClass(this._side, x.Troop))
          {
            case FormationClass.Ranged:
            case FormationClass.HorseArcher:
              return 1;
            default:
              return 0;
          }
        })).ToList<IAgentOriginBase>();
        for (int index = 0; index < list1.Count; ++index)
        {
          IAgentOriginBase troopOrigin = list1[index];
          bool isArcher = Mission.Current.GetAgentTroopClass(this._side, troopOrigin.Troop).IsRanged();
          List<KeyValuePair<int, LordsHallFightMissionController.AreaData>> list2 = areaMarkerDictionary.ElementAt<KeyValuePair<int, Dictionary<int, LordsHallFightMissionController.AreaData>>>(index % areaMarkerDictionary.Count).Value.ToList<KeyValuePair<int, LordsHallFightMissionController.AreaData>>();
          List<(KeyValuePair<int, LordsHallFightMissionController.AreaData>, float)> weightList = new List<(KeyValuePair<int, LordsHallFightMissionController.AreaData>, float)>();
          foreach (KeyValuePair<int, LordsHallFightMissionController.AreaData> keyValuePair in list2)
          {
            int num = 1000 * keyValuePair.Value.GetAvailableMachines(isArcher).Count<LordsHallFightMissionController.AreaEntityData>() + keyValuePair.Value.GetAvailableMachines(!isArcher).Count<LordsHallFightMissionController.AreaEntityData>();
            weightList.Add((new KeyValuePair<int, LordsHallFightMissionController.AreaData>(keyValuePair.Key, keyValuePair.Value), (float) num));
          }
          KeyValuePair<int, LordsHallFightMissionController.AreaData> keyValuePair1 = MBRandom.ChooseWeighted<KeyValuePair<int, LordsHallFightMissionController.AreaData>>((IReadOnlyList<(KeyValuePair<int, LordsHallFightMissionController.AreaData>, float)>) weightList);
          LordsHallFightMissionController.AreaEntityData areaEntityData = keyValuePair1.Value.GetAvailableMachines(isArcher).GetRandomElementInefficiently<LordsHallFightMissionController.AreaEntityData>() ?? keyValuePair1.Value.GetAvailableMachines(!isArcher).GetRandomElementInefficiently<LordsHallFightMissionController.AreaEntityData>();
          MatrixFrame globalFrame = areaEntityData.Entity.GetGlobalFrame();
          Agent agent = Mission.Current.SpawnTroop(troopOrigin, false, false, false, false, 0, 0, false, false, false, new Vec3?(globalFrame.origin), new Vec2?(globalFrame.rotation.f.AsVec2.Normalized()));
          ++this._numberOfSpawnedTroops;
          AgentFlag agentFlags = agent.GetAgentFlags();
          agent.SetAgentFlags(agentFlags & ~AgentFlag.CanRetreat);
          agent.WieldInitialWeapons(Agent.WeaponWieldActionType.Instant);
          agent.SetWatchState(Agent.WatchState.Alarmed);
          agent.SetBehaviorValueSet(HumanAIComponent.BehaviorValueSet.DefensiveArrangementMove);
          areaEntityData.AssignAgent(agent);
        }
      }

      public void SpawnTroops(int spawnCount, bool isReinforcement)
      {
        if (!this._troopSpawningActive)
          return;
        List<IAgentOriginBase> list = this._troopSupplier.SupplyTroops(spawnCount).ToList<IAgentOriginBase>();
        for (int index = 0; index < list.Count; ++index)
        {
          if (BattleSideEnum.Attacker == this._side)
          {
            Mission.Current.SpawnTroop(list[index], this._isPlayerSide, true, false, isReinforcement, spawnCount, index, true, true, true, new Vec3?(), new Vec2?());
            ++this._numberOfSpawnedTroops;
          }
        }
      }

      public void SetSpawnTroops(bool spawnTroops) => this._troopSpawningActive = spawnTroops;
    }

    private class AreaData
    {
      private const string ArcherSpawnPointTag = "defender_archer";
      private const string InfantrySpawnPointTag = "defender_infantry";
      private readonly List<FightAreaMarker> _areaList;
      private readonly List<LordsHallFightMissionController.AreaEntityData> _archerUsablePoints;
      private readonly List<LordsHallFightMissionController.AreaEntityData> _infantryUsablePoints;

      public IEnumerable<FightAreaMarker> AreaList => (IEnumerable<FightAreaMarker>) this._areaList;

      public IEnumerable<LordsHallFightMissionController.AreaEntityData> ArcherUsablePoints
      {
        get
        {
          return (IEnumerable<LordsHallFightMissionController.AreaEntityData>) this._archerUsablePoints;
        }
      }

      public IEnumerable<LordsHallFightMissionController.AreaEntityData> InfantryUsablePoints
      {
        get
        {
          return (IEnumerable<LordsHallFightMissionController.AreaEntityData>) this._infantryUsablePoints;
        }
      }

      public AreaData(List<FightAreaMarker> areaList)
      {
        this._areaList = new List<FightAreaMarker>();
        this._archerUsablePoints = new List<LordsHallFightMissionController.AreaEntityData>();
        this._infantryUsablePoints = new List<LordsHallFightMissionController.AreaEntityData>();
        foreach (FightAreaMarker area in areaList)
          this.AddAreaMarker(area);
      }

      public IEnumerable<LordsHallFightMissionController.AreaEntityData> GetAvailableMachines(
        bool isArcher)
      {
        foreach (LordsHallFightMissionController.AreaEntityData availableMachine in isArcher ? this._archerUsablePoints : this._infantryUsablePoints)
        {
          if (!availableMachine.InUse)
            yield return availableMachine;
        }
      }

      public void AddAreaMarker(FightAreaMarker marker)
      {
        this._areaList.Add(marker);
        foreach (GameEntity gameEntity in marker.GetGameEntitiesWithTagInRange("defender_archer"))
        {
          GameEntity entity = gameEntity;
          PathFaceRecord nullFaceRecord = PathFaceRecord.NullFaceRecord;
          Mission.Current.Scene.GetNavMeshFaceIndex(ref nullFaceRecord, entity.GetGlobalFrame().origin, true);
          if (nullFaceRecord.FaceIndex != -1 && this._archerUsablePoints.All<LordsHallFightMissionController.AreaEntityData>((Func<LordsHallFightMissionController.AreaEntityData, bool>) (x => (NativeObject) x.Entity != (NativeObject) entity)))
            this._archerUsablePoints.Add(new LordsHallFightMissionController.AreaEntityData(entity));
        }
        foreach (GameEntity gameEntity in marker.GetGameEntitiesWithTagInRange("defender_infantry"))
        {
          GameEntity entity = gameEntity;
          if (this._infantryUsablePoints.All<LordsHallFightMissionController.AreaEntityData>((Func<LordsHallFightMissionController.AreaEntityData, bool>) (x => (NativeObject) x.Entity != (NativeObject) entity)))
            this._infantryUsablePoints.Add(new LordsHallFightMissionController.AreaEntityData(entity));
        }
      }

      public LordsHallFightMissionController.AreaEntityData FindAgentMachine(Agent agent)
      {
        return this._infantryUsablePoints.FirstOrDefault<LordsHallFightMissionController.AreaEntityData>((Func<LordsHallFightMissionController.AreaEntityData, bool>) (x => x.UserAgent == agent)) ?? this._archerUsablePoints.FirstOrDefault<LordsHallFightMissionController.AreaEntityData>((Func<LordsHallFightMissionController.AreaEntityData, bool>) (x => x.UserAgent == agent));
      }
    }

    private class AreaEntityData
    {
      public readonly GameEntity Entity;

      public Agent UserAgent { get; private set; }

      public bool InUse => this.UserAgent != null;

      public AreaEntityData(GameEntity entity) => this.Entity = entity;

      public void AssignAgent(Agent agent)
      {
        this.UserAgent = agent;
        MatrixFrame globalFrame = this.Entity.GetGlobalFrame();
        agent.SetBehaviorValueSet(HumanAIComponent.BehaviorValueSet.DefaultMove);
        this.UserAgent.SetFormationFrameEnabled(new WorldPosition(agent.Mission.Scene, globalFrame.origin), globalFrame.rotation.f.AsVec2.Normalized(), Vec2.Zero, 0.0f);
      }

      public void StopUse()
      {
        if (this.UserAgent.IsActive())
          this.UserAgent.SetFormationFrameDisabled();
        this.UserAgent = (Agent) null;
      }
    }
  }
}
