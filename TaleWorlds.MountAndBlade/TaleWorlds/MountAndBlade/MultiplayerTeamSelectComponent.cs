// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerTeamSelectComponent
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
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;
using TaleWorlds.PlatformService;
using TaleWorlds.PlayerServices;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerTeamSelectComponent : MissionNetwork
  {
    private MissionNetworkComponent _missionNetworkComponent;
    private MissionMultiplayerGameModeBase _gameModeServer;
    private HashSet<PlayerId> _platformFriends;
    private Dictionary<Team, IEnumerable<VirtualPlayer>> _friendsPerTeam;

    public event MultiplayerTeamSelectComponent.OnSelectingTeamDelegate OnSelectingTeam;

    public event Action OnMyTeamChange;

    public event Action OnUpdateTeams;

    public event Action OnUpdateFriendsPerTeam;

    public bool TeamSelectionEnabled { get; private set; }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._missionNetworkComponent = this.Mission.GetMissionBehavior<MissionNetworkComponent>();
      this._gameModeServer = this.Mission.GetMissionBehavior<MissionMultiplayerGameModeBase>();
      if (BannerlordNetwork.LobbyMissionType == LobbyMissionType.Matchmaker)
        this.TeamSelectionEnabled = false;
      else
        this.TeamSelectionEnabled = true;
    }

    protected override void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
      if (!GameNetwork.IsServer)
        return;
      registerer.RegisterBaseHandler<TeamChange>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventTeamChange));
    }

    private void OnMyClientSynchronized()
    {
      this.Mission.GetMissionBehavior<MissionNetworkComponent>().OnMyClientSynchronized -= new Action(this.OnMyClientSynchronized);
      if (Mission.Current.GetMissionBehavior<MissionLobbyComponent>().CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.Ending || GameNetwork.MyPeer.GetComponent<MissionPeer>().Team != null)
        return;
      this.SelectTeam();
    }

    public override void AfterStart()
    {
      this._platformFriends = new HashSet<PlayerId>();
      foreach (PlayerId friendsInAllPlatform in FriendListService.GetAllFriendsInAllPlatforms())
        this._platformFriends.Add(friendsInAllPlatform);
      this._friendsPerTeam = new Dictionary<Team, IEnumerable<VirtualPlayer>>();
      MissionPeer.OnTeamChanged += new MissionPeer.OnTeamChangedDelegate(this.UpdateTeams);
      if (!GameNetwork.IsClient)
        return;
      MissionNetworkComponent missionBehavior = this.Mission.GetMissionBehavior<MissionNetworkComponent>();
      if (!this.TeamSelectionEnabled)
        return;
      missionBehavior.OnMyClientSynchronized += new Action(this.OnMyClientSynchronized);
    }

    public override void OnRemoveBehavior()
    {
      MissionPeer.OnTeamChanged -= new MissionPeer.OnTeamChangedDelegate(this.UpdateTeams);
      this.OnMyTeamChange = (Action) null;
      base.OnRemoveBehavior();
    }

    private bool HandleClientEventTeamChange(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      TeamChange teamChange = (TeamChange) baseMessage;
      if (this.TeamSelectionEnabled)
      {
        if (teamChange.AutoAssign)
        {
          this.AutoAssignTeam(peer);
        }
        else
        {
          Team teamFromTeamIndex = Mission.MissionNetworkHelper.GetTeamFromTeamIndex(teamChange.TeamIndex);
          this.ChangeTeamServer(peer, teamFromTeamIndex);
        }
      }
      return true;
    }

    public void SelectTeam()
    {
      if (this.OnSelectingTeam == null)
        return;
      this.OnSelectingTeam(this.GetDisabledTeams());
    }

    public void UpdateTeams(NetworkCommunicator peer, Team oldTeam, Team newTeam)
    {
      if (this.OnUpdateTeams != null)
        this.OnUpdateTeams();
      if (GameNetwork.IsMyPeerReady)
        this.CacheFriendsForTeams();
      if (newTeam.Side == BattleSideEnum.None)
        return;
      MissionPeer component = peer.GetComponent<MissionPeer>();
      component.SelectedTroopIndex = 0;
      component.NextSelectedTroopIndex = 0;
      component.OverrideCultureWithTeamCulture();
    }

    public List<Team> GetDisabledTeams()
    {
      List<Team> disabledTeams = new List<Team>();
      if (MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.GetIntValue() == 0)
        return disabledTeams;
      Team myTeam = GameNetwork.IsMyPeerReady ? GameNetwork.MyPeer.GetComponent<MissionPeer>().Team : (Team) null;
      Team[] array = this.Mission.Teams.Where<Team>((Func<Team, bool>) (q => q != this.Mission.SpectatorTeam)).OrderBy<Team, int>((Func<Team, int>) (q => myTeam != null && q == myTeam ? this.GetPlayerCountForTeam(q) - 1 : this.GetPlayerCountForTeam(q))).ToArray<Team>();
      foreach (Team team in array)
      {
        int playerCountForTeam1 = this.GetPlayerCountForTeam(team);
        int playerCountForTeam2 = this.GetPlayerCountForTeam(array[0]);
        if (myTeam == team)
          --playerCountForTeam1;
        if (myTeam == array[0])
          --playerCountForTeam2;
        if (playerCountForTeam1 - playerCountForTeam2 >= MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.GetIntValue())
          disabledTeams.Add(team);
      }
      return disabledTeams;
    }

    public void ChangeTeamServer(NetworkCommunicator networkPeer, Team team)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      Team team1 = component.Team;
      if (team1 != null && team1 != this.Mission.SpectatorTeam && team1 != team && component.ControlledAgent != null)
        component.ControlledAgent.Die(new Blow(component.ControlledAgent.Index)
        {
          DamageType = DamageTypes.Invalid,
          BaseMagnitude = 10000f,
          GlobalPosition = component.ControlledAgent.Position,
          DamagedPercentage = 1f
        }, Agent.KillInfo.TeamSwitch);
      component.Team = team;
      BasicCultureObject basicCultureObject = component.Team.IsAttacker ? MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam1.GetStrValue()) : MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam2.GetStrValue());
      component.Culture = basicCultureObject;
      if (team != team1)
      {
        if (component.HasSpawnedAgentVisuals)
        {
          component.HasSpawnedAgentVisuals = false;
          MBDebug.Print("HasSpawnedAgentVisuals = false for peer: " + component.Name + " because he just changed his team");
          component.SpawnCountThisRound = 0;
          Mission.Current.GetMissionBehavior<MultiplayerMissionAgentVisualSpawnComponent>().RemoveAgentVisuals(component, true);
          if (GameNetwork.IsServerOrRecorder)
          {
            GameNetwork.BeginBroadcastModuleEvent();
            GameNetwork.WriteMessage((GameNetworkMessage) new RemoveAgentVisualsForPeer(component.GetNetworkPeer()));
            GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
          }
          component.HasSpawnedAgentVisuals = false;
        }
        if (!this._gameModeServer.IsGameModeHidingAllAgentVisuals && !networkPeer.IsServerPeer)
          this._missionNetworkComponent?.OnPeerSelectedTeam(component);
        this._gameModeServer.OnPeerChangedTeam(networkPeer, team1, team);
        component.SpawnTimer.Reset(Mission.Current.CurrentTime, 0.1f);
        component.WantsToSpawnAsBot = false;
        component.HasSpawnTimerExpired = false;
      }
      this.UpdateTeams(networkPeer, team1, team);
    }

    public void ChangeTeam(Team team)
    {
      if (team == GameNetwork.MyPeer.GetComponent<MissionPeer>().Team)
        return;
      if (GameNetwork.IsServer)
      {
        Mission.Current.PlayerTeam = team;
        this.ChangeTeamServer(GameNetwork.MyPeer, team);
      }
      else
      {
        foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
          networkPeer.GetComponent<MissionPeer>()?.ClearAllVisuals();
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new TeamChange(false, team.TeamIndex));
        GameNetwork.EndModuleEventAsClient();
      }
      if (this.OnMyTeamChange == null)
        return;
      this.OnMyTeamChange();
    }

    public int GetPlayerCountForTeam(Team team)
    {
      int playerCountForTeam = 0;
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        MissionPeer component = networkPeer.GetComponent<MissionPeer>();
        if (component?.Team != null && component.Team == team)
          ++playerCountForTeam;
      }
      return playerCountForTeam;
    }

    private void CacheFriendsForTeams()
    {
      this._friendsPerTeam.Clear();
      if (this._platformFriends.Count <= 0)
        return;
      List<MissionPeer> source = new List<MissionPeer>();
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        MissionPeer component = networkPeer.GetComponent<MissionPeer>();
        if (component != null && this._platformFriends.Contains(networkPeer.VirtualPlayer.Id))
          source.Add(component);
      }
      foreach (Team team1 in (List<Team>) this.Mission.Teams)
      {
        Team team = team1;
        if (team != null)
          this._friendsPerTeam.Add(team, source.Where<MissionPeer>((Func<MissionPeer, bool>) (x => x.Team == team)).Select<MissionPeer, VirtualPlayer>((Func<MissionPeer, VirtualPlayer>) (x => x.Peer)));
      }
      if (this.OnUpdateFriendsPerTeam == null)
        return;
      this.OnUpdateFriendsPerTeam();
    }

    public IEnumerable<VirtualPlayer> GetFriendsForTeam(Team team)
    {
      return this._friendsPerTeam.ContainsKey(team) ? this._friendsPerTeam[team] : (IEnumerable<VirtualPlayer>) new List<VirtualPlayer>();
    }

    public void BalanceTeams()
    {
      if (MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.GetIntValue() == 0)
        return;
      int playerCountForTeam1 = this.GetPlayerCountForTeam(Mission.Current.AttackerTeam);
      int playerCountForTeam2;
      for (playerCountForTeam2 = this.GetPlayerCountForTeam(Mission.Current.DefenderTeam); playerCountForTeam1 > playerCountForTeam2 + MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.GetIntValue(); ++playerCountForTeam2)
      {
        MissionPeer peerComponent = (MissionPeer) null;
        foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
        {
          if (networkPeer.IsSynchronized)
          {
            MissionPeer component = networkPeer.GetComponent<MissionPeer>();
            if (component?.Team != null && component.Team == this.Mission.AttackerTeam && (peerComponent == null || component.JoinTime >= peerComponent.JoinTime))
              peerComponent = component;
          }
        }
        this.ChangeTeamServer(peerComponent.GetNetworkPeer(), Mission.Current.DefenderTeam);
        --playerCountForTeam1;
      }
      for (; playerCountForTeam2 > playerCountForTeam1 + MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.GetIntValue(); --playerCountForTeam2)
      {
        MissionPeer peerComponent = (MissionPeer) null;
        foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
        {
          if (networkPeer.IsSynchronized)
          {
            MissionPeer component = networkPeer.GetComponent<MissionPeer>();
            if (component?.Team != null && component.Team == this.Mission.DefenderTeam && (peerComponent == null || component.JoinTime >= peerComponent.JoinTime))
              peerComponent = component;
          }
        }
        this.ChangeTeamServer(peerComponent.GetNetworkPeer(), Mission.Current.AttackerTeam);
        ++playerCountForTeam1;
      }
    }

    public void AutoAssignTeam(NetworkCommunicator peer)
    {
      if (GameNetwork.IsServer)
      {
        List<Team> disabledTeams = this.GetDisabledTeams();
        List<Team> list = this.Mission.Teams.Where<Team>((Func<Team, bool>) (x => !disabledTeams.Contains(x) && x.Side != BattleSideEnum.None)).ToList<Team>();
        Team team;
        if (list.Count > 1)
        {
          int[] numArray = new int[list.Count];
          foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
          {
            MissionPeer component = networkPeer.GetComponent<MissionPeer>();
            if (component?.Team != null)
            {
              for (int index = 0; index < list.Count; ++index)
              {
                if (component.Team == list[index])
                  ++numArray[index];
              }
            }
          }
          int num = -1;
          int index1 = -1;
          for (int index2 = 0; index2 < numArray.Length; ++index2)
          {
            if (index1 < 0 || numArray[index2] < num)
            {
              index1 = index2;
              num = numArray[index2];
            }
          }
          team = list[index1];
        }
        else
          team = list[0];
        if (!peer.IsMine)
          this.ChangeTeamServer(peer, team);
        else
          this.ChangeTeam(team);
      }
      else
      {
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new TeamChange(true, -1));
        GameNetwork.EndModuleEventAsClient();
        if (this.OnMyTeamChange == null)
          return;
        this.OnMyTeamChange();
      }
    }

    public delegate void OnSelectingTeamDelegate(List<Team> disableTeams);
  }
}
