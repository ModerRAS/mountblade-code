// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.ArenaMasterCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics.Arena;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class ArenaMasterCampaignBehavior : CampaignBehaviorBase
  {
    private List<Settlement> _arenaMasterHasMetInSettlements = new List<Settlement>();
    private bool _knowTournaments;
    private bool _enteredPracticeFightFromMenu;

    public override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
      CampaignEvents.AfterMissionStarted.AddNonSerializedListener((object) this, new Action<IMission>(this.AfterMissionStarted));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<Settlement>>("_arenaMasterHasMetInSettlements", ref this._arenaMasterHasMetInSettlements);
      dataStore.SyncData<bool>("_knowTournaments", ref this._knowTournaments);
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
      this.AddGameMenus(campaignGameStarter);
    }

    private void AddGameMenus(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddGameMenuOption("town_arena", "mno_enter_practice_fight", "{=9pg3qc6N}Practice fight", new GameMenuOption.OnConditionDelegate(this.game_menu_enter_practice_fight_on_condition), new GameMenuOption.OnConsequenceDelegate(this.game_menu_enter_practice_fight_on_consequence), index: 1);
    }

    public void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if (mobileParty != MobileParty.MainParty || !settlement.IsTown)
        return;
      this.AddArenaMaster(settlement);
    }

    private void OnGameLoadFinished()
    {
      if (Settlement.CurrentSettlement == null || Hero.MainHero.IsPrisoner || LocationComplex.Current == null || !Settlement.CurrentSettlement.IsTown || PlayerEncounter.LocationEncounter == null || Settlement.CurrentSettlement.IsUnderSiege)
        return;
      this.AddArenaMaster(Settlement.CurrentSettlement);
    }

    private void AddArenaMaster(Settlement settlement)
    {
      settlement.LocationComplex.GetLocationWithId("arena").AddLocationCharacters(new CreateLocationCharacterDelegate(ArenaMasterCampaignBehavior.CreateTournamentMaster), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
    }

    protected void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("arena_master_tournament_meet", "start", "arena_intro_1", "{=GAsVO8cZ}Good day, friend. I'll bet you came here for the games, or as they say nowadays, the tournament!", new ConversationSentence.OnConditionDelegate(this.conversation_arena_master_tournament_meet_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_tournament_meet_2", "start", "arena_intro_1a", "{=rqFKxm24}Greetings, friend. If you came for the games, the big fights, I'm afraid you're out of luck. There won't be games, or a 'tournament' as they say nowadays, any time soon.", new ConversationSentence.OnConditionDelegate(this.conversation_arena_master_no_tournament_meet_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_meet_no_intro", "start", "arena_master_talk", "{=ZvzxcRbc}Good day, friend. You look like you know your way around an arena. How can I help you?", new ConversationSentence.OnConditionDelegate(this.conversation_arena_master_player_knows_arenas_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_meet_start", "start", "arena_master_talk", "{=dgNCuuUL}Hello, {PLAYER.NAME}. Good to see you again.", new ConversationSentence.OnConditionDelegate(this.conversation_arena_master_meet_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_meet_start_2", "start", "arena_master_post_practice_fight_talk", "{=nmPaCLHp}{FIGHT_DEBRIEF} Do you want to give it another go?", new ConversationSentence.OnConditionDelegate(this.conversation_arena_master_post_fight_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_intro_1", "arena_intro_1", "arena_intro_tournament", "{=j9RrkCvM}There's a tournament going on?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_intro_2", "arena_intro_1a", "arena_intro_no_tournament", "{=W1wVPNpy}I've heard of these games...", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_intro_3", "arena_intro_tournament", "arena_intro_tournament_2", "{=GAq7KAf0}You bet! Say, you look like a fighter. You should join. Back in the old days it was all condemned criminals and fights to the death, but nowadays they use blunted weapons.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_intro_3a", "arena_intro_tournament_2", "arena_intro_practice_fights", "{=VH27tpkT}It's quite the opportunity to make your name. You risk no more than your teeth, and didn't the Heavens give us thirty of those, just to have a few spare for grand opportunities like this?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_intro_4", "arena_intro_no_tournament", "arena_intro_no_tournament_2", "{=EA2JcVcb}As well you might! They're a grand old imperial custom that's now spread all over Calradia. Back in the old days, they'd give a hundred condemned criminals swords and have them slash at each other until the sands were drenched in blood![if:convo_merry]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_intro_4a", "arena_intro_no_tournament_2", "arena_intro_no_tournament_3", "{=EFKxbLaO}Nowadays things are a little different, of course. The emperors got worried about the people's morals and steered them toward more virtuous kinds of killing, like wars. But the games still go on, just with blunted weapons.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_intro_5", "arena_intro_no_tournament_3", "arena_intro_no_tournament_4", "{=LqkxF5Op}During the games, all the best fighters from the area form teams and pummel each other. Not quite as much fun for the crowd as watching gladiators spill their guts out, of course, but healthier for the participants.[if:convo_approving]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_intro_5a", "arena_intro_no_tournament_4", "arena_intro_practice_fights", "{=jy1o5cNT}You're a warrior, are you not? The games are a fine way to make your name. The local merchants put together a nice fat purse for the winner to attract the talent.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_intro_6", "arena_intro_practice_fights", "arena_intro_perk_reset", "{=iLuezAbk}When there's no tournament, it's still worth coming by. A lot of fighters spend their time here practicing to keep in trim, and we'll award the winners a few coins for their troubles.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_tournament_rules", "arena_intro_4", "arena_tournament_rules", "{=aHGbTpLp}Tell me how tournaments work.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_practice_fight_rules", "arena_intro_4", "arena_practice_fight_rules", "{=H2aaMAe5}Tell me how the practice fights work.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_prizes", "arena_intro_4", "arena_prizes", "{=7pH9MzS1}So you pay us to fight? What's in it for you?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_prizes_2", "arena_intro_4", "arena_master_pre_talk", "{=R2HP4EiX}I don't have any more questions.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_reminder", "arena_master_reminder", "arena_intro_4", "{=k7ebznzr}Yes?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_prizes_answer", "arena_prizes", "arena_prizes_amounts", "{=bUmacxw7}Well, even the practice fights draw those who like to bet on the outcome. But the tournaments! Those pull in crowds from miles around. The merchants love a tournament, and that's why they pony up the silver we need to pay the good souls like you who take and receive the hard knocks.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_training_practice_fight_intro", "arena_tournament_rules", "arena_intro_3a", "{=o0H8Qs0D}The rules of the tournament are standard across Calradia, even outside the Empire. We match the fighters up by drawing lots. Sometimes you're part of a team, and sometimes you fight by yourself.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_training_practice_fight_intro_1c", "arena_intro_3a", "arena_intro_4", "{=Jgkz4uo6}The lots also determine what weapons you get. The winners of each match proceed to the next round. When only two are left, they battle each other to be declared champion.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_training_practice_fight_intro_1a", "arena_practice_fight_rules", "arena_intro_4", "{=cPmV8S4e}We leave the arena open to anyone who wants to practice. There are no rules, no teams. Everyone beats at each other until there is only one fighter left standing. Sounds like fun, eh?[ib:confident2]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_training_practice_fight_intro_2", "arena_prizes_amounts", "arena_tournament_reward", "{=WwbDoZXg}How much are the prizes in the tournaments?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_training_practice_fight_intro_3", "arena_prizes_amounts", "arena_practice_fight_reward", "{=Z4MreMZz}How much are the prizes in the practice fights?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_training_practice_fight_intro_4", "arena_prizes_amounts", "arena_master_pre_talk", "{=4vAbAIqi}Okay. I think I get it.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_training_practice_fight_intro_reward", "arena_practice_fight_reward", "arena_joining_ask", "{=!}{ARENA_REWARD}", new ConversationSentence.OnConditionDelegate(ArenaMasterCampaignBehavior.conversation_arena_practice_fight_explain_reward_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_training_practice_fight_intro_reward_2", "arena_tournament_reward", "arena_joining_ask", "{=!}{TOURNAMENT_REWARD}", new ConversationSentence.OnConditionDelegate(ArenaMasterCampaignBehavior.conversation_arena_tournament_explain_reward_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_training_practice_fight_intro_5", "arena_joining_ask", "arena_joining_answer", "{=Te4pxfWF}So can I join?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_training_practice_fight_intro_6", "arena_joining_answer", "arena_master_talk", "{=bBVLVT7L}Certainly! Looks like a few of our lads are warming up now for the tournament. You can go and hop in if you want to. Or come back later if you just want to practice.[ib:warrior]", new ConversationSentence.OnConditionDelegate(this.conversation_town_has_tournament_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_training_practice_fight_intro_7", "arena_joining_answer", "arena_master_talk", "{=KtrZs3yA}Certainly! The arena is open to anyone who doesn't mind hard knocks. Looks like a few of our lads are warming up now. You can go and hop in if you want to. Or come back later when there's a tournament.[ib:warrior]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_pre_talk_explain", "arena_master_explain", "arena_prizes_amounts", "{=ke0IvBXb}Anything else I can explain?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_ask_what_to_do", "arena_master_pre_talk", "arena_master_talk", "{=arena_master_24}So, what would you like to do?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_master_sign_up_tournament", "arena_master_talk", "arena_master_enter_tournament", "{=arena_master_25}Sign me up for the tournament.", new ConversationSentence.OnConditionDelegate(this.conversation_town_has_tournament_on_condition), (ConversationSentence.OnConsequenceDelegate) null, clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.conversation_town_arena_fight_join_check_on_condition));
      campaignGameStarter.AddPlayerLine("arena_master_ask_for_practice_fight_fight", "arena_master_talk", "arena_master_enter_practice_fight", "{=arena_master_26}I'd like to participate in a practice fight...", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.conversation_town_arena_fight_join_check_on_condition));
      campaignGameStarter.AddPlayerLine("arena_master_ask_tournaments", "arena_master_talk", "arena_master_ask_tournaments", "{=arena_master_27}Are there any tournaments going on in nearby towns?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_master_remind_something", "arena_master_talk", "arena_master_reminder", "{=iSNrQKEN}I want to go back to something you'd mentioned earlier...", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_master_leave", "arena_master_talk", "close_window", "{=arena_master_30}I need to leave now. Good bye.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, 80);
      campaignGameStarter.AddDialogLine("arena_master_tournament_location", "arena_master_ask_tournaments", "arena_master_talk", "{=arena_master_31}{NEARBY_TOURNAMENT_STRING}", new ConversationSentence.OnConditionDelegate(ArenaMasterCampaignBehavior.conversation_tournament_soon_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_ask_tournaments_2", "arena_master_ask_tournaments", "arena_master_talk", "{=arena_master_32}There won't be any tournaments any time soon.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, 1);
      campaignGameStarter.AddDialogLine("arena_master_enter_practice_fight_master_confirm", "arena_master_enter_practice_fight", "arena_master_enter_practice_fight_confirm", "{=arena_master_33}Go to it! Grab a practice weapon on your way down.[if:convo_approving]", new ConversationSentence.OnConditionDelegate(this.conversation_arena_join_practice_fight_confirm_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_enter_practice_fight_master_decline", "arena_master_enter_practice_fight", "close_window", "{=FguHzavX}You can't practice in the arena because there is a tournament going on right now.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_enter_tournament", "arena_master_enter_tournament", "arena_master_enter_tournament_confirm", "{=arena_master_34}Very well - we'll enter your name in the lots, and when your turn comes up, be ready to go out there and start swinging![if:convo_merry]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_master_enter_practice_fight_confirm", "arena_master_enter_practice_fight_confirm", "close_window", "{=arena_master_35}I'll do that.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(ArenaMasterCampaignBehavior.conversation_arena_join_fight_on_consequence));
      campaignGameStarter.AddPlayerLine("arena_master_enter_practice_fight_decline", "arena_master_enter_practice_fight_confirm", "arena_master_pre_talk", "{=arena_master_36}On second thought, I'll hold off.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_master_enter_tournament_confirm", "arena_master_enter_tournament_confirm", "close_window", "{=arena_master_37}I'll be ready.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(ArenaMasterCampaignBehavior.conversation_arena_join_tournament_on_consequence));
      campaignGameStarter.AddPlayerLine("arena_master_enter_tournament_decline", "arena_master_enter_tournament_confirm", "arena_master_pre_talk", "{=arena_master_38}Actually, never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_join_fight", "arena_master_post_practice_fight_talk", "close_window", "{=GmIluR4H}Sure. Why not?", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(ArenaMasterCampaignBehavior.conversation_arena_join_fight_on_consequence));
      campaignGameStarter.AddPlayerLine("2593", "arena_master_post_practice_fight_talk", "arena_master_practice_fight_reject", "{=qsg7pZOs}Thanks. But I will give my bruises some time to heal.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("2594", "arena_master_practice_fight_reject", "close_window", "{=Q7B68CVK}{?PLAYER.GENDER}Splendid{?}Good man{\\?}! That's clever of you.[ib:normal]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
    }

    private static LocationCharacter CreateTournamentMaster(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject tournamentMaster = culture.TournamentMaster;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(tournamentMaster.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(tournamentMaster, out minimumAge, out maximumAge);
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) tournamentMaster)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "spawnpoint_tournamentmaster", true, relation, (string) null, true, true);
    }

    private bool conversation_arena_master_practice_fights_meet_on_condition()
    {
      if (CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.ArenaMaster || this._knowTournaments)
        return false;
      MBTextManager.SetTextVariable("TOWN_NAME", Settlement.CurrentSettlement.Name, false);
      this._knowTournaments = true;
      this._arenaMasterHasMetInSettlements.Add(Settlement.CurrentSettlement);
      return true;
    }

    private bool conversation_town_has_tournament_on_condition()
    {
      return Settlement.CurrentSettlement.IsTown && Campaign.Current.TournamentManager.GetTournamentGame(Settlement.CurrentSettlement.Town) != null;
    }

    public static bool conversation_tournament_soon_on_condition()
    {
      List<Town> list = Town.AllTowns.Where<Town>((Func<Town, bool>) (x => Campaign.Current.TournamentManager.GetTournamentGame(x) != null && x != Settlement.CurrentSettlement.Town)).ToList<Town>().OrderBy<Town, float>((Func<Town, float>) (x => x.Settlement.Position2D.DistanceSquared(Settlement.CurrentSettlement.Position2D))).ToList<Town>();
      TextObject text;
      if (list.Count > 1)
      {
        text = new TextObject("{=pinSMuMe}Well, there's one starting up at {CLOSEST_TOURNAMENT}, then another at {NEXT_CLOSEST_TOURNAMENT}. You should probably be able to get to either of those, if you move quickly.[ib:hip]");
        MBTextManager.SetTextVariable("CLOSEST_TOURNAMENT", list[0].Settlement.EncyclopediaLinkWithName, false);
        MBTextManager.SetTextVariable("NEXT_CLOSEST_TOURNAMENT", list[1].Settlement.EncyclopediaLinkWithName, false);
      }
      else if (list.Count == 1)
      {
        MBTextManager.SetTextVariable("CLOSEST_TOURNAMENT", list[0].Settlement.EncyclopediaLinkWithName, false);
        text = new TextObject("{=2WnruiBw}I know of one starting up at {CLOSEST_TOURNAMENT}. You should be able to get there if you move quickly enough.");
      }
      else
        text = new TextObject("{=tGI135jv}Ah - I don't know of any right now. That's a bit unusual though. Must be the wars.[ib:closed]");
      MBTextManager.SetTextVariable("NEARBY_TOURNAMENT_STRING", text, false);
      return true;
    }

    private bool conversation_arena_join_practice_fight_confirm_on_condition()
    {
      return !Settlement.CurrentSettlement.Town.HasTournament;
    }

    private bool conversation_arena_join_practice_fight_decline_on_condition()
    {
      return Settlement.CurrentSettlement.Town.HasTournament;
    }

    private bool conversation_town_arena_fight_join_check_on_condition(out TextObject explanation)
    {
      if (Hero.MainHero.IsWounded && Campaign.Current.IsMainHeroDisguised)
      {
        explanation = new TextObject("{=DqZtRBXR}You are wounded and in disguise.");
        return false;
      }
      if (Hero.MainHero.IsWounded)
      {
        explanation = new TextObject("{=yNMrF2QF}You are wounded");
        return false;
      }
      if (Campaign.Current.IsMainHeroDisguised)
      {
        explanation = new TextObject("{=jcEoUPCB}You are in disguise.");
        return false;
      }
      explanation = (TextObject) null;
      return true;
    }

    private bool conversation_arena_master_tournament_meet_on_condition()
    {
      if (Settlement.CurrentSettlement == null)
        return false;
      TournamentGame tournamentGame = Campaign.Current.TournamentManager.GetTournamentGame(Settlement.CurrentSettlement.Town);
      if (CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.ArenaMaster || this._knowTournaments || tournamentGame == null)
        return false;
      MBTextManager.SetTextVariable("TOWN_NAME", Settlement.CurrentSettlement.Name, false);
      this._knowTournaments = true;
      this._arenaMasterHasMetInSettlements.Add(Settlement.CurrentSettlement);
      return true;
    }

    private bool conversation_arena_master_no_tournament_meet_on_condition()
    {
      if (CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.ArenaMaster || this._knowTournaments)
        return false;
      MBTextManager.SetTextVariable("TOWN_NAME", Settlement.CurrentSettlement.Name, false);
      this._knowTournaments = true;
      this._arenaMasterHasMetInSettlements.Add(Settlement.CurrentSettlement);
      return true;
    }

    private static bool conversation_arena_practice_fight_explain_reward_on_condition()
    {
      MBTextManager.SetTextVariable("OPPONENT_COUNT_1", "3", false);
      MBTextManager.SetTextVariable("PRIZE_1", "5", false);
      MBTextManager.SetTextVariable("OPPONENT_COUNT_2", "6", false);
      MBTextManager.SetTextVariable("PRIZE_2", "10", false);
      MBTextManager.SetTextVariable("OPPONENT_COUNT_3", "10", false);
      MBTextManager.SetTextVariable("PRIZE_3", "25", false);
      MBTextManager.SetTextVariable("OPPONENT_COUNT_4", "20", false);
      MBTextManager.SetTextVariable("PRIZE_4", "60", false);
      MBTextManager.SetTextVariable("PRIZE_5", "250", false);
      MBTextManager.SetTextVariable("ARENA_REWARD", GameTexts.FindText("str_arena_reward"), false);
      return true;
    }

    private static bool conversation_arena_tournament_explain_reward_on_condition()
    {
      MBTextManager.SetTextVariable("TOURNAMENT_REWARD", new TextObject("{=1esi62Zb}Well - we like tournaments to be memorable. So the sponsors pitch together and buy a prize that they'll be talking about in the markets for weeks. A jeweled blade, say, or a fine-bred warhorse. Something a champion would be proud to own."), false);
      return true;
    }

    private bool conversation_arena_master_meet_on_condition()
    {
      if (CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.ArenaMaster || !this._knowTournaments || !Settlement.CurrentSettlement.IsTown || this._arenaMasterHasMetInSettlements.Contains(Settlement.CurrentSettlement))
        return false;
      MBTextManager.SetTextVariable("TOWN_NAME", Settlement.CurrentSettlement.Name, false);
      this._arenaMasterHasMetInSettlements.Add(Settlement.CurrentSettlement);
      return true;
    }

    private bool conversation_arena_master_meet_start_on_condition()
    {
      return CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.ArenaMaster && this._knowTournaments && Settlement.CurrentSettlement.IsTown && this._arenaMasterHasMetInSettlements.Contains(Settlement.CurrentSettlement) && !Mission.Current.GetMissionBehavior<ArenaPracticeFightMissionController>().AfterPractice;
    }

    private bool conversation_arena_master_player_knows_arenas_on_condition()
    {
      return CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.ArenaMaster && this._knowTournaments && Settlement.CurrentSettlement.IsTown && !this._arenaMasterHasMetInSettlements.Contains(Settlement.CurrentSettlement) && !Mission.Current.GetMissionBehavior<ArenaPracticeFightMissionController>().AfterPractice;
    }

    public static void conversation_arena_join_tournament_on_consequence()
    {
      Mission.Current.EndMission();
      Campaign.Current.GameMenuManager.SetNextMenu("menu_town_tournament_join");
    }

    public static void conversation_arena_join_fight_on_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(ArenaMasterCampaignBehavior.StartPlayerPracticeAfterConversationEnd);
    }

    private static void StartPlayerPracticeAfterConversationEnd()
    {
      Mission.Current.SetMissionMode(MissionMode.Battle, false);
      Mission.Current.GetMissionBehavior<ArenaPracticeFightMissionController>().StartPlayerPractice();
    }

    private bool conversation_arena_master_post_fight_on_condition()
    {
      ArenaPracticeFightMissionController missionBehavior = Mission.Current?.GetMissionBehavior<ArenaPracticeFightMissionController>();
      if (CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.ArenaMaster || !Settlement.CurrentSettlement.IsTown || missionBehavior == null || !missionBehavior.AfterPractice)
        return false;
      missionBehavior.AfterPractice = false;
      int countBeatenByPlayer = missionBehavior.OpponentCountBeatenByPlayer;
      int fromLastPractice = missionBehavior.RemainingOpponentCountFromLastPractice;
      int num1 = 0;
      int num2;
      if (fromLastPractice == 0)
      {
        num2 = 6;
        num1 = 250;
      }
      else if (countBeatenByPlayer == 0)
        num2 = 0;
      else if (countBeatenByPlayer < 3)
        num2 = 1;
      else if (countBeatenByPlayer < 6)
      {
        num2 = 2;
        num1 = 5;
      }
      else if (countBeatenByPlayer < 10)
      {
        num2 = 3;
        num1 = 10;
      }
      else if (countBeatenByPlayer < 20)
      {
        num2 = 4;
        num1 = 25;
      }
      else
      {
        num2 = 5;
        num1 = 60;
      }
      MBTextManager.SetTextVariable("PRIZE", num1);
      MBTextManager.SetTextVariable("OPPONENT_COUNT", countBeatenByPlayer);
      MBTextManager.SetTextVariable("FIGHT_DEBRIEF", GameTexts.FindText("str_arena_take_down", num2.ToString()), false);
      if (num1 > 0)
      {
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, num1, true);
        MBTextManager.SetTextVariable("GOLD_AMOUNT", num1);
        InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_quest_gold_reward_msg").ToString(), "event:/ui/notification/coins_positive"));
      }
      Mission.Current.SetMissionMode(MissionMode.Conversation, false);
      return true;
    }

    private void AfterMissionStarted(IMission obj)
    {
      if (!this._enteredPracticeFightFromMenu)
        return;
      Mission.Current.SetMissionMode(MissionMode.Battle, true);
      Mission.Current.GetMissionBehavior<ArenaPracticeFightMissionController>().StartPlayerPractice();
      this._enteredPracticeFightFromMenu = false;
    }

    private void game_menu_enter_practice_fight_on_consequence(MenuCallbackArgs args)
    {
      if (!this._arenaMasterHasMetInSettlements.Contains(Settlement.CurrentSettlement))
        this._arenaMasterHasMetInSettlements.Add(Settlement.CurrentSettlement);
      PlayerEncounter.LocationEncounter.CreateAndOpenMissionController(LocationComplex.Current.GetLocationWithId("arena"));
      this._enteredPracticeFightFromMenu = true;
    }

    private bool game_menu_enter_practice_fight_on_condition(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      args.optionLeaveType = GameMenuOption.LeaveType.PracticeFight;
      if (!this._knowTournaments)
      {
        args.Tooltip = new TextObject("{=Sph9Nliz}You need to learn more about the arena by talking with the arena master.");
        args.IsEnabled = false;
        return true;
      }
      if (Hero.MainHero.IsWounded && Campaign.Current.IsMainHeroDisguised)
      {
        args.Tooltip = new TextObject("{=DqZtRBXR}You are wounded and in disguise.");
        args.IsEnabled = false;
        return true;
      }
      if (Hero.MainHero.IsWounded)
      {
        args.Tooltip = new TextObject("{=yNMrF2QF}You are wounded");
        args.IsEnabled = false;
        return true;
      }
      if (Campaign.Current.IsMainHeroDisguised)
      {
        args.Tooltip = new TextObject("{=jcEoUPCB}You are in disguise.");
        args.IsEnabled = false;
        return true;
      }
      if (!currentSettlement.Town.HasTournament)
        return true;
      args.Tooltip = new TextObject("{=NESB0CVc}There is no practice fight because of the Tournament.");
      args.IsEnabled = false;
      return true;
    }
  }
}
