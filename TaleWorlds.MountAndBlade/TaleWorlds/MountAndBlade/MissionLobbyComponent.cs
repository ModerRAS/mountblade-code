// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionLobbyComponent
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
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MissionLobbyComponent : MissionNetwork
  {
    private static readonly float InactivityThreshold = 2f;
    public static readonly float PostMatchWaitDuration = 15f;
    private bool[] _classRestrictions = new bool[8];
    private MissionScoreboardComponent _missionScoreboardComponent;
    private MissionMultiplayerGameModeBase _gameMode;
    private MultiplayerTimerComponent _timerComponent;
    private IRoundComponent _roundComponent;
    private Timer _inactivityTimer;
    private MultiplayerWarmupComponent _warmupComponent;
    private static readonly Dictionary<Tuple<LobbyMissionType, bool>, System.Type> _lobbyComponentTypes = new Dictionary<Tuple<LobbyMissionType, bool>, System.Type>();
    private bool _usingFixedBanners;
    private MissionLobbyComponent.MultiplayerGameState _currentMultiplayerState;

    public event Action OnPostMatchEnded;

    public event Action OnCultureSelectionRequested;

    public event Action<string, bool> OnAdminMessageRequested;

    public event Action OnClassRestrictionChanged;

    public bool IsInWarmup => this._warmupComponent != null && this._warmupComponent.IsInWarmup;

    static MissionLobbyComponent()
    {
      MissionLobbyComponent.AddLobbyComponentType(typeof (MissionBattleSchedulerClientComponent), LobbyMissionType.Matchmaker, false);
      MissionLobbyComponent.AddLobbyComponentType(typeof (MissionCustomGameClientComponent), LobbyMissionType.Custom, false);
      MissionLobbyComponent.AddLobbyComponentType(typeof (MissionCommunityClientComponent), LobbyMissionType.Community, false);
    }

    public static void AddLobbyComponentType(
      System.Type type,
      LobbyMissionType missionType,
      bool isSeverComponent)
    {
      MissionLobbyComponent._lobbyComponentTypes.Add(new Tuple<LobbyMissionType, bool>(missionType, isSeverComponent), type);
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this.CurrentMultiplayerState = MissionLobbyComponent.MultiplayerGameState.WaitingFirstPlayers;
      if (GameNetwork.IsServerOrRecorder)
      {
        MissionMultiplayerGameModeBase missionBehavior = Mission.Current.GetMissionBehavior<MissionMultiplayerGameModeBase>();
        if (missionBehavior == null || missionBehavior.AllowCustomPlayerBanners())
          return;
        this._usingFixedBanners = true;
      }
      else
        this._inactivityTimer = new Timer(this.Mission.CurrentTime, MissionLobbyComponent.InactivityThreshold);
    }

    protected override void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
      if (GameNetwork.IsClient)
      {
        registerer.RegisterBaseHandler<KillDeathCountChange>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventKillDeathCountChangeEvent));
        registerer.RegisterBaseHandler<MissionStateChange>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventMissionStateChange));
        registerer.RegisterBaseHandler<NetworkMessages.FromServer.CreateBanner>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventCreateBannerForPeer));
        registerer.RegisterBaseHandler<ChangeCulture>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventChangeCulture));
        registerer.RegisterBaseHandler<ChangeClassRestrictions>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventChangeClassRestrictions));
      }
      else if (GameNetwork.IsClientOrReplay)
      {
        registerer.RegisterBaseHandler<ChangeCulture>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventChangeCulture));
      }
      else
      {
        if (!GameNetwork.IsServer)
          return;
        registerer.RegisterBaseHandler<NetworkMessages.FromClient.CreateBanner>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventCreateBannerForPeer));
        registerer.RegisterBaseHandler<RequestCultureChange>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventRequestCultureChange));
        registerer.RegisterBaseHandler<RequestChangeCharacterMessage>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventRequestChangeCharacterMessage));
      }
    }

    protected override void OnUdpNetworkHandlerClose()
    {
      if (!GameNetwork.IsServerOrRecorder && !this._usingFixedBanners)
        return;
      this._usingFixedBanners = false;
    }

    public static MissionLobbyComponent CreateBehavior()
    {
      return (MissionLobbyComponent) Activator.CreateInstance(MissionLobbyComponent._lobbyComponentTypes[new Tuple<LobbyMissionType, bool>(BannerlordNetwork.LobbyMissionType, GameNetwork.IsDedicatedServer)]);
    }

    public virtual void QuitMission()
    {
    }

    public override void AfterStart()
    {
      this.Mission.MakeDefaultDeploymentPlans();
      this._missionScoreboardComponent = this.Mission.GetMissionBehavior<MissionScoreboardComponent>();
      this._gameMode = this.Mission.GetMissionBehavior<MissionMultiplayerGameModeBase>();
      this._timerComponent = this.Mission.GetMissionBehavior<MultiplayerTimerComponent>();
      this._roundComponent = this.Mission.GetMissionBehavior<IRoundComponent>();
      this._warmupComponent = this.Mission.GetMissionBehavior<MultiplayerWarmupComponent>();
      if (!GameNetwork.IsClient)
        return;
      this.Mission.GetMissionBehavior<MissionNetworkComponent>().OnMyClientSynchronized += new Action(this.OnMyClientSynchronized);
    }

    private void OnMyClientSynchronized()
    {
      this.Mission.GetMissionBehavior<MissionNetworkComponent>().OnMyClientSynchronized -= new Action(this.OnMyClientSynchronized);
      MissionPeer component = GameNetwork.MyPeer.GetComponent<MissionPeer>();
      if (component == null || component.Culture != null)
        return;
      this.RequestCultureSelection();
    }

    public override void EarlyStart()
    {
      if (!GameNetwork.IsServer)
        return;
      this.Mission.SpectatorTeam = this.Mission.Teams.Add(BattleSideEnum.None, uint.MaxValue, uint.MaxValue, (Banner) null, true, false, true);
    }

    public override void OnMissionTick(float dt)
    {
      if (GameNetwork.IsClient && this._inactivityTimer.Check(this.Mission.CurrentTime))
        NetworkMain.GameClient.IsInCriticalState = MBAPI.IMBNetwork.ElapsedTimeSinceLastUdpPacketArrived() > (double) MissionLobbyComponent.InactivityThreshold;
      if (this.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.WaitingFirstPlayers)
      {
        if (!GameNetwork.IsServer || this._warmupComponent != null && (this._warmupComponent.IsInWarmup || !this._timerComponent.CheckIfTimerPassed()))
          return;
        int num1 = GameNetwork.NetworkPeers.Count<NetworkCommunicator>((Func<NetworkCommunicator, bool>) (x => x.IsSynchronized));
        int num2 = MultiplayerOptions.OptionType.NumberOfBotsTeam1.GetIntValue() + MultiplayerOptions.OptionType.NumberOfBotsTeam2.GetIntValue();
        int intValue = MultiplayerOptions.OptionType.MinNumberOfPlayersForMatchStart.GetIntValue();
        int num3 = num2;
        if (num1 + num3 < intValue && MBCommon.CurrentGameType != MBCommon.GameType.MultiClientServer)
          return;
        this.SetStatePlayingAsServer();
      }
      else
      {
        if (this.CurrentMultiplayerState != MissionLobbyComponent.MultiplayerGameState.Playing)
          return;
        bool flag = this._timerComponent.CheckIfTimerPassed();
        if (!GameNetwork.IsServerOrRecorder || this._gameMode.RoundController != null || !flag && !this._gameMode.CheckForMatchEnd())
          return;
        this._gameMode.GetWinnerTeam();
        this._gameMode.SpawnComponent.SpawningBehavior.RequestStopSpawnSession();
        this._gameMode.SpawnComponent.SpawningBehavior.SetRemainingAgentsInvulnerable();
        this.SetStateEndingAsServer();
      }
    }

    protected override void OnUdpNetworkHandlerTick()
    {
      if (this.CurrentMultiplayerState != MissionLobbyComponent.MultiplayerGameState.Ending || !this._timerComponent.CheckIfTimerPassed() || !GameNetwork.IsServer)
        return;
      this.EndGameAsServer();
    }

    public override void OnRemoveBehavior()
    {
      NetworkCommunicator myPeer = GameNetwork.MyPeer;
      this.QuitMission();
      base.OnRemoveBehavior();
    }

    public bool IsClassAvailable(FormationClass formationClass)
    {
      return !this._classRestrictions[(int) formationClass];
    }

    public void ChangeClassRestriction(FormationClass classToChangeRestriction, bool value)
    {
      this._classRestrictions[(int) classToChangeRestriction] = value;
      Action restrictionChanged = this.OnClassRestrictionChanged;
      if (restrictionChanged == null)
        return;
      restrictionChanged();
    }

    private void HandleServerEventMissionStateChange(GameNetworkMessage baseMessage)
    {
      MissionStateChange missionStateChange = (MissionStateChange) baseMessage;
      this.CurrentMultiplayerState = missionStateChange.CurrentState;
      if (this.CurrentMultiplayerState != MissionLobbyComponent.MultiplayerGameState.WaitingFirstPlayers)
      {
        if (this.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.Playing && this._warmupComponent != null)
        {
          this.Mission.RemoveMissionBehavior((MissionBehavior) this._warmupComponent);
          this._warmupComponent = (MultiplayerWarmupComponent) null;
        }
        float duration = this.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.Playing ? (float) (MultiplayerOptions.OptionType.MapTimeLimit.GetIntValue() * 60) : MissionLobbyComponent.PostMatchWaitDuration;
        this._timerComponent.StartTimerAsClient(missionStateChange.StateStartTimeInSeconds, duration);
      }
      if (this.CurrentMultiplayerState != MissionLobbyComponent.MultiplayerGameState.Ending)
        return;
      this.SetStateEndingAsClient();
    }

    private void HandleServerEventKillDeathCountChangeEvent(GameNetworkMessage baseMessage)
    {
      KillDeathCountChange deathCountChange = (KillDeathCountChange) baseMessage;
      if (deathCountChange.VictimPeer == null)
        return;
      MissionPeer component1 = deathCountChange.VictimPeer.GetComponent<MissionPeer>();
      NetworkCommunicator attackerPeer = deathCountChange.AttackerPeer;
      MissionPeer component2 = attackerPeer != null ? attackerPeer.GetComponent<MissionPeer>() : (MissionPeer) null;
      if (component1 != null)
      {
        component1.KillCount = deathCountChange.KillCount;
        component1.AssistCount = deathCountChange.AssistCount;
        component1.DeathCount = deathCountChange.DeathCount;
        component1.Score = deathCountChange.Score;
        component2?.OnKillAnotherPeer(component1);
        if (deathCountChange.KillCount == 0 && deathCountChange.AssistCount == 0 && deathCountChange.DeathCount == 0 && deathCountChange.Score == 0)
          component1.ResetKillRegistry();
      }
      if (this._missionScoreboardComponent == null)
        return;
      this._missionScoreboardComponent.PlayerPropertiesChanged(deathCountChange.VictimPeer);
    }

    private void HandleServerEventCreateBannerForPeer(GameNetworkMessage baseMessage)
    {
      NetworkMessages.FromServer.CreateBanner createBanner = (NetworkMessages.FromServer.CreateBanner) baseMessage;
      MissionPeer component = createBanner.Peer.GetComponent<MissionPeer>();
      if (component == null)
        return;
      component.Peer.BannerCode = createBanner.BannerCode;
    }

    private void HandleServerEventChangeCulture(GameNetworkMessage baseMessage)
    {
      ChangeCulture changeCulture = (ChangeCulture) baseMessage;
      MissionPeer component = changeCulture.Peer.GetComponent<MissionPeer>();
      if (component == null)
        return;
      component.Culture = changeCulture.Culture;
    }

    private void HandleServerEventChangeClassRestrictions(GameNetworkMessage baseMessage)
    {
      ChangeClassRestrictions classRestrictions = (ChangeClassRestrictions) baseMessage;
      this.ChangeClassRestriction(classRestrictions.ClassToChangeRestriction, classRestrictions.NewValue);
    }

    private bool HandleClientEventRequestCultureChange(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      RequestCultureChange requestCultureChange = (RequestCultureChange) baseMessage;
      MissionPeer component = peer.GetComponent<MissionPeer>();
      if (component != null && this._gameMode.CheckIfPlayerCanDespawn(component))
      {
        component.Culture = requestCultureChange.Culture;
        this.DespawnPlayer(component);
      }
      return true;
    }

    private bool HandleClientEventCreateBannerForPeer(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      NetworkMessages.FromClient.CreateBanner createBanner = (NetworkMessages.FromClient.CreateBanner) baseMessage;
      MissionMultiplayerGameModeBase missionBehavior = Mission.Current.GetMissionBehavior<MissionMultiplayerGameModeBase>();
      if (missionBehavior == null || !missionBehavior.AllowCustomPlayerBanners())
        return false;
      MissionPeer component = peer.GetComponent<MissionPeer>();
      if (component == null)
        return false;
      component.Peer.BannerCode = createBanner.BannerCode;
      MissionLobbyComponent.SyncBannersToAllClients(createBanner.BannerCode, component.GetNetworkPeer());
      return true;
    }

    private bool HandleClientEventRequestChangeCharacterMessage(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      MissionPeer component = ((RequestChangeCharacterMessage) baseMessage).NetworkPeer.GetComponent<MissionPeer>();
      if (component != null && this._gameMode.CheckIfPlayerCanDespawn(component))
        this.DespawnPlayer(component);
      return true;
    }

    private static void SyncBannersToAllClients(string bannerCode, NetworkCommunicator ownerPeer)
    {
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.CreateBanner(ownerPeer, bannerCode));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.ExcludeTargetPlayer, ownerPeer);
    }

    protected override void HandleNewClientConnect(PlayerConnectionInfo clientConnectionInfo)
    {
      base.HandleNewClientConnect(clientConnectionInfo);
    }

    protected override void HandleLateNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
      if (networkPeer.IsServerPeer)
        return;
      this.SendExistingObjectsToPeer(networkPeer);
    }

    private void SendExistingObjectsToPeer(NetworkCommunicator peer)
    {
      long stateStartTimeInTicks = 0;
      if (this.CurrentMultiplayerState != MissionLobbyComponent.MultiplayerGameState.WaitingFirstPlayers)
        stateStartTimeInTicks = this._timerComponent.GetCurrentTimerStartTime().NumberOfTicks;
      GameNetwork.BeginModuleEventAsServer(peer);
      GameNetwork.WriteMessage((GameNetworkMessage) new MissionStateChange(this.CurrentMultiplayerState, stateStartTimeInTicks));
      GameNetwork.EndModuleEventAsServer();
      this.SendPeerInformationsToPeer(peer);
    }

    private void SendPeerInformationsToPeer(NetworkCommunicator peer)
    {
      foreach (NetworkCommunicator disconnectedPeer in GameNetwork.NetworkPeersIncludingDisconnectedPeers)
      {
        bool flag = disconnectedPeer.VirtualPlayer != GameNetwork.VirtualPlayers[disconnectedPeer.VirtualPlayer.Index];
        if (flag || disconnectedPeer.IsSynchronized || disconnectedPeer.JustReconnecting)
        {
          MissionPeer component = disconnectedPeer.GetComponent<MissionPeer>();
          if (component != null)
          {
            GameNetwork.BeginModuleEventAsServer(peer);
            GameNetwork.WriteMessage((GameNetworkMessage) new KillDeathCountChange(component.GetNetworkPeer(), (NetworkCommunicator) null, component.KillCount, component.AssistCount, component.DeathCount, component.Score));
            GameNetwork.EndModuleEventAsServer();
            if (component.BotsUnderControlAlive != 0 || component.BotsUnderControlTotal != 0)
            {
              GameNetwork.BeginModuleEventAsServer(peer);
              GameNetwork.WriteMessage((GameNetworkMessage) new BotsControlledChange(component.GetNetworkPeer(), component.BotsUnderControlAlive, component.BotsUnderControlTotal));
              GameNetwork.EndModuleEventAsServer();
            }
          }
          else
            Debug.Print(">#< SendPeerInformationsToPeer MissionPeer is null.", color: Debug.DebugColor.BrightWhite, debugFilter: 17179869184UL);
        }
        else
        {
          Debug.Print(">#< Can't send the info of " + disconnectedPeer.UserName + " to " + peer.UserName + ".", color: Debug.DebugColor.BrightWhite, debugFilter: 17179869184UL);
          Debug.Print(string.Format("isDisconnectedPeer: {0}", (object) flag), color: Debug.DebugColor.BrightWhite, debugFilter: 17179869184UL);
          Debug.Print(string.Format("networkPeer.IsSynchronized: {0}", (object) disconnectedPeer.IsSynchronized), color: Debug.DebugColor.BrightWhite, debugFilter: 17179869184UL);
          Debug.Print(string.Format("peer == networkPeer: {0}", (object) (peer == disconnectedPeer)), color: Debug.DebugColor.BrightWhite, debugFilter: 17179869184UL);
          Debug.Print(string.Format("networkPeer.JustReconnecting: {0}", (object) disconnectedPeer.JustReconnecting), color: Debug.DebugColor.BrightWhite, debugFilter: 17179869184UL);
        }
      }
    }

    public void DespawnPlayer(MissionPeer missionPeer)
    {
      if (missionPeer.ControlledAgent == null || !missionPeer.ControlledAgent.IsActive())
        return;
      missionPeer.ControlledAgent?.FadeOut(true, true);
    }

    public override void OnScoreHit(
      Agent affectedAgent,
      Agent affectorAgent,
      WeaponComponentData attackerWeapon,
      bool isBlocked,
      bool isSiegeEngineHit,
      in Blow blow,
      in AttackCollisionData collisionData,
      float damagedHp,
      float hitDistance,
      float shotDifficulty)
    {
      if (affectorAgent == null || !GameNetwork.IsServer || isBlocked || affectorAgent == affectedAgent || affectorAgent.MissionPeer == null || (double) damagedHp <= 0.0)
        return;
      affectedAgent.AddHitter(affectorAgent.MissionPeer, damagedHp, affectorAgent.IsFriendOf(affectedAgent));
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      base.OnAgentRemoved(affectedAgent, affectorAgent, agentState, killingBlow);
      if (!GameNetwork.IsServer || this.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.Ending || agentState != AgentState.Killed && agentState != AgentState.Unconscious && agentState != AgentState.Routed || affectedAgent == null || !affectedAgent.IsHuman)
        return;
      MissionPeer affectorPeer = affectorAgent?.MissionPeer ?? affectorAgent?.OwningAgentMissionPeer;
      MissionPeer assistorPeer = this.RemoveHittersAndGetAssistorPeer(affectorAgent?.MissionPeer, affectedAgent);
      if (affectedAgent.MissionPeer != null)
        this.OnPlayerDies(affectedAgent.MissionPeer, affectorPeer, assistorPeer);
      else
        this.OnBotDies(affectedAgent, affectorPeer, assistorPeer);
      if (affectorAgent == null || !affectorAgent.IsHuman)
        return;
      if (affectorAgent != affectedAgent)
      {
        if (affectorAgent.MissionPeer != null)
          this.OnPlayerKills(affectorAgent.MissionPeer, affectedAgent, assistorPeer);
        else
          this.OnBotKills(affectorAgent, affectedAgent);
      }
      else
      {
        if (affectorAgent.MissionPeer == null)
          return;
        affectorAgent.MissionPeer.Score -= (int) ((double) this._gameMode.GetScoreForKill(affectedAgent) * 1.5);
        this._missionScoreboardComponent.PlayerPropertiesChanged(affectorAgent.MissionPeer.GetNetworkPeer());
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new KillDeathCountChange(affectorAgent.MissionPeer.GetNetworkPeer(), affectedAgent.MissionPeer.GetNetworkPeer(), affectorAgent.MissionPeer.KillCount, affectorAgent.MissionPeer.AssistCount, affectorAgent.MissionPeer.DeathCount, affectorAgent.MissionPeer.Score));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
    }

    public override void OnAgentBuild(Agent agent, Banner banner)
    {
      if (!GameNetwork.IsServer || agent.IsMount || agent.MissionPeer != null)
        return;
      if (agent.OwningAgentMissionPeer != null)
      {
        ++agent.OwningAgentMissionPeer.BotsUnderControlAlive;
        ++agent.OwningAgentMissionPeer.BotsUnderControlTotal;
      }
      else
        ++this._missionScoreboardComponent.Sides[(int) agent.Team.Side].BotScores.AliveCount;
    }

    protected virtual void OnPlayerKills(
      MissionPeer killerPeer,
      Agent killedAgent,
      MissionPeer assistorPeer)
    {
      if (killedAgent.MissionPeer == null)
      {
        NetworkCommunicator networkPeer = GameNetwork.NetworkPeers.SingleOrDefault<NetworkCommunicator>((Func<NetworkCommunicator, bool>) (x => x.GetComponent<MissionPeer>() != null && x.GetComponent<MissionPeer>().ControlledFormation != null && x.GetComponent<MissionPeer>().ControlledFormation == killedAgent.Formation));
        if (networkPeer != null)
        {
          MissionPeer component = networkPeer.GetComponent<MissionPeer>();
          killerPeer.OnKillAnotherPeer(component);
        }
      }
      else
        killerPeer.OnKillAnotherPeer(killedAgent.MissionPeer);
      if (killerPeer.Team.IsEnemyOf(killedAgent.Team))
      {
        killerPeer.Score += this._gameMode.GetScoreForKill(killedAgent);
        ++killerPeer.KillCount;
      }
      else
      {
        killerPeer.Score -= (int) ((double) this._gameMode.GetScoreForKill(killedAgent) * 1.5);
        --killerPeer.KillCount;
      }
      this._missionScoreboardComponent.PlayerPropertiesChanged(killerPeer.GetNetworkPeer());
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new KillDeathCountChange(killerPeer.GetNetworkPeer(), (NetworkCommunicator) null, killerPeer.KillCount, killerPeer.AssistCount, killerPeer.DeathCount, killerPeer.Score));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
    }

    protected virtual void OnPlayerDies(
      MissionPeer peer,
      MissionPeer affectorPeer,
      MissionPeer assistorPeer)
    {
      if (assistorPeer != null)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new KillDeathCountChange(assistorPeer.GetNetworkPeer(), (NetworkCommunicator) null, assistorPeer.KillCount, assistorPeer.AssistCount, assistorPeer.DeathCount, assistorPeer.Score));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      ++peer.DeathCount;
      peer.SpawnTimer.Reset(Mission.Current.CurrentTime, (float) MissionLobbyComponent.GetSpawnPeriodDurationForPeer(peer));
      peer.WantsToSpawnAsBot = false;
      peer.HasSpawnTimerExpired = false;
      this._missionScoreboardComponent.PlayerPropertiesChanged(peer.GetNetworkPeer());
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new KillDeathCountChange(peer.GetNetworkPeer(), affectorPeer != null ? affectorPeer.GetNetworkPeer() : (NetworkCommunicator) null, peer.KillCount, peer.AssistCount, peer.DeathCount, peer.Score));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
    }

    protected virtual void OnBotKills(Agent botAgent, Agent killedAgent)
    {
      if (botAgent?.Team == null)
        return;
      if (botAgent.Formation?.PlayerOwner != null)
      {
        NetworkCommunicator networkCommunicator1 = GameNetwork.NetworkPeers.SingleOrDefault<NetworkCommunicator>((Func<NetworkCommunicator, bool>) (x => x.GetComponent<MissionPeer>() != null && x.GetComponent<MissionPeer>().ControlledFormation == botAgent.Formation));
        if (networkCommunicator1 != null)
        {
          MissionPeer component = networkCommunicator1.GetComponent<MissionPeer>();
          MissionPeer missionPeer = killedAgent.MissionPeer;
          NetworkCommunicator networkPeer1 = missionPeer != null ? missionPeer.GetNetworkPeer() : (NetworkCommunicator) null;
          if (killedAgent.MissionPeer == null)
          {
            NetworkCommunicator networkCommunicator2 = GameNetwork.NetworkPeers.SingleOrDefault<NetworkCommunicator>((Func<NetworkCommunicator, bool>) (x => x.GetComponent<MissionPeer>() != null && x.GetComponent<MissionPeer>().ControlledFormation == killedAgent.Formation));
            if (networkCommunicator2 != null)
            {
              NetworkCommunicator networkPeer2 = networkCommunicator2;
              component.OnKillAnotherPeer(networkPeer2.GetComponent<MissionPeer>());
            }
          }
          else
            component.OnKillAnotherPeer(killedAgent.MissionPeer);
          if (botAgent.Team.IsEnemyOf(killedAgent.Team))
          {
            ++component.KillCount;
            component.Score += this._gameMode.GetScoreForKill(killedAgent);
          }
          else
          {
            --component.KillCount;
            component.Score -= (int) ((double) this._gameMode.GetScoreForKill(killedAgent) * 1.5);
          }
          this._missionScoreboardComponent.PlayerPropertiesChanged(networkCommunicator1);
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new KillDeathCountChange(networkCommunicator1, (NetworkCommunicator) null, component.KillCount, component.AssistCount, component.DeathCount, component.Score));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
        }
      }
      else
      {
        MissionScoreboardComponent.MissionScoreboardSide sideSafe = this._missionScoreboardComponent.GetSideSafe(botAgent.Team.Side);
        BotData botScores = sideSafe.BotScores;
        if (botAgent.Team.IsEnemyOf(killedAgent.Team))
          ++botScores.KillCount;
        else
          --botScores.KillCount;
        this._missionScoreboardComponent.BotPropertiesChanged(sideSafe.Side);
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.BotData(sideSafe.Side, botScores.KillCount, botScores.AssistCount, botScores.DeathCount, botScores.AliveCount));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      this._missionScoreboardComponent.BotPropertiesChanged(botAgent.Team.Side);
    }

    protected virtual void OnBotDies(
      Agent botAgent,
      MissionPeer affectorPeer,
      MissionPeer assistorPeer)
    {
      if (assistorPeer != null)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new KillDeathCountChange(assistorPeer.GetNetworkPeer(), affectorPeer != null ? affectorPeer.GetNetworkPeer() : (NetworkCommunicator) null, assistorPeer.KillCount, assistorPeer.AssistCount, assistorPeer.DeathCount, assistorPeer.Score));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      if (botAgent == null)
        return;
      if (botAgent.Formation?.PlayerOwner != null)
      {
        NetworkCommunicator networkCommunicator = GameNetwork.NetworkPeers.SingleOrDefault<NetworkCommunicator>((Func<NetworkCommunicator, bool>) (x => x.GetComponent<MissionPeer>() != null && x.GetComponent<MissionPeer>().ControlledFormation == botAgent.Formation));
        if (networkCommunicator != null)
        {
          MissionPeer component = networkCommunicator.GetComponent<MissionPeer>();
          ++component.DeathCount;
          --component.BotsUnderControlAlive;
          this._missionScoreboardComponent.PlayerPropertiesChanged(networkCommunicator);
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new KillDeathCountChange(networkCommunicator, affectorPeer != null ? affectorPeer.GetNetworkPeer() : (NetworkCommunicator) null, component.KillCount, component.AssistCount, component.DeathCount, component.Score));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new BotsControlledChange(networkCommunicator, component.BotsUnderControlAlive, component.BotsUnderControlTotal));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
        }
      }
      else
      {
        MissionScoreboardComponent.MissionScoreboardSide sideSafe = this._missionScoreboardComponent.GetSideSafe(botAgent.Team.Side);
        BotData botScores = sideSafe.BotScores;
        ++botScores.DeathCount;
        --botScores.AliveCount;
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.BotData(sideSafe.Side, botScores.KillCount, botScores.AssistCount, botScores.DeathCount, botScores.AliveCount));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      this._missionScoreboardComponent.BotPropertiesChanged(botAgent.Team.Side);
    }

    public override void OnClearScene()
    {
      foreach (NetworkCommunicator disconnectedPeer in GameNetwork.NetworkPeersIncludingDisconnectedPeers)
      {
        MissionPeer component = disconnectedPeer.GetComponent<MissionPeer>();
        if (component != null)
        {
          component.BotsUnderControlAlive = 0;
          component.BotsUnderControlTotal = 0;
          component.ControlledFormation = (Formation) null;
        }
      }
    }

    public static int GetSpawnPeriodDurationForPeer(MissionPeer peer)
    {
      return Mission.Current.GetMissionBehavior<SpawnComponent>().GetMaximumReSpawnPeriodForPeer(peer);
    }

    public virtual void SetStateEndingAsServer()
    {
      this.CurrentMultiplayerState = MissionLobbyComponent.MultiplayerGameState.Ending;
      MBDebug.Print("Multiplayer game mission ending");
      this._timerComponent.StartTimerAsServer(MissionLobbyComponent.PostMatchWaitDuration);
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new MissionStateChange(this.CurrentMultiplayerState, this._timerComponent.GetCurrentTimerStartTime().NumberOfTicks));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      Debug.Print(string.Format("Current multiplayer state sent to clients: {0}", (object) this.CurrentMultiplayerState));
      Action onPostMatchEnded = this.OnPostMatchEnded;
      if (onPostMatchEnded == null)
        return;
      onPostMatchEnded();
    }

    private void SetStatePlayingAsServer()
    {
      this._warmupComponent = (MultiplayerWarmupComponent) null;
      this.CurrentMultiplayerState = MissionLobbyComponent.MultiplayerGameState.Playing;
      this._timerComponent.StartTimerAsServer((float) (MultiplayerOptions.OptionType.MapTimeLimit.GetIntValue() * 60));
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new MissionStateChange(this.CurrentMultiplayerState, this._timerComponent.GetCurrentTimerStartTime().NumberOfTicks));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
    }

    protected virtual void EndGameAsServer()
    {
    }

    private MissionPeer RemoveHittersAndGetAssistorPeer(MissionPeer killerPeer, Agent killedAgent)
    {
      Agent.Hitter assistingHitter = killedAgent.GetAssistingHitter(killerPeer);
      if (assistingHitter?.HitterPeer != null)
      {
        if (!assistingHitter.IsFriendlyHit)
          ++assistingHitter.HitterPeer.AssistCount;
        else
          --assistingHitter.HitterPeer.AssistCount;
      }
      return assistingHitter?.HitterPeer;
    }

    private void SetStateEndingAsClient()
    {
      Action onPostMatchEnded = this.OnPostMatchEnded;
      if (onPostMatchEnded == null)
        return;
      onPostMatchEnded();
    }

    public void RequestCultureSelection()
    {
      Action selectionRequested = this.OnCultureSelectionRequested;
      if (selectionRequested == null)
        return;
      selectionRequested();
    }

    public void RequestAdminMessage(string message, bool isBroadcast)
    {
      Action<string, bool> messageRequested = this.OnAdminMessageRequested;
      if (messageRequested == null)
        return;
      messageRequested(message, isBroadcast);
    }

    public void RequestTroopSelection()
    {
      if (GameNetwork.IsClient)
      {
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new RequestChangeCharacterMessage(GameNetwork.MyPeer));
        GameNetwork.EndModuleEventAsClient();
      }
      else
      {
        if (!GameNetwork.IsServer)
          return;
        MissionPeer component = GameNetwork.MyPeer.GetComponent<MissionPeer>();
        if (component == null || !this._gameMode.CheckIfPlayerCanDespawn(component))
          return;
        this.DespawnPlayer(component);
      }
    }

    public void OnCultureSelected(BasicCultureObject culture)
    {
      if (GameNetwork.IsClient)
      {
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new RequestCultureChange(culture));
        GameNetwork.EndModuleEventAsClient();
      }
      else
      {
        if (!GameNetwork.IsServer)
          return;
        MissionPeer component = GameNetwork.MyPeer.GetComponent<MissionPeer>();
        if (component == null || !this._gameMode.CheckIfPlayerCanDespawn(component))
          return;
        component.Culture = culture;
        this.DespawnPlayer(component);
      }
    }

    public MultiplayerGameType MissionType { get; set; }

    public MissionLobbyComponent.MultiplayerGameState CurrentMultiplayerState
    {
      get => this._currentMultiplayerState;
      private set
      {
        if (this._currentMultiplayerState == value)
          return;
        this._currentMultiplayerState = value;
        Action<MissionLobbyComponent.MultiplayerGameState> multiplayerStateChanged = this.CurrentMultiplayerStateChanged;
        if (multiplayerStateChanged == null)
          return;
        multiplayerStateChanged(value);
      }
    }

    public event Action<MissionLobbyComponent.MultiplayerGameState> CurrentMultiplayerStateChanged;

    public int GetRandomFaceSeedForCharacter(BasicCharacterObject character, int addition = 0)
    {
      BasicCharacterObject basicCharacterObject = character;
      int num = addition;
      IRoundComponent roundComponent = this._roundComponent;
      int roundCount = roundComponent != null ? roundComponent.RoundCount : 0;
      int rank = num + roundCount;
      return basicCharacterObject.GetDefaultFaceSeed(rank) % 2000;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("kill_player", "mp_host")]
    public static string MPHostChangeParam(List<string> strings)
    {
      if (Mission.Current == null)
        return "kill_player can only be called within a mission.";
      if (!GameNetwork.IsServer)
        return "kill_player can only be called by the server.";
      if (strings == null || strings.Count == 0)
        return "usage: kill_player {UserName}.";
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        if (networkPeer.UserName == strings[0] && networkPeer.ControlledAgent != null)
        {
          Mission.Current.KillAgentCheat(networkPeer.ControlledAgent);
          return "Success.";
        }
      }
      return "Could not find the player " + strings[0] + " or the agent.";
    }

    public enum MultiplayerGameState
    {
      WaitingFirstPlayers,
      Playing,
      Ending,
    }
  }
}
