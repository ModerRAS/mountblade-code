// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionLobbyEquipmentNetworkComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromClient;
using NetworkMessages.FromServer;
using System;
using System.Linq;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionLobbyEquipmentNetworkComponent : MissionNetwork
  {
    private MultiplayerMissionAgentVisualSpawnComponent _agentVisualSpawnComponent;

    public event MissionLobbyEquipmentNetworkComponent.OnToggleLoadoutDelegate OnToggleLoadout;

    public event MissionLobbyEquipmentNetworkComponent.OnRefreshEquipmentEventDelegate OnEquipmentRefreshed;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      if (GameNetwork.IsDedicatedServer)
        return;
      this._agentVisualSpawnComponent = Mission.Current.GetMissionBehavior<MultiplayerMissionAgentVisualSpawnComponent>();
      this._agentVisualSpawnComponent.OnMyAgentVisualSpawned += new Action(this.OpenLoadout);
      this._agentVisualSpawnComponent.OnMyAgentSpawnedFromVisual += new Action(this.CloseLoadout);
      this._agentVisualSpawnComponent.OnMyAgentVisualRemoved += new Action(this.CloseLoadout);
    }

    protected override void OnEndMission()
    {
      if (!GameNetwork.IsDedicatedServer)
      {
        this._agentVisualSpawnComponent.OnMyAgentVisualSpawned -= new Action(this.OpenLoadout);
        this._agentVisualSpawnComponent.OnMyAgentSpawnedFromVisual -= new Action(this.CloseLoadout);
        this._agentVisualSpawnComponent.OnMyAgentVisualRemoved -= new Action(this.CloseLoadout);
        this._agentVisualSpawnComponent = (MultiplayerMissionAgentVisualSpawnComponent) null;
      }
      base.OnEndMission();
    }

    protected override void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
      if (GameNetwork.IsServer)
      {
        registerer.RegisterBaseHandler<RequestTroopIndexChange>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventLobbyEquipmentUpdated));
        registerer.RegisterBaseHandler<TeamInitialPerkInfoMessage>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventTeamInitialPerkInfoMessage));
        registerer.RegisterBaseHandler<RequestPerkChange>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventRequestPerkChange));
      }
      else
      {
        if (!GameNetwork.IsClientOrReplay)
          return;
        registerer.RegisterBaseHandler<UpdateSelectedTroopIndex>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventEquipmentIndexUpdated));
        registerer.RegisterBaseHandler<NetworkMessages.FromServer.SyncPerksForCurrentlySelectedTroop>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.SyncPerksForCurrentlySelectedTroop));
      }
    }

    private void HandleServerEventEquipmentIndexUpdated(GameNetworkMessage baseMessage)
    {
      UpdateSelectedTroopIndex selectedTroopIndex = (UpdateSelectedTroopIndex) baseMessage;
      selectedTroopIndex.Peer.GetComponent<MissionPeer>().SelectedTroopIndex = selectedTroopIndex.SelectedTroopIndex;
    }

    private void SyncPerksForCurrentlySelectedTroop(GameNetworkMessage baseMessage)
    {
      NetworkMessages.FromServer.SyncPerksForCurrentlySelectedTroop currentlySelectedTroop = (NetworkMessages.FromServer.SyncPerksForCurrentlySelectedTroop) baseMessage;
      MissionPeer component = currentlySelectedTroop.Peer.GetComponent<MissionPeer>();
      for (int perkListIndex = 0; perkListIndex < 3; ++perkListIndex)
        component.SelectPerk(perkListIndex, currentlySelectedTroop.PerkIndices[perkListIndex], component.SelectedTroopIndex);
    }

    private bool HandleClientEventLobbyEquipmentUpdated(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      RequestTroopIndexChange troopIndexChange = (RequestTroopIndexChange) baseMessage;
      MissionPeer component = peer.GetComponent<MissionPeer>();
      if (component == null)
        return false;
      SpawnComponent missionBehavior = this.Mission.GetMissionBehavior<SpawnComponent>();
      if (missionBehavior == null)
        return false;
      if (missionBehavior.AreAgentsSpawning() && component.SelectedTroopIndex != troopIndexChange.SelectedTroopIndex)
      {
        component.SelectedTroopIndex = component.Culture == null || troopIndexChange.SelectedTroopIndex < 0 || MultiplayerClassDivisions.GetMPHeroClasses(component.Culture).Count<MultiplayerClassDivisions.MPHeroClass>() <= troopIndexChange.SelectedTroopIndex ? 0 : troopIndexChange.SelectedTroopIndex;
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new UpdateSelectedTroopIndex(peer, component.SelectedTroopIndex));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.ExcludeOtherTeamPlayers, peer);
        if (this.OnEquipmentRefreshed != null)
          this.OnEquipmentRefreshed(component);
      }
      return true;
    }

    private bool HandleClientEventTeamInitialPerkInfoMessage(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      TeamInitialPerkInfoMessage initialPerkInfoMessage = (TeamInitialPerkInfoMessage) baseMessage;
      MissionPeer component = peer.GetComponent<MissionPeer>();
      if (component == null || this.Mission.GetMissionBehavior<SpawnComponent>() == null)
        return false;
      component.OnTeamInitialPerkInfoReceived(initialPerkInfoMessage.Perks);
      return true;
    }

    private bool HandleClientEventRequestPerkChange(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      RequestPerkChange requestPerkChange = (RequestPerkChange) baseMessage;
      MissionPeer component = peer.GetComponent<MissionPeer>();
      if (component == null)
        return false;
      SpawnComponent missionBehavior = this.Mission.GetMissionBehavior<SpawnComponent>();
      if (missionBehavior == null)
        return false;
      if (component.SelectPerk(requestPerkChange.PerkListIndex, requestPerkChange.PerkIndex) && missionBehavior.AreAgentsSpawning() && this.OnEquipmentRefreshed != null)
        this.OnEquipmentRefreshed(component);
      return true;
    }

    public void PerkUpdated(int perkList, int perkIndex)
    {
      if (GameNetwork.IsServer)
      {
        MissionPeer component = GameNetwork.MyPeer.GetComponent<MissionPeer>();
        if (this.OnEquipmentRefreshed == null)
          return;
        this.OnEquipmentRefreshed(component);
      }
      else
      {
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new RequestPerkChange(perkList, perkIndex));
        GameNetwork.EndModuleEventAsClient();
      }
    }

    public void EquipmentUpdated()
    {
      if (GameNetwork.IsServer)
      {
        MissionPeer component = GameNetwork.MyPeer.GetComponent<MissionPeer>();
        if (component.SelectedTroopIndex == component.NextSelectedTroopIndex)
          return;
        component.SelectedTroopIndex = component.NextSelectedTroopIndex;
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new UpdateSelectedTroopIndex(GameNetwork.MyPeer, component.SelectedTroopIndex));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.ExcludeOtherTeamPlayers, GameNetwork.MyPeer);
        if (this.OnEquipmentRefreshed == null)
          return;
        this.OnEquipmentRefreshed(component);
      }
      else
      {
        MissionPeer component = GameNetwork.MyPeer.GetComponent<MissionPeer>();
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new RequestTroopIndexChange(component.NextSelectedTroopIndex));
        GameNetwork.EndModuleEventAsClient();
      }
    }

    public void ToggleLoadout(bool isActive)
    {
      if (this.OnToggleLoadout == null)
        return;
      this.OnToggleLoadout(isActive);
    }

    private void OpenLoadout() => this.ToggleLoadout(true);

    private void CloseLoadout() => this.ToggleLoadout(false);

    public delegate void OnToggleLoadoutDelegate(bool isActive);

    public delegate void OnRefreshEquipmentEventDelegate(MissionPeer lobbyPeer);
  }
}
