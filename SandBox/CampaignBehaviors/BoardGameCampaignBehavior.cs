// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.BoardGameCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.BoardGames;
using SandBox.BoardGames.MissionLogics;
using SandBox.Conversation;
using SandBox.Conversation.MissionLogics;
using SandBox.Objects.Usables;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class BoardGameCampaignBehavior : CampaignBehaviorBase
  {
    private const int NumberOfBoardGamesCanPlayerPlayAgainstHeroPerDay = 3;
    private Dictionary<Hero, List<CampaignTime>> _heroAndBoardGameTimeDictionary = new Dictionary<Hero, List<CampaignTime>>();
    private Dictionary<Settlement, CampaignTime> _wonBoardGamesInOneWeekInSettlement = new Dictionary<Settlement, CampaignTime>();
    private BoardGameHelper.AIDifficulty _difficulty;
    private int _betAmount;
    private bool _influenceGained;
    private bool _renownGained;
    private bool _opposingHeroExtraXPGained;
    private bool _relationGained;
    private bool _gainedNothing;
    private CultureObject _initializedBoardGameCultureInMission;

    public IEnumerable<Settlement> WonBoardGamesInOneWeekInSettlement
    {
      get
      {
        foreach (Settlement key in this._wonBoardGamesInOneWeekInSettlement.Keys)
          yield return key;
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnMissionStartedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionStarted));
      CampaignEvents.OnMissionEndedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionEnd));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.OnPlayerBoardGameOverEvent.AddNonSerializedListener((object) this, new Action<Hero, BoardGameHelper.BoardGameState>(this.OnPlayerBoardGameOver));
      CampaignEvents.WeeklyTickEvent.AddNonSerializedListener((object) this, new Action(this.WeeklyTick));
      CampaignEvents.LocationCharactersAreReadyToSpawnEvent.AddNonSerializedListener((object) this, new Action<Dictionary<string, int>>(this.LocationCharactersAreReadyToSpawn));
    }

    private void OnMissionEnd(IMission obj)
    {
      this._initializedBoardGameCultureInMission = (CultureObject) null;
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<Hero, List<CampaignTime>>>("_heroAndBoardGameTimeDictionary", ref this._heroAndBoardGameTimeDictionary);
      dataStore.SyncData<Dictionary<Settlement, CampaignTime>>("_wonBoardGamesInOneWeekInSettlement", ref this._wonBoardGamesInOneWeekInSettlement);
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    private void WeeklyTick()
    {
      this.DeleteOldBoardGamesOfChampion();
      foreach (Hero hero in this._heroAndBoardGameTimeDictionary.Keys.ToList<Hero>())
        this.DeleteOldBoardGamesOfHero(hero);
    }

    private void OnPlayerBoardGameOver(Hero opposingHero, BoardGameHelper.BoardGameState state)
    {
      if (opposingHero != null)
      {
        this.GameEndWithHero(opposingHero);
        if (state == BoardGameHelper.BoardGameState.Win)
        {
          this._opposingHeroExtraXPGained = this._difficulty != BoardGameHelper.AIDifficulty.Hard && (double) MBRandom.RandomFloat <= 0.5;
          SkillLevelingManager.OnBoardGameWonAgainstLord(opposingHero, this._difficulty, this._opposingHeroExtraXPGained);
          int num = (double) MBRandom.RandomFloat <= (double) ((float) (0.10000000149011612 + (opposingHero.IsFemale != Hero.MainHero.IsFemale ? 0.10000000149011612 : 0.0)) + (float) Hero.MainHero.GetSkillValue(DefaultSkills.Charm) / 100f) + (opposingHero.GetTraitLevel(DefaultTraits.Calculating) == 1 ? 0.20000000298023224 : 0.0) ? 1 : 0;
          bool flag1 = opposingHero.MapFaction == Hero.MainHero.MapFaction && this._difficulty == BoardGameHelper.AIDifficulty.Hard && (double) MBRandom.RandomFloat <= 0.40000000596046448;
          bool flag2 = this._difficulty == BoardGameHelper.AIDifficulty.Hard;
          if (num != 0)
          {
            ChangeRelationAction.ApplyPlayerRelation(opposingHero, 1);
            this._relationGained = true;
          }
          else if (flag1)
          {
            GainKingdomInfluenceAction.ApplyForBoardGameWon(opposingHero, 1f);
            this._influenceGained = true;
          }
          else if (flag2)
          {
            GainRenownAction.Apply(Hero.MainHero, 1f);
            this._renownGained = true;
          }
          else
            this._gainedNothing = true;
        }
      }
      else
      {
        switch (state)
        {
          case BoardGameHelper.BoardGameState.Win:
            GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._betAmount);
            if (this._betAmount > 0)
            {
              this.PlayerWonAgainstTavernChampion();
              break;
            }
            break;
          case BoardGameHelper.BoardGameState.Loss:
            GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, this._betAmount);
            break;
        }
      }
      this.SetBetAmount(0);
    }

    public void InitializeConversationVars()
    {
      if (!(CampaignMission.Current?.Location?.StringId == "lordshall") && !(CampaignMission.Current?.Location?.StringId == "tavern"))
        return;
      CultureObject boardGameCulture = this.GetBoardGameCulture();
      CultureObject.BoardGameType boardGame = boardGameCulture.BoardGame;
      if (boardGame == CultureObject.BoardGameType.None)
        MBDebug.ShowWarning("Boardgame not yet implemented, or not found.");
      if (boardGame == CultureObject.BoardGameType.None)
        return;
      MBTextManager.SetTextVariable("GAME_NAME", GameTexts.FindText("str_boardgame_name", boardGame.ToString()), false);
      MBTextManager.SetTextVariable("CULTURE_NAME", boardGameCulture.Name, false);
      MBTextManager.SetTextVariable("DIFFICULTY", GameTexts.FindText("str_boardgame_difficulty", this._difficulty.ToString()), false);
      MBTextManager.SetTextVariable("BET_AMOUNT", this._betAmount.ToString(), false);
      MBTextManager.SetTextVariable("IS_BETTING", this._betAmount > 0 ? 1 : 0);
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().SetBoardGame(boardGame);
    }

    public void OnMissionStarted(IMission mission)
    {
      Mission mission1 = (Mission) mission;
      if ((NativeObject) Mission.Current.Scene != (NativeObject) null)
      {
        int num = (NativeObject) Mission.Current.Scene.FindEntityWithTag("boardgame") != (NativeObject) null ? 1 : 0;
      }
      if ((!((NativeObject) Mission.Current.Scene != (NativeObject) null) ? 0 : ((NativeObject) Mission.Current.Scene.FindEntityWithTag("boardgame_holder") != (NativeObject) null ? 1 : 0)) == 0 || CampaignMission.Current.Location == null || !(CampaignMission.Current.Location.StringId == "lordshall") && !(CampaignMission.Current.Location.StringId == "tavern"))
        return;
      mission1.AddMissionBehavior((MissionBehavior) new MissionBoardGameLogic());
      this.InitializeBoardGamePrefabInMission();
    }

    private CultureObject GetBoardGameCulture()
    {
      if (this._initializedBoardGameCultureInMission != null)
        return this._initializedBoardGameCultureInMission;
      return CampaignMission.Current.Location.StringId == "lordshall" ? Settlement.CurrentSettlement.OwnerClan.Culture : Settlement.CurrentSettlement.Culture;
    }

    private void InitializeBoardGamePrefabInMission()
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign)
        return;
      CultureObject boardGameCulture = this.GetBoardGameCulture();
      CultureObject.BoardGameType boardGame = boardGameCulture.BoardGame;
      GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("boardgame_holder");
      MatrixFrame globalFrame = entityWithTag.GetGlobalFrame();
      Mission.Current.Scene.RemoveEntity(entityWithTag, 92);
      GameEntity entity = GameEntity.Instantiate(Mission.Current.Scene, "BoardGame" + boardGame.ToString() + "_FullSetup", true);
      entity.SetGlobalFrame(globalFrame.TransformToParent(entity.GetFrame()));
      GameEntity childEntityWithTag = entity.GetFirstChildEntityWithTag("dice_board");
      if ((NativeObject) childEntityWithTag != (NativeObject) null && childEntityWithTag.HasScriptOfType<VertexAnimator>())
        childEntityWithTag.GetFirstScriptOfType<VertexAnimator>().StopAndGoToEnd();
      this._initializedBoardGameCultureInMission = boardGameCulture;
    }

    public void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      if (!this._heroAndBoardGameTimeDictionary.ContainsKey(victim))
        return;
      this._heroAndBoardGameTimeDictionary.Remove(victim);
    }

    private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
    {
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      if (!settlement.IsTown || CampaignMission.Current == null)
        return;
      Location location = CampaignMission.Current.Location;
      int num;
      if (location == null || !(location.StringId == "tavern") || !unusedUsablePointCount.TryGetValue("spawnpoint_tavernkeeper", out num) || num <= 0)
        return;
      location.AddLocationCharacters(new CreateLocationCharacterDelegate(BoardGameCampaignBehavior.CreateGameHost), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
    }

    private static LocationCharacter CreateGameHost(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject tavernGamehost = culture.TavernGamehost;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(tavernGamehost.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(tavernGamehost, out minimumAge, out maximumAge);
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) tavernGamehost)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddCompanionBehaviors), "gambler_npc", true, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_villager"), true);
    }

    protected void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("talk_common_to_taverngamehost", "start", "close_window", "{GAME_MASTER_INTRO}", (ConversationSentence.OnConditionDelegate) (() => this.conversation_talk_common_to_taverngamehost_on_condition() && !BoardGameCampaignBehavior.taverngamehost_player_sitting_now_on_condition()), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("talk_common_to_taverngamehost_2", "start", "taverngamehost_talk", "{=LGrzKlET}Let me know how much of a challenge you can stand and we'll get started. I'm ready to offer you a {DIFFICULTY} challenge and {?IS_BETTING}a bet of {BET_AMOUNT}{GOLD_ICON}.{?}friendly game.{\\?}", (ConversationSentence.OnConditionDelegate) (() => this.conversation_talk_common_to_taverngamehost_on_condition() && BoardGameCampaignBehavior.taverngamehost_player_sitting_now_on_condition()), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_game", "taverngamehost_talk", "taverngamehost_think_play", "{=BdpW8gUM}That looks good, let's play!", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_change_difficulty", "taverngamehost_talk", "taverngamehost_change_difficulty", "{=MbwG7Gy8}Can I change the difficulty?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_change_bet", "taverngamehost_talk", "taverngamehost_change_bet", "{=PbDK3PIi}Can I change the amount we're betting?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_game_history", "taverngamehost_talk", "taverngamehost_learn_history", "{=YM7etEzu}What exactly is {GAME_NAME}?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_reject", "taverngamehost_talk", "close_window", "{=N7BFbQmT}I'm not interested.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("taverngamehost_start_playing_ask_accept", "taverngamehost_think_play", "taverngamehost_start_play", "{=GrHJYz7O}Very well. Now, what side do you want?", new ConversationSentence.OnConditionDelegate(this.taverngame_host_play_game_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("taverngamehost_start_playing_ask_decline", "taverngamehost_think_play", "taverngamehost_talk", "{=bTnmpqU4}I'm afraid I don't have time for another game.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_first", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=7tuyySmq}I'll start.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_seega_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_one_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_last", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=J9fJlz2Y}You can start.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_seega_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_two_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_first_2", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=HdT5YyAb}I'll be white.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_puluc_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_one_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_last_2", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=i8HysulS}I'll be black.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_puluc_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_two_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_first_3", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=HdT5YyAb}I'll be white.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_konane_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_one_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_last_3", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=i8HysulS}I'll be black.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_konane_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_two_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_first_4", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=HdT5YyAb}I'll be white.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_mutorere_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_one_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_last_4", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=i8HysulS}I'll be black.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_mutorere_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_two_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_first_5", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=EnOOqaqf}I'll be sheep.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_baghchal_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_one_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_last_5", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=QjtOAyKE}I'll be wolves.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_baghchal_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_two_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_first_6", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=qsavxffL}I'll be attackers.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_tablut_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_one_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_last_6", "taverngamehost_start_play", "taverngamehost_confirm_play", "{=WD7vOalb}I'll be defenders.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_tablut_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_set_player_two_starts_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_back", "taverngamehost_start_play", "start", "{=dUSfRYYH}Just a minute..", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_start_playing_now", "taverngamehost_confirm_play", "close_window", "{=aB1EZssb}Great, let's begin!", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_play_game_on_consequence));
      campaignGameStarter.AddDialogLine("taverngamehost_ask_difficulty", "taverngamehost_change_difficulty", "taverngamehost_changing_difficulty", "{=9VR0VeNT}Yes, how easy should I make things for you?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_change_difficulty_easy", "taverngamehost_changing_difficulty", "start", "{=j9Weia10}Easy", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_taverngamehost_difficulty_easy_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_change_difficulty_normal", "taverngamehost_changing_difficulty", "start", "{=8UBfIenN}Normal", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_taverngamehost_difficulty_normal_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_change_difficulty_hard", "taverngamehost_changing_difficulty", "start", "{=OnaJowBF}Hard. Don't hold back or you'll regret it.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_taverngamehost_difficulty_hard_on_consequence));
      campaignGameStarter.AddDialogLine("taverngamehost_ask_betting", "taverngamehost_change_bet", "taverngamehost_changing_bet", "{=T5jd4m69}That will only make this more fun. How much were you thinking?", new ConversationSentence.OnConditionDelegate(this.conversation_taverngamehost_talk_place_bet_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_100_denars", "taverngamehost_changing_bet", "start", "{=T29epQk3}100{GOLD_ICON}", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_can_bet_100_denars_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_taverngamehost_bet_100_denars_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_200_denars", "taverngamehost_changing_bet", "start", "{=mHm5SLhb}200{GOLD_ICON}", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_can_bet_200_denars_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_taverngamehost_bet_200_denars_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_300_denars", "taverngamehost_changing_bet", "start", "{=LnbzQIz6}300{GOLD_ICON}", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_can_bet_300_denars_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_taverngamehost_bet_300_denars_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_400_denars", "taverngamehost_changing_bet", "start", "{=ck36TZFP}400{GOLD_ICON}", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_can_bet_400_denars_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_taverngamehost_bet_400_denars_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_500_denars", "taverngamehost_changing_bet", "start", "{=YHTTPKMb}500{GOLD_ICON}", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_can_bet_500_denars_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_taverngamehost_bet_500_denars_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_player_0_denars", "taverngamehost_changing_bet", "start", "{=lVx35dWp}On second thought, let's keep this match friendly.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_taverngamehost_bet_0_denars_on_consequence));
      campaignGameStarter.AddDialogLine("taverngamehost_deny_betting", "taverngamehost_change_bet", "taverngamehost_changing_difficulty_for_bet", "{=4xtBNkjN}Unfortunately, I only allow betting when I'm playing at my best. You'll have to up the difficulty.", new ConversationSentence.OnConditionDelegate(this.conversation_taverngamehost_talk_not_place_bet_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_changing_difficulty_for_bet_yes", "taverngamehost_changing_difficulty_for_bet", "taverngamehost_change_bet_2", "{=i4xzuOJE}Sure, I'll play at the hardest level.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_taverngamehost_difficulty_hard_on_consequence));
      campaignGameStarter.AddPlayerLine("taverngamehost_changing_difficulty_for_bet_no", "taverngamehost_changing_difficulty_for_bet", "start", "{=2ynnnR4c}I'd prefer to keep the difficulty where it's at.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("taverngamehost_ask_betting_2", "taverngamehost_change_bet_2", "taverngamehost_changing_bet", "{=GfHssUYV}Now, feel free to place a bet.", new ConversationSentence.OnConditionDelegate(this.conversation_taverngamehost_talk_place_bet_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("taverngamehost_tell_history_seega", "taverngamehost_learn_history", "taverngamehost_after_history", "{=9PUvbZzD}{GAME_NAME} is a traditional game within the {CULTURE_NAME}. It is a game of calm strategy. You start by placing your pieces on the board, crafting a trap for your enemy to fall into. Then you battle across the board, capturing and eliminating your opponent.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_seega_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("taverngamehost_tell_history_puluc", "taverngamehost_learn_history", "taverngamehost_after_history", "{=sVcJTu7K}{GAME_NAME} is fast and harsh, as warfare should be. Capture as much as possible to keep your opponent weakened and demoralized. But behind this endless offense, there should always be a strong defense to punish any attempt from your opponent to regain control.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_puluc_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("taverngamehost_tell_history_mutorere", "taverngamehost_learn_history", "taverngamehost_after_history", "{=SV0IEWD2}{GAME_NAME} is a game of anticipation. With no possibility of capturing, all your effort should be on reading your opponent and planning further ahead than him.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_mutorere_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("taverngamehost_tell_history_konane", "taverngamehost_learn_history", "taverngamehost_after_history", "{=tVb0nWxm}War is all about sacrifice. In {GAME_NAME} you must make sure that your opponent sacrifices more than you do. Every move can expose you or your opponent and must be carefully considered.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_konane_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("taverngamehost_tell_history_baghchal", "taverngamehost_learn_history", "taverngamehost_after_history", "{=mo4rbYvm}A couple of powerful wolves against a flock of helpless sheep. {GAME_NAME} is a game of uneven odds and seemingly all-powerful adversaries. But through strategy and sacrifice, even the sheep can dominate the wolves.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_baghchal_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("taverngamehost_tell_history_tablut", "taverngamehost_learn_history", "taverngamehost_after_history", "{=nMzfnOFG}{GAME_NAME} is a game of incredibly uneven odds. A weakened and trapped king must try to escape from a horde of attackers who assault from every direction. Ironic how we, the once all-powerful {CULTURE_NAME}, have now fallen in the same position.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_taverngamehost_talk_is_tablut_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_history_back", "taverngamehost_after_history", "start", "{=QP7L2YLG}Sounds fun.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("taverngamehost_player_history_leave", "taverngamehost_after_history", "close_window", "{=Ng6Rrlr6}I'd rather do something else", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("lord_player_play_game", "hero_main_options", "lord_answer_to_play_boardgame", "{=3hv4P5OO}Would you care to pass the time with a game of {GAME_NAME}?", new ConversationSentence.OnConditionDelegate(this.conversation_lord_talk_game_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 2);
      campaignGameStarter.AddPlayerLine("lord_player_cancel_boardgame", "hero_main_options", "lord_answer_to_cancel_play_boardgame", "{=ySk7bD8P}Actually, I have other things to do. Maybe later.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_lord_talk_cancel_game_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 2);
      campaignGameStarter.AddDialogLine("lord_agrees_cancel_play", "lord_answer_to_cancel_play_boardgame", "close_window", "{=dzXaXKaC}Very well.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_lord_talk_cancel_game_on_consequence));
      campaignGameStarter.AddPlayerLine("lord_player_ask_to_play_boardgame_again", "hero_main_options", "lord_answer_to_play_again_boardgame", "{=U342eACh}Would you like to play another round of {GAME_NAME}?", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.conversation_lord_talk_game_again_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 2);
      campaignGameStarter.AddDialogLine("lord_answer_to_play_boardgame_again_accept", "lord_answer_to_play_again_boardgame", "close_window", "{=aD1BoB3c}Yes. Let's have another round.", new ConversationSentence.OnConditionDelegate(this.conversation_lord_play_game_on_condition), new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_lord_play_game_again_on_consequence));
      campaignGameStarter.AddDialogLine("lord_answer_to_play_boardgame_again_decline", "lord_answer_to_play_again_boardgame", "hero_main_options", "{=fqKVojaV}No, not now.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_lord_dont_play_game_again_on_consequence));
      campaignGameStarter.AddDialogLine("lord_after_player_win_boardgame", "start", "close_window", "{=!}{PLAYER_GAME_WON_LORD_STRING}", new ConversationSentence.OnConditionDelegate(this.lord_after_player_win_boardgame_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("lord_after_lord_win_boardgame", "start", "hero_main_options", "{=dC6YhgPP}Ah. A good match, that.", new ConversationSentence.OnConditionDelegate(BoardGameCampaignBehavior.lord_after_lord_win_boardgame_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("lord_agrees_play", "lord_answer_to_play_boardgame", "lord_setup_game", "{=!}{GAME_AGREEMENT_STRING}", new ConversationSentence.OnConditionDelegate(this.conversation_lord_play_game_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_lord_detect_difficulty_consequence));
      campaignGameStarter.AddPlayerLine("lord_player_start_game", "lord_setup_game", "close_window", "{=bAy9PdrF}Let's begin, then.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(BoardGameCampaignBehavior.conversation_lord_play_game_on_consequence));
      campaignGameStarter.AddPlayerLine("lord_player_leave", "lord_setup_game", "close_window", "{=OQgBim7l}Actually, I have other things to do.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("lord_refuses_play", "lord_answer_to_play_boardgame", "close_window", "{=!}{LORD_REJECT_GAME_STRING}", new ConversationSentence.OnConditionDelegate(this.conversation_lord_reject_game_condition), (ConversationSentence.OnConsequenceDelegate) null);
    }

    private bool conversation_lord_reject_game_condition()
    {
      MBTextManager.SetTextVariable("LORD_REJECT_GAME_STRING", (double) Hero.OneToOneConversationHero.GetRelationWithPlayer() > -20.0 ? new TextObject("{=aRDcoLX0}Now is not a good time, {PLAYER.NAME}. ") : new TextObject("{=GLRrAj61}I do not wish to play games with the likes of you."), false);
      return true;
    }

    private bool conversation_talk_common_to_taverngamehost_on_condition()
    {
      if (CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.TavernGameHost)
        return false;
      this.InitializeConversationVars();
      MBTextManager.SetTextVariable("GAME_MASTER_INTRO", "{=HDhLMbt7}Greetings, traveler. Do you play {GAME_NAME}? I am reckoned a master of this game, the traditional pastime of the {CULTURE_NAME}. If you are interested in playing, take a seat and we'll start.", false);
      if (Settlement.CurrentSettlement.OwnerClan == Hero.MainHero.Clan || Settlement.CurrentSettlement.MapFaction.Leader == Hero.MainHero)
        MBTextManager.SetTextVariable("GAME_MASTER_INTRO", "{=yN4imaGo}Your {?PLAYER.GENDER}ladyship{?}lordship{\\?}... This is quite the honor. Do you play {GAME_NAME}? It's the traditional pastime of the {CULTURE_NAME}, and I am reckoned a master. If you wish to play a game, please, take a seat and we'll start.", false);
      return true;
    }

    private void conversation_taverngamehost_bet_0_denars_on_consequence() => this.SetBetAmount(0);

    private static bool conversation_taverngamehost_can_bet_100_denars_on_condition()
    {
      CharacterObject conversationCharacter = ConversationMission.OneToOneConversationCharacter;
      CharacterObject character = (CharacterObject) Agent.Main.Character;
      return ((!conversationCharacter.IsHero ? 1 : (conversationCharacter.HeroObject.Gold >= 100 ? 1 : 0)) & (character.HeroObject.Gold >= 100 ? 1 : 0)) != 0;
    }

    private void conversation_taverngamehost_bet_100_denars_on_consequence()
    {
      this.SetBetAmount(100);
    }

    private static bool conversation_taverngamehost_can_bet_200_denars_on_condition()
    {
      CharacterObject character1 = (CharacterObject) ConversationMission.OneToOneConversationAgent.Character;
      CharacterObject character2 = (CharacterObject) Agent.Main.Character;
      return ((!character1.IsHero ? 1 : (character1.HeroObject.Gold >= 200 ? 1 : 0)) & (character2.HeroObject.Gold >= 200 ? 1 : 0)) != 0;
    }

    private void conversation_taverngamehost_bet_200_denars_on_consequence()
    {
      this.SetBetAmount(200);
    }

    private static bool conversation_taverngamehost_can_bet_300_denars_on_condition()
    {
      CharacterObject conversationCharacter = ConversationMission.OneToOneConversationCharacter;
      CharacterObject character = (CharacterObject) Agent.Main.Character;
      return ((!conversationCharacter.IsHero ? 1 : (conversationCharacter.HeroObject.Gold >= 300 ? 1 : 0)) & (character.HeroObject.Gold >= 300 ? 1 : 0)) != 0;
    }

    private void conversation_taverngamehost_bet_300_denars_on_consequence()
    {
      this.SetBetAmount(300);
    }

    private static bool conversation_taverngamehost_can_bet_400_denars_on_condition()
    {
      CharacterObject conversationCharacter = ConversationMission.OneToOneConversationCharacter;
      CharacterObject character = (CharacterObject) Agent.Main.Character;
      return ((!conversationCharacter.IsHero ? 1 : (conversationCharacter.HeroObject.Gold >= 400 ? 1 : 0)) & (character.HeroObject.Gold >= 400 ? 1 : 0)) != 0;
    }

    private void conversation_taverngamehost_bet_400_denars_on_consequence()
    {
      this.SetBetAmount(400);
    }

    private static bool conversation_taverngamehost_can_bet_500_denars_on_condition()
    {
      CharacterObject conversationCharacter = ConversationMission.OneToOneConversationCharacter;
      CharacterObject character = (CharacterObject) Agent.Main.Character;
      return ((!conversationCharacter.IsHero ? 1 : (conversationCharacter.HeroObject.Gold >= 500 ? 1 : 0)) & (character.HeroObject.Gold >= 500 ? 1 : 0)) != 0;
    }

    private bool taverngame_host_play_game_on_condition()
    {
      if (this._betAmount == 0)
        return true;
      this.DeleteOldBoardGamesOfChampion();
      return !this._wonBoardGamesInOneWeekInSettlement.ContainsKey(Settlement.CurrentSettlement);
    }

    private void conversation_taverngamehost_bet_500_denars_on_consequence()
    {
      this.SetBetAmount(500);
    }

    private void conversation_taverngamehost_difficulty_easy_on_consequence()
    {
      this.SetDifficulty(BoardGameHelper.AIDifficulty.Easy);
      this.SetBetAmount(0);
    }

    private void conversation_taverngamehost_difficulty_normal_on_consequence()
    {
      this.SetDifficulty(BoardGameHelper.AIDifficulty.Normal);
      this.SetBetAmount(0);
    }

    private void conversation_taverngamehost_difficulty_hard_on_consequence()
    {
      this.SetDifficulty(BoardGameHelper.AIDifficulty.Hard);
    }

    private static void conversation_lord_play_game_again_on_consequence()
    {
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().DetectOpposingAgent();
      Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().StartBoardGame());
    }

    private static void conversation_lord_dont_play_game_again_on_consequence()
    {
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().SetGameOver(GameOverEnum.PlayerCanceledTheGame);
    }

    private void conversation_lord_detect_difficulty_consequence()
    {
      int skillValue = ConversationMission.OneToOneConversationCharacter.GetSkillValue(DefaultSkills.Steward);
      if (skillValue >= 0 && skillValue < 50)
        this.SetDifficulty(BoardGameHelper.AIDifficulty.Easy);
      else if (skillValue >= 50 && skillValue < 100)
      {
        this.SetDifficulty(BoardGameHelper.AIDifficulty.Normal);
      }
      else
      {
        if (skillValue < 100)
          return;
        this.SetDifficulty(BoardGameHelper.AIDifficulty.Hard);
      }
    }

    private static void conversation_taverngamehost_set_player_one_starts_on_consequence()
    {
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().SetStartingPlayer(true);
    }

    private static void conversation_taverngamehost_set_player_two_starts_on_consequence()
    {
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().SetStartingPlayer(false);
    }

    private static void conversation_taverngamehost_play_game_on_consequence()
    {
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().DetectOpposingAgent();
      Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().StartBoardGame());
    }

    private bool conversation_taverngamehost_talk_place_bet_on_condition()
    {
      CharacterObject conversationCharacter = ConversationMission.OneToOneConversationCharacter;
      int num = !conversationCharacter.IsHero ? 1 : (conversationCharacter.HeroObject.Gold >= 100 ? 1 : 0);
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
      return num != 0 && this._difficulty == BoardGameHelper.AIDifficulty.Hard;
    }

    private bool conversation_taverngamehost_talk_not_place_bet_on_condition()
    {
      CharacterObject conversationCharacter = ConversationMission.OneToOneConversationCharacter;
      int num = !conversationCharacter.IsHero ? 1 : (conversationCharacter.HeroObject.Gold >= 100 ? 1 : 0);
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
      return num != 0 && this._difficulty != BoardGameHelper.AIDifficulty.Hard;
    }

    private static bool conversation_taverngamehost_talk_is_seega_on_condition()
    {
      MissionBoardGameLogic missionBehavior = Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
      return missionBehavior != null && missionBehavior.CurrentBoardGame == CultureObject.BoardGameType.Seega;
    }

    private static bool conversation_taverngamehost_talk_is_puluc_on_condition()
    {
      MissionBoardGameLogic missionBehavior = Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
      return missionBehavior != null && missionBehavior.CurrentBoardGame == CultureObject.BoardGameType.Puluc;
    }

    private static bool conversation_taverngamehost_talk_is_mutorere_on_condition()
    {
      MissionBoardGameLogic missionBehavior = Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
      return missionBehavior != null && missionBehavior.CurrentBoardGame == CultureObject.BoardGameType.MuTorere;
    }

    private static bool conversation_taverngamehost_talk_is_konane_on_condition()
    {
      MissionBoardGameLogic missionBehavior = Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
      return missionBehavior != null && missionBehavior.CurrentBoardGame == CultureObject.BoardGameType.Konane;
    }

    private static bool conversation_taverngamehost_talk_is_baghchal_on_condition()
    {
      MissionBoardGameLogic missionBehavior = Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
      return missionBehavior != null && missionBehavior.CurrentBoardGame == CultureObject.BoardGameType.BaghChal;
    }

    private static bool conversation_taverngamehost_talk_is_tablut_on_condition()
    {
      MissionBoardGameLogic missionBehavior = Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
      return missionBehavior != null && missionBehavior.CurrentBoardGame == CultureObject.BoardGameType.Tablut;
    }

    public static bool taverngamehost_player_sitting_now_on_condition()
    {
      GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("gambler_player");
      if (!((NativeObject) entityWithTag != (NativeObject) null))
        return false;
      Chair chair = entityWithTag.CollectObjects<Chair>().FirstOrDefault<Chair>();
      return chair != null && Agent.Main != null && chair.IsAgentFullySitting(Agent.Main);
    }

    private bool conversation_lord_talk_game_on_condition()
    {
      if (CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Lord || !(CampaignMission.Current?.Location?.StringId == "lordshall") || !MissionBoardGameLogic.IsBoardGameAvailable())
        return false;
      this.InitializeConversationVars();
      return true;
    }

    private static bool conversation_lord_talk_game_again_on_condition()
    {
      return CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Lord && MissionBoardGameLogic.IsThereActiveBoardGameWithHero(Hero.OneToOneConversationHero) && Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().IsGameInProgress;
    }

    private static bool conversation_lord_talk_cancel_game_on_condition()
    {
      if (CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Lord || !MissionBoardGameLogic.IsThereActiveBoardGameWithHero(Hero.OneToOneConversationHero))
        return false;
      return Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().IsOpposingAgentMovingToPlayingChair || !Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().IsGameInProgress;
    }

    private static void conversation_lord_talk_cancel_game_on_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().SetGameOver(GameOverEnum.PlayerCanceledTheGame));
    }

    private static bool lord_after_lord_win_boardgame_condition()
    {
      MissionBoardGameLogic missionBehavior = Mission.Current?.GetMissionBehavior<MissionBoardGameLogic>();
      return missionBehavior != null && missionBehavior.BoardGameFinalState != BoardGameHelper.BoardGameState.None && missionBehavior.BoardGameFinalState != BoardGameHelper.BoardGameState.Win;
    }

    private bool lord_after_player_win_boardgame_condition()
    {
      MissionBoardGameLogic missionBehavior = Mission.Current?.GetMissionBehavior<MissionBoardGameLogic>();
      if (missionBehavior == null || missionBehavior.BoardGameFinalState != BoardGameHelper.BoardGameState.Win)
        return false;
      if (this._relationGained)
        MBTextManager.SetTextVariable("PLAYER_GAME_WON_LORD_STRING", "{=QTfliM5b}I enjoyed our game. Let?s play again later.", false);
      else if (this._influenceGained)
        MBTextManager.SetTextVariable("PLAYER_GAME_WON_LORD_STRING", "{=31oG5njl}You are a sharp thinker. Our kingdom would do well to hear your thoughts on matters of importance.", false);
      else if (this._opposingHeroExtraXPGained)
        MBTextManager.SetTextVariable("PLAYER_GAME_WON_LORD_STRING", "{=nxpyHb77}Well, I am still a novice in this game, but I learned a lot from playing with you.", false);
      else if (this._renownGained)
        MBTextManager.SetTextVariable("PLAYER_GAME_WON_LORD_STRING", "{=k1b5crrx}You are an accomplished player. I will take note of that.", false);
      else if (this._gainedNothing)
        MBTextManager.SetTextVariable("PLAYER_GAME_WON_LORD_STRING", "{=HzabMi4t}That was a fun game. Thank you.", false);
      return true;
    }

    private bool conversation_lord_play_game_on_condition()
    {
      if (!this.CanPlayerPlayBoardGameAgainstHero(Hero.OneToOneConversationHero))
        return false;
      if (MissionConversationLogic.Current.ConversationManager.IsTagApplicable("DrinkingInTavernTag", Hero.OneToOneConversationHero.CharacterObject))
        MBTextManager.SetTextVariable("GAME_AGREEMENT_STRING", "{=LztDzy8W}Why not? I'm not going anywhere right now, and I could use another drink.", false);
      else if (Hero.OneToOneConversationHero.CharacterObject.GetPersona() == DefaultTraits.PersonaCurt)
        MBTextManager.SetTextVariable("GAME_AGREEMENT_STRING", "{=2luygc8o}Mm. I suppose. Takes my mind off all these problems I have to deal with.", false);
      else if (Hero.OneToOneConversationHero.CharacterObject.GetPersona() == DefaultTraits.PersonaEarnest)
        MBTextManager.SetTextVariable("GAME_AGREEMENT_STRING", "{=349mwgWC}Certainly. A good game always keeps the mind active and fresh.", false);
      else if (Hero.OneToOneConversationHero.CharacterObject.GetPersona() == DefaultTraits.PersonaIronic)
        MBTextManager.SetTextVariable("GAME_AGREEMENT_STRING", "{=rGaaVBBT}Ah. Very well. I don't mind testing your mettle.", false);
      else if (Hero.OneToOneConversationHero.CharacterObject.GetPersona() == DefaultTraits.PersonaSoftspoken)
        MBTextManager.SetTextVariable("GAME_AGREEMENT_STRING", "{=idPV1Csj}Yes... Why not? I have nothing too urgent right now.", false);
      return true;
    }

    private static void conversation_lord_play_game_on_consequence()
    {
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().DetectOpposingAgent();
    }

    public void PlayerWonAgainstTavernChampion()
    {
      if (this._wonBoardGamesInOneWeekInSettlement.ContainsKey(Settlement.CurrentSettlement))
        return;
      this._wonBoardGamesInOneWeekInSettlement.Add(Settlement.CurrentSettlement, CampaignTime.Now);
    }

    private void GameEndWithHero(Hero hero)
    {
      if (this._heroAndBoardGameTimeDictionary.ContainsKey(hero))
      {
        this._heroAndBoardGameTimeDictionary[hero].Add(CampaignTime.Now);
      }
      else
      {
        this._heroAndBoardGameTimeDictionary.Add(hero, new List<CampaignTime>());
        this._heroAndBoardGameTimeDictionary[hero].Add(CampaignTime.Now);
      }
    }

    private bool CanPlayerPlayBoardGameAgainstHero(Hero hero)
    {
      if ((double) hero.GetRelationWithPlayer() < 0.0)
        return false;
      this.DeleteOldBoardGamesOfHero(hero);
      return !this._heroAndBoardGameTimeDictionary.ContainsKey(hero) || 3 > this._heroAndBoardGameTimeDictionary[hero].Count;
    }

    private void DeleteOldBoardGamesOfChampion()
    {
      foreach (Settlement key in (List<Settlement>) Settlement.All)
      {
        if (this._wonBoardGamesInOneWeekInSettlement.ContainsKey(key) && (double) this._wonBoardGamesInOneWeekInSettlement[key].ElapsedWeeksUntilNow >= 1.0)
          this._wonBoardGamesInOneWeekInSettlement.Remove(key);
      }
    }

    private void DeleteOldBoardGamesOfHero(Hero hero)
    {
      if (!this._heroAndBoardGameTimeDictionary.ContainsKey(hero))
        return;
      List<CampaignTime> andBoardGameTime = this._heroAndBoardGameTimeDictionary[hero];
      for (int index = andBoardGameTime.Count - 1; index >= 0; --index)
      {
        if ((double) andBoardGameTime[index].ElapsedDaysUntilNow > 1.0)
          andBoardGameTime.RemoveAt(index);
      }
      if (!andBoardGameTime.IsEmpty<CampaignTime>())
        return;
      this._heroAndBoardGameTimeDictionary.Remove(hero);
    }

    public void SetBetAmount(int bet)
    {
      this._betAmount = bet;
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().SetBetAmount(bet);
      MBTextManager.SetTextVariable("BET_AMOUNT", bet.ToString(), false);
      MBTextManager.SetTextVariable("IS_BETTING", bet > 0 ? 1 : 0);
    }

    private void SetDifficulty(BoardGameHelper.AIDifficulty difficulty)
    {
      this._difficulty = difficulty;
      Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().SetCurrentDifficulty(difficulty);
      MBTextManager.SetTextVariable("DIFFICULTY", GameTexts.FindText("str_boardgame_difficulty", difficulty.ToString()), false);
    }
  }
}
