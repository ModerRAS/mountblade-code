// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionAgentSpawnLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Missions.Handlers;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionAgentSpawnLogic : MissionLogic, IMissionAgentSpawnLogic, IMissionBehavior
  {
    private static int _maxNumberOfAgentsForMissionCache;
    private readonly MissionAgentSpawnLogic.OnPhaseChangedDelegate[] _onPhaseChanged = new MissionAgentSpawnLogic.OnPhaseChangedDelegate[2];
    private readonly List<MissionAgentSpawnLogic.SpawnPhase>[] _phases;
    private readonly int[] _numberOfTroopsInTotal;
    private readonly MissionAgentSpawnLogic.FormationSpawnData[] _formationSpawnData;
    private readonly int _battleSize;
    private bool _reinforcementSpawnEnabled = true;
    private bool _spawningReinforcements;
    private readonly BasicMissionTimer _globalReinforcementSpawnTimer;
    private ICustomReinforcementSpawnTimer _customReinforcementSpawnTimer;
    private float _globalReinforcementInterval;
    private MissionSpawnSettings _spawnSettings;
    private readonly MissionAgentSpawnLogic.MissionSide[] _missionSides;
    private BannerBearerLogic _bannerBearerLogic;
    private List<BattleSideEnum> _sidesWhereSpawnOccured = new List<BattleSideEnum>();
    private readonly MissionAgentSpawnLogic.MissionSide _playerSide;

    public static int MaxNumberOfAgentsForMission
    {
      get
      {
        if (MissionAgentSpawnLogic._maxNumberOfAgentsForMissionCache == 0)
          MissionAgentSpawnLogic._maxNumberOfAgentsForMissionCache = MBAPI.IMBAgent.GetMaximumNumberOfAgents();
        return MissionAgentSpawnLogic._maxNumberOfAgentsForMissionCache;
      }
    }

    private static int MaxNumberOfTroopsForMission
    {
      get => MissionAgentSpawnLogic.MaxNumberOfAgentsForMission / 2;
    }

    public event Action<BattleSideEnum, int> OnReinforcementsSpawned;

    public event Action<BattleSideEnum, int> OnInitialTroopsSpawned;

    public int NumberOfAgents => this.Mission.AllAgents.Count;

    public int NumberOfRemainingTroops
    {
      get
      {
        MissionAgentSpawnLogic.SpawnPhase defenderActivePhase = this.DefenderActivePhase;
        int remainingSpawnNumber1 = defenderActivePhase != null ? defenderActivePhase.RemainingSpawnNumber : 0;
        MissionAgentSpawnLogic.SpawnPhase attackerActivePhase = this.AttackerActivePhase;
        int remainingSpawnNumber2 = attackerActivePhase != null ? attackerActivePhase.RemainingSpawnNumber : 0;
        return remainingSpawnNumber1 + remainingSpawnNumber2;
      }
    }

    public int NumberOfActiveDefenderTroops
    {
      get
      {
        MissionAgentSpawnLogic.SpawnPhase defenderActivePhase = this.DefenderActivePhase;
        return defenderActivePhase == null ? 0 : defenderActivePhase.NumberActiveTroops;
      }
    }

    public int NumberOfActiveAttackerTroops
    {
      get
      {
        MissionAgentSpawnLogic.SpawnPhase attackerActivePhase = this.AttackerActivePhase;
        return attackerActivePhase == null ? 0 : attackerActivePhase.NumberActiveTroops;
      }
    }

    public int NumberOfRemainingDefenderTroops
    {
      get
      {
        MissionAgentSpawnLogic.SpawnPhase defenderActivePhase = this.DefenderActivePhase;
        return defenderActivePhase == null ? 0 : defenderActivePhase.RemainingSpawnNumber;
      }
    }

    public int NumberOfRemainingAttackerTroops
    {
      get
      {
        MissionAgentSpawnLogic.SpawnPhase attackerActivePhase = this.AttackerActivePhase;
        return attackerActivePhase == null ? 0 : attackerActivePhase.RemainingSpawnNumber;
      }
    }

    public int BattleSize => this._battleSize;

    public bool IsInitialSpawnOver
    {
      get
      {
        return this.DefenderActivePhase.InitialSpawnNumber + this.AttackerActivePhase.InitialSpawnNumber == 0;
      }
    }

    public bool IsDeploymentOver
    {
      get
      {
        return this.Mission.GetMissionBehavior<BattleDeploymentHandler>() == null && this.IsInitialSpawnOver;
      }
    }

    public ref readonly MissionSpawnSettings ReinforcementSpawnSettings => ref this._spawnSettings;

    private int TotalSpawnNumber
    {
      get
      {
        MissionAgentSpawnLogic.SpawnPhase defenderActivePhase = this.DefenderActivePhase;
        int totalSpawnNumber1 = defenderActivePhase != null ? defenderActivePhase.TotalSpawnNumber : 0;
        MissionAgentSpawnLogic.SpawnPhase attackerActivePhase = this.AttackerActivePhase;
        int totalSpawnNumber2 = attackerActivePhase != null ? attackerActivePhase.TotalSpawnNumber : 0;
        return totalSpawnNumber1 + totalSpawnNumber2;
      }
    }

    private MissionAgentSpawnLogic.SpawnPhase DefenderActivePhase
    {
      get => this._phases[0].FirstOrDefault<MissionAgentSpawnLogic.SpawnPhase>();
    }

    private MissionAgentSpawnLogic.SpawnPhase AttackerActivePhase
    {
      get => this._phases[1].FirstOrDefault<MissionAgentSpawnLogic.SpawnPhase>();
    }

    public override void AfterStart()
    {
      this._bannerBearerLogic = this.Mission.GetMissionBehavior<BannerBearerLogic>();
      if (this._bannerBearerLogic != null)
      {
        for (int index = 0; index < 2; ++index)
          this._missionSides[index].SetBannerBearerLogic(this._bannerBearerLogic);
      }
      MissionGameModels.Current.BattleSpawnModel.OnMissionStart();
    }

    public int GetNumberOfPlayerControllableTroops()
    {
      MissionAgentSpawnLogic.MissionSide playerSide = this._playerSide;
      return playerSide == null ? 0 : playerSide.GetNumberOfPlayerControllableTroops();
    }

    public void InitWithSinglePhase(
      int defenderTotalSpawn,
      int attackerTotalSpawn,
      int defenderInitialSpawn,
      int attackerInitialSpawn,
      bool spawnDefenders,
      bool spawnAttackers,
      in MissionSpawnSettings spawnSettings)
    {
      this.AddPhase(BattleSideEnum.Defender, defenderTotalSpawn, defenderInitialSpawn);
      this.AddPhase(BattleSideEnum.Attacker, attackerTotalSpawn, attackerInitialSpawn);
      this.Init(spawnDefenders, spawnAttackers, in spawnSettings);
    }

    public IEnumerable<IAgentOriginBase> GetAllTroopsForSide(BattleSideEnum side)
    {
      return this._missionSides[(int) side].GetAllTroops();
    }

    public override void OnMissionTick(float dt)
    {
      if (!GameNetwork.IsClient && !this.CheckDeployment())
        return;
      this.PhaseTick();
      if (this._reinforcementSpawnEnabled)
      {
        if (this._spawnSettings.ReinforcementTroopsTimingMethod == MissionSpawnSettings.ReinforcementTimingMethod.GlobalTimer)
          this.CheckGlobalReinforcementBatch();
        else if (this._spawnSettings.ReinforcementTroopsTimingMethod == MissionSpawnSettings.ReinforcementTimingMethod.CustomTimer)
          this.CheckCustomReinforcementBatch();
      }
      if (!this._spawningReinforcements)
        return;
      this.CheckReinforcementSpawn();
    }

    public MissionAgentSpawnLogic(
      IMissionTroopSupplier[] suppliers,
      BattleSideEnum playerSide,
      Mission.BattleSizeType battleSizeType)
    {
      switch (battleSizeType)
      {
        case Mission.BattleSizeType.Battle:
          this._battleSize = BannerlordConfig.GetRealBattleSize();
          break;
        case Mission.BattleSizeType.Siege:
          this._battleSize = BannerlordConfig.GetRealBattleSizeForSiege();
          break;
        case Mission.BattleSizeType.SallyOut:
          this._battleSize = BannerlordConfig.GetRealBattleSizeForSallyOut();
          break;
      }
      this._battleSize = MathF.Min(this._battleSize, MissionAgentSpawnLogic.MaxNumberOfTroopsForMission);
      this._globalReinforcementSpawnTimer = new BasicMissionTimer();
      this._spawnSettings = MissionSpawnSettings.CreateDefaultSpawnSettings();
      this._globalReinforcementInterval = this._spawnSettings.GlobalReinforcementInterval;
      this._missionSides = new MissionAgentSpawnLogic.MissionSide[2];
      for (int side = 0; side < 2; ++side)
      {
        IMissionTroopSupplier supplier = suppliers[side];
        bool isPlayerSide = (BattleSideEnum) side == playerSide;
        MissionAgentSpawnLogic.MissionSide missionSide = new MissionAgentSpawnLogic.MissionSide(this, (BattleSideEnum) side, supplier, isPlayerSide);
        if (isPlayerSide)
          this._playerSide = missionSide;
        this._missionSides[side] = missionSide;
      }
      this._numberOfTroopsInTotal = new int[2];
      this._formationSpawnData = new MissionAgentSpawnLogic.FormationSpawnData[11];
      this._phases = new List<MissionAgentSpawnLogic.SpawnPhase>[2];
      for (int index = 0; index < 2; ++index)
        this._phases[index] = new List<MissionAgentSpawnLogic.SpawnPhase>();
      this._reinforcementSpawnEnabled = false;
    }

    public void SetCustomReinforcementSpawnTimer(ICustomReinforcementSpawnTimer timer)
    {
      this._customReinforcementSpawnTimer = timer;
    }

    public void SetSpawnTroops(BattleSideEnum side, bool spawnTroops, bool enforceSpawning = false)
    {
      this._missionSides[(int) side].SetSpawnTroops(spawnTroops);
      if (!(spawnTroops & enforceSpawning))
        return;
      this.CheckDeployment();
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      MissionGameModels.Current.BattleInitializationModel.InitializeModel();
    }

    protected override void OnEndMission()
    {
      MissionGameModels.Current.BattleSpawnModel.OnMissionEnd();
      MissionGameModels.Current.BattleInitializationModel.FinalizeModel();
    }

    public void SetSpawnHorses(BattleSideEnum side, bool spawnHorses)
    {
      this._missionSides[(int) side].SetSpawnWithHorses(spawnHorses);
      this.Mission.SetDeploymentPlanSpawnWithHorses(side, spawnHorses);
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
      return this._missionSides[(int) side].TroopSpawnActive;
    }

    public void OnBattleSideDeployed(BattleSideEnum side)
    {
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        if (team.Side == side)
          team.OnDeployed();
      }
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        if (team.Side == side)
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingEmpty)
          {
            if (formation.CountOfUnits > 0)
              formation.QuerySystem.EvaluateAllPreliminaryQueryData();
          }
          team.MasterOrderController.OnOrderIssued += new OnOrderIssuedDelegate(this.OrderController_OnOrderIssued);
          for (int index = 8; index < 10; ++index)
          {
            Formation formation = team.FormationsIncludingSpecialAndEmpty[index];
            if (formation.CountOfUnits > 0)
            {
              team.MasterOrderController.SelectFormation(formation);
              team.MasterOrderController.SetOrderWithAgent(OrderType.FollowMe, team.GeneralAgent);
              team.MasterOrderController.ClearSelectedFormations();
              formation.SetControlledByAI(true);
            }
          }
          team.MasterOrderController.OnOrderIssued -= new OnOrderIssuedDelegate(this.OrderController_OnOrderIssued);
        }
      }
    }

    public float GetReinforcementInterval() => this._globalReinforcementInterval;

    public void SetReinforcementsSpawnEnabled(bool value, bool resetTimers = true)
    {
      if (this._reinforcementSpawnEnabled == value)
        return;
      this._reinforcementSpawnEnabled = value;
      if (!resetTimers)
        return;
      if (this._spawnSettings.ReinforcementTroopsTimingMethod == MissionSpawnSettings.ReinforcementTimingMethod.GlobalTimer)
      {
        this._globalReinforcementSpawnTimer.Reset();
      }
      else
      {
        if (this._spawnSettings.ReinforcementTroopsTimingMethod != MissionSpawnSettings.ReinforcementTimingMethod.CustomTimer)
          return;
        for (int side = 0; side < 2; ++side)
          this._customReinforcementSpawnTimer.ResetTimer((BattleSideEnum) side);
      }
    }

    public int GetTotalNumberOfTroopsForSide(BattleSideEnum side)
    {
      return this._numberOfTroopsInTotal[(int) side];
    }

    public BasicCharacterObject GetGeneralCharacterOfSide(BattleSideEnum side)
    {
      int index = (int) side;
      if (index >= 0 && index < 2)
        this._missionSides[index].GetGeneralCharacter();
      return (BasicCharacterObject) null;
    }

    public bool GetSpawnHorses(BattleSideEnum side)
    {
      return this._missionSides[(int) side].SpawnWithHorses;
    }

    private bool CheckMinimumBatchQuotaRequirement()
    {
      int num1 = MissionAgentSpawnLogic.MaxNumberOfAgentsForMission - this.NumberOfAgents;
      int num2 = 0;
      for (int index = 0; index < 2; ++index)
        num2 += this._missionSides[index].ReinforcementQuotaRequirement;
      return num1 >= num2;
    }

    private void CheckGlobalReinforcementBatch()
    {
      if ((double) this._globalReinforcementSpawnTimer.ElapsedTime < (double) this._globalReinforcementInterval)
        return;
      bool flag1 = false;
      for (int battleSide = 0; battleSide < 2; ++battleSide)
      {
        this.NotifyReinforcementTroopsSpawned((BattleSideEnum) battleSide);
        bool flag2 = this._missionSides[battleSide].CheckReinforcementBatch();
        flag1 |= flag2;
      }
      this._spawningReinforcements = flag1 && this.CheckMinimumBatchQuotaRequirement();
      this._globalReinforcementSpawnTimer.Reset();
    }

    private void CheckCustomReinforcementBatch()
    {
      bool flag1 = false;
      for (int index = 0; index < 2; ++index)
      {
        BattleSideEnum battleSideEnum = (BattleSideEnum) index;
        if (this._customReinforcementSpawnTimer.Check(battleSideEnum))
        {
          flag1 = true;
          this.NotifyReinforcementTroopsSpawned(battleSideEnum);
          this._missionSides[index].CheckReinforcementBatch();
        }
      }
      if (!flag1)
        return;
      bool flag2 = false;
      for (int index = 0; index < 2; ++index)
        flag2 = flag2 || this._missionSides[index].ReinforcementSpawnActive;
      this._spawningReinforcements = flag2 && this.CheckMinimumBatchQuotaRequirement();
    }

    public bool IsSideDepleted(BattleSideEnum side)
    {
      return this._phases[(int) side].Count == 1 && this._missionSides[(int) side].NumberOfActiveTroops == 0 && this.GetActivePhaseForSide(side).RemainingSpawnNumber == 0;
    }

    public void AddPhaseChangeAction(
      BattleSideEnum side,
      MissionAgentSpawnLogic.OnPhaseChangedDelegate onPhaseChanged)
    {
      this._onPhaseChanged[(int) side] += onPhaseChanged;
    }

    private void Init(
      bool spawnDefenders,
      bool spawnAttackers,
      in MissionSpawnSettings reinforcementSpawnSettings)
    {
      foreach (List<MissionAgentSpawnLogic.SpawnPhase> phase in this._phases)
      {
        if (phase.Count <= 0)
          return;
      }
      this._spawnSettings = reinforcementSpawnSettings;
      int index1 = 0;
      int index2 = 1;
      this._globalReinforcementInterval = this._spawnSettings.GlobalReinforcementInterval;
      int[] source = new int[2]
      {
        this._phases[index1].Sum<MissionAgentSpawnLogic.SpawnPhase>((Func<MissionAgentSpawnLogic.SpawnPhase, int>) (p => p.TotalSpawnNumber)),
        this._phases[index2].Sum<MissionAgentSpawnLogic.SpawnPhase>((Func<MissionAgentSpawnLogic.SpawnPhase, int>) (p => p.TotalSpawnNumber))
      };
      int num1 = ((IEnumerable<int>) source).Sum();
      if (this._spawnSettings.InitialTroopsSpawnMethod == MissionSpawnSettings.InitialSpawnMethod.BattleSizeAllocating)
      {
        float[] numArray1 = new float[2]
        {
          (float) source[index1] / (float) num1,
          (float) source[index2] / (float) num1
        };
        numArray1[index1] = MathF.Min(this._spawnSettings.MaximumBattleSideRatio, numArray1[index1] * this._spawnSettings.DefenderAdvantageFactor);
        numArray1[index2] = 1f - numArray1[index1];
        int side = (double) numArray1[index1] < (double) numArray1[index2] ? 0 : 1;
        int oppositeSide = (int) ((BattleSideEnum) side).GetOppositeSide();
        int index3 = side;
        if ((double) numArray1[oppositeSide] > (double) this._spawnSettings.MaximumBattleSideRatio)
        {
          numArray1[oppositeSide] = this._spawnSettings.MaximumBattleSideRatio;
          numArray1[index3] = 1f - this._spawnSettings.MaximumBattleSideRatio;
        }
        int[] numArray2 = new int[2];
        int val1 = MathF.Ceiling(numArray1[index3] * (float) this._battleSize);
        numArray2[index3] = Math.Min(val1, source[index3]);
        numArray2[oppositeSide] = this._battleSize - numArray2[index3];
        for (int index4 = 0; index4 < 2; ++index4)
        {
          foreach (MissionAgentSpawnLogic.SpawnPhase spawnPhase in this._phases[index4])
          {
            if (spawnPhase.InitialSpawnNumber > numArray2[index4])
            {
              int num2 = numArray2[index4];
              int num3 = spawnPhase.InitialSpawnNumber - num2;
              spawnPhase.InitialSpawnNumber = num2;
              spawnPhase.RemainingSpawnNumber += num3;
            }
          }
        }
      }
      else if (this._spawnSettings.InitialTroopsSpawnMethod == MissionSpawnSettings.InitialSpawnMethod.FreeAllocation)
      {
        this._phases[index1].Max<MissionAgentSpawnLogic.SpawnPhase>((Func<MissionAgentSpawnLogic.SpawnPhase, int>) (p => p.InitialSpawnNumber));
        this._phases[index2].Max<MissionAgentSpawnLogic.SpawnPhase>((Func<MissionAgentSpawnLogic.SpawnPhase, int>) (p => p.InitialSpawnNumber));
      }
      if (this._spawnSettings.ReinforcementTroopsSpawnMethod == MissionSpawnSettings.ReinforcementSpawnMethod.Wave)
      {
        for (int index5 = 0; index5 < 2; ++index5)
        {
          foreach (MissionAgentSpawnLogic.SpawnPhase spawnPhase in this._phases[index5])
          {
            int num4 = (int) Math.Max(1f, (float) spawnPhase.InitialSpawnNumber * this._spawnSettings.ReinforcementWavePercentage);
            if (this._spawnSettings.MaximumReinforcementWaveCount > 0)
            {
              int num5 = Math.Min(spawnPhase.RemainingSpawnNumber, num4 * this._spawnSettings.MaximumReinforcementWaveCount);
              int num6 = Math.Max(0, spawnPhase.RemainingSpawnNumber - num5);
              this._numberOfTroopsInTotal[index5] -= num6;
              source[index5] -= num6;
              spawnPhase.RemainingSpawnNumber = num5;
              spawnPhase.TotalSpawnNumber = spawnPhase.RemainingSpawnNumber + spawnPhase.InitialSpawnNumber;
            }
          }
        }
      }
      this.Mission.SetBattleAgentCount(MathF.Min(this.DefenderActivePhase.InitialSpawnNumber, this.AttackerActivePhase.InitialSpawnNumber));
      this.Mission.SetInitialAgentCountForSide(BattleSideEnum.Defender, source[index1]);
      this.Mission.SetInitialAgentCountForSide(BattleSideEnum.Attacker, source[index2]);
      this._missionSides[index1].SetSpawnTroops(spawnDefenders);
      this._missionSides[index2].SetSpawnTroops(spawnAttackers);
    }

    private void AddPhase(BattleSideEnum side, int totalSpawn, int initialSpawn)
    {
      MissionAgentSpawnLogic.SpawnPhase spawnPhase = new MissionAgentSpawnLogic.SpawnPhase()
      {
        TotalSpawnNumber = totalSpawn,
        InitialSpawnNumber = initialSpawn,
        RemainingSpawnNumber = totalSpawn - initialSpawn
      };
      this._phases[(int) side].Add(spawnPhase);
      this._numberOfTroopsInTotal[(int) side] += totalSpawn;
    }

    private void PhaseTick()
    {
      for (int side = 0; side < 2; ++side)
      {
        MissionAgentSpawnLogic.SpawnPhase activePhaseForSide = this.GetActivePhaseForSide((BattleSideEnum) side);
        activePhaseForSide.NumberActiveTroops = this._missionSides[side].NumberOfActiveTroops;
        if (activePhaseForSide.NumberActiveTroops == 0 && activePhaseForSide.RemainingSpawnNumber == 0 && this._phases[side].Count > 1)
        {
          this._phases[side].Remove(activePhaseForSide);
          BattleSideEnum battleSideEnum = (BattleSideEnum) side;
          if (this.GetActivePhaseForSide(battleSideEnum) != null)
          {
            if (this._onPhaseChanged[side] != null)
              this._onPhaseChanged[side]();
            IMissionDeploymentPlan deploymentPlan = this.Mission.DeploymentPlan;
            if (deploymentPlan.IsPlanMadeForBattleSide(battleSideEnum, DeploymentPlanType.Initial))
            {
              this.Mission.ClearAddedTroopsInDeploymentPlan(battleSideEnum, DeploymentPlanType.Initial);
              this.Mission.ClearDeploymentPlanForSide(battleSideEnum, DeploymentPlanType.Initial);
            }
            if (deploymentPlan.IsPlanMadeForBattleSide(battleSideEnum, DeploymentPlanType.Reinforcement))
            {
              this.Mission.ClearAddedTroopsInDeploymentPlan(battleSideEnum, DeploymentPlanType.Reinforcement);
              this.Mission.ClearDeploymentPlanForSide(battleSideEnum, DeploymentPlanType.Reinforcement);
            }
            Debug.Print("New spawn phase!", color: Debug.DebugColor.Green, debugFilter: 64UL);
          }
        }
      }
    }

    private bool CheckDeployment()
    {
      bool isDeploymentOver = this.IsDeploymentOver;
      if (!isDeploymentOver)
      {
        for (int index1 = 0; index1 < 2; ++index1)
        {
          BattleSideEnum battleSideEnum = (BattleSideEnum) index1;
          MissionAgentSpawnLogic.SpawnPhase activePhaseForSide = this.GetActivePhaseForSide(battleSideEnum);
          if (!this.Mission.DeploymentPlan.IsPlanMadeForBattleSide(battleSideEnum, DeploymentPlanType.Initial))
          {
            if (activePhaseForSide.InitialSpawnNumber > 0)
            {
              this._missionSides[index1].ReserveTroops(activePhaseForSide.InitialSpawnNumber);
              this._missionSides[index1].GetFormationSpawnData(this._formationSpawnData);
              for (int fClass = 0; fClass < this._formationSpawnData.Length; ++fClass)
              {
                if (this._formationSpawnData[fClass].NumTroops > 0)
                  this.Mission.AddTroopsToDeploymentPlan(battleSideEnum, DeploymentPlanType.Initial, (FormationClass) fClass, this._formationSpawnData[fClass].FootTroopCount, this._formationSpawnData[fClass].MountedTroopCount);
              }
            }
            float spawnPathOffset = 0.0f;
            if (this.Mission.HasSpawnPath)
              spawnPathOffset = Mission.GetBattleSizeOffset(this.GetBattleSizeForActivePhase(), this.Mission.GetInitialSpawnPath());
            this.Mission.MakeDeploymentPlanForSide(battleSideEnum, DeploymentPlanType.Initial, spawnPathOffset);
          }
          if (!this.Mission.DeploymentPlan.IsPlanMadeForBattleSide(battleSideEnum, DeploymentPlanType.Reinforcement))
          {
            int num = Math.Max(this._battleSize / (2 * this._formationSpawnData.Length), 1);
            for (int index2 = 0; index2 < this._formationSpawnData.Length; ++index2)
            {
              if (((FormationClass) index2).IsMounted())
                this.Mission.AddTroopsToDeploymentPlan(battleSideEnum, DeploymentPlanType.Reinforcement, (FormationClass) index2, 0, num);
              else
                this.Mission.AddTroopsToDeploymentPlan(battleSideEnum, DeploymentPlanType.Reinforcement, (FormationClass) index2, num, 0);
            }
            this.Mission.MakeDeploymentPlanForSide(battleSideEnum, DeploymentPlanType.Reinforcement);
          }
        }
        for (int index = 0; index < 2; ++index)
        {
          BattleSideEnum side = (BattleSideEnum) index;
          MissionAgentSpawnLogic.SpawnPhase activePhaseForSide = this.GetActivePhaseForSide(side);
          if (this.Mission.DeploymentPlan.IsPlanMadeForBattleSide(side, DeploymentPlanType.Initial) && activePhaseForSide.InitialSpawnNumber > 0 && this._missionSides[index].TroopSpawnActive)
          {
            int initialSpawnNumber = activePhaseForSide.InitialSpawnNumber;
            this._missionSides[index].SpawnTroops(initialSpawnNumber, false);
            this.GetActivePhaseForSide(side).OnInitialTroopsSpawned();
            this._missionSides[index].OnInitialSpawnOver();
            if (!this._sidesWhereSpawnOccured.Contains(side))
              this._sidesWhereSpawnOccured.Add(side);
            Action<BattleSideEnum, int> initialTroopsSpawned = this.OnInitialTroopsSpawned;
            if (initialTroopsSpawned != null)
              initialTroopsSpawned(side, initialSpawnNumber);
          }
        }
        isDeploymentOver = this.IsDeploymentOver;
        if (isDeploymentOver)
        {
          foreach (BattleSideEnum side in this._sidesWhereSpawnOccured)
            this.OnBattleSideDeployed(side);
        }
      }
      return isDeploymentOver;
    }

    private void CheckReinforcementSpawn()
    {
      int index1 = 0;
      int index2 = 1;
      MissionAgentSpawnLogic.MissionSide missionSide1 = this._missionSides[index1];
      MissionAgentSpawnLogic.MissionSide missionSide2 = this._missionSides[index2];
      bool flag1 = missionSide1.HasSpawnableReinforcements && ((double) missionSide1.ReinforcementsSpawnedInLastBatch < (double) missionSide1.ReinforcementBatchSize || (double) missionSide1.ReinforcementBatchPriority >= (double) missionSide2.ReinforcementBatchPriority);
      bool flag2 = missionSide2.HasSpawnableReinforcements && ((double) missionSide2.ReinforcementsSpawnedInLastBatch < (double) missionSide2.ReinforcementBatchSize || (double) missionSide2.ReinforcementBatchPriority >= (double) missionSide1.ReinforcementBatchPriority);
      int num1 = 0;
      if (flag1 & flag2)
      {
        if ((double) missionSide1.ReinforcementBatchPriority >= (double) missionSide2.ReinforcementBatchPriority)
        {
          int num2 = missionSide1.TryReinforcementSpawn();
          this.DefenderActivePhase.RemainingSpawnNumber -= num2;
          int num3 = num1 + num2;
          int num4 = missionSide2.TryReinforcementSpawn();
          this.AttackerActivePhase.RemainingSpawnNumber -= num4;
          num1 = num3 + num4;
        }
        else
        {
          int num5 = missionSide2.TryReinforcementSpawn();
          this.AttackerActivePhase.RemainingSpawnNumber -= num5;
          int num6 = num1 + num5;
          int num7 = missionSide1.TryReinforcementSpawn();
          this.DefenderActivePhase.RemainingSpawnNumber -= num7;
          num1 = num6 + num7;
        }
      }
      else if (flag1)
      {
        int num8 = missionSide1.TryReinforcementSpawn();
        this.DefenderActivePhase.RemainingSpawnNumber -= num8;
        num1 += num8;
      }
      else if (flag2)
      {
        int num9 = missionSide2.TryReinforcementSpawn();
        this.AttackerActivePhase.RemainingSpawnNumber -= num9;
        num1 += num9;
      }
      if (num1 <= 0)
        return;
      for (int battleSide = 0; battleSide < 2; ++battleSide)
        this.NotifyReinforcementTroopsSpawned((BattleSideEnum) battleSide, true);
    }

    private void NotifyReinforcementTroopsSpawned(
      BattleSideEnum battleSide,
      bool checkEmptyReserves = false)
    {
      MissionAgentSpawnLogic.MissionSide missionSide = this._missionSides[(int) battleSide];
      int spawnedInLastBatch = missionSide.ReinforcementsSpawnedInLastBatch;
      if (missionSide.ReinforcementsNotifiedOnLastBatch || spawnedInLastBatch <= 0 || checkEmptyReserves && (!checkEmptyReserves || missionSide.HasReservedTroops))
        return;
      Action<BattleSideEnum, int> reinforcementsSpawned = this.OnReinforcementsSpawned;
      if (reinforcementsSpawned != null)
        reinforcementsSpawned(battleSide, spawnedInLastBatch);
      missionSide.SetReinforcementsNotifiedOnLastBatch(true);
    }

    private void OrderController_OnOrderIssued(
      OrderType orderType,
      MBReadOnlyList<Formation> appliedFormations,
      OrderController orderController,
      params object[] delegateParams)
    {
      DeploymentHandler.OrderController_OnOrderIssued_Aux(orderType, appliedFormations, orderController, delegateParams);
    }

    private int GetBattleSizeForActivePhase()
    {
      return MathF.Max(this.DefenderActivePhase.TotalSpawnNumber, this.AttackerActivePhase.TotalSpawnNumber);
    }

    private MissionAgentSpawnLogic.SpawnPhase GetActivePhaseForSide(BattleSideEnum side)
    {
      if (side == BattleSideEnum.Defender)
        return this.DefenderActivePhase;
      if (side == BattleSideEnum.Attacker)
        return this.AttackerActivePhase;
      Debug.FailedAssert("Wrong Side", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\MissionLogics\\MissionAgentSpawnLogic.cs", nameof (GetActivePhaseForSide), 1510);
      return (MissionAgentSpawnLogic.SpawnPhase) null;
    }

    private struct FormationSpawnData
    {
      public int FootTroopCount;
      public int MountedTroopCount;

      public int NumTroops => this.FootTroopCount + this.MountedTroopCount;
    }

    private class MissionSide
    {
      private readonly MissionAgentSpawnLogic _spawnLogic;
      private readonly BattleSideEnum _side;
      private readonly IMissionTroopSupplier _troopSupplier;
      private BannerBearerLogic _bannerBearerLogic;
      private readonly MBArrayList<Formation> _spawnedFormations;
      private bool _spawnWithHorses;
      private float _reinforcementBatchPriority;
      private int _reinforcementQuotaRequirement;
      private int _reinforcementBatchSize;
      private int _reinforcementsSpawnedInLastBatch;
      private int _numSpawnedTroops;
      private readonly List<IAgentOriginBase> _reservedTroops = new List<IAgentOriginBase>();
      private List<(Team team, List<IAgentOriginBase> origins)> _troopOriginsToSpawnPerTeam;
      private readonly (int currentTroopIndex, int troopCount)[] _reinforcementSpawnedUnitCountPerFormation;
      private readonly Dictionary<IAgentOriginBase, int> _reinforcementTroopFormationAssignments;

      public bool TroopSpawnActive { get; private set; }

      public bool IsPlayerSide { get; }

      public bool ReinforcementSpawnActive { get; private set; }

      public bool SpawnWithHorses => this._spawnWithHorses;

      public bool ReinforcementsNotifiedOnLastBatch { get; private set; }

      public int NumberOfActiveTroops
      {
        get => this._numSpawnedTroops - this._troopSupplier.NumRemovedTroops;
      }

      public int ReinforcementQuotaRequirement => this._reinforcementQuotaRequirement;

      public int ReinforcementsSpawnedInLastBatch => this._reinforcementsSpawnedInLastBatch;

      public float ReinforcementBatchSize => (float) this._reinforcementBatchSize;

      public bool HasReservedTroops => this._reservedTroops.Count > 0;

      public float ReinforcementBatchPriority => this._reinforcementBatchPriority;

      public int GetNumberOfPlayerControllableTroops()
      {
        return this._troopSupplier.GetNumberOfPlayerControllableTroops();
      }

      public int ReservedTroopsCount => this._reservedTroops.Count;

      public MissionSide(
        MissionAgentSpawnLogic spawnLogic,
        BattleSideEnum side,
        IMissionTroopSupplier troopSupplier,
        bool isPlayerSide)
      {
        this._spawnLogic = spawnLogic;
        this._side = side;
        this._spawnWithHorses = true;
        this._spawnedFormations = new MBArrayList<Formation>();
        this._troopSupplier = troopSupplier;
        this._reinforcementQuotaRequirement = 0;
        this._reinforcementBatchSize = 0;
        this._reinforcementSpawnedUnitCountPerFormation = new (int, int)[8];
        this._reinforcementTroopFormationAssignments = new Dictionary<IAgentOriginBase, int>();
        this.IsPlayerSide = isPlayerSide;
        this.ReinforcementsNotifiedOnLastBatch = false;
      }

      public int TryReinforcementSpawn()
      {
        int num1 = 0;
        if (this.ReinforcementSpawnActive && this.TroopSpawnActive && this._reservedTroops.Count > 0)
        {
          int num2 = MissionAgentSpawnLogic.MaxNumberOfAgentsForMission - this._spawnLogic.NumberOfAgents;
          int reservedTroopQuota = this.GetReservedTroopQuota(0);
          int num3 = reservedTroopQuota;
          if (num2 >= num3)
          {
            num1 = this.SpawnTroops(1, true);
            if (num1 > 0)
            {
              this._reinforcementQuotaRequirement -= reservedTroopQuota;
              if (this._reservedTroops.Count >= this._reinforcementBatchSize)
                this._reinforcementQuotaRequirement += this.GetReservedTroopQuota(this._reinforcementBatchSize - 1);
              this._reinforcementBatchPriority /= 2f;
            }
          }
        }
        this._reinforcementsSpawnedInLastBatch += num1;
        return num1;
      }

      public void GetFormationSpawnData(
        MissionAgentSpawnLogic.FormationSpawnData[] formationSpawnData)
      {
        if (formationSpawnData != null && formationSpawnData.Length == 11)
        {
          for (int index = 0; index < formationSpawnData.Length; ++index)
          {
            formationSpawnData[index].FootTroopCount = 0;
            formationSpawnData[index].MountedTroopCount = 0;
          }
          foreach (IAgentOriginBase reservedTroop in this._reservedTroops)
          {
            FormationClass agentTroopClass = Mission.Current.GetAgentTroopClass(this._side, reservedTroop.Troop);
            if (reservedTroop.Troop.HasMount())
              ++formationSpawnData[(int) agentTroopClass].MountedTroopCount;
            else
              ++formationSpawnData[(int) agentTroopClass].FootTroopCount;
          }
        }
        else
          Debug.FailedAssert("Formation troop counts parameter is not set correctly.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\MissionLogics\\MissionAgentSpawnLogic.cs", nameof (GetFormationSpawnData), 155);
      }

      public void ReserveTroops(int number)
      {
        if (number <= 0 || !this._troopSupplier.AnyTroopRemainsToBeSupplied)
          return;
        this._reservedTroops.AddRange(this._troopSupplier.SupplyTroops(number));
      }

      public bool HasSpawnableReinforcements
      {
        get
        {
          return this.ReinforcementSpawnActive && this.HasReservedTroops && (double) this.ReinforcementBatchSize > 0.0;
        }
      }

      public BasicCharacterObject GetGeneralCharacter()
      {
        return this._troopSupplier.GetGeneralCharacter();
      }

      public bool CheckReinforcementBatch()
      {
        MissionAgentSpawnLogic.SpawnPhase activePhase = this._side == BattleSideEnum.Defender ? this._spawnLogic.DefenderActivePhase : this._spawnLogic.AttackerActivePhase;
        this._reinforcementsSpawnedInLastBatch = 0;
        this.ReinforcementsNotifiedOnLastBatch = false;
        int val1 = 0;
        MissionSpawnSettings missionSpawnSettings = this._spawnLogic.ReinforcementSpawnSettings;
        switch (missionSpawnSettings.ReinforcementTroopsSpawnMethod)
        {
          case MissionSpawnSettings.ReinforcementSpawnMethod.Balanced:
            val1 = this.ComputeBalancedBatch(activePhase);
            break;
          case MissionSpawnSettings.ReinforcementSpawnMethod.Wave:
            val1 = this.ComputeWaveBatch(activePhase);
            break;
          case MissionSpawnSettings.ReinforcementSpawnMethod.Fixed:
            val1 = this.ComputeFixedBatch(activePhase);
            break;
        }
        int number = Math.Min(val1, activePhase.RemainingSpawnNumber) - this._reservedTroops.Count;
        if (number > 0)
        {
          int count = this._reservedTroops.Count;
          this.ReserveTroops(number);
          if (count < this._reinforcementBatchSize)
          {
            int num = Math.Min(this._reservedTroops.Count, this._reinforcementBatchSize);
            for (int index = count; index < num; ++index)
              this._reinforcementQuotaRequirement += this.GetReservedTroopQuota(index);
          }
        }
        this._reinforcementBatchPriority = (float) this._reservedTroops.Count;
        this.ReinforcementSpawnActive = missionSpawnSettings.ReinforcementTroopsSpawnMethod != MissionSpawnSettings.ReinforcementSpawnMethod.Wave ? this._reservedTroops.Count > 0 && (this._reservedTroops.Count >= this._reinforcementBatchSize || activePhase.RemainingSpawnNumber <= this._reinforcementBatchSize) : this._reservedTroops.Count > 0;
        if (this.ReinforcementSpawnActive)
        {
          this.ResetReinforcementSpawnedUnitCountsPerFormation();
          Mission.Current.UpdateReinforcementPlan(this._side);
        }
        return this.ReinforcementSpawnActive;
      }

      public IEnumerable<IAgentOriginBase> GetAllTroops() => this._troopSupplier.GetAllTroops();

      public int SpawnTroops(int number, bool isReinforcement)
      {
        if (number <= 0)
          return 0;
        List<IAgentOriginBase> agentOriginBaseList1 = new List<IAgentOriginBase>();
        int count1 = MathF.Min(this._reservedTroops.Count, number);
        if (count1 > 0)
        {
          for (int index = 0; index < count1; ++index)
          {
            IAgentOriginBase reservedTroop = this._reservedTroops[index];
            agentOriginBaseList1.Add(reservedTroop);
          }
          this._reservedTroops.RemoveRange(0, count1);
        }
        int numberToAllocate = number - count1;
        agentOriginBaseList1.AddRange(this._troopSupplier.SupplyTroops(numberToAllocate));
        Mission current = Mission.Current;
        if (this._troopOriginsToSpawnPerTeam == null)
        {
          this._troopOriginsToSpawnPerTeam = new List<(Team, List<IAgentOriginBase>)>();
          foreach (Team team in (List<Team>) current.Teams)
          {
            bool flag = team.Side == current.PlayerTeam.Side;
            if (this.IsPlayerSide & flag || !this.IsPlayerSide && !flag)
              this._troopOriginsToSpawnPerTeam.Add((team, new List<IAgentOriginBase>()));
          }
        }
        else
        {
          foreach ((Team team, List<IAgentOriginBase> origins) tuple in this._troopOriginsToSpawnPerTeam)
            tuple.origins.Clear();
        }
        int num1 = 0;
        foreach (IAgentOriginBase troopOrigin in agentOriginBaseList1)
        {
          Team agentTeam = Mission.GetAgentTeam(troopOrigin, this.IsPlayerSide);
          foreach ((Team team, List<IAgentOriginBase> origins) tuple in this._troopOriginsToSpawnPerTeam)
          {
            if (agentTeam == tuple.team)
            {
              ++num1;
              tuple.origins.Add(troopOrigin);
            }
          }
        }
        int num2 = 0;
        List<IAgentOriginBase> agentOriginBaseList2 = new List<IAgentOriginBase>();
        foreach ((Team team, List<IAgentOriginBase> origins) tuple in this._troopOriginsToSpawnPerTeam)
        {
          if (!tuple.origins.IsEmpty<IAgentOriginBase>())
          {
            int num3 = 0;
            int mountedTroopCount = 0;
            int footTroopCount = 0;
            List<(IAgentOriginBase, int)> valueTupleList;
            if (isReinforcement)
            {
              valueTupleList = new List<(IAgentOriginBase, int)>();
              foreach (IAgentOriginBase key in tuple.origins)
              {
                int num4;
                this._reinforcementTroopFormationAssignments.TryGetValue(key, out num4);
                valueTupleList.Add((key, num4));
              }
            }
            else
              valueTupleList = MissionGameModels.Current.BattleSpawnModel.GetInitialSpawnAssignments(this._side, tuple.origins);
            for (int index = 0; index < 8; ++index)
            {
              agentOriginBaseList2.Clear();
              IAgentOriginBase agentOriginBase1 = (IAgentOriginBase) null;
              foreach ((IAgentOriginBase agentOriginBase2, int num5) in valueTupleList)
              {
                if (index == num5)
                {
                  if (agentOriginBase2.Troop == Game.Current.PlayerTroop)
                  {
                    agentOriginBase1 = agentOriginBase2;
                  }
                  else
                  {
                    if (agentOriginBase2.Troop.HasMount())
                      ++mountedTroopCount;
                    else
                      ++footTroopCount;
                    agentOriginBaseList2.Add(agentOriginBase2);
                  }
                }
              }
              if (agentOriginBase1 != null)
              {
                if (agentOriginBase1.Troop.HasMount())
                  ++mountedTroopCount;
                else
                  ++footTroopCount;
                agentOriginBaseList2.Add(agentOriginBase1);
              }
              int count2 = agentOriginBaseList2.Count;
              if (count2 > 0)
              {
                bool isMounted = this._spawnWithHorses && MissionDeploymentPlan.HasSignificantMountedTroops(footTroopCount, mountedTroopCount);
                int formationTroopIndex = 0;
                int num6 = count2;
                if (this.ReinforcementSpawnActive)
                {
                  formationTroopIndex = this._reinforcementSpawnedUnitCountPerFormation[index].currentTroopIndex;
                  num6 = this._reinforcementSpawnedUnitCountPerFormation[index].troopCount;
                }
                Formation formation = tuple.team.GetFormation((FormationClass) index);
                if (!formation.HasBeenPositioned)
                {
                  formation.BeginSpawn(num6, isMounted);
                  current.SetFormationPositioningFromDeploymentPlan(formation);
                  this._spawnedFormations.Add(formation);
                }
                foreach (IAgentOriginBase troopOrigin in agentOriginBaseList2)
                {
                  if (!troopOrigin.Troop.IsHero && this._bannerBearerLogic != null && current.Mode != MissionMode.Deployment && this._bannerBearerLogic.GetMissingBannerCount(formation) > 0)
                    this._bannerBearerLogic.SpawnBannerBearer(troopOrigin, this.IsPlayerSide, formation, this._spawnWithHorses, isReinforcement, num6, formationTroopIndex, true, true, false, new Vec3?(), new Vec2?(), useTroopClassForSpawn: current.IsSallyOutBattle);
                  else
                    current.SpawnTroop(troopOrigin, this.IsPlayerSide, true, this._spawnWithHorses, isReinforcement, num6, formationTroopIndex, true, true, false, new Vec3?(), new Vec2?(), formationIndex: formation.FormationIndex, useTroopClassForSpawn: current.IsSallyOutBattle);
                  ++this._numSpawnedTroops;
                  ++formationTroopIndex;
                  ++num3;
                }
                if (this.ReinforcementSpawnActive)
                  this._reinforcementSpawnedUnitCountPerFormation[index].currentTroopIndex = formationTroopIndex;
              }
            }
            if (num3 > 0)
              tuple.team.QuerySystem.Expire();
            num2 += num3;
            foreach (Formation formation in (List<Formation>) tuple.team.FormationsIncludingEmpty)
            {
              if (formation.CountOfUnits > 0 && formation.IsSpawning)
                formation.EndSpawn();
            }
          }
        }
        return num2;
      }

      public void SetSpawnWithHorses(bool spawnWithHorses)
      {
        this._spawnWithHorses = spawnWithHorses;
      }

      private int ComputeBalancedBatch(MissionAgentSpawnLogic.SpawnPhase activePhase)
      {
        int balancedBatch = 0;
        if (activePhase != null && activePhase.RemainingSpawnNumber > 0)
        {
          MissionSpawnSettings missionSpawnSettings = this._spawnLogic.ReinforcementSpawnSettings;
          int reinforcementBatchSize = this._reinforcementBatchSize;
          this._reinforcementBatchSize = (int) ((double) this._spawnLogic.BattleSize * (double) missionSpawnSettings.ReinforcementBatchPercentage);
          if (reinforcementBatchSize != this._reinforcementBatchSize)
            this.UpdateReinforcementQuotaRequirement(reinforcementBatchSize);
          balancedBatch = MathF.Min(MathF.Max(1, this._reservedTroops.Count + (int) ((double) (activePhase.TotalSpawnNumber - activePhase.InitialSpawnedNumber) * (double) missionSpawnSettings.DesiredReinforcementPercentage)), activePhase.InitialSpawnedNumber - this.NumberOfActiveTroops);
        }
        return balancedBatch;
      }

      private int ComputeFixedBatch(MissionAgentSpawnLogic.SpawnPhase activePhase)
      {
        int fixedBatch = 0;
        if (activePhase != null && activePhase.RemainingSpawnNumber > 0)
        {
          MissionSpawnSettings missionSpawnSettings = this._spawnLogic.ReinforcementSpawnSettings;
          float num = this._side == BattleSideEnum.Defender ? missionSpawnSettings.DefenderReinforcementBatchPercentage : missionSpawnSettings.AttackerReinforcementBatchPercentage;
          int reinforcementBatchSize = this._reinforcementBatchSize;
          this._reinforcementBatchSize = (int) ((double) this._spawnLogic.TotalSpawnNumber * (double) num);
          if (reinforcementBatchSize != this._reinforcementBatchSize)
            this.UpdateReinforcementQuotaRequirement(reinforcementBatchSize);
          fixedBatch = MathF.Max(1, this._reinforcementBatchSize);
        }
        return fixedBatch;
      }

      private int ComputeWaveBatch(MissionAgentSpawnLogic.SpawnPhase activePhase)
      {
        int waveBatch = 0;
        if (activePhase != null && activePhase.RemainingSpawnNumber > 0 && this._reservedTroops.IsEmpty<IAgentOriginBase>())
        {
          MissionSpawnSettings missionSpawnSettings = this._spawnLogic.ReinforcementSpawnSettings;
          int reinforcementBatchSize = this._reinforcementBatchSize;
          int num = (int) Math.Max(1f, (float) activePhase.InitialSpawnedNumber * missionSpawnSettings.ReinforcementWavePercentage);
          this._reinforcementBatchSize = num;
          if (reinforcementBatchSize != this._reinforcementBatchSize)
            this.UpdateReinforcementQuotaRequirement(reinforcementBatchSize);
          if (activePhase.InitialSpawnedNumber - activePhase.NumberActiveTroops >= num)
            waveBatch = num;
        }
        return waveBatch;
      }

      public void SetBannerBearerLogic(BannerBearerLogic bannerBearerLogic)
      {
        this._bannerBearerLogic = bannerBearerLogic;
      }

      private void UpdateReinforcementQuotaRequirement(int previousBatchSize)
      {
        if (this._reinforcementBatchSize < previousBatchSize)
        {
          for (int index = MathF.Min(this._reservedTroops.Count - 1, previousBatchSize - 1); index >= this._reinforcementBatchSize; --index)
            this._reinforcementQuotaRequirement -= this.GetReservedTroopQuota(index);
        }
        else
        {
          if (this._reinforcementBatchSize <= previousBatchSize)
            return;
          int num = MathF.Min(this._reservedTroops.Count - 1, this._reinforcementBatchSize - 1);
          for (int index = previousBatchSize; index <= num; ++index)
            this._reinforcementQuotaRequirement += this.GetReservedTroopQuota(index);
        }
      }

      public void SetReinforcementsNotifiedOnLastBatch(bool value)
      {
        this.ReinforcementsNotifiedOnLastBatch = value;
      }

      private void ResetReinforcementSpawnedUnitCountsPerFormation()
      {
        for (int index = 0; index < 8; ++index)
        {
          this._reinforcementSpawnedUnitCountPerFormation[index].currentTroopIndex = 0;
          this._reinforcementSpawnedUnitCountPerFormation[index].troopCount = 0;
        }
        this._reinforcementTroopFormationAssignments.Clear();
        foreach ((IAgentOriginBase origin, int formationIndex) reinforcementAssignment in MissionGameModels.Current.BattleSpawnModel.GetReinforcementAssignments(this._side, this._reservedTroops))
        {
          int formationIndex = reinforcementAssignment.formationIndex;
          this._reinforcementTroopFormationAssignments.Add(reinforcementAssignment.origin, reinforcementAssignment.formationIndex);
          ++this._reinforcementSpawnedUnitCountPerFormation[formationIndex].troopCount;
        }
      }

      public void SetSpawnTroops(bool spawnTroops) => this.TroopSpawnActive = spawnTroops;

      private int GetReservedTroopQuota(int index)
      {
        return !this._spawnWithHorses || !this._reservedTroops[index].Troop.IsMounted ? 1 : 2;
      }

      public void OnInitialSpawnOver()
      {
        foreach (Formation spawnedFormation in this._spawnedFormations)
          spawnedFormation.EndSpawn();
      }
    }

    private class SpawnPhase
    {
      public int TotalSpawnNumber;
      public int InitialSpawnedNumber;
      public int InitialSpawnNumber;
      public int RemainingSpawnNumber;
      public int NumberActiveTroops;

      public void OnInitialTroopsSpawned()
      {
        this.InitialSpawnedNumber = this.InitialSpawnNumber;
        this.InitialSpawnNumber = 0;
      }
    }

    public delegate void OnPhaseChangedDelegate();
  }
}
