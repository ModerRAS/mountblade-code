// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.Tournaments.MissionTournamentJoustingView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.Tournaments.AgentControllers;
using SandBox.Tournaments.MissionLogics;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer;

#nullable disable
namespace SandBox.View.Missions.Tournaments
{
  public class MissionTournamentJoustingView : MissionView
  {
    private MissionScoreUIHandler _scoreUIHandler;
    private MissionMessageUIHandler _messageUIHandler;
    private TournamentJoustingMissionController _tournamentJoustingMissionController;
    private Game _gameSystem;

    public override void AfterStart()
    {
      base.AfterStart();
      this._gameSystem = Game.Current;
      this._messageUIHandler = this.Mission.GetMissionBehavior<MissionMessageUIHandler>();
      this._scoreUIHandler = this.Mission.GetMissionBehavior<MissionScoreUIHandler>();
      this._tournamentJoustingMissionController = this.Mission.GetMissionBehavior<TournamentJoustingMissionController>();
      this._tournamentJoustingMissionController.VictoryAchieved += new TournamentJoustingMissionController.JoustingEventDelegate(this.OnVictoryAchieved);
      this._tournamentJoustingMissionController.PointGanied += new TournamentJoustingMissionController.JoustingEventDelegate(this.OnPointGanied);
      this._tournamentJoustingMissionController.Disqualified += new TournamentJoustingMissionController.JoustingEventDelegate(this.OnDisqualified);
      this._tournamentJoustingMissionController.Unconscious += new TournamentJoustingMissionController.JoustingEventDelegate(this.OnUnconscious);
      this._tournamentJoustingMissionController.AgentStateChanged += new TournamentJoustingMissionController.JoustingAgentStateChangedEventDelegate(this.OnAgentStateChanged);
      int index = 0;
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        if (agent.IsHuman)
        {
          this._scoreUIHandler.SetName(agent.Name.ToString(), index);
          ++index;
        }
      }
      this.SetJoustingBanners();
    }

    private void RefreshScoreBoard()
    {
      int index = 0;
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        if (agent.IsHuman)
        {
          this._scoreUIHandler.SaveScore(agent.GetController<JoustingAgentController>().Score, index);
          ++index;
        }
      }
    }

    private void SetJoustingBanners()
    {
      GameEntity banner0 = this.Mission.Scene.FindEntityWithTag("banner_0");
      GameEntity banner1 = this.Mission.Scene.FindEntityWithTag("banner_1");
      Banner coloredEmptyBanner1 = Banner.CreateOneColoredEmptyBanner(6);
      Banner coloredEmptyBanner2 = Banner.CreateOneColoredEmptyBanner(8);
      if ((NativeObject) banner0 != (NativeObject) null)
      {
        Action<Texture> setAction = (Action<Texture>) (tex =>
        {
          Material copy = Mesh.GetFromResource("banner_test").GetMaterial().CreateCopy();
          if (Campaign.Current.GameMode == CampaignGameMode.Campaign)
            copy.SetTexture(Material.MBTextureType.DiffuseMap2, tex);
          banner0.SetMaterialForAllMeshes(copy);
        });
        coloredEmptyBanner1.GetTableauTextureLarge(setAction);
      }
      if (!((NativeObject) banner1 != (NativeObject) null))
        return;
      Action<Texture> setAction1 = (Action<Texture>) (tex =>
      {
        Material copy = Mesh.GetFromResource("banner_test").GetMaterial().CreateCopy();
        if (Campaign.Current.GameMode == CampaignGameMode.Campaign)
          copy.SetTexture(Material.MBTextureType.DiffuseMap2, tex);
        banner1.SetMaterialForAllMeshes(copy);
      });
      coloredEmptyBanner2.GetTableauTextureLarge(setAction1);
    }

    public override void OnAgentHit(
      Agent affectedAgent,
      Agent affectorAgent,
      in MissionWeapon attackerWeapon,
      in Blow blow,
      in AttackCollisionData attackCollisionData)
    {
      this.RefreshScoreBoard();
    }

    private void OnVictoryAchieved(Agent affectorAgent, Agent affectedAgent)
    {
      this.ShowMessage(affectorAgent, GameTexts.FindText("str_tournament_joust_player_victory").ToString(), 8f);
      this.ShowMessage(affectedAgent, GameTexts.FindText("str_tournament_joust_opponent_victory").ToString(), 8f);
    }

    private void OnPointGanied(Agent affectorAgent, Agent affectedAgent)
    {
      this.ShowMessage(affectorAgent, GameTexts.FindText("str_tournament_joust_you_gain_point").ToString(), 5f);
      this.ShowMessage(affectedAgent, GameTexts.FindText("str_tournament_joust_opponent_gain_point").ToString(), 5f);
    }

    private void OnDisqualified(Agent affectorAgent, Agent affectedAgent)
    {
      this.ShowMessage(affectedAgent, GameTexts.FindText("str_tournament_joust_opponent_disqualified").ToString(), 5f);
      this.ShowMessage(affectorAgent, GameTexts.FindText("str_tournament_joust_you_disqualified").ToString(), 5f);
    }

    private void OnUnconscious(Agent affectorAgent, Agent affectedAgent)
    {
      this.ShowMessage(affectedAgent, GameTexts.FindText("str_tournament_joust_you_become_unconscious").ToString(), 5f);
      this.ShowMessage(affectorAgent, GameTexts.FindText("str_tournament_joust_opponent_become_unconscious").ToString(), 5f);
    }

    public void ShowMessage(string str, float duration, bool hasPriority = true)
    {
      this._messageUIHandler.ShowMessage(str, duration, hasPriority);
    }

    public void ShowMessage(Agent agent, string str, float duration, bool hasPriority = true)
    {
      if (agent.Character != this._gameSystem.PlayerTroop)
        return;
      this.ShowMessage(str, duration, hasPriority);
    }

    public void DeleteMessage(string str) => this._messageUIHandler.DeleteMessage(str);

    public void DeleteMessage(Agent agent, string str) => this.DeleteMessage(str);

    private void OnAgentStateChanged(Agent agent, JoustingAgentController.JoustingAgentState state)
    {
      string id;
      switch (state)
      {
        case JoustingAgentController.JoustingAgentState.GoingToBackStart:
          id = "";
          break;
        case JoustingAgentController.JoustingAgentState.GoToStartPosition:
          id = "str_tournament_joust_go_to_starting_position";
          break;
        case JoustingAgentController.JoustingAgentState.WaitInStartPosition:
          id = "str_tournament_joust_wait_in_starting_position";
          break;
        case JoustingAgentController.JoustingAgentState.WaitingOpponent:
          id = "str_tournament_joust_wait_opponent_to_go_starting_position";
          break;
        case JoustingAgentController.JoustingAgentState.Ready:
          id = "str_tournament_joust_go";
          break;
        case JoustingAgentController.JoustingAgentState.StartRiding:
          id = "";
          break;
        case JoustingAgentController.JoustingAgentState.Riding:
          id = "";
          break;
        case JoustingAgentController.JoustingAgentState.RidingAtWrongSide:
          id = "str_tournament_joust_wrong_side";
          break;
        case JoustingAgentController.JoustingAgentState.SwordDuel:
          id = "";
          break;
        default:
          throw new ArgumentOutOfRangeException("value");
      }
      if (id == "")
        this.ShowMessage(agent, "", 15f);
      else
        this.ShowMessage(agent, GameTexts.FindText(id).ToString(), float.PositiveInfinity);
      if (state != JoustingAgentController.JoustingAgentState.SwordDuel)
        return;
      this.ShowMessage(agent, GameTexts.FindText("str_tournament_joust_duel_on_foot").ToString(), 8f);
    }
  }
}
