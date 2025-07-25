// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionNetworkComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromClient;
using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class MissionNetworkComponent : MissionNetwork
  {
    private float _accumulatedTimeSinceLastTimerSync;
    private const float TimerSyncPeriod = 2f;
    private ChatBox _chatBox;

    public event Action OnMyClientSynchronized;

    public event Action<NetworkCommunicator> OnClientSynchronizedEvent;

    protected override void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
      if (GameNetwork.IsClientOrReplay)
      {
        registerer.RegisterBaseHandler<CreateFreeMountAgent>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventCreateFreeMountAgentEvent));
        registerer.RegisterBaseHandler<CreateAgent>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventCreateAgent));
        registerer.RegisterBaseHandler<SynchronizeAgentSpawnEquipment>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSynchronizeAgentEquipment));
        registerer.RegisterBaseHandler<CreateAgentVisuals>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventCreateAgentVisuals));
        registerer.RegisterBaseHandler<RemoveAgentVisualsForPeer>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventRemoveAgentVisualsForPeer));
        registerer.RegisterBaseHandler<RemoveAgentVisualsFromIndexForPeer>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventRemoveAgentVisualsFromIndexForPeer));
        registerer.RegisterBaseHandler<ReplaceBotWithPlayer>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventReplaceBotWithPlayer));
        registerer.RegisterBaseHandler<SetWieldedItemIndex>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetWieldedItemIndex));
        registerer.RegisterBaseHandler<SetWeaponNetworkData>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetWeaponNetworkData));
        registerer.RegisterBaseHandler<SetWeaponAmmoData>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetWeaponAmmoData));
        registerer.RegisterBaseHandler<SetWeaponReloadPhase>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetWeaponReloadPhase));
        registerer.RegisterBaseHandler<WeaponUsageIndexChangeMessage>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventWeaponUsageIndexChangeMessage));
        registerer.RegisterBaseHandler<StartSwitchingWeaponUsageIndex>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventStartSwitchingWeaponUsageIndex));
        registerer.RegisterBaseHandler<InitializeFormation>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventInitializeFormation));
        registerer.RegisterBaseHandler<SetSpawnedFormationCount>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetSpawnedFormationCount));
        registerer.RegisterBaseHandler<AddTeam>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAddTeam));
        registerer.RegisterBaseHandler<TeamSetIsEnemyOf>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventTeamSetIsEnemyOf));
        registerer.RegisterBaseHandler<AssignFormationToPlayer>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAssignFormationToPlayer));
        registerer.RegisterBaseHandler<ExistingObjectsBegin>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventExistingObjectsBegin));
        registerer.RegisterBaseHandler<ExistingObjectsEnd>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventExistingObjectsEnd));
        registerer.RegisterBaseHandler<ClearMission>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventClearMission));
        registerer.RegisterBaseHandler<CreateMissionObject>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventCreateMissionObject));
        registerer.RegisterBaseHandler<RemoveMissionObject>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventRemoveMissionObject));
        registerer.RegisterBaseHandler<StopPhysicsAndSetFrameOfMissionObject>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventStopPhysicsAndSetFrameOfMissionObject));
        registerer.RegisterBaseHandler<BurstMissionObjectParticles>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventBurstMissionObjectParticles));
        registerer.RegisterBaseHandler<SetMissionObjectVisibility>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectVisibility));
        registerer.RegisterBaseHandler<SetMissionObjectDisabled>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectDisabled));
        registerer.RegisterBaseHandler<SetMissionObjectColors>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectColors));
        registerer.RegisterBaseHandler<SetMissionObjectFrame>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectFrame));
        registerer.RegisterBaseHandler<SetMissionObjectGlobalFrame>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectGlobalFrame));
        registerer.RegisterBaseHandler<SetMissionObjectFrameOverTime>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectFrameOverTime));
        registerer.RegisterBaseHandler<SetMissionObjectGlobalFrameOverTime>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectGlobalFrameOverTime));
        registerer.RegisterBaseHandler<SetMissionObjectAnimationAtChannel>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectAnimationAtChannel));
        registerer.RegisterBaseHandler<SetMissionObjectAnimationChannelParameter>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectAnimationChannelParameter));
        registerer.RegisterBaseHandler<SetMissionObjectAnimationPaused>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectAnimationPaused));
        registerer.RegisterBaseHandler<SetMissionObjectVertexAnimation>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectVertexAnimation));
        registerer.RegisterBaseHandler<SetMissionObjectVertexAnimationProgress>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectVertexAnimationProgress));
        registerer.RegisterBaseHandler<SetMissionObjectImpulse>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMissionObjectImpulse));
        registerer.RegisterBaseHandler<AddMissionObjectBodyFlags>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAddMissionObjectBodyFlags));
        registerer.RegisterBaseHandler<RemoveMissionObjectBodyFlags>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventRemoveMissionObjectBodyFlags));
        registerer.RegisterBaseHandler<SetMachineTargetRotation>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetMachineTargetRotation));
        registerer.RegisterBaseHandler<SetUsableMissionObjectIsDeactivated>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetUsableGameObjectIsDeactivated));
        registerer.RegisterBaseHandler<SetUsableMissionObjectIsDisabledForPlayers>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetUsableGameObjectIsDisabledForPlayers));
        registerer.RegisterBaseHandler<SetRangedSiegeWeaponState>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetRangedSiegeWeaponState));
        registerer.RegisterBaseHandler<SetRangedSiegeWeaponAmmo>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetRangedSiegeWeaponAmmo));
        registerer.RegisterBaseHandler<RangedSiegeWeaponChangeProjectile>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventRangedSiegeWeaponChangeProjectile));
        registerer.RegisterBaseHandler<SetStonePileAmmo>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetStonePileAmmo));
        registerer.RegisterBaseHandler<SetSiegeMachineMovementDistance>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetSiegeMachineMovementDistance));
        registerer.RegisterBaseHandler<SetSiegeLadderState>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetSiegeLadderState));
        registerer.RegisterBaseHandler<SetAgentTargetPositionAndDirection>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetAgentTargetPositionAndDirection));
        registerer.RegisterBaseHandler<SetAgentTargetPosition>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetAgentTargetPosition));
        registerer.RegisterBaseHandler<ClearAgentTargetFrame>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventClearAgentTargetFrame));
        registerer.RegisterBaseHandler<AgentTeleportToFrame>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAgentTeleportToFrame));
        registerer.RegisterBaseHandler<SetSiegeTowerGateState>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetSiegeTowerGateState));
        registerer.RegisterBaseHandler<SetSiegeTowerHasArrivedAtTarget>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetSiegeTowerHasArrivedAtTarget));
        registerer.RegisterBaseHandler<SetBatteringRamHasArrivedAtTarget>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetBatteringRamHasArrivedAtTarget));
        registerer.RegisterBaseHandler<SetPeerTeam>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetPeerTeam));
        registerer.RegisterBaseHandler<SynchronizeMissionTimeTracker>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSyncMissionTimer));
        registerer.RegisterBaseHandler<SetAgentPeer>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetAgentPeer));
        registerer.RegisterBaseHandler<SetAgentIsPlayer>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetAgentIsPlayer));
        registerer.RegisterBaseHandler<SetAgentHealth>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetAgentHealth));
        registerer.RegisterBaseHandler<AgentSetTeam>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAgentSetTeam));
        registerer.RegisterBaseHandler<SetAgentActionSet>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetAgentActionSet));
        registerer.RegisterBaseHandler<MakeAgentDead>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventMakeAgentDead));
        registerer.RegisterBaseHandler<AgentSetFormation>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAgentSetFormation));
        registerer.RegisterBaseHandler<AddPrefabComponentToAgentBone>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAddPrefabComponentToAgentBone));
        registerer.RegisterBaseHandler<SetAgentPrefabComponentVisibility>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSetAgentPrefabComponentVisibility));
        registerer.RegisterBaseHandler<UseObject>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventUseObject));
        registerer.RegisterBaseHandler<StopUsingObject>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventStopUsingObject));
        registerer.RegisterBaseHandler<SyncObjectHitpoints>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventHitSynchronizeObjectHitpoints));
        registerer.RegisterBaseHandler<SyncObjectDestructionLevel>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventHitSynchronizeObjectDestructionLevel));
        registerer.RegisterBaseHandler<BurstAllHeavyHitParticles>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventHitBurstAllHeavyHitParticles));
        registerer.RegisterBaseHandler<SynchronizeMissionObject>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSynchronizeMissionObject));
        registerer.RegisterBaseHandler<SpawnWeaponWithNewEntity>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSpawnWeaponWithNewEntity));
        registerer.RegisterBaseHandler<AttachWeaponToSpawnedWeapon>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAttachWeaponToSpawnedWeapon));
        registerer.RegisterBaseHandler<AttachWeaponToAgent>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAttachWeaponToAgent));
        registerer.RegisterBaseHandler<SpawnWeaponAsDropFromAgent>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSpawnWeaponAsDropFromAgent));
        registerer.RegisterBaseHandler<SpawnAttachedWeaponOnSpawnedWeapon>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSpawnAttachedWeaponOnSpawnedWeapon));
        registerer.RegisterBaseHandler<SpawnAttachedWeaponOnCorpse>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSpawnAttachedWeaponOnCorpse));
        registerer.RegisterBaseHandler<HandleMissileCollisionReaction>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventHandleMissileCollisionReaction));
        registerer.RegisterBaseHandler<RemoveEquippedWeapon>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventRemoveEquippedWeapon));
        registerer.RegisterBaseHandler<BarkAgent>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventBarkAgent));
        registerer.RegisterBaseHandler<EquipWeaponWithNewEntity>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventEquipWeaponWithNewEntity));
        registerer.RegisterBaseHandler<AttachWeaponToWeaponInAgentEquipmentSlot>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAttachWeaponToWeaponInAgentEquipmentSlot));
        registerer.RegisterBaseHandler<EquipWeaponFromSpawnedItemEntity>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventEquipWeaponFromSpawnedItemEntity));
        registerer.RegisterBaseHandler<CreateMissile>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventCreateMissile));
        registerer.RegisterBaseHandler<CombatLogNetworkMessage>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventAgentHit));
        registerer.RegisterBaseHandler<ConsumeWeaponAmount>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventConsumeWeaponAmount));
      }
      else
      {
        if (!GameNetwork.IsServer)
          return;
        registerer.RegisterBaseHandler<SetFollowedAgent>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventSetFollowedAgent));
        registerer.RegisterBaseHandler<SetMachineRotation>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventSetMachineRotation));
        registerer.RegisterBaseHandler<RequestUseObject>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventRequestUseObject));
        registerer.RegisterBaseHandler<RequestStopUsingObject>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventRequestStopUsingObject));
        registerer.RegisterBaseHandler<ApplyOrder>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventApplyOrder));
        registerer.RegisterBaseHandler<ApplySiegeWeaponOrder>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventApplySiegeWeaponOrder));
        registerer.RegisterBaseHandler<ApplyOrderWithPosition>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventApplyOrderWithPosition));
        registerer.RegisterBaseHandler<ApplyOrderWithFormation>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventApplyOrderWithFormation));
        registerer.RegisterBaseHandler<ApplyOrderWithFormationAndPercentage>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventApplyOrderWithFormationAndPercentage));
        registerer.RegisterBaseHandler<ApplyOrderWithFormationAndNumber>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventApplyOrderWithFormationAndNumber));
        registerer.RegisterBaseHandler<ApplyOrderWithTwoPositions>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventApplyOrderWithTwoPositions));
        registerer.RegisterBaseHandler<ApplyOrderWithMissionObject>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventApplyOrderWithGameEntity));
        registerer.RegisterBaseHandler<ApplyOrderWithAgent>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventApplyOrderWithAgent));
        registerer.RegisterBaseHandler<SelectAllFormations>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventSelectAllFormations));
        registerer.RegisterBaseHandler<SelectAllSiegeWeapons>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventSelectAllSiegeWeapons));
        registerer.RegisterBaseHandler<ClearSelectedFormations>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventClearSelectedFormations));
        registerer.RegisterBaseHandler<SelectFormation>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventSelectFormation));
        registerer.RegisterBaseHandler<SelectSiegeWeapon>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventSelectSiegeWeapon));
        registerer.RegisterBaseHandler<UnselectFormation>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventUnselectFormation));
        registerer.RegisterBaseHandler<UnselectSiegeWeapon>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventUnselectSiegeWeapon));
        registerer.RegisterBaseHandler<DropWeapon>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventDropWeapon));
        registerer.RegisterBaseHandler<TauntSelected>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventCheerSelected));
        registerer.RegisterBaseHandler<BarkSelected>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventBarkSelected));
        registerer.RegisterBaseHandler<AgentVisualsBreakInvulnerability>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventBreakAgentVisualsInvulnerability));
        registerer.RegisterBaseHandler<RequestToSpawnAsBot>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventRequestToSpawnAsBot));
      }
    }

    private Team GetTeamOfPeer(NetworkCommunicator networkPeer)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      if (component.ControlledAgent == null)
      {
        MBDebug.Print("peer.ControlledAgent == null");
        return (Team) null;
      }
      Team team = component.ControlledAgent.Team;
      if (team != null)
        return team;
      MBDebug.Print("peersTeam == null");
      return team;
    }

    private OrderController GetOrderControllerOfPeer(NetworkCommunicator networkPeer)
    {
      Team teamOfPeer = this.GetTeamOfPeer(networkPeer);
      if (teamOfPeer != null)
        return teamOfPeer.GetOrderControllerOf(networkPeer.ControlledAgent);
      MBDebug.Print("peersTeam == null");
      return (OrderController) null;
    }

    private void HandleServerEventSyncMissionTimer(GameNetworkMessage baseMessage)
    {
      this.Mission.MissionTimeTracker.UpdateSync(((SynchronizeMissionTimeTracker) baseMessage).CurrentTime);
    }

    private void HandleServerEventSetPeerTeam(GameNetworkMessage baseMessage)
    {
      SetPeerTeam setPeerTeam = (SetPeerTeam) baseMessage;
      MissionPeer component = setPeerTeam.Peer.GetComponent<MissionPeer>();
      component.Team = Mission.MissionNetworkHelper.GetTeamFromTeamIndex(setPeerTeam.TeamIndex);
      if (!setPeerTeam.Peer.IsMine)
        return;
      this.Mission.PlayerTeam = component.Team;
    }

    private void HandleServerEventCreateFreeMountAgentEvent(GameNetworkMessage baseMessage)
    {
      CreateFreeMountAgent createFreeMountAgent = (CreateFreeMountAgent) baseMessage;
      Mission mission = this.Mission;
      EquipmentElement horseItem = createFreeMountAgent.HorseItem;
      EquipmentElement horseHarnessItem = createFreeMountAgent.HorseHarnessItem;
      // ISSUE: explicit reference operation
      ref Vec3 local1 = @createFreeMountAgent.Position;
      Vec2 vec2 = createFreeMountAgent.Direction;
      vec2 = vec2.Normalized();
      ref Vec2 local2 = ref vec2;
      int agentIndex = createFreeMountAgent.AgentIndex;
      mission.SpawnMonster(horseItem, horseHarnessItem, in local1, in local2, agentIndex);
    }

    private void HandleServerEventCreateAgent(GameNetworkMessage baseMessage)
    {
      CreateAgent createAgent = (CreateAgent) baseMessage;
      BasicCharacterObject character = createAgent.Character;
      NetworkCommunicator peer = createAgent.Peer;
      MissionPeer component = peer != null ? peer.GetComponent<MissionPeer>() : (MissionPeer) null;
      Team teamFromTeamIndex = Mission.MissionNetworkHelper.GetTeamFromTeamIndex(createAgent.TeamIndex);
      AgentBuildData agentBuildData1 = new AgentBuildData(character).MissionPeer(createAgent.IsPlayerAgent ? component : (MissionPeer) null).Monster(createAgent.Monster).TroopOrigin((IAgentOriginBase) new BasicBattleAgentOrigin(character)).Equipment(createAgent.SpawnEquipment).EquipmentSeed(createAgent.BodyPropertiesSeed).InitialPosition(createAgent.Position);
      Vec2 vec2 = createAgent.Direction;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      AgentBuildData agentBuildData2 = agentBuildData1.InitialDirection(in local).MissionEquipment(createAgent.MissionEquipment).Team(teamFromTeamIndex).Index(createAgent.AgentIndex).MountIndex(createAgent.MountAgentIndex).IsFemale(createAgent.IsFemale).ClothingColor1(createAgent.ClothingColor1).ClothingColor2(createAgent.ClothingColor2);
      Formation formation = (Formation) null;
      if (teamFromTeamIndex != null && createAgent.FormationIndex >= 0 && !GameNetwork.IsReplay)
      {
        formation = teamFromTeamIndex.GetFormation((FormationClass) createAgent.FormationIndex);
        agentBuildData2.Formation(formation);
      }
      if (createAgent.IsPlayerAgent)
      {
        agentBuildData2.BodyProperties(component.Peer.BodyProperties);
        agentBuildData2.Age((int) agentBuildData2.AgentBodyProperties.Age);
      }
      else
        agentBuildData2.BodyProperties(BodyProperties.GetRandomBodyProperties(agentBuildData2.AgentRace, agentBuildData2.AgentIsFemale, character.GetBodyPropertiesMin(), character.GetBodyPropertiesMax(), (int) agentBuildData2.AgentOverridenSpawnEquipment.HairCoverType, agentBuildData2.AgentEquipmentSeed, character.HairTags, character.BeardTags, character.TattooTags));
      Banner banner = (Banner) null;
      if (formation != null)
      {
        if (!string.IsNullOrEmpty(formation.BannerCode))
        {
          if (formation.Banner == null)
          {
            banner = new Banner(formation.BannerCode, teamFromTeamIndex.Color, teamFromTeamIndex.Color2);
            formation.Banner = banner;
          }
          else
            banner = formation.Banner;
        }
      }
      else if (component != null)
        banner = new Banner(component.Peer.BannerCode, teamFromTeamIndex.Color, teamFromTeamIndex.Color2);
      agentBuildData2.Banner(banner);
      Agent mountAgent = this.Mission.SpawnAgent(agentBuildData2).MountAgent;
    }

    private void HandleServerEventSynchronizeAgentEquipment(GameNetworkMessage baseMessage)
    {
      SynchronizeAgentSpawnEquipment agentSpawnEquipment = (SynchronizeAgentSpawnEquipment) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(agentSpawnEquipment.AgentIndex).UpdateSpawnEquipmentAndRefreshVisuals(agentSpawnEquipment.SpawnEquipment);
    }

    private void HandleServerEventCreateAgentVisuals(GameNetworkMessage baseMessage)
    {
      CreateAgentVisuals createAgentVisuals = (CreateAgentVisuals) baseMessage;
      MissionPeer component = createAgentVisuals.Peer.GetComponent<MissionPeer>();
      BattleSideEnum side = component.Team.Side;
      BasicCharacterObject character = createAgentVisuals.Character;
      BasicCultureObject culture = character.Culture;
      AgentBuildData buildData = new AgentBuildData(character).VisualsIndex(createAgentVisuals.VisualsIndex).Equipment(createAgentVisuals.Equipment).EquipmentSeed(createAgentVisuals.BodyPropertiesSeed).IsFemale(createAgentVisuals.IsFemale).ClothingColor1(side == BattleSideEnum.Attacker ? culture.Color : culture.ClothAlternativeColor).ClothingColor2(side == BattleSideEnum.Attacker ? culture.Color2 : culture.ClothAlternativeColor2);
      if (createAgentVisuals.VisualsIndex == 0)
        buildData.BodyProperties(component.Peer.BodyProperties);
      else
        buildData.BodyProperties(BodyProperties.GetRandomBodyProperties(buildData.AgentRace, buildData.AgentIsFemale, character.GetBodyPropertiesMin(), character.GetBodyPropertiesMax(), (int) buildData.AgentOverridenSpawnEquipment.HairCoverType, createAgentVisuals.BodyPropertiesSeed, character.HairTags, character.BeardTags, character.TattooTags));
      this.Mission.GetMissionBehavior<MultiplayerMissionAgentVisualSpawnComponent>().SpawnAgentVisualsForPeer(component, buildData, createAgentVisuals.SelectedEquipmentSetIndex, totalTroopCount: createAgentVisuals.TroopCountInFormation);
      if (buildData.AgentVisualsIndex != 0)
        return;
      component.HasSpawnedAgentVisuals = true;
      component.EquipmentUpdatingExpired = false;
    }

    private void HandleServerEventRemoveAgentVisualsForPeer(GameNetworkMessage baseMessage)
    {
      MissionPeer component = ((RemoveAgentVisualsForPeer) baseMessage).Peer.GetComponent<MissionPeer>();
      this.Mission.GetMissionBehavior<MultiplayerMissionAgentVisualSpawnComponent>().RemoveAgentVisuals(component);
      component.HasSpawnedAgentVisuals = false;
    }

    private void HandleServerEventRemoveAgentVisualsFromIndexForPeer(GameNetworkMessage baseMessage)
    {
      ((RemoveAgentVisualsFromIndexForPeer) baseMessage).Peer.GetComponent<MissionPeer>();
    }

    private void HandleServerEventReplaceBotWithPlayer(GameNetworkMessage baseMessage)
    {
      ReplaceBotWithPlayer replaceBotWithPlayer = (ReplaceBotWithPlayer) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(replaceBotWithPlayer.BotAgentIndex);
      if (agentFromIndex.Formation != null)
        agentFromIndex.Formation.PlayerOwner = agentFromIndex;
      MissionPeer component = replaceBotWithPlayer.Peer.GetComponent<MissionPeer>();
      agentFromIndex.MissionPeer = replaceBotWithPlayer.Peer.GetComponent<MissionPeer>();
      agentFromIndex.Formation = component.ControlledFormation;
      agentFromIndex.Health = (float) replaceBotWithPlayer.Health;
      if (agentFromIndex.MountAgent != null)
        agentFromIndex.MountAgent.Health = (float) replaceBotWithPlayer.MountHealth;
      if (agentFromIndex.Formation == null)
        return;
      agentFromIndex.Team.AssignPlayerAsSergeantOfFormation(component, component.ControlledFormation.FormationIndex);
    }

    private void HandleServerEventSetWieldedItemIndex(GameNetworkMessage baseMessage)
    {
      SetWieldedItemIndex wieldedItemIndex = (SetWieldedItemIndex) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(wieldedItemIndex.AgentIndex);
      if (agentFromIndex == null)
        return;
      agentFromIndex.SetWieldedItemIndexAsClient(wieldedItemIndex.IsLeftHand ? Agent.HandIndex.OffHand : Agent.HandIndex.MainHand, wieldedItemIndex.WieldedItemIndex, wieldedItemIndex.IsWieldedInstantly, wieldedItemIndex.IsWieldedOnSpawn, wieldedItemIndex.MainHandCurrentUsageIndex);
      agentFromIndex.UpdateAgentStats();
    }

    private void HandleServerEventSetWeaponNetworkData(GameNetworkMessage baseMessage)
    {
      SetWeaponNetworkData weaponNetworkData = (SetWeaponNetworkData) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(weaponNetworkData.AgentIndex);
      WeaponComponentData primaryWeapon = agentFromIndex.Equipment[weaponNetworkData.WeaponEquipmentIndex].Item?.PrimaryWeapon;
      if (primaryWeapon == null)
        return;
      if (primaryWeapon.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.HasHitPoints))
      {
        agentFromIndex.ChangeWeaponHitPoints(weaponNetworkData.WeaponEquipmentIndex, weaponNetworkData.DataValue);
      }
      else
      {
        if (!primaryWeapon.IsConsumable)
          return;
        agentFromIndex.SetWeaponAmountInSlot(weaponNetworkData.WeaponEquipmentIndex, weaponNetworkData.DataValue, true);
      }
    }

    private void HandleServerEventSetWeaponAmmoData(GameNetworkMessage baseMessage)
    {
      SetWeaponAmmoData setWeaponAmmoData = (SetWeaponAmmoData) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(setWeaponAmmoData.AgentIndex);
      if (agentFromIndex.Equipment[setWeaponAmmoData.WeaponEquipmentIndex].CurrentUsageItem.IsRangedWeapon)
        agentFromIndex.SetWeaponAmmoAsClient(setWeaponAmmoData.WeaponEquipmentIndex, setWeaponAmmoData.AmmoEquipmentIndex, setWeaponAmmoData.Ammo);
      else
        Debug.FailedAssert("Invalid item type.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MissionNetworkComponent.cs", nameof (HandleServerEventSetWeaponAmmoData), 463);
    }

    private void HandleServerEventSetWeaponReloadPhase(GameNetworkMessage baseMessage)
    {
      SetWeaponReloadPhase weaponReloadPhase = (SetWeaponReloadPhase) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(weaponReloadPhase.AgentIndex).SetWeaponReloadPhaseAsClient(weaponReloadPhase.EquipmentIndex, weaponReloadPhase.ReloadPhase);
    }

    private void HandleServerEventWeaponUsageIndexChangeMessage(GameNetworkMessage baseMessage)
    {
      WeaponUsageIndexChangeMessage indexChangeMessage = (WeaponUsageIndexChangeMessage) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(indexChangeMessage.AgentIndex).SetUsageIndexOfWeaponInSlotAsClient(indexChangeMessage.SlotIndex, indexChangeMessage.UsageIndex);
    }

    private void HandleServerEventStartSwitchingWeaponUsageIndex(GameNetworkMessage baseMessage)
    {
      StartSwitchingWeaponUsageIndex weaponUsageIndex = (StartSwitchingWeaponUsageIndex) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(weaponUsageIndex.AgentIndex).StartSwitchingWeaponUsageIndexAsClient(weaponUsageIndex.EquipmentIndex, weaponUsageIndex.UsageIndex, weaponUsageIndex.CurrentMovementFlagUsageDirection);
    }

    private void HandleServerEventInitializeFormation(GameNetworkMessage baseMessage)
    {
      InitializeFormation initializeFormation = (InitializeFormation) baseMessage;
      Mission.MissionNetworkHelper.GetTeamFromTeamIndex(initializeFormation.TeamIndex).GetFormation((FormationClass) initializeFormation.FormationIndex).BannerCode = initializeFormation.BannerCode;
    }

    private void HandleServerEventSetSpawnedFormationCount(GameNetworkMessage baseMessage)
    {
      SetSpawnedFormationCount spawnedFormationCount = (SetSpawnedFormationCount) baseMessage;
      this.Mission.NumOfFormationsSpawnedTeamOne = spawnedFormationCount.NumOfFormationsTeamOne;
      this.Mission.NumOfFormationsSpawnedTeamTwo = spawnedFormationCount.NumOfFormationsTeamTwo;
    }

    private void HandleServerEventAddTeam(GameNetworkMessage baseMessage)
    {
      AddTeam addTeam = (AddTeam) baseMessage;
      Banner banner = string.IsNullOrEmpty(addTeam.BannerCode) ? (Banner) null : new Banner(addTeam.BannerCode, addTeam.Color, addTeam.Color2);
      this.Mission.Teams.Add(addTeam.Side, addTeam.Color, addTeam.Color2, banner, addTeam.IsPlayerGeneral, addTeam.IsPlayerSergeant);
    }

    private void HandleServerEventTeamSetIsEnemyOf(GameNetworkMessage baseMessage)
    {
      TeamSetIsEnemyOf teamSetIsEnemyOf = (TeamSetIsEnemyOf) baseMessage;
      Mission.MissionNetworkHelper.GetTeamFromTeamIndex(teamSetIsEnemyOf.Team1Index).SetIsEnemyOf(Mission.MissionNetworkHelper.GetTeamFromTeamIndex(teamSetIsEnemyOf.Team2Index), teamSetIsEnemyOf.IsEnemyOf);
    }

    private void HandleServerEventAssignFormationToPlayer(GameNetworkMessage baseMessage)
    {
      AssignFormationToPlayer formationToPlayer = (AssignFormationToPlayer) baseMessage;
      MissionPeer component = formationToPlayer.Peer.GetComponent<MissionPeer>();
      component.Team.AssignPlayerAsSergeantOfFormation(component, formationToPlayer.FormationClass);
    }

    private void HandleServerEventExistingObjectsBegin(GameNetworkMessage baseMessage)
    {
    }

    private void HandleServerEventExistingObjectsEnd(GameNetworkMessage baseMessage)
    {
    }

    private void HandleServerEventClearMission(GameNetworkMessage baseMessage)
    {
      this.Mission.ResetMission();
    }

    private void HandleServerEventCreateMissionObject(GameNetworkMessage baseMessage)
    {
      CreateMissionObject createMissionObject = (CreateMissionObject) baseMessage;
      GameEntity gameEntity = GameEntity.Instantiate(this.Mission.Scene, createMissionObject.Prefab, createMissionObject.Frame);
      MissionObject firstScriptOfType1 = gameEntity.GetFirstScriptOfType<MissionObject>();
      if (firstScriptOfType1 == null)
        return;
      firstScriptOfType1.Id = createMissionObject.ObjectId;
      int num = 0;
      foreach (GameEntity child in gameEntity.GetChildren())
      {
        MissionObject firstScriptOfType2;
        if ((firstScriptOfType2 = child.GetFirstScriptOfType<MissionObject>()) != null)
          firstScriptOfType2.Id = createMissionObject.ChildObjectIds[num++];
      }
    }

    private void HandleServerEventRemoveMissionObject(GameNetworkMessage baseMessage)
    {
      RemoveMissionObject message = (RemoveMissionObject) baseMessage;
      this.Mission.MissionObjects.FirstOrDefault<MissionObject>((Func<MissionObject, bool>) (mo => mo.Id == message.ObjectId))?.GameEntity.Remove(82);
    }

    private void HandleServerEventStopPhysicsAndSetFrameOfMissionObject(
      GameNetworkMessage baseMessage)
    {
      StopPhysicsAndSetFrameOfMissionObject message = (StopPhysicsAndSetFrameOfMissionObject) baseMessage;
      SpawnedItemEntity spawnedItemEntity = (SpawnedItemEntity) this.Mission.MissionObjects.FirstOrDefault<MissionObject>((Func<MissionObject, bool>) (mo => mo.Id == message.ObjectId));
      MissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(message.ParentId);
      spawnedItemEntity?.StopPhysicsAndSetFrameForClient(message.Frame, fromMissionObjectId?.GameEntity);
    }

    private void HandleServerEventBurstMissionObjectParticles(GameNetworkMessage baseMessage)
    {
      BurstMissionObjectParticles missionObjectParticles = (BurstMissionObjectParticles) baseMessage;
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(missionObjectParticles.MissionObjectId) as SynchedMissionObject).BurstParticlesSynched(missionObjectParticles.DoChildren);
    }

    private void HandleServerEventSetMissionObjectVisibility(GameNetworkMessage baseMessage)
    {
      SetMissionObjectVisibility objectVisibility = (SetMissionObjectVisibility) baseMessage;
      Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(objectVisibility.MissionObjectId).GameEntity.SetVisibilityExcludeParents(objectVisibility.Visible);
    }

    private void HandleServerEventSetMissionObjectDisabled(GameNetworkMessage baseMessage)
    {
      Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(((SetMissionObjectDisabled) baseMessage).MissionObjectId).SetDisabledAndMakeInvisible();
    }

    private void HandleServerEventSetMissionObjectColors(GameNetworkMessage baseMessage)
    {
      SetMissionObjectColors missionObjectColors = (SetMissionObjectColors) baseMessage;
      if (!(Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(missionObjectColors.MissionObjectId) is SynchedMissionObject fromMissionObjectId))
        return;
      fromMissionObjectId.SetTeamColors(missionObjectColors.Color, missionObjectColors.Color2);
    }

    private void HandleServerEventSetMissionObjectFrame(GameNetworkMessage baseMessage)
    {
      SetMissionObjectFrame missionObjectFrame = (SetMissionObjectFrame) baseMessage;
      SynchedMissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(missionObjectFrame.MissionObjectId) as SynchedMissionObject;
      MatrixFrame frame = missionObjectFrame.Frame;
      ref MatrixFrame local = ref frame;
      fromMissionObjectId.SetFrameSynched(ref local, true);
    }

    private void HandleServerEventSetMissionObjectGlobalFrame(GameNetworkMessage baseMessage)
    {
      SetMissionObjectGlobalFrame objectGlobalFrame = (SetMissionObjectGlobalFrame) baseMessage;
      SynchedMissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(objectGlobalFrame.MissionObjectId) as SynchedMissionObject;
      MatrixFrame frame = objectGlobalFrame.Frame;
      ref MatrixFrame local = ref frame;
      fromMissionObjectId.SetGlobalFrameSynched(ref local, true);
    }

    private void HandleServerEventSetMissionObjectFrameOverTime(GameNetworkMessage baseMessage)
    {
      SetMissionObjectFrameOverTime objectFrameOverTime = (SetMissionObjectFrameOverTime) baseMessage;
      SynchedMissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(objectFrameOverTime.MissionObjectId) as SynchedMissionObject;
      MatrixFrame frame = objectFrameOverTime.Frame;
      ref MatrixFrame local = ref frame;
      double duration = (double) objectFrameOverTime.Duration;
      fromMissionObjectId.SetFrameSynchedOverTime(ref local, (float) duration, true);
    }

    private void HandleServerEventSetMissionObjectGlobalFrameOverTime(GameNetworkMessage baseMessage)
    {
      SetMissionObjectGlobalFrameOverTime globalFrameOverTime = (SetMissionObjectGlobalFrameOverTime) baseMessage;
      SynchedMissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(globalFrameOverTime.MissionObjectId) as SynchedMissionObject;
      MatrixFrame frame = globalFrameOverTime.Frame;
      ref MatrixFrame local = ref frame;
      double duration = (double) globalFrameOverTime.Duration;
      fromMissionObjectId.SetGlobalFrameSynchedOverTime(ref local, (float) duration, true);
    }

    private void HandleServerEventSetMissionObjectAnimationAtChannel(GameNetworkMessage baseMessage)
    {
      SetMissionObjectAnimationAtChannel animationAtChannel = (SetMissionObjectAnimationAtChannel) baseMessage;
      Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(animationAtChannel.MissionObjectId).GameEntity.Skeleton.SetAnimationAtChannel(animationAtChannel.AnimationIndex, animationAtChannel.ChannelNo, animationAtChannel.AnimationSpeed);
    }

    private void HandleServerEventSetRangedSiegeWeaponAmmo(GameNetworkMessage baseMessage)
    {
      SetRangedSiegeWeaponAmmo rangedSiegeWeaponAmmo = (SetRangedSiegeWeaponAmmo) baseMessage;
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(rangedSiegeWeaponAmmo.RangedSiegeWeaponId) as RangedSiegeWeapon).SetAmmo(rangedSiegeWeaponAmmo.AmmoCount);
    }

    private void HandleServerEventRangedSiegeWeaponChangeProjectile(GameNetworkMessage baseMessage)
    {
      RangedSiegeWeaponChangeProjectile changeProjectile = (RangedSiegeWeaponChangeProjectile) baseMessage;
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(changeProjectile.RangedSiegeWeaponId) as RangedSiegeWeapon).ChangeProjectileEntityClient(changeProjectile.Index);
    }

    private void HandleServerEventSetStonePileAmmo(GameNetworkMessage baseMessage)
    {
      SetStonePileAmmo setStonePileAmmo = (SetStonePileAmmo) baseMessage;
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(setStonePileAmmo.StonePileId) as StonePile).SetAmmo(setStonePileAmmo.AmmoCount);
    }

    private void HandleServerEventSetRangedSiegeWeaponState(GameNetworkMessage baseMessage)
    {
      SetRangedSiegeWeaponState siegeWeaponState = (SetRangedSiegeWeaponState) baseMessage;
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(siegeWeaponState.RangedSiegeWeaponId) as RangedSiegeWeapon).State = siegeWeaponState.State;
    }

    private void HandleServerEventSetSiegeLadderState(GameNetworkMessage baseMessage)
    {
      SetSiegeLadderState siegeLadderState = (SetSiegeLadderState) baseMessage;
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(siegeLadderState.SiegeLadderId) as SiegeLadder).State = siegeLadderState.State;
    }

    private void HandleServerEventSetSiegeTowerGateState(GameNetworkMessage baseMessage)
    {
      SetSiegeTowerGateState siegeTowerGateState = (SetSiegeTowerGateState) baseMessage;
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(siegeTowerGateState.SiegeTowerId) as SiegeTower).State = siegeTowerGateState.State;
    }

    private void HandleServerEventSetSiegeTowerHasArrivedAtTarget(GameNetworkMessage baseMessage)
    {
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(((SetSiegeTowerHasArrivedAtTarget) baseMessage).SiegeTowerId) as SiegeTower).HasArrivedAtTarget = true;
    }

    private void HandleServerEventSetBatteringRamHasArrivedAtTarget(GameNetworkMessage baseMessage)
    {
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(((SetBatteringRamHasArrivedAtTarget) baseMessage).BatteringRamId) as BatteringRam).HasArrivedAtTarget = true;
    }

    private void HandleServerEventSetSiegeMachineMovementDistance(GameNetworkMessage baseMessage)
    {
      SetSiegeMachineMovementDistance movementDistance = (SetSiegeMachineMovementDistance) baseMessage;
      if (!(Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(movementDistance.UsableMachineId) is UsableMachine fromMissionObjectId))
        return;
      if (fromMissionObjectId is SiegeTower)
        ((SiegeTower) fromMissionObjectId).MovementComponent.SetDistanceTraveledAsClient(movementDistance.Distance);
      else
        ((BatteringRam) fromMissionObjectId).MovementComponent.SetDistanceTraveledAsClient(movementDistance.Distance);
    }

    private void HandleServerEventSetMissionObjectAnimationChannelParameter(
      GameNetworkMessage baseMessage)
    {
      SetMissionObjectAnimationChannelParameter channelParameter = (SetMissionObjectAnimationChannelParameter) baseMessage;
      Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(channelParameter.MissionObjectId)?.GameEntity.Skeleton.SetAnimationParameterAtChannel(channelParameter.ChannelNo, channelParameter.Parameter);
    }

    private void HandleServerEventSetMissionObjectVertexAnimation(GameNetworkMessage baseMessage)
    {
      SetMissionObjectVertexAnimation objectVertexAnimation = (SetMissionObjectVertexAnimation) baseMessage;
      MissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(objectVertexAnimation.MissionObjectId);
      if (fromMissionObjectId == null)
        return;
      (fromMissionObjectId as VertexAnimator).SetAnimationSynched(objectVertexAnimation.BeginKey, objectVertexAnimation.EndKey, objectVertexAnimation.Speed);
    }

    private void HandleServerEventSetMissionObjectVertexAnimationProgress(
      GameNetworkMessage baseMessage)
    {
      SetMissionObjectVertexAnimationProgress animationProgress = (SetMissionObjectVertexAnimationProgress) baseMessage;
      MissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(animationProgress.MissionObjectId);
      if (fromMissionObjectId == null)
        return;
      (fromMissionObjectId as VertexAnimator).SetProgressSynched(animationProgress.Progress);
    }

    private void HandleServerEventSetMissionObjectAnimationPaused(GameNetworkMessage baseMessage)
    {
      SetMissionObjectAnimationPaused objectAnimationPaused = (SetMissionObjectAnimationPaused) baseMessage;
      MissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(objectAnimationPaused.MissionObjectId);
      if (fromMissionObjectId == null)
        return;
      if (objectAnimationPaused.IsPaused)
        fromMissionObjectId.GameEntity.PauseSkeletonAnimation();
      else
        fromMissionObjectId.GameEntity.ResumeSkeletonAnimation();
    }

    private void HandleServerEventAddMissionObjectBodyFlags(GameNetworkMessage baseMessage)
    {
      AddMissionObjectBodyFlags missionObjectBodyFlags = (AddMissionObjectBodyFlags) baseMessage;
      Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(missionObjectBodyFlags.MissionObjectId)?.GameEntity.AddBodyFlags(missionObjectBodyFlags.BodyFlags, missionObjectBodyFlags.ApplyToChildren);
    }

    private void HandleServerEventRemoveMissionObjectBodyFlags(GameNetworkMessage baseMessage)
    {
      RemoveMissionObjectBodyFlags missionObjectBodyFlags = (RemoveMissionObjectBodyFlags) baseMessage;
      Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(missionObjectBodyFlags.MissionObjectId)?.GameEntity.RemoveBodyFlags(missionObjectBodyFlags.BodyFlags, missionObjectBodyFlags.ApplyToChildren);
    }

    private void HandleServerEventSetMachineTargetRotation(GameNetworkMessage baseMessage)
    {
      SetMachineTargetRotation machineTargetRotation = (SetMachineTargetRotation) baseMessage;
      if (!(Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(machineTargetRotation.UsableMachineId) is UsableMachine fromMissionObjectId) || fromMissionObjectId.PilotAgent == null)
        return;
      ((RangedSiegeWeapon) fromMissionObjectId).AimAtRotation(machineTargetRotation.HorizontalRotation, machineTargetRotation.VerticalRotation);
    }

    private void HandleServerEventSetUsableGameObjectIsDeactivated(GameNetworkMessage baseMessage)
    {
      SetUsableMissionObjectIsDeactivated objectIsDeactivated = (SetUsableMissionObjectIsDeactivated) baseMessage;
      if (!(Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(objectIsDeactivated.UsableGameObjectId) is UsableMissionObject fromMissionObjectId))
        return;
      fromMissionObjectId.IsDeactivated = objectIsDeactivated.IsDeactivated;
    }

    private void HandleServerEventSetUsableGameObjectIsDisabledForPlayers(
      GameNetworkMessage baseMessage)
    {
      SetUsableMissionObjectIsDisabledForPlayers disabledForPlayers = (SetUsableMissionObjectIsDisabledForPlayers) baseMessage;
      if (!(Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(disabledForPlayers.UsableGameObjectId) is UsableMissionObject fromMissionObjectId))
        return;
      fromMissionObjectId.IsDisabledForPlayers = disabledForPlayers.IsDisabledForPlayers;
    }

    private void HandleServerEventSetMissionObjectImpulse(GameNetworkMessage baseMessage)
    {
      SetMissionObjectImpulse missionObjectImpulse = (SetMissionObjectImpulse) baseMessage;
      MissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(missionObjectImpulse.MissionObjectId);
      if (fromMissionObjectId == null)
        return;
      Vec3 position = missionObjectImpulse.Position;
      fromMissionObjectId.GameEntity.ApplyLocalImpulseToDynamicBody(position, missionObjectImpulse.Impulse);
    }

    private void HandleServerEventSetAgentTargetPositionAndDirection(GameNetworkMessage baseMessage)
    {
      SetAgentTargetPositionAndDirection positionAndDirection = (SetAgentTargetPositionAndDirection) baseMessage;
      Vec2 position = positionAndDirection.Position;
      Vec3 direction = positionAndDirection.Direction;
      Mission.MissionNetworkHelper.GetAgentFromIndex(positionAndDirection.AgentIndex).SetTargetPositionAndDirectionSynched(ref position, ref direction);
    }

    private void HandleServerEventSetAgentTargetPosition(GameNetworkMessage baseMessage)
    {
      SetAgentTargetPosition agentTargetPosition = (SetAgentTargetPosition) baseMessage;
      Vec2 position = agentTargetPosition.Position;
      Mission.MissionNetworkHelper.GetAgentFromIndex(agentTargetPosition.AgentIndex).SetTargetPositionSynched(ref position);
    }

    private void HandleServerEventClearAgentTargetFrame(GameNetworkMessage baseMessage)
    {
      Mission.MissionNetworkHelper.GetAgentFromIndex(((ClearAgentTargetFrame) baseMessage).AgentIndex).ClearTargetFrame();
    }

    private void HandleServerEventAgentTeleportToFrame(GameNetworkMessage baseMessage)
    {
      AgentTeleportToFrame agentTeleportToFrame = (AgentTeleportToFrame) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(agentTeleportToFrame.AgentIndex);
      agentFromIndex.TeleportToPosition(agentTeleportToFrame.Position);
      Vec2 direction = agentTeleportToFrame.Direction.Normalized();
      agentFromIndex.SetMovementDirection(in direction);
      agentFromIndex.LookDirection = direction.ToVec3();
    }

    private void HandleServerEventSetAgentPeer(GameNetworkMessage baseMessage)
    {
      SetAgentPeer setAgentPeer = (SetAgentPeer) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(setAgentPeer.AgentIndex, true);
      if (agentFromIndex == null)
        return;
      NetworkCommunicator peer = setAgentPeer.Peer;
      MissionPeer component = peer != null ? peer.GetComponent<MissionPeer>() : (MissionPeer) null;
      agentFromIndex.MissionPeer = component;
    }

    private void HandleServerEventSetAgentIsPlayer(GameNetworkMessage baseMessage)
    {
      SetAgentIsPlayer setAgentIsPlayer = (SetAgentIsPlayer) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(setAgentIsPlayer.AgentIndex);
      if (agentFromIndex.Controller == Agent.ControllerType.Player == setAgentIsPlayer.IsPlayer)
        return;
      if (!agentFromIndex.IsMine)
        agentFromIndex.Controller = Agent.ControllerType.None;
      else
        agentFromIndex.Controller = Agent.ControllerType.Player;
    }

    private void HandleServerEventSetAgentHealth(GameNetworkMessage baseMessage)
    {
      SetAgentHealth setAgentHealth = (SetAgentHealth) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(setAgentHealth.AgentIndex).Health = (float) setAgentHealth.Health;
    }

    private void HandleServerEventAgentSetTeam(GameNetworkMessage baseMessage)
    {
      AgentSetTeam agentSetTeam = (AgentSetTeam) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(agentSetTeam.AgentIndex).SetTeam(this.Mission.Teams.Find(Mission.MissionNetworkHelper.GetMBTeamFromTeamIndex(agentSetTeam.TeamIndex)), false);
    }

    private void HandleServerEventSetAgentActionSet(GameNetworkMessage baseMessage)
    {
      SetAgentActionSet setAgentActionSet = (SetAgentActionSet) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(setAgentActionSet.AgentIndex);
      AnimationSystemData animationSystemData = agentFromIndex.Monster.FillAnimationSystemData(setAgentActionSet.ActionSet, setAgentActionSet.StepSize, false) with
      {
        NumPaces = setAgentActionSet.NumPaces,
        MonsterUsageSetIndex = setAgentActionSet.MonsterUsageSetIndex,
        WalkingSpeedLimit = setAgentActionSet.WalkingSpeedLimit,
        CrouchWalkingSpeedLimit = setAgentActionSet.CrouchWalkingSpeedLimit
      };
      agentFromIndex.SetActionSet(ref animationSystemData);
    }

    private void HandleServerEventMakeAgentDead(GameNetworkMessage baseMessage)
    {
      MakeAgentDead makeAgentDead = (MakeAgentDead) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(makeAgentDead.AgentIndex).MakeDead(makeAgentDead.IsKilled, makeAgentDead.ActionCodeIndex);
    }

    private void HandleServerEventAddPrefabComponentToAgentBone(GameNetworkMessage baseMessage)
    {
      AddPrefabComponentToAgentBone componentToAgentBone = (AddPrefabComponentToAgentBone) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(componentToAgentBone.AgentIndex).AddSynchedPrefabComponentToBone(componentToAgentBone.PrefabName, componentToAgentBone.BoneIndex);
    }

    private void HandleServerEventSetAgentPrefabComponentVisibility(GameNetworkMessage baseMessage)
    {
      SetAgentPrefabComponentVisibility componentVisibility = (SetAgentPrefabComponentVisibility) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(componentVisibility.AgentIndex).SetSynchedPrefabComponentVisibility(componentVisibility.ComponentIndex, componentVisibility.Visibility);
    }

    private void HandleServerEventAgentSetFormation(GameNetworkMessage baseMessage)
    {
      AgentSetFormation agentSetFormation = (AgentSetFormation) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(agentSetFormation.AgentIndex);
      Team team = agentFromIndex.Team;
      Formation formation = (Formation) null;
      if (team != null)
        formation = agentSetFormation.FormationIndex >= 0 ? team.GetFormation((FormationClass) agentSetFormation.FormationIndex) : (Formation) null;
      agentFromIndex.Formation = formation;
    }

    private void HandleServerEventUseObject(GameNetworkMessage baseMessage)
    {
      UseObject useObject = (UseObject) baseMessage;
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(useObject.UsableGameObjectId) as UsableMissionObject)?.SetUserForClient(Mission.MissionNetworkHelper.GetAgentFromIndex(useObject.AgentIndex));
    }

    private void HandleServerEventStopUsingObject(GameNetworkMessage baseMessage)
    {
      StopUsingObject stopUsingObject = (StopUsingObject) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(stopUsingObject.AgentIndex)?.StopUsingGameObject(stopUsingObject.IsSuccessful);
    }

    private void HandleServerEventHitSynchronizeObjectHitpoints(GameNetworkMessage baseMessage)
    {
      SyncObjectHitpoints syncObjectHitpoints = (SyncObjectHitpoints) baseMessage;
      MissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(syncObjectHitpoints.MissionObjectId);
      if (fromMissionObjectId == null)
        return;
      fromMissionObjectId.GameEntity.GetFirstScriptOfType<DestructableComponent>().HitPoint = syncObjectHitpoints.Hitpoints;
    }

    private void HandleServerEventHitSynchronizeObjectDestructionLevel(
      GameNetworkMessage baseMessage)
    {
      SyncObjectDestructionLevel destructionLevel = (SyncObjectDestructionLevel) baseMessage;
      Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(destructionLevel.MissionObjectId)?.GameEntity.GetFirstScriptOfType<DestructableComponent>().SetDestructionLevel(destructionLevel.DestructionLevel, destructionLevel.ForcedIndex, destructionLevel.BlowMagnitude, destructionLevel.BlowPosition, destructionLevel.BlowDirection);
    }

    private void HandleServerEventHitBurstAllHeavyHitParticles(GameNetworkMessage baseMessage)
    {
      Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(((BurstAllHeavyHitParticles) baseMessage).MissionObjectId)?.GameEntity.GetFirstScriptOfType<DestructableComponent>().BurstHeavyHitParticles();
    }

    private void HandleServerEventSynchronizeMissionObject(GameNetworkMessage baseMessage)
    {
      SynchronizeMissionObject synchronizeMissionObject = (SynchronizeMissionObject) baseMessage;
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(synchronizeMissionObject.MissionObjectId) as SynchedMissionObject).OnAfterReadFromNetwork(synchronizeMissionObject.RecordPair);
    }

    private void HandleServerEventSpawnWeaponWithNewEntity(GameNetworkMessage baseMessage)
    {
      SpawnWeaponWithNewEntity weaponWithNewEntity = (SpawnWeaponWithNewEntity) baseMessage;
      MissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(weaponWithNewEntity.ParentMissionObjectId);
      GameEntity gameEntity = this.Mission.SpawnWeaponWithNewEntityAux(weaponWithNewEntity.Weapon, weaponWithNewEntity.WeaponSpawnFlags, weaponWithNewEntity.Frame, weaponWithNewEntity.ForcedIndex, fromMissionObjectId, weaponWithNewEntity.HasLifeTime);
      if (weaponWithNewEntity.IsVisible)
        return;
      gameEntity.SetVisibilityExcludeParents(false);
    }

    private void HandleServerEventAttachWeaponToSpawnedWeapon(GameNetworkMessage baseMessage)
    {
      AttachWeaponToSpawnedWeapon weaponToSpawnedWeapon = (AttachWeaponToSpawnedWeapon) baseMessage;
      MissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(weaponToSpawnedWeapon.MissionObjectId);
      this.Mission.AttachWeaponWithNewEntityToSpawnedWeapon(weaponToSpawnedWeapon.Weapon, fromMissionObjectId as SpawnedItemEntity, weaponToSpawnedWeapon.AttachLocalFrame);
    }

    private void HandleServerEventAttachWeaponToAgent(GameNetworkMessage baseMessage)
    {
      AttachWeaponToAgent attachWeaponToAgent = (AttachWeaponToAgent) baseMessage;
      MatrixFrame attachLocalFrame = attachWeaponToAgent.AttachLocalFrame;
      Mission.MissionNetworkHelper.GetAgentFromIndex(attachWeaponToAgent.AgentIndex).AttachWeaponToBone(attachWeaponToAgent.Weapon, (GameEntity) null, attachWeaponToAgent.BoneIndex, ref attachLocalFrame);
    }

    private void HandleServerEventHandleMissileCollisionReaction(GameNetworkMessage baseMessage)
    {
      HandleMissileCollisionReaction collisionReaction = (HandleMissileCollisionReaction) baseMessage;
      MissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(collisionReaction.AttachedMissionObjectId);
      this.Mission.HandleMissileCollisionReaction(collisionReaction.MissileIndex, collisionReaction.CollisionReaction, collisionReaction.AttachLocalFrame, collisionReaction.IsAttachedFrameLocal, Mission.MissionNetworkHelper.GetAgentFromIndex(collisionReaction.AttackerAgentIndex, true), Mission.MissionNetworkHelper.GetAgentFromIndex(collisionReaction.AttachedAgentIndex, true), collisionReaction.AttachedToShield, collisionReaction.AttachedBoneIndex, fromMissionObjectId, collisionReaction.BounceBackVelocity, collisionReaction.BounceBackAngularVelocity, collisionReaction.ForcedSpawnIndex);
    }

    private void HandleServerEventSpawnWeaponAsDropFromAgent(GameNetworkMessage baseMessage)
    {
      SpawnWeaponAsDropFromAgent weaponAsDropFromAgent = (SpawnWeaponAsDropFromAgent) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(weaponAsDropFromAgent.AgentIndex);
      Vec3 velocity = weaponAsDropFromAgent.Velocity;
      Vec3 angularVelocity = weaponAsDropFromAgent.AngularVelocity;
      this.Mission.SpawnWeaponAsDropFromAgentAux(agentFromIndex, weaponAsDropFromAgent.EquipmentIndex, ref velocity, ref angularVelocity, weaponAsDropFromAgent.WeaponSpawnFlags, weaponAsDropFromAgent.ForcedIndex);
    }

    private void HandleServerEventSpawnAttachedWeaponOnSpawnedWeapon(GameNetworkMessage baseMessage)
    {
      SpawnAttachedWeaponOnSpawnedWeapon weaponOnSpawnedWeapon = (SpawnAttachedWeaponOnSpawnedWeapon) baseMessage;
      this.Mission.SpawnAttachedWeaponOnSpawnedWeapon(Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(weaponOnSpawnedWeapon.SpawnedWeaponId) as SpawnedItemEntity, weaponOnSpawnedWeapon.AttachmentIndex, weaponOnSpawnedWeapon.ForcedIndex);
    }

    private void HandleServerEventSpawnAttachedWeaponOnCorpse(GameNetworkMessage baseMessage)
    {
      SpawnAttachedWeaponOnCorpse attachedWeaponOnCorpse = (SpawnAttachedWeaponOnCorpse) baseMessage;
      this.Mission.SpawnAttachedWeaponOnCorpse(Mission.MissionNetworkHelper.GetAgentFromIndex(attachedWeaponOnCorpse.AgentIndex), attachedWeaponOnCorpse.AttachedIndex, attachedWeaponOnCorpse.ForcedIndex);
    }

    private void HandleServerEventRemoveEquippedWeapon(GameNetworkMessage baseMessage)
    {
      RemoveEquippedWeapon removeEquippedWeapon = (RemoveEquippedWeapon) baseMessage;
      Mission.MissionNetworkHelper.GetAgentFromIndex(removeEquippedWeapon.AgentIndex).RemoveEquippedWeapon(removeEquippedWeapon.SlotIndex);
    }

    private void HandleServerEventBarkAgent(GameNetworkMessage baseMessage)
    {
      BarkAgent barkAgent = (BarkAgent) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(barkAgent.AgentIndex);
      agentFromIndex.HandleBark(barkAgent.IndexOfBark);
      if (this._chatBox.IsPlayerMuted(agentFromIndex.MissionPeer.Peer.Id))
        return;
      GameTexts.SetVariable("LEFT", agentFromIndex.Name);
      GameTexts.SetVariable("RIGHT", SkinVoiceManager.VoiceType.MpBarks[barkAgent.IndexOfBark].GetName());
      InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_LEFT_colon_RIGHT_wSpaceAfterColon").ToString(), Color.White, "Bark"));
    }

    private void HandleServerEventEquipWeaponWithNewEntity(GameNetworkMessage baseMessage)
    {
      EquipWeaponWithNewEntity weaponWithNewEntity = (EquipWeaponWithNewEntity) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(weaponWithNewEntity.AgentIndex);
      if (agentFromIndex == null)
        return;
      MissionWeapon weapon = weaponWithNewEntity.Weapon;
      agentFromIndex.EquipWeaponWithNewEntity(weaponWithNewEntity.SlotIndex, ref weapon);
    }

    private void HandleServerEventAttachWeaponToWeaponInAgentEquipmentSlot(
      GameNetworkMessage baseMessage)
    {
      AttachWeaponToWeaponInAgentEquipmentSlot agentEquipmentSlot = (AttachWeaponToWeaponInAgentEquipmentSlot) baseMessage;
      MatrixFrame attachLocalFrame = agentEquipmentSlot.AttachLocalFrame;
      Mission.MissionNetworkHelper.GetAgentFromIndex(agentEquipmentSlot.AgentIndex).AttachWeaponToWeapon(agentEquipmentSlot.SlotIndex, agentEquipmentSlot.Weapon, (GameEntity) null, ref attachLocalFrame);
    }

    private void HandleServerEventEquipWeaponFromSpawnedItemEntity(GameNetworkMessage baseMessage)
    {
      EquipWeaponFromSpawnedItemEntity spawnedItemEntity = (EquipWeaponFromSpawnedItemEntity) baseMessage;
      SpawnedItemEntity fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(spawnedItemEntity.SpawnedItemEntityId) as SpawnedItemEntity;
      Mission.MissionNetworkHelper.GetAgentFromIndex(spawnedItemEntity.AgentIndex, true)?.EquipWeaponFromSpawnedItemEntity(spawnedItemEntity.SlotIndex, fromMissionObjectId, spawnedItemEntity.RemoveWeapon);
    }

    private void HandleServerEventCreateMissile(GameNetworkMessage baseMessage)
    {
      CreateMissile createMissile = (CreateMissile) baseMessage;
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(createMissile.AgentIndex);
      if (createMissile.WeaponIndex != EquipmentIndex.None)
      {
        Vec3 velocity = createMissile.Direction * createMissile.Speed;
        this.Mission.OnAgentShootMissile(agentFromIndex, createMissile.WeaponIndex, createMissile.Position, velocity, createMissile.Orientation, createMissile.HasRigidBody, createMissile.IsPrimaryWeaponShot, createMissile.MissileIndex);
      }
      else
      {
        MissionObject fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(createMissile.MissionObjectToIgnoreId);
        this.Mission.AddCustomMissile(agentFromIndex, createMissile.Weapon, createMissile.Position, createMissile.Direction, createMissile.Orientation, createMissile.Speed, createMissile.Speed, createMissile.HasRigidBody, fromMissionObjectId, createMissile.MissileIndex);
      }
    }

    private void HandleServerEventAgentHit(GameNetworkMessage baseMessage)
    {
      CombatLogManager.GenerateCombatLog(Mission.MissionNetworkHelper.GetCombatLogDataForCombatLogNetworkMessage((CombatLogNetworkMessage) baseMessage));
    }

    private void HandleServerEventConsumeWeaponAmount(GameNetworkMessage baseMessage)
    {
      ConsumeWeaponAmount consumeWeaponAmount = (ConsumeWeaponAmount) baseMessage;
      (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(consumeWeaponAmount.SpawnedItemEntityId) as SpawnedItemEntity).ConsumeWeaponAmount(consumeWeaponAmount.ConsumedAmount);
    }

    private bool HandleClientEventSetFollowedAgent(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      SetFollowedAgent setFollowedAgent = (SetFollowedAgent) baseMessage;
      networkPeer.GetComponent<MissionPeer>().FollowedAgent = Mission.MissionNetworkHelper.GetAgentFromIndex(setFollowedAgent.AgentIndex, true);
      return true;
    }

    private bool HandleClientEventSetMachineRotation(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      SetMachineRotation setMachineRotation = (SetMachineRotation) baseMessage;
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      UsableMachine fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(setMachineRotation.UsableMachineId) as UsableMachine;
      if (component.IsControlledAgentActive && fromMissionObjectId is RangedSiegeWeapon)
      {
        RangedSiegeWeapon rangedSiegeWeapon = fromMissionObjectId as RangedSiegeWeapon;
        if (component.ControlledAgent == rangedSiegeWeapon.PilotAgent && rangedSiegeWeapon.PilotAgent != null)
          rangedSiegeWeapon.AimAtRotation(setMachineRotation.HorizontalRotation, setMachineRotation.VerticalRotation);
      }
      return true;
    }

    private bool HandleClientEventRequestUseObject(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      RequestUseObject requestUseObject = (RequestUseObject) baseMessage;
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      if (Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(requestUseObject.UsableMissionObjectId) is UsableMissionObject fromMissionObjectId && component.ControlledAgent != null && component.ControlledAgent.IsActive())
      {
        Vec3 position = component.ControlledAgent.Position;
        Vec3 globalPosition = fromMissionObjectId.InteractionEntity.GlobalPosition;
        float num1;
        if (fromMissionObjectId is StandingPoint)
        {
          num1 = fromMissionObjectId.GetUserFrameForAgent(component.ControlledAgent).Origin.AsVec2.DistanceSquared(component.ControlledAgent.Position.AsVec2);
        }
        else
        {
          Vec3 bbmin;
          Vec3 bbmax;
          fromMissionObjectId.InteractionEntity.GetPhysicsMinMax(true, out bbmin, out bbmax, false);
          float num2 = MathF.Max(globalPosition.Distance(bbmin), globalPosition.Distance(bbmax));
          num1 = MathF.Max(globalPosition.Distance(new Vec3(position.x, position.y, position.z + component.ControlledAgent.GetEyeGlobalHeight())) - num2, 0.0f);
        }
        if (component.ControlledAgent.CurrentlyUsedGameObject != fromMissionObjectId && component.ControlledAgent.CanReachAndUseObject(fromMissionObjectId, (float) ((double) num1 * (double) num1 * 0.89999997615814209 * 0.89999997615814209)) && component.ControlledAgent.ObjectHasVacantPosition(fromMissionObjectId))
          component.ControlledAgent.UseGameObject(fromMissionObjectId, requestUseObject.UsedObjectPreferenceIndex);
      }
      return true;
    }

    private bool HandleClientEventRequestStopUsingObject(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      if (component.ControlledAgent?.CurrentlyUsedGameObject != null)
        component.ControlledAgent.StopUsingGameObject(false);
      return true;
    }

    private bool HandleClientEventApplyOrder(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      ApplyOrder applyOrder = (ApplyOrder) baseMessage;
      this.GetOrderControllerOfPeer(networkPeer)?.SetOrder(applyOrder.OrderType);
      return true;
    }

    private bool HandleClientEventApplySiegeWeaponOrder(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      ApplySiegeWeaponOrder siegeWeaponOrder = (ApplySiegeWeaponOrder) baseMessage;
      this.GetOrderControllerOfPeer(networkPeer)?.SiegeWeaponController.SetOrder(siegeWeaponOrder.OrderType);
      return true;
    }

    private bool HandleClientEventApplyOrderWithPosition(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      ApplyOrderWithPosition orderWithPosition = (ApplyOrderWithPosition) baseMessage;
      OrderController controllerOfPeer = this.GetOrderControllerOfPeer(networkPeer);
      if (controllerOfPeer != null)
      {
        WorldPosition orderPosition = new WorldPosition(this.Mission.Scene, UIntPtr.Zero, orderWithPosition.Position, false);
        controllerOfPeer.SetOrderWithPosition(orderWithPosition.OrderType, orderPosition);
      }
      return true;
    }

    private bool HandleClientEventApplyOrderWithFormation(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      ApplyOrderWithFormation message = (ApplyOrderWithFormation) baseMessage;
      Team teamOfPeer = this.GetTeamOfPeer(networkPeer);
      OrderController orderControllerOf = teamOfPeer?.GetOrderControllerOf(networkPeer.ControlledAgent);
      Formation orderFormation = teamOfPeer != null ? teamOfPeer.FormationsIncludingEmpty.SingleOrDefault<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.Index == message.FormationIndex)) : (Formation) null;
      if (teamOfPeer != null && orderControllerOf != null && orderFormation != null)
        orderControllerOf.SetOrderWithFormation(message.OrderType, orderFormation);
      return true;
    }

    private bool HandleClientEventApplyOrderWithFormationAndPercentage(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      ApplyOrderWithFormationAndPercentage message = (ApplyOrderWithFormationAndPercentage) baseMessage;
      Team teamOfPeer = this.GetTeamOfPeer(networkPeer);
      OrderController orderControllerOf = teamOfPeer?.GetOrderControllerOf(networkPeer.ControlledAgent);
      Formation orderFormation = teamOfPeer != null ? teamOfPeer.FormationsIncludingEmpty.SingleOrDefault<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.Index == message.FormationIndex)) : (Formation) null;
      float percentage = (float) message.Percentage * 0.01f;
      if (teamOfPeer != null && orderControllerOf != null && orderFormation != null)
        orderControllerOf.SetOrderWithFormationAndPercentage(message.OrderType, orderFormation, percentage);
      return true;
    }

    private bool HandleClientEventApplyOrderWithFormationAndNumber(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      ApplyOrderWithFormationAndNumber message = (ApplyOrderWithFormationAndNumber) baseMessage;
      Team teamOfPeer = this.GetTeamOfPeer(networkPeer);
      OrderController orderControllerOf = teamOfPeer?.GetOrderControllerOf(networkPeer.ControlledAgent);
      Formation orderFormation = teamOfPeer != null ? teamOfPeer.FormationsIncludingEmpty.SingleOrDefault<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.Index == message.FormationIndex)) : (Formation) null;
      int number = message.Number;
      if (teamOfPeer != null && orderControllerOf != null && orderFormation != null)
        orderControllerOf.SetOrderWithFormationAndNumber(message.OrderType, orderFormation, number);
      return true;
    }

    private bool HandleClientEventApplyOrderWithTwoPositions(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      ApplyOrderWithTwoPositions withTwoPositions = (ApplyOrderWithTwoPositions) baseMessage;
      OrderController controllerOfPeer = this.GetOrderControllerOfPeer(networkPeer);
      if (controllerOfPeer != null)
      {
        WorldPosition position1 = new WorldPosition(this.Mission.Scene, UIntPtr.Zero, withTwoPositions.Position1, false);
        WorldPosition position2 = new WorldPosition(this.Mission.Scene, UIntPtr.Zero, withTwoPositions.Position2, false);
        controllerOfPeer.SetOrderWithTwoPositions(withTwoPositions.OrderType, position1, position2);
      }
      return true;
    }

    private bool HandleClientEventApplyOrderWithGameEntity(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      IOrderable fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(((ApplyOrderWithMissionObject) baseMessage).MissionObjectId) as IOrderable;
      this.GetOrderControllerOfPeer(networkPeer)?.SetOrderWithOrderableObject(fromMissionObjectId);
      return true;
    }

    private bool HandleClientEventApplyOrderWithAgent(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      ApplyOrderWithAgent applyOrderWithAgent = (ApplyOrderWithAgent) baseMessage;
      OrderController controllerOfPeer = this.GetOrderControllerOfPeer(networkPeer);
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(applyOrderWithAgent.AgentIndex);
      controllerOfPeer?.SetOrderWithAgent(applyOrderWithAgent.OrderType, agentFromIndex);
      return true;
    }

    private bool HandleClientEventSelectAllFormations(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      this.GetOrderControllerOfPeer(networkPeer)?.SelectAllFormations();
      return true;
    }

    private bool HandleClientEventSelectAllSiegeWeapons(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      this.GetOrderControllerOfPeer(networkPeer)?.SiegeWeaponController.SelectAll();
      return true;
    }

    private bool HandleClientEventClearSelectedFormations(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      this.GetOrderControllerOfPeer(networkPeer)?.ClearSelectedFormations();
      return true;
    }

    private bool HandleClientEventSelectFormation(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      SelectFormation message = (SelectFormation) baseMessage;
      Team teamOfPeer = this.GetTeamOfPeer(networkPeer);
      OrderController orderControllerOf = teamOfPeer?.GetOrderControllerOf(networkPeer.ControlledAgent);
      Formation formation = teamOfPeer != null ? teamOfPeer.FormationsIncludingEmpty.SingleOrDefault<Formation>((Func<Formation, bool>) (f => f.Index == message.FormationIndex && f.CountOfUnits > 0)) : (Formation) null;
      if (teamOfPeer != null && orderControllerOf != null && formation != null)
        orderControllerOf.SelectFormation(formation);
      return true;
    }

    private bool HandleClientEventSelectSiegeWeapon(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      SelectSiegeWeapon selectSiegeWeapon = (SelectSiegeWeapon) baseMessage;
      Team teamOfPeer = this.GetTeamOfPeer(networkPeer);
      SiegeWeaponController weaponController = teamOfPeer?.GetOrderControllerOf(networkPeer.ControlledAgent).SiegeWeaponController;
      SiegeWeapon fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(selectSiegeWeapon.SiegeWeaponId) as SiegeWeapon;
      if (teamOfPeer != null && weaponController != null && fromMissionObjectId != null)
        weaponController.Select(fromMissionObjectId);
      return true;
    }

    private bool HandleClientEventUnselectFormation(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      UnselectFormation message = (UnselectFormation) baseMessage;
      Team teamOfPeer = this.GetTeamOfPeer(networkPeer);
      OrderController orderControllerOf = teamOfPeer?.GetOrderControllerOf(networkPeer.ControlledAgent);
      Formation formation = teamOfPeer != null ? teamOfPeer.FormationsIncludingEmpty.SingleOrDefault<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.Index == message.FormationIndex)) : (Formation) null;
      if (teamOfPeer != null && orderControllerOf != null && formation != null)
        orderControllerOf.DeselectFormation(formation);
      return true;
    }

    private bool HandleClientEventUnselectSiegeWeapon(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      UnselectSiegeWeapon unselectSiegeWeapon = (UnselectSiegeWeapon) baseMessage;
      Team teamOfPeer = this.GetTeamOfPeer(networkPeer);
      SiegeWeaponController weaponController = teamOfPeer?.GetOrderControllerOf(networkPeer.ControlledAgent).SiegeWeaponController;
      SiegeWeapon fromMissionObjectId = Mission.MissionNetworkHelper.GetMissionObjectFromMissionObjectId(unselectSiegeWeapon.SiegeWeaponId) as SiegeWeapon;
      if (teamOfPeer != null && weaponController != null && fromMissionObjectId != null)
        weaponController.Deselect(fromMissionObjectId);
      return true;
    }

    private bool HandleClientEventDropWeapon(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      DropWeapon dropWeapon = (DropWeapon) baseMessage;
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      if (component?.ControlledAgent != null && component.ControlledAgent.IsActive())
        component.ControlledAgent.HandleDropWeapon(dropWeapon.IsDefendPressed, dropWeapon.ForcedSlotIndexToDropWeaponFrom);
      return true;
    }

    private bool HandleClientEventCheerSelected(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      TauntSelected tauntSelected = (TauntSelected) baseMessage;
      bool flag = false;
      if (networkPeer.ControlledAgent != null)
      {
        networkPeer.ControlledAgent.HandleTaunt(tauntSelected.IndexOfTaunt, false);
        flag = true;
      }
      return flag;
    }

    private bool HandleClientEventBarkSelected(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      BarkSelected barkSelected = (BarkSelected) baseMessage;
      bool flag = false;
      if (networkPeer.ControlledAgent != null)
      {
        networkPeer.ControlledAgent.HandleBark(barkSelected.IndexOfBark);
        flag = true;
      }
      return flag;
    }

    private bool HandleClientEventBreakAgentVisualsInvulnerability(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      if (this.Mission == null || this.Mission.GetMissionBehavior<SpawnComponent>() == null || networkPeer.GetComponent<MissionPeer>() == null)
        return false;
      this.Mission.GetMissionBehavior<SpawnComponent>().SetEarlyAgentVisualsDespawning(networkPeer.GetComponent<MissionPeer>());
      return true;
    }

    private bool HandleClientEventRequestToSpawnAsBot(
      NetworkCommunicator networkPeer,
      GameNetworkMessage baseMessage)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      if (component == null)
        return false;
      if (component.HasSpawnTimerExpired)
        component.WantsToSpawnAsBot = true;
      return true;
    }

    private void SendExistingObjectsToPeer(NetworkCommunicator networkPeer)
    {
      MBDebug.Print("Sending all existing objects to peer: " + networkPeer.UserName + " with index: " + (object) networkPeer.Index, debugFilter: 17179869184UL);
      GameNetwork.BeginModuleEventAsServer(networkPeer);
      GameNetwork.WriteMessage((GameNetworkMessage) new ExistingObjectsBegin());
      GameNetwork.EndModuleEventAsServer();
      GameNetwork.BeginModuleEventAsServer(networkPeer);
      GameNetwork.WriteMessage((GameNetworkMessage) new SynchronizeMissionTimeTracker((float) MissionTime.Now.ToSeconds));
      GameNetwork.EndModuleEventAsServer();
      this.SendTeamsToPeer(networkPeer);
      this.SendTeamRelationsToPeer(networkPeer);
      foreach (NetworkCommunicator disconnectedPeer in GameNetwork.NetworkPeersIncludingDisconnectedPeers)
      {
        MissionPeer component = disconnectedPeer.GetComponent<MissionPeer>();
        if (component != null)
        {
          if (component.Team != null)
          {
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new SetPeerTeam(disconnectedPeer, component.Team.TeamIndex));
            GameNetwork.EndModuleEventAsServer();
          }
          if (component.Culture != null)
          {
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new ChangeCulture(component, component.Culture));
            GameNetwork.EndModuleEventAsServer();
          }
        }
      }
      this.SendFormationInformation(networkPeer);
      this.SendAgentsToPeer(networkPeer);
      this.SendSpawnedMissionObjectsToPeer(networkPeer);
      this.SynchronizeMissionObjectsToPeer(networkPeer);
      this.SendMissilesToPeer(networkPeer);
      this.SendTroopSelectionInformation(networkPeer);
      networkPeer.SendExistingObjects(this.Mission);
      GameNetwork.BeginModuleEventAsServer(networkPeer);
      GameNetwork.WriteMessage((GameNetworkMessage) new ExistingObjectsEnd());
      GameNetwork.EndModuleEventAsServer();
    }

    private void SendTroopSelectionInformation(NetworkCommunicator networkPeer)
    {
      foreach (NetworkCommunicator disconnectedPeer in GameNetwork.NetworkPeersIncludingDisconnectedPeers)
      {
        MissionPeer component = disconnectedPeer.GetComponent<MissionPeer>();
        if (component != null && component.SelectedTroopIndex != 0)
        {
          GameNetwork.BeginModuleEventAsServer(networkPeer);
          GameNetwork.WriteMessage((GameNetworkMessage) new UpdateSelectedTroopIndex(disconnectedPeer, component.SelectedTroopIndex));
          GameNetwork.EndModuleEventAsServer();
        }
      }
    }

    private void SendTeamsToPeer(NetworkCommunicator networkPeer)
    {
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        MBDebug.Print("Syncing a team to peer: " + networkPeer.UserName + " with index: " + (object) networkPeer.Index, debugFilter: 17179869184UL);
        GameNetwork.BeginModuleEventAsServer(networkPeer);
        GameNetwork.WriteMessage((GameNetworkMessage) new AddTeam(team.TeamIndex, team.Side, team.Color, team.Color2, team.Banner != null ? BannerCode.CreateFrom(team.Banner).Code : string.Empty, team.IsPlayerGeneral, team.IsPlayerSergeant));
        GameNetwork.EndModuleEventAsServer();
      }
    }

    private void SendTeamRelationsToPeer(NetworkCommunicator networkPeer)
    {
      int count = this.Mission.Teams.Count;
      for (int index1 = 0; index1 < count; ++index1)
      {
        for (int index2 = index1; index2 < count; ++index2)
        {
          Team team1 = this.Mission.Teams[index1];
          Team team2 = this.Mission.Teams[index2];
          if (team1.IsEnemyOf(team2))
          {
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new TeamSetIsEnemyOf(team1.TeamIndex, team2.TeamIndex, true));
            GameNetwork.EndModuleEventAsServer();
          }
        }
      }
    }

    private void SendFormationInformation(NetworkCommunicator networkPeer)
    {
      MBDebug.Print("formations sending begin-", debugFilter: 17179869184UL);
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        if (team.IsValid && team.Side != BattleSideEnum.None)
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingEmpty)
          {
            if (!string.IsNullOrEmpty(formation.BannerCode))
            {
              GameNetwork.BeginModuleEventAsServer(networkPeer);
              GameNetwork.WriteMessage((GameNetworkMessage) new InitializeFormation(formation, team.TeamIndex, formation.BannerCode));
              GameNetwork.EndModuleEventAsServer();
            }
          }
        }
      }
      if (!networkPeer.IsServerPeer)
      {
        GameNetwork.BeginModuleEventAsServer(networkPeer);
        GameNetwork.WriteMessage((GameNetworkMessage) new SetSpawnedFormationCount(this.Mission.NumOfFormationsSpawnedTeamOne, this.Mission.NumOfFormationsSpawnedTeamTwo));
        GameNetwork.EndModuleEventAsServer();
      }
      MBDebug.Print("formations sending end-", debugFilter: 17179869184UL);
    }

    private void SendAgentVisualsToPeer(NetworkCommunicator networkPeer, Team peerTeam)
    {
      MBDebug.Print("agentvisuals sending begin-", debugFilter: 17179869184UL);
      foreach (MissionPeer missionPeer in GameNetwork.NetworkPeers.Select<NetworkCommunicator, MissionPeer>((Func<NetworkCommunicator, MissionPeer>) (p => p.GetComponent<MissionPeer>())).Where<MissionPeer>((Func<MissionPeer, bool>) (pr => pr != null)))
      {
        if (missionPeer.Team == peerTeam)
        {
          int agentVisualsForPeer = missionPeer.GetAmountOfAgentVisualsForPeer();
          for (int visualIndex = 0; visualIndex < agentVisualsForPeer; ++visualIndex)
          {
            PeerVisualsHolder visuals = missionPeer.GetVisuals(visualIndex);
            IAgentVisual agentVisuals = visuals.AgentVisuals;
            MatrixFrame frame = agentVisuals.GetFrame();
            AgentBuildData agentBuildData = new AgentBuildData(MBObjectManager.Instance.GetObject<BasicCharacterObject>(agentVisuals.GetCharacterObjectID())).MissionPeer(missionPeer).Equipment(agentVisuals.GetEquipment()).VisualsIndex(visuals.VisualsIndex).Team(missionPeer.Team).InitialPosition(in frame.origin).InitialDirection(frame.rotation.f.AsVec2.Normalized()).IsFemale(agentVisuals.GetIsFemale()).BodyProperties(agentVisuals.GetBodyProperties());
            networkPeer.GetComponent<MissionPeer>();
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new CreateAgentVisuals(missionPeer.GetNetworkPeer(), agentBuildData, missionPeer.SelectedTroopIndex));
            GameNetwork.EndModuleEventAsServer();
          }
        }
      }
      MBDebug.Print("agentvisuals sending end-", debugFilter: 17179869184UL);
    }

    private void SendAgentsToPeer(NetworkCommunicator networkPeer)
    {
      MBDebug.Print("agents sending begin-", debugFilter: 17179869184UL);
      foreach (Agent allAgent in (List<Agent>) this.Mission.AllAgents)
      {
        Agent agent = allAgent;
        bool isMount = agent.IsMount;
        AgentState state = agent.State;
        if (state == AgentState.Active || (state == AgentState.Killed || state == AgentState.Unconscious) && (agent.GetAttachedWeaponsCount() > 0 || !isMount && (agent.GetWieldedItemIndex(Agent.HandIndex.MainHand) >= EquipmentIndex.WeaponItemBeginSlot || agent.GetWieldedItemIndex(Agent.HandIndex.OffHand) >= EquipmentIndex.WeaponItemBeginSlot) || this.Mission.IsAgentInProximityMap(agent)) || state != AgentState.Active && this.Mission.Missiles.Any<Mission.Missile>((Func<Mission.Missile, bool>) (m => m.ShooterAgent == agent)))
        {
          if (isMount && agent.RiderAgent == null)
          {
            MBDebug.Print("mount sending " + (object) agent.Index, debugFilter: 17179869184UL);
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new CreateFreeMountAgent(agent, agent.Position, agent.GetMovementDirection()));
            GameNetwork.EndModuleEventAsServer();
            agent.LockAgentReplicationTableDataWithCurrentReliableSequenceNo(networkPeer);
            int attachedWeaponsCount = agent.GetAttachedWeaponsCount();
            for (int index = 0; index < attachedWeaponsCount; ++index)
            {
              GameNetwork.BeginModuleEventAsServer(networkPeer);
              GameNetwork.WriteMessage((GameNetworkMessage) new AttachWeaponToAgent(agent.GetAttachedWeapon(index), agent.Index, agent.GetAttachedWeaponBoneIndex(index), agent.GetAttachedWeaponFrame(index)));
              GameNetwork.EndModuleEventAsServer();
            }
            if (!agent.IsActive())
            {
              GameNetwork.BeginModuleEventAsServer(networkPeer);
              GameNetwork.WriteMessage((GameNetworkMessage) new MakeAgentDead(agent.Index, state == AgentState.Killed, agent.GetCurrentActionValue(0)));
              GameNetwork.EndModuleEventAsServer();
            }
          }
          else if (!isMount)
          {
            MBDebug.Print("human sending " + (object) agent.Index, debugFilter: 17179869184UL);
            Agent agent1 = agent.MountAgent;
            if (agent1 != null && agent1.RiderAgent == null)
              agent1 = (Agent) null;
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            int index1 = agent.Index;
            BasicCharacterObject character = agent.Character;
            Monster monster = agent.Monster;
            Equipment spawnEquipment1 = agent.SpawnEquipment;
            MissionEquipment equipment = agent.Equipment;
            BodyProperties bodyPropertiesValue = agent.BodyPropertiesValue;
            int bodyPropertiesSeed = agent.BodyPropertiesSeed;
            int num1 = agent.IsFemale ? 1 : 0;
            Team team = agent.Team;
            int agentTeamIndex = team != null ? team.TeamIndex : -1;
            Formation formation = agent.Formation;
            int agentFormationIndex = formation != null ? formation.Index : -1;
            int clothingColor1 = (int) agent.ClothingColor1;
            int clothingColor2 = (int) agent.ClothingColor2;
            int mountAgentIndex = agent1 != null ? agent1.Index : -1;
            Equipment spawnEquipment2 = agent.MountAgent?.SpawnEquipment;
            int num2 = agent.MissionPeer == null ? 0 : (agent.OwningAgentMissionPeer == null ? 1 : 0);
            Vec3 position = agent.Position;
            Vec2 movementDirection = agent.GetMovementDirection();
            MissionPeer missionPeer = agent.MissionPeer;
            NetworkCommunicator networkPeer1 = missionPeer != null ? missionPeer.GetNetworkPeer() : (NetworkCommunicator) null;
            if (networkPeer1 == null)
            {
              MissionPeer agentMissionPeer = agent.OwningAgentMissionPeer;
              networkPeer1 = agentMissionPeer != null ? agentMissionPeer.GetNetworkPeer() : (NetworkCommunicator) null;
            }
            GameNetwork.WriteMessage((GameNetworkMessage) new CreateAgent(index1, character, monster, spawnEquipment1, equipment, bodyPropertiesValue, bodyPropertiesSeed, num1 != 0, agentTeamIndex, agentFormationIndex, (uint) clothingColor1, (uint) clothingColor2, mountAgentIndex, spawnEquipment2, num2 != 0, position, movementDirection, networkPeer1));
            GameNetwork.EndModuleEventAsServer();
            agent.LockAgentReplicationTableDataWithCurrentReliableSequenceNo(networkPeer);
            agent1?.LockAgentReplicationTableDataWithCurrentReliableSequenceNo(networkPeer);
            for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumAllWeaponSlots; ++equipmentIndex)
            {
              for (int attachmentIndex = 0; attachmentIndex < agent.Equipment[equipmentIndex].GetAttachedWeaponsCount(); ++attachmentIndex)
              {
                GameNetwork.BeginModuleEventAsServer(networkPeer);
                GameNetwork.WriteMessage((GameNetworkMessage) new AttachWeaponToWeaponInAgentEquipmentSlot(agent.Equipment[equipmentIndex].GetAttachedWeapon(attachmentIndex), agent.Index, equipmentIndex, agent.Equipment[equipmentIndex].GetAttachedWeaponFrame(attachmentIndex)));
                GameNetwork.EndModuleEventAsServer();
              }
            }
            int attachedWeaponsCount1 = agent.GetAttachedWeaponsCount();
            for (int index2 = 0; index2 < attachedWeaponsCount1; ++index2)
            {
              GameNetwork.BeginModuleEventAsServer(networkPeer);
              GameNetwork.WriteMessage((GameNetworkMessage) new AttachWeaponToAgent(agent.GetAttachedWeapon(index2), agent.Index, agent.GetAttachedWeaponBoneIndex(index2), agent.GetAttachedWeaponFrame(index2)));
              GameNetwork.EndModuleEventAsServer();
            }
            if (agent1 != null)
            {
              int attachedWeaponsCount2 = agent1.GetAttachedWeaponsCount();
              for (int index3 = 0; index3 < attachedWeaponsCount2; ++index3)
              {
                GameNetwork.BeginModuleEventAsServer(networkPeer);
                GameNetwork.WriteMessage((GameNetworkMessage) new AttachWeaponToAgent(agent1.GetAttachedWeapon(index3), agent1.Index, agent1.GetAttachedWeaponBoneIndex(index3), agent1.GetAttachedWeaponFrame(index3)));
                GameNetwork.EndModuleEventAsServer();
              }
            }
            EquipmentIndex wieldedItemIndex = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
            int currentUsageIndex = wieldedItemIndex != EquipmentIndex.None ? agent.Equipment[wieldedItemIndex].CurrentUsageIndex : 0;
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new SetWieldedItemIndex(agent.Index, false, true, true, wieldedItemIndex, currentUsageIndex));
            GameNetwork.EndModuleEventAsServer();
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new SetWieldedItemIndex(agent.Index, true, true, true, agent.GetWieldedItemIndex(Agent.HandIndex.OffHand), currentUsageIndex));
            GameNetwork.EndModuleEventAsServer();
            MBActionSet actionSet = agent.ActionSet;
            if (actionSet.IsValid)
            {
              AnimationSystemData animationSystemData = agent.Monster.FillAnimationSystemData(actionSet, agent.Character.GetStepSize(), false);
              GameNetwork.BeginModuleEventAsServer(networkPeer);
              GameNetwork.WriteMessage((GameNetworkMessage) new SetAgentActionSet(agent.Index, animationSystemData));
              GameNetwork.EndModuleEventAsServer();
              if (!agent.IsActive())
              {
                GameNetwork.BeginModuleEventAsServer(networkPeer);
                GameNetwork.WriteMessage((GameNetworkMessage) new MakeAgentDead(agent.Index, state == AgentState.Killed, agent.GetCurrentActionValue(0)));
                GameNetwork.EndModuleEventAsServer();
              }
            }
            else
            {
              Debug.FailedAssert("Checking to see if we enter this condition.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MissionNetworkComponent.cs", nameof (SendAgentsToPeer), 1975);
              GameNetwork.BeginModuleEventAsServer(networkPeer);
              GameNetwork.WriteMessage((GameNetworkMessage) new MakeAgentDead(agent.Index, state == AgentState.Killed, ActionIndexValueCache.act_none));
              GameNetwork.EndModuleEventAsServer();
            }
          }
          else
            MBDebug.Print("agent not sending " + (object) agent.Index, debugFilter: 17179869184UL);
        }
      }
      MBDebug.Print("agents sending end-", debugFilter: 17179869184UL);
    }

    private void SendSpawnedMissionObjectsToPeer(NetworkCommunicator networkPeer)
    {
      using (List<MissionObject>.Enumerator enumerator = this.Mission.MissionObjects.GetEnumerator())
      {
label_22:
        while (enumerator.MoveNext())
        {
          MissionObject missionObject = enumerator.Current;
          if (missionObject is SpawnedItemEntity spawnedItemEntity)
          {
            GameEntity gameEntity = spawnedItemEntity.GameEntity;
            if ((NativeObject) gameEntity.Parent == (NativeObject) null || !gameEntity.Parent.HasScriptOfType<SpawnedItemEntity>())
            {
              MissionObject missionObject1 = (MissionObject) null;
              if ((NativeObject) spawnedItemEntity.GameEntity.Parent != (NativeObject) null)
                missionObject1 = gameEntity.Parent.GetFirstScriptOfType<MissionObject>();
              MatrixFrame frame = gameEntity.GetGlobalFrame();
              if (missionObject1 != null)
                frame = missionObject1.GameEntity.GetGlobalFrame().TransformToLocalNonOrthogonal(ref frame);
              frame.origin.z = MathF.Max(frame.origin.z, CompressionBasic.PositionCompressionInfo.GetMinimumValue() + 1f);
              Mission.WeaponSpawnFlags weaponSpawnFlags = spawnedItemEntity.SpawnFlags;
              if (weaponSpawnFlags.HasAnyFlag<Mission.WeaponSpawnFlags>(Mission.WeaponSpawnFlags.WithPhysics) && !gameEntity.GetPhysicsState())
                weaponSpawnFlags = weaponSpawnFlags & ~Mission.WeaponSpawnFlags.WithPhysics | Mission.WeaponSpawnFlags.WithStaticPhysics;
              bool hasLifeTime = true;
              bool isVisible = (NativeObject) gameEntity.Parent == (NativeObject) null || missionObject1 != null;
              GameNetwork.BeginModuleEventAsServer(networkPeer);
              GameNetwork.WriteMessage((GameNetworkMessage) new SpawnWeaponWithNewEntity(spawnedItemEntity.WeaponCopy, weaponSpawnFlags, spawnedItemEntity.Id.Id, frame, missionObject1 != null ? missionObject1.Id : MissionObjectId.Invalid, isVisible, hasLifeTime));
              GameNetwork.EndModuleEventAsServer();
              int num1 = 0;
              while (true)
              {
                int num2 = num1;
                MissionWeapon missionWeapon = spawnedItemEntity.WeaponCopy;
                int attachedWeaponsCount = missionWeapon.GetAttachedWeaponsCount();
                if (num2 < attachedWeaponsCount)
                {
                  GameNetwork.BeginModuleEventAsServer(networkPeer);
                  missionWeapon = spawnedItemEntity.WeaponCopy;
                  MissionWeapon attachedWeapon = missionWeapon.GetAttachedWeapon(num1);
                  MissionObjectId id = spawnedItemEntity.Id;
                  missionWeapon = spawnedItemEntity.WeaponCopy;
                  MatrixFrame attachedWeaponFrame = missionWeapon.GetAttachedWeaponFrame(num1);
                  GameNetwork.WriteMessage((GameNetworkMessage) new AttachWeaponToSpawnedWeapon(attachedWeapon, id, attachedWeaponFrame));
                  GameNetwork.EndModuleEventAsServer();
                  missionWeapon = spawnedItemEntity.WeaponCopy;
                  missionWeapon = missionWeapon.GetAttachedWeapon(num1);
                  if (missionWeapon.Item.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.CanBePickedUpFromCorpse))
                  {
                    if ((NativeObject) gameEntity.GetChild(num1) == (NativeObject) null)
                    {
                      object[] objArray = new object[6];
                      objArray[0] = (object) "spawnedItemGameEntity child is null. item: ";
                      missionWeapon = spawnedItemEntity.WeaponCopy;
                      objArray[1] = (object) missionWeapon.Item.StringId;
                      objArray[2] = (object) " attached item: ";
                      missionWeapon = spawnedItemEntity.WeaponCopy;
                      missionWeapon = missionWeapon.GetAttachedWeapon(num1);
                      objArray[3] = (object) missionWeapon.Item.StringId;
                      objArray[4] = (object) " attachment index: ";
                      objArray[5] = (object) num1;
                      Debug.Print(string.Concat(objArray));
                    }
                    else if (gameEntity.GetChild(num1).GetFirstScriptOfType<SpawnedItemEntity>() == null)
                    {
                      object[] objArray = new object[6];
                      objArray[0] = (object) "spawnedItemGameEntity child SpawnedItemEntity script is null. item: ";
                      missionWeapon = spawnedItemEntity.WeaponCopy;
                      objArray[1] = (object) missionWeapon.Item.StringId;
                      objArray[2] = (object) " attached item: ";
                      missionWeapon = spawnedItemEntity.WeaponCopy;
                      missionWeapon = missionWeapon.GetAttachedWeapon(num1);
                      objArray[3] = (object) missionWeapon.Item.StringId;
                      objArray[4] = (object) " attachment index: ";
                      objArray[5] = (object) num1;
                      Debug.Print(string.Concat(objArray));
                    }
                    GameNetwork.BeginModuleEventAsServer(networkPeer);
                    GameNetwork.WriteMessage((GameNetworkMessage) new SpawnAttachedWeaponOnSpawnedWeapon(spawnedItemEntity.Id, num1, gameEntity.GetChild(num1).GetFirstScriptOfType<SpawnedItemEntity>().Id.Id));
                    GameNetwork.EndModuleEventAsServer();
                  }
                  ++num1;
                }
                else
                  goto label_22;
              }
            }
          }
          else if (missionObject.CreatedAtRuntime)
          {
            Mission.DynamicallyCreatedEntity dynamicallyCreatedEntity = this.Mission.AddedEntitiesInfo.SingleOrDefault<Mission.DynamicallyCreatedEntity>((Func<Mission.DynamicallyCreatedEntity, bool>) (x => x.ObjectId == missionObject.Id));
            if (dynamicallyCreatedEntity != null)
            {
              GameNetwork.BeginModuleEventAsServer(networkPeer);
              GameNetwork.WriteMessage((GameNetworkMessage) new CreateMissionObject(dynamicallyCreatedEntity.ObjectId, dynamicallyCreatedEntity.Prefab, dynamicallyCreatedEntity.Frame, dynamicallyCreatedEntity.ChildObjectIds));
              GameNetwork.EndModuleEventAsServer();
            }
          }
        }
      }
    }

    private void SynchronizeMissionObjectsToPeer(NetworkCommunicator networkPeer)
    {
      foreach (MissionObject missionObject in (List<MissionObject>) this.Mission.MissionObjects)
      {
        if (missionObject is SynchedMissionObject synchedMissionObject)
        {
          GameNetwork.BeginModuleEventAsServer(networkPeer);
          GameNetwork.WriteMessage((GameNetworkMessage) new SynchronizeMissionObject(synchedMissionObject));
          GameNetwork.EndModuleEventAsServer();
        }
      }
    }

    private void SendMissilesToPeer(NetworkCommunicator networkPeer)
    {
      foreach (Mission.Missile missile in this.Mission.Missiles)
      {
        Vec3 velocity = missile.GetVelocity();
        float num1 = velocity.Normalize();
        Mat3 identity = Mat3.Identity with { f = velocity };
        identity.Orthonormalize();
        GameNetwork.BeginModuleEventAsServer(networkPeer);
        int index1 = missile.Index;
        int index2 = missile.ShooterAgent.Index;
        MissionWeapon weapon = missile.Weapon;
        Vec3 position = missile.GetPosition();
        Vec3 direction = velocity;
        double speed = (double) num1;
        Mat3 orientation = identity;
        int num2 = missile.GetHasRigidBody() ? 1 : 0;
        MissionObject missionObjectToIgnore = missile.MissionObjectToIgnore;
        MissionObjectId missionObjectToIgnoreId = missionObjectToIgnore != null ? missionObjectToIgnore.Id : MissionObjectId.Invalid;
        GameNetwork.WriteMessage((GameNetworkMessage) new CreateMissile(index1, index2, EquipmentIndex.None, weapon, position, direction, (float) speed, orientation, num2 != 0, missionObjectToIgnoreId, false));
        GameNetwork.EndModuleEventAsServer();
      }
    }

    public override void OnPlayerDisconnectedFromServer(NetworkCommunicator networkPeer)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      if (component == null || !component.HasSpawnedAgentVisuals)
        return;
      this.Mission.GetMissionBehavior<MultiplayerMissionAgentVisualSpawnComponent>().RemoveAgentVisuals(component);
      component.HasSpawnedAgentVisuals = false;
    }

    protected override void HandleEarlyNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
      if (!networkPeer.IsServerPeer)
      {
        foreach (NetworkCommunicator networkPeer1 in GameNetwork.NetworkPeers)
        {
          if (networkPeer1.IsSynchronized || networkPeer1.JustReconnecting)
            networkPeer1.VirtualPlayer.SynchronizeComponentsTo(networkPeer.VirtualPlayer);
        }
        foreach (NetworkCommunicator disconnectedNetworkPeer in GameNetwork.DisconnectedNetworkPeers)
          disconnectedNetworkPeer.VirtualPlayer.SynchronizeComponentsTo(networkPeer.VirtualPlayer);
      }
      MissionPeer missionPeer = networkPeer.AddComponent<MissionPeer>();
      if (networkPeer.JustReconnecting && missionPeer.Team != null)
        MBAPI.IMBPeer.SetTeam(networkPeer.Index, missionPeer.Team.MBTeam.Index);
      missionPeer.JoinTime = DateTime.Now;
    }

    protected override void HandleLateNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
      if (networkPeer.IsServerPeer)
        return;
      this.SendExistingObjectsToPeer(networkPeer);
    }

    protected override void HandleEarlyPlayerDisconnect(NetworkCommunicator networkPeer)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      if (component == null)
        return;
      this.Mission?.GetMissionBehavior<MultiplayerMissionAgentVisualSpawnComponent>().RemoveAgentVisuals(component, true);
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new RemoveAgentVisualsForPeer(component.GetNetworkPeer()));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      component.HasSpawnedAgentVisuals = false;
    }

    public override void OnRemoveBehavior() => base.OnRemoveBehavior();

    protected override void HandlePlayerDisconnect(NetworkCommunicator networkPeer)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      if (component == null)
        return;
      if (component.ControlledAgent != null)
      {
        Agent controlledAgent = component.ControlledAgent;
        Blow b = new Blow(controlledAgent.Index)
        {
          WeaponRecord = new BlowWeaponRecord(),
          DamageType = DamageTypes.Invalid,
          BaseMagnitude = 10000f
        };
        b.WeaponRecord.WeaponClass = WeaponClass.Undefined;
        b.GlobalPosition = controlledAgent.Position;
        b.DamagedPercentage = 1f;
        controlledAgent.Die(b);
      }
      if (this.Mission.AllAgents != null)
      {
        foreach (Agent allAgent in (List<Agent>) this.Mission.AllAgents)
        {
          if (allAgent.MissionPeer == component)
            allAgent.MissionPeer = (MissionPeer) null;
          if (allAgent.OwningAgentMissionPeer == component)
            allAgent.OwningAgentMissionPeer = (MissionPeer) null;
        }
      }
      if (component.ControlledFormation == null)
        return;
      component.ControlledFormation.PlayerOwner = (Agent) null;
    }

    public override void OnAddTeam(Team team)
    {
      base.OnAddTeam(team);
      if (GameNetwork.IsServerOrRecorder)
      {
        MBDebug.Print("----------OnAddTeam-");
        MBDebug.Print("Adding a team and sending it to all clients", debugFilter: 17179869184UL);
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new AddTeam(team.TeamIndex, team.Side, team.Color, team.Color2, team.Banner != null ? BannerCode.CreateFrom(team.Banner).Code : string.Empty, team.IsPlayerGeneral, team.IsPlayerSergeant));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      else
      {
        if (team.Side == BattleSideEnum.Attacker || team.Side == BattleSideEnum.Defender || this.Mission.SpectatorTeam != null)
          return;
        this.Mission.SpectatorTeam = team;
      }
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._chatBox = Game.Current.GetGameHandler<ChatBox>();
    }

    public override void OnClearScene()
    {
      if (!GameNetwork.IsServerOrRecorder)
        return;
      MBDebug.Print("I am clearing the scene, and sending this message to all clients", debugFilter: 17179869184UL);
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new ClearMission());
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
    }

    public override void OnMissionTick(float dt)
    {
      if (GameNetwork.IsServerOrRecorder)
      {
        this._accumulatedTimeSinceLastTimerSync += dt;
        if ((double) this._accumulatedTimeSinceLastTimerSync > 2.0)
        {
          this._accumulatedTimeSinceLastTimerSync -= 2f;
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new SynchronizeMissionTimeTracker((float) MissionTime.Now.ToSeconds));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
        }
      }
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        networkPeer.GetComponent<MissionRepresentativeBase>()?.Tick(dt);
        if (GameNetwork.IsServer && !networkPeer.IsServerPeer && !MultiplayerOptions.OptionType.DisableInactivityKick.GetBoolValue())
          networkPeer.GetComponent<MissionPeer>()?.TickInactivityStatus();
      }
    }

    protected override void OnEndMission()
    {
      if (GameNetwork.IsServer)
      {
        foreach (MissionPeer peer in VirtualPlayer.Peers<MissionPeer>())
          peer.ControlledAgent = (Agent) null;
        foreach (Agent allAgent in (List<Agent>) this.Mission.AllAgents)
          allAgent.MissionPeer = (MissionPeer) null;
      }
      base.OnEndMission();
    }

    public void OnPeerSelectedTeam(MissionPeer missionPeer)
    {
      this.SendAgentVisualsToPeer(missionPeer.GetNetworkPeer(), missionPeer.Team);
    }

    public void OnClientSynchronized(NetworkCommunicator networkPeer)
    {
      Action<NetworkCommunicator> synchronizedEvent = this.OnClientSynchronizedEvent;
      if (synchronizedEvent != null)
        synchronizedEvent(networkPeer);
      if (!networkPeer.IsMine)
        return;
      Action clientSynchronized = this.OnMyClientSynchronized;
      if (clientSynchronized == null)
        return;
      clientSynchronized();
    }
  }
}
