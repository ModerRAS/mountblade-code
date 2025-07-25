// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionMultiplayerGameModeBase
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Diamond.Cosmetics;
using TaleWorlds.MountAndBlade.Diamond.Cosmetics.CosmeticTypes;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MissionMultiplayerGameModeBase : MissionNetwork
  {
    public const int GoldCap = 2000;
    public const float PerkTickPeriod = 1f;
    public const float GameModeSystemTickPeriod = 0.25f;
    private float _lastPerkTickTime;
    private MultiplayerMissionAgentVisualSpawnComponent _agentVisualSpawnComponent;
    public MultiplayerTeamSelectComponent MultiplayerTeamSelectComponent;
    protected MissionLobbyComponent MissionLobbyComponent;
    protected MultiplayerGameNotificationsComponent NotificationsComponent;
    public MultiplayerRoundController RoundController;
    public MultiplayerWarmupComponent WarmupComponent;
    public MultiplayerTimerComponent TimerComponent;
    protected MissionMultiplayerGameModeBaseClient GameModeBaseClient;
    private float _gameModeSystemTickTimer;

    public abstract bool IsGameModeHidingAllAgentVisuals { get; }

    public abstract bool IsGameModeUsingOpposingTeams { get; }

    public SpawnComponent SpawnComponent { get; private set; }

    protected bool CanGameModeSystemsTickThisFrame { get; private set; }

    public abstract MultiplayerGameType GetMissionType();

    public virtual bool CheckIfOvertime() => false;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this.MultiplayerTeamSelectComponent = this.Mission.GetMissionBehavior<MultiplayerTeamSelectComponent>();
      this.MissionLobbyComponent = this.Mission.GetMissionBehavior<MissionLobbyComponent>();
      this.GameModeBaseClient = this.Mission.GetMissionBehavior<MissionMultiplayerGameModeBaseClient>();
      this.NotificationsComponent = this.Mission.GetMissionBehavior<MultiplayerGameNotificationsComponent>();
      this.RoundController = this.Mission.GetMissionBehavior<MultiplayerRoundController>();
      this.WarmupComponent = this.Mission.GetMissionBehavior<MultiplayerWarmupComponent>();
      this.TimerComponent = this.Mission.GetMissionBehavior<MultiplayerTimerComponent>();
      this.SpawnComponent = Mission.Current.GetMissionBehavior<SpawnComponent>();
      this._agentVisualSpawnComponent = this.Mission.GetMissionBehavior<MultiplayerMissionAgentVisualSpawnComponent>();
      this._lastPerkTickTime = Mission.Current.CurrentTime;
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if ((double) Mission.Current.CurrentTime - (double) this._lastPerkTickTime < 1.0)
        return;
      this._lastPerkTickTime = Mission.Current.CurrentTime;
      MPPerkObject.TickAllPeerPerks((int) ((double) this._lastPerkTickTime / 1.0));
    }

    public virtual bool CheckForWarmupEnd() => false;

    public virtual bool CheckForRoundEnd() => false;

    public virtual bool CheckForMatchEnd() => false;

    public virtual bool UseCultureSelection() => false;

    public virtual bool UseRoundController() => false;

    public virtual Team GetWinnerTeam() => (Team) null;

    public virtual void OnPeerChangedTeam(NetworkCommunicator peer, Team oldTeam, Team newTeam)
    {
    }

    public override void OnClearScene()
    {
      base.OnClearScene();
      if (this.RoundController == null)
        this.ClearPeerCounts();
      this._lastPerkTickTime = Mission.Current.CurrentTime;
    }

    public void ClearPeerCounts()
    {
      List<MissionPeer> missionPeerList = VirtualPlayer.Peers<MissionPeer>();
      for (int index = 0; index < missionPeerList.Count; ++index)
      {
        MissionPeer peerComponent = missionPeerList[index];
        peerComponent.AssistCount = 0;
        peerComponent.DeathCount = 0;
        peerComponent.KillCount = 0;
        peerComponent.Score = 0;
        peerComponent.ResetRequestedKickPollCount();
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new KillDeathCountChange(peerComponent.GetNetworkPeer(), (NetworkCommunicator) null, peerComponent.KillCount, peerComponent.AssistCount, peerComponent.DeathCount, peerComponent.Score));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
    }

    public bool ShouldSpawnVisualsForServer(NetworkCommunicator spawningNetworkPeer)
    {
      if (GameNetwork.IsDedicatedServer)
        return false;
      NetworkCommunicator myPeer = GameNetwork.MyPeer;
      MissionPeer component1 = myPeer != null ? myPeer.GetComponent<MissionPeer>() : (MissionPeer) null;
      if (component1 == null)
        return false;
      MissionPeer component2 = spawningNetworkPeer.GetComponent<MissionPeer>();
      return !this.IsGameModeHidingAllAgentVisuals && component2.Team == component1.Team || spawningNetworkPeer.IsServerPeer;
    }

    public void HandleAgentVisualSpawning(
      NetworkCommunicator spawningNetworkPeer,
      AgentBuildData spawningAgentBuildData,
      int troopCountInFormation = 0,
      bool useCosmetics = true)
    {
      MissionPeer component = spawningNetworkPeer.GetComponent<MissionPeer>();
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new SyncPerksForCurrentlySelectedTroop(spawningNetworkPeer, component.Perks[component.SelectedTroopIndex]));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.ExcludeOtherTeamPlayers, spawningNetworkPeer);
      component.HasSpawnedAgentVisuals = true;
      component.EquipmentUpdatingExpired = false;
      if (useCosmetics)
        this.AddCosmeticItemsToEquipment(spawningAgentBuildData.AgentOverridenSpawnEquipment, this.GetUsedCosmeticsFromPeer(component, spawningAgentBuildData.AgentCharacter));
      if (!this.IsGameModeHidingAllAgentVisuals)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new CreateAgentVisuals(spawningNetworkPeer, spawningAgentBuildData, component.SelectedTroopIndex, troopCountInFormation));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.ExcludeOtherTeamPlayers, spawningNetworkPeer);
      }
      else
      {
        if (spawningNetworkPeer.IsServerPeer)
          return;
        GameNetwork.BeginModuleEventAsServer(spawningNetworkPeer);
        GameNetwork.WriteMessage((GameNetworkMessage) new CreateAgentVisuals(spawningNetworkPeer, spawningAgentBuildData, component.SelectedTroopIndex, troopCountInFormation));
        GameNetwork.EndModuleEventAsServer();
      }
    }

    public virtual bool AllowCustomPlayerBanners() => true;

    public int GetScoreForKill(Agent killedAgent) => 20;

    public virtual float GetTroopNumberMultiplierForMissingPlayer(MissionPeer spawningPeer) => 1f;

    public int GetCurrentGoldForPeer(MissionPeer peer) => peer.Representative.Gold;

    public void ChangeCurrentGoldForPeer(MissionPeer peer, int newAmount)
    {
      if (newAmount >= 0)
        newAmount = MBMath.ClampInt(newAmount, 0, 2000);
      if (peer.Peer.Communicator.IsConnectionActive)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SyncGoldsForSkirmish(peer.Peer, newAmount));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      if (this.GameModeBaseClient == null)
        return;
      this.GameModeBaseClient.OnGoldAmountChangedForRepresentative(peer.Representative, newAmount);
    }

    protected override void HandleLateNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
      if (!this.GameModeBaseClient.IsGameModeUsingGold)
        return;
      foreach (NetworkCommunicator networkPeer1 in GameNetwork.NetworkPeers)
      {
        if (networkPeer1 != networkPeer)
        {
          MissionRepresentativeBase component = networkPeer1.GetComponent<MissionRepresentativeBase>();
          if (component != null)
          {
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new SyncGoldsForSkirmish(component.Peer, component.Gold));
            GameNetwork.EndModuleEventAsServer();
          }
        }
      }
    }

    public virtual bool CheckIfPlayerCanDespawn(MissionPeer missionPeer) => false;

    public override void OnPreMissionTick(float dt)
    {
      this.CanGameModeSystemsTickThisFrame = false;
      this._gameModeSystemTickTimer += dt;
      if ((double) this._gameModeSystemTickTimer < 0.25)
        return;
      this._gameModeSystemTickTimer -= 0.25f;
      this.CanGameModeSystemsTickThisFrame = true;
    }

    public Dictionary<string, string> GetUsedCosmeticsFromPeer(
      MissionPeer missionPeer,
      BasicCharacterObject selectedTroopCharacter)
    {
      if (missionPeer.Peer.UsedCosmetics == null)
        return (Dictionary<string, string>) null;
      Dictionary<string, string> cosmeticsFromPeer = new Dictionary<string, string>();
      MBReadOnlyList<MultiplayerClassDivisions.MPHeroClass> objectTypeList = MBObjectManager.Instance.GetObjectTypeList<MultiplayerClassDivisions.MPHeroClass>();
      int num = -1;
      for (int index = 0; index < objectTypeList.Count; ++index)
      {
        if (objectTypeList[index].HeroCharacter == selectedTroopCharacter || objectTypeList[index].TroopCharacter == selectedTroopCharacter)
        {
          num = index;
          break;
        }
      }
      List<int> intList;
      missionPeer.Peer.UsedCosmetics.TryGetValue(num, out intList);
      if (intList != null)
      {
        foreach (int index in intList)
        {
          if (CosmeticsManager.CosmeticElementsList[index] is ClothingCosmeticElement cosmeticElements)
          {
            foreach (string key in cosmeticElements.ReplaceItemsId)
              cosmeticsFromPeer.Add(key, CosmeticsManager.CosmeticElementsList[index].Id);
            foreach (Tuple<string, string> tuple in cosmeticElements.ReplaceItemless)
            {
              if (tuple.Item1 == objectTypeList[num].StringId)
              {
                cosmeticsFromPeer.Add(tuple.Item2, CosmeticsManager.CosmeticElementsList[index].Id);
                break;
              }
            }
          }
        }
      }
      return cosmeticsFromPeer;
    }

    public void AddCosmeticItemsToEquipment(
      Equipment equipment,
      Dictionary<string, string> choosenCosmetics)
    {
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.ArmorItemEndSlot; ++index)
      {
        if (equipment[index].Item == null)
        {
          string key = index.ToString();
          switch (index)
          {
            case EquipmentIndex.NumAllWeaponSlots:
              key = "Head";
              break;
            case EquipmentIndex.Body:
              key = "Body";
              break;
            case EquipmentIndex.Leg:
              key = "Leg";
              break;
            case EquipmentIndex.Gloves:
              key = "Gloves";
              break;
            case EquipmentIndex.Cape:
              key = "Cape";
              break;
          }
          string objectName = (string) null;
          choosenCosmetics?.TryGetValue(key, out objectName);
          if (objectName != null)
          {
            ItemObject itemObject = MBObjectManager.Instance.GetObject<ItemObject>(objectName);
            EquipmentElement equipmentElement = equipment[index] with
            {
              CosmeticItem = itemObject
            };
            equipment[index] = equipmentElement;
          }
        }
        else
        {
          string stringId = equipment[index].Item.StringId;
          string objectName = (string) null;
          choosenCosmetics?.TryGetValue(stringId, out objectName);
          if (objectName != null)
          {
            ItemObject itemObject = MBObjectManager.Instance.GetObject<ItemObject>(objectName);
            EquipmentElement equipmentElement = equipment[index] with
            {
              CosmeticItem = itemObject
            };
            equipment[index] = equipmentElement;
          }
        }
      }
    }

    public bool IsClassAvailable(MultiplayerClassDivisions.MPHeroClass heroClass)
    {
      FormationClass result;
      if (Enum.TryParse<FormationClass>(heroClass.ClassGroup.StringId, out result))
        return this.MissionLobbyComponent.IsClassAvailable(result);
      Debug.FailedAssert("\"" + heroClass.ClassGroup.StringId + "\" does not match with any FormationClass.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MultiplayerGameModeLogics\\ServerGameModeLogics\\MissionMultiplayerGameModeBase.cs", nameof (IsClassAvailable), 388);
      return false;
    }
  }
}
