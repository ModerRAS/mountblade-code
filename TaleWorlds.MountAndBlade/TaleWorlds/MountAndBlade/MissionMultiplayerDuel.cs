// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionMultiplayerDuel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromClient;
using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.MissionRepresentatives;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionMultiplayerDuel : MissionMultiplayerGameModeBase
  {
    public const float DuelRequestTimeOutInSeconds = 10f;
    private const int MinBountyGain = 100;
    private const string AreaBoxTagPrefix = "area_box";
    private const string AreaFlagTagPrefix = "area_flag";
    public const int NumberOfDuelAreas = 16;
    public const float DuelEndInSeconds = 2f;
    private const float DuelRequestTimeOutServerToleranceInSeconds = 0.5f;
    private const float CorpseFadeOutTimeInSeconds = 1f;
    private List<GameEntity> _duelAreaFlags = new List<GameEntity>();
    private List<VolumeBox> _areaBoxes = new List<VolumeBox>();
    private List<MissionMultiplayerDuel.DuelInfo> _duelRequests = new List<MissionMultiplayerDuel.DuelInfo>();
    private List<MissionMultiplayerDuel.DuelInfo> _activeDuels = new List<MissionMultiplayerDuel.DuelInfo>();
    private List<MissionMultiplayerDuel.DuelInfo> _endingDuels = new List<MissionMultiplayerDuel.DuelInfo>();
    private List<MissionMultiplayerDuel.DuelInfo> _restartingDuels = new List<MissionMultiplayerDuel.DuelInfo>();
    private List<MissionMultiplayerDuel.DuelInfo> _restartPreparationDuels = new List<MissionMultiplayerDuel.DuelInfo>();
    private readonly Queue<Team> _deactiveDuelTeams = new Queue<Team>();
    private List<KeyValuePair<MissionPeer, TroopType>> _peersAndSelections = new List<KeyValuePair<MissionPeer, TroopType>>();
    private VolumeBox[] _cachedSelectedVolumeBoxes;
    private KeyValuePair<int, TroopType>[] _cachedSelectedAreaFlags;

    public override bool IsGameModeHidingAllAgentVisuals => true;

    public override bool IsGameModeUsingOpposingTeams => false;

    public event MissionMultiplayerDuel.OnDuelEndedDelegate OnDuelEnded;

    public override MultiplayerGameType GetMissionType() => MultiplayerGameType.Duel;

    public override void AfterStart()
    {
      base.AfterStart();
      Mission.Current.SetMissionCorpseFadeOutTimeInSeconds(1f);
      BasicCultureObject basicCultureObject = MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam1.GetStrValue());
      Banner banner = new Banner(basicCultureObject.BannerKey, basicCultureObject.BackgroundColor1, basicCultureObject.ForegroundColor1);
      this.Mission.Teams.Add(BattleSideEnum.Attacker, basicCultureObject.BackgroundColor1, basicCultureObject.ForegroundColor1, banner, false);
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._duelAreaFlags.AddRange(Mission.Current.Scene.FindEntitiesWithTagExpression("area_flag(_\\d+)*"));
      List<GameEntity> gameEntityList = new List<GameEntity>();
      gameEntityList.AddRange(Mission.Current.Scene.FindEntitiesWithTagExpression("area_box(_\\d+)*"));
      this._cachedSelectedAreaFlags = new KeyValuePair<int, TroopType>[this._duelAreaFlags.Count];
      for (int index = 0; index < gameEntityList.Count; ++index)
        this._areaBoxes.Add(gameEntityList[index].GetFirstScriptOfType<VolumeBox>());
      this._cachedSelectedVolumeBoxes = new VolumeBox[this._areaBoxes.Count];
    }

    protected override void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
      registerer.RegisterBaseHandler<NetworkMessages.FromClient.DuelRequest>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventDuelRequest));
      registerer.RegisterBaseHandler<DuelResponse>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventDuelRequestAccepted));
      registerer.RegisterBaseHandler<RequestChangePreferredTroopType>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventDuelRequestChangePreferredTroopType));
    }

    protected override void HandleEarlyNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
      networkPeer.AddComponent<DuelMissionRepresentative>();
    }

    protected override void HandleNewClientAfterSynchronized(NetworkCommunicator networkPeer)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      component.Team = this.Mission.AttackerTeam;
      this._peersAndSelections.Add(new KeyValuePair<MissionPeer, TroopType>(component, TroopType.Invalid));
    }

    private bool HandleClientEventDuelRequest(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      NetworkMessages.FromClient.DuelRequest duelRequest = (NetworkMessages.FromClient.DuelRequest) baseMessage;
      MissionPeer component = peer != null ? peer.GetComponent<MissionPeer>() : (MissionPeer) null;
      if (component != null)
      {
        Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(duelRequest.RequestedAgentIndex);
        if (agentFromIndex != null && agentFromIndex.IsActive())
          this.DuelRequestReceived(component, agentFromIndex.MissionPeer);
      }
      return true;
    }

    private bool HandleClientEventDuelRequestAccepted(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      DuelResponse duelResponse = (DuelResponse) baseMessage;
      if ((peer != null ? peer.GetComponent<MissionPeer>() : (MissionPeer) null) != null && peer.GetComponent<MissionPeer>().ControlledAgent != null)
      {
        NetworkCommunicator peer1 = duelResponse.Peer;
        if ((peer1 != null ? peer1.GetComponent<MissionPeer>() : (MissionPeer) null) != null && duelResponse.Peer.GetComponent<MissionPeer>().ControlledAgent != null)
          this.DuelRequestAccepted(duelResponse.Peer.GetComponent<DuelMissionRepresentative>().ControlledAgent, peer.GetComponent<DuelMissionRepresentative>().ControlledAgent);
      }
      return true;
    }

    private bool HandleClientEventDuelRequestChangePreferredTroopType(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      RequestChangePreferredTroopType preferredTroopType = (RequestChangePreferredTroopType) baseMessage;
      this.OnPeerSelectedPreferredTroopType(peer.GetComponent<MissionPeer>(), preferredTroopType.TroopType);
      return true;
    }

    public override bool CheckIfPlayerCanDespawn(MissionPeer missionPeer)
    {
      for (int index = 0; index < this._activeDuels.Count; ++index)
      {
        if (this._activeDuels[index].IsPeerInThisDuel(missionPeer))
          return false;
      }
      return true;
    }

    public void OnPlayerDespawn(MissionPeer missionPeer)
    {
      missionPeer.GetComponent<DuelMissionRepresentative>();
    }

    public void DuelRequestReceived(MissionPeer requesterPeer, MissionPeer requesteePeer)
    {
      if (this.IsThereARequestBetweenPeers(requesterPeer, requesteePeer) || this.IsHavingDuel(requesterPeer) || this.IsHavingDuel(requesteePeer))
        return;
      MissionMultiplayerDuel.DuelInfo duelInfo = new MissionMultiplayerDuel.DuelInfo(requesterPeer, requesteePeer, this.GetNextAvailableDuelAreaIndex(requesterPeer.ControlledAgent));
      this._duelRequests.Add(duelInfo);
      (requesteePeer.Representative as DuelMissionRepresentative).DuelRequested(requesterPeer.ControlledAgent, duelInfo.DuelAreaTroopType);
    }

    private KeyValuePair<int, TroopType> GetNextAvailableDuelAreaIndex(Agent requesterAgent)
    {
      TroopType troopType1 = TroopType.Invalid;
      for (int index = 0; index < this._peersAndSelections.Count; ++index)
      {
        if (this._peersAndSelections[index].Key == requesterAgent.MissionPeer)
        {
          troopType1 = this._peersAndSelections[index].Value;
          break;
        }
      }
      if (troopType1 == TroopType.Invalid)
        troopType1 = this.GetAgentTroopType(requesterAgent);
      bool flag = false;
      int maxValue = 0;
      for (int index = 0; index < this._duelAreaFlags.Count; ++index)
      {
        GameEntity duelAreaFlag = this._duelAreaFlags[index];
        int flagIndex = int.Parse(((IEnumerable<string>) duelAreaFlag.Tags).Single<string>((Func<string, bool>) (ft => ft.StartsWith("area_flag_"))).Replace("area_flag_", "")) - 1;
        if (this._activeDuels.All<MissionMultiplayerDuel.DuelInfo>((Func<MissionMultiplayerDuel.DuelInfo, bool>) (ad => ad.DuelAreaIndex != flagIndex)) && this._restartingDuels.All<MissionMultiplayerDuel.DuelInfo>((Func<MissionMultiplayerDuel.DuelInfo, bool>) (ad => ad.DuelAreaIndex != flagIndex)) && this._restartPreparationDuels.All<MissionMultiplayerDuel.DuelInfo>((Func<MissionMultiplayerDuel.DuelInfo, bool>) (ad => ad.DuelAreaIndex != flagIndex)))
        {
          TroopType troopType2 = duelAreaFlag.HasTag("flag_infantry") ? TroopType.Infantry : (duelAreaFlag.HasTag("flag_archery") ? TroopType.Ranged : TroopType.Cavalry);
          if (!flag && troopType2 == troopType1)
          {
            flag = true;
            maxValue = 0;
          }
          if (!flag || troopType2 == troopType1)
          {
            this._cachedSelectedAreaFlags[maxValue] = new KeyValuePair<int, TroopType>(flagIndex, troopType2);
            ++maxValue;
          }
        }
      }
      return this._cachedSelectedAreaFlags[MBRandom.RandomInt(maxValue)];
    }

    public void DuelRequestAccepted(Agent requesterAgent, Agent requesteeAgent)
    {
      MissionMultiplayerDuel.DuelInfo duel = this._duelRequests.FirstOrDefault<MissionMultiplayerDuel.DuelInfo>((Func<MissionMultiplayerDuel.DuelInfo, bool>) (dr => dr.IsPeerInThisDuel(requesterAgent.MissionPeer) && dr.IsPeerInThisDuel(requesteeAgent.MissionPeer)));
      if (duel == null)
        return;
      this.PrepareDuel(duel);
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      this.CheckRestartPreparationDuels();
      this.CheckForRestartingDuels();
      this.CheckDuelsToStart();
      this.CheckDuelRequestTimeouts();
      this.CheckEndedDuels();
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow blow)
    {
      if (!affectedAgent.IsHuman)
        return;
      if (affectedAgent.MissionPeer.Team.IsDefender)
      {
        MissionMultiplayerDuel.DuelInfo duelInfo = (MissionMultiplayerDuel.DuelInfo) null;
        for (int index = 0; index < this._activeDuels.Count; ++index)
        {
          if (this._activeDuels[index].IsPeerInThisDuel(affectedAgent.MissionPeer))
            duelInfo = this._activeDuels[index];
        }
        if (duelInfo == null || this._endingDuels.Contains(duelInfo))
          return;
        duelInfo.OnDuelEnding();
        this._endingDuels.Add(duelInfo);
      }
      else
      {
        for (int index = this._duelRequests.Count - 1; index >= 0; --index)
        {
          if (this._duelRequests[index].IsPeerInThisDuel(affectedAgent.MissionPeer))
            this._duelRequests.RemoveAt(index);
        }
      }
    }

    private Team ActivateAndGetDuelTeam()
    {
      return this._deactiveDuelTeams.Count <= 0 ? this.Mission.Teams.Add(BattleSideEnum.Defender, isSettingRelations: false) : this._deactiveDuelTeams.Dequeue();
    }

    private void DeactivateDuelTeam(Team team) => this._deactiveDuelTeams.Enqueue(team);

    private bool IsHavingDuel(MissionPeer peer)
    {
      return this._activeDuels.AnyQ<MissionMultiplayerDuel.DuelInfo>((Func<MissionMultiplayerDuel.DuelInfo, bool>) (d => d.IsPeerInThisDuel(peer)));
    }

    private bool IsThereARequestBetweenPeers(MissionPeer requesterAgent, MissionPeer requesteeAgent)
    {
      for (int index = 0; index < this._duelRequests.Count; ++index)
      {
        if (this._duelRequests[index].IsPeerInThisDuel(requesterAgent) && this._duelRequests[index].IsPeerInThisDuel(requesteeAgent))
          return true;
      }
      return false;
    }

    private void CheckDuelsToStart()
    {
      for (int index = this._activeDuels.Count - 1; index >= 0; --index)
      {
        MissionMultiplayerDuel.DuelInfo activeDuel = this._activeDuels[index];
        if (!activeDuel.Started && activeDuel.Timer.IsPast && activeDuel.IsDuelStillValid())
          this.StartDuel(activeDuel);
      }
    }

    private void CheckDuelRequestTimeouts()
    {
      for (int index = this._duelRequests.Count - 1; index >= 0; --index)
      {
        MissionMultiplayerDuel.DuelInfo duelRequest = this._duelRequests[index];
        if (duelRequest.Timer.IsPast)
          this._duelRequests.Remove(duelRequest);
      }
    }

    private void CheckForRestartingDuels()
    {
      for (int index = this._restartingDuels.Count - 1; index >= 0; --index)
      {
        if (!this._restartingDuels[index].IsDuelStillValid(true))
          Debug.Print("!_restartingDuels[i].IsDuelStillValid(true)");
        this._duelRequests.Add(this._restartingDuels[index]);
        this.PrepareDuel(this._restartingDuels[index]);
        this._restartingDuels.RemoveAt(index);
      }
    }

    private void CheckEndedDuels()
    {
      for (int index = this._endingDuels.Count - 1; index >= 0; --index)
      {
        MissionMultiplayerDuel.DuelInfo endingDuel = this._endingDuels[index];
        if (endingDuel.Timer.IsPast)
        {
          this.EndDuel(endingDuel);
          this._endingDuels.RemoveAt(index);
          if (!endingDuel.ChallengeEnded)
            this._restartPreparationDuels.Add(endingDuel);
        }
      }
    }

    private void CheckRestartPreparationDuels()
    {
      for (int index = this._restartPreparationDuels.Count - 1; index >= 0; --index)
      {
        MissionMultiplayerDuel.DuelInfo restartPreparationDuel = this._restartPreparationDuels[index];
        Agent controlledAgent1 = restartPreparationDuel.RequesterPeer.ControlledAgent;
        Agent controlledAgent2 = restartPreparationDuel.RequesteePeer.ControlledAgent;
        if ((controlledAgent1 == null || controlledAgent1.IsActive()) && (controlledAgent2 == null || controlledAgent2.IsActive()))
        {
          this._restartPreparationDuels.RemoveAt(index);
          this._restartingDuels.Add(restartPreparationDuel);
        }
      }
    }

    private void PrepareDuel(MissionMultiplayerDuel.DuelInfo duel)
    {
      this._duelRequests.Remove(duel);
      if (!this.IsHavingDuel(duel.RequesteePeer) && !this.IsHavingDuel(duel.RequesterPeer))
      {
        this._activeDuels.Add(duel);
        Team duelTeam = duel.Started ? duel.DuelingTeam : this.ActivateAndGetDuelTeam();
        duel.OnDuelPreparation(duelTeam);
        for (int index = 0; index < this._duelRequests.Count; ++index)
        {
          if (this._duelRequests[index].DuelAreaIndex == duel.DuelAreaIndex)
            this._duelRequests[index].UpdateDuelAreaIndex(this.GetNextAvailableDuelAreaIndex(this._duelRequests[index].RequesterPeer.ControlledAgent));
        }
      }
      else
        Debug.FailedAssert("IsHavingDuel(duel.RequesteePeer) || IsHavingDuel(duel.RequesterPeer)", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MultiplayerGameModeLogics\\ServerGameModeLogics\\MissionMultiplayerDuel.cs", nameof (PrepareDuel), 707);
    }

    private void StartDuel(MissionMultiplayerDuel.DuelInfo duel) => duel.OnDuelStarted();

    private void EndDuel(MissionMultiplayerDuel.DuelInfo duel)
    {
      this._activeDuels.Remove(duel);
      duel.OnDuelEnded();
      this.CleanSpawnedEntitiesInDuelArea(duel.DuelAreaIndex);
      if (!duel.ChallengeEnded)
        return;
      TroopType troopType = TroopType.Invalid;
      MissionPeer challengeWinnerPeer = duel.ChallengeWinnerPeer;
      if (challengeWinnerPeer?.ControlledAgent != null)
        troopType = this.GetAgentTroopType(challengeWinnerPeer.ControlledAgent);
      MissionMultiplayerDuel.OnDuelEndedDelegate onDuelEnded = this.OnDuelEnded;
      if (onDuelEnded != null)
        onDuelEnded(challengeWinnerPeer, troopType);
      this.DeactivateDuelTeam(duel.DuelingTeam);
      this.HandleEndedChallenge(duel);
    }

    private TroopType GetAgentTroopType(Agent requesterAgent)
    {
      TroopType agentTroopType = TroopType.Invalid;
      switch (requesterAgent.Character.DefaultFormationClass)
      {
        case FormationClass.Infantry:
        case FormationClass.HeavyInfantry:
          agentTroopType = TroopType.Infantry;
          break;
        case FormationClass.Ranged:
          agentTroopType = TroopType.Ranged;
          break;
        case FormationClass.Cavalry:
        case FormationClass.HorseArcher:
        case FormationClass.LightCavalry:
        case FormationClass.HeavyCavalry:
          agentTroopType = TroopType.Cavalry;
          break;
      }
      return agentTroopType;
    }

    private void CleanSpawnedEntitiesInDuelArea(int duelAreaIndex)
    {
      int num = duelAreaIndex + 1;
      int index1 = 0;
      for (int index2 = 0; index2 < this._areaBoxes.Count; ++index2)
      {
        if (this._areaBoxes[index2].GameEntity.HasTag(string.Format("{0}_{1}", (object) "area_box", (object) num)))
        {
          this._cachedSelectedVolumeBoxes[index1] = this._areaBoxes[index2];
          ++index1;
        }
      }
      for (int index3 = 0; index3 < Mission.Current.ActiveMissionObjects.Count; ++index3)
      {
        if (Mission.Current.ActiveMissionObjects[index3] is SpawnedItemEntity activeMissionObject && !activeMissionObject.IsDeactivated)
        {
          for (int index4 = 0; index4 < index1; ++index4)
          {
            if (this._cachedSelectedVolumeBoxes[index4].IsPointIn(activeMissionObject.GameEntity.GlobalPosition))
            {
              activeMissionObject.RequestDeletionOnNextTick();
              break;
            }
          }
        }
      }
    }

    private void HandleEndedChallenge(MissionMultiplayerDuel.DuelInfo duel)
    {
      MissionPeer challengeWinnerPeer = duel.ChallengeWinnerPeer;
      MissionPeer challengeLoserPeer = duel.ChallengeLoserPeer;
      if (challengeWinnerPeer != null)
      {
        DuelMissionRepresentative component1 = challengeWinnerPeer.GetComponent<DuelMissionRepresentative>();
        DuelMissionRepresentative component2 = challengeLoserPeer.GetComponent<DuelMissionRepresentative>();
        MultiplayerClassDivisions.MPHeroClass heroClassForPeer1 = MultiplayerClassDivisions.GetMPHeroClassForPeer(challengeWinnerPeer, true);
        MultiplayerClassDivisions.MPHeroClass heroClassForPeer2 = MultiplayerClassDivisions.GetMPHeroClassForPeer(challengeLoserPeer, true);
        float gainedScore = (float) MathF.Max(100, component2.Bounty) * MathF.Max(1f, (float) heroClassForPeer1.TroopCasualCost / (float) heroClassForPeer2.TroopCasualCost) * MathF.Pow(2.71828175f, (float) component1.NumberOfWins / 10f);
        component1.OnDuelWon(gainedScore);
        if (challengeWinnerPeer.Peer.Communicator.IsConnectionActive)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new DuelPointsUpdateMessage(component1));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
        }
        component2.ResetBountyAndNumberOfWins();
        if (challengeLoserPeer.Peer.Communicator.IsConnectionActive)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new DuelPointsUpdateMessage(component2));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
        }
      }
      MissionPeer peerComponent = challengeWinnerPeer ?? duel.RequesterPeer;
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new DuelEnded(peerComponent.GetNetworkPeer()));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
    }

    public int GetDuelAreaIndexIfDuelTeam(Team team)
    {
      return team.IsDefender ? this._activeDuels.FirstOrDefaultQ<MissionMultiplayerDuel.DuelInfo>((Func<MissionMultiplayerDuel.DuelInfo, bool>) (ad => ad.DuelingTeam == team)).DuelAreaIndex : -1;
    }

    public override void OnAgentBuild(Agent agent, Banner banner)
    {
      if (!agent.IsHuman || agent.Team == null || !agent.Team.IsDefender)
        return;
      for (int index = 0; index < this._activeDuels.Count; ++index)
      {
        if (this._activeDuels[index].IsPeerInThisDuel(agent.MissionPeer))
        {
          this._activeDuels[index].OnAgentBuild(agent);
          break;
        }
      }
    }

    protected override void HandleLateNewClientAfterSynchronized(NetworkCommunicator networkPeer)
    {
      if (networkPeer.IsServerPeer)
        return;
      foreach (NetworkCommunicator networkPeer1 in GameNetwork.NetworkPeers)
      {
        DuelMissionRepresentative component1 = networkPeer1.GetComponent<DuelMissionRepresentative>();
        if (component1 != null)
        {
          GameNetwork.BeginModuleEventAsServer(networkPeer);
          GameNetwork.WriteMessage((GameNetworkMessage) new DuelPointsUpdateMessage(component1));
          GameNetwork.EndModuleEventAsServer();
        }
        if (networkPeer != networkPeer1)
        {
          MissionPeer component2 = networkPeer1.GetComponent<MissionPeer>();
          if (component2 != null)
          {
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new SyncPerksForCurrentlySelectedTroop(networkPeer1, component2.Perks[component2.SelectedTroopIndex]));
            GameNetwork.EndModuleEventAsServer();
          }
        }
      }
      for (int index = 0; index < this._activeDuels.Count; ++index)
      {
        GameNetwork.BeginModuleEventAsServer(networkPeer);
        GameNetwork.WriteMessage((GameNetworkMessage) new DuelPreparationStartedForTheFirstTime(this._activeDuels[index].RequesterPeer.GetNetworkPeer(), this._activeDuels[index].RequesteePeer.GetNetworkPeer(), this._activeDuels[index].DuelAreaIndex));
        GameNetwork.EndModuleEventAsServer();
      }
    }

    protected override void HandleEarlyPlayerDisconnect(NetworkCommunicator networkPeer)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      for (int index = 0; index < this._peersAndSelections.Count; ++index)
      {
        if (this._peersAndSelections[index].Key == component)
        {
          this._peersAndSelections.RemoveAt(index);
          break;
        }
      }
    }

    protected override void HandlePlayerDisconnect(NetworkCommunicator networkPeer)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      if (component == null)
        return;
      component.Team = (Team) null;
    }

    private void OnPeerSelectedPreferredTroopType(MissionPeer missionPeer, TroopType troopType)
    {
      for (int index = 0; index < this._peersAndSelections.Count; ++index)
      {
        if (this._peersAndSelections[index].Key == missionPeer)
        {
          this._peersAndSelections[index] = new KeyValuePair<MissionPeer, TroopType>(missionPeer, troopType);
          break;
        }
      }
    }

    private class DuelInfo
    {
      private const float DuelStartCountdown = 3f;
      private readonly MissionMultiplayerDuel.DuelInfo.Challenger[] _challengers;
      private MissionMultiplayerDuel.DuelInfo.ChallengerType _winnerChallengerType = MissionMultiplayerDuel.DuelInfo.ChallengerType.None;

      public MissionPeer RequesterPeer => this._challengers[0].MissionPeer;

      public MissionPeer RequesteePeer => this._challengers[1].MissionPeer;

      public int DuelAreaIndex { get; private set; }

      public TroopType DuelAreaTroopType { get; private set; }

      public MissionTime Timer { get; private set; }

      public Team DuelingTeam { get; private set; }

      public bool Started { get; private set; }

      public bool ChallengeEnded { get; private set; }

      public MissionPeer ChallengeWinnerPeer
      {
        get
        {
          return this._winnerChallengerType != MissionMultiplayerDuel.DuelInfo.ChallengerType.None ? this._challengers[(int) this._winnerChallengerType].MissionPeer : (MissionPeer) null;
        }
      }

      public MissionPeer ChallengeLoserPeer
      {
        get
        {
          return this._winnerChallengerType != MissionMultiplayerDuel.DuelInfo.ChallengerType.None ? this._challengers[this._winnerChallengerType == MissionMultiplayerDuel.DuelInfo.ChallengerType.Requester ? 1 : 0].MissionPeer : (MissionPeer) null;
        }
      }

      public DuelInfo(
        MissionPeer requesterPeer,
        MissionPeer requesteePeer,
        KeyValuePair<int, TroopType> duelAreaPair)
      {
        this.DuelAreaIndex = duelAreaPair.Key;
        this.DuelAreaTroopType = duelAreaPair.Value;
        this._challengers = new MissionMultiplayerDuel.DuelInfo.Challenger[2];
        this._challengers[0] = new MissionMultiplayerDuel.DuelInfo.Challenger(requesterPeer);
        this._challengers[1] = new MissionMultiplayerDuel.DuelInfo.Challenger(requesteePeer);
        this.Timer = MissionTime.Now + MissionTime.Seconds(10.5f);
      }

      private void DecideRoundWinner()
      {
        bool connectionActive1 = this._challengers[0].MissionPeer.Peer.Communicator.IsConnectionActive;
        bool connectionActive2 = this._challengers[1].MissionPeer.Peer.Communicator.IsConnectionActive;
        if (!this.Started)
        {
          if (connectionActive1 == connectionActive2)
            this.ChallengeEnded = true;
          else
            this._winnerChallengerType = connectionActive1 ? MissionMultiplayerDuel.DuelInfo.ChallengerType.Requester : MissionMultiplayerDuel.DuelInfo.ChallengerType.Requestee;
        }
        else
        {
          Agent duelingAgent1 = this._challengers[0].DuelingAgent;
          Agent duelingAgent2 = this._challengers[1].DuelingAgent;
          if (duelingAgent1.IsActive())
            this._winnerChallengerType = MissionMultiplayerDuel.DuelInfo.ChallengerType.Requester;
          else if (duelingAgent2.IsActive())
          {
            this._winnerChallengerType = MissionMultiplayerDuel.DuelInfo.ChallengerType.Requestee;
          }
          else
          {
            if (!connectionActive1 && !connectionActive2)
              this.ChallengeEnded = true;
            this._winnerChallengerType = MissionMultiplayerDuel.DuelInfo.ChallengerType.None;
          }
        }
        if (this._winnerChallengerType == MissionMultiplayerDuel.DuelInfo.ChallengerType.None)
          return;
        this._challengers[(int) this._winnerChallengerType].IncreaseWinCount();
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new DuelRoundEnded(this._challengers[(int) this._winnerChallengerType].NetworkPeer));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
        if (this._challengers[(int) this._winnerChallengerType].KillCountInDuel != MultiplayerOptions.OptionType.MinScoreToWinDuel.GetIntValue() && connectionActive1 && connectionActive2)
          return;
        this.ChallengeEnded = true;
      }

      public void OnDuelPreparation(Team duelTeam)
      {
        if (!this.Started)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new DuelPreparationStartedForTheFirstTime(this._challengers[0].MissionPeer.GetNetworkPeer(), this._challengers[1].MissionPeer.GetNetworkPeer(), this.DuelAreaIndex));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
        }
        this.Started = false;
        this.DuelingTeam = duelTeam;
        this._winnerChallengerType = MissionMultiplayerDuel.DuelInfo.ChallengerType.None;
        for (int index = 0; index < 2; ++index)
        {
          this._challengers[index].OnDuelPreparation(this.DuelingTeam);
          this._challengers[index].MissionPeer.GetComponent<DuelMissionRepresentative>().OnDuelPreparation(this._challengers[0].MissionPeer, this._challengers[1].MissionPeer);
        }
        this.Timer = MissionTime.Now + MissionTime.Seconds(3f);
      }

      public void OnDuelStarted()
      {
        this.Started = true;
        this.DuelingTeam.SetIsEnemyOf(this.DuelingTeam, true);
      }

      public void OnDuelEnding() => this.Timer = MissionTime.Now + MissionTime.Seconds(2f);

      public void OnDuelEnded()
      {
        if (this.Started)
          this.DuelingTeam.SetIsEnemyOf(this.DuelingTeam, false);
        this.DecideRoundWinner();
        for (int index = 0; index < 2; ++index)
        {
          this._challengers[index].OnDuelEnded();
          Agent agent = this._challengers[index].DuelingAgent ?? this._challengers[index].MissionPeer.ControlledAgent;
          if (this.ChallengeEnded && agent != null && agent.IsActive())
            agent.FadeOut(true, false);
          this._challengers[index].MissionPeer.HasSpawnedAgentVisuals = true;
        }
        for (int index = 0; index < 2; ++index)
        {
          if (this._challengers[index].MountAgent != null && this._challengers[index].MountAgent.IsActive() && (this.ChallengeEnded || this._challengers[index].MountAgent.RiderAgent == null))
            this._challengers[index].MountAgent.FadeOut(true, false);
        }
      }

      public void OnAgentBuild(Agent agent)
      {
        for (int index = 0; index < 2; ++index)
        {
          if (this._challengers[index].MissionPeer == agent.MissionPeer)
          {
            this._challengers[index].SetAgents(agent);
            break;
          }
        }
      }

      public bool IsDuelStillValid(bool doNotCheckAgent = false)
      {
        for (int index = 0; index < 2; ++index)
        {
          if (!this._challengers[index].MissionPeer.Peer.Communicator.IsConnectionActive || !doNotCheckAgent && !this._challengers[index].MissionPeer.IsControlledAgentActive)
            return false;
        }
        return true;
      }

      public bool IsPeerInThisDuel(MissionPeer peer)
      {
        for (int index = 0; index < 2; ++index)
        {
          if (this._challengers[index].MissionPeer == peer)
            return true;
        }
        return false;
      }

      public void UpdateDuelAreaIndex(KeyValuePair<int, TroopType> duelAreaPair)
      {
        this.DuelAreaIndex = duelAreaPair.Key;
        this.DuelAreaTroopType = duelAreaPair.Value;
      }

      private enum ChallengerType
      {
        None = -1, // 0xFFFFFFFF
        Requester = 0,
        Requestee = 1,
        NumChallengerType = 2,
      }

      private struct Challenger
      {
        public readonly MissionPeer MissionPeer;
        public readonly NetworkCommunicator NetworkPeer;

        public Agent DuelingAgent { get; private set; }

        public Agent MountAgent { get; private set; }

        public int KillCountInDuel { get; private set; }

        public Challenger(MissionPeer missionPeer)
        {
          this.MissionPeer = missionPeer;
          MissionPeer missionPeer1 = this.MissionPeer;
          this.NetworkPeer = missionPeer1 != null ? missionPeer1.GetNetworkPeer() : (NetworkCommunicator) null;
          this.DuelingAgent = (Agent) null;
          this.MountAgent = (Agent) null;
          this.KillCountInDuel = 0;
        }

        public void OnDuelPreparation(Team duelingTeam)
        {
          this.MissionPeer.ControlledAgent?.FadeOut(true, true);
          this.MissionPeer.Team = duelingTeam;
          this.MissionPeer.HasSpawnedAgentVisuals = true;
        }

        public void OnDuelEnded()
        {
          if (!this.MissionPeer.Peer.Communicator.IsConnectionActive)
            return;
          this.MissionPeer.Team = Mission.Current.AttackerTeam;
        }

        public void IncreaseWinCount() => ++this.KillCountInDuel;

        public void SetAgents(Agent agent)
        {
          this.DuelingAgent = agent;
          this.MountAgent = this.DuelingAgent.MountAgent;
        }
      }
    }

    public delegate void OnDuelEndedDelegate(MissionPeer winnerPeer, TroopType troopType);
  }
}
