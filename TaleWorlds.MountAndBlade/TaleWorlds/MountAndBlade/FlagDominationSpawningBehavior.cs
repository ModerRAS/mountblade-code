// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FlagDominationSpawningBehavior
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class FlagDominationSpawningBehavior : SpawningBehaviorBase
  {
    private const int EnforcedSpawnTimeInSeconds = 15;
    private float _spawningTimer;
    private bool _spawningTimerTicking;
    private bool _roundInitialSpawnOver;
    private MissionMultiplayerFlagDomination _flagDominationMissionController;
    private MultiplayerRoundController _roundController;
    private List<KeyValuePair<MissionPeer, Timer>> _enforcedSpawnTimers;

    public FlagDominationSpawningBehavior()
    {
      this._enforcedSpawnTimers = new List<KeyValuePair<MissionPeer, Timer>>();
    }

    public override void Initialize(SpawnComponent spawnComponent)
    {
      base.Initialize(spawnComponent);
      this._flagDominationMissionController = this.Mission.GetMissionBehavior<MissionMultiplayerFlagDomination>();
      this._roundController = this.Mission.GetMissionBehavior<MultiplayerRoundController>();
      this._roundController.OnRoundStarted += new Action(((SpawningBehaviorBase) this).RequestStartSpawnSession);
      this._roundController.OnRoundEnding += new Action(((SpawningBehaviorBase) this).RequestStopSpawnSession);
      this._roundController.OnRoundEnding += new Action(((SpawningBehaviorBase) this).SetRemainingAgentsInvulnerable);
      if (MultiplayerOptions.OptionType.NumberOfBotsPerFormation.GetIntValue() == 0)
        this._roundController.EnableEquipmentUpdate();
      this.OnAllAgentsFromPeerSpawnedFromVisuals += new Action<MissionPeer>(this.OnAllAgentsFromPeerSpawnedFromVisuals);
      this.OnPeerSpawnedFromVisuals += new Action<MissionPeer>(this.OnPeerSpawnedFromVisuals);
    }

    public override void Clear()
    {
      base.Clear();
      this._roundController.OnRoundStarted -= new Action(((SpawningBehaviorBase) this).RequestStartSpawnSession);
      this._roundController.OnRoundEnding -= new Action(((SpawningBehaviorBase) this).SetRemainingAgentsInvulnerable);
      this._roundController.OnRoundEnding -= new Action(((SpawningBehaviorBase) this).RequestStopSpawnSession);
      this.OnAllAgentsFromPeerSpawnedFromVisuals -= new Action<MissionPeer>(this.OnAllAgentsFromPeerSpawnedFromVisuals);
      this.OnPeerSpawnedFromVisuals -= new Action<MissionPeer>(this.OnPeerSpawnedFromVisuals);
    }

    public override void OnTick(float dt)
    {
      if (this._spawningTimerTicking)
        this._spawningTimer += dt;
      if (this.IsSpawningEnabled)
      {
        if (!this._roundInitialSpawnOver && this.IsRoundInProgress())
        {
          foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
          {
            MissionPeer component = networkPeer.GetComponent<MissionPeer>();
            if (component?.Team != null && component.Team.Side != BattleSideEnum.None)
              this.SpawnComponent.SetEarlyAgentVisualsDespawning(component);
          }
          this._roundInitialSpawnOver = true;
          this.Mission.AllowAiTicking = true;
        }
        this.SpawnAgents();
        if ((!this._roundInitialSpawnOver || !this._flagDominationMissionController.GameModeUsesSingleSpawning ? 0 : ((double) this._spawningTimer > (double) MultiplayerOptions.OptionType.RoundPreparationTimeLimit.GetIntValue() ? 1 : 0)) != 0)
        {
          this.IsSpawningEnabled = false;
          this._spawningTimer = 0.0f;
          this._spawningTimerTicking = false;
        }
      }
      base.OnTick(dt);
    }

    public override void RequestStartSpawnSession()
    {
      if (this.IsSpawningEnabled)
        return;
      Mission.Current.SetBattleAgentCount(-1);
      this.IsSpawningEnabled = true;
      this._spawningTimerTicking = true;
      this.ResetSpawnCounts();
      this.ResetSpawnTimers();
    }

    protected override void SpawnAgents()
    {
      BasicCultureObject basicCultureObject1 = MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam1.GetStrValue());
      BasicCultureObject basicCultureObject2 = MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam2.GetStrValue());
      int intValue = MultiplayerOptions.OptionType.NumberOfBotsPerFormation.GetIntValue();
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        MissionPeer component = networkPeer.GetComponent<MissionPeer>();
        if (networkPeer.IsSynchronized && component.Team != null && component.Team.Side != BattleSideEnum.None && (intValue != 0 || !this.CheckIfEnforcedSpawnTimerExpiredForPeer(component)))
        {
          Team team = component.Team;
          int num1 = team == this.Mission.AttackerTeam ? 1 : 0;
          Team defenderTeam = this.Mission.DefenderTeam;
          BasicCultureObject basicCultureObject3 = num1 != 0 ? basicCultureObject1 : basicCultureObject2;
          MultiplayerClassDivisions.MPHeroClass heroClassForPeer = MultiplayerClassDivisions.GetMPHeroClassForPeer(component);
          int num2 = this._flagDominationMissionController.GetMissionType() == MultiplayerGameType.Battle ? heroClassForPeer.TroopBattleCost : heroClassForPeer.TroopCost;
          if (component.ControlledAgent == null && !component.HasSpawnedAgentVisuals && component.Team != null && component.Team != this.Mission.SpectatorTeam && component.TeamInitialPerkInfoReady && component.SpawnTimer.Check(this.Mission.CurrentTime))
          {
            int currentGoldForPeer = this._flagDominationMissionController.GetCurrentGoldForPeer(component);
            if (heroClassForPeer == null || this._flagDominationMissionController.UseGold() && num2 > currentGoldForPeer)
            {
              if (currentGoldForPeer >= MultiplayerClassDivisions.GetMinimumTroopCost(basicCultureObject3) && component.SelectedTroopIndex != 0)
              {
                component.SelectedTroopIndex = 0;
                GameNetwork.BeginBroadcastModuleEvent();
                GameNetwork.WriteMessage((GameNetworkMessage) new UpdateSelectedTroopIndex(networkPeer, 0));
                GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.ExcludeOtherTeamPlayers, networkPeer);
              }
            }
            else
            {
              if (intValue == 0)
                this.CreateEnforcedSpawnTimerForPeer(component, 15);
              Formation formation = component.ControlledFormation;
              if (intValue > 0 && formation == null)
              {
                FormationClass formationIndex = component.Team.FormationsIncludingEmpty.First<Formation>((Func<Formation, bool>) (x => x.PlayerOwner == null && !x.ContainsAgentVisuals && x.CountOfUnits == 0)).FormationIndex;
                formation = team.GetFormation(formationIndex);
                formation.ContainsAgentVisuals = true;
                if (string.IsNullOrEmpty(formation.BannerCode))
                  formation.BannerCode = component.Peer.BannerCode;
              }
              BasicCharacterObject heroCharacter = heroClassForPeer.HeroCharacter;
              AgentBuildData agentBuildData1 = new AgentBuildData(heroCharacter).MissionPeer(component).Team(component.Team).VisualsIndex(0).Formation(formation).MakeUnitStandOutOfFormationDistance(7f).IsFemale(component.Peer.IsFemale).BodyProperties(this.GetBodyProperties(component, component.Team == this.Mission.AttackerTeam ? basicCultureObject1 : basicCultureObject2)).ClothingColor1(team == this.Mission.AttackerTeam ? basicCultureObject3.Color : basicCultureObject3.ClothAlternativeColor).ClothingColor2(team == this.Mission.AttackerTeam ? basicCultureObject3.Color2 : basicCultureObject3.ClothAlternativeColor2);
              MPPerkObject.MPOnSpawnPerkHandler spawnPerkHandler = MPPerkObject.GetOnSpawnPerkHandler(component);
              Equipment equipment = heroCharacter.Equipment.Clone();
              IEnumerable<(EquipmentIndex, EquipmentElement)> alternativeEquipments1 = spawnPerkHandler?.GetAlternativeEquipments(true);
              if (alternativeEquipments1 != null)
              {
                foreach ((EquipmentIndex, EquipmentElement) tuple in alternativeEquipments1)
                  equipment[tuple.Item1] = tuple.Item2;
              }
              int agentVisualsForPeer = component.GetAmountOfAgentVisualsForPeer();
              bool updateExistingAgentVisuals = agentVisualsForPeer > 0;
              agentBuildData1.Equipment(equipment);
              Vec2 vec2;
              if (intValue == 0)
              {
                if (!updateExistingAgentVisuals)
                {
                  MatrixFrame spawnFrame = this.SpawnComponent.GetSpawnFrame(component.Team, equipment[EquipmentIndex.ArmorItemEndSlot].Item != null, true);
                  agentBuildData1.InitialPosition(in spawnFrame.origin);
                  AgentBuildData agentBuildData2 = agentBuildData1;
                  vec2 = spawnFrame.rotation.f.AsVec2;
                  vec2 = vec2.Normalized();
                  ref Vec2 local = ref vec2;
                  agentBuildData2.InitialDirection(in local);
                }
                else
                {
                  MatrixFrame frame = component.GetAgentVisualForPeer(0).GetFrame();
                  agentBuildData1.InitialPosition(in frame.origin);
                  AgentBuildData agentBuildData3 = agentBuildData1;
                  vec2 = frame.rotation.f.AsVec2;
                  vec2 = vec2.Normalized();
                  ref Vec2 local = ref vec2;
                  agentBuildData3.InitialDirection(in local);
                }
              }
              if (this.GameMode.ShouldSpawnVisualsForServer(networkPeer))
              {
                this.AgentVisualSpawnComponent.SpawnAgentVisualsForPeer(component, agentBuildData1, component.SelectedTroopIndex);
                if (agentBuildData1.AgentVisualsIndex == 0)
                {
                  component.HasSpawnedAgentVisuals = true;
                  component.EquipmentUpdatingExpired = false;
                }
              }
              this.GameMode.HandleAgentVisualSpawning(networkPeer, agentBuildData1);
              component.ControlledFormation = formation;
              if (intValue > 0)
              {
                int troopCount = MPPerkObject.GetTroopCount(heroClassForPeer, intValue, spawnPerkHandler);
                IEnumerable<(EquipmentIndex, EquipmentElement)> alternativeEquipments2 = spawnPerkHandler?.GetAlternativeEquipments(false);
                for (int index = 0; index < troopCount; ++index)
                {
                  if (index + 1 >= agentVisualsForPeer)
                    updateExistingAgentVisuals = false;
                  this.SpawnBotVisualsInPlayerFormation(component, index + 1, team, basicCultureObject3, heroClassForPeer.TroopCharacter.StringId, formation, updateExistingAgentVisuals, troopCount, alternativeEquipments2);
                }
              }
            }
          }
        }
      }
    }

    private void OnPeerSpawnedFromVisuals(MissionPeer peer)
    {
      if (peer.ControlledFormation == null)
        return;
      peer.ControlledAgent.Team.AssignPlayerAsSergeantOfFormation(peer, peer.ControlledFormation.FormationIndex);
    }

    private void OnAllAgentsFromPeerSpawnedFromVisuals(MissionPeer peer)
    {
      if (peer.ControlledFormation != null)
      {
        peer.ControlledFormation.OnFormationDispersed();
        peer.ControlledFormation.SetMovementOrder(MovementOrder.MovementOrderFollow(peer.ControlledAgent));
        NetworkCommunicator networkPeer = peer.GetNetworkPeer();
        if (peer.BotsUnderControlAlive != 0 || peer.BotsUnderControlTotal != 0)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new BotsControlledChange(networkPeer, peer.BotsUnderControlAlive, peer.BotsUnderControlTotal));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
          this.Mission.GetMissionBehavior<MissionMultiplayerGameModeFlagDominationClient>().OnBotsControlledChanged(peer, peer.BotsUnderControlAlive, peer.BotsUnderControlTotal);
        }
        if (peer.Team == this.Mission.AttackerTeam)
          ++this.Mission.NumOfFormationsSpawnedTeamOne;
        else
          ++this.Mission.NumOfFormationsSpawnedTeamTwo;
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetSpawnedFormationCount(this.Mission.NumOfFormationsSpawnedTeamOne, this.Mission.NumOfFormationsSpawnedTeamTwo));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      if (!this._flagDominationMissionController.UseGold())
        return;
      bool flag = peer.Team == this.Mission.AttackerTeam;
      Team defenderTeam = this.Mission.DefenderTeam;
      MultiplayerClassDivisions.MPHeroClass mpHeroClass = MultiplayerClassDivisions.GetMPHeroClasses(MBObjectManager.Instance.GetObject<BasicCultureObject>(flag ? MultiplayerOptions.OptionType.CultureTeam1.GetStrValue() : MultiplayerOptions.OptionType.CultureTeam2.GetStrValue())).ElementAt<MultiplayerClassDivisions.MPHeroClass>(peer.SelectedTroopIndex);
      int num = this._flagDominationMissionController.GetMissionType() == MultiplayerGameType.Battle ? mpHeroClass.TroopBattleCost : mpHeroClass.TroopCost;
      this._flagDominationMissionController.ChangeCurrentGoldForPeer(peer, this._flagDominationMissionController.GetCurrentGoldForPeer(peer) - num);
    }

    private void BotFormationSpawned(Team team)
    {
      if (team == this.Mission.AttackerTeam)
      {
        ++this.Mission.NumOfFormationsSpawnedTeamOne;
      }
      else
      {
        if (team != this.Mission.DefenderTeam)
          return;
        ++this.Mission.NumOfFormationsSpawnedTeamTwo;
      }
    }

    private void AllBotFormationsSpawned()
    {
      if (this.Mission.NumOfFormationsSpawnedTeamOne == 0 && this.Mission.NumOfFormationsSpawnedTeamTwo == 0)
        return;
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new SetSpawnedFormationCount(this.Mission.NumOfFormationsSpawnedTeamOne, this.Mission.NumOfFormationsSpawnedTeamTwo));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
    }

    public override bool AllowEarlyAgentVisualsDespawning(MissionPeer lobbyPeer)
    {
      if (MultiplayerOptions.OptionType.NumberOfBotsPerFormation.GetIntValue() != 0 || !this._roundController.IsRoundInProgress)
        return false;
      if (!lobbyPeer.HasSpawnTimerExpired && lobbyPeer.SpawnTimer.Check(Mission.Current.CurrentTime))
        lobbyPeer.HasSpawnTimerExpired = true;
      return lobbyPeer.HasSpawnTimerExpired;
    }

    protected override bool IsRoundInProgress() => this._roundController.IsRoundInProgress;

    private void CreateEnforcedSpawnTimerForPeer(MissionPeer peer, int durationInSeconds)
    {
      if (this._enforcedSpawnTimers.Any<KeyValuePair<MissionPeer, Timer>>((Func<KeyValuePair<MissionPeer, Timer>, bool>) (pair => pair.Key == peer)))
        return;
      this._enforcedSpawnTimers.Add(new KeyValuePair<MissionPeer, Timer>(peer, new Timer(this.Mission.CurrentTime, (float) durationInSeconds)));
      Debug.Print("EST for " + peer.Name + " set to " + (object) durationInSeconds + " seconds.", color: Debug.DebugColor.Yellow, debugFilter: 64UL);
    }

    private bool CheckIfEnforcedSpawnTimerExpiredForPeer(MissionPeer peer)
    {
      KeyValuePair<MissionPeer, Timer> keyValuePair = this._enforcedSpawnTimers.FirstOrDefault<KeyValuePair<MissionPeer, Timer>>((Func<KeyValuePair<MissionPeer, Timer>, bool>) (pr => pr.Key == peer));
      if (keyValuePair.Key == null)
        return false;
      if (peer.ControlledAgent != null)
      {
        this._enforcedSpawnTimers.RemoveAll((Predicate<KeyValuePair<MissionPeer, Timer>>) (p => p.Key == peer));
        Debug.Print("EST for " + peer.Name + " is no longer valid (spawned already).", color: Debug.DebugColor.Yellow, debugFilter: 64UL);
        return false;
      }
      Timer timer = keyValuePair.Value;
      if (!peer.HasSpawnedAgentVisuals || !timer.Check(Mission.Current.CurrentTime))
        return false;
      this.SpawnComponent.SetEarlyAgentVisualsDespawning(peer);
      this._enforcedSpawnTimers.RemoveAll((Predicate<KeyValuePair<MissionPeer, Timer>>) (p => p.Key == peer));
      Debug.Print("EST for " + peer.Name + " has expired.", color: Debug.DebugColor.Yellow, debugFilter: 64UL);
      return true;
    }

    public override void OnClearScene()
    {
      base.OnClearScene();
      this._enforcedSpawnTimers.Clear();
      this._roundInitialSpawnOver = false;
    }

    protected void SpawnBotInBotFormation(
      int visualsIndex,
      Team agentTeam,
      BasicCultureObject cultureLimit,
      BasicCharacterObject character,
      Formation formation)
    {
      AgentBuildData agentBuildData = new AgentBuildData(character).Team(agentTeam).TroopOrigin((IAgentOriginBase) new BasicBattleAgentOrigin(character)).VisualsIndex(visualsIndex).EquipmentSeed(this.MissionLobbyComponent.GetRandomFaceSeedForCharacter(character, visualsIndex)).Formation(formation).IsFemale(character.IsFemale).ClothingColor1(agentTeam.Side == BattleSideEnum.Attacker ? cultureLimit.Color : cultureLimit.ClothAlternativeColor).ClothingColor2(agentTeam.Side == BattleSideEnum.Attacker ? cultureLimit.Color2 : cultureLimit.ClothAlternativeColor2);
      agentBuildData.Equipment(Equipment.GetRandomEquipmentElements(character, !GameNetwork.IsMultiplayer, seed: agentBuildData.AgentEquipmentSeed));
      agentBuildData.BodyProperties(BodyProperties.GetRandomBodyProperties(agentBuildData.AgentRace, agentBuildData.AgentIsFemale, character.GetBodyPropertiesMin(), character.GetBodyPropertiesMax(), (int) agentBuildData.AgentOverridenSpawnEquipment.HairCoverType, agentBuildData.AgentEquipmentSeed, character.HairTags, character.BeardTags, character.TattooTags));
      this.Mission.SpawnAgent(agentBuildData).AIStateFlags |= Agent.AIStateFlag.Alarmed;
    }

    protected void SpawnBotVisualsInPlayerFormation(
      MissionPeer missionPeer,
      int visualsIndex,
      Team agentTeam,
      BasicCultureObject cultureLimit,
      string troopName,
      Formation formation,
      bool updateExistingAgentVisuals,
      int totalCount,
      IEnumerable<(EquipmentIndex, EquipmentElement)> alternativeEquipments)
    {
      BasicCharacterObject basicCharacterObject = MBObjectManager.Instance.GetObject<BasicCharacterObject>(troopName);
      AgentBuildData agentBuildData = new AgentBuildData(basicCharacterObject).Team(agentTeam).OwningMissionPeer(missionPeer).VisualsIndex(visualsIndex).TroopOrigin((IAgentOriginBase) new BasicBattleAgentOrigin(basicCharacterObject)).EquipmentSeed(this.MissionLobbyComponent.GetRandomFaceSeedForCharacter(basicCharacterObject, visualsIndex)).Formation(formation).IsFemale(basicCharacterObject.IsFemale).ClothingColor1(agentTeam.Side == BattleSideEnum.Attacker ? cultureLimit.Color : cultureLimit.ClothAlternativeColor).ClothingColor2(agentTeam.Side == BattleSideEnum.Attacker ? cultureLimit.Color2 : cultureLimit.ClothAlternativeColor2);
      Equipment equipmentElements = Equipment.GetRandomEquipmentElements(basicCharacterObject, !GameNetwork.IsMultiplayer, seed: MBRandom.RandomInt());
      if (alternativeEquipments != null)
      {
        foreach ((EquipmentIndex, EquipmentElement) alternativeEquipment in alternativeEquipments)
          equipmentElements[alternativeEquipment.Item1] = alternativeEquipment.Item2;
      }
      agentBuildData.Equipment(equipmentElements);
      agentBuildData.BodyProperties(BodyProperties.GetRandomBodyProperties(agentBuildData.AgentRace, agentBuildData.AgentIsFemale, basicCharacterObject.GetBodyPropertiesMin(), basicCharacterObject.GetBodyPropertiesMax(), (int) agentBuildData.AgentOverridenSpawnEquipment.HairCoverType, agentBuildData.AgentEquipmentSeed, basicCharacterObject.HairTags, basicCharacterObject.BeardTags, basicCharacterObject.TattooTags));
      NetworkCommunicator networkPeer = missionPeer.GetNetworkPeer();
      if (this.GameMode.ShouldSpawnVisualsForServer(networkPeer))
      {
        this.AgentVisualSpawnComponent.SpawnAgentVisualsForPeer(missionPeer, agentBuildData, isBot: true, totalTroopCount: totalCount);
        if (agentBuildData.AgentVisualsIndex == 0)
        {
          missionPeer.HasSpawnedAgentVisuals = true;
          missionPeer.EquipmentUpdatingExpired = false;
        }
      }
      this.GameMode.HandleAgentVisualSpawning(networkPeer, agentBuildData, totalCount, false);
    }
  }
}
