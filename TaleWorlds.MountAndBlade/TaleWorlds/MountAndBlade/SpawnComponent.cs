// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SpawnComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SpawnComponent : MissionLogic
  {
    private MissionMultiplayerGameModeBase _missionMultiplayerGameModeBase;

    public SpawnFrameBehaviorBase SpawnFrameBehavior { get; private set; }

    public SpawningBehaviorBase SpawningBehavior { get; private set; }

    public SpawnComponent(
      SpawnFrameBehaviorBase spawnFrameBehavior,
      SpawningBehaviorBase spawningBehavior)
    {
      this.SpawnFrameBehavior = spawnFrameBehavior;
      this.SpawningBehavior = spawningBehavior;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._missionMultiplayerGameModeBase = this.Mission.GetMissionBehavior<MissionMultiplayerGameModeBase>();
    }

    public bool AreAgentsSpawning() => this.SpawningBehavior.AreAgentsSpawning();

    public void SetNewSpawnFrameBehavior(SpawnFrameBehaviorBase spawnFrameBehavior)
    {
      this.SpawnFrameBehavior = spawnFrameBehavior;
      if (this.SpawnFrameBehavior == null)
        return;
      this.SpawnFrameBehavior.Initialize();
    }

    public void SetNewSpawningBehavior(SpawningBehaviorBase spawningBehavior)
    {
      this.SpawningBehavior = spawningBehavior;
      if (this.SpawningBehavior == null)
        return;
      this.SpawningBehavior.Initialize(this);
    }

    protected override void OnEndMission()
    {
      base.OnEndMission();
      this.SpawningBehavior.Clear();
    }

    public static void SetSiegeSpawningBehavior()
    {
      Mission.Current.GetMissionBehavior<SpawnComponent>().SetNewSpawnFrameBehavior((SpawnFrameBehaviorBase) new SiegeSpawnFrameBehavior());
      Mission.Current.GetMissionBehavior<SpawnComponent>().SetNewSpawningBehavior((SpawningBehaviorBase) new SiegeSpawningBehavior());
    }

    public static void SetFlagDominationSpawningBehavior()
    {
      Mission.Current.GetMissionBehavior<SpawnComponent>().SetNewSpawnFrameBehavior((SpawnFrameBehaviorBase) new FlagDominationSpawnFrameBehavior());
      Mission.Current.GetMissionBehavior<SpawnComponent>().SetNewSpawningBehavior((SpawningBehaviorBase) new FlagDominationSpawningBehavior());
    }

    public static void SetWarmupSpawningBehavior()
    {
      Mission.Current.GetMissionBehavior<SpawnComponent>().SetNewSpawnFrameBehavior((SpawnFrameBehaviorBase) new FFASpawnFrameBehavior());
      Mission.Current.GetMissionBehavior<SpawnComponent>().SetNewSpawningBehavior((SpawningBehaviorBase) new WarmupSpawningBehavior());
    }

    public static void SetSpawningBehaviorForCurrentGameType(MultiplayerGameType currentGameType)
    {
      switch (currentGameType)
      {
        case MultiplayerGameType.Siege:
          SpawnComponent.SetSiegeSpawningBehavior();
          break;
        case MultiplayerGameType.Battle:
        case MultiplayerGameType.Captain:
        case MultiplayerGameType.Skirmish:
          SpawnComponent.SetFlagDominationSpawningBehavior();
          break;
      }
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.SetNewSpawnFrameBehavior(this.SpawnFrameBehavior);
      this.SetNewSpawningBehavior(this.SpawningBehavior);
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      this.SpawningBehavior.OnTick(dt);
    }

    protected void StartSpawnSession() => this.SpawningBehavior.RequestStartSpawnSession();

    public MatrixFrame GetSpawnFrame(Team team, bool hasMount, bool isInitialSpawn = false)
    {
      SpawnFrameBehaviorBase spawnFrameBehavior = this.SpawnFrameBehavior;
      return spawnFrameBehavior == null ? MatrixFrame.Identity : spawnFrameBehavior.GetSpawnFrame(team, hasMount, isInitialSpawn);
    }

    protected void SpawnEquipmentUpdated(MissionPeer lobbyPeer, Equipment equipment)
    {
      if (!GameNetwork.IsServer || lobbyPeer == null || !this.SpawningBehavior.CanUpdateSpawnEquipment(lobbyPeer) || !lobbyPeer.HasSpawnedAgentVisuals)
        return;
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new EquipEquipmentToPeer(lobbyPeer.GetNetworkPeer(), equipment));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
    }

    public void SetEarlyAgentVisualsDespawning(MissionPeer missionPeer, bool canDespawnEarly = true)
    {
      if (missionPeer == null || !this.AllowEarlyAgentVisualsDespawning(missionPeer))
        return;
      missionPeer.EquipmentUpdatingExpired = canDespawnEarly;
    }

    public void ToggleUpdatingSpawnEquipment(bool canUpdate)
    {
      this.SpawningBehavior.ToggleUpdatingSpawnEquipment(canUpdate);
    }

    public bool AllowEarlyAgentVisualsDespawning(MissionPeer lobbyPeer)
    {
      return this._missionMultiplayerGameModeBase.IsClassAvailable(MultiplayerClassDivisions.GetMPHeroClassForPeer(lobbyPeer)) && this.SpawningBehavior.AllowEarlyAgentVisualsDespawning(lobbyPeer);
    }

    public int GetMaximumReSpawnPeriodForPeer(MissionPeer lobbyPeer)
    {
      return this.SpawningBehavior.GetMaximumReSpawnPeriodForPeer(lobbyPeer);
    }

    public override void OnClearScene()
    {
      base.OnClearScene();
      this.SpawningBehavior.OnClearScene();
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow blow)
    {
      this.SpawningBehavior.OnAgentRemoved(affectedAgent, affectorAgent, agentState, blow);
      this.SpawnFrameBehavior.OnAgentRemoved(affectedAgent, affectorAgent, agentState, blow);
    }
  }
}
