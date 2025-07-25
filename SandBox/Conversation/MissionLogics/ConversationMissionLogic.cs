// Decompiled with JetBrains decompiler
// Type: SandBox.Conversation.MissionLogics.ConversationMissionLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Conversation.MissionLogics
{
  public class ConversationMissionLogic : MissionLogic
  {
    private static readonly ActionIndexCache act_conversation_normal_loop = ActionIndexCache.Create(nameof (act_conversation_normal_loop));
    private ConversationCharacterData _otherSideConversationData;
    private ConversationCharacterData _playerConversationData;
    private readonly List<Agent> _addBloodToAgents;
    private Agent _curConversationPartnerAgent;
    private bool _isRenderingStarted;
    private bool _conversationStarted;
    private bool _isCivilianEquipmentRequiredForLeader;
    private bool _isCivilianEquipmentRequiredForBodyGuards;
    private List<GameEntity> _usedSpawnPoints;
    private GameEntity _conversationSet;
    private bool _realCameraController;

    private bool IsReadyForConversation
    {
      get => this._isRenderingStarted && Agent.Main != null && Agent.Main.IsActive();
    }

    public ConversationMissionLogic(
      ConversationCharacterData playerCharacterData,
      ConversationCharacterData otherCharacterData)
    {
      this._playerConversationData = playerCharacterData;
      this._otherSideConversationData = otherCharacterData;
      this._isCivilianEquipmentRequiredForLeader = otherCharacterData.IsCivilianEquipmentRequiredForLeader;
      this._isCivilianEquipmentRequiredForBodyGuards = otherCharacterData.IsCivilianEquipmentRequiredForBodyGuardCharacters;
      this._addBloodToAgents = new List<Agent>();
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this._realCameraController = this.Mission.CameraIsFirstPerson;
      this.Mission.CameraIsFirstPerson = true;
      IEnumerable<GameEntity> entitiesWithTag = this.Mission.Scene.FindEntitiesWithTag("binary_conversation_point");
      if (entitiesWithTag.Any<GameEntity>())
        this._conversationSet = entitiesWithTag.ToMBList<GameEntity>().GetRandomElement<GameEntity>();
      this._usedSpawnPoints = new List<GameEntity>();
      BattleSideEnum side = BattleSideEnum.Attacker;
      if (PlayerSiege.PlayerSiegeEvent != null)
        side = PlayerSiege.PlayerSide;
      else if (PlayerEncounter.Current != null)
      {
        side = !PlayerEncounter.InsideSettlement || PlayerEncounter.Current.OpponentSide == BattleSideEnum.Defender ? BattleSideEnum.Attacker : BattleSideEnum.Defender;
        if (PlayerEncounter.Current.EncounterSettlementAux != null && PlayerEncounter.Current.EncounterSettlementAux.MapFaction == Hero.MainHero.MapFaction)
          side = !PlayerEncounter.Current.EncounterSettlementAux.IsUnderSiege ? BattleSideEnum.Attacker : BattleSideEnum.Defender;
      }
      this.Mission.PlayerTeam = this.Mission.Teams.Add(side, Hero.MainHero.MapFaction.Color, Hero.MainHero.MapFaction.Color2);
      bool flag = this._otherSideConversationData.Character.Equipment[10].Item != null && this._otherSideConversationData.Character.Equipment[10].Item.HasHorseComponent && side == BattleSideEnum.Defender;
      MatrixFrame matrixFrame;
      MatrixFrame initialFrame;
      if ((NativeObject) this._conversationSet != (NativeObject) null)
      {
        if (this.Mission.PlayerTeam.IsDefender)
        {
          matrixFrame = this.GetDefenderSideSpawnFrame();
          initialFrame = this.GetAttackerSideSpawnFrame(flag);
        }
        else
        {
          matrixFrame = this.GetAttackerSideSpawnFrame(flag);
          initialFrame = this.GetDefenderSideSpawnFrame();
        }
      }
      else
      {
        matrixFrame = this.GetPlayerSideSpawnFrameInSettlement();
        initialFrame = this.GetOtherSideSpawnFrameInSettlement(matrixFrame);
      }
      this.SpawnPlayer(this._playerConversationData, matrixFrame);
      this.SpawnOtherSide(this._otherSideConversationData, initialFrame, flag, !this.Mission.PlayerTeam.IsDefender);
    }

    private void SpawnPlayer(
      ConversationCharacterData playerConversationData,
      MatrixFrame initialFrame)
    {
      MatrixFrame initialFrame1 = new MatrixFrame(initialFrame.rotation, initialFrame.origin);
      initialFrame1.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      this.SpawnCharacter(CharacterObject.PlayerCharacter, playerConversationData, initialFrame1, ConversationMissionLogic.act_conversation_normal_loop);
    }

    private void SpawnOtherSide(
      ConversationCharacterData characterData,
      MatrixFrame initialFrame,
      bool spawnWithHorse,
      bool isDefenderSide)
    {
      MatrixFrame matrixFrame = new MatrixFrame(initialFrame.rotation, initialFrame.origin);
      if (Agent.Main != null)
        matrixFrame.rotation.f = Agent.Main.Position - matrixFrame.origin;
      matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(characterData.Character.Race, "_settlement");
      AgentBuildData agentBuildData = new AgentBuildData((BasicCharacterObject) characterData.Character).TroopOrigin((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) characterData.Character)).Team(this.Mission.PlayerTeam).Monster(monsterWithSuffix).InitialPosition(in matrixFrame.origin).InitialDirection(matrixFrame.rotation.f.AsVec2).NoHorses(!spawnWithHorse).CivilianEquipment(this._isCivilianEquipmentRequiredForLeader);
      if (characterData.Party?.LeaderHero?.ClanBanner != null)
        agentBuildData.Banner(characterData.Party.LeaderHero.ClanBanner);
      else if (characterData.Party != null && characterData.Party.MapFaction != null)
        agentBuildData.Banner(characterData.Party?.MapFaction?.Banner);
      if (spawnWithHorse)
        agentBuildData.MountKey(MountCreationKey.GetRandomMountKeyString(characterData.Character.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, characterData.Character.GetMountKeySeed()));
      if (characterData.Party != null)
      {
        agentBuildData.TroopOrigin((IAgentOriginBase) new PartyAgentOrigin(characterData.Party, characterData.Character, 0, new UniqueTroopDescriptor(FlattenedTroopRoster.GenerateUniqueNoFromParty(characterData.Party.MobileParty, 0))));
        agentBuildData.ClothingColor1(characterData.Party.MapFaction.Color).ClothingColor2(characterData.Party.MapFaction.Color2);
      }
      Agent agent = this.Mission.SpawnAgent(agentBuildData);
      if (characterData.SpawnedAfterFight)
        this._addBloodToAgents.Add(agent);
      if (agent.MountAgent == null)
        agent.SetActionChannel(0, ConversationMissionLogic.act_conversation_normal_loop, blendInPeriod: 0.0f, startProgress: MBRandom.RandomFloat);
      agent.AgentVisuals.SetAgentLodZeroOrMax(true);
      this._curConversationPartnerAgent = agent;
      bool flag = characterData.Character.HeroObject != null && characterData.Character.HeroObject.IsPlayerCompanion;
      if (characterData.NoBodyguards || flag)
        return;
      this.SpawnBodyguards(isDefenderSide);
    }

    private MatrixFrame GetDefenderSideSpawnFrame()
    {
      MatrixFrame defenderSideSpawnFrame = MatrixFrame.Identity;
      foreach (GameEntity child in this._conversationSet.GetChildren())
      {
        if (child.HasTag("opponent_infantry_spawn"))
        {
          defenderSideSpawnFrame = child.GetGlobalFrame();
          break;
        }
      }
      defenderSideSpawnFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      return defenderSideSpawnFrame;
    }

    private MatrixFrame GetAttackerSideSpawnFrame(bool hasHorse)
    {
      MatrixFrame attackerSideSpawnFrame = MatrixFrame.Identity;
      foreach (GameEntity child in this._conversationSet.GetChildren())
      {
        if (hasHorse && child.HasTag("player_cavalry_spawn"))
        {
          attackerSideSpawnFrame = child.GetGlobalFrame();
          break;
        }
        if (child.HasTag("player_infantry_spawn"))
        {
          attackerSideSpawnFrame = child.GetGlobalFrame();
          break;
        }
      }
      attackerSideSpawnFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      return attackerSideSpawnFrame;
    }

    private MatrixFrame GetPlayerSideSpawnFrameInSettlement()
    {
      GameEntity gameEntity = this.Mission.Scene.FindEntityWithTag("spawnpoint_player") ?? this.Mission.Scene.FindEntitiesWithTag("sp_player_conversation").FirstOrDefault<GameEntity>() ?? this.Mission.Scene.FindEntityWithTag("spawnpoint_player_outside");
      MatrixFrame frameInSettlement = gameEntity != null ? gameEntity.GetFrame() : MatrixFrame.Identity;
      frameInSettlement.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      return frameInSettlement;
    }

    private MatrixFrame GetOtherSideSpawnFrameInSettlement(MatrixFrame playerFrame)
    {
      MatrixFrame frameInSettlement = playerFrame;
      Vec3 vec3 = new Vec3(playerFrame.rotation.f);
      double num = (double) vec3.Normalize();
      frameInSettlement.origin = playerFrame.origin + 4f * vec3;
      frameInSettlement.rotation.RotateAboutUp(3.14159274f);
      return frameInSettlement;
    }

    public override void OnRenderingStarted()
    {
      this._isRenderingStarted = true;
      Debug.Print("\n ConversationMissionLogic::OnRenderingStarted\n", color: Debug.DebugColor.Cyan, debugFilter: 64UL);
    }

    private void InitializeAfterCreation(
      Agent conversationPartnerAgent,
      PartyBase conversationPartnerParty)
    {
      Campaign.Current.ConversationManager.SetupAndStartMapConversation(conversationPartnerParty?.MobileParty, (IAgent) conversationPartnerAgent, (IAgent) Mission.Current.MainAgentServer);
      this.Mission.SetMissionMode(MissionMode.Conversation, true);
    }

    public override void OnMissionTick(float dt)
    {
      if (this._addBloodToAgents.Count > 0)
      {
        foreach (Agent addBloodToAgent in this._addBloodToAgents)
        {
          (sbyte, sbyte) burstBoneIndices = addBloodToAgent.GetRandomPairOfRealBloodBurstBoneIndices();
          if (burstBoneIndices.Item1 != (sbyte) -1 && burstBoneIndices.Item2 != (sbyte) -1)
          {
            addBloodToAgent.CreateBloodBurstAtLimb(burstBoneIndices.Item1, (float) (0.10000000149011612 + (double) MBRandom.RandomFloat * 0.10000000149011612));
            addBloodToAgent.CreateBloodBurstAtLimb(burstBoneIndices.Item2, (float) (0.20000000298023224 + (double) MBRandom.RandomFloat * 0.20000000298023224));
          }
        }
        this._addBloodToAgents.Clear();
      }
      if (!this._conversationStarted)
      {
        if (!this.IsReadyForConversation)
          return;
        this.InitializeAfterCreation(this._curConversationPartnerAgent, this._otherSideConversationData.Party);
        this._conversationStarted = true;
      }
      if (this.Mission.InputManager.IsGameKeyPressed(4))
        Campaign.Current.ConversationManager.EndConversation();
      if (Campaign.Current.ConversationManager.IsConversationInProgress)
        return;
      this.Mission.EndMission();
    }

    private void SpawnBodyguards(bool isDefenderSide)
    {
      int num = 2;
      ConversationCharacterData conversationData = this._otherSideConversationData;
      if (conversationData.Party == null)
        return;
      TroopRoster memberRoster = conversationData.Party.MemberRoster;
      int totalManCount = memberRoster.TotalManCount;
      if (memberRoster.Contains(CharacterObject.PlayerCharacter))
        --totalManCount;
      if (totalManCount < num + 1)
        return;
      List<CharacterObject> characterObjectList = new List<CharacterObject>();
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) memberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero && conversationData.Character != troopRosterElement.Character && !characterObjectList.Contains(troopRosterElement.Character) && troopRosterElement.Character.HeroObject.IsWounded && !troopRosterElement.Character.IsPlayerCharacter)
          characterObjectList.Add(troopRosterElement.Character);
      }
      while (characterObjectList.Count < num)
      {
        foreach (TroopRosterElement troopRosterElement in (IEnumerable<TroopRosterElement>) memberRoster.GetTroopRoster().OrderByDescending<TroopRosterElement, int>((Func<TroopRosterElement, int>) (k => k.Character.Level)))
        {
          if ((!conversationData.Character.IsHero || conversationData.Character != troopRosterElement.Character) && !troopRosterElement.Character.IsPlayerCharacter)
            characterObjectList.Add(troopRosterElement.Character);
          if (characterObjectList.Count == num)
            break;
        }
      }
      List<ActionIndexCache> actionIndexCacheList = new List<ActionIndexCache>()
      {
        ActionIndexCache.Create("act_stand_1"),
        ActionIndexCache.Create("act_inventory_idle_start"),
        ActionIndexCache.Create("act_inventory_idle"),
        ConversationMissionLogic.act_conversation_normal_loop,
        ActionIndexCache.Create("act_conversation_warrior_loop"),
        ActionIndexCache.Create("act_conversation_hip_loop"),
        ActionIndexCache.Create("act_conversation_closed_loop"),
        ActionIndexCache.Create("act_conversation_demure_loop")
      };
      for (int index1 = 0; index1 < num; ++index1)
      {
        int index2 = new Random().Next(0, characterObjectList.Count);
        int index3 = MBRandom.RandomInt(0, actionIndexCacheList.Count);
        this.SpawnCharacter(characterObjectList[index2], conversationData, this.GetBodyguardSpawnFrame(characterObjectList[index2].HasMount(), isDefenderSide), actionIndexCacheList[index3]);
        actionIndexCacheList.RemoveAt(index3);
        characterObjectList.RemoveAt(index2);
      }
    }

    private void SpawnCharacter(
      CharacterObject character,
      ConversationCharacterData characterData,
      MatrixFrame initialFrame,
      ActionIndexCache conversationAction)
    {
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(character.Race, "_settlement");
      AgentBuildData agentBuildData1 = new AgentBuildData((BasicCharacterObject) character).TroopOrigin((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) character)).Team(this.Mission.PlayerTeam).Monster(monsterWithSuffix).InitialPosition(in initialFrame.origin);
      Vec2 vec2 = initialFrame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      AgentBuildData agentBuildData2 = agentBuildData1.InitialDirection(in local).NoHorses(character.HasMount()).NoWeapons(characterData.NoWeapon).CivilianEquipment(character == CharacterObject.PlayerCharacter ? this._isCivilianEquipmentRequiredForLeader : this._isCivilianEquipmentRequiredForBodyGuards);
      if (characterData.Party?.LeaderHero?.ClanBanner != null)
        agentBuildData2.Banner(characterData.Party.LeaderHero.ClanBanner);
      else if (characterData.Party != null && characterData.Party?.MapFaction != null)
        agentBuildData2.Banner(characterData.Party.MapFaction.Banner);
      if (characterData.Party != null)
        agentBuildData2.ClothingColor1(characterData.Party.MapFaction.Color).ClothingColor2(characterData.Party.MapFaction.Color2);
      if (characterData.Character == CharacterObject.PlayerCharacter)
        agentBuildData2.Controller(Agent.ControllerType.Player);
      Agent agent = this.Mission.SpawnAgent(agentBuildData2);
      agent.AgentVisuals.SetAgentLodZeroOrMax(true);
      agent.SetLookAgent(Agent.Main);
      AnimationSystemData animationSystemData = agentBuildData2.AgentMonster.FillAnimationSystemData(MBGlobals.GetActionSetWithSuffix(agentBuildData2.AgentMonster, agentBuildData2.AgentIsFemale, "_poses"), character.GetStepSize(), false);
      agent.SetActionSet(ref animationSystemData);
      if (characterData.Character == CharacterObject.PlayerCharacter)
        agent.AgentVisuals.GetSkeleton().TickAnimationsAndForceUpdate(0.1f, initialFrame, true);
      if (characterData.SpawnedAfterFight)
      {
        this._addBloodToAgents.Add(agent);
      }
      else
      {
        if (agent.MountAgent != null)
          return;
        agent.SetActionChannel(0, conversationAction, blendInPeriod: 0.0f, startProgress: MBRandom.RandomFloat * 0.8f);
      }
    }

    private MatrixFrame GetBodyguardSpawnFrame(bool spawnWithHorse, bool isDefenderSide)
    {
      MatrixFrame bodyguardSpawnFrame = MatrixFrame.Identity;
      foreach (GameEntity child in this._conversationSet.GetChildren())
      {
        if (!isDefenderSide)
        {
          if (spawnWithHorse && child.HasTag("player_bodyguard_cavalry_spawn") && !this._usedSpawnPoints.Contains(child))
          {
            this._usedSpawnPoints.Add(child);
            bodyguardSpawnFrame = child.GetGlobalFrame();
            break;
          }
          if (child.HasTag("player_bodyguard_infantry_spawn") && !this._usedSpawnPoints.Contains(child))
          {
            this._usedSpawnPoints.Add(child);
            bodyguardSpawnFrame = child.GetGlobalFrame();
            break;
          }
        }
        else
        {
          if (spawnWithHorse && child.HasTag("opponent_bodyguard_cavalry_spawn") && !this._usedSpawnPoints.Contains(child))
          {
            this._usedSpawnPoints.Add(child);
            bodyguardSpawnFrame = child.GetGlobalFrame();
            break;
          }
          if (child.HasTag("opponent_bodyguard_infantry_spawn") && !this._usedSpawnPoints.Contains(child))
          {
            this._usedSpawnPoints.Add(child);
            bodyguardSpawnFrame = child.GetGlobalFrame();
            break;
          }
        }
      }
      bodyguardSpawnFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      return bodyguardSpawnFrame;
    }

    protected override void OnEndMission()
    {
      this._conversationSet = (GameEntity) null;
      this.Mission.CameraIsFirstPerson = this._realCameraController;
    }
  }
}
