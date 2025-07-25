// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.Arena.ArenaDuelMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Tournaments.MissionLogics;
using System;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics.Arena
{
  public class ArenaDuelMissionController : MissionLogic
  {
    private CharacterObject _duelCharacter;
    private bool _requireCivilianEquipment;
    private bool _spawnBothSideWithHorses;
    private bool _duelHasEnded;
    private Agent _duelAgent;
    private float _customAgentHealth;
    private BasicMissionTimer _duelEndTimer;
    private MBList<MatrixFrame> _initialSpawnFrames;
    private static Action<CharacterObject> _onDuelEnd;

    public ArenaDuelMissionController(
      CharacterObject duelCharacter,
      bool requireCivilianEquipment,
      bool spawnBothSideWithHorses,
      Action<CharacterObject> onDuelEnd,
      float customAgentHealth)
    {
      this._duelCharacter = duelCharacter;
      this._requireCivilianEquipment = requireCivilianEquipment;
      this._spawnBothSideWithHorses = spawnBothSideWithHorses;
      this._customAgentHealth = customAgentHealth;
      ArenaDuelMissionController._onDuelEnd = onDuelEnd;
    }

    public override void AfterStart()
    {
      this._duelHasEnded = false;
      this._duelEndTimer = new BasicMissionTimer();
      this.DeactivateOtherTournamentSets();
      this.InitializeMissionTeams();
      this._initialSpawnFrames = this.Mission.Scene.FindEntitiesWithTag("sp_arena").Select<GameEntity, MatrixFrame>((Func<GameEntity, MatrixFrame>) (e => e.GetGlobalFrame())).ToMBList<MatrixFrame>();
      for (int index = 0; index < this._initialSpawnFrames.Count; ++index)
      {
        MatrixFrame initialSpawnFrame = this._initialSpawnFrames[index];
        initialSpawnFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        this._initialSpawnFrames[index] = initialSpawnFrame;
      }
      MatrixFrame randomElement1 = this._initialSpawnFrames.GetRandomElement<MatrixFrame>();
      this._initialSpawnFrames.Remove(randomElement1);
      MatrixFrame randomElement2 = this._initialSpawnFrames.GetRandomElement<MatrixFrame>();
      this.SpawnAgent(CharacterObject.PlayerCharacter, randomElement1);
      this._duelAgent = this.SpawnAgent(this._duelCharacter, randomElement2);
      this._duelAgent.Defensiveness = 1f;
    }

    private void InitializeMissionTeams()
    {
      this.Mission.Teams.Add(BattleSideEnum.Defender, Hero.MainHero.MapFaction.Color, Hero.MainHero.MapFaction.Color2);
      this.Mission.Teams.Add(BattleSideEnum.Attacker, this._duelCharacter.Culture.Color, this._duelCharacter.Culture.Color2);
      this.Mission.PlayerTeam = this.Mission.Teams.Defender;
    }

    private void DeactivateOtherTournamentSets()
    {
      TournamentBehavior.DeleteTournamentSetsExcept(this.Mission.Scene.FindEntityWithTag("tournament_fight"));
    }

    private Agent SpawnAgent(CharacterObject character, MatrixFrame spawnFrame)
    {
      AgentBuildData agentBuildData1 = new AgentBuildData((BasicCharacterObject) character);
      agentBuildData1.BodyProperties(character.GetBodyPropertiesMax());
      Mission mission = this.Mission;
      AgentBuildData agentBuildData2 = agentBuildData1.Team(character == CharacterObject.PlayerCharacter ? this.Mission.PlayerTeam : this.Mission.PlayerEnemyTeam).InitialPosition(in spawnFrame.origin);
      Vec2 vec2 = spawnFrame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      AgentBuildData agentBuildData3 = agentBuildData2.InitialDirection(in local).NoHorses(!this._spawnBothSideWithHorses).Equipment(this._requireCivilianEquipment ? character.FirstCivilianEquipment : character.FirstBattleEquipment).TroopOrigin((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) character));
      Agent agent = mission.SpawnAgent(agentBuildData3);
      agent.FadeIn();
      if (character == CharacterObject.PlayerCharacter)
        agent.Controller = Agent.ControllerType.Player;
      if (agent.IsAIControlled)
        agent.SetWatchState(Agent.WatchState.Alarmed);
      agent.Health = this._customAgentHealth;
      agent.BaseHealthLimit = this._customAgentHealth;
      agent.HealthLimit = this._customAgentHealth;
      return agent;
    }

    public override void OnMissionTick(float dt)
    {
      if (!this._duelHasEnded || (double) this._duelEndTimer.ElapsedTime <= 4.0)
        return;
      GameTexts.SetVariable("leave_key", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 4)));
      MBInformationManager.AddQuickInformation(GameTexts.FindText("str_duel_has_ended"));
      this._duelEndTimer.Reset();
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (ArenaDuelMissionController._onDuelEnd == null)
        return;
      ArenaDuelMissionController._onDuelEnd(affectedAgent == this._duelAgent ? CharacterObject.PlayerCharacter : this._duelCharacter);
      ArenaDuelMissionController._onDuelEnd = (Action<CharacterObject>) null;
      this._duelHasEnded = true;
      this._duelEndTimer.Reset();
    }

    public override InquiryData OnEndMissionRequest(out bool canPlayerLeave)
    {
      canPlayerLeave = true;
      if (!this._duelHasEnded)
      {
        canPlayerLeave = false;
        MBInformationManager.AddQuickInformation(GameTexts.FindText("str_can_not_retreat_duel_ongoing"));
      }
      return (InquiryData) null;
    }
  }
}
