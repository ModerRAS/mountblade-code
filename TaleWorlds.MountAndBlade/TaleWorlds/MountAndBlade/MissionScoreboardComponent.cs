// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionScoreboardComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionScoreboardComponent : MissionNetwork
  {
    private const int TotalSideCount = 2;
    private MissionLobbyComponent _missionLobbyComponent;
    private MissionNetworkComponent _missionNetworkComponent;
    private MissionMultiplayerGameModeBaseClient _mpGameModeBase;
    private IScoreboardData _scoreboardData;
    private List<MissionPeer> _spectators;
    private MissionScoreboardComponent.MissionScoreboardSide[] _sides;
    private bool _isInitialized;
    private List<BattleSideEnum> _roundWinnerList;
    private MissionScoreboardComponent.ScoreboardSides _scoreboardSides;
    private List<(MissionPeer, int)> _mvpCountPerPeer;

    public event Action OnRoundPropertiesChanged;

    public event Action<BattleSideEnum> OnBotPropertiesChanged;

    public event Action<Team, Team, MissionPeer> OnPlayerSideChanged;

    public event Action<BattleSideEnum, MissionPeer> OnPlayerPropertiesChanged;

    public event Action<MissionPeer, int> OnMVPSelected;

    public event Action OnScoreboardInitialized;

    public bool IsOneSided
    {
      get => this._scoreboardSides == MissionScoreboardComponent.ScoreboardSides.OneSide;
    }

    public BattleSideEnum RoundWinner
    {
      get
      {
        IRoundComponent roundComponent = this._mpGameModeBase.RoundComponent;
        return roundComponent == null ? BattleSideEnum.None : roundComponent.RoundWinner;
      }
    }

    public MissionScoreboardComponent.ScoreboardHeader[] Headers
    {
      get => this._scoreboardData.GetScoreboardHeaders();
    }

    public MissionScoreboardComponent(IScoreboardData scoreboardData)
    {
      this._scoreboardData = scoreboardData;
      this._spectators = new List<MissionPeer>();
      this._sides = new MissionScoreboardComponent.MissionScoreboardSide[2];
      this._roundWinnerList = new List<BattleSideEnum>();
      this._mvpCountPerPeer = new List<(MissionPeer, int)>();
    }

    public IEnumerable<BattleSideEnum> RoundWinnerList
    {
      get => (IEnumerable<BattleSideEnum>) this._roundWinnerList.AsReadOnly();
    }

    public MissionScoreboardComponent.MissionScoreboardSide[] Sides => this._sides;

    public List<MissionPeer> Spectators => this._spectators;

    public override void AfterStart()
    {
      this._spectators.Clear();
      this._missionLobbyComponent = this.Mission.GetMissionBehavior<MissionLobbyComponent>();
      this._missionNetworkComponent = this.Mission.GetMissionBehavior<MissionNetworkComponent>();
      this._mpGameModeBase = this.Mission.GetMissionBehavior<MissionMultiplayerGameModeBaseClient>();
      this._scoreboardSides = this._missionLobbyComponent.MissionType == MultiplayerGameType.FreeForAll || this._missionLobbyComponent.MissionType == MultiplayerGameType.Duel ? MissionScoreboardComponent.ScoreboardSides.OneSide : MissionScoreboardComponent.ScoreboardSides.TwoSides;
      MissionPeer.OnTeamChanged += new MissionPeer.OnTeamChangedDelegate(this.TeamChange);
      this._missionNetworkComponent.OnMyClientSynchronized += new Action(this.OnMyClientSynchronized);
      if (GameNetwork.IsServerOrRecorder && this._mpGameModeBase.RoundComponent != null)
      {
        this._mpGameModeBase.RoundComponent.OnRoundEnding += new Action(this.OnRoundEnding);
        this._mpGameModeBase.RoundComponent.OnPreRoundEnding += new Action(this.OnPreRoundEnding);
      }
      this.LateInitScoreboard();
    }

    protected override void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
      if (!GameNetwork.IsClient)
        return;
      registerer.RegisterBaseHandler<NetworkMessages.FromServer.UpdateRoundScores>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerUpdateRoundScoresMessage));
      registerer.RegisterBaseHandler<SetRoundMVP>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerSetRoundMVP));
      registerer.RegisterBaseHandler<NetworkMessages.FromServer.BotData>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventBotDataMessage));
    }

    public override void OnRemoveBehavior()
    {
      this._spectators.Clear();
      for (int index = 0; index < 2; ++index)
      {
        if (this._sides[index] != null)
          this._sides[index].Clear();
      }
      MissionPeer.OnTeamChanged -= new MissionPeer.OnTeamChangedDelegate(this.TeamChange);
      if (this._missionNetworkComponent != null)
        this._missionNetworkComponent.OnMyClientSynchronized -= new Action(this.OnMyClientSynchronized);
      if (GameNetwork.IsServerOrRecorder && this._mpGameModeBase.RoundComponent != null)
        this._mpGameModeBase.RoundComponent.OnRoundEnding -= new Action(this.OnRoundEnding);
      base.OnRemoveBehavior();
    }

    public void ResetBotScores()
    {
      foreach (MissionScoreboardComponent.MissionScoreboardSide side in this._sides)
      {
        if (side?.BotScores != null)
          side.BotScores.ResetKillDeathAssist();
      }
    }

    public void ChangeTeamScore(Team team, int scoreChange)
    {
      MissionScoreboardComponent.MissionScoreboardSide sideSafe = this.GetSideSafe(team.Side);
      sideSafe.SideScore += scoreChange;
      sideSafe.SideScore = MBMath.ClampInt(sideSafe.SideScore, -1023000, 1023000);
      if (GameNetwork.IsServer)
      {
        int sideScore = this._scoreboardSides != MissionScoreboardComponent.ScoreboardSides.OneSide ? this._sides[0].SideScore : 0;
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.UpdateRoundScores(this._sides[1].SideScore, sideScore));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      if (this.OnRoundPropertiesChanged == null)
        return;
      this.OnRoundPropertiesChanged();
    }

    private void UpdateRoundScores()
    {
      foreach (MissionScoreboardComponent.MissionScoreboardSide side in this._sides)
      {
        if (side != null && side.Side == this.RoundWinner)
        {
          this._roundWinnerList.Add(this.RoundWinner);
          if (this.RoundWinner != BattleSideEnum.None)
            ++this._sides[(int) this.RoundWinner].SideScore;
        }
      }
      if (this.OnRoundPropertiesChanged != null)
        this.OnRoundPropertiesChanged();
      if (!GameNetwork.IsServer)
        return;
      int sideScore = this._scoreboardSides != MissionScoreboardComponent.ScoreboardSides.OneSide ? this._sides[0].SideScore : 0;
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.UpdateRoundScores(this._sides[1].SideScore, sideScore));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
    }

    public MissionScoreboardComponent.MissionScoreboardSide GetSideSafe(BattleSideEnum battleSide)
    {
      return this._scoreboardSides == MissionScoreboardComponent.ScoreboardSides.OneSide ? this._sides[1] : this._sides[(int) battleSide];
    }

    public int GetRoundScore(BattleSideEnum side)
    {
      if (side <= (BattleSideEnum) this._sides.Length && side >= BattleSideEnum.Defender)
        return this.GetSideSafe(side).SideScore;
      Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MissionScoreboardComponent.cs", nameof (GetRoundScore), 463);
      return 0;
    }

    public void HandleServerUpdateRoundScoresMessage(GameNetworkMessage baseMessage)
    {
      NetworkMessages.FromServer.UpdateRoundScores updateRoundScores = (NetworkMessages.FromServer.UpdateRoundScores) baseMessage;
      this._sides[1].SideScore = updateRoundScores.AttackerTeamScore;
      if (this._scoreboardSides != MissionScoreboardComponent.ScoreboardSides.OneSide)
        this._sides[0].SideScore = updateRoundScores.DefenderTeamScore;
      if (this.OnRoundPropertiesChanged == null)
        return;
      this.OnRoundPropertiesChanged();
    }

    public void HandleServerSetRoundMVP(GameNetworkMessage baseMessage)
    {
      SetRoundMVP setRoundMvp = (SetRoundMVP) baseMessage;
      Action<MissionPeer, int> onMvpSelected = this.OnMVPSelected;
      if (onMvpSelected != null)
        onMvpSelected(setRoundMvp.MVPPeer.GetComponent<MissionPeer>(), setRoundMvp.MVPCount);
      this.PlayerPropertiesChanged(setRoundMvp.MVPPeer);
    }

    public void CalculateTotalNumbers()
    {
      foreach (MissionScoreboardComponent.MissionScoreboardSide side in this._sides)
      {
        if (side != null)
        {
          int deathCount = side.BotScores.DeathCount;
          int assistCount = side.BotScores.AssistCount;
          int killCount = side.BotScores.KillCount;
          foreach (MissionPeer player in side.Players)
          {
            assistCount += player.AssistCount;
            deathCount += player.DeathCount;
            killCount += player.KillCount;
          }
        }
      }
    }

    private void TeamChange(NetworkCommunicator player, Team oldTeam, Team nextTeam)
    {
      if (oldTeam == null && GameNetwork.VirtualPlayers[player.VirtualPlayer.Index] != player.VirtualPlayer)
      {
        Debug.Print("Ignoring team change call for {}, dced peer.", debugFilter: 17179869184UL);
      }
      else
      {
        MissionPeer component = player.GetComponent<MissionPeer>();
        if (oldTeam != null)
        {
          if (oldTeam == this.Mission.SpectatorTeam)
            this._spectators.Remove(component);
          else
            this.GetSideSafe(oldTeam.Side).RemovePlayer(component);
        }
        if (nextTeam != null)
        {
          if (nextTeam == this.Mission.SpectatorTeam)
          {
            this._spectators.Add(component);
          }
          else
          {
            Debug.Print(string.Format(">SBC => {0} is switching from {1} to {2}. Adding to scoreboard side {3}.", (object) player.UserName, oldTeam == null ? (object) "NULL" : (object) oldTeam.Side.ToString(), (object) nextTeam.Side.ToString(), (object) nextTeam.Side), color: Debug.DebugColor.Blue, debugFilter: 17179869184UL);
            this.GetSideSafe(nextTeam.Side).AddPlayer(component);
          }
        }
        if (this.OnPlayerSideChanged == null)
          return;
        this.OnPlayerSideChanged(oldTeam, nextTeam, component);
      }
    }

    public override void OnClearScene()
    {
      if (this._mpGameModeBase.RoundComponent == null && GameNetwork.IsServer)
        this.ClearSideScores();
      foreach (MissionScoreboardComponent.MissionScoreboardSide side in this.Sides)
      {
        if (side != null)
          side.BotScores.AliveCount = 0;
      }
    }

    public override void OnPlayerConnectedToServer(NetworkCommunicator networkPeer)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      if (component == null || component.Team == null)
        return;
      this.TeamChange(networkPeer, (Team) null, component.Team);
    }

    public override void OnPlayerDisconnectedFromServer(NetworkCommunicator networkPeer)
    {
      MissionPeer missionPeer = networkPeer.GetComponent<MissionPeer>();
      if (missionPeer == null)
        return;
      int num = this._spectators.Contains(missionPeer) ? 1 : 0;
      bool flag = ((IEnumerable<MissionScoreboardComponent.MissionScoreboardSide>) this._sides).Any<MissionScoreboardComponent.MissionScoreboardSide>((Func<MissionScoreboardComponent.MissionScoreboardSide, bool>) (x => x != null && x.Players.Contains<MissionPeer>(missionPeer)));
      if (num != 0)
      {
        this._spectators.Remove(missionPeer);
      }
      else
      {
        if (!flag)
          return;
        this.GetSideSafe(missionPeer.Team.Side).RemovePlayer(missionPeer);
        Formation controlledFormation = missionPeer.ControlledFormation;
        if (controlledFormation != null)
        {
          Team team = missionPeer.Team;
          this.Sides[(int) team.Side].BotScores.AliveCount += controlledFormation.GetCountOfUnitsWithCondition((Func<Agent, bool>) (agent => agent.IsActive()));
          this.BotPropertiesChanged(team.Side);
        }
        Action<Team, Team, MissionPeer> playerSideChanged = this.OnPlayerSideChanged;
        if (playerSideChanged == null)
          return;
        playerSideChanged(missionPeer.Team, (Team) null, missionPeer);
      }
    }

    private void BotsControlledChanged(NetworkCommunicator peer)
    {
      this.PlayerPropertiesChanged(peer);
    }

    public override void OnAgentBuild(Agent agent, Banner banner)
    {
      if (!agent.IsActive() || agent.IsMount)
        return;
      if (agent.MissionPeer == null)
      {
        this.BotPropertiesChanged(agent.Team.Side);
      }
      else
      {
        if (agent.MissionPeer == null)
          return;
        this.PlayerPropertiesChanged(agent.MissionPeer.GetNetworkPeer());
      }
    }

    public override void OnAssignPlayerAsSergeantOfFormation(Agent agent)
    {
      if (agent.MissionPeer == null)
        return;
      this.PlayerPropertiesChanged(agent.MissionPeer.GetNetworkPeer());
    }

    public void BotPropertiesChanged(BattleSideEnum side)
    {
      if (this.OnBotPropertiesChanged == null)
        return;
      this.OnBotPropertiesChanged(side);
    }

    public void PlayerPropertiesChanged(NetworkCommunicator player)
    {
      if (GameNetwork.IsDedicatedServer)
        return;
      MissionPeer component = player.GetComponent<MissionPeer>();
      if (component == null)
        return;
      this.PlayerPropertiesChanged(component);
    }

    public void PlayerPropertiesChanged(MissionPeer player)
    {
      if (GameNetwork.IsDedicatedServer)
        return;
      this.CalculateTotalNumbers();
      if (this.OnPlayerPropertiesChanged == null || player.Team == null || player.Team == Mission.Current.SpectatorTeam)
        return;
      this.OnPlayerPropertiesChanged(player.Team.Side, player);
    }

    protected override void HandleLateNewClientAfterSynchronized(NetworkCommunicator networkPeer)
    {
      networkPeer.GetComponent<MissionPeer>();
      foreach (MissionScoreboardComponent.MissionScoreboardSide side in this._sides)
      {
        if (side != null && !networkPeer.IsServerPeer)
        {
          if (side.BotScores.IsAnyValid)
          {
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.BotData(side.Side, side.BotScores.KillCount, side.BotScores.AssistCount, side.BotScores.DeathCount, side.BotScores.AliveCount));
            GameNetwork.EndModuleEventAsServer();
          }
          if (this._mpGameModeBase != null)
          {
            int sideScore = this._scoreboardSides != MissionScoreboardComponent.ScoreboardSides.OneSide ? this._sides[0].SideScore : 0;
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.UpdateRoundScores(this._sides[1].SideScore, sideScore));
            GameNetwork.EndModuleEventAsServer();
          }
        }
      }
      if (networkPeer.IsServerPeer || this._mvpCountPerPeer == null)
        return;
      foreach ((MissionPeer, int) tuple in this._mvpCountPerPeer)
      {
        GameNetwork.BeginModuleEventAsServer(networkPeer);
        GameNetwork.WriteMessage((GameNetworkMessage) new SetRoundMVP(tuple.Item1.GetNetworkPeer(), tuple.Item2));
        GameNetwork.EndModuleEventAsServer();
      }
    }

    public void HandleServerEventBotDataMessage(GameNetworkMessage baseMessage)
    {
      NetworkMessages.FromServer.BotData botData = (NetworkMessages.FromServer.BotData) baseMessage;
      MissionScoreboardComponent.MissionScoreboardSide sideSafe = this.GetSideSafe(botData.Side);
      sideSafe.BotScores.KillCount = botData.KillCount;
      sideSafe.BotScores.AssistCount = botData.AssistCount;
      sideSafe.BotScores.DeathCount = botData.DeathCount;
      sideSafe.BotScores.AliveCount = botData.AliveBotCount;
      this.BotPropertiesChanged(botData.Side);
    }

    private void ClearSideScores()
    {
      this._sides[1].SideScore = 0;
      if (this._scoreboardSides == MissionScoreboardComponent.ScoreboardSides.TwoSides)
        this._sides[0].SideScore = 0;
      if (GameNetwork.IsServer)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.UpdateRoundScores(0, 0));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      if (this.OnRoundPropertiesChanged == null)
        return;
      this.OnRoundPropertiesChanged();
    }

    public void OnRoundEnding()
    {
      if (!GameNetwork.IsServerOrRecorder)
        return;
      this.UpdateRoundScores();
    }

    private void OnMyClientSynchronized() => this.LateInitializeHeaders();

    private void LateInitScoreboard()
    {
      this._sides[1] = new MissionScoreboardComponent.MissionScoreboardSide(BattleSideEnum.Attacker);
      this._sides[1].BotScores = new BotData();
      if (this._scoreboardSides != MissionScoreboardComponent.ScoreboardSides.TwoSides)
        return;
      this._sides[0] = new MissionScoreboardComponent.MissionScoreboardSide(BattleSideEnum.Defender);
      this._sides[0].BotScores = new BotData();
    }

    private void LateInitializeHeaders()
    {
      if (this._isInitialized)
        return;
      this._isInitialized = true;
      foreach (MissionScoreboardComponent.MissionScoreboardSide side in this._sides)
        side?.UpdateHeader(this.Headers);
      if (this.OnScoreboardInitialized == null)
        return;
      this.OnScoreboardInitialized();
    }

    public void OnMultiplayerGameClientBehaviorInitialized(
      ref Action<NetworkCommunicator> onBotsControlledChanged)
    {
      onBotsControlledChanged += new Action<NetworkCommunicator>(this.BotsControlledChanged);
    }

    public BattleSideEnum GetMatchWinnerSide()
    {
      List<int> scores = new List<int>();
      KeyValuePair<BattleSideEnum, int> keyValuePair = new KeyValuePair<BattleSideEnum, int>(BattleSideEnum.None, -1);
      for (int index = 0; index < 2; ++index)
      {
        BattleSideEnum battleSideEnum = (BattleSideEnum) index;
        MissionScoreboardComponent.MissionScoreboardSide sideSafe = this.GetSideSafe(battleSideEnum);
        if (sideSafe.SideScore > keyValuePair.Value && sideSafe.CurrentPlayerCount > 0)
          keyValuePair = new KeyValuePair<BattleSideEnum, int>(battleSideEnum, sideSafe.SideScore);
        scores.Add(sideSafe.SideScore);
      }
      return !scores.IsEmpty<int>() && scores.All<int>((Func<int, bool>) (s => s == scores[0])) ? BattleSideEnum.None : keyValuePair.Key;
    }

    private void OnPreRoundEnding()
    {
      if (!GameNetwork.IsServer)
        return;
      KeyValuePair<MissionPeer, int> keyValuePair1;
      KeyValuePair<MissionPeer, int> keyValuePair2;
      foreach (MissionScoreboardComponent.MissionScoreboardSide side in this.Sides)
      {
        if (side.Side == BattleSideEnum.Attacker)
        {
          KeyValuePair<MissionPeer, int> mvpScoreWithPeer = side.CalculateAndGetMVPScoreWithPeer();
          if (keyValuePair1.Key == null || keyValuePair1.Value < mvpScoreWithPeer.Value)
            keyValuePair1 = mvpScoreWithPeer;
        }
        else if (side.Side == BattleSideEnum.Defender)
        {
          KeyValuePair<MissionPeer, int> mvpScoreWithPeer = side.CalculateAndGetMVPScoreWithPeer();
          if (keyValuePair2.Key == null || keyValuePair2.Value < mvpScoreWithPeer.Value)
            keyValuePair2 = mvpScoreWithPeer;
        }
      }
      if (keyValuePair1.Key != null)
        this.SetPeerAsMVP(keyValuePair1.Key);
      if (keyValuePair2.Key == null)
        return;
      this.SetPeerAsMVP(keyValuePair2.Key);
    }

    private void SetPeerAsMVP(MissionPeer peer)
    {
      int index1 = -1;
      for (int index2 = 0; index2 < this._mvpCountPerPeer.Count; ++index2)
      {
        if (peer == this._mvpCountPerPeer[index2].Item1)
        {
          index1 = index2;
          break;
        }
      }
      int mvpCount = 1;
      if (index1 != -1)
      {
        mvpCount = this._mvpCountPerPeer[index1].Item2 + 1;
        this._mvpCountPerPeer.RemoveAt(index1);
      }
      this._mvpCountPerPeer.Add((peer, mvpCount));
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new SetRoundMVP(peer.GetNetworkPeer(), mvpCount));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      Action<MissionPeer, int> onMvpSelected = this.OnMVPSelected;
      if (onMvpSelected == null)
        return;
      onMvpSelected(peer, mvpCount);
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
      if (affectorAgent == null || !GameNetwork.IsServer || isBlocked || (double) damagedHp <= 0.0)
        return;
      if (affectorAgent.IsMount)
        affectorAgent = affectorAgent.RiderAgent;
      if (affectorAgent == null)
        return;
      MissionPeer peerComponent = affectorAgent.MissionPeer ?? (!affectorAgent.IsAIControlled || affectorAgent.OwningAgentMissionPeer == null ? (MissionPeer) null : affectorAgent.OwningAgentMissionPeer);
      if (peerComponent == null)
        return;
      int num = (int) damagedHp;
      if (affectedAgent.IsMount)
      {
        num = (int) ((double) damagedHp * 0.34999999403953552);
        affectedAgent = affectedAgent.RiderAgent;
      }
      if (affectedAgent == null || affectorAgent == affectedAgent)
        return;
      if (!affectorAgent.IsFriendOf(affectedAgent))
        peerComponent.Score += num;
      else
        peerComponent.Score -= (int) ((double) num * 1.5);
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new KillDeathCountChange(peerComponent.GetNetworkPeer(), (NetworkCommunicator) null, peerComponent.KillCount, peerComponent.AssistCount, peerComponent.DeathCount, peerComponent.Score));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
    }

    private enum ScoreboardSides
    {
      OneSide,
      TwoSides,
    }

    public struct ScoreboardHeader
    {
      private readonly Func<MissionPeer, string> _playerGetterFunc;
      private readonly Func<BotData, string> _botGetterFunc;
      public readonly string Id;
      public readonly TextObject Name;

      public ScoreboardHeader(
        string id,
        Func<MissionPeer, string> playerGetterFunc,
        Func<BotData, string> botGetterFunc)
      {
        this.Id = id;
        this.Name = GameTexts.FindText("str_scoreboard_header", id);
        this._playerGetterFunc = playerGetterFunc;
        this._botGetterFunc = botGetterFunc;
      }

      public string GetValueOf(MissionPeer missionPeer)
      {
        if (missionPeer != null)
        {
          if (this._playerGetterFunc != null)
          {
            try
            {
              return this._playerGetterFunc(missionPeer);
            }
            catch (Exception ex)
            {
              Debug.FailedAssert(string.Format("An error occured while trying to get scoreboard value ({0}) for peer: {1}. Exception: {2}", (object) this.Id, (object) missionPeer.Name, (object) ex.InnerException), "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MissionScoreboardComponent.cs", nameof (GetValueOf), 53);
              return string.Empty;
            }
          }
        }
        Debug.FailedAssert("Scoreboard header values are invalid: Peer: " + (missionPeer?.ToString() ?? "NULL") + " Getter: " + (this._playerGetterFunc?.ToString() ?? "NULL"), "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MissionScoreboardComponent.cs", nameof (GetValueOf), 43);
        return string.Empty;
      }

      public string GetValueOf(BotData botData)
      {
        if (botData != null)
        {
          if (this._botGetterFunc != null)
          {
            try
            {
              return this._botGetterFunc(botData);
            }
            catch (Exception ex)
            {
              Debug.FailedAssert(string.Format("An error occured while trying to get scoreboard value ({0}) for a bot. Exception: {1}", (object) this.Id, (object) ex.InnerException), "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MissionScoreboardComponent.cs", nameof (GetValueOf), 72);
              return string.Empty;
            }
          }
        }
        Debug.FailedAssert("Scoreboard header values are invalid: Bot Data: " + (botData?.ToString() ?? "NULL") + " Getter: " + (this._botGetterFunc?.ToString() ?? "NULL"), "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MissionScoreboardComponent.cs", nameof (GetValueOf), 62);
        return string.Empty;
      }
    }

    public class MissionScoreboardSide
    {
      public readonly BattleSideEnum Side;
      private MissionScoreboardComponent.ScoreboardHeader[] _properties;
      public BotData BotScores;
      public int SideScore;
      private List<MissionPeer> _players;
      private List<int> _playerLastRoundScoreMap;

      public int CurrentPlayerCount => this._players.Count;

      public IEnumerable<MissionPeer> Players => (IEnumerable<MissionPeer>) this._players;

      public MissionScoreboardSide(BattleSideEnum side)
      {
        this.Side = side;
        this._players = new List<MissionPeer>();
        this._playerLastRoundScoreMap = new List<int>();
      }

      public void AddPlayer(MissionPeer peer)
      {
        if (this._players.Contains(peer))
          return;
        this._players.Add(peer);
        this._playerLastRoundScoreMap.Add(0);
      }

      public void RemovePlayer(MissionPeer peer)
      {
        for (int index = 0; index < this._players.Count; ++index)
        {
          if (this._players[index] == peer)
          {
            this._players.RemoveAt(index);
            this._playerLastRoundScoreMap.RemoveAt(index);
            break;
          }
        }
      }

      public string[] GetValuesOf(MissionPeer peer)
      {
        if (this._properties == null)
          return new string[0];
        string[] valuesOf = new string[this._properties.Length];
        if (peer == null)
        {
          for (int index = 0; index < this._properties.Length; ++index)
            valuesOf[index] = this._properties[index].GetValueOf(this.BotScores);
          return valuesOf;
        }
        for (int index = 0; index < this._properties.Length; ++index)
          valuesOf[index] = this._properties[index].GetValueOf(peer);
        return valuesOf;
      }

      public string[] GetHeaderNames()
      {
        if (this._properties == null)
          return new string[0];
        string[] headerNames = new string[this._properties.Length];
        for (int index = 0; index < this._properties.Length; ++index)
          headerNames[index] = this._properties[index].Name.ToString();
        return headerNames;
      }

      public string[] GetHeaderIds()
      {
        if (this._properties == null)
          return new string[0];
        string[] headerIds = new string[this._properties.Length];
        for (int index = 0; index < this._properties.Length; ++index)
          headerIds[index] = this._properties[index].Id;
        return headerIds;
      }

      public int GetScore(MissionPeer peer)
      {
        if (this._properties == null)
          return 0;
        string s = peer != null ? (!((IEnumerable<MissionScoreboardComponent.ScoreboardHeader>) this._properties).Any<MissionScoreboardComponent.ScoreboardHeader>((Func<MissionScoreboardComponent.ScoreboardHeader, bool>) (p => p.Id == "score")) ? string.Empty : ((IEnumerable<MissionScoreboardComponent.ScoreboardHeader>) this._properties).Single<MissionScoreboardComponent.ScoreboardHeader>((Func<MissionScoreboardComponent.ScoreboardHeader, bool>) (x => x.Id == "score")).GetValueOf(peer)) : (!((IEnumerable<MissionScoreboardComponent.ScoreboardHeader>) this._properties).Any<MissionScoreboardComponent.ScoreboardHeader>((Func<MissionScoreboardComponent.ScoreboardHeader, bool>) (p => p.Id == "score")) ? string.Empty : ((IEnumerable<MissionScoreboardComponent.ScoreboardHeader>) this._properties).FirstOrDefault<MissionScoreboardComponent.ScoreboardHeader>((Func<MissionScoreboardComponent.ScoreboardHeader, bool>) (x => x.Id == "score")).GetValueOf(this.BotScores));
        int result = 0;
        int.TryParse(s, out result);
        return result;
      }

      public void UpdateHeader(
        MissionScoreboardComponent.ScoreboardHeader[] headers)
      {
        this._properties = headers;
      }

      public void Clear() => this._players.Clear();

      public KeyValuePair<MissionPeer, int> CalculateAndGetMVPScoreWithPeer()
      {
        KeyValuePair<MissionPeer, int> mvpScoreWithPeer = new KeyValuePair<MissionPeer, int>();
        for (int index = 0; index < this._players.Count; ++index)
        {
          int num = this._players[index].Score - this._playerLastRoundScoreMap[index];
          this._playerLastRoundScoreMap[index] = this._players[index].Score;
          if (mvpScoreWithPeer.Key == null || mvpScoreWithPeer.Value < num)
            mvpScoreWithPeer = new KeyValuePair<MissionPeer, int>(this._players[index], num);
        }
        return mvpScoreWithPeer;
      }
    }
  }
}
