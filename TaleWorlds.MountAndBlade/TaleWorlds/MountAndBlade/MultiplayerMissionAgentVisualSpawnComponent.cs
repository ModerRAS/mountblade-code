// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerMissionAgentVisualSpawnComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerMissionAgentVisualSpawnComponent : MissionNetwork
  {
    private MultiplayerMissionAgentVisualSpawnComponent.VisualSpawnFrameSelectionHelper _spawnFrameSelectionHelper;

    public event Action OnMyAgentVisualSpawned;

    public event Action OnMyAgentSpawnedFromVisual;

    public event Action OnMyAgentVisualRemoved;

    public void SpawnAgentVisualsForPeer(
      MissionPeer missionPeer,
      AgentBuildData buildData,
      int selectedEquipmentSetIndex = -1,
      bool isBot = false,
      int totalTroopCount = 0)
    {
      NetworkCommunicator myPeer = GameNetwork.MyPeer;
      if (myPeer != null)
        myPeer.GetComponent<MissionPeer>();
      if (buildData.AgentVisualsIndex == 0)
        missionPeer.ClearAllVisuals();
      missionPeer.ClearVisuals(buildData.AgentVisualsIndex);
      Equipment equipment = new Equipment(buildData.AgentOverridenSpawnEquipment);
      ItemObject mountItem = equipment[10].Item;
      MatrixFrame pointFrameForPlayer = this._spawnFrameSelectionHelper.GetSpawnPointFrameForPlayer(missionPeer.Peer, missionPeer.Team.Side, buildData.AgentVisualsIndex, totalTroopCount, mountItem != null);
      ActionIndexCache actionIndexCache1 = mountItem == null ? SpawningBehaviorBase.PoseActionInfantry : SpawningBehaviorBase.PoseActionCavalry;
      MultiplayerClassDivisions.MPHeroClass classForCharacter = MultiplayerClassDivisions.GetMPHeroClassForCharacter(buildData.AgentCharacter);
      MBReadOnlyList<MPPerkObject> selectedPerks = missionPeer.SelectedPerks;
      float parameter = (float) (0.10000000149011612 + (double) MBRandom.RandomFloat * 0.800000011920929);
      IAgentVisual mountVisuals = (IAgentVisual) null;
      if (mountItem != null)
      {
        Monster monster = mountItem.HorseComponent.Monster;
        AgentVisualsData data = new AgentVisualsData().Equipment(equipment).Scale(mountItem.ScaleFactor).Frame(MatrixFrame.Identity).ActionSet(MBGlobals.GetActionSet(monster.ActionSetCode)).Scene(Mission.Current.Scene).Monster(monster).PrepareImmediately(false).MountCreationKey(MountCreationKey.GetRandomMountKeyString(mountItem, MBRandom.RandomInt()));
        mountVisuals = Mission.Current.AgentVisualCreator.Create(data, "Agent " + buildData.AgentCharacter.StringId + " mount", true, false);
        MatrixFrame frame = pointFrameForPlayer;
        frame.rotation.ApplyScaleLocal(data.ScaleData);
        ActionIndexCache actionName = ActionIndexCache.act_none;
        foreach (MPPerkObject mpPerkObject in (List<MPPerkObject>) selectedPerks)
        {
          if (!isBot && mpPerkObject.HeroMountIdleAnimOverride != null)
          {
            actionName = ActionIndexCache.Create(mpPerkObject.HeroMountIdleAnimOverride);
            break;
          }
          if (isBot && mpPerkObject.TroopMountIdleAnimOverride != null)
          {
            actionName = ActionIndexCache.Create(mpPerkObject.TroopMountIdleAnimOverride);
            break;
          }
        }
        if (actionName == ActionIndexCache.act_none)
        {
          if (mountItem.StringId == "mp_aserai_camel")
          {
            Debug.Print("Client is spawning a camel for without mountCustomAction from the perk.", debugFilter: 17179869184UL);
            actionName = isBot ? ActionIndexCache.Create("act_camel_idle_1") : ActionIndexCache.Create("act_hero_mount_idle_camel");
          }
          else
          {
            if (!isBot && !string.IsNullOrEmpty(classForCharacter.HeroMountIdleAnim))
              actionName = ActionIndexCache.Create(classForCharacter.HeroMountIdleAnim);
            if (isBot && !string.IsNullOrEmpty(classForCharacter.TroopMountIdleAnim))
              actionName = ActionIndexCache.Create(classForCharacter.TroopMountIdleAnim);
          }
        }
        if (actionName != ActionIndexCache.act_none)
        {
          mountVisuals.SetAction(actionName);
          mountVisuals.GetVisuals().GetSkeleton().SetAnimationParameterAtChannel(0, parameter);
          mountVisuals.GetVisuals().GetSkeleton().TickAnimationsAndForceUpdate(0.1f, frame, true);
        }
        mountVisuals.GetVisuals().GetEntity().SetFrame(ref frame);
      }
      ActionIndexCache actionIndexCache2 = actionIndexCache1;
      if (mountVisuals != null)
      {
        actionIndexCache2 = mountVisuals.GetVisuals().GetSkeleton().GetActionAtChannel(0);
      }
      else
      {
        foreach (MPPerkObject mpPerkObject in (List<MPPerkObject>) selectedPerks)
        {
          if (!isBot && mpPerkObject.HeroIdleAnimOverride != null)
          {
            actionIndexCache2 = ActionIndexCache.Create(mpPerkObject.HeroIdleAnimOverride);
            break;
          }
          if (isBot && mpPerkObject.TroopIdleAnimOverride != null)
          {
            actionIndexCache2 = ActionIndexCache.Create(mpPerkObject.TroopIdleAnimOverride);
            break;
          }
        }
        if (actionIndexCache2 == actionIndexCache1)
        {
          if (!isBot && !string.IsNullOrEmpty(classForCharacter.HeroIdleAnim))
            actionIndexCache2 = ActionIndexCache.Create(classForCharacter.HeroIdleAnim);
          if (isBot && !string.IsNullOrEmpty(classForCharacter.TroopIdleAnim))
            actionIndexCache2 = ActionIndexCache.Create(classForCharacter.TroopIdleAnim);
        }
      }
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(buildData.AgentCharacter.Race);
      IAgentVisual agentVisuals = Mission.Current.AgentVisualCreator.Create(new AgentVisualsData().Equipment(equipment).BodyProperties(buildData.AgentBodyProperties).Frame(pointFrameForPlayer).ActionSet(MBActionSet.GetActionSet(baseMonsterFromRace.ActionSetCode)).Scene(Mission.Current.Scene).Monster(baseMonsterFromRace).PrepareImmediately(false).UseMorphAnims(true).SkeletonType(buildData.AgentIsFemale ? SkeletonType.Female : SkeletonType.Male).ClothColor1(buildData.AgentClothingColor1).ClothColor2(buildData.AgentClothingColor2).AddColorRandomness(buildData.AgentVisualsIndex != 0).ActionCode(actionIndexCache2), "Mission::SpawnAgentVisuals", true, false);
      agentVisuals.SetAction(actionIndexCache2);
      agentVisuals.GetVisuals().GetSkeleton().SetAnimationParameterAtChannel(0, parameter);
      agentVisuals.GetVisuals().GetSkeleton().TickAnimationsAndForceUpdate(0.1f, pointFrameForPlayer, true);
      agentVisuals.GetVisuals().SetFrame(ref pointFrameForPlayer);
      agentVisuals.SetCharacterObjectID(buildData.AgentCharacter.StringId);
      EquipmentIndex mainHandWeaponIndex;
      EquipmentIndex offHandWeaponIndex;
      bool isMainHandNotUsableWithOneHand;
      equipment.GetInitialWeaponIndicesToEquip(out mainHandWeaponIndex, out offHandWeaponIndex, out isMainHandNotUsableWithOneHand);
      if (isMainHandNotUsableWithOneHand)
        offHandWeaponIndex = EquipmentIndex.None;
      agentVisuals.GetVisuals().SetWieldedWeaponIndices((int) mainHandWeaponIndex, (int) offHandWeaponIndex);
      PeerVisualsHolder visualsHolder = new PeerVisualsHolder(missionPeer, buildData.AgentVisualsIndex, agentVisuals, mountVisuals);
      missionPeer.OnVisualsSpawned(visualsHolder, visualsHolder.VisualsIndex);
      if (!missionPeer.IsMine || buildData.AgentVisualsIndex != 0)
        return;
      Action agentVisualSpawned = this.OnMyAgentVisualSpawned;
      if (agentVisualSpawned == null)
        return;
      agentVisualSpawned();
    }

    public void RemoveAgentVisuals(MissionPeer missionPeer, bool sync = false)
    {
      missionPeer.ClearAllVisuals();
      if (!GameNetwork.IsDedicatedServer && !missionPeer.Peer.IsMine)
        this._spawnFrameSelectionHelper.FreeSpawnPointFromPlayer(missionPeer.Peer);
      if (this.OnMyAgentVisualRemoved != null && missionPeer.IsMine)
        this.OnMyAgentVisualRemoved();
      Debug.Print("Removed visuals for " + missionPeer.Name + ".", debugFilter: 17179869184UL);
    }

    public void OnMyAgentSpawned()
    {
      Action spawnedFromVisual = this.OnMyAgentSpawnedFromVisual;
      if (spawnedFromVisual == null)
        return;
      spawnedFromVisual();
    }

    public override void OnPreMissionTick(float dt)
    {
      if (GameNetwork.IsDedicatedServer || this._spawnFrameSelectionHelper != null || Mission.Current == null || GameNetwork.MyPeer == null)
        return;
      this._spawnFrameSelectionHelper = new MultiplayerMissionAgentVisualSpawnComponent.VisualSpawnFrameSelectionHelper();
    }

    private class VisualSpawnFrameSelectionHelper
    {
      private const string SpawnPointTagPrefix = "sp_visual_";
      private const string AttackerSpawnPointTagPrefix = "sp_visual_attacker_";
      private const string DefenderSpawnPointTagPrefix = "sp_visual_defender_";
      private const int NumberOfSpawnPoints = 6;
      private const int PlayerSpawnPointIndex = 0;
      private GameEntity[] _visualSpawnPoints;
      private GameEntity[] _visualAttackerSpawnPoints;
      private GameEntity[] _visualDefenderSpawnPoints;
      private VirtualPlayer[] _visualSpawnPointUsers;

      public VisualSpawnFrameSelectionHelper()
      {
        this._visualSpawnPoints = new GameEntity[6];
        this._visualAttackerSpawnPoints = new GameEntity[6];
        this._visualDefenderSpawnPoints = new GameEntity[6];
        this._visualSpawnPointUsers = new VirtualPlayer[6];
        for (int index = 0; index < 6; ++index)
        {
          List<GameEntity> list1 = Mission.Current.Scene.FindEntitiesWithTag("sp_visual_" + (object) index).ToList<GameEntity>();
          if (list1.Count > 0)
            this._visualSpawnPoints[index] = list1[0];
          List<GameEntity> list2 = Mission.Current.Scene.FindEntitiesWithTag("sp_visual_attacker_" + (object) index).ToList<GameEntity>();
          if (list2.Count > 0)
            this._visualAttackerSpawnPoints[index] = list2[0];
          List<GameEntity> list3 = Mission.Current.Scene.FindEntitiesWithTag("sp_visual_defender_" + (object) index).ToList<GameEntity>();
          if (list3.Count > 0)
            this._visualDefenderSpawnPoints[index] = list3[0];
        }
        this._visualSpawnPointUsers[0] = GameNetwork.MyPeer.VirtualPlayer;
      }

      public MatrixFrame GetSpawnPointFrameForPlayer(
        VirtualPlayer player,
        BattleSideEnum side,
        int agentVisualIndex,
        int totalTroopCount,
        bool isMounted = false)
      {
        if (agentVisualIndex == 0)
        {
          int num1 = -1;
          int num2 = -1;
          for (int index = 0; index < this._visualSpawnPointUsers.Length; ++index)
          {
            if (this._visualSpawnPointUsers[index] == player)
            {
              num1 = index;
              break;
            }
            if (num2 < 0 && this._visualSpawnPointUsers[index] == null)
              num2 = index;
          }
          int index1 = num1 >= 0 ? num1 : num2;
          if (index1 >= 0)
          {
            this._visualSpawnPointUsers[index1] = player;
            GameEntity gameEntity = (GameEntity) null;
            switch (side)
            {
              case BattleSideEnum.Defender:
                gameEntity = this._visualDefenderSpawnPoints[index1];
                break;
              case BattleSideEnum.Attacker:
                gameEntity = this._visualAttackerSpawnPoints[index1];
                break;
            }
            MatrixFrame pointFrameForPlayer = gameEntity != null ? gameEntity.GetGlobalFrame() : this._visualSpawnPoints[index1].GetGlobalFrame();
            pointFrameForPlayer.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
            return pointFrameForPlayer;
          }
          Debug.FailedAssert("Couldn't find a valid spawn point for player.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MultiplayerMissionAgentVisualSpawnComponent.cs", nameof (GetSpawnPointFrameForPlayer), 139);
          return MatrixFrame.Identity;
        }
        Vec3 origin1 = this._visualSpawnPoints[3].GetGlobalFrame().origin;
        Vec3 origin2 = this._visualSpawnPoints[1].GetGlobalFrame().origin;
        Vec3 origin3 = this._visualSpawnPoints[5].GetGlobalFrame().origin;
        Mat3 rotation = this._visualSpawnPoints[0].GetGlobalFrame().rotation;
        rotation.MakeUnit();
        List<WorldFrame> formationCreation = Formation.GetFormationFramesForBeforeFormationCreation(origin2.Distance(origin3), totalTroopCount, isMounted, new WorldPosition(Mission.Current.Scene, origin1), rotation);
        return formationCreation.Count < agentVisualIndex ? new MatrixFrame(rotation, origin1) : formationCreation[agentVisualIndex - 1].ToGroundMatrixFrame();
      }

      public void FreeSpawnPointFromPlayer(VirtualPlayer player)
      {
        for (int index = 0; index < this._visualSpawnPointUsers.Length; ++index)
        {
          if (this._visualSpawnPointUsers[index] == player)
          {
            this._visualSpawnPointUsers[index] = (VirtualPlayer) null;
            break;
          }
        }
      }
    }
  }
}
