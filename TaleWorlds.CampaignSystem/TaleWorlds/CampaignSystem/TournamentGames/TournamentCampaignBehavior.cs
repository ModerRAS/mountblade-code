// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.TournamentGames.TournamentCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.TournamentGames
{
  public class TournamentCampaignBehavior : CampaignBehaviorBase
  {
    private const int TournamentCooldownDurationAsDays = 15;
    private Dictionary<Town, CampaignTime> _lastCreatedTournamentDatesInTowns = new Dictionary<Town, CampaignTime>();

    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.TournamentFinished.AddNonSerializedListener((object) this, new Action<CharacterObject, MBReadOnlyList<CharacterObject>, Town, ItemObject>(this.OnTournamentFinished));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.OnDailyTick));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      CampaignEvents.TownRebelliosStateChanged.AddNonSerializedListener((object) this, new Action<Town, bool>(this.OnTownRebelliousStateChanged));
      CampaignEvents.OnSiegeEventStartedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeEventStarted));
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter starter)
    {
      Campaign.Current.TournamentManager.InitializeLeaderboardEntry(Hero.MainHero);
      this.InitializeTournamentLeaderboard();
      for (int index = 0; index < 3; ++index)
      {
        foreach (Town allTown in (List<Town>) Town.AllTowns)
        {
          if (allTown.IsTown)
            this.ConsiderStartOrEndTournament(allTown);
        }
      }
    }

    private void OnDailyTick()
    {
      Hero leaderBoardLeader = Campaign.Current.TournamentManager.GetLeaderBoardLeader();
      if (leaderBoardLeader == null || !leaderBoardLeader.IsAlive || leaderBoardLeader.Clan == null)
        return;
      leaderBoardLeader.Clan.AddRenown(1f);
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      foreach (Town allTown in (List<Town>) Town.AllTowns)
      {
        TournamentGame tournamentGame = Campaign.Current.TournamentManager.GetTournamentGame(allTown);
        if (tournamentGame != null && tournamentGame.Prize != null && (tournamentGame.Prize == DefaultItems.Trash || !tournamentGame.Prize.IsReady))
          tournamentGame.UpdateTournamentPrize(false, true);
      }
      foreach (KeyValuePair<Town, CampaignTime> keyValuePair in this._lastCreatedTournamentDatesInTowns.ToList<KeyValuePair<Town, CampaignTime>>())
      {
        if ((double) keyValuePair.Value.ElapsedDaysUntilNow >= 15.0)
          this._lastCreatedTournamentDatesInTowns.Remove(keyValuePair.Key);
      }
    }

    private void OnTownRebelliousStateChanged(Town town, bool rebelliousState)
    {
      if (!town.InRebelliousState)
        return;
      TournamentGame tournamentGame = Campaign.Current.TournamentManager.GetTournamentGame(town);
      if (tournamentGame == null)
        return;
      Campaign.Current.TournamentManager.ResolveTournament(tournamentGame, town);
    }

    private void OnSiegeEventStarted(SiegeEvent siegeEvent)
    {
      Town town = siegeEvent.BesiegedSettlement.Town;
      if (town == null)
        return;
      TournamentGame tournamentGame = Campaign.Current.TournamentManager.GetTournamentGame(town);
      if (tournamentGame == null)
        return;
      Campaign.Current.TournamentManager.ResolveTournament(tournamentGame, town);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<Town, CampaignTime>>("_lastCreatedTournamentTimesInTowns", ref this._lastCreatedTournamentDatesInTowns);
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification)
    {
      Campaign.Current.TournamentManager.DeleteLeaderboardEntry(victim);
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
      this.AddGameMenus(campaignGameStarter);
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      if (!settlement.IsTown)
        return;
      this.ConsiderStartOrEndTournament(settlement.Town);
    }

    private void ConsiderStartOrEndTournament(Town town)
    {
      CampaignTime campaignTime;
      if (this._lastCreatedTournamentDatesInTowns.TryGetValue(town, out campaignTime) && (double) campaignTime.ElapsedDaysUntilNow < 15.0)
        return;
      ITournamentManager tournamentManager = Campaign.Current.TournamentManager;
      TournamentGame tournamentGame = tournamentManager.GetTournamentGame(town);
      if (tournamentGame != null && (double) tournamentGame.CreationTime.ElapsedDaysUntilNow >= (double) tournamentGame.RemoveTournamentAfterDays)
        tournamentManager.ResolveTournament(tournamentGame, town);
      if (tournamentGame == null)
      {
        if ((double) MBRandom.RandomFloat >= (double) Campaign.Current.Models.TournamentModel.GetTournamentStartChance(town))
          return;
        tournamentManager.AddTournament(Campaign.Current.Models.TournamentModel.CreateTournament(town));
        if (!this._lastCreatedTournamentDatesInTowns.ContainsKey(town))
          this._lastCreatedTournamentDatesInTowns.Add(town, CampaignTime.Now);
        else
          this._lastCreatedTournamentDatesInTowns[town] = CampaignTime.Now;
      }
      else
      {
        if ((double) tournamentGame.CreationTime.ElapsedDaysUntilNow >= (double) tournamentGame.RemoveTournamentAfterDays || (double) MBRandom.RandomFloat >= (double) Campaign.Current.Models.TournamentModel.GetTournamentEndChance(tournamentGame))
          return;
        tournamentManager.ResolveTournament(tournamentGame, town);
      }
    }

    private void OnTournamentFinished(
      CharacterObject winner,
      MBReadOnlyList<CharacterObject> participants,
      Town town,
      ItemObject prize)
    {
      if (!winner.IsHero || winner.HeroObject.Clan == null)
        return;
      winner.HeroObject.Clan.AddRenown((float) Campaign.Current.Models.TournamentModel.GetRenownReward(winner.HeroObject, town));
      GainKingdomInfluenceAction.ApplyForDefault(winner.HeroObject, (float) Campaign.Current.Models.TournamentModel.GetInfluenceReward(winner.HeroObject, town));
    }

    private float GetTournamentSimulationScore(Hero hero)
    {
      return Campaign.Current.Models.TournamentModel.GetTournamentSimulationScore(hero.CharacterObject);
    }

    private void InitializeTournamentLeaderboard()
    {
      Hero[] array = Hero.AllAliveHeroes.Where<Hero>((Func<Hero, bool>) (x => x.IsLord && (double) this.GetTournamentSimulationScore(x) > 1.5)).ToArray<Hero>();
      int victoriesAtGameStart = Campaign.Current.Models.TournamentModel.GetNumLeaderboardVictoriesAtGameStart();
      if (array.Length < 3)
        return;
      List<Hero> heroList = new List<Hero>();
      for (int index1 = 0; index1 < victoriesAtGameStart; ++index1)
      {
        heroList.Clear();
        for (int index2 = 0; index2 < 16; ++index2)
        {
          Hero hero = array[MBRandom.RandomInt(array.Length)];
          heroList.Add(hero);
        }
        Hero hero1 = (Hero) null;
        float num1 = 0.0f;
        foreach (Hero hero2 in heroList)
        {
          float num2 = this.GetTournamentSimulationScore(hero2) * (float) (0.800000011920929 + 0.20000000298023224 * (double) MBRandom.RandomFloat);
          if ((double) num2 > (double) num1)
          {
            num1 = num2;
            hero1 = hero2;
          }
        }
        Campaign.Current.TournamentManager.AddLeaderboardEntry(hero1);
        hero1.Clan.AddRenown((float) Campaign.Current.Models.TournamentModel.GetRenownReward(hero1, (Town) null));
      }
    }

    protected void AddDialogs(CampaignGameStarter campaignGameSystemStarter)
    {
    }

    protected void AddGameMenus(CampaignGameStarter campaignGameSystemStarter)
    {
      campaignGameSystemStarter.AddGameMenuOption("town_arena", "join_tournament", "{=LN09ZLXZ}Join the tournament", new GameMenuOption.OnConditionDelegate(this.game_menu_join_tournament_on_condition), (GameMenuOption.OnConsequenceDelegate) (args => GameMenu.SwitchToMenu("menu_town_tournament_join")), index: 1);
      campaignGameSystemStarter.AddGameMenuOption("town_arena", "mno_tournament_event_watch", "{=6bQIRaIl}Watch the tournament", new GameMenuOption.OnConditionDelegate(this.game_menu_tournament_watch_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_tournament_watch_current_game_on_consequence), index: 2);
      campaignGameSystemStarter.AddGameMenuOption("town_arena", "mno_see_tournament_leaderboard", "{=vGF5S2hE}Leaderboard", new GameMenuOption.OnConditionDelegate(TournamentCampaignBehavior.game_menu_town_arena_see_leaderboard_on_condition), (GameMenuOption.OnConsequenceDelegate) null, index: 3);
      campaignGameSystemStarter.AddGameMenu("menu_town_tournament_join", "{=5Adr6toM}{MENU_TEXT}", new OnInitDelegate(this.game_menu_tournament_join_on_init), GameOverlays.MenuOverlayType.SettlementWithBoth);
      campaignGameSystemStarter.AddGameMenuOption("menu_town_tournament_join", "mno_tournament_event_1", "{=es0Y3Bxc}Join", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Mission;
        return true;
      }), new GameMenuOption.OnConsequenceDelegate(this.game_menu_tournament_join_current_game_on_consequence));
      campaignGameSystemStarter.AddGameMenuOption("menu_town_tournament_join", "mno_tournament_leave", "{=3sRdGQou}Leave", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Leave;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => GameMenu.SwitchToMenu("town_arena")), true);
    }

    [GameMenuEventHandler("town_arena", "mno_see_tournament_leaderboard", GameMenuEventHandler.EventType.OnConsequence)]
    public static void game_menu_ui_town_arena_see_leaderboard_on_consequence(MenuCallbackArgs args)
    {
      args.MenuContext.OpenTournamentLeaderboards();
    }

    private bool game_menu_join_tournament_on_condition(MenuCallbackArgs args)
    {
      bool disableOption;
      TextObject disabledText;
      bool canPlayerDo = Campaign.Current.Models.SettlementAccessModel.CanMainHeroDoSettlementAction(Settlement.CurrentSettlement, SettlementAccessModel.SettlementAction.JoinTournament, out disableOption, out disabledText);
      args.optionLeaveType = GameMenuOption.LeaveType.HostileAction;
      return MenuHelper.SetOptionProperties(args, canPlayerDo, disableOption, disabledText);
    }

    private static bool game_menu_town_arena_see_leaderboard_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leaderboard;
      return Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.IsTown;
    }

    [GameMenuInitializationHandler("menu_town_tournament_join")]
    private static void game_menu_ui_town_ui_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      args.MenuContext.SetBackgroundMeshName(currentSettlement.Town.WaitMeshName);
    }

    private void game_menu_tournament_join_on_init(MenuCallbackArgs args)
    {
      TournamentGame tournamentGame = Campaign.Current.TournamentManager.GetTournamentGame(Settlement.CurrentSettlement.Town);
      tournamentGame.UpdateTournamentPrize(true);
      GameTexts.SetVariable("MENU_TEXT", tournamentGame.GetMenuText());
    }

    private void game_menu_tournament_join_current_game_on_consequence(MenuCallbackArgs args)
    {
      TournamentGame tournamentGame = Campaign.Current.TournamentManager.GetTournamentGame(Settlement.CurrentSettlement.Town);
      GameMenu.SwitchToMenu("town");
      tournamentGame.PrepareForTournamentGame(true);
      Campaign.Current.TournamentManager.OnPlayerJoinTournament(tournamentGame.GetType(), Settlement.CurrentSettlement);
    }

    private bool game_menu_tournament_watch_on_condition(MenuCallbackArgs args)
    {
      bool disableOption;
      TextObject disabledText;
      bool canPlayerDo = Campaign.Current.Models.SettlementAccessModel.CanMainHeroDoSettlementAction(Settlement.CurrentSettlement, SettlementAccessModel.SettlementAction.WatchTournament, out disableOption, out disabledText);
      args.optionLeaveType = GameMenuOption.LeaveType.Mission;
      return MenuHelper.SetOptionProperties(args, canPlayerDo, disableOption, disabledText);
    }

    private void game_menu_tournament_watch_current_game_on_consequence(MenuCallbackArgs args)
    {
      TournamentGame tournamentGame = Campaign.Current.TournamentManager.GetTournamentGame(Settlement.CurrentSettlement.Town);
      GameMenu.SwitchToMenu("town");
      tournamentGame.PrepareForTournamentGame(false);
      Campaign.Current.TournamentManager.OnPlayerWatchTournament(tournamentGame.GetType(), Settlement.CurrentSettlement);
    }
  }
}
