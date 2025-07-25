// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.WarmupSpawningBehavior
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class WarmupSpawningBehavior : SpawningBehaviorBase
  {
    public WarmupSpawningBehavior() => this.IsSpawningEnabled = true;

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
            IAgentVisual agentVisualForPeer = component.GetAgentVisualForPeer(0);
            BasicCultureObject basicCultureObject3 = component.Team.Side == BattleSideEnum.Attacker ? basicCultureObject1 : basicCultureObject2;
            int num = component.SelectedTroopIndex;
            IEnumerable<MultiplayerClassDivisions.MPHeroClass> mpHeroClasses = MultiplayerClassDivisions.GetMPHeroClasses(basicCultureObject3);
            MultiplayerClassDivisions.MPHeroClass mpHeroClass = num < 0 ? (MultiplayerClassDivisions.MPHeroClass) null : mpHeroClasses.ElementAt<MultiplayerClassDivisions.MPHeroClass>(num);
            if (mpHeroClass == null && num < 0)
            {
              mpHeroClass = mpHeroClasses.First<MultiplayerClassDivisions.MPHeroClass>();
              num = 0;
            }
            BasicCharacterObject heroCharacter = mpHeroClass.HeroCharacter;
            Equipment equipment = heroCharacter.Equipment.Clone();
            IEnumerable<(EquipmentIndex, EquipmentElement)> alternativeEquipments = MPPerkObject.GetOnSpawnPerkHandler(component)?.GetAlternativeEquipments(true);
            if (alternativeEquipments != null)
            {
              foreach ((EquipmentIndex, EquipmentElement) tuple in alternativeEquipments)
                equipment[tuple.Item1] = tuple.Item2;
            }
            MatrixFrame matrixFrame;
            if (agentVisualForPeer == null)
            {
              matrixFrame = this.SpawnComponent.GetSpawnFrame(component.Team, heroCharacter.Equipment.Horse.Item != null);
            }
            else
            {
              matrixFrame = agentVisualForPeer.GetFrame();
              matrixFrame.rotation.MakeUnit();
            }
            AgentBuildData agentBuildData = new AgentBuildData(heroCharacter).MissionPeer(component).Equipment(equipment).Team(component.Team).TroopOrigin((IAgentOriginBase) new BasicBattleAgentOrigin(heroCharacter)).InitialPosition(in matrixFrame.origin).InitialDirection(matrixFrame.rotation.f.AsVec2.Normalized()).IsFemale(component.Peer.IsFemale).BodyProperties(this.GetBodyProperties(component, basicCultureObject3)).VisualsIndex(0).ClothingColor1(component.Team == this.Mission.AttackerTeam ? basicCultureObject3.Color : basicCultureObject3.ClothAlternativeColor).ClothingColor2(component.Team == this.Mission.AttackerTeam ? basicCultureObject3.Color2 : basicCultureObject3.ClothAlternativeColor2);
            if (this.GameMode.ShouldSpawnVisualsForServer(networkPeer))
            {
              this.AgentVisualSpawnComponent.SpawnAgentVisualsForPeer(component, agentBuildData, num);
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

    public override bool AllowEarlyAgentVisualsDespawning(MissionPeer lobbyPeer) => true;

    public override int GetMaximumReSpawnPeriodForPeer(MissionPeer peer) => 3;

    protected override bool IsRoundInProgress()
    {
      return Mission.Current.CurrentState == Mission.State.Continuing;
    }

    public override void Clear()
    {
      base.Clear();
      this.RequestStopSpawnSession();
    }
  }
}
