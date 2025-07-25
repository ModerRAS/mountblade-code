// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeSpawningBehavior
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SiegeSpawningBehavior : SpawningBehaviorBase
  {
    public override void Initialize(SpawnComponent spawnComponent)
    {
      base.Initialize(spawnComponent);
      this.OnAllAgentsFromPeerSpawnedFromVisuals += new Action<MissionPeer>(this.OnAllAgentsFromPeerSpawnedFromVisuals);
      if (this.GameMode.WarmupComponent != null)
        return;
      this.RequestStartSpawnSession();
    }

    public override void Clear()
    {
      base.Clear();
      this.OnAllAgentsFromPeerSpawnedFromVisuals -= new Action<MissionPeer>(this.OnAllAgentsFromPeerSpawnedFromVisuals);
    }

    public override void OnTick(float dt)
    {
      if (this.IsSpawningEnabled && this._spawnCheckTimer.Check(this.Mission.CurrentTime))
        this.SpawnAgents();
      base.OnTick(dt);
    }

    protected override void SpawnAgents()
    {
      BasicCultureObject basicCultureObject1 = MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam1.GetStrValue());
      BasicCultureObject basicCultureObject2 = MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam2.GetStrValue());
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        if (networkPeer.IsSynchronized)
        {
          MissionPeer component = networkPeer.GetComponent<MissionPeer>();
          if (component != null && component.ControlledAgent == null && !component.HasSpawnedAgentVisuals && component.Team != null && component.Team != this.Mission.SpectatorTeam && component.TeamInitialPerkInfoReady && component.SpawnTimer.Check(this.Mission.CurrentTime))
          {
            BasicCultureObject basicCultureObject3 = component.Team.Side == BattleSideEnum.Attacker ? basicCultureObject1 : basicCultureObject2;
            MultiplayerClassDivisions.MPHeroClass heroClassForPeer = MultiplayerClassDivisions.GetMPHeroClassForPeer(component);
            if (heroClassForPeer == null || heroClassForPeer.TroopCasualCost > this.GameMode.GetCurrentGoldForPeer(component))
            {
              if (component.SelectedTroopIndex != 0)
              {
                component.SelectedTroopIndex = 0;
                GameNetwork.BeginBroadcastModuleEvent();
                GameNetwork.WriteMessage((GameNetworkMessage) new UpdateSelectedTroopIndex(networkPeer, 0));
                GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.ExcludeOtherTeamPlayers, networkPeer);
              }
            }
            else
            {
              BasicCharacterObject heroCharacter = heroClassForPeer.HeroCharacter;
              Equipment equipment = heroCharacter.Equipment.Clone();
              IEnumerable<(EquipmentIndex, EquipmentElement)> alternativeEquipments = MPPerkObject.GetOnSpawnPerkHandler(component)?.GetAlternativeEquipments(true);
              if (alternativeEquipments != null)
              {
                foreach ((EquipmentIndex, EquipmentElement) tuple in alternativeEquipments)
                  equipment[tuple.Item1] = tuple.Item2;
              }
              AgentBuildData agentBuildData = new AgentBuildData(heroCharacter).MissionPeer(component).Equipment(equipment).Team(component.Team).TroopOrigin((IAgentOriginBase) new BasicBattleAgentOrigin(heroCharacter)).IsFemale(component.Peer.IsFemale).BodyProperties(this.GetBodyProperties(component, component.Team == this.Mission.AttackerTeam ? basicCultureObject1 : basicCultureObject2)).VisualsIndex(0).ClothingColor1(component.Team == this.Mission.AttackerTeam ? basicCultureObject3.Color : basicCultureObject3.ClothAlternativeColor).ClothingColor2(component.Team == this.Mission.AttackerTeam ? basicCultureObject3.Color2 : basicCultureObject3.ClothAlternativeColor2);
              if (this.GameMode.ShouldSpawnVisualsForServer(networkPeer))
              {
                this.AgentVisualSpawnComponent.SpawnAgentVisualsForPeer(component, agentBuildData, component.SelectedTroopIndex);
                if (agentBuildData.AgentVisualsIndex == 0)
                {
                  component.HasSpawnedAgentVisuals = true;
                  component.EquipmentUpdatingExpired = false;
                }
              }
              this.GameMode.HandleAgentVisualSpawning(networkPeer, agentBuildData);
            }
          }
        }
      }
    }

    public override bool AllowEarlyAgentVisualsDespawning(MissionPeer lobbyPeer) => true;

    public override int GetMaximumReSpawnPeriodForPeer(MissionPeer peer)
    {
      if (this.GameMode.WarmupComponent != null && this.GameMode.WarmupComponent.IsInWarmup)
        return 3;
      if (peer.Team != null)
      {
        if (peer.Team.Side == BattleSideEnum.Attacker)
          return MultiplayerOptions.OptionType.RespawnPeriodTeam1.GetIntValue();
        if (peer.Team.Side == BattleSideEnum.Defender)
          return MultiplayerOptions.OptionType.RespawnPeriodTeam2.GetIntValue();
      }
      return -1;
    }

    protected override bool IsRoundInProgress()
    {
      return Mission.Current.CurrentState == Mission.State.Continuing;
    }

    private void OnAllAgentsFromPeerSpawnedFromVisuals(MissionPeer peer)
    {
      bool flag = peer.Team == this.Mission.AttackerTeam;
      Team defenderTeam = this.Mission.DefenderTeam;
      MultiplayerClassDivisions.MPHeroClass mpHeroClass = MultiplayerClassDivisions.GetMPHeroClasses(MBObjectManager.Instance.GetObject<BasicCultureObject>(flag ? MultiplayerOptions.OptionType.CultureTeam1.GetStrValue() : MultiplayerOptions.OptionType.CultureTeam2.GetStrValue())).ElementAt<MultiplayerClassDivisions.MPHeroClass>(peer.SelectedTroopIndex);
      this.GameMode.ChangeCurrentGoldForPeer(peer, this.GameMode.GetCurrentGoldForPeer(peer) - mpHeroClass.TroopCasualCost);
    }
  }
}
