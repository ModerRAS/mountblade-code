// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.LordDefectionCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class LordDefectionCampaignBehavior : CampaignBehaviorBase
  {
    private const PersuasionDifficulty _difficulty = PersuasionDifficulty.Medium;
    private List<PersuasionTask> _allReservations;
    [SaveableField(1)]
    private List<PersuasionAttempt> _previousDefectionPersuasionAttempts;
    private float _maximumScoreCap;
    private float _successValue = 1f;
    private float _criticalSuccessValue = 2f;
    private float _criticalFailValue = 2f;
    private float _failValue;

    public LordDefectionCampaignBehavior()
    {
      this._previousDefectionPersuasionAttempts = new List<PersuasionAttempt>();
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.OnDailyTick));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<PersuasionAttempt>>("previousPersuasionAttempts", ref this._previousDefectionPersuasionAttempts);
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    public void ClearPersuasion() => this._previousDefectionPersuasionAttempts.Clear();

    private PersuasionTask GetFailedPersuasionTask(
      LordDefectionCampaignBehavior.DefectionReservationType reservationType)
    {
      foreach (PersuasionTask allReservation in this._allReservations)
      {
        if ((LordDefectionCampaignBehavior.DefectionReservationType) allReservation.ReservationType == reservationType && !this.CanAttemptToPersuade(Hero.OneToOneConversationHero, (int) reservationType))
          return allReservation;
      }
      return (PersuasionTask) null;
    }

    private PersuasionTask GetAnyFailedPersuasionTask()
    {
      foreach (PersuasionTask allReservation in this._allReservations)
      {
        if (!this.CanAttemptToPersuade(Hero.OneToOneConversationHero, allReservation.ReservationType))
          return allReservation;
      }
      return (PersuasionTask) null;
    }

    private PersuasionTask GetCurrentPersuasionTask()
    {
      foreach (PersuasionTask allReservation in this._allReservations)
      {
        if (!allReservation.Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)))
          return allReservation;
      }
      return this._allReservations[this._allReservations.Count - 1];
    }

    protected void AddDialogs(CampaignGameStarter starter)
    {
      this.AddLordDefectionPersuasionOptions(starter);
      CampaignGameStarter campaignGameStarter1 = starter;
      ConversationSentence.OnConditionDelegate conditionDelegate1 = new ConversationSentence.OnConditionDelegate(this.conversation_lord_recruit_1_persuade_option_on_condition);
      ConversationSentence.OnConsequenceDelegate consequenceDelegate1 = new ConversationSentence.OnConsequenceDelegate(this.conversation_lord_recruit_1_persuade_option_on_consequence);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate1 = new ConversationSentence.OnPersuasionOptionDelegate(this.SetupDefectionPersuasionOption1);
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate1 = new ConversationSentence.OnClickableConditionDelegate(this.DefectionPersuasionOption1ClickableOnCondition1);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate2 = persuasionOptionDelegate1;
      campaignGameStarter1.AddPlayerLine("lord_ask_recruit_argument_1", "lord_ask_recruit_persuasion", "lord_defection_reaction", "{=!}{DEFECTION_PERSUADE_ATTEMPT_1}", conditionDelegate1, consequenceDelegate1, clickableConditionDelegate: clickableConditionDelegate1, persuasionOptionDelegate: persuasionOptionDelegate2);
      CampaignGameStarter campaignGameStarter2 = starter;
      ConversationSentence.OnConditionDelegate conditionDelegate2 = new ConversationSentence.OnConditionDelegate(this.conversation_lord_recruit_2_persuade_option_on_condition);
      ConversationSentence.OnConsequenceDelegate consequenceDelegate2 = new ConversationSentence.OnConsequenceDelegate(this.conversation_lord_recruit_2_persuade_option_on_consequence);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate3 = new ConversationSentence.OnPersuasionOptionDelegate(this.SetupDefectionPersuasionOption2);
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate2 = new ConversationSentence.OnClickableConditionDelegate(this.DefectionPersuasionOption2ClickableOnCondition2);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate4 = persuasionOptionDelegate3;
      campaignGameStarter2.AddPlayerLine("lord_ask_recruit_argument_2", "lord_ask_recruit_persuasion", "lord_defection_reaction", "{=!}{DEFECTION_PERSUADE_ATTEMPT_2}", conditionDelegate2, consequenceDelegate2, clickableConditionDelegate: clickableConditionDelegate2, persuasionOptionDelegate: persuasionOptionDelegate4);
      CampaignGameStarter campaignGameStarter3 = starter;
      ConversationSentence.OnConditionDelegate conditionDelegate3 = new ConversationSentence.OnConditionDelegate(this.conversation_lord_recruit_3_persuade_option_on_condition);
      ConversationSentence.OnConsequenceDelegate consequenceDelegate3 = new ConversationSentence.OnConsequenceDelegate(this.conversation_lord_recruit_3_persuade_option_on_consequence);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate5 = new ConversationSentence.OnPersuasionOptionDelegate(this.SetupDefectionPersuasionOption3);
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate3 = new ConversationSentence.OnClickableConditionDelegate(this.DefectionPersuasionOption3ClickableOnCondition3);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate6 = persuasionOptionDelegate5;
      campaignGameStarter3.AddPlayerLine("lord_ask_recruit_argument_3", "lord_ask_recruit_persuasion", "lord_defection_reaction", "{=!}{DEFECTION_PERSUADE_ATTEMPT_3}", conditionDelegate3, consequenceDelegate3, clickableConditionDelegate: clickableConditionDelegate3, persuasionOptionDelegate: persuasionOptionDelegate6);
      CampaignGameStarter campaignGameStarter4 = starter;
      ConversationSentence.OnConditionDelegate conditionDelegate4 = new ConversationSentence.OnConditionDelegate(this.conversation_lord_recruit_4_persuade_option_on_condition);
      ConversationSentence.OnConsequenceDelegate consequenceDelegate4 = new ConversationSentence.OnConsequenceDelegate(this.conversation_lord_recruit_4_persuade_option_on_consequence);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate7 = new ConversationSentence.OnPersuasionOptionDelegate(this.SetupDefectionPersuasionOption4);
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate4 = new ConversationSentence.OnClickableConditionDelegate(this.DefectionPersuasionOption4ClickableOnCondition4);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate8 = persuasionOptionDelegate7;
      campaignGameStarter4.AddPlayerLine("lord_ask_recruit_argument_4", "lord_ask_recruit_persuasion", "lord_defection_reaction", "{=!}{DEFECTION_PERSUADE_ATTEMPT_4}", conditionDelegate4, consequenceDelegate4, clickableConditionDelegate: clickableConditionDelegate4, persuasionOptionDelegate: persuasionOptionDelegate8);
      starter.AddPlayerLine("lord_ask_recruit_argument_no_answer", "lord_ask_recruit_persuasion", "lord_pretalk", "{=0eAtiZbL}I have no answer to that.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_on_end_persuasion_on_consequence));
      starter.AddDialogLine("lord_ask_recruit_argument_reaction", "lord_defection_reaction", "lord_defection_next_reservation", "{=!}{PERSUASION_REACTION}", new ConversationSentence.OnConditionDelegate(this.conversation_lord_persuade_option_reaction_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_lord_persuade_option_reaction_on_consequence));
    }

    private void AddLordDefectionPersuasionOptions(CampaignGameStarter starter)
    {
      starter.AddPlayerLine("player_is_requesting_enemy_change_sides", "lord_talk_speak_diplomacy_2", "persuasion_leave_faction_npc", "{=5a0NhbOA}Your liege, {FIRST_NAME}, is not worth of your loyalty.", new ConversationSentence.OnConditionDelegate(this.conversation_player_is_asking_to_recruit_enemy_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_is_requesting_neutral_change_sides", "lord_talk_speak_diplomacy_2", "persuasion_leave_faction_npc", "{=3gbgjJfZ}Candidly, what do you think of your liege, {FIRST_NAME}?", new ConversationSentence.OnConditionDelegate(this.conversation_player_is_asking_to_recruit_neutral_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_suggesting_treason", "lord_talk_speak_diplomacy_2", "persuasion_leave_faction_npc", "{=bKsb7tcr}Candidly, what do you think of our liege, {FIRST_NAME}?", new ConversationSentence.OnConditionDelegate(this.conversation_suggest_treason_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("persuasion_leave_faction_player_cheat", "lord_talk_speak_diplomacy_2", "persuasion_leave_faction_npc", "{=Cd405TC7}Clear past persuasion attempts (CHEAT)", (ConversationSentence.OnConditionDelegate) (() => Game.Current.IsDevelopmentMode && this._previousDefectionPersuasionAttempts.Any<PersuasionAttempt>((Func<PersuasionAttempt, bool>) (x => x.PersuadedHero == Hero.OneToOneConversationHero))), new ConversationSentence.OnConsequenceDelegate(this.conversation_clear_persuasion_on_consequence));
      starter.AddPlayerLine("player_prisoner_talk", "hero_main_options", "persuasion_leave_faction_npc", "{=wNSH1JdJ}I have an offer for you: join us, and be set free.", new ConversationSentence.OnConditionDelegate(this.conversation_player_start_defection_with_prisoner_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("player_prisoner_talk_pre_barter", "player_prisoner_defection", "persuasion_leave_faction_npc", "{=DRkWMe5X}Even now, I am not sure that's in my best interests...", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("persuasion_leave_faction_npc_refuse", "persuasion_leave_faction_npc", "lord_pretalk", "{=!}{LIEGE_IS_RELATIVE}", new ConversationSentence.OnConditionDelegate(this.conversation_lord_from_ruling_clan_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("persuasion_leave_faction_npc_refuse_high_negative_score", "persuasion_leave_faction_npc", "lord_pretalk", "{=ZYUHljOa}I am happy with my current liege. Neither your purse nor our relationship is deep enough to change that.", new ConversationSentence.OnConditionDelegate(this.conversation_lord_persuade_option_reaction_pre_reject_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("persuasion_leave_faction_npc_redirected", "persuasion_leave_faction_npc", "lord_pretalk", "{=UW1roOES}You should discuss this issue with {REDIRECT_HERO_RELATIONSHIP}, who speaks for our family.", new ConversationSentence.OnConditionDelegate(this.conversation_lord_redirects_to_clan_leader_on_condition), new ConversationSentence.OnConsequenceDelegate(this.persuasion_redierect_player_finish_on_consequece));
      starter.AddDialogLine("persuasion_leave_faction_npc_answer", "persuasion_leave_faction_npc", "persuasion_leave_faction_player", "{=yub5GWVq}What are you saying, exactly?[if:convo_thinking]", (ConversationSentence.OnConditionDelegate) (() => !this.conversation_lord_redirects_to_clan_leader_on_condition()), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("persuasion_leave_faction_player_start", "persuasion_leave_faction_player", "lord_defection_next_reservation", "{=!}{RECRUIT_START}", new ConversationSentence.OnConditionDelegate(this.conversation_lord_can_recruit_on_condition), new ConversationSentence.OnConsequenceDelegate(this.start_lord_defection_persuasion_on_consequence));
      starter.AddDialogLine("lord_ask_recruit_next_reservation_fail", "lord_defection_next_reservation", "lord_pretalk", "{=!}{FAILED_PERSUASION_LINE}", new ConversationSentence.OnConditionDelegate(this.conversation_lord_player_has_failed_in_defection_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_on_end_persuasion_on_consequence));
      starter.AddDialogLine("lord_ask_recruit_next_reservation_attempt", "lord_defection_next_reservation", "lord_ask_recruit_persuasion", "{=!}{PERSUASION_TASK_LINE}[if:convo_thinking]", new ConversationSentence.OnConditionDelegate(this.conversation_lord_recruit_check_if_reservations_met_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("lord_ask_recruit_next_reservation_success_without_barter", "lord_defection_next_reservation", "close_window", "{=!}{DEFECTION_AGREE_WITHOUT_BARTER}", new ConversationSentence.OnConditionDelegate(this.conversation_lord_check_if_ready_to_join_faction_without_barter_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_lord_defect_to_clan_without_barter_on_consequence));
      starter.AddDialogLine("lord_ask_recruit_next_reservation_success_with_barter", "lord_defection_next_reservation", "lord_ask_recruit_ai_argument_reaction", "{=BeYbp6M2}Very well. You've convinced me that this is something I can consider.", new ConversationSentence.OnConditionDelegate(this.conversation_lord_check_if_ready_to_join_faction_with_barter_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("persuasion_leave_faction_npc_result_success_2", "lord_ask_recruit_ai_argument_reaction", "lord_defection_barter_line", "{=0dY1xyyK}This is a dangerous step, however, and I'm putting my life and the lives of my people at risk. I need some sort of support from you before I can change my allegiance.[if:convo_stern]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("persuasion_leave_faction_npc_result_success_open_barter", "lord_defection_barter_line", "lord_defection_post_barter", "{=!}BARTER LINE - Covered by barter interface. Please do not remove these lines!", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_leave_faction_barter_consequence));
      starter.AddDialogLine("lord_defection_post_barter_s", "lord_defection_post_barter", "close_window", "{=9aZgTNiU}Very well. This is a great step to take, but it must be done.[if:convo_calm_friendly][ib:confident]", new ConversationSentence.OnConditionDelegate(this.defection_barter_successful_on_condition), new ConversationSentence.OnConsequenceDelegate(this.defection_successful_on_consequence));
      starter.AddDialogLine("lord_defection_post_barter_f", "lord_defection_post_barter", "close_window", "{=BO9QV55x}I cannot do what you ask.[if:convo_grave]", (ConversationSentence.OnConditionDelegate) (() => !this.defection_barter_successful_on_condition()), (ConversationSentence.OnConsequenceDelegate) null);
    }

    private bool defection_barter_successful_on_condition()
    {
      return Campaign.Current.BarterManager.LastBarterIsAccepted;
    }

    private void defection_successful_on_consequence()
    {
      TraitLevelingHelper.OnPersuasionDefection(Hero.OneToOneConversationHero);
      if (PlayerEncounter.Current != null)
        PlayerEncounter.LeaveEncounter = true;
      foreach (PersuasionAttempt persuasionAttempt in this._previousDefectionPersuasionAttempts)
      {
        if (persuasionAttempt.PersuadedHero == Hero.OneToOneConversationHero)
        {
          switch (persuasionAttempt.Result)
          {
            case PersuasionOptionResult.Success:
              int argumentDifficultyBonusCoefficient = persuasionAttempt.Args.ArgumentStrength < PersuasionArgumentStrength.Normal ? MathF.Abs((int) persuasionAttempt.Args.ArgumentStrength) * 50 : 50;
              SkillLevelingManager.OnPersuasionSucceeded(Hero.MainHero, persuasionAttempt.Args.SkillUsed, PersuasionDifficulty.Medium, argumentDifficultyBonusCoefficient);
              continue;
            case PersuasionOptionResult.CriticalSuccess:
              int num = persuasionAttempt.Args.ArgumentStrength < PersuasionArgumentStrength.Normal ? MathF.Abs((int) persuasionAttempt.Args.ArgumentStrength) * 50 : 50;
              SkillLevelingManager.OnPersuasionSucceeded(Hero.MainHero, persuasionAttempt.Args.SkillUsed, PersuasionDifficulty.Medium, 2 * num);
              continue;
            default:
              continue;
          }
        }
      }
      Campaign.Current.CampaignBehaviorManager.GetBehavior<IStatisticsCampaignBehavior>()?.OnDefectionPersuasionSucess();
    }

    private bool conversation_lord_recruit_1_persuade_option_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 0)
        return false;
      TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
      text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(0)));
      text.SetTextVariable("PERSUASION_OPTION_LINE", currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(0).Line);
      MBTextManager.SetTextVariable("DEFECTION_PERSUADE_ATTEMPT_1", text, false);
      return true;
    }

    private void conversation_lord_recruit_1_persuade_option_on_consequence()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 0)
        return;
      currentPersuasionTask.Options[0].BlockTheOption(true);
    }

    private void conversation_lord_recruit_2_persuade_option_on_consequence()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 1)
        return;
      currentPersuasionTask.Options[1].BlockTheOption(true);
    }

    private void conversation_lord_recruit_3_persuade_option_on_consequence()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 2)
        return;
      currentPersuasionTask.Options[2].BlockTheOption(true);
    }

    private void conversation_lord_recruit_4_persuade_option_on_consequence()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 3)
        return;
      currentPersuasionTask.Options[3].BlockTheOption(true);
    }

    private bool DefectionPersuasionOption1ClickableOnCondition1(out TextObject hintText)
    {
      hintText = TextObject.Empty;
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count > 0)
        return !currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(0).IsBlocked;
      hintText = new TextObject("{=9ACJsI6S}Blocked");
      return false;
    }

    private bool DefectionPersuasionOption2ClickableOnCondition2(out TextObject hintText)
    {
      hintText = TextObject.Empty;
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count > 1)
        return !currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(1).IsBlocked;
      hintText = new TextObject("{=9ACJsI6S}Blocked");
      return false;
    }

    private bool DefectionPersuasionOption3ClickableOnCondition3(out TextObject hintText)
    {
      hintText = TextObject.Empty;
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count > 2)
        return !currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(2).IsBlocked;
      hintText = new TextObject("{=9ACJsI6S}Blocked");
      return false;
    }

    private bool DefectionPersuasionOption4ClickableOnCondition4(out TextObject hintText)
    {
      hintText = TextObject.Empty;
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count > 3)
        return !currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(3).IsBlocked;
      hintText = new TextObject("{=9ACJsI6S}Blocked");
      return false;
    }

    private bool conversation_lord_recruit_2_persuade_option_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 1)
        return false;
      TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
      text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(1)));
      text.SetTextVariable("PERSUASION_OPTION_LINE", currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(1).Line);
      MBTextManager.SetTextVariable("DEFECTION_PERSUADE_ATTEMPT_2", text, false);
      return true;
    }

    private bool conversation_lord_recruit_3_persuade_option_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 2)
        return false;
      TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
      text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(2)));
      text.SetTextVariable("PERSUASION_OPTION_LINE", currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(2).Line);
      MBTextManager.SetTextVariable("DEFECTION_PERSUADE_ATTEMPT_3", text, false);
      return true;
    }

    private bool conversation_lord_recruit_4_persuade_option_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 3)
        return false;
      TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
      text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(3)));
      text.SetTextVariable("PERSUASION_OPTION_LINE", currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(3).Line);
      MBTextManager.SetTextVariable("DEFECTION_PERSUADE_ATTEMPT_4", text, false);
      return true;
    }

    private PersuasionOptionArgs SetupDefectionPersuasionOption1()
    {
      return this.GetCurrentPersuasionTask().Options.ElementAt<PersuasionOptionArgs>(0);
    }

    private PersuasionOptionArgs SetupDefectionPersuasionOption2()
    {
      return this.GetCurrentPersuasionTask().Options.ElementAt<PersuasionOptionArgs>(1);
    }

    private PersuasionOptionArgs SetupDefectionPersuasionOption3()
    {
      return this.GetCurrentPersuasionTask().Options.ElementAt<PersuasionOptionArgs>(2);
    }

    private PersuasionOptionArgs SetupDefectionPersuasionOption4()
    {
      return this.GetCurrentPersuasionTask().Options.ElementAt<PersuasionOptionArgs>(3);
    }

    private bool conversation_player_start_defection_with_prisoner_on_condition()
    {
      if (Hero.OneToOneConversationHero == null || Clan.PlayerClan.Kingdom == null || !Hero.MainHero.IsKingdomLeader || Hero.OneToOneConversationHero.Clan?.Leader != Hero.OneToOneConversationHero || Hero.OneToOneConversationHero.HeroState != Hero.CharacterStates.Prisoner || Campaign.Current.CurrentConversationContext == ConversationContext.CapturedLord || Campaign.Current.CurrentConversationContext == ConversationContext.FreedHero || Hero.OneToOneConversationHero.Clan == Hero.OneToOneConversationHero.MapFaction.Leader.Clan)
        return false;
      if (Hero.OneToOneConversationHero.PartyBelongedToAsPrisoner != null && Hero.OneToOneConversationHero.PartyBelongedToAsPrisoner == PartyBase.MainParty)
        return true;
      return Hero.OneToOneConversationHero.CurrentSettlement != null && Hero.OneToOneConversationHero.CurrentSettlement.OwnerClan == Clan.PlayerClan;
    }

    private bool conversation_lord_persuade_option_reaction_pre_reject_on_condition()
    {
      return Hero.OneToOneConversationHero.Clan.Leader == Hero.OneToOneConversationHero && (double) new JoinKingdomAsClanBarterable(Hero.OneToOneConversationHero, (Kingdom) Hero.MainHero.MapFaction).GetValueForFaction((IFaction) Hero.OneToOneConversationHero.Clan) < -(double) MathF.Min(2000000f, MathF.Max(500000f, (float) (250000.0 + (double) Hero.MainHero.Gold / 3.0)));
    }

    private bool conversation_lord_persuade_option_reaction_on_condition()
    {
      PersuasionOptionResult optionResult = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>().Item2;
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      switch (optionResult)
      {
        case PersuasionOptionResult.CriticalFailure:
          MBTextManager.SetTextVariable("PERSUASION_REACTION", "{=Lj5Lghww}What? No...", false);
          MBTextManager.SetTextVariable("IMMEDIATE_FAILURE_LINE", currentPersuasionTask?.ImmediateFailLine ?? TextObject.Empty, false);
          MBTextManager.SetTextVariable("PERSUASION_REACTION", "{=18xOURG4}Hmm.. No... {IMMEDIATE_FAILURE_LINE}", false);
          using (List<PersuasionTask>.Enumerator enumerator = this._allReservations.GetEnumerator())
          {
            while (enumerator.MoveNext())
              enumerator.Current.BlockAllOptions();
            break;
          }
        case PersuasionOptionResult.Failure:
          MBTextManager.SetTextVariable("IMMEDIATE_FAILURE_LINE", currentPersuasionTask?.ImmediateFailLine ?? TextObject.Empty, false);
          MBTextManager.SetTextVariable("PERSUASION_REACTION", "{=18xOURG4}Hmm.. No... {IMMEDIATE_FAILURE_LINE}", false);
          break;
        default:
          MBTextManager.SetTextVariable("PERSUASION_REACTION", PersuasionHelper.GetDefaultPersuasionOptionReaction(optionResult), false);
          break;
      }
      return true;
    }

    private void conversation_lord_persuade_option_reaction_on_consequence()
    {
      Tuple<PersuasionOptionArgs, PersuasionOptionResult> tuple = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>();
      float difficulty = Campaign.Current.Models.PersuasionModel.GetDifficulty(PersuasionDifficulty.Medium);
      float moveToNextStageChance;
      float blockRandomOptionChance;
      Campaign.Current.Models.PersuasionModel.GetEffectChances(tuple.Item1, out moveToNextStageChance, out blockRandomOptionChance, difficulty);
      PersuasionTask taskOfOption = this.FindTaskOfOption(tuple.Item1);
      taskOfOption.ApplyEffects(moveToNextStageChance, blockRandomOptionChance);
      this._previousDefectionPersuasionAttempts.Add(new PersuasionAttempt(Hero.OneToOneConversationHero, CampaignTime.Now, tuple.Item1, tuple.Item2, taskOfOption.ReservationType));
    }

    private PersuasionTask FindTaskOfOption(PersuasionOptionArgs optionChosenWithLine)
    {
      foreach (PersuasionTask allReservation in this._allReservations)
      {
        foreach (PersuasionOptionArgs option in (List<PersuasionOptionArgs>) allReservation.Options)
        {
          if (option.Line == optionChosenWithLine.Line)
            return allReservation;
        }
      }
      return (PersuasionTask) null;
    }

    private void conversation_on_end_persuasion_on_consequence()
    {
      this._allReservations = (List<PersuasionTask>) null;
      ConversationManager.EndPersuasion();
    }

    public bool conversation_lord_player_has_failed_in_defection_on_condition()
    {
      if (!this.GetCurrentPersuasionTask().Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)) || ConversationManager.GetPersuasionProgressSatisfied())
        return false;
      PersuasionTask failedPersuasionTask = this.GetAnyFailedPersuasionTask();
      if (failedPersuasionTask != null)
        MBTextManager.SetTextVariable("FAILED_PERSUASION_LINE", failedPersuasionTask.FinalFailLine, false);
      return true;
    }

    public bool conversation_lord_recruit_check_if_reservations_met_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask == this._allReservations[this._allReservations.Count - 1] && currentPersuasionTask.Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)) || ConversationManager.GetPersuasionProgressSatisfied())
        return false;
      MBTextManager.SetTextVariable("PERSUASION_TASK_LINE", currentPersuasionTask.SpokenLine, false);
      return true;
    }

    public bool conversation_lord_check_if_ready_to_join_faction_without_barter_on_condition()
    {
      return false;
    }

    public void conversation_lord_defect_to_clan_without_barter_on_consequence()
    {
      new JoinKingdomAsClanBarterable(Hero.OneToOneConversationHero, Hero.MainHero.Clan.Kingdom, true).Apply();
      this.defection_successful_on_consequence();
      ConversationManager.EndPersuasion();
    }

    public bool conversation_lord_check_if_ready_to_join_faction_with_barter_on_condition()
    {
      return ConversationManager.GetPersuasionProgressSatisfied();
    }

    private List<PersuasionTask> GetPersuasionTasksForDefection(Hero forLord, Hero newLiege)
    {
      Hero currentLiege = forLord.MapFaction.Leader;
      LogEntry logEntry1 = (LogEntry) null;
      LogEntry logEntry2 = (LogEntry) null;
      LogEntry logEntry3 = (LogEntry) null;
      MBReadOnlyList<LogEntry> gameActionLogs = Campaign.Current.LogEntryHistory.GameActionLogs;
      bool flag = forLord.GetTraitLevel(DefaultTraits.Honor) + forLord.GetTraitLevel(DefaultTraits.Mercy) < 0;
      foreach (LogEntry logEntry4 in (List<LogEntry>) gameActionLogs)
      {
        if (logEntry4.GetValueAsPoliticsAbuseOfPower(forLord, currentLiege) > 0 && (logEntry1 == null || logEntry4.GetValueAsPoliticsAbuseOfPower(forLord, currentLiege) > logEntry1.GetValueAsPoliticsAbuseOfPower(forLord, currentLiege)))
          logEntry1 = logEntry4;
        if (logEntry4.GetValueAsPoliticsShowedWeakness(forLord, currentLiege) > 0 && (logEntry2 == null || logEntry4.GetValueAsPoliticsShowedWeakness(forLord, currentLiege) > logEntry2.GetValueAsPoliticsSlightedClan(forLord, currentLiege)))
          logEntry2 = logEntry4;
        if (logEntry4.GetValueAsPoliticsSlightedClan(forLord, currentLiege) > 0 && (logEntry3 == null || logEntry4.GetValueAsPoliticsSlightedClan(forLord, currentLiege) > logEntry3.GetValueAsPoliticsSlightedClan(forLord, currentLiege)))
          logEntry3 = logEntry4;
      }
      List<PersuasionTask> tasksForDefection = new List<PersuasionTask>();
      StringHelpers.SetCharacterProperties("CURRENT_LIEGE", forLord.MapFaction.Leader.CharacterObject);
      StringHelpers.SetCharacterProperties("NEW_LIEGE", newLiege.CharacterObject);
      PersuasionTask persuasionTask1 = new PersuasionTask(0);
      persuasionTask1.SpokenLine = new TextObject("{=PtWQ789Z}I'm not sure I trust you people.");
      persuasionTask1.ImmediateFailLine = new TextObject("{=u3eGQRn8}I am not entirely comfortable discussing this with you.");
      persuasionTask1.FinalFailLine = new TextObject("{=yxeyl4LW}I am simply not comfortable discussing this with you.");
      float relationshipWithPlayer = Hero.OneToOneConversationHero.GetUnmodifiedClanLeaderRelationshipWithPlayer();
      PersuasionArgumentStrength argumentStrength1;
      if ((double) relationshipWithPlayer <= -10.0)
      {
        persuasionTask1.SpokenLine = new TextObject("{=GtIpsut6}I don't even like you. You expect me to discuss something like this with you?");
        argumentStrength1 = PersuasionArgumentStrength.VeryHard;
      }
      else if ((double) relationshipWithPlayer <= 0.0)
      {
        persuasionTask1.SpokenLine = new TextObject("{=Owa28Kpr}I barely know you, and you're asking me to talk treason?");
        argumentStrength1 = PersuasionArgumentStrength.Hard;
      }
      else if ((double) relationshipWithPlayer >= 20.0)
      {
        persuasionTask1.SpokenLine = new TextObject("{=HM7auUMA}You are my friend, but even so, this is a risky conversation to have.");
        argumentStrength1 = PersuasionArgumentStrength.Easy;
      }
      else
      {
        persuasionTask1.SpokenLine = new TextObject("{=arBQHbWv}I'm not sure I know you well enough to discuss something like this.");
        argumentStrength1 = PersuasionArgumentStrength.Normal;
      }
      if ((double) relationshipWithPlayer >= 20.0)
      {
        PersuasionOptionArgs option = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, argumentStrength1, true, new TextObject("{=qsnh0KGS}As your friend, I give you my word that I won't breathe a word to anyone else about this conversation."), canMoveToTheNextReservation: true);
        persuasionTask1.AddOptionToTask(option);
      }
      else if (forLord.GetTraitLevel(DefaultTraits.Honor) > 0)
      {
        TextObject textObject = new TextObject("{=yZWBDAG0}You are known as a {?LORD.GENDER}woman{?}man{\\?} of honor. You may know me as one as well.");
        PersuasionOptionArgs option = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, argumentStrength1, true, textObject, canMoveToTheNextReservation: true);
        StringHelpers.SetCharacterProperties("LORD", forLord.CharacterObject, textObject);
        persuasionTask1.AddOptionToTask(option);
      }
      else if (forLord.GetTraitLevel(DefaultTraits.Honor) == 0)
      {
        TextObject textObject = new TextObject("{=0cMibkQO}You may know me as a {?PLAYER.GENDER}woman{?}man{\\?} of honor.");
        PersuasionOptionArgs option = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, argumentStrength1, true, textObject, canMoveToTheNextReservation: true);
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject);
        persuasionTask1.AddOptionToTask(option);
      }
      if (Hero.OneToOneConversationHero.GetTraitLevel(DefaultTraits.Mercy) > 0 && (double) relationshipWithPlayer < 20.0)
      {
        PersuasionOptionArgs option = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Mercy, TraitEffect.Positive, argumentStrength1, false, new TextObject("{=ch6zCk2w}You know me as someone who seeks to avoid bloodshed."), canMoveToTheNextReservation: true);
        persuasionTask1.AddOptionToTask(option);
      }
      else if (Hero.OneToOneConversationHero.GetTraitLevel(DefaultTraits.Valor) > 0 && (double) relationshipWithPlayer < 20.0)
      {
        PersuasionOptionArgs option = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Valor, TraitEffect.Positive, argumentStrength1 - 1, true, new TextObject("{=I5f6Xg3a}You must have heard of my deeds. I speak to you as one warrior to another."), canMoveToTheNextReservation: true);
        persuasionTask1.AddOptionToTask(option);
      }
      if ((double) relationshipWithPlayer >= 20.0)
      {
        PersuasionOptionArgs option = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, argumentStrength1, false, new TextObject("{=8wUfQc4W}You know me. I'll be careful not to get this get back to the wrong ears."), canMoveToTheNextReservation: true);
        persuasionTask1.AddOptionToTask(option);
      }
      else
      {
        PersuasionOptionArgs option = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, argumentStrength1 - 1, false, new TextObject("{=VA8BTMBR}You must know of my reputation. You know that it's not in my interest to betray your trust."), canMoveToTheNextReservation: true);
        persuasionTask1.AddOptionToTask(option);
      }
      tasksForDefection.Add(persuasionTask1);
      PersuasionTask persuasionTask2 = new PersuasionTask(1);
      persuasionTask2.ImmediateFailLine = new TextObject("{=VnECJbmq}That is not enough.");
      persuasionTask2.FinalFailLine = new TextObject("{=KbQQV5rI}My oath is my oath. I cannot break it. (Oath persuasion failed.)");
      PersuasionArgumentStrength argumentStrength2;
      if (forLord.IsEnemy(currentLiege) && logEntry1 != null)
      {
        persuasionTask2.SpokenLine = new TextObject("{=QY55NgWl}I gave an oath to {CURRENT_LIEGE.LINK} - though I'm not sure he's always kept his oath to me.");
        argumentStrength2 = PersuasionArgumentStrength.Easy;
      }
      else if (forLord.GetTraitLevel(DefaultTraits.Honor) > 0)
      {
        persuasionTask2.SpokenLine = new TextObject("{=4HWFvX8M}I gave an oath to my liege. To break it, even for a good reason, would be a great stain on my honor.");
        argumentStrength2 = PersuasionArgumentStrength.VeryHard;
      }
      else if (flag && logEntry2 != null)
      {
        persuasionTask2.SpokenLine = new TextObject("{=wOKF17ta}I gave an oath to {CURRENT_LIEGE.LINK} - though no oath binds me to serve a weak leader who'll take us all down.");
        argumentStrength2 = PersuasionArgumentStrength.Easy;
      }
      else if (forLord.GetTraitLevel(DefaultTraits.Mercy) > 0 && newLiege.GetTraitLevel(DefaultTraits.Mercy) < 0)
      {
        persuasionTask2.SpokenLine = new TextObject("{=GlRZN1J5}I gave an oath to {CURRENT_LIEGE.LINK} - though no oath binds me to serve a weak leader who is too softhearted to rule.");
        argumentStrength2 = PersuasionArgumentStrength.Easy;
      }
      else if (forLord.GetTraitLevel(DefaultTraits.Egalitarian) > 0 && newLiege.GetTraitLevel(DefaultTraits.Oligarchic) > 0 || newLiege.GetTraitLevel(DefaultTraits.Authoritarian) > 0)
      {
        persuasionTask2.SpokenLine = new TextObject("{=CymOFgzv}I gave an oath to {CURRENT_LIEGE.LINK} - but {?LORD.GENDER}her{?}his{\\?} disregard for the common people of this realm does give me pause.");
        argumentStrength2 = PersuasionArgumentStrength.Easy;
      }
      else if (forLord.GetTraitLevel(DefaultTraits.Oligarchic) > 0 && newLiege.GetTraitLevel(DefaultTraits.Egalitarian) > 0 || newLiege.GetTraitLevel(DefaultTraits.Authoritarian) > 0)
      {
        persuasionTask2.SpokenLine = new TextObject("{=EYQI9HJv}I gave an oath to {CURRENT_LIEGE.LINK} - but {?LORD.GENDER}her{?}his{\\?} disregard for the laws of this realm does give me pause.");
        argumentStrength2 = PersuasionArgumentStrength.Easy;
      }
      else
      {
        persuasionTask2.SpokenLine = new TextObject("{=VJoCtAvz}I gave an oath to my liege.");
        argumentStrength2 = PersuasionArgumentStrength.Normal;
      }
      if (currentLiege.GetTraitLevel(DefaultTraits.Honor) + currentLiege.GetTraitLevel(DefaultTraits.Mercy) < 0)
      {
        PersuasionOptionArgs option = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Mercy, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=ITqVF9i4}You know {CURRENT_LIEGE.NAME} asks you to do dishonorable things, and no oath binds you to doing evil."), canMoveToTheNextReservation: true);
        persuasionTask2.AddOptionToTask(option);
      }
      if (currentLiege.GetTraitLevel(DefaultTraits.Honor) < 0)
      {
        PersuasionOptionArgs option = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, argumentStrength2 + 1, false, new TextObject("{=5lq4HNU5}{CURRENT_LIEGE.NAME} is not known for keeping his word."), canMoveToTheNextReservation: true);
        persuasionTask2.AddOptionToTask(option);
      }
      if (logEntry1 != null || currentLiege.GetTraitLevel(DefaultTraits.Honor) <= 0)
      {
        PersuasionOptionArgs option = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, argumentStrength2 + 1, false, new TextObject("{=nQStXojH}If {?CURRENT_LIEGE.GENDER}she{?}he{\\?} ever violated {?CURRENT_LIEGE.GENDER}her{?}his{\\?} oath to you, it absolves you of your duty to {?CURRENT_LIEGE.GENDER}her{?}him{\\?}."), canMoveToTheNextReservation: true);
        persuasionTask2.AddOptionToTask(option);
      }
      PersuasionOptionArgs option1 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.Hard, false, new TextObject("{=lhnuawq3}You know very well that in politics oaths are easily made, and just as easily broken."), canMoveToTheNextReservation: true);
      persuasionTask2.AddOptionToTask(option1);
      tasksForDefection.Add(persuasionTask2);
      PersuasionTask persuasionTask3 = new PersuasionTask(2);
      persuasionTask3.FinalFailLine = new TextObject("{=5E2bIcGb}I will not betray my liege. (Loyalty persuasion failed.)");
      persuasionTask3.SpokenLine = new TextObject("{=ttpan5jp}{CURRENT_LIEGE.LINK} and I have been through a great deal together.");
      PersuasionArgumentStrength argumentStrength3;
      if (logEntry3 != null)
      {
        persuasionTask3.SpokenLine = new TextObject("{=IoaAvgRD}You know {NEW_LIEGE.LINK} have had our differences. You expect me to change sides for him?");
        argumentStrength3 = PersuasionArgumentStrength.Hard;
      }
      else if (forLord.IsEnemy(newLiege))
      {
        persuasionTask3.SpokenLine = new TextObject("{=awaFsZ5l}I have always stood by {CURRENT_LIEGE.LINK}. Whether {CURRENT_LIEGE.LINK} has stood by me or not is another question...");
        argumentStrength3 = PersuasionArgumentStrength.VeryEasy;
      }
      else if (forLord.IsFriend(currentLiege))
      {
        persuasionTask3.SpokenLine = new TextObject("{=PGkFvo77}{CURRENT_LIEGE.LINK} is a friend of mine. I cannot imagine betraying {?CURRENT_LIEGE.GENDER}her{?}him{\\?}.");
        argumentStrength3 = PersuasionArgumentStrength.VeryHard;
      }
      else if (forLord.GetTraitLevel(DefaultTraits.Egalitarian) > 0 && currentLiege.GetTraitLevel(DefaultTraits.Egalitarian) > 0 || forLord.GetTraitLevel(DefaultTraits.Oligarchic) > 0 && currentLiege.GetTraitLevel(DefaultTraits.Oligarchic) > 0 || forLord.GetTraitLevel(DefaultTraits.Authoritarian) > 0 && currentLiege.GetTraitLevel(DefaultTraits.Authoritarian) > 0)
      {
        persuasionTask3.SpokenLine = new TextObject("{=Xlb7Xxyl}{CURRENT_LIEGE.LINK} stands for what I believe in.");
        argumentStrength3 = PersuasionArgumentStrength.Hard;
      }
      else if (forLord.GetTraitLevel(DefaultTraits.Mercy) > 0 && currentLiege.GetTraitLevel(DefaultTraits.Mercy) > 0 || forLord.GetTraitLevel(DefaultTraits.Honor) > 0 && currentLiege.GetTraitLevel(DefaultTraits.Honor) > 0)
      {
        persuasionTask3.SpokenLine = new TextObject("{=LtDqAAk4}I consider {CURRENT_LIEGE.LINK} to be an upright ruler. {NEW_LIEGE.LINK} is not.");
        argumentStrength3 = PersuasionArgumentStrength.Hard;
      }
      else
        argumentStrength3 = PersuasionArgumentStrength.Normal;
      CultureObject culture = Hero.MainHero.Culture;
      if (Hero.MainHero.Clan.Kingdom != null)
        culture = Hero.MainHero.Clan.Kingdom.Culture;
      if (forLord.Culture != culture && argumentStrength3 >= PersuasionArgumentStrength.Normal)
      {
        TextObject textObject = new TextObject("{=6lbjddM8}{PRIOR_LINE} We have been together in many wars. Including many against your {?IS_SAME_CULTURE}people{?}allies{\\?}, the {ETHNIC_TERM}, I should add.");
        textObject.SetTextVariable("PRIOR_LINE", persuasionTask3.SpokenLine);
        textObject.SetTextVariable("ETHNIC_TERM", GameTexts.FindText("str_neutral_term_for_culture", culture.StringId));
        textObject.SetTextVariable("IS_SAME_CULTURE", Hero.MainHero.Culture == culture ? 1 : 0);
        persuasionTask3.SpokenLine = textObject;
      }
      if (currentLiege.IsEnemy(forLord))
      {
        PersuasionOptionArgs option2 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, argumentStrength3, false, new TextObject("{=z5cLVzC8}It's well known that you and {CURRENT_LIEGE.NAME} loathe each other."), canMoveToTheNextReservation: true);
        persuasionTask3.AddOptionToTask(option2);
      }
      else if (currentLiege.GetTraitLevel(DefaultTraits.Generosity) < 0)
      {
        PersuasionOptionArgs option3 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, argumentStrength3, false, new TextObject("{=ZzR9VTU0}{CURRENT_LIEGE.NAME} isn't known for his sense of loyalty. Why do you feel so much to him?"), canMoveToTheNextReservation: true);
        persuasionTask3.AddOptionToTask(option3);
      }
      else
      {
        PersuasionOptionArgs option4 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Valor, TraitEffect.Positive, argumentStrength3 - 1, false, new TextObject("{=abkmGhLH}Has {CURRENT_LIEGE.NAME} really repaid you for your service as you deserve?"), canMoveToTheNextReservation: true);
        persuasionTask3.AddOptionToTask(option4);
      }
      if (HeroHelper.NPCPoliticalDifferencesWithNPC(forLord, newLiege) && !HeroHelper.NPCPoliticalDifferencesWithNPC(forLord, currentLiege))
      {
        PersuasionOptionArgs option5 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Valor, TraitEffect.Positive, argumentStrength3 + 1, false, new TextObject("{=OdS0e6Sb}{NEW_LIEGE.NAME} stands up for what you believe in, while {CURRENT_LIEGE.NAME} does not."), canMoveToTheNextReservation: true);
        persuasionTask3.AddOptionToTask(option5);
      }
      if (forLord.GetTraitLevel(DefaultTraits.Mercy) > 0 && currentLiege.GetTraitLevel(DefaultTraits.Mercy) < 0 && newLiege.GetTraitLevel(DefaultTraits.Mercy) >= 0)
      {
        PersuasionOptionArgs option6 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Mercy, TraitEffect.Positive, argumentStrength3, true, new TextObject("{=9cZeHcAC}The cruelty of {CURRENT_LIEGE.NAME} is legendary. Who cares what he stands for if the realm is drenched in blood?"), canMoveToTheNextReservation: true);
        persuasionTask3.AddOptionToTask(option6);
      }
      PersuasionOptionArgs option7 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, argumentStrength3, false, new TextObject("{=y3xguaCc}Put your interests and the good of the realm first. There's too much at stake for that."), canMoveToTheNextReservation: true);
      persuasionTask3.AddOptionToTask(option7);
      tasksForDefection.Add(persuasionTask3);
      PersuasionTask persuasionTask4 = new PersuasionTask(4);
      persuasionTask4.FinalFailLine = new TextObject("{=2P9mMbrq}It is not in my interest to change sides. (Self-interest persuasion failed.)");
      double renown = (double) newLiege.Clan.Renown;
      List<Settlement> list1 = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (x => x.MapFaction == newLiege.MapFaction)).ToList<Settlement>();
      List<Settlement> list2 = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (x => x.MapFaction == currentLiege.MapFaction)).ToList<Settlement>();
      PersuasionArgumentStrength argumentStrength4;
      if (renown < 1000.0 && newLiege == Hero.MainHero)
      {
        persuasionTask4.SpokenLine = new TextObject("{=p2rTaKo8}You have no claim to the throne. Even in the unlikely case that others follow you, another usurper will just rise up to defeat you.");
        argumentStrength4 = PersuasionArgumentStrength.VeryHard;
      }
      else if (list1.Count * 3 < list2.Count)
      {
        persuasionTask4.SpokenLine = new TextObject("{=A6E74QyR}You are badly outnumbered. A rebellion should at least have a chance of success.");
        argumentStrength4 = PersuasionArgumentStrength.VeryHard;
      }
      else if (list1.Count < list2.Count)
      {
        persuasionTask4.SpokenLine = new TextObject("{=ZQa7tXdK}You are somewhat outnumbered. Even if I agree with you, it would be wise of me to wait.");
        argumentStrength4 = PersuasionArgumentStrength.Hard;
      }
      else
      {
        persuasionTask4.SpokenLine = new TextObject("{=GEBRuVcZ}Why change sides now? Once one declares oneself a rebel, there is usually no going back.");
        argumentStrength4 = PersuasionArgumentStrength.Normal;
      }
      if (forLord.GetTraitLevel(DefaultTraits.Valor) > 0)
      {
        PersuasionOptionArgs option8 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Valor, TraitEffect.Positive, PersuasionArgumentStrength.Normal, true, new TextObject("{=XFzbzt3W}You are known for your valor. Fortune favors the bold. Together, we will win this war quickly."), canMoveToTheNextReservation: true);
        persuasionTask4.AddOptionToTask(option8);
      }
      else if (forLord.GetTraitLevel(DefaultTraits.Valor) > 0)
      {
        PersuasionOptionArgs option9 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Valor, TraitEffect.Positive, PersuasionArgumentStrength.Hard, true, new TextObject("{=7QdKwOhY}Fortune favors the bold. With you with us, we will win this war quickly."), canMoveToTheNextReservation: true);
        persuasionTask4.AddOptionToTask(option9);
      }
      PersuasionOptionArgs option10 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=dGkJi1yb}I have a strategy to win. And my strategies always work, eventually."), canMoveToTheNextReservation: true);
      persuasionTask4.AddOptionToTask(option10);
      if (forLord.GetTraitLevel(DefaultTraits.Honor) + forLord.GetTraitLevel(DefaultTraits.Valor) < 0)
      {
        PersuasionOptionArgs option11 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=IpnQP7A1}Better to die fighting for a just ruler than to live under an unjust one."), canMoveToTheNextReservation: true);
        persuasionTask4.AddOptionToTask(option11);
      }
      if (Hero.MainHero == newLiege)
      {
        PersuasionOptionArgs option12 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, argumentStrength4, false, new TextObject("{=a37zTVVe}Believe me, I'll be generous to those who came to me early. Perhaps not as generous to those who came late."), canMoveToTheNextReservation: true);
        persuasionTask4.AddOptionToTask(option12);
      }
      else
      {
        PersuasionOptionArgs option13 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=aMICdOjq}{NEW_LIEGE.NAME} will be grateful to those who backed {?NEW_LIEGE.GENDER}her{?}him{\\?} before {?NEW_LIEGE.GENDER}her{?}his{\\?} victory was assured. Not so much after it's assured."), canMoveToTheNextReservation: true);
        persuasionTask4.AddOptionToTask(option13);
      }
      tasksForDefection.Add(persuasionTask4);
      return tasksForDefection;
    }

    public bool conversation_player_is_asking_to_recruit_enemy_on_condition()
    {
      if (Hero.OneToOneConversationHero == null || Hero.MainHero.Clan.Kingdom == null || Hero.MainHero.Clan.IsUnderMercenaryService || Hero.OneToOneConversationHero.MapFaction == null || !Hero.OneToOneConversationHero.MapFaction.IsKingdomFaction || Hero.OneToOneConversationHero.MapFaction == Hero.MainHero.MapFaction || Hero.OneToOneConversationHero.MapFaction.Leader == Hero.OneToOneConversationHero || Hero.OneToOneConversationHero.Clan == null || Hero.OneToOneConversationHero.Clan.IsMinorFaction || Hero.OneToOneConversationHero.IsPrisoner || !FactionManager.IsAtWarAgainstFaction(Hero.OneToOneConversationHero.MapFaction, Hero.MainHero.MapFaction))
        return false;
      Hero.OneToOneConversationHero.MapFaction.Leader.SetTextVariables();
      MBTextManager.SetTextVariable("FACTION_NAME", Hero.MainHero.MapFaction.Name, false);
      return true;
    }

    public bool conversation_player_is_asking_to_recruit_neutral_on_condition()
    {
      if (Hero.OneToOneConversationHero == null || Hero.MainHero.Clan.Kingdom == null || Hero.MainHero.Clan.IsUnderMercenaryService || Hero.OneToOneConversationHero.MapFaction == null || !Hero.OneToOneConversationHero.MapFaction.IsKingdomFaction || Hero.OneToOneConversationHero.MapFaction == Hero.MainHero.MapFaction || FactionManager.IsAtWarAgainstFaction(Hero.OneToOneConversationHero.MapFaction, Hero.MainHero.MapFaction) || Hero.OneToOneConversationHero.Clan == null || Hero.OneToOneConversationHero.Clan.IsMinorFaction || Hero.OneToOneConversationHero.IsPrisoner || Hero.OneToOneConversationHero == Hero.OneToOneConversationHero.MapFaction.Leader)
        return false;
      Hero.OneToOneConversationHero.MapFaction.Leader.SetTextVariables();
      MBTextManager.SetTextVariable("FACTION_NAME", Hero.MainHero.MapFaction.Name, false);
      return true;
    }

    private bool conversation_suggest_treason_on_condition() => false;

    public bool conversation_lord_from_ruling_clan_on_condition()
    {
      float num = 0.0f;
      this._allReservations = this.GetPersuasionTasksForDefection(Hero.OneToOneConversationHero, Hero.MainHero.MapFaction.Leader);
      foreach (PersuasionTask allReservation in this._allReservations)
      {
        foreach (PersuasionAttempt persuasionAttempt in this._previousDefectionPersuasionAttempts)
        {
          if (persuasionAttempt.Matches(Hero.OneToOneConversationHero, allReservation.ReservationType))
          {
            switch (persuasionAttempt.Result)
            {
              case PersuasionOptionResult.CriticalFailure:
                num -= this._criticalFailValue;
                continue;
              case PersuasionOptionResult.Failure:
                num -= 0.0f;
                continue;
              case PersuasionOptionResult.Success:
                num += this._successValue;
                continue;
              case PersuasionOptionResult.CriticalSuccess:
                num += this._criticalSuccessValue;
                continue;
              default:
                continue;
            }
          }
        }
      }
      if ((double) this._maximumScoreCap > (double) num && this._previousDefectionPersuasionAttempts.Any<PersuasionAttempt>((Func<PersuasionAttempt, bool>) (x => x.PersuadedHero == Hero.OneToOneConversationHero)))
      {
        MBTextManager.SetTextVariable("LIEGE_IS_RELATIVE", new TextObject("{=03lc5R2t}You have tried to persuade me before. I will not stand your words again."), false);
        return true;
      }
      if (Hero.OneToOneConversationHero.Clan.IsMapFaction)
        return false;
      if (Hero.OneToOneConversationHero.Clan == Hero.OneToOneConversationHero.MapFaction.Leader.Clan)
      {
        TextObject textObject = new TextObject("{=jF4Nl8Au}{NPC_LIEGE.NAME}, {LIEGE_RELATIONSHIP}? Long may {?NPC_LIEGE.GENDER}she{?}he{\\?} live.");
        StringHelpers.SetCharacterProperties("NPC_LIEGE", Hero.OneToOneConversationHero.Clan.Leader.CharacterObject, textObject);
        textObject.SetTextVariable("LIEGE_RELATIONSHIP", ConversationHelper.HeroRefersToHero(Hero.OneToOneConversationHero, Hero.OneToOneConversationHero.Clan.Leader, true));
        MBTextManager.SetTextVariable("LIEGE_IS_RELATIVE", textObject, false);
        return true;
      }
      if (Hero.OneToOneConversationHero.PartyBelongedTo == null || Hero.OneToOneConversationHero.PartyBelongedTo.Army == null || Hero.OneToOneConversationHero.PartyBelongedTo.Army.LeaderParty != Hero.OneToOneConversationHero.PartyBelongedTo && Hero.OneToOneConversationHero.PartyBelongedTo.AttachedTo == null)
        return false;
      MBTextManager.SetTextVariable("LIEGE_IS_RELATIVE", new TextObject("{=MalIalPA}I will not listen to such matters while I'm in an army."), false);
      return true;
    }

    public bool conversation_lord_redirects_to_clan_leader_on_condition()
    {
      if (Hero.OneToOneConversationHero.Clan.IsMapFaction)
        return false;
      MBTextManager.SetTextVariable("REDIRECT_HERO_RELATIONSHIP", ConversationHelper.HeroRefersToHero(Hero.OneToOneConversationHero, Hero.OneToOneConversationHero.Clan.Leader, true), false);
      return !Hero.OneToOneConversationHero.Clan.IsMapFaction && Hero.OneToOneConversationHero.Clan.Leader != Hero.OneToOneConversationHero;
    }

    private void persuasion_redierect_player_finish_on_consequece()
    {
    }

    private bool conversation_lord_can_recruit_on_condition()
    {
      if (Hero.MainHero.MapFaction.Leader == Hero.MainHero)
        MBTextManager.SetTextVariable("RECRUIT_START", new TextObject("{=Fr7wzk97}I am the rightful ruler of this land. I would like your support."), false);
      else if (Hero.MainHero.MapFaction == Hero.OneToOneConversationHero.MapFaction)
      {
        StringHelpers.SetCharacterProperties("CURRENT_LIEGE", Hero.OneToOneConversationHero.MapFaction.Leader.CharacterObject);
        MBTextManager.SetTextVariable("RECRUIT_START", "{=V7qF7uas}I should lead our people, not {CURRENT_LIEGE.NAME}.", false);
      }
      else
      {
        StringHelpers.SetCharacterProperties("NEW_LIEGE", Hero.MainHero.MapFaction.Leader.CharacterObject);
        MBTextManager.SetTextVariable("RECRUIT_START", new TextObject("{=UwPs3wmj}My liege {NEW_LIEGE.NAME} would welcome your support. Join us!"), false);
      }
      return true;
    }

    private void start_lord_defection_persuasion_on_consequence()
    {
      Hero newLiege = Hero.MainHero.MapFaction.Leader;
      if (Hero.MainHero.MapFaction == Hero.OneToOneConversationHero.MapFaction)
        newLiege = Hero.MainHero;
      this._allReservations = this.GetPersuasionTasksForDefection(Hero.OneToOneConversationHero, newLiege);
      this._maximumScoreCap = (float) this._allReservations.Count * 1f;
      float initialProgress = 0.0f;
      foreach (PersuasionTask allReservation in this._allReservations)
      {
        foreach (PersuasionAttempt persuasionAttempt in this._previousDefectionPersuasionAttempts)
        {
          if (persuasionAttempt.Matches(Hero.OneToOneConversationHero, allReservation.ReservationType))
          {
            switch (persuasionAttempt.Result)
            {
              case PersuasionOptionResult.CriticalFailure:
                initialProgress -= this._criticalFailValue;
                continue;
              case PersuasionOptionResult.Failure:
                initialProgress -= 0.0f;
                continue;
              case PersuasionOptionResult.Success:
                initialProgress += this._successValue;
                continue;
              case PersuasionOptionResult.CriticalSuccess:
                initialProgress += this._criticalSuccessValue;
                continue;
              default:
                continue;
            }
          }
        }
      }
      ConversationManager.StartPersuasion(this._maximumScoreCap, this._successValue, this._failValue, this._criticalSuccessValue, this._criticalFailValue, initialProgress);
    }

    private void OnDailyTick() => this.RemoveOldAttempts();

    private void conversation_clear_persuasion_on_consequence() => this.ClearPersuasion();

    private void conversation_leave_faction_barter_consequence()
    {
      BarterManager.Instance.StartBarterOffer(Hero.MainHero, Hero.OneToOneConversationHero, PartyBase.MainParty, Hero.OneToOneConversationHero.PartyBelongedTo?.Party, InitContext: new BarterManager.BarterContextInitializer(BarterManager.Instance.InitializeJoinFactionBarterContext), defaultBarterables: (IEnumerable<Barterable>) new Barterable[1]
      {
        (Barterable) new JoinKingdomAsClanBarterable(Hero.OneToOneConversationHero, Clan.PlayerClan.Kingdom)
      });
      this._allReservations = (List<PersuasionTask>) null;
      ConversationManager.EndPersuasion();
      if (Hero.OneToOneConversationHero.PartyBelongedTo == null || Hero.OneToOneConversationHero.PartyBelongedTo.MapFaction.IsAtWarWith(MobileParty.MainParty.MapFaction))
        return;
      PlayerEncounter.LeaveEncounter = true;
    }

    private bool CanAttemptToPersuade(Hero targetHero, int reservationType)
    {
      foreach (PersuasionAttempt persuasionAttempt in this._previousDefectionPersuasionAttempts)
      {
        if (persuasionAttempt.Matches(targetHero, reservationType) && !persuasionAttempt.IsSuccesful() && (double) persuasionAttempt.GameTime.ElapsedWeeksUntilNow < 1.0)
          return false;
      }
      return true;
    }

    private void RemoveOldAttempts()
    {
      for (int index = this._previousDefectionPersuasionAttempts.Count - 1; index >= 0; --index)
      {
        if ((double) this._previousDefectionPersuasionAttempts[index].GameTime.ElapsedYearsUntilNow > 1.0)
          this._previousDefectionPersuasionAttempts.RemoveAt(index);
      }
    }

    public class LordDefectionCampaignBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public LordDefectionCampaignBehaviorTypeDefiner()
        : base(100000)
      {
      }

      protected override void DefineEnumTypes()
      {
        this.AddEnumDefinition(typeof (LordDefectionCampaignBehavior.DefectionReservationType), 1);
      }
    }

    private enum DefectionReservationType
    {
      LordDefectionPlayerTrust,
      LordDefectionOathToLiege,
      LordDefectionLoyalty,
      LordDefectionPolicy,
      LordDefectionSelfinterest,
    }
  }
}
