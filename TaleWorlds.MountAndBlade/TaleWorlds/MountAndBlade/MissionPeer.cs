// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionPeer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromClient;
using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Diamond;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionPeer : PeerComponent
  {
    public const int NumberOfPerkLists = 3;
    public const int MaxNumberOfTroopTypesPerCulture = 16;
    private const float InactivityKickInSeconds = 180f;
    private const float InactivityWarnInSeconds = 120f;
    public const int MinKDACount = -1000;
    public const int MaxKDACount = 100000;
    public const int MinScore = -1000000;
    public const int MaxScore = 1000000;
    public const int MinSpawnTimer = 3;
    public int CaptainBeingDetachedThreshold = 125;
    private List<PeerVisualsHolder> _visuals = new List<PeerVisualsHolder>();
    private Dictionary<MissionPeer, int> _numberOfTimesPeerKilledPerPeer = new Dictionary<MissionPeer, int>();
    private MissionTime _lastActiveTime = MissionTime.Zero;
    private (Agent.MovementControlFlag, Vec2, Vec3) _previousActivityStatus;
    private bool _inactiveWarningGiven;
    private int _selectedTroopIndex;
    private Agent _followedAgent;
    private Team _team;
    private BasicCultureObject _culture;
    private Formation _controlledFormation;
    private MissionRepresentativeBase _representative;
    private readonly MBList<int[]> _perks;
    private int _killCount;
    private int _assistCount;
    private int _deathCount;
    private int _score;
    private (int, MBList<MPPerkObject>) _selectedPerks;
    private int _botsUnderControlAlive;

    public static event MissionPeer.OnUpdateEquipmentSetIndexEventDelegate OnEquipmentIndexRefreshed;

    public static event MissionPeer.OnPerkUpdateEventDelegate OnPerkSelectionUpdated;

    public static event MissionPeer.OnTeamChangedDelegate OnPreTeamChanged;

    public static event MissionPeer.OnTeamChangedDelegate OnTeamChanged;

    private event MissionPeer.OnCultureChangedDelegate OnCultureChanged;

    public static event MissionPeer.OnPlayerKilledDelegate OnPlayerKilled;

    public DateTime JoinTime { get; internal set; }

    public bool EquipmentUpdatingExpired { get; set; }

    public bool TeamInitialPerkInfoReady { get; private set; }

    public bool HasSpawnedAgentVisuals { get; set; }

    public int SelectedTroopIndex
    {
      get => this._selectedTroopIndex;
      set
      {
        if (this._selectedTroopIndex == value)
          return;
        this._selectedTroopIndex = value;
        this.ResetSelectedPerks();
        MissionPeer.OnUpdateEquipmentSetIndexEventDelegate equipmentIndexRefreshed = MissionPeer.OnEquipmentIndexRefreshed;
        if (equipmentIndexRefreshed == null)
          return;
        equipmentIndexRefreshed(this, value);
      }
    }

    public int NextSelectedTroopIndex { get; set; }

    public MissionRepresentativeBase Representative
    {
      get
      {
        if (this._representative == null)
          this._representative = this.Peer.GetComponent<MissionRepresentativeBase>();
        return this._representative;
      }
    }

    public MBReadOnlyList<int[]> Perks => (MBReadOnlyList<int[]>) this._perks;

    public string DisplayedName
    {
      get
      {
        if (GameNetwork.IsDedicatedServer)
          return this.Name;
        if (NetworkMain.CommunityClient.IsInGame)
          return this.Name;
        if (NetworkMain.GameClient.HasUserGeneratedContentPrivilege && (NetworkMain.GameClient.IsKnownPlayer(this.Peer.Id) || !BannerlordConfig.EnableGenericNames))
          return this.Peer?.UserName ?? "";
        return this.Culture == null || MultiplayerClassDivisions.GetMPHeroClassForPeer(this) == null ? new TextObject("{=RN6zHak0}Player").ToString() : MultiplayerClassDivisions.GetMPHeroClassForPeer(this).TroopName.ToString();
      }
    }

    public MBReadOnlyList<MPPerkObject> SelectedPerks
    {
      get
      {
        if (this.SelectedTroopIndex < 0 || this.Team == null || this.Team.Side == BattleSideEnum.None)
          return (MBReadOnlyList<MPPerkObject>) new MBList<MPPerkObject>();
        return (this._selectedPerks.Item2 == null || this.SelectedTroopIndex != this._selectedPerks.Item1 || this._selectedPerks.Item2.Count < 3) && !this.RefreshSelectedPerks() ? new MBReadOnlyList<MPPerkObject>() : (MBReadOnlyList<MPPerkObject>) this._selectedPerks.Item2;
      }
    }

    public MissionPeer()
    {
      this.SpawnTimer = new Timer(Mission.Current.CurrentTime, 3f, false);
      this._selectedPerks = (0, (MBList<MPPerkObject>) null);
      this._perks = new MBList<int[]>();
      for (int index = 0; index < 16; ++index)
        this._perks.Add(new int[3]);
    }

    public Timer SpawnTimer { get; internal set; }

    public bool HasSpawnTimerExpired { get; set; }

    public BasicCultureObject VotedForBan { get; private set; }

    public BasicCultureObject VotedForSelection { get; private set; }

    public bool WantsToSpawnAsBot { get; set; }

    public int SpawnCountThisRound { get; set; }

    public int RequestedKickPollCount { get; private set; }

    public int KillCount
    {
      get => this._killCount;
      internal set => this._killCount = MBMath.ClampInt(value, -1000, 100000);
    }

    public int AssistCount
    {
      get => this._assistCount;
      internal set => this._assistCount = MBMath.ClampInt(value, -1000, 100000);
    }

    public int DeathCount
    {
      get => this._deathCount;
      internal set => this._deathCount = MBMath.ClampInt(value, -1000, 100000);
    }

    public int Score
    {
      get => this._score;
      internal set => this._score = MBMath.ClampInt(value, -1000000, 1000000);
    }

    public int BotsUnderControlAlive
    {
      get => this._botsUnderControlAlive;
      set
      {
        if (this._botsUnderControlAlive == value)
          return;
        this._botsUnderControlAlive = value;
        MPPerkObject.GetPerkHandler(this)?.OnEvent(MPPerkCondition.PerkEventFlags.AliveBotCountChange);
      }
    }

    public int BotsUnderControlTotal { get; internal set; }

    public bool IsControlledAgentActive
    {
      get => this.ControlledAgent != null && this.ControlledAgent.IsActive();
    }

    public Agent ControlledAgent
    {
      get => this.GetNetworkPeer().ControlledAgent;
      set
      {
        NetworkCommunicator networkPeer = this.GetNetworkPeer();
        if (networkPeer.ControlledAgent == value)
          return;
        this.ResetSelectedPerks();
        Agent controlledAgent = networkPeer.ControlledAgent;
        networkPeer.ControlledAgent = value;
        if (controlledAgent != null && controlledAgent.MissionPeer == this && controlledAgent.IsActive())
          controlledAgent.MissionPeer = (MissionPeer) null;
        if (networkPeer.ControlledAgent != null && networkPeer.ControlledAgent.MissionPeer != this)
          networkPeer.ControlledAgent.MissionPeer = this;
        networkPeer.VirtualPlayer.GetComponent<MissionRepresentativeBase>()?.SetAgent(value);
        if (value == null)
          return;
        MPPerkObject.GetPerkHandler(this)?.OnEvent(value, MPPerkCondition.PerkEventFlags.PeerControlledAgentChange);
      }
    }

    public Agent FollowedAgent
    {
      get => this._followedAgent;
      set
      {
        if (this._followedAgent == value)
          return;
        this._followedAgent = value;
        if (!GameNetwork.IsClient)
          return;
        GameNetwork.BeginModuleEventAsClient();
        Agent followedAgent = this._followedAgent;
        GameNetwork.WriteMessage((GameNetworkMessage) new SetFollowedAgent(followedAgent != null ? followedAgent.Index : -1));
        GameNetwork.EndModuleEventAsClient();
      }
    }

    public Team Team
    {
      get => this._team;
      set
      {
        if (this._team == value)
          return;
        if (MissionPeer.OnPreTeamChanged != null)
          MissionPeer.OnPreTeamChanged(this.GetNetworkPeer(), this._team, value);
        Team team = this._team;
        this._team = value;
        Debug.Print("Set the team to: " + (this._team?.Side.ToString() ?? "null") + ", for peer: " + this.Name);
        this._controlledFormation = (Formation) null;
        if (this._team != null)
        {
          if (GameNetwork.IsServer)
          {
            MBAPI.IMBPeer.SetTeam(this.Peer.Index, this._team.MBTeam.Index);
            GameNetwork.BeginBroadcastModuleEvent();
            GameNetwork.WriteMessage((GameNetworkMessage) new SetPeerTeam(this.GetNetworkPeer(), this._team.TeamIndex));
            GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
          }
          if (MissionPeer.OnTeamChanged == null)
            return;
          MissionPeer.OnTeamChanged(this.GetNetworkPeer(), team, this._team);
        }
        else
        {
          if (!GameNetwork.IsServer)
            return;
          MBAPI.IMBPeer.SetTeam(this.Peer.Index, -1);
        }
      }
    }

    public BasicCultureObject Culture
    {
      get => this._culture;
      set
      {
        BasicCultureObject culture = this._culture;
        this._culture = value;
        if (GameNetwork.IsServerOrRecorder)
        {
          this.TeamInitialPerkInfoReady = this.Peer.IsMine;
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new ChangeCulture(this, this._culture));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
        }
        if (this.OnCultureChanged == null)
          return;
        this.OnCultureChanged(this._culture);
      }
    }

    public Formation ControlledFormation
    {
      get => this._controlledFormation;
      set
      {
        if (this._controlledFormation == value)
          return;
        this._controlledFormation = value;
      }
    }

    public bool IsAgentAliveForChatting
    {
      get
      {
        MissionPeer component = this.GetComponent<MissionPeer>();
        if (component == null)
          return false;
        return this.IsControlledAgentActive || component.HasSpawnedAgentVisuals;
      }
    }

    public bool IsMutedFromPlatform { get; private set; }

    public bool IsMuted { get; private set; }

    public bool IsMutedFromGameOrPlatform => this.IsMutedFromPlatform || this.IsMuted;

    public void SetMutedFromPlatform(bool isMuted) => this.IsMutedFromPlatform = isMuted;

    public void SetMuted(bool isMuted) => this.IsMuted = isMuted;

    public void ResetRequestedKickPollCount() => this.RequestedKickPollCount = 0;

    public void IncrementRequestedKickPollCount() => ++this.RequestedKickPollCount;

    public int GetSelectedPerkIndexWithPerkListIndex(int troopIndex, int perkListIndex)
    {
      return this._perks[troopIndex][perkListIndex];
    }

    public bool SelectPerk(int perkListIndex, int perkIndex, int enforcedSelectedTroopIndex = -1)
    {
      if (this.SelectedTroopIndex >= 0 && enforcedSelectedTroopIndex >= 0 && this.SelectedTroopIndex != enforcedSelectedTroopIndex)
      {
        Debug.Print("SelectedTroopIndex < 0 || enforcedSelectedTroopIndex < 0 || SelectedTroopIndex == enforcedSelectedTroopIndex", debugFilter: 17179869184UL);
        Debug.Print(string.Format("SelectedTroopIndex: {0} enforcedSelectedTroopIndex: {1}", (object) this.SelectedTroopIndex, (object) enforcedSelectedTroopIndex), debugFilter: 17179869184UL);
      }
      int index1 = enforcedSelectedTroopIndex >= 0 ? enforcedSelectedTroopIndex : this.SelectedTroopIndex;
      if (perkIndex == this._perks[index1][perkListIndex])
        return false;
      this._perks[index1][perkListIndex] = perkIndex;
      if (this.GetNetworkPeer().IsMine)
      {
        List<MultiplayerClassDivisions.MPHeroClass> list = MultiplayerClassDivisions.GetMPHeroClasses(this.Culture).ToList<MultiplayerClassDivisions.MPHeroClass>();
        int count = list.Count;
        for (int index2 = 0; index2 < count; ++index2)
        {
          if (index1 == index2)
          {
            MultiplayerClassDivisions.MPHeroClass currentHeroClass = list[index2];
            List<MPPerkSelectionManager.MPPerkSelection> perkChoices = new List<MPPerkSelectionManager.MPPerkSelection>();
            for (int listIndex = 0; listIndex < 3; ++listIndex)
              perkChoices.Add(new MPPerkSelectionManager.MPPerkSelection(this._perks[index2][listIndex], listIndex));
            MPPerkSelectionManager.Instance.SetSelectionsForHeroClassTemporarily(currentHeroClass, perkChoices);
            break;
          }
        }
      }
      if (index1 == this.SelectedTroopIndex)
        this.ResetSelectedPerks();
      MissionPeer.OnPerkUpdateEventDelegate selectionUpdated = MissionPeer.OnPerkSelectionUpdated;
      if (selectionUpdated != null)
        selectionUpdated(this);
      return true;
    }

    public void HandleVoteChange(CultureVoteTypes voteType, BasicCultureObject culture)
    {
      switch (voteType)
      {
        case CultureVoteTypes.Ban:
          this.VotedForBan = culture;
          break;
        case CultureVoteTypes.Select:
          this.VotedForSelection = culture;
          break;
      }
      if (!GameNetwork.IsServer)
        return;
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new CultureVoteServer(this.GetNetworkPeer(), voteType, voteType == CultureVoteTypes.Ban ? this.VotedForBan : this.VotedForSelection));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      if (this.IsMine)
        MPPerkSelectionManager.Instance.TryToApplyAndSavePendingChanges();
      this.ResetKillRegistry();
      if (!this.HasSpawnedAgentVisuals || Mission.Current == null)
        return;
      Mission.Current.GetMissionBehavior<MultiplayerMissionAgentVisualSpawnComponent>()?.RemoveAgentVisuals(this);
      this.HasSpawnedAgentVisuals = false;
      this.OnCultureChanged -= new MissionPeer.OnCultureChangedDelegate(this.CultureChanged);
    }

    public override void OnInitialize()
    {
      base.OnInitialize();
      this.OnCultureChanged += new MissionPeer.OnCultureChangedDelegate(this.CultureChanged);
    }

    public int GetAmountOfAgentVisualsForPeer()
    {
      return this._visuals.Count<PeerVisualsHolder>((Func<PeerVisualsHolder, bool>) (v => v != null));
    }

    public PeerVisualsHolder GetVisuals(int visualIndex)
    {
      return this._visuals.Count <= 0 ? (PeerVisualsHolder) null : this._visuals[visualIndex];
    }

    public void ClearVisuals(int visualIndex)
    {
      if (visualIndex >= this._visuals.Count || this._visuals[visualIndex] == null)
        return;
      if (!GameNetwork.IsDedicatedServer)
      {
        MBAgentVisuals visuals1 = this._visuals[visualIndex].AgentVisuals.GetVisuals();
        visuals1.ClearVisualComponents(true);
        visuals1.ClearAllWeaponMeshes();
        visuals1.Reset();
        if (this._visuals[visualIndex].MountAgentVisuals != null)
        {
          MBAgentVisuals visuals2 = this._visuals[visualIndex].MountAgentVisuals.GetVisuals();
          visuals2.ClearVisualComponents(true);
          visuals2.ClearAllWeaponMeshes();
          visuals2.Reset();
        }
      }
      this._visuals[visualIndex] = (PeerVisualsHolder) null;
    }

    public void ClearAllVisuals(bool freeResources = false)
    {
      if (this._visuals == null)
        return;
      for (int index = this._visuals.Count - 1; index >= 0; --index)
      {
        if (this._visuals[index] != null)
          this.ClearVisuals(index);
      }
      if (!freeResources)
        return;
      this._visuals = (List<PeerVisualsHolder>) null;
    }

    public void OnVisualsSpawned(PeerVisualsHolder visualsHolder, int visualIndex)
    {
      if (visualIndex >= this._visuals.Count)
      {
        int num = visualIndex - this._visuals.Count;
        for (int index = 0; index < num + 1; ++index)
          this._visuals.Add((PeerVisualsHolder) null);
      }
      this._visuals[visualIndex] = visualsHolder;
    }

    public IEnumerable<IAgentVisual> GetAllAgentVisualsForPeer()
    {
      int count = this.GetAmountOfAgentVisualsForPeer();
      for (int i = 0; i < count; ++i)
        yield return this.GetVisuals(i).AgentVisuals;
    }

    public IAgentVisual GetAgentVisualForPeer(int visualsIndex)
    {
      return this.GetAgentVisualForPeer(visualsIndex, out IAgentVisual _);
    }

    public IAgentVisual GetAgentVisualForPeer(int visualsIndex, out IAgentVisual mountAgentVisuals)
    {
      PeerVisualsHolder visuals = this.GetVisuals(visualsIndex);
      mountAgentVisuals = visuals?.MountAgentVisuals;
      return visuals?.AgentVisuals;
    }

    public void TickInactivityStatus()
    {
      NetworkCommunicator networkPeer = this.GetNetworkPeer();
      if (networkPeer.IsMine)
        return;
      if (this.ControlledAgent != null && this.ControlledAgent.IsActive())
      {
        if (this._lastActiveTime == MissionTime.Zero)
        {
          this._lastActiveTime = MissionTime.Now;
          this._previousActivityStatus = ValueTuple.Create<Agent.MovementControlFlag, Vec2, Vec3>(this.ControlledAgent.MovementFlags, this.ControlledAgent.MovementInputVector, this.ControlledAgent.LookDirection);
          this._inactiveWarningGiven = false;
        }
        else
        {
          (Agent.MovementControlFlag, Vec2, Vec3) tuple = ValueTuple.Create<Agent.MovementControlFlag, Vec2, Vec3>(this.ControlledAgent.MovementFlags, this.ControlledAgent.MovementInputVector, this.ControlledAgent.LookDirection);
          if (this._previousActivityStatus.Item1 != tuple.Item1 || (double) this._previousActivityStatus.Item2.DistanceSquared(tuple.Item2) > 9.9999997473787516E-06 || (double) this._previousActivityStatus.Item3.DistanceSquared(tuple.Item3) > 9.9999997473787516E-06)
          {
            this._lastActiveTime = MissionTime.Now;
            this._previousActivityStatus = tuple;
            this._inactiveWarningGiven = false;
          }
          if ((double) this._lastActiveTime.ElapsedSeconds > 180.0)
          {
            DisconnectInfo parameter = networkPeer.PlayerConnectionInfo.GetParameter<DisconnectInfo>("DisconnectInfo") ?? new DisconnectInfo();
            parameter.Type = DisconnectType.Inactivity;
            networkPeer.PlayerConnectionInfo.AddParameter("DisconnectInfo", (object) parameter);
            GameNetwork.AddNetworkPeerToDisconnectAsServer(networkPeer);
          }
          else
          {
            if ((double) this._lastActiveTime.ElapsedSeconds <= 120.0 || this._inactiveWarningGiven)
              return;
            Mission.Current.GetMissionBehavior<MultiplayerGameNotificationsComponent>()?.PlayerIsInactive(this.GetNetworkPeer());
            this._inactiveWarningGiven = true;
          }
        }
      }
      else
      {
        this._lastActiveTime = MissionTime.Now;
        this._inactiveWarningGiven = false;
      }
    }

    public void OnKillAnotherPeer(MissionPeer victimPeer)
    {
      if (victimPeer == null)
        return;
      if (!this._numberOfTimesPeerKilledPerPeer.ContainsKey(victimPeer))
        this._numberOfTimesPeerKilledPerPeer.Add(victimPeer, 1);
      else
        this._numberOfTimesPeerKilledPerPeer[victimPeer]++;
      MissionPeer.OnPlayerKilledDelegate onPlayerKilled = MissionPeer.OnPlayerKilled;
      if (onPlayerKilled == null)
        return;
      onPlayerKilled(this, victimPeer);
    }

    public void OverrideCultureWithTeamCulture()
    {
      this.Culture = MBObjectManager.Instance.GetObject<BasicCultureObject>((this.Team.Side == BattleSideEnum.Attacker ? MultiplayerOptions.OptionType.CultureTeam1 : MultiplayerOptions.OptionType.CultureTeam2).GetStrValue());
    }

    public int GetNumberOfTimesPeerKilledPeer(MissionPeer killedPeer)
    {
      return this._numberOfTimesPeerKilledPerPeer.ContainsKey(killedPeer) ? this._numberOfTimesPeerKilledPerPeer[killedPeer] : 0;
    }

    public void ResetKillRegistry() => this._numberOfTimesPeerKilledPerPeer.Clear();

    public bool RefreshSelectedPerks()
    {
      MBList<MPPerkObject> mbList = new MBList<MPPerkObject>();
      List<List<IReadOnlyPerkObject>> availablePerksForPeer = MultiplayerClassDivisions.GetAvailablePerksForPeer(this);
      if (availablePerksForPeer.Count != 3)
        return false;
      for (int index = 0; index < 3; ++index)
      {
        int num = this._perks[this.SelectedTroopIndex][index];
        if (availablePerksForPeer[index].Count > 0)
          mbList.Add(availablePerksForPeer[index][num < 0 || num >= availablePerksForPeer[index].Count ? 0 : num].Clone(this));
      }
      this._selectedPerks = (this.SelectedTroopIndex, mbList);
      return true;
    }

    private void ResetSelectedPerks()
    {
      if (this._selectedPerks.Item2 == null)
        return;
      foreach (MPPerkObject mpPerkObject in (List<MPPerkObject>) this._selectedPerks.Item2)
        mpPerkObject.Reset();
    }

    private void CultureChanged(BasicCultureObject newCulture)
    {
      List<MultiplayerClassDivisions.MPHeroClass> list = MultiplayerClassDivisions.GetMPHeroClasses(newCulture).ToList<MultiplayerClassDivisions.MPHeroClass>();
      int count1 = list.Count;
      for (int index1 = 0; index1 < count1; ++index1)
      {
        List<MPPerkSelectionManager.MPPerkSelection> selectionsForHeroClass = MPPerkSelectionManager.Instance.GetSelectionsForHeroClass(list[index1]);
        if (selectionsForHeroClass != null)
        {
          int count2 = selectionsForHeroClass.Count;
          for (int index2 = 0; index2 < count2; ++index2)
          {
            MPPerkSelectionManager.MPPerkSelection mpPerkSelection = selectionsForHeroClass[index2];
            this._perks[index1][mpPerkSelection.ListIndex] = mpPerkSelection.Index;
          }
        }
        else
        {
          for (int index3 = 0; index3 < 3; ++index3)
            this._perks[index1][index3] = 0;
        }
      }
      if (!this.IsMine || !GameNetwork.IsClient)
        return;
      GameNetwork.BeginModuleEventAsClient();
      GameNetwork.WriteMessage((GameNetworkMessage) new TeamInitialPerkInfoMessage(this._perks[this.SelectedTroopIndex]));
      GameNetwork.EndModuleEventAsClient();
    }

    public void OnTeamInitialPerkInfoReceived(int[] perks)
    {
      for (int perkListIndex = 0; perkListIndex < 3; ++perkListIndex)
        this.SelectPerk(perkListIndex, perks[perkListIndex]);
      this.TeamInitialPerkInfoReady = true;
    }

    public delegate void OnUpdateEquipmentSetIndexEventDelegate(
      MissionPeer lobbyPeer,
      int equipmentSetIndex);

    public delegate void OnPerkUpdateEventDelegate(MissionPeer peer);

    public delegate void OnTeamChangedDelegate(
      NetworkCommunicator peer,
      Team previousTeam,
      Team newTeam);

    public delegate void OnCultureChangedDelegate(BasicCultureObject newCulture);

    public delegate void OnPlayerKilledDelegate(MissionPeer killerPeer, MissionPeer killedPeer);
  }
}
