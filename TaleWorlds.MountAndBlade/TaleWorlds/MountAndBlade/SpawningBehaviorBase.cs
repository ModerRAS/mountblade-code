// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SpawningBehaviorBase
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Diamond;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class SpawningBehaviorBase
  {
    private static int MaxAgentCount = MBAPI.IMBAgent.GetMaximumNumberOfAgents();
    private static int AgentCountThreshold = (int) ((double) SpawningBehaviorBase.MaxAgentCount * 0.89999997615814209);
    private const float SecondsToWaitForEachMountBeforeSelectingToFadeOut = 30f;
    private const float SecondsToWaitBeforeNextMountCleanup = 5f;
    protected MissionMultiplayerGameModeBase GameMode;
    protected SpawnComponent SpawnComponent;
    private bool _equipmentUpdatingExpired;
    protected bool IsSpawningEnabled;
    protected Timer _spawnCheckTimer;
    protected float SpawningEndDelay = 1f;
    protected float SpawningDelayTimer;
    private bool _hasCalledSpawningEnded;
    protected MissionLobbyComponent MissionLobbyComponent;
    protected MissionLobbyEquipmentNetworkComponent MissionLobbyEquipmentNetworkComponent;
    public static readonly ActionIndexCache PoseActionInfantry = ActionIndexCache.Create("act_walk_idle_unarmed");
    public static readonly ActionIndexCache PoseActionCavalry = ActionIndexCache.Create("act_horse_stand_1");
    private List<AgentBuildData> _agentsToBeSpawnedCache;
    private MissionTime _nextTimeToCleanUpMounts;
    private int[] _botsCountForSides;

    protected MultiplayerMissionAgentVisualSpawnComponent AgentVisualSpawnComponent { get; private set; }

    protected Mission Mission => this.SpawnComponent.Mission;

    protected event Action<MissionPeer> OnAllAgentsFromPeerSpawnedFromVisuals;

    protected event Action<MissionPeer> OnPeerSpawnedFromVisuals;

    public event SpawningBehaviorBase.OnSpawningEndedEventDelegate OnSpawningEnded;

    public virtual void Initialize(SpawnComponent spawnComponent)
    {
      this.SpawnComponent = spawnComponent;
      this.AgentVisualSpawnComponent = this.Mission.GetMissionBehavior<MultiplayerMissionAgentVisualSpawnComponent>();
      this.GameMode = this.Mission.GetMissionBehavior<MissionMultiplayerGameModeBase>();
      this.MissionLobbyComponent = this.Mission.GetMissionBehavior<MissionLobbyComponent>();
      this.MissionLobbyEquipmentNetworkComponent = this.Mission.GetMissionBehavior<MissionLobbyEquipmentNetworkComponent>();
      this.MissionLobbyEquipmentNetworkComponent.OnEquipmentRefreshed += new MissionLobbyEquipmentNetworkComponent.OnRefreshEquipmentEventDelegate(this.OnPeerEquipmentUpdated);
      this._spawnCheckTimer = new Timer(Mission.Current.CurrentTime, 0.2f);
      this._agentsToBeSpawnedCache = new List<AgentBuildData>();
      this._nextTimeToCleanUpMounts = MissionTime.Now;
      this._botsCountForSides = new int[2];
    }

    public virtual void Clear()
    {
      this.MissionLobbyEquipmentNetworkComponent.OnEquipmentRefreshed -= new MissionLobbyEquipmentNetworkComponent.OnRefreshEquipmentEventDelegate(this.OnPeerEquipmentUpdated);
      this._agentsToBeSpawnedCache = (List<AgentBuildData>) null;
    }

    public virtual void OnTick(float dt)
    {
      int count = Mission.Current.AllAgents.Count;
      int num1 = 0;
      this._agentsToBeSpawnedCache.Clear();
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        if (networkPeer.IsSynchronized)
        {
          MissionPeer component = networkPeer.GetComponent<MissionPeer>();
          if (component != null && component.ControlledAgent == null && component.HasSpawnedAgentVisuals && !this.CanUpdateSpawnEquipment(component))
          {
            MultiplayerClassDivisions.MPHeroClass heroClassForPeer = MultiplayerClassDivisions.GetMPHeroClassForPeer(component);
            MPPerkObject.MPOnSpawnPerkHandler spawnPerkHandler = MPPerkObject.GetOnSpawnPerkHandler(component);
            GameNetwork.BeginBroadcastModuleEvent();
            GameNetwork.WriteMessage((GameNetworkMessage) new SyncPerksForCurrentlySelectedTroop(networkPeer, component.Perks[component.SelectedTroopIndex]));
            GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.ExcludeOtherTeamPlayers, networkPeer);
            int num2 = 0;
            bool flag1 = false;
            int intValue = MultiplayerOptions.OptionType.NumberOfBotsPerFormation.GetIntValue();
            if (intValue > 0 && (this.GameMode.WarmupComponent == null || !this.GameMode.WarmupComponent.IsInWarmup))
            {
              num2 = MPPerkObject.GetTroopCount(heroClassForPeer, intValue, spawnPerkHandler);
              foreach (MPPerkObject selectedPerk in (List<MPPerkObject>) component.SelectedPerks)
              {
                if (selectedPerk.HasBannerBearer)
                {
                  flag1 = true;
                  break;
                }
              }
            }
            if (num2 > 0)
              num2 = (int) ((double) num2 * (double) this.GameMode.GetTroopNumberMultiplierForMissingPlayer(component));
            int num3 = num2 + (flag1 ? 2 : 1);
            IEnumerable<(EquipmentIndex, EquipmentElement)> alternativeEquipments = spawnPerkHandler?.GetAlternativeEquipments(false);
            for (int index = 0; index < num3; ++index)
            {
              bool flag2 = index == 0;
              BasicCharacterObject basicCharacterObject = flag2 ? heroClassForPeer.HeroCharacter : (!flag1 || index != 1 ? heroClassForPeer.TroopCharacter : heroClassForPeer.BannerBearerCharacter);
              uint color1 = !this.GameMode.IsGameModeUsingOpposingTeams || component.Team == this.Mission.AttackerTeam ? component.Culture.Color : component.Culture.ClothAlternativeColor;
              uint color2 = !this.GameMode.IsGameModeUsingOpposingTeams || component.Team == this.Mission.AttackerTeam ? component.Culture.Color2 : component.Culture.ClothAlternativeColor2;
              uint color1_1 = !this.GameMode.IsGameModeUsingOpposingTeams || component.Team == this.Mission.AttackerTeam ? component.Culture.BackgroundColor1 : component.Culture.BackgroundColor2;
              uint color2_1 = !this.GameMode.IsGameModeUsingOpposingTeams || component.Team == this.Mission.AttackerTeam ? component.Culture.ForegroundColor1 : component.Culture.ForegroundColor2;
              Banner banner = new Banner(component.Peer.BannerCode, color1_1, color2_1);
              AgentBuildData agentBuildData1 = new AgentBuildData(basicCharacterObject).VisualsIndex(index).Team(component.Team).TroopOrigin((IAgentOriginBase) new BasicBattleAgentOrigin(basicCharacterObject)).Formation(component.ControlledFormation).IsFemale(flag2 ? component.Peer.IsFemale : basicCharacterObject.IsFemale).ClothingColor1(color1).ClothingColor2(color2).Banner(banner);
              if (flag2)
                agentBuildData1.MissionPeer(component);
              else
                agentBuildData1.OwningMissionPeer(component);
              Equipment equipment = flag2 ? basicCharacterObject.Equipment.Clone() : Equipment.GetRandomEquipmentElements(basicCharacterObject, false, seed: MBRandom.RandomInt());
              IEnumerable<(EquipmentIndex, EquipmentElement)> valueTuples = flag2 ? spawnPerkHandler?.GetAlternativeEquipments(true) : alternativeEquipments;
              if (valueTuples != null)
              {
                foreach ((EquipmentIndex, EquipmentElement) valueTuple in valueTuples)
                  equipment[valueTuple.Item1] = valueTuple.Item2;
              }
              agentBuildData1.Equipment(equipment);
              if (flag2)
                this.GameMode.AddCosmeticItemsToEquipment(equipment, this.GameMode.GetUsedCosmeticsFromPeer(component, basicCharacterObject));
              if (flag2)
              {
                agentBuildData1.BodyProperties(this.GetBodyProperties(component, component.Culture));
                agentBuildData1.Age((int) agentBuildData1.AgentBodyProperties.Age);
              }
              else
              {
                agentBuildData1.EquipmentSeed(this.MissionLobbyComponent.GetRandomFaceSeedForCharacter(basicCharacterObject, agentBuildData1.AgentVisualsIndex));
                agentBuildData1.BodyProperties(BodyProperties.GetRandomBodyProperties(agentBuildData1.AgentRace, agentBuildData1.AgentIsFemale, basicCharacterObject.GetBodyPropertiesMin(), basicCharacterObject.GetBodyPropertiesMax(), (int) agentBuildData1.AgentOverridenSpawnEquipment.HairCoverType, agentBuildData1.AgentEquipmentSeed, basicCharacterObject.HairTags, basicCharacterObject.BeardTags, basicCharacterObject.TattooTags));
              }
              if (component.ControlledFormation != null && component.ControlledFormation.Banner == null)
                component.ControlledFormation.Banner = banner;
              SpawnComponent spawnComponent = this.SpawnComponent;
              Team team = component.Team;
              EquipmentElement equipmentElement = equipment[EquipmentIndex.ArmorItemEndSlot];
              int num4 = equipmentElement.Item != null ? 1 : 0;
              int num5 = component.SpawnCountThisRound == 0 ? 1 : 0;
              MatrixFrame spawnFrame = spawnComponent.GetSpawnFrame(team, num4 != 0, num5 != 0);
              Vec2 vec2;
              if (!spawnFrame.IsIdentity)
              {
                Vec3 origin = spawnFrame.origin;
                Vec3? agentInitialPosition = agentBuildData1.AgentInitialPosition;
                if ((agentInitialPosition.HasValue ? (origin != agentInitialPosition.GetValueOrDefault() ? 1 : 0) : 1) == 0)
                {
                  vec2 = spawnFrame.rotation.f.AsVec2.Normalized();
                  Vec2? initialDirection = agentBuildData1.AgentInitialDirection;
                  if ((initialDirection.HasValue ? (vec2 != initialDirection.GetValueOrDefault() ? 1 : 0) : 1) == 0)
                    goto label_36;
                }
                agentBuildData1.InitialPosition(in spawnFrame.origin);
                AgentBuildData agentBuildData2 = agentBuildData1;
                vec2 = spawnFrame.rotation.f.AsVec2;
                vec2 = vec2.Normalized();
                ref Vec2 local = ref vec2;
                agentBuildData2.InitialDirection(in local);
                goto label_37;
              }
label_36:
              Debug.FailedAssert("Spawn frame could not be found.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\SpawnBehaviors\\SpawningBehaviors\\SpawningBehaviorBase.cs", nameof (OnTick), 216);
label_37:
              if (component.ControlledAgent != null && !flag2)
              {
                MatrixFrame frame = component.ControlledAgent.Frame;
                frame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
                MatrixFrame matrixFrame = frame;
                matrixFrame.origin -= matrixFrame.rotation.f.NormalizedCopy() * 3.5f;
                Mat3 rotation = matrixFrame.rotation;
                rotation.MakeUnit();
                equipmentElement = basicCharacterObject.Equipment[EquipmentIndex.ArmorItemEndSlot];
                bool flag3 = !equipmentElement.IsEmpty;
                int num6 = MathF.Min(num3, 10);
                MatrixFrame groundMatrixFrame = Formation.GetFormationFramesForBeforeFormationCreation((float) ((double) num6 * (double) Formation.GetDefaultUnitDiameter(flag3) + (double) (num6 - 1) * (double) Formation.GetDefaultMinimumInterval(flag3)), num3, flag3, new WorldPosition(Mission.Current.Scene, matrixFrame.origin), rotation)[index - 1].ToGroundMatrixFrame();
                agentBuildData1.InitialPosition(in groundMatrixFrame.origin);
                AgentBuildData agentBuildData3 = agentBuildData1;
                vec2 = groundMatrixFrame.rotation.f.AsVec2;
                vec2 = vec2.Normalized();
                ref Vec2 local = ref vec2;
                agentBuildData3.InitialDirection(in local);
              }
              this._agentsToBeSpawnedCache.Add(agentBuildData1);
              ++num1;
              equipmentElement = agentBuildData1.AgentOverridenSpawnEquipment[EquipmentIndex.ArmorItemEndSlot];
              if (!equipmentElement.IsEmpty)
                ++num1;
            }
          }
        }
      }
      int num7 = num1 + count;
      if (num7 > SpawningBehaviorBase.AgentCountThreshold && this._nextTimeToCleanUpMounts.IsPast)
      {
        this._nextTimeToCleanUpMounts = MissionTime.SecondsFromNow(5f);
        for (int index = Mission.Current.MountsWithoutRiders.Count - 1; index >= 0; --index)
        {
          KeyValuePair<Agent, MissionTime> mountsWithoutRider = Mission.Current.MountsWithoutRiders[index];
          Agent key = mountsWithoutRider.Key;
          if ((double) mountsWithoutRider.Value.ElapsedSeconds > 30.0)
            key.FadeOut(false, false);
        }
      }
      int num8 = SpawningBehaviorBase.MaxAgentCount - num7;
      if (num8 >= 0)
      {
        for (int index = this._agentsToBeSpawnedCache.Count - 1; index >= 0; --index)
        {
          AgentBuildData agentBuildData = this._agentsToBeSpawnedCache[index];
          bool isPlayer = agentBuildData.AgentMissionPeer != null;
          MissionPeer missionPeer = isPlayer ? agentBuildData.AgentMissionPeer : agentBuildData.OwningAgentMissionPeer;
          MPPerkObject.MPOnSpawnPerkHandler spawnPerkHandler = MPPerkObject.GetOnSpawnPerkHandler(missionPeer);
          Agent agent = this.Mission.SpawnAgent(agentBuildData, true);
          agent.AddComponent((AgentComponent) new MPPerksAgentComponent(agent));
          agent.MountAgent?.UpdateAgentProperties();
          agent.HealthLimit += spawnPerkHandler != null ? spawnPerkHandler.GetHitpoints(isPlayer) : 0.0f;
          agent.Health = agent.HealthLimit;
          if (!isPlayer)
            agent.SetWatchState(Agent.WatchState.Alarmed);
          agent.WieldInitialWeapons();
          if (isPlayer)
          {
            ++missionPeer.SpawnCountThisRound;
            Action<MissionPeer> spawnedFromVisuals1 = this.OnPeerSpawnedFromVisuals;
            if (spawnedFromVisuals1 != null)
              spawnedFromVisuals1(missionPeer);
            Action<MissionPeer> spawnedFromVisuals2 = this.OnAllAgentsFromPeerSpawnedFromVisuals;
            if (spawnedFromVisuals2 != null)
              spawnedFromVisuals2(missionPeer);
            this.AgentVisualSpawnComponent.RemoveAgentVisuals(missionPeer, true);
            if (GameNetwork.IsServerOrRecorder)
            {
              GameNetwork.BeginBroadcastModuleEvent();
              GameNetwork.WriteMessage((GameNetworkMessage) new RemoveAgentVisualsForPeer(missionPeer.GetNetworkPeer()));
              GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
            }
            missionPeer.HasSpawnedAgentVisuals = false;
            MPPerkObject.GetPerkHandler(missionPeer)?.OnEvent(MPPerkCondition.PerkEventFlags.SpawnEnd);
          }
        }
        int intValue1 = MultiplayerOptions.OptionType.NumberOfBotsTeam1.GetIntValue();
        int intValue2 = MultiplayerOptions.OptionType.NumberOfBotsTeam2.GetIntValue();
        if (this.GameMode.IsGameModeUsingOpposingTeams && (intValue1 > 0 || intValue2 > 0))
        {
          (Team, BasicCultureObject, int)[] valueTupleArray = new (Team, BasicCultureObject, int)[2]
          {
            (this.Mission.DefenderTeam, MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam2.GetStrValue()), intValue2 - this._botsCountForSides[0]),
            (this.Mission.AttackerTeam, MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam1.GetStrValue()), intValue1 - this._botsCountForSides[1])
          };
          if (num8 >= 4)
          {
            for (int index = 0; index < Math.Min(num8 / 2, valueTupleArray[0].Item3 + valueTupleArray[1].Item3); ++index)
              this.SpawnBot(valueTupleArray[index % 2].Item1, valueTupleArray[index % 2].Item2);
          }
        }
      }
      if (this.IsSpawningEnabled || !this.IsRoundInProgress())
        return;
      if ((double) this.SpawningDelayTimer >= (double) this.SpawningEndDelay && !this._hasCalledSpawningEnded)
      {
        Mission.Current.AllowAiTicking = true;
        if (this.OnSpawningEnded != null)
          this.OnSpawningEnded();
        this._hasCalledSpawningEnded = true;
      }
      this.SpawningDelayTimer += dt;
    }

    public bool AreAgentsSpawning() => this.IsSpawningEnabled;

    protected void ResetSpawnCounts()
    {
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        MissionPeer component = networkPeer.GetComponent<MissionPeer>();
        if (component != null)
          component.SpawnCountThisRound = 0;
      }
    }

    protected void ResetSpawnTimers()
    {
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
        networkPeer.GetComponent<MissionPeer>()?.SpawnTimer.Reset(Mission.Current.CurrentTime, 0.0f);
    }

    public virtual void RequestStartSpawnSession()
    {
      this.IsSpawningEnabled = true;
      this.SpawningDelayTimer = 0.0f;
      this._hasCalledSpawningEnded = false;
      this.ResetSpawnCounts();
    }

    public void RequestStopSpawnSession()
    {
      this.IsSpawningEnabled = false;
      this.SpawningDelayTimer = 0.0f;
      this._hasCalledSpawningEnded = false;
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        MissionPeer component = networkPeer.GetComponent<MissionPeer>();
        if (component != null)
        {
          this.AgentVisualSpawnComponent.RemoveAgentVisuals(component, true);
          if (GameNetwork.IsServerOrRecorder)
          {
            GameNetwork.BeginBroadcastModuleEvent();
            GameNetwork.WriteMessage((GameNetworkMessage) new RemoveAgentVisualsForPeer(component.GetNetworkPeer()));
            GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
          }
          component.HasSpawnedAgentVisuals = false;
        }
      }
      foreach (NetworkCommunicator disconnectedNetworkPeer in GameNetwork.DisconnectedNetworkPeers)
      {
        MissionPeer component = disconnectedNetworkPeer != null ? disconnectedNetworkPeer.GetComponent<MissionPeer>() : (MissionPeer) null;
        if (component != null)
        {
          this.AgentVisualSpawnComponent.RemoveAgentVisuals(component);
          if (GameNetwork.IsServerOrRecorder)
          {
            GameNetwork.BeginBroadcastModuleEvent();
            GameNetwork.WriteMessage((GameNetworkMessage) new RemoveAgentVisualsForPeer(component.GetNetworkPeer()));
            GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
          }
          component.HasSpawnedAgentVisuals = false;
        }
      }
    }

    public void SetRemainingAgentsInvulnerable()
    {
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        agent.SetMortalityState(Agent.MortalityState.Invulnerable);
    }

    protected abstract void SpawnAgents();

    protected BodyProperties GetBodyProperties(
      MissionPeer missionPeer,
      BasicCultureObject cultureLimit)
    {
      NetworkCommunicator networkPeer = missionPeer.GetNetworkPeer();
      if (networkPeer != null)
        return networkPeer.PlayerConnectionInfo.GetParameter<PlayerData>("PlayerData").BodyProperties;
      Debug.FailedAssert("networkCommunicator != null", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\SpawnBehaviors\\SpawningBehaviors\\SpawningBehaviorBase.cs", nameof (GetBodyProperties), 510);
      Team team = missionPeer.Team;
      BasicCharacterObject troopCharacter = MultiplayerClassDivisions.GetMPHeroClasses(cultureLimit).ToMBList<MultiplayerClassDivisions.MPHeroClass>().GetRandomElement<MultiplayerClassDivisions.MPHeroClass>().TroopCharacter;
      MatrixFrame spawnFrame = this.SpawnComponent.GetSpawnFrame(team, troopCharacter.HasMount(), true);
      AgentBuildData agentBuildData1 = new AgentBuildData(troopCharacter).Team(team).InitialPosition(in spawnFrame.origin);
      Vec2 vec2 = spawnFrame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      AgentBuildData agentBuildData2 = agentBuildData1.InitialDirection(in local).TroopOrigin((IAgentOriginBase) new BasicBattleAgentOrigin(troopCharacter)).EquipmentSeed(this.MissionLobbyComponent.GetRandomFaceSeedForCharacter(troopCharacter)).ClothingColor1(team.Side == BattleSideEnum.Attacker ? cultureLimit.Color : cultureLimit.ClothAlternativeColor).ClothingColor2(team.Side == BattleSideEnum.Attacker ? cultureLimit.Color2 : cultureLimit.ClothAlternativeColor2).IsFemale(troopCharacter.IsFemale);
      agentBuildData2.Equipment(Equipment.GetRandomEquipmentElements(troopCharacter, !GameNetwork.IsMultiplayer, seed: agentBuildData2.AgentEquipmentSeed));
      agentBuildData2.BodyProperties(BodyProperties.GetRandomBodyProperties(agentBuildData2.AgentRace, agentBuildData2.AgentIsFemale, troopCharacter.GetBodyPropertiesMin(), troopCharacter.GetBodyPropertiesMax(), (int) agentBuildData2.AgentOverridenSpawnEquipment.HairCoverType, agentBuildData2.AgentEquipmentSeed, troopCharacter.HairTags, troopCharacter.BeardTags, troopCharacter.TattooTags));
      return agentBuildData2.AgentBodyProperties;
    }

    protected void SpawnBot(Team agentTeam, BasicCultureObject cultureLimit)
    {
      BasicCharacterObject troopCharacter = MultiplayerClassDivisions.GetMPHeroClasses(cultureLimit).ToMBList<MultiplayerClassDivisions.MPHeroClass>().GetRandomElement<MultiplayerClassDivisions.MPHeroClass>().TroopCharacter;
      MatrixFrame spawnFrame = this.SpawnComponent.GetSpawnFrame(agentTeam, troopCharacter.HasMount(), true);
      AgentBuildData agentBuildData1 = new AgentBuildData(troopCharacter).Team(agentTeam).InitialPosition(in spawnFrame.origin);
      Vec2 vec2 = spawnFrame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      AgentBuildData agentBuildData2 = agentBuildData1.InitialDirection(in local).TroopOrigin((IAgentOriginBase) new BasicBattleAgentOrigin(troopCharacter)).EquipmentSeed(this.MissionLobbyComponent.GetRandomFaceSeedForCharacter(troopCharacter)).ClothingColor1(agentTeam.Side == BattleSideEnum.Attacker ? cultureLimit.Color : cultureLimit.ClothAlternativeColor).ClothingColor2(agentTeam.Side == BattleSideEnum.Attacker ? cultureLimit.Color2 : cultureLimit.ClothAlternativeColor2).IsFemale(troopCharacter.IsFemale);
      agentBuildData2.Equipment(Equipment.GetRandomEquipmentElements(troopCharacter, !GameNetwork.IsMultiplayer, seed: agentBuildData2.AgentEquipmentSeed));
      agentBuildData2.BodyProperties(BodyProperties.GetRandomBodyProperties(agentBuildData2.AgentRace, agentBuildData2.AgentIsFemale, troopCharacter.GetBodyPropertiesMin(), troopCharacter.GetBodyPropertiesMax(), (int) agentBuildData2.AgentOverridenSpawnEquipment.HairCoverType, agentBuildData2.AgentEquipmentSeed, troopCharacter.HairTags, troopCharacter.BeardTags, troopCharacter.TattooTags));
      Agent agent = this.Mission.SpawnAgent(agentBuildData2);
      agent.AIStateFlags |= Agent.AIStateFlag.Alarmed;
      ++this._botsCountForSides[(int) agent.Team.Side];
    }

    private void OnPeerEquipmentUpdated(MissionPeer peer)
    {
      if (!this.IsSpawningEnabled || !this.CanUpdateSpawnEquipment(peer))
        return;
      peer.HasSpawnedAgentVisuals = false;
      Debug.Print("HasSpawnedAgentVisuals = false for peer: " + peer.Name + " because he just updated his equipment");
      if (peer.ControlledFormation == null)
        return;
      peer.ControlledFormation.HasBeenPositioned = false;
      peer.ControlledFormation.SetSpawnIndex();
    }

    public virtual bool CanUpdateSpawnEquipment(MissionPeer missionPeer)
    {
      return !missionPeer.EquipmentUpdatingExpired && !this._equipmentUpdatingExpired;
    }

    public void ToggleUpdatingSpawnEquipment(bool canUpdate)
    {
      this._equipmentUpdatingExpired = !canUpdate;
    }

    public abstract bool AllowEarlyAgentVisualsDespawning(MissionPeer missionPeer);

    public virtual int GetMaximumReSpawnPeriodForPeer(MissionPeer peer) => 3;

    protected abstract bool IsRoundInProgress();

    public virtual void OnClearScene()
    {
      for (int index = 0; index < this._botsCountForSides.Length; ++index)
        this._botsCountForSides[index] = 0;
    }

    public void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow blow)
    {
      if (!affectedAgent.IsHuman || affectedAgent.MissionPeer != null || affectedAgent.OwningAgentMissionPeer != null)
        return;
      --this._botsCountForSides[(int) affectedAgent.Team.Side];
    }

    public delegate void OnSpawningEndedEventDelegate();
  }
}
