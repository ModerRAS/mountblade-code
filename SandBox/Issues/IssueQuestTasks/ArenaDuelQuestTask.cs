// Decompiled with JetBrains decompiler
// Type: SandBox.Issues.IssueQuestTasks.ArenaDuelQuestTask
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics.Arena;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Issues.IssueQuestTasks
{
  public class ArenaDuelQuestTask : QuestTaskBase
  {
    private Settlement _settlement;
    private CharacterObject _opponentCharacter;
    private Agent _playerAgent;
    private Agent _opponentAgent;
    private bool _duelStarted;
    private BasicMissionTimer _missionEndTimer;

    public ArenaDuelQuestTask(
      CharacterObject duelOpponentCharacter,
      Settlement settlement,
      Action onSucceededAction,
      Action onFailedAction,
      DialogFlow dialogFlow = null)
      : base(dialogFlow, onSucceededAction, onFailedAction)
    {
      this._opponentCharacter = duelOpponentCharacter;
      this._settlement = settlement;
    }

    public void AfterStart(IMission mission)
    {
      if (!Mission.Current.HasMissionBehavior<ArenaDuelMissionBehavior>() || PlayerEncounter.LocationEncounter.Settlement != this._settlement)
        return;
      this.InitializeTeams();
      List<MatrixFrame> list = Mission.Current.Scene.FindEntitiesWithTag("sp_arena_respawn").Select<GameEntity, MatrixFrame>((Func<GameEntity, MatrixFrame>) (e => e.GetGlobalFrame())).ToList<MatrixFrame>();
      MatrixFrame frame1 = list[MBRandom.RandomInt(list.Count)];
      float maxValue = float.MaxValue;
      MatrixFrame frame2 = frame1;
      foreach (MatrixFrame matrixFrame in list)
      {
        if (frame1 != matrixFrame && (double) matrixFrame.origin.DistanceSquared(frame1.origin) < (double) maxValue)
          frame2 = matrixFrame;
      }
      frame1.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      frame2.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      this._playerAgent = this.SpawnArenaAgent(CharacterObject.PlayerCharacter, Mission.Current.PlayerTeam, frame1);
      this._opponentAgent = this.SpawnArenaAgent(this._opponentCharacter, Mission.Current.PlayerEnemyTeam, frame2);
    }

    public override void SetReferences()
    {
      CampaignEvents.AfterMissionStarted.AddNonSerializedListener((object) this, new Action<IMission>(this.AfterStart));
      CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
      CampaignEvents.MissionTickEvent.AddNonSerializedListener((object) this, new Action<float>(this.MissionTick));
    }

    public void OnGameMenuOpened(MenuCallbackArgs args)
    {
      if (Hero.MainHero.CurrentSettlement != this._settlement)
        return;
      if (this._duelStarted)
      {
        if (this._opponentAgent.IsActive())
          this.Finish(QuestTaskBase.FinishStates.Fail);
        else
          this.Finish(QuestTaskBase.FinishStates.Success);
      }
      else
        this.OpenArenaDuelMission();
    }

    public void MissionTick(float dt)
    {
      if (!Mission.Current.HasMissionBehavior<ArenaDuelMissionBehavior>() || PlayerEncounter.LocationEncounter.Settlement != this._settlement || (this._playerAgent == null || this._playerAgent.IsActive()) && (this._opponentAgent == null || this._opponentAgent.IsActive()))
        return;
      if (this._missionEndTimer != null && (double) this._missionEndTimer.ElapsedTime > 4.0)
      {
        Mission.Current.EndMission();
      }
      else
      {
        if (this._missionEndTimer != null || (this._playerAgent == null || this._playerAgent.IsActive()) && (this._opponentAgent == null || this._opponentAgent.IsActive()))
          return;
        this._missionEndTimer = new BasicMissionTimer();
      }
    }

    private void OpenArenaDuelMission()
    {
      Location locationWithId = this._settlement.LocationComplex.GetLocationWithId("arena");
      int upgradeLevel = this._settlement.IsTown ? this._settlement.Town.GetWallLevel() : 1;
      SandBoxMissions.OpenArenaDuelMission(locationWithId.GetSceneName(upgradeLevel), locationWithId);
      this._duelStarted = true;
    }

    private void InitializeTeams()
    {
      Mission.Current.Teams.Add(BattleSideEnum.Defender, Hero.MainHero.MapFaction.Color, Hero.MainHero.MapFaction.Color2);
      Mission.Current.Teams.Add(BattleSideEnum.Attacker, Hero.MainHero.MapFaction.Color2, Hero.MainHero.MapFaction.Color);
      Mission.Current.PlayerTeam = Mission.Current.DefenderTeam;
    }

    private Agent SpawnArenaAgent(CharacterObject character, Team team, MatrixFrame frame)
    {
      if (team == Mission.Current.PlayerTeam)
        character = CharacterObject.PlayerCharacter;
      Equipment randomElement = this._settlement.Culture.DuelPresetEquipmentRoster.AllEquipments.GetRandomElement<Equipment>();
      Mission current = Mission.Current;
      AgentBuildData agentBuildData1 = new AgentBuildData((BasicCharacterObject) character).Team(team).ClothingColor1(team.Color).ClothingColor2(team.Color2).InitialPosition(in frame.origin);
      Vec2 vec2 = frame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      AgentBuildData agentBuildData2 = agentBuildData1.InitialDirection(in local).NoHorses(true).Equipment(randomElement).TroopOrigin((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) character)).Controller(character == CharacterObject.PlayerCharacter ? Agent.ControllerType.Player : Agent.ControllerType.AI);
      Agent agent = current.SpawnAgent(agentBuildData2);
      if (agent.IsAIControlled)
        agent.SetWatchState(Agent.WatchState.Alarmed);
      return agent;
    }
  }
}
