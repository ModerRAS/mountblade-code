// Decompiled with JetBrains decompiler
// Type: SandBox.Tournaments.MissionLogics.TownHorseRaceMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Tournaments.AgentControllers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Tournaments.MissionLogics
{
  public class TownHorseRaceMissionController : MissionLogic, ITournamentGameBehavior
  {
    public const int TourCount = 2;
    private readonly List<TownHorseRaceAgentController> _agents;
    private List<Team> _teams;
    private List<GameEntity> _startPoints;
    private BasicMissionTimer _startTimer;
    private CultureObject _culture;

    public List<TownHorseRaceMissionController.CheckPoint> CheckPoints { get; private set; }

    public TownHorseRaceMissionController(CultureObject culture)
    {
      this._culture = culture;
      this._agents = new List<TownHorseRaceAgentController>();
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.CollectCheckPointsAndStartPoints();
      foreach (TownHorseRaceAgentController agent in this._agents)
        agent.DisableMovement();
      this._startTimer = new BasicMissionTimer();
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (this._startTimer == null || (double) this._startTimer.ElapsedTime <= 3.0)
        return;
      foreach (TownHorseRaceAgentController agent in this._agents)
        agent.Start();
    }

    private void CollectCheckPointsAndStartPoints()
    {
      this.CheckPoints = new List<TownHorseRaceMissionController.CheckPoint>();
      foreach (GameEntity gameEntity in this.Mission.ActiveMissionObjects.Select<MissionObject, GameEntity>((Func<MissionObject, GameEntity>) (amo => amo.GameEntity)))
      {
        VolumeBox firstScriptOfType = gameEntity.GetFirstScriptOfType<VolumeBox>();
        if (firstScriptOfType != null)
          this.CheckPoints.Add(new TownHorseRaceMissionController.CheckPoint(firstScriptOfType));
      }
      this.CheckPoints = this.CheckPoints.OrderBy<TownHorseRaceMissionController.CheckPoint, string>((Func<TownHorseRaceMissionController.CheckPoint, string>) (x => x.Name)).ToList<TownHorseRaceMissionController.CheckPoint>();
      this._startPoints = this.Mission.Scene.FindEntitiesWithTag("sp_horse_race").ToList<GameEntity>();
    }

    private MatrixFrame GetStartFrame(int index)
    {
      MatrixFrame startFrame = index >= this._startPoints.Count ? (this._startPoints.Count > 0 ? this._startPoints[0].GetGlobalFrame() : MatrixFrame.Identity) : this._startPoints[index].GetGlobalFrame();
      startFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      return startFrame;
    }

    private void SetItemsAndSpawnCharacter(CharacterObject troop)
    {
      int count = this._agents.Count;
      Equipment equipment = new Equipment();
      equipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.ArmorItemEndSlot, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("charger")));
      equipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.HorseHarness, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("horse_harness_e")));
      equipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.WeaponItemBeginSlot, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("horse_whip")));
      equipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Body, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("short_padded_robe")));
      MatrixFrame startFrame = this.GetStartFrame(count);
      AgentBuildData agentBuildData = new AgentBuildData((BasicCharacterObject) troop).Team(this._teams[count]).InitialPosition(in startFrame.origin);
      Vec2 vec2 = startFrame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      Agent agent = this.Mission.SpawnAgent(agentBuildData.InitialDirection(in local).Equipment(equipment).Controller(troop == CharacterObject.PlayerCharacter ? Agent.ControllerType.Player : Agent.ControllerType.AI));
      agent.Health = (float) agent.Monster.HitPoints;
      agent.WieldInitialWeapons();
      this._agents.Add(this.AddHorseRaceAgentController(agent));
      if (troop != CharacterObject.PlayerCharacter)
        return;
      this.Mission.PlayerTeam = this._teams[count];
    }

    private TownHorseRaceAgentController AddHorseRaceAgentController(Agent agent)
    {
      return agent.AddController(typeof (TownHorseRaceAgentController)) as TownHorseRaceAgentController;
    }

    private void InitializeTeams(int count)
    {
      this._teams = new List<Team>();
      for (int index = 0; index < count; ++index)
        this._teams.Add(this.Mission.Teams.Add(BattleSideEnum.None, uint.MaxValue, uint.MaxValue, (Banner) null, true, false, true));
    }

    public void StartMatch(TournamentMatch match, bool isLastRound)
    {
      throw new NotImplementedException();
    }

    public void SkipMatch(TournamentMatch match) => throw new NotImplementedException();

    public bool IsMatchEnded() => throw new NotImplementedException();

    public void OnMatchEnded() => throw new NotImplementedException();

    public class CheckPoint
    {
      private readonly VolumeBox _volumeBox;
      private readonly List<GameEntity> _bestTargetList;

      public string Name => this._volumeBox.GameEntity.Name;

      public CheckPoint(VolumeBox volumeBox)
      {
        this._volumeBox = volumeBox;
        this._bestTargetList = this._volumeBox.GameEntity.CollectChildrenEntitiesWithTag("best_target_point");
        this._volumeBox.SetIsOccupiedDelegate(new VolumeBox.VolumeBoxDelegate(this.OnAgentsEnterCheckBox));
      }

      public Vec3 GetBestTargetPosition()
      {
        return this._bestTargetList.Count <= 0 ? this._volumeBox.GameEntity.GetGlobalFrame().origin : this._bestTargetList[MBRandom.RandomInt(this._bestTargetList.Count)].GetGlobalFrame().origin;
      }

      public void AddToCheckList(Agent agent) => this._volumeBox.AddToCheckList(agent);

      public void RemoveFromCheckList(Agent agent) => this._volumeBox.RemoveFromCheckList(agent);

      private void OnAgentsEnterCheckBox(VolumeBox volumeBox, List<Agent> agentsInVolume)
      {
        foreach (Agent agent in agentsInVolume)
          agent.GetController<TownHorseRaceAgentController>().OnEnterCheckPoint(volumeBox);
      }
    }
  }
}
