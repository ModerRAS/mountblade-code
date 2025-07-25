// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.RomanceCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.CampaignSystem.Conversation.Tags;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class RomanceCampaignBehavior : CampaignBehaviorBase
  {
    private const PersuasionDifficulty _difficulty = PersuasionDifficulty.Medium;
    private List<PersuasionTask> _allReservations;
    [SaveableField(1)]
    private List<PersuasionAttempt> _previousRomancePersuasionAttempts;
    private Hero _playerProposalHero;
    private Hero _proposedSpouseForPlayerRelative;
    private float _maximumScoreCap;
    private const float _successValue = 1f;
    private const float _criticalSuccessValue = 2f;
    private const float _criticalFailValue = 2f;
    private const float _failValue = 0.0f;

    private CampaignTime RomanceCourtshipAttemptCooldown => CampaignTime.DaysFromNow(-1f);

    public RomanceCampaignBehavior()
    {
      this._previousRomancePersuasionAttempts = new List<PersuasionAttempt>();
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.DailyTickClanEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.DailyTickClan));
    }

    private void DailyTickClan(Clan clan) => this.CheckNpcMarriages(clan);

    private void CheckNpcMarriages(Clan consideringClan)
    {
      if (!this.IsClanSuitableForNpcMarriage(consideringClan))
        return;
      MarriageModel marriageModel = Campaign.Current.Models.MarriageModel;
      foreach (Hero firstHero in consideringClan.Lords.ToList<Hero>())
      {
        if (firstHero.CanMarry())
        {
          Clan clan = Clan.All[MBRandom.RandomInt(Clan.All.Count)];
          if (this.IsClanSuitableForNpcMarriage(clan) && marriageModel.ShouldNpcMarriageBetweenClansBeAllowed(consideringClan, clan))
          {
            foreach (Hero secondHero in clan.Lords.ToList<Hero>())
            {
              float num = marriageModel.NpcCoupleMarriageChance(firstHero, secondHero);
              if ((double) num > 0.0 && (double) MBRandom.RandomFloat < (double) num)
              {
                bool flag = false;
                foreach (Romance.RomanticState romanticState in Romance.RomanticStateList)
                {
                  if (romanticState.Level >= Romance.RomanceLevelEnum.MatchMadeByFamily && (romanticState.Person1 == firstHero || romanticState.Person2 == firstHero || romanticState.Person1 == secondHero || romanticState.Person2 == secondHero))
                  {
                    flag = true;
                    break;
                  }
                }
                if (!flag)
                {
                  MarriageAction.Apply(firstHero, secondHero);
                  return;
                }
              }
            }
          }
        }
      }
    }

    private bool IsClanSuitableForNpcMarriage(Clan clan)
    {
      return clan != Clan.PlayerClan && Campaign.Current.Models.MarriageModel.IsClanSuitableForMarriage(clan);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<PersuasionAttempt>>("previousRomancePersuasionAttempts", ref this._previousRomancePersuasionAttempts);
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
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

    private void RemoveUnneededPersuasionAttempts()
    {
      foreach (PersuasionAttempt persuasionAttempt in this._previousRomancePersuasionAttempts.ToList<PersuasionAttempt>())
      {
        if (persuasionAttempt.PersuadedHero.Spouse != null || !persuasionAttempt.PersuadedHero.IsAlive)
          this._previousRomancePersuasionAttempts.Remove(persuasionAttempt);
      }
    }

    protected void AddDialogs(CampaignGameStarter starter)
    {
      starter.AddPlayerLine("lord_special_request_flirt", "lord_talk_speak_diplomacy_2", "lord_start_courtship_response", "{=!}{FLIRTATION_LINE}", new ConversationSentence.OnConditionDelegate(this.conversation_player_can_open_courtship_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_player_opens_courtship_on_consequence));
      starter.AddPlayerLine("hero_romance_task_pt1", "hero_main_options", "hero_courtship_task_1_begin_reservations", "{=bHZyublA}So... I'm glad to have the chance to spend some time together.", new ConversationSentence.OnConditionDelegate(this.conversation_romance_at_stage_1_discussions_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_start_courtship_persuasion_pt1_on_consequence));
      starter.AddPlayerLine("hero_romance_task_pt2", "hero_main_options", "hero_courtship_task_2_begin_reservations", "{=nGsQeTll}Perhaps we should discuss a future together...", new ConversationSentence.OnConditionDelegate(this.conversation_romance_at_stage_2_discussions_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_continue_courtship_stage_2_on_consequence));
      starter.AddPlayerLine("hero_romance_task_pt3a", "hero_main_options", "hero_courtship_final_barter", "{=2aW6NC3Q}Let us discuss the final terms of our marriage.", new ConversationSentence.OnConditionDelegate(this.conversation_finalize_courtship_for_hero_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("hero_romance_task_pt3b", "hero_main_options", "hero_courtship_final_barter", "{=jd4qUGEA}I wish to discuss the final terms of my marriage with {COURTSHIP_PARTNER}.", new ConversationSentence.OnConditionDelegate(this.conversation_finalize_courtship_for_other_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("hero_romance_task_blocked", "hero_main_options", "hero_courtship_task_blocked", "{=OaRB1oVI}So... Earlier, we had discussed the possibility of marriage.", new ConversationSentence.OnConditionDelegate(this.conversation_romance_blocked_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hero_courtship_persuasion_fail", "hero_courtship_task_blocked", "lord_pretalk", "{=!}{ROMANCE_BLOCKED_REASON}", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hero_courtship_persuasion_fail_2", "hero_courtship_task_1_begin_reservations", "lord_pretalk", "{=!}{FAILED_PERSUASION_LINE}", new ConversationSentence.OnConditionDelegate(this.conversation_lord_player_has_failed_in_courtship_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_fail_courtship_on_consequence));
      starter.AddDialogLine("hero_courtship_persuasion_start", "hero_courtship_task_1_begin_reservations", "hero_courtship_task_1_next_reservation", "{=bW3ygxro}Yes, it's good to have a chance to get to know each other.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hero_courtship_persuasion_fail_3", "hero_courtship_task_1_next_reservation", "lord_pretalk", "{=!}{FAILED_PERSUASION_LINE}", new ConversationSentence.OnConditionDelegate(this.conversation_lord_player_has_failed_in_courtship_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_fail_courtship_on_consequence));
      starter.AddDialogLine("hero_courtship_persuasion_attempt", "hero_courtship_task_1_next_reservation", "hero_courtship_argument", "{=!}{PERSUASION_TASK_LINE}", new ConversationSentence.OnConditionDelegate(this.conversation_check_if_unmet_reservation_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hero_courtship_persuasion_success", "hero_courtship_task_1_next_reservation", "lord_conclude_courtship_stage_1", "{=YcdQ1MWq}Well.. It seems we have a fair amount in common.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_courtship_stage_1_success_on_consequence));
      starter.AddDialogLine("persuasion_leave_faction_npc_result_success_2_1", "lord_conclude_courtship_stage_1", "close_window", "{=SP7I61x2}Perhaps we can talk more when we meet again.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.courtship_conversation_leave_on_consequence));
      starter.AddDialogLine("hero_courtship_persuasion_2_start", "hero_courtship_task_2_begin_reservations", "hero_courtship_task_2_next_reservation", "{=VNFKqpyV}Yes, well, I've been thinking about that.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hero_courtship_persuasion_2_fail", "hero_courtship_task_2_next_reservation", "lord_pretalk", "{=!}{FAILED_PERSUASION_LINE}", new ConversationSentence.OnConditionDelegate(this.conversation_lord_player_has_failed_in_courtship_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_fail_courtship_on_consequence));
      starter.AddDialogLine("hero_courtship_persuasion_2_attempt", "hero_courtship_task_2_next_reservation", "hero_courtship_argument", "{=!}{PERSUASION_TASK_LINE}", new ConversationSentence.OnConditionDelegate(this.conversation_check_if_unmet_reservation_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hero_courtship_persuasion_2_success", "hero_courtship_task_2_next_reservation", "lord_conclude_courtship_stage_2", "{=xwS10c1b}Yes... I think I would be honored to accept your proposal.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_courtship_stage_2_success_on_consequence));
      starter.AddDialogLine("persuasion_leave_faction_npc_result_success_2_2", "lord_conclude_courtship_stage_2", "close_window", "{=pvnY5Jwv}{CLAN_LEADER.LINK}, as head of our family, needs to give {?CLAN_LEADER.GENDER}her{?}his{\\?} blessing. There are usually financial arrangements to be made.", new ConversationSentence.OnConditionDelegate(this.courtship_hero_not_clan_leader_on_condition), new ConversationSentence.OnConsequenceDelegate(this.courtship_conversation_leave_on_consequence));
      starter.AddDialogLine("persuasion_leave_faction_npc_result_success_2_3", "lord_conclude_courtship_stage_2", "close_window", "{=nnutwjOZ}We'll need to work out the details of how we divide our property.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.courtship_conversation_leave_on_consequence));
      CampaignGameStarter campaignGameStarter1 = starter;
      ConversationSentence.OnConditionDelegate conditionDelegate1 = new ConversationSentence.OnConditionDelegate(this.conversation_courtship_persuasion_option_1_on_condition);
      ConversationSentence.OnConsequenceDelegate consequenceDelegate1 = new ConversationSentence.OnConsequenceDelegate(this.conversation_romance_1_persuade_option_on_consequence);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate1 = new ConversationSentence.OnPersuasionOptionDelegate(this.SetupCourtshipPersuasionOption1);
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate1 = new ConversationSentence.OnClickableConditionDelegate(this.RomancePersuasionOption1ClickableOnCondition1);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate2 = persuasionOptionDelegate1;
      campaignGameStarter1.AddPlayerLine("hero_courtship_argument_1", "hero_courtship_argument", "hero_courtship_reaction", "{=!}{ROMANCE_PERSUADE_ATTEMPT_1}", conditionDelegate1, consequenceDelegate1, clickableConditionDelegate: clickableConditionDelegate1, persuasionOptionDelegate: persuasionOptionDelegate2);
      CampaignGameStarter campaignGameStarter2 = starter;
      ConversationSentence.OnConditionDelegate conditionDelegate2 = new ConversationSentence.OnConditionDelegate(this.conversation_courtship_persuasion_option_2_on_condition);
      ConversationSentence.OnConsequenceDelegate consequenceDelegate2 = new ConversationSentence.OnConsequenceDelegate(this.conversation_romance_2_persuade_option_on_consequence);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate3 = new ConversationSentence.OnPersuasionOptionDelegate(this.SetupCourtshipPersuasionOption2);
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate2 = new ConversationSentence.OnClickableConditionDelegate(this.RomancePersuasionOption2ClickableOnCondition2);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate4 = persuasionOptionDelegate3;
      campaignGameStarter2.AddPlayerLine("hero_courtship_argument_2", "hero_courtship_argument", "hero_courtship_reaction", "{=!}{ROMANCE_PERSUADE_ATTEMPT_2}", conditionDelegate2, consequenceDelegate2, clickableConditionDelegate: clickableConditionDelegate2, persuasionOptionDelegate: persuasionOptionDelegate4);
      CampaignGameStarter campaignGameStarter3 = starter;
      ConversationSentence.OnConditionDelegate conditionDelegate3 = new ConversationSentence.OnConditionDelegate(this.conversation_courtship_persuasion_option_3_on_condition);
      ConversationSentence.OnConsequenceDelegate consequenceDelegate3 = new ConversationSentence.OnConsequenceDelegate(this.conversation_romance_3_persuade_option_on_consequence);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate5 = new ConversationSentence.OnPersuasionOptionDelegate(this.SetupCourtshipPersuasionOption3);
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate3 = new ConversationSentence.OnClickableConditionDelegate(this.RomancePersuasionOption3ClickableOnCondition3);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate6 = persuasionOptionDelegate5;
      campaignGameStarter3.AddPlayerLine("hero_courtship_argument_3", "hero_courtship_argument", "hero_courtship_reaction", "{=!}{ROMANCE_PERSUADE_ATTEMPT_3}", conditionDelegate3, consequenceDelegate3, clickableConditionDelegate: clickableConditionDelegate3, persuasionOptionDelegate: persuasionOptionDelegate6);
      CampaignGameStarter campaignGameStarter4 = starter;
      ConversationSentence.OnConditionDelegate conditionDelegate4 = new ConversationSentence.OnConditionDelegate(this.conversation_courtship_persuasion_option_4_on_condition);
      ConversationSentence.OnConsequenceDelegate consequenceDelegate4 = new ConversationSentence.OnConsequenceDelegate(this.conversation_romance_4_persuade_option_on_consequence);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate7 = new ConversationSentence.OnPersuasionOptionDelegate(this.SetupCourtshipPersuasionOption4);
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate4 = new ConversationSentence.OnClickableConditionDelegate(this.RomancePersuasionOption4ClickableOnCondition4);
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate8 = persuasionOptionDelegate7;
      campaignGameStarter4.AddPlayerLine("hero_courtship_argument_4", "hero_courtship_argument", "hero_courtship_reaction", "{=!}{ROMANCE_PERSUADE_ATTEMPT_4}", conditionDelegate4, consequenceDelegate4, clickableConditionDelegate: clickableConditionDelegate4, persuasionOptionDelegate: persuasionOptionDelegate8);
      starter.AddPlayerLine("lord_ask_recruit_argument_no_answer_2", "hero_courtship_argument", "lord_pretalk", "{=!}{TRY_HARDER_LINE}", new ConversationSentence.OnConditionDelegate(this.conversation_courtship_try_later_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_fail_courtship_on_consequence));
      starter.AddDialogLine("lord_ask_recruit_argument_reaction_1", "hero_courtship_reaction", "hero_courtship_task_1_next_reservation", "{=!}{PERSUASION_REACTION}", new ConversationSentence.OnConditionDelegate(this.conversation_courtship_reaction_stage_1_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_lord_persuade_option_reaction_on_consequence));
      starter.AddDialogLine("lord_ask_recruit_argument_reaction_2", "hero_courtship_reaction", "hero_courtship_task_2_next_reservation", "{=!}{PERSUASION_REACTION}", new ConversationSentence.OnConditionDelegate(this.conversation_courtship_reaction_stage_2_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_lord_persuade_option_reaction_on_consequence));
      starter.AddDialogLine("hero_courtship_end_conversation", "hero_courtship_end_conversation", "close_window", "{=Mk9k8Sec}As always, it is a delight to speak to you.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.courtship_conversation_leave_on_consequence));
      starter.AddDialogLine("hero_courtship_final_barter", "hero_courtship_final_barter", "hero_courtship_final_barter_setup", "{=0UPds9x3}Very well, then...", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("hero_courtship_final_barter_setup", "hero_courtship_final_barter_setup", "hero_courtship_final_barter_conclusion", "{=qqzJTfo0}Barter line goes here.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_finalize_marriage_barter_consequence));
      starter.AddDialogLine("hero_courtship_final_barter_setup_2", "hero_courtship_final_barter_conclusion", "close_window", "{=FGVzQUao}Congratulations, and may the Heavens bless you.", new ConversationSentence.OnConditionDelegate(this.conversation_marriage_barter_successful_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_marriage_barter_successful_on_consequence));
      starter.AddDialogLine("hero_courtship_final_barter_setup_3", "hero_courtship_final_barter_conclusion", "close_window", "{=iunPaMFv}I guess we should put this aside, for now. But perhaps we can speak again at a later date.", (ConversationSentence.OnConditionDelegate) (() => !this.conversation_marriage_barter_successful_on_condition()), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("lord_propose_marriage_conv_general_proposal", "lord_talk_speak_diplomacy_2", "lord_propose_marriage_to_clan_leader", "{=v9tQv4eN}I would like to propose an alliance between our families through marriage.", new ConversationSentence.OnConditionDelegate(this.conversation_discuss_marriage_alliance_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_find_player_relatives_eligible_for_marriage_on_consequence), 120);
      starter.AddDialogLine("lord_propose_marriage_conv_general_proposal_response", "lord_propose_marriage_to_clan_leader", "lord_propose_marriage_to_clan_leader_options", "{=MhPAHpND}And whose hand are you offering?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("lord_propose_marriage_conv_general_proposal_2_1", "lord_propose_marriage_to_clan_leader_options", "lord_propose_marriage_to_clan_leader_response", "{=N1Ue4Blt}My own hand.", new ConversationSentence.OnConditionDelegate(this.conversation_player_eligible_for_marriage_with_hero_rltv_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_player_nominates_self_for_marriage_on_consequence), 120);
      starter.AddRepeatablePlayerLine("lord_propose_marriage_conv_general_proposal_2", "lord_propose_marriage_to_clan_leader_options", "lord_propose_marriage_to_clan_leader_response", "{=QGj8zQIc}The hand of {MARRIAGE_CANDIDATE.NAME}.", "I am thinking of a different person.", "lord_propose_marriage_to_clan_leader", new ConversationSentence.OnConditionDelegate(this.conversation_player_relative_eligible_for_marriage_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_player_nominates_marriage_relative_on_consequence));
      starter.AddPlayerLine("lord_propose_marriage_conv_general_proposal_3", "lord_propose_marriage_to_clan_leader_options", "lord_pretalk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, 120);
      starter.AddDialogLine("lord_propose_marriage_to_clan_leader_response", "lord_propose_marriage_to_clan_leader_response", "lord_propose_marriage_to_clan_leader_response_self", "{=DdtrRYEM}Well yes. I was looking for a suitable match.", new ConversationSentence.OnConditionDelegate(this.conversation_propose_clan_leader_for_player_nomination_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("lord_propose_marriage_to_clan_leader_response_yes", "lord_propose_marriage_to_clan_leader_response_self", "lord_start_courtship_response", "{=bx4MiPqN}Yes. I would be honored to be considered.", new ConversationSentence.OnConditionDelegate(this.conversation_player_opens_courtship_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_player_opens_courtship_on_consequence));
      starter.AddPlayerLine("lord_propose_marriage_to_clan_leader_response_plyr_rltv_yes", "lord_propose_marriage_to_clan_leader_response_self", "lord_propose_marriage_to_clan_leader_confirm", "{=ziA4catk}Very good.", new ConversationSentence.OnConditionDelegate(this.conversation_player_rltv_agrees_on_courtship_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_player_agrees_on_courtship_on_consequence));
      starter.AddPlayerLine("lord_propose_marriage_to_clan_leader_response_no", "lord_propose_marriage_to_clan_leader_response_self", "lord_pretalk", "{=Zw95lDI3}Hmm.. That might not work out.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("lord_propose_marriage_to_clan_leader_response_2", "lord_propose_marriage_to_clan_leader_response", "lord_propose_marriage_to_clan_leader_response_other", "{=!}{ARRANGE_MARRIAGE_LINE}", new ConversationSentence.OnConditionDelegate(this.conversation_propose_spouse_for_player_nomination_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("lord_propose_marriage_to_clan_leader_response_plyr_yes", "lord_propose_marriage_to_clan_leader_response_other", "lord_propose_marriage_to_clan_leader_confirm", "{=ziA4catk}Very good.", new ConversationSentence.OnConditionDelegate(this.conversation_player_rltv_agrees_on_courtship_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_player_agrees_on_courtship_on_consequence));
      starter.AddPlayerLine("lord_propose_marriage_to_clan_leader_response_plyr_no", "lord_propose_marriage_to_clan_leader_response_other", "lord_pretalk", "{=Zw95lDI3}Hmm.. That might not work out.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("lord_propose_marriage_to_clan_leader_response_negative_plyr_response", "lord_propose_marriage_to_clan_leader_response", "lord_pretalk", "{=Zw95lDI3}Hmm.. That might not work out.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("lord_propose_marriage_to_clan_leader_confirm", "lord_propose_marriage_to_clan_leader_confirm", "lord_start", "{=VJEM0IcV}Let's discuss the details then.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_lord_propose_marriage_to_clan_leader_confirm_consequences));
      starter.AddDialogLine("lord_start_courtship_response", "lord_start_courtship_response", "lord_start_courtship_response_player_offer", "{=!}{INITIAL_COURTSHIP_REACTION}", new ConversationSentence.OnConditionDelegate(this.conversation_courtship_initial_reaction_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("lord_start_courtship_response_decline", "lord_start_courtship_response", "lord_pretalk", "{=!}{COURTSHIP_DECLINE_REACTION}", new ConversationSentence.OnConditionDelegate(this.conversation_courtship_decline_reaction_to_player_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("lord_start_courtship_response_player_offer", "lord_start_courtship_response_player_offer", "lord_start_courtship_response_2", "{=cKtJBdPD}I wish to offer my hand in marriage.", new ConversationSentence.OnConditionDelegate(this.conversation_player_eligible_for_marriage_with_conversation_hero_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 120);
      starter.AddPlayerLine("lord_start_courtship_response_player_offer_2", "lord_start_courtship_response_player_offer", "lord_start_courtship_response_2", "{=gnXoIChw}Perhaps you and I...", new ConversationSentence.OnConditionDelegate(this.conversation_player_eligible_for_marriage_with_conversation_hero_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 120);
      starter.AddPlayerLine("lord_start_courtship_response_player_offer_nevermind", "lord_start_courtship_response_player_offer", "lord_pretalk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, 120);
      starter.AddDialogLine("lord_start_courtship_response_2", "lord_start_courtship_response_2", "lord_start_courtship_response_3", "{=!}{INITIAL_COURTSHIP_REACTION_TO_PLAYER}", new ConversationSentence.OnConditionDelegate(this.conversation_courtship_reaction_to_player_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("lord_start_courtship_response_3", "lord_start_courtship_response_3", "close_window", "{=YHZsHohq}We meet from time to time, as is the custom, to see if we are right for each other. I hope to see you again soon.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.courtship_conversation_leave_on_consequence));
      starter.AddDialogLine("lord_propose_marriage_conv_general_proposal_response_2", "lord_propose_general_proposal_response", "lord_propose_marriage_options", "{=k1hyviBO}Tell me, what is on your mind?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("lord_propose_marriage_conv_nevermind", "lord_propose_marriage_options", "lord_pretalk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("lord_propose_marriage_conv_nevermind_2", "lord_propose_marry_our_children_options", "lord_pretalk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("lord_propose_marriage_conv_nevermind_3", "lord_propose_marry_one_of_your_kind_options", "lord_pretalk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
    }

    private bool courtship_hero_not_clan_leader_on_condition()
    {
      Hero leader = Hero.OneToOneConversationHero.Clan.Leader;
      if (leader == Hero.OneToOneConversationHero)
        return false;
      StringHelpers.SetCharacterProperties("CLAN_LEADER", leader.CharacterObject);
      return true;
    }

    private void courtship_conversation_leave_on_consequence()
    {
      if (PlayerEncounter.Current == null)
        return;
      PlayerEncounter.LeaveEncounter = true;
    }

    private void conversation_finalize_marriage_barter_consequence()
    {
      Hero heroBeingProposedTo = Hero.OneToOneConversationHero;
      foreach (Hero lord in (List<Hero>) Hero.OneToOneConversationHero.Clan.Lords)
      {
        if (Romance.GetRomanticLevel(Hero.MainHero, lord) == Romance.RomanceLevelEnum.CoupleAgreedOnMarriage)
        {
          heroBeingProposedTo = lord;
          break;
        }
      }
      MarriageBarterable marriageBarterable = new MarriageBarterable(Hero.MainHero, PartyBase.MainParty, heroBeingProposedTo, Hero.MainHero);
      BarterManager.Instance.StartBarterOffer(Hero.MainHero, Hero.OneToOneConversationHero, PartyBase.MainParty, Hero.OneToOneConversationHero.PartyBelongedTo?.Party, InitContext: (BarterManager.BarterContextInitializer) ((barterable, _args, obj) => BarterManager.Instance.InitializeMarriageBarterContext(barterable, _args, (object) new Tuple<Hero, Hero>(heroBeingProposedTo, Hero.MainHero))), persuasionCostReduction: (int) Romance.GetRomanticState(Hero.MainHero, heroBeingProposedTo).ScoreFromPersuasion, defaultBarterables: (IEnumerable<Barterable>) new Barterable[1]
      {
        (Barterable) marriageBarterable
      });
      if (PlayerEncounter.Current == null)
        return;
      PlayerEncounter.LeaveEncounter = true;
    }

    private void DailyTick()
    {
      foreach (Romance.RomanticState romanticState in Romance.RomanticStateList.ToList<Romance.RomanticState>())
      {
        if (romanticState.Person1.IsDead || romanticState.Person2.IsDead)
          Romance.RomanticStateList.Remove(romanticState);
      }
    }

    private IEnumerable<RomanceCampaignBehavior.RomanceReservationDescription> GetRomanceReservations(
      Hero wooed,
      Hero wooer)
    {
      List<RomanceCampaignBehavior.RomanceReservationDescription> romanceReservations = new List<RomanceCampaignBehavior.RomanceReservationDescription>();
      int num = wooed.GetTraitLevel(DefaultTraits.Honor) + wooed.GetTraitLevel(DefaultTraits.Mercy) > 0 ? 1 : 0;
      bool flag1 = wooed.GetTraitLevel(DefaultTraits.Honor) < 1 && wooed.GetTraitLevel(DefaultTraits.Valor) < 1 && wooed.GetTraitLevel(DefaultTraits.Calculating) < 1;
      bool flag2 = wooed.GetTraitLevel(DefaultTraits.Calculating) - wooed.GetTraitLevel(DefaultTraits.Mercy) >= 0;
      bool flag3 = wooed.GetTraitLevel(DefaultTraits.Valor) - wooed.GetTraitLevel(DefaultTraits.Calculating) > 0 && wooed.GetTraitLevel(DefaultTraits.Mercy) <= 0;
      if (num != 0)
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.CompatibilityINeedSomeoneUpright);
      else if (flag3 && wooed.IsFemale)
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.CompatibiliyINeedSomeoneDangerous);
      else
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.CompatibilityNeedSomethingInCommon);
      int attractionValuePercentage = Campaign.Current.Models.RomanceModel.GetAttractionValuePercentage(Hero.OneToOneConversationHero, Hero.MainHero);
      if (attractionValuePercentage > 70)
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.AttractionIAmDrawnToYou);
      else if (attractionValuePercentage > 40)
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.AttractionYoureGoodEnough);
      else
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.AttractionYoureNotMyType);
      List<Settlement> list = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (x => x.OwnerClan == wooer.Clan)).ToList<Settlement>();
      if (flag2 && wooer.IsFemale && list.Count < 1)
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.PropertyHowCanIMarryAnAdventuress);
      else if (flag2 && list.Count < 3)
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.PropertyIWantRealWealth);
      else if (list.Count < 1)
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.PropertyWeNeedToBeComfortable);
      else
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.PropertyYouSeemRichEnough);
      float relationshipWithPlayer = Hero.OneToOneConversationHero.GetUnmodifiedClanLeaderRelationshipWithPlayer();
      if ((double) relationshipWithPlayer < -10.0)
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.FamilyApprovalHowCanYouBeEnemiesWithOurFamily);
      else if (!flag1 && (double) relationshipWithPlayer < 10.0)
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.FamilyApprovalItWouldBeBestToBefriendOurFamily);
      else if (flag1 && (double) relationshipWithPlayer < 10.0)
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.FamilyApprovalYouNeedToBeFriendsWithOurFamily);
      else
        romanceReservations.Add(RomanceCampaignBehavior.RomanceReservationDescription.FamilyApprovalIAmGladYouAreFriendsWithOurFamily);
      return (IEnumerable<RomanceCampaignBehavior.RomanceReservationDescription>) romanceReservations;
    }

    private List<PersuasionTask> GetPersuasionTasksForCourtshipStage1(Hero wooed, Hero wooer)
    {
      StringHelpers.SetCharacterProperties("PLAYER", Hero.MainHero.CharacterObject);
      List<PersuasionTask> forCourtshipStage1 = new List<PersuasionTask>();
      PersuasionTask persuasionTask1 = new PersuasionTask(0);
      forCourtshipStage1.Add(persuasionTask1);
      persuasionTask1.FinalFailLine = new TextObject("{=dY2PzpIV}I'm not sure how much we have in common..");
      persuasionTask1.TryLaterLine = new TextObject("{=PoDVgQaz}Well, it would take a bit long to discuss this.");
      persuasionTask1.SpokenLine = Campaign.Current.ConversationManager.FindMatchingTextOrNull("str_courtship_travel_task", CharacterObject.OneToOneConversationCharacter);
      Tuple<TraitObject, int>[] traitCorrelations1 = this.GetTraitCorrelations(1, -1, calculating: 1);
      PersuasionOptionArgs option1 = new PersuasionOptionArgs(DefaultSkills.Leadership, DefaultTraits.Valor, TraitEffect.Positive, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations1), false, new TextObject("{=YNBm3LkC}I feel lucky to live in a time where a valiant warrior can make a name for {?PLAYER.GENDER}herself{?}himself{\\?}."), traitCorrelations1, canMoveToTheNextReservation: true);
      persuasionTask1.AddOptionToTask(option1);
      Tuple<TraitObject, int>[] traitCorrelations2 = this.GetTraitCorrelations(1, -1, calculating: 1);
      PersuasionOptionArgs option2 = new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Valor, TraitEffect.Positive, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations2), false, new TextObject("{=rtqD9cnu}Yeah, it's a rough world, but there are lots of opportunities to be seized right now if you're not afraid to get your hands a bit dirty."), traitCorrelations2, canMoveToTheNextReservation: true);
      persuasionTask1.AddOptionToTask(option2);
      Tuple<TraitObject, int>[] traitCorrelations3 = this.GetTraitCorrelations(mercy: 1, honor: 1, calculating: -1);
      PersuasionOptionArgs option3 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Mercy, TraitEffect.Positive, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations3), false, new TextObject("{=rfyalLyY}What can I say? It's a beautiful world, but filled with so much suffering."), traitCorrelations3, canMoveToTheNextReservation: true);
      persuasionTask1.AddOptionToTask(option3);
      Tuple<TraitObject, int>[] traitCorrelations4 = this.GetTraitCorrelations(-1, honor: -1, generosity: -1);
      PersuasionOptionArgs option4 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Negative, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations4), false, new TextObject("{=ja5bAOMr}The world's a dungheap, basically. The sooner I earn enough to retire, the better."), traitCorrelations4, canMoveToTheNextReservation: true);
      persuasionTask1.AddOptionToTask(option4);
      PersuasionTask persuasionTask2 = new PersuasionTask(1);
      forCourtshipStage1.Add(persuasionTask2);
      persuasionTask2.SpokenLine = new TextObject("{=5Vk6I1sf}Between your followers, your rivals and your enemies, you must have met a lot of interesting people...");
      persuasionTask2.FinalFailLine = new TextObject("{=lDJUL4lZ}I think we maybe see the world a bit differently.");
      persuasionTask2.TryLaterLine = new TextObject("{=ZmxbIXsp}I am sorry you feel that way. We can speak later.");
      Tuple<TraitObject, int>[] traitCorrelations5 = this.GetTraitCorrelations(1, honor: 1, generosity: 2);
      PersuasionOptionArgs option5 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations5), false, new TextObject("{=8BnWa83o}I'm just honored to have fought alongside comrades who thought nothing of shedding their blood to keep me alive."), traitCorrelations5, canMoveToTheNextReservation: true);
      persuasionTask2.AddOptionToTask(option5);
      Tuple<TraitObject, int>[] traitCorrelations6 = this.GetTraitCorrelations(honor: -1, calculating: 1);
      PersuasionOptionArgs option6 = new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Calculating, TraitEffect.Positive, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations6), false, new TextObject("{=QHG6LU1g}Ah yes, I've seen cruelty, degradation and degeneracy like you wouldn't believe. Fascinating stuff, all of it."), traitCorrelations6, canMoveToTheNextReservation: true);
      persuasionTask2.AddOptionToTask(option6);
      Tuple<TraitObject, int>[] traitCorrelations7 = this.GetTraitCorrelations(mercy: 2);
      PersuasionOptionArgs option7 = new PersuasionOptionArgs(DefaultSkills.Leadership, DefaultTraits.Mercy, TraitEffect.Positive, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations7), false, new TextObject("{=bwWdGLDv}I have seen great good and great evil, but I can only hope the good outweights the evil in most people's hearts."), traitCorrelations7, canMoveToTheNextReservation: true);
      persuasionTask2.AddOptionToTask(option7);
      Tuple<TraitObject, int>[] traitCorrelations8 = this.GetTraitCorrelations(-1, honor: -1, generosity: -1);
      PersuasionOptionArgs option8 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Negative, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations8), false, new TextObject("{=3skTM1DC}Most people would put a knife in your back for a few coppers. Have a few friends and keep them close, I guess."), traitCorrelations8, canMoveToTheNextReservation: true);
      persuasionTask2.AddOptionToTask(option8);
      PersuasionTask persuasionTask3 = new PersuasionTask(2);
      forCourtshipStage1.Add(persuasionTask3);
      persuasionTask3.SpokenLine = Campaign.Current.ConversationManager.FindMatchingTextOrNull("str_courtship_aspirations_task", CharacterObject.OneToOneConversationCharacter);
      persuasionTask3.ImmediateFailLine = new TextObject("{=8hEVO9hw}Hmm. Perhaps you and I have different priorities in life.");
      persuasionTask3.FinalFailLine = new TextObject("{=HAtHptbV}In the end, I don't think we have that much in common.");
      persuasionTask3.TryLaterLine = new TextObject("{=ZmxbIXsp}I am sorry you feel that way. We can speak later.");
      Tuple<TraitObject, int>[] traitCorrelations9 = this.GetTraitCorrelations(mercy: 2, honor: 1);
      PersuasionOptionArgs option9 = new PersuasionOptionArgs(DefaultSkills.Leadership, DefaultTraits.Mercy, TraitEffect.Positive, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations9), false, new TextObject("{=6kjacaiB}I hope I can bring peace to the land, and justice, and alleviate people's suffering."), traitCorrelations9, canMoveToTheNextReservation: true);
      persuasionTask3.AddOptionToTask(option9);
      Tuple<TraitObject, int>[] traitCorrelations10 = this.GetTraitCorrelations(1, 1, generosity: 2);
      PersuasionOptionArgs option10 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations10), false, new TextObject("{=rrqCZa0H}I'll make sure those who stuck their necks out for me, who sweated and bled for me, get their due."), traitCorrelations10, canMoveToTheNextReservation: true);
      persuasionTask3.AddOptionToTask(option10);
      Tuple<TraitObject, int>[] traitCorrelations11 = this.GetTraitCorrelations(calculating: 2);
      PersuasionOptionArgs option11 = new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Calculating, TraitEffect.Positive, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations11), false, new TextObject("{=ggKa4Bd8}Hmm... First thing to do after taking power is to work on your plan to remain in power."), traitCorrelations11, canMoveToTheNextReservation: true);
      persuasionTask3.AddOptionToTask(option11);
      Tuple<TraitObject, int>[] traitCorrelations12 = this.GetTraitCorrelations(mercy: -2, generosity: -1, calculating: 1);
      PersuasionOptionArgs option12 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, Campaign.Current.Models.PersuasionModel.GetArgumentStrengthBasedOnTargetTraits(CharacterObject.OneToOneConversationCharacter, traitCorrelations12), false, new TextObject("{=6L1b1nJa}Oh I have a long list of scores to settle. You can be sure of that."), traitCorrelations12, canMoveToTheNextReservation: true);
      persuasionTask3.AddOptionToTask(option12);
      persuasionTask2.FinalFailLine = new TextObject("{=Ns315pxY}Perhaps we are not meant for each other.");
      persuasionTask2.TryLaterLine = new TextObject("{=PoDVgQaz}Well, it would take a bit long to discuss this.");
      return forCourtshipStage1;
    }

    private Tuple<TraitObject, int>[] GetTraitCorrelations(
      int valor = 0,
      int mercy = 0,
      int honor = 0,
      int generosity = 0,
      int calculating = 0)
    {
      return new Tuple<TraitObject, int>[5]
      {
        new Tuple<TraitObject, int>(DefaultTraits.Valor, valor),
        new Tuple<TraitObject, int>(DefaultTraits.Mercy, mercy),
        new Tuple<TraitObject, int>(DefaultTraits.Honor, honor),
        new Tuple<TraitObject, int>(DefaultTraits.Generosity, generosity),
        new Tuple<TraitObject, int>(DefaultTraits.Calculating, calculating)
      };
    }

    private List<PersuasionTask> GetPersuasionTasksForCourtshipStage2(Hero wooed, Hero wooer)
    {
      StringHelpers.SetCharacterProperties("PLAYER", Hero.MainHero.CharacterObject);
      List<PersuasionTask> forCourtshipStage2 = new List<PersuasionTask>();
      IEnumerable<RomanceCampaignBehavior.RomanceReservationDescription> romanceReservations = this.GetRomanceReservations(wooed, wooer);
      bool flag = romanceReservations.Any<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.AttractionIAmDrawnToYou));
      List<RomanceCampaignBehavior.RomanceReservationDescription> list1 = romanceReservations.Where<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.CompatibiliyINeedSomeoneDangerous || x == RomanceCampaignBehavior.RomanceReservationDescription.CompatibilityNeedSomethingInCommon || x == RomanceCampaignBehavior.RomanceReservationDescription.CompatibilityINeedSomeoneUpright || x == RomanceCampaignBehavior.RomanceReservationDescription.CompatibilityStrongPoliticalBeliefs)).ToList<RomanceCampaignBehavior.RomanceReservationDescription>();
      if (list1.Count > 0)
      {
        int num = (int) list1[0];
        PersuasionTask persuasionTask = new PersuasionTask(3);
        forCourtshipStage2.Add(persuasionTask);
        persuasionTask.SpokenLine = new TextObject("{=rtP6vnmj}I'm not sure we're compatible.");
        persuasionTask.FinalFailLine = new TextObject("{=bBTHy6f9}I just don't think that we would be happy together.");
        persuasionTask.TryLaterLine = new TextObject("{=o9ouu97M}I will endeavor to be worthy of your affections.");
        PersuasionArgumentStrength argumentStrength = PersuasionArgumentStrength.Normal;
        if (num == 2)
        {
          persuasionTask.SpokenLine = !Hero.OneToOneConversationHero.IsFemale ? new TextObject("{=3cw5pRFM}I had not thought that I might marry a shieldmaiden. But it is intriguing. Tell me, have you killed men in battle?") : new TextObject("{=EkkNQb5N}I like a warrior who strikes fear in the hearts of his enemies. Are you that kind of man?");
          PersuasionOptionArgs option1 = new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Valor, TraitEffect.Positive, argumentStrength, false, new TextObject("{=FEmiPPbO}Perhaps you've heard the stories about me, then. They're all true."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option1);
          PersuasionOptionArgs option2 = new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Calculating, TraitEffect.Positive, argumentStrength + 1, false, new TextObject("{=Oe5Tf7OZ}My foes may not fear my sword, but they should fear my cunning."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option2);
          if (flag)
          {
            PersuasionOptionArgs option3 = new PersuasionOptionArgs(DefaultSkills.Leadership, DefaultTraits.Calculating, TraitEffect.Negative, argumentStrength - 1, true, new TextObject("{=zWTNOfHm}I want you and if you want me, that should be enough!"), canMoveToTheNextReservation: true);
            persuasionTask.AddOptionToTask(option3);
          }
          PersuasionOptionArgs option4 = new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Generosity, TraitEffect.Positive, argumentStrength + 1, false, new TextObject("{=8a13MGzr}All I can say is that I try to repay good with good, and evil with evil."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option4);
        }
        if (num == 0)
        {
          persuasionTask.SpokenLine = new TextObject("{=lay7hKUK}I insist that my {?PLAYER.GENDER}wife{?}husband{\\?} conduct {?PLAYER.GENDER}herself{?}himself{\\?} according to the highest standards.");
          PersuasionOptionArgs option5 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=bOQEc7jA}I am a {?PLAYER.GENDER}woman{?}man{\\?} of my word. I hope that it is sufficient."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option5);
          PersuasionOptionArgs option6 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Mercy, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=faa9sFfE}I do what I can to alleviate suffering in this world. I hope that is enough."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option6);
          if (flag)
          {
            PersuasionOptionArgs option7 = new PersuasionOptionArgs(DefaultSkills.Leadership, DefaultTraits.Calculating, TraitEffect.Negative, argumentStrength - 1, true, new TextObject("{=zWTNOfHm}I want you and if you want me, that should be enough!"), canMoveToTheNextReservation: true);
            persuasionTask.AddOptionToTask(option7);
          }
          PersuasionOptionArgs option8 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, PersuasionArgumentStrength.Hard, false, new TextObject("{=b2ePtImV}Those who are loyal to me, I am loyal to them."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option8);
        }
        if (num == 1)
        {
          persuasionTask.SpokenLine = new TextObject("{=ZsGqHBlR}I need a partner whom I can trust...");
          PersuasionOptionArgs option9 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, argumentStrength - 1, false, new TextObject("{=LTUEFTaF}I hope that I am known as someone who understands the value of loyalty."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option9);
          PersuasionOptionArgs option10 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, argumentStrength, false, new TextObject("{=9qoLQva5}Whatever oath I give to you, you may be sure that I will keep it."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option10);
          if (flag)
          {
            PersuasionOptionArgs option11 = new PersuasionOptionArgs(DefaultSkills.Leadership, DefaultTraits.Calculating, TraitEffect.Negative, argumentStrength - 1, true, new TextObject("{=zWTNOfHm}I want you and if you want me, that should be enough!"), canMoveToTheNextReservation: true);
            persuasionTask.AddOptionToTask(option11);
          }
          PersuasionOptionArgs option12 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, argumentStrength, false, new TextObject("{=b2ePtImV}Those who are loyal to me, I am loyal to them."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option12);
        }
        if (num == 3)
        {
          if (wooed.GetTraitLevel(DefaultTraits.Egalitarian) > 0)
            persuasionTask.SpokenLine = new TextObject("{=s3Fna6wY}I've always seen myself as someone who sides with the weak of this realm. I don't want to find myself at odds with you.");
          if (wooed.GetTraitLevel(DefaultTraits.Oligarchic) > 0)
            persuasionTask.SpokenLine = new TextObject("{=DR2aK4aQ}I respect our ancient laws and traditions. I don't want to find myself at odds with you.");
          if (wooed.GetTraitLevel(DefaultTraits.Authoritarian) > 0)
            persuasionTask.SpokenLine = new TextObject("{=c2Yrci3B}I believe that we need a strong ruler in this realm. I don't want to find myself at odds with you.");
          PersuasionOptionArgs option13 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Mercy, TraitEffect.Positive, argumentStrength, false, new TextObject("{=pVPkpP20}We may differ on politics, but I hope you'll think me a man with a good heart."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option13);
          if (flag)
          {
            PersuasionOptionArgs option14 = new PersuasionOptionArgs(DefaultSkills.Leadership, DefaultTraits.Calculating, TraitEffect.Negative, argumentStrength - 1, true, new TextObject("{=yghMrFdT}Put petty politics aside and trust your heart!"), canMoveToTheNextReservation: true);
            persuasionTask.AddOptionToTask(option14);
          }
          PersuasionOptionArgs option15 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, argumentStrength, false, new TextObject("{=Tj8bGW4b}If a man and a woman respect each other, politics should not divide them."), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option15);
        }
      }
      if (romanceReservations.Where<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.AttractionYoureNotMyType)).ToList<RomanceCampaignBehavior.RomanceReservationDescription>().Count > 0)
      {
        PersuasionTask persuasionTask = new PersuasionTask(4);
        forCourtshipStage2.Add(persuasionTask);
        persuasionTask.SpokenLine = new TextObject("{=cOyolp4F}I am just not... How can I say this? I am not attracted to you.");
        persuasionTask.FinalFailLine = new TextObject("{=LjiYq9cH}I am sorry. I am not sure that I could ever love you.");
        persuasionTask.TryLaterLine = new TextObject("{=E9s2bjqw}I can only hope that some day you could change your mind.");
        int num = 0;
        PersuasionOptionArgs option16 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, (PersuasionArgumentStrength) (num - Hero.OneToOneConversationHero.GetTraitLevel(DefaultTraits.Calculating)), false, new TextObject("{=hwjzKcUw}So what? This is supposed to be an alliance of our houses, not of our hearts."), canMoveToTheNextReservation: true);
        persuasionTask.AddOptionToTask(option16);
        PersuasionOptionArgs option17 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, (PersuasionArgumentStrength) (num - Hero.OneToOneConversationHero.GetTraitLevel(DefaultTraits.Generosity) - 1), true, new TextObject("{=m3EkYCA6}Perhaps if you see how much I love you, you could come to love me over time."), canMoveToTheNextReservation: true);
        persuasionTask.AddOptionToTask(option17);
        PersuasionOptionArgs option18 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, (PersuasionArgumentStrength) (num - Hero.OneToOneConversationHero.GetTraitLevel(DefaultTraits.Honor)), false, new TextObject("{=LN7SGvnS}Love is but an infatuation. Judge me by my character."), canMoveToTheNextReservation: true);
        persuasionTask.AddOptionToTask(option18);
      }
      List<RomanceCampaignBehavior.RomanceReservationDescription> list2 = romanceReservations.Where<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.PropertyHowCanIMarryAnAdventuress || x == RomanceCampaignBehavior.RomanceReservationDescription.PropertyIWantRealWealth || x == RomanceCampaignBehavior.RomanceReservationDescription.PropertyWeNeedToBeComfortable)).ToList<RomanceCampaignBehavior.RomanceReservationDescription>();
      if (list2.Count > 0)
      {
        RomanceCampaignBehavior.RomanceReservationDescription reservationDescription = list2[0];
        PersuasionTask persuasionTask = new PersuasionTask(6);
        forCourtshipStage2.Add(persuasionTask);
        persuasionTask.SpokenLine = new TextObject("{=beK0AZ2y}I am concerned that you do not have the means to support a family.");
        persuasionTask.FinalFailLine = new TextObject("{=z6vJlozm}I am sorry. I don't believe you have the means to support a family.)");
        persuasionTask.TryLaterLine = new TextObject("{=vaISh0sx}I will go off to make something of myself, then, and shall return to you.");
        PersuasionArgumentStrength argumentStrength = PersuasionArgumentStrength.Normal;
        switch (reservationDescription)
        {
          case RomanceCampaignBehavior.RomanceReservationDescription.PropertyIWantRealWealth:
            persuasionTask.SpokenLine = new TextObject("{=pbqjBGk0}I will be honest. I have plans, and I expect the person I marry to have the income to support them.");
            argumentStrength = PersuasionArgumentStrength.Hard;
            break;
          case RomanceCampaignBehavior.RomanceReservationDescription.PropertyHowCanIMarryAnAdventuress:
            persuasionTask.SpokenLine = new TextObject("{=ZNfWXliN}I will be honest, my lady. You are but a common adventurer, and by marrying you I give up a chance to forge an alliance with a family of real influence and power.");
            argumentStrength = PersuasionArgumentStrength.Normal;
            break;
        }
        PersuasionOptionArgs option19 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, argumentStrength, false, new TextObject("{=erKuPRWA}I have a plan to rise in this world. I'm still only a little way up the ladder."), canMoveToTheNextReservation: true);
        persuasionTask.AddOptionToTask(option19);
        PersuasionOptionArgs option20 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Valor, TraitEffect.Positive, argumentStrength, false, reservationDescription == RomanceCampaignBehavior.RomanceReservationDescription.PropertyHowCanIMarryAnAdventuress ? new TextObject("{=a2dJDUoL}My sword is my dowry. The gold and land will follow.") : new TextObject("{=DLc6NfiV}I shall win you the riches you deserve, or die in the attempt."), canMoveToTheNextReservation: true);
        persuasionTask.AddOptionToTask(option20);
        if (flag)
        {
          PersuasionOptionArgs option21 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, argumentStrength - Hero.OneToOneConversationHero.GetTraitLevel(DefaultTraits.Calculating), true, new TextObject("{=6LfkfJiJ}Can't your passion for me overcome such base feelings?"), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option21);
        }
      }
      List<RomanceCampaignBehavior.RomanceReservationDescription> list3 = romanceReservations.Where<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.FamilyApprovalHowCanYouBeEnemiesWithOurFamily || x == RomanceCampaignBehavior.RomanceReservationDescription.FamilyApprovalItWouldBeBestToBefriendOurFamily || x == RomanceCampaignBehavior.RomanceReservationDescription.FamilyApprovalYouNeedToBeFriendsWithOurFamily)).ToList<RomanceCampaignBehavior.RomanceReservationDescription>();
      if (list3.Count > 0 && forCourtshipStage2.Count < 3)
      {
        int num = (int) list3[0];
        PersuasionTask persuasionTask = new PersuasionTask(5);
        forCourtshipStage2.Add(persuasionTask);
        persuasionTask.SpokenLine = new TextObject("{=fAdwIqbg}I think you should try to win my family's approval.");
        persuasionTask.FinalFailLine = new TextObject("{=Xa7PsIao}I am sorry. I will not marry without my family's blessing.");
        persuasionTask.TryLaterLine = new TextObject("{=44tA6fNa}I will try to earn your family's trust, then.");
        PersuasionArgumentStrength argumentStrength = PersuasionArgumentStrength.Normal;
        PersuasionOptionArgs option22 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, argumentStrength, false, new TextObject("{=563qB3ar}I can only hope that if they come to know my loyalty, they will accept me."), canMoveToTheNextReservation: true);
        persuasionTask.AddOptionToTask(option22);
        if (flag)
        {
          PersuasionOptionArgs option23 = new PersuasionOptionArgs(DefaultSkills.Leadership, DefaultTraits.Valor, TraitEffect.Positive, argumentStrength, true, new TextObject("{=LEsuGM8a}Let no one - not even your family - come between us!"), canMoveToTheNextReservation: true);
          persuasionTask.AddOptionToTask(option23);
        }
        PersuasionOptionArgs option24 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, argumentStrength, false, new TextObject("{=ZbvbsA4i}I can only hope that if they come to know my virtues, they will accept me."), canMoveToTheNextReservation: true);
        persuasionTask.AddOptionToTask(option24);
      }
      else if (list3.Count == 0 && forCourtshipStage2.Count < 3)
      {
        PersuasionTask persuasionTask = new PersuasionTask(7);
        forCourtshipStage2.Add(persuasionTask);
        persuasionTask.SpokenLine = new TextObject("{=HFkXIyCV}My family likes you...");
        persuasionTask.FinalFailLine = new TextObject("{=3IBVEOwh}I still think we may not be ready yet.");
        persuasionTask.TryLaterLine = new TextObject("{=44tA6fNa}I will try to earn your family's trust, then.");
        PersuasionArgumentStrength argumentStrength = PersuasionArgumentStrength.ExtremelyEasy;
        PersuasionOptionArgs option25 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Generosity, TraitEffect.Positive, argumentStrength, false, new TextObject("{=2LrFafpB}And I will respect and cherish your family."), canMoveToTheNextReservation: true);
        persuasionTask.AddOptionToTask(option25);
        PersuasionOptionArgs option26 = new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, argumentStrength, false, new TextObject("{=BaifRgT5}That's useful to know for when it comes time to discuss the exchange of dowries."), canMoveToTheNextReservation: true);
        persuasionTask.AddOptionToTask(option26);
      }
      return forCourtshipStage2;
    }

    private bool conversation_courtship_initial_reaction_on_condition()
    {
      IEnumerable<RomanceCampaignBehavior.RomanceReservationDescription> romanceReservations = this.GetRomanceReservations(Hero.OneToOneConversationHero, Hero.MainHero);
      if (Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) == Romance.RomanceLevelEnum.FailedInPracticalities || Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) == Romance.RomanceLevelEnum.FailedInCompatibility)
        return false;
      MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION", romanceReservations.Any<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.AttractionIAmDrawnToYou)) ? "{=WEkjz9tg}Ah! Yes... We are considering offers... Did you have someone in mind?" : "{=KdhnBhZ1}Yes, we are considering offers. These things are not rushed into.", false);
      return true;
    }

    private bool conversation_courtship_decline_reaction_to_player_on_condition()
    {
      if (Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) == Romance.RomanceLevelEnum.FailedInPracticalities)
      {
        MBTextManager.SetTextVariable("COURTSHIP_DECLINE_REACTION", "{=emLBsWj6}I am terribly sorry. It is practically not possible for us to be married.", false);
        return true;
      }
      if (Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) != Romance.RomanceLevelEnum.FailedInCompatibility)
        return false;
      MBTextManager.SetTextVariable("COURTSHIP_DECLINE_REACTION", "{=s7idfhBO}I am terribly sorry. We are not really compatible with each other.", false);
      return true;
    }

    private bool conversation_courtship_reaction_to_player_on_condition()
    {
      IEnumerable<RomanceCampaignBehavior.RomanceReservationDescription> romanceReservations = this.GetRomanceReservations(Hero.OneToOneConversationHero, Hero.MainHero);
      bool flag1 = Hero.OneToOneConversationHero.GetTraitLevel(DefaultTraits.Generosity) + Hero.OneToOneConversationHero.GetTraitLevel(DefaultTraits.Mercy) > 0;
      TraitObject persona = Hero.OneToOneConversationHero.CharacterObject.GetPersona();
      bool flag2 = ConversationTagHelper.UsesHighRegister(Hero.OneToOneConversationHero.CharacterObject);
      if (romanceReservations.Any<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.AttractionIAmDrawnToYou)))
      {
        if (persona == DefaultTraits.PersonaIronic & flag2)
          MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", "{=5ao0RdRT}Well, I do not deny that there is something about you to which I am drawn.", false);
        if (persona == DefaultTraits.PersonaIronic && !flag2)
          MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", "{=r77ZrSUJ}You're straightforward. I like that.", false);
        else if (persona == DefaultTraits.PersonaCurt)
          MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", Hero.MainHero.IsFemale ? "{=YXCGUSYd}Mm. Well, you'd make a very unusual match. But, well, I won't rule it out." : "{=iKYSgoZx}You're a handsome devil, I'll give you that.", false);
        else if (persona == DefaultTraits.PersonaEarnest)
          MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", "{=UCjFAPnk}I am flattered, {?PLAYER.GENDER}my lady{?}sir{\\?}.", false);
        else
          MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", "{=8PwNj5tR}Yes... Yes. We should, em, discuss this.", false);
      }
      else if (romanceReservations.Any<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.PropertyHowCanIMarryAnAdventuress)))
        MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", "{=YRN4RBeI}Very well, madame, but I would have you know.... I intend to marry someone of my own rank.", false);
      else if (!flag1 && romanceReservations.Any<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.PropertyIWantRealWealth || x == RomanceCampaignBehavior.RomanceReservationDescription.PropertyWeNeedToBeComfortable)))
        MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", "{=P407baEa}I think you would need to rise considerably in the world before I could consider such a thing...", false);
      else if (flag1 && romanceReservations.Any<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.PropertyIWantRealWealth)))
        MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", "{=gS1noLvf}I do not know whether to find that charming or impertinent...", false);
      else if (romanceReservations.Any<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.AttractionYoureNotMyType)))
        MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", "{=ltXu3DbR}Em... Yes, well, I suppose I can consider your offer.", false);
      else if (romanceReservations.Any<RomanceCampaignBehavior.RomanceReservationDescription>((Func<RomanceCampaignBehavior.RomanceReservationDescription, bool>) (x => x == RomanceCampaignBehavior.RomanceReservationDescription.FamilyApprovalIAmGladYouAreFriendsWithOurFamily)))
        MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", "{=UQtXV3kf}Certainly, you have always been close to our family.", false);
      else
        MBTextManager.SetTextVariable("INITIAL_COURTSHIP_REACTION_TO_PLAYER", "{=VYmQmqIv}We are considering many offers. You may certainly add your name to the list.", false);
      return true;
    }

    private void conversation_fail_courtship_on_consequence()
    {
      if (Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) == Romance.RomanceLevelEnum.CourtshipStarted)
        ChangeRomanticStateAction.Apply(Hero.MainHero, Hero.OneToOneConversationHero, Romance.RomanceLevelEnum.FailedInCompatibility);
      else if (Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) == Romance.RomanceLevelEnum.CoupleDecidedThatTheyAreCompatible)
        ChangeRomanticStateAction.Apply(Hero.MainHero, Hero.OneToOneConversationHero, Romance.RomanceLevelEnum.FailedInPracticalities);
      if (PlayerEncounter.Current != null)
        PlayerEncounter.LeaveEncounter = true;
      this._allReservations = (List<PersuasionTask>) null;
      ConversationManager.EndPersuasion();
    }

    private void conversation_start_courtship_persuasion_pt1_on_consequence()
    {
      if (Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) == Romance.RomanceLevelEnum.MatchMadeByFamily)
        ChangeRomanticStateAction.Apply(Hero.MainHero, Hero.OneToOneConversationHero, Romance.RomanceLevelEnum.CourtshipStarted);
      Hero wooer = Hero.MainHero.MapFaction.Leader;
      if (Hero.MainHero.MapFaction == Hero.OneToOneConversationHero.MapFaction)
        wooer = Hero.MainHero;
      this._allReservations = this.GetPersuasionTasksForCourtshipStage1(Hero.OneToOneConversationHero, wooer);
      this._maximumScoreCap = (float) this._allReservations.Count * 1f;
      float initialProgress = 0.0f;
      foreach (PersuasionTask allReservation in this._allReservations)
      {
        foreach (PersuasionAttempt persuasionAttempt in this._previousRomancePersuasionAttempts)
        {
          if (persuasionAttempt.Matches(Hero.OneToOneConversationHero, allReservation.ReservationType))
          {
            switch (persuasionAttempt.Result)
            {
              case PersuasionOptionResult.CriticalFailure:
                initialProgress -= 2f;
                continue;
              case PersuasionOptionResult.Failure:
                initialProgress -= 0.0f;
                continue;
              case PersuasionOptionResult.Success:
                ++initialProgress;
                continue;
              case PersuasionOptionResult.CriticalSuccess:
                initialProgress += 2f;
                continue;
              default:
                continue;
            }
          }
        }
      }
      this.RemoveUnneededPersuasionAttempts();
      ConversationManager.StartPersuasion(this._maximumScoreCap, 1f, 0.0f, 2f, 2f, initialProgress);
    }

    private void conversation_courtship_stage_1_success_on_consequence()
    {
      Romance.GetRomanticState(Hero.MainHero, Hero.OneToOneConversationHero).ScoreFromPersuasion = ConversationManager.GetPersuasionProgress() - ConversationManager.GetPersuasionGoalValue();
      this._allReservations = (List<PersuasionTask>) null;
      ConversationManager.EndPersuasion();
      ChangeRomanticStateAction.Apply(Hero.MainHero, Hero.OneToOneConversationHero, Romance.RomanceLevelEnum.CoupleDecidedThatTheyAreCompatible);
    }

    private void conversation_courtship_stage_2_success_on_consequence()
    {
      Romance.GetRomanticState(Hero.MainHero, Hero.OneToOneConversationHero).ScoreFromPersuasion += ConversationManager.GetPersuasionProgress() - ConversationManager.GetPersuasionGoalValue();
      this._allReservations = (List<PersuasionTask>) null;
      ConversationManager.EndPersuasion();
      ChangeRomanticStateAction.Apply(Hero.MainHero, Hero.OneToOneConversationHero, Romance.RomanceLevelEnum.CoupleAgreedOnMarriage);
    }

    private void conversation_continue_courtship_stage_2_on_consequence()
    {
      Hero wooer = Hero.MainHero.MapFaction.Leader;
      if (Hero.MainHero.MapFaction == Hero.OneToOneConversationHero.MapFaction)
        wooer = Hero.MainHero;
      this._allReservations = this.GetPersuasionTasksForCourtshipStage2(Hero.OneToOneConversationHero, wooer);
      this._maximumScoreCap = (float) this._allReservations.Count * 1f;
      float initialProgress = 0.0f;
      foreach (PersuasionTask allReservation in this._allReservations)
      {
        foreach (PersuasionAttempt persuasionAttempt in this._previousRomancePersuasionAttempts)
        {
          if (persuasionAttempt.Matches(Hero.OneToOneConversationHero, allReservation.ReservationType))
          {
            switch (persuasionAttempt.Result)
            {
              case PersuasionOptionResult.CriticalFailure:
                initialProgress -= 2f;
                continue;
              case PersuasionOptionResult.Failure:
                initialProgress -= 0.0f;
                continue;
              case PersuasionOptionResult.Success:
                ++initialProgress;
                continue;
              case PersuasionOptionResult.CriticalSuccess:
                initialProgress += 2f;
                continue;
              default:
                continue;
            }
          }
        }
      }
      this.RemoveUnneededPersuasionAttempts();
      ConversationManager.StartPersuasion(this._maximumScoreCap, 1f, 0.0f, 2f, 2f, initialProgress);
    }

    private bool conversation_check_if_unmet_reservation_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask == this._allReservations[this._allReservations.Count - 1] && currentPersuasionTask.Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)) || ConversationManager.GetPersuasionProgressSatisfied())
        return false;
      MBTextManager.SetTextVariable("PERSUASION_TASK_LINE", currentPersuasionTask.SpokenLine, false);
      return true;
    }

    private bool conversation_lord_player_has_failed_in_courtship_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (!currentPersuasionTask.Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)) || ConversationManager.GetPersuasionProgressSatisfied())
        return false;
      MBTextManager.SetTextVariable("FAILED_PERSUASION_LINE", currentPersuasionTask.FinalFailLine, false);
      return true;
    }

    private bool conversation_courtship_persuasion_option_1_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 0)
        return false;
      TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
      text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(0)));
      text.SetTextVariable("PERSUASION_OPTION_LINE", currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(0).Line);
      MBTextManager.SetTextVariable("ROMANCE_PERSUADE_ATTEMPT_1", text, false);
      return true;
    }

    private bool conversation_courtship_persuasion_option_2_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 1)
        return false;
      TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
      text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(1)));
      text.SetTextVariable("PERSUASION_OPTION_LINE", currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(1).Line);
      MBTextManager.SetTextVariable("ROMANCE_PERSUADE_ATTEMPT_2", text, false);
      return true;
    }

    private bool conversation_courtship_persuasion_option_3_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 2)
        return false;
      TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
      text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(2)));
      text.SetTextVariable("PERSUASION_OPTION_LINE", currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(2).Line);
      MBTextManager.SetTextVariable("ROMANCE_PERSUADE_ATTEMPT_3", text, false);
      return true;
    }

    private bool conversation_courtship_persuasion_option_4_on_condition()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 3)
        return false;
      TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
      text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(3)));
      text.SetTextVariable("PERSUASION_OPTION_LINE", currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(3).Line);
      MBTextManager.SetTextVariable("ROMANCE_PERSUADE_ATTEMPT_4", text, false);
      return true;
    }

    private void conversation_romance_1_persuade_option_on_consequence()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 0)
        return;
      currentPersuasionTask.Options[0].BlockTheOption(true);
    }

    private void conversation_romance_2_persuade_option_on_consequence()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 1)
        return;
      currentPersuasionTask.Options[1].BlockTheOption(true);
    }

    private void conversation_romance_3_persuade_option_on_consequence()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 2)
        return;
      currentPersuasionTask.Options[2].BlockTheOption(true);
    }

    private void conversation_romance_4_persuade_option_on_consequence()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count <= 3)
        return;
      currentPersuasionTask.Options[3].BlockTheOption(true);
    }

    private bool RomancePersuasionOption1ClickableOnCondition1(out TextObject hintText)
    {
      hintText = TextObject.Empty;
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count > 0)
        return !currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(0).IsBlocked;
      hintText = new TextObject("{=9ACJsI6S}Blocked");
      return false;
    }

    private bool RomancePersuasionOption2ClickableOnCondition2(out TextObject hintText)
    {
      hintText = TextObject.Empty;
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count > 1)
        return !currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(1).IsBlocked;
      hintText = new TextObject("{=9ACJsI6S}Blocked");
      return false;
    }

    private bool RomancePersuasionOption3ClickableOnCondition3(out TextObject hintText)
    {
      hintText = TextObject.Empty;
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count > 2)
        return !currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(2).IsBlocked;
      hintText = new TextObject("{=9ACJsI6S}Blocked");
      return false;
    }

    private bool RomancePersuasionOption4ClickableOnCondition4(out TextObject hintText)
    {
      hintText = TextObject.Empty;
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      if (currentPersuasionTask.Options.Count > 3)
        return !currentPersuasionTask.Options.ElementAt<PersuasionOptionArgs>(3).IsBlocked;
      hintText = new TextObject("{=9ACJsI6S}Blocked");
      return false;
    }

    private PersuasionOptionArgs SetupCourtshipPersuasionOption1()
    {
      return this.GetCurrentPersuasionTask().Options.ElementAt<PersuasionOptionArgs>(0);
    }

    private PersuasionOptionArgs SetupCourtshipPersuasionOption2()
    {
      return this.GetCurrentPersuasionTask().Options.ElementAt<PersuasionOptionArgs>(1);
    }

    private PersuasionOptionArgs SetupCourtshipPersuasionOption3()
    {
      return this.GetCurrentPersuasionTask().Options.ElementAt<PersuasionOptionArgs>(2);
    }

    private PersuasionOptionArgs SetupCourtshipPersuasionOption4()
    {
      return this.GetCurrentPersuasionTask().Options.ElementAt<PersuasionOptionArgs>(3);
    }

    private bool conversation_player_eligible_for_marriage_with_conversation_hero_on_condition()
    {
      return Hero.MainHero.Spouse == null && Hero.OneToOneConversationHero != null && this.MarriageCourtshipPossibility(Hero.MainHero, Hero.OneToOneConversationHero);
    }

    private bool conversation_player_eligible_for_marriage_with_hero_rltv_on_condition()
    {
      return Hero.MainHero.Spouse == null && Hero.OneToOneConversationHero != null;
    }

    private void conversation_find_player_relatives_eligible_for_marriage_on_consequence()
    {
      ConversationSentence.SetObjectsToRepeatOver((IReadOnlyList<object>) this.FindPlayerRelativesEligibleForMarriage(Hero.OneToOneConversationHero.Clan).ToList<CharacterObject>());
    }

    private void conversation_player_nominates_self_for_marriage_on_consequence()
    {
      this._playerProposalHero = Hero.MainHero;
    }

    private void conversation_player_nominates_marriage_relative_on_consequence()
    {
      this._playerProposalHero = (ConversationSentence.SelectedRepeatObject as CharacterObject).HeroObject;
    }

    private bool conversation_player_relative_eligible_for_marriage_on_condition()
    {
      if (!(ConversationSentence.CurrentProcessedRepeatObject is CharacterObject processedRepeatObject))
        return false;
      StringHelpers.SetRepeatableCharacterProperties("MARRIAGE_CANDIDATE", processedRepeatObject);
      return true;
    }

    private bool conversation_propose_clan_leader_for_player_nomination_on_condition()
    {
      foreach (Hero person2 in (IEnumerable<Hero>) Hero.OneToOneConversationHero.Clan.Lords.OrderByDescending<Hero, float>((Func<Hero, float>) (x => x.Age)))
      {
        if (this.MarriageCourtshipPossibility(this._playerProposalHero, person2) && person2.CharacterObject == Hero.OneToOneConversationHero.CharacterObject)
        {
          this._proposedSpouseForPlayerRelative = person2;
          return true;
        }
      }
      return false;
    }

    private bool conversation_propose_spouse_for_player_nomination_on_condition()
    {
      foreach (Hero hero in (IEnumerable<Hero>) Hero.OneToOneConversationHero.Clan.Lords.OrderByDescending<Hero, float>((Func<Hero, float>) (x => x.Age)))
      {
        if (this.MarriageCourtshipPossibility(this._playerProposalHero, hero) && hero != Hero.OneToOneConversationHero)
        {
          this._proposedSpouseForPlayerRelative = hero;
          TextObject textObject = new TextObject("{=TjAQbTab}Well, yes, we are looking for a suitable marriage for { OTHER_CLAN_NOMINEE.LINK}.");
          hero.SetPropertiesToTextObject(textObject, "OTHER_CLAN_NOMINEE");
          MBTextManager.SetTextVariable("ARRANGE_MARRIAGE_LINE", textObject, false);
          hero.IsKnownToPlayer = true;
          return true;
        }
      }
      return false;
    }

    private bool conversation_player_rltv_agrees_on_courtship_on_condition()
    {
      Hero courtedHeroInOtherClan = Romance.GetCourtedHeroInOtherClan(this._playerProposalHero, this._proposedSpouseForPlayerRelative);
      return courtedHeroInOtherClan == null || courtedHeroInOtherClan == this._proposedSpouseForPlayerRelative;
    }

    private void conversation_player_agrees_on_courtship_on_consequence()
    {
      ChangeRomanticStateAction.Apply(this._playerProposalHero, this._proposedSpouseForPlayerRelative, Romance.RomanceLevelEnum.MatchMadeByFamily);
    }

    private void conversation_lord_propose_marriage_to_clan_leader_confirm_consequences()
    {
      BarterManager.Instance.StartBarterOffer(Hero.MainHero, Hero.OneToOneConversationHero, PartyBase.MainParty, Hero.OneToOneConversationHero.PartyBelongedTo?.Party, InitContext: (BarterManager.BarterContextInitializer) ((barterableObj, _args, obj) => BarterManager.Instance.InitializeMarriageBarterContext(barterableObj, _args, (object) new Tuple<Hero, Hero>(this._playerProposalHero, this._proposedSpouseForPlayerRelative))), defaultBarterables: (IEnumerable<Barterable>) new Barterable[1]
      {
        (Barterable) new MarriageBarterable(Hero.MainHero, PartyBase.MainParty, this._playerProposalHero, this._proposedSpouseForPlayerRelative)
      });
    }

    private bool conversation_romance_blocked_on_condition()
    {
      if (Hero.OneToOneConversationHero == null)
        return false;
      Romance.RomanceLevelEnum romanticLevel = Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero);
      if (this.MarriageCourtshipPossibility(Hero.MainHero, Hero.OneToOneConversationHero) || romanticLevel < Romance.RomanceLevelEnum.MatchMadeByFamily || romanticLevel >= Romance.RomanceLevelEnum.Marriage)
        return false;
      if (FactionManager.IsAtWarAgainstFaction(Hero.MainHero.MapFaction, Hero.OneToOneConversationHero.MapFaction))
      {
        MBTextManager.SetTextVariable("ROMANCE_BLOCKED_REASON", "{=wNxhmNOc}I am afraid I cannot entertain such a proposal so long as we are at war.", false);
        ChangeRomanticStateAction.Apply(Hero.MainHero, Hero.OneToOneConversationHero, Romance.RomanceLevelEnum.FailedInCompatibility);
      }
      else if (Hero.OneToOneConversationHero.Clan.Leader == Hero.OneToOneConversationHero)
      {
        MBTextManager.SetTextVariable("ROMANCE_BLOCKED_REASON", "{=1FcxAGWU}Ah, yes. I am afraid I can no longer entertain such a proposal. I am now the head of my family, and the factors that we must consider have changed. You would need to place your property under my control, and I do not think that you would accept that.", false);
        ChangeRomanticStateAction.Apply(Hero.MainHero, Hero.OneToOneConversationHero, Romance.RomanceLevelEnum.FailedInCompatibility);
      }
      else if (Hero.OneToOneConversationHero.PartyBelongedTo != null && Hero.OneToOneConversationHero.PartyBelongedTo.Army != null)
        MBTextManager.SetTextVariable("ROMANCE_BLOCKED_REASON", "{=9LwYa3Tv}Ah, yes. My efforts are currently focused on this campaign, so it's best we discuss your proposal at a later time.", false);
      else if (Hero.OneToOneConversationHero.PartyBelongedToAsPrisoner != null)
      {
        MBTextManager.SetTextVariable("ROMANCE_BLOCKED_REASON", "{=TuqmbbqB}Ah, yes. Unfortunately, this is no discussion to be had while I am captive. We shall discuss our future after I am freed from these chains.", false);
      }
      else
      {
        MBTextManager.SetTextVariable("ROMANCE_BLOCKED_REASON", "{=BQn8yTs5}Ah, yes. I am afraid I can no longer entertain your proposal, at least not for now.", false);
        ChangeRomanticStateAction.Apply(Hero.MainHero, Hero.OneToOneConversationHero, Romance.RomanceLevelEnum.FailedInCompatibility);
      }
      return true;
    }

    private bool conversation_romance_at_stage_1_discussions_on_condition()
    {
      if (Hero.OneToOneConversationHero == null)
        return false;
      Romance.RomanceLevelEnum romanticLevel = Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero);
      if (this.MarriageCourtshipPossibility(Hero.MainHero, Hero.OneToOneConversationHero) && (romanticLevel == Romance.RomanceLevelEnum.CourtshipStarted || romanticLevel == Romance.RomanceLevelEnum.MatchMadeByFamily))
      {
        List<PersuasionAttempt> list = this._previousRomancePersuasionAttempts.Where<PersuasionAttempt>((Func<PersuasionAttempt, bool>) (x => x.PersuadedHero == Hero.OneToOneConversationHero)).OrderByDescending<PersuasionAttempt, CampaignTime>((Func<PersuasionAttempt, CampaignTime>) (x => x.GameTime)).ToList<PersuasionAttempt>();
        if (list.Count == 0 || list[0].GameTime < this.RomanceCourtshipAttemptCooldown)
          return true;
      }
      return false;
    }

    private bool conversation_romance_at_stage_2_discussions_on_condition()
    {
      if (Hero.OneToOneConversationHero == null)
        return false;
      Romance.RomanceLevelEnum romanticLevel = Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero);
      if (this.MarriageCourtshipPossibility(Hero.MainHero, Hero.OneToOneConversationHero) && romanticLevel == Romance.RomanceLevelEnum.CoupleDecidedThatTheyAreCompatible)
      {
        List<PersuasionAttempt> list = this._previousRomancePersuasionAttempts.Where<PersuasionAttempt>((Func<PersuasionAttempt, bool>) (x => x.PersuadedHero == Hero.OneToOneConversationHero)).OrderByDescending<PersuasionAttempt, CampaignTime>((Func<PersuasionAttempt, CampaignTime>) (x => x.GameTime)).ToList<PersuasionAttempt>();
        if (list.Count == 0 || list[0].GameTime < this.RomanceCourtshipAttemptCooldown)
          return true;
      }
      return false;
    }

    private bool conversation_finalize_courtship_for_hero_on_condition()
    {
      return this.MarriageCourtshipPossibility(Hero.MainHero, Hero.OneToOneConversationHero) && Hero.OneToOneConversationHero.Clan.Leader == Hero.OneToOneConversationHero && Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) == Romance.RomanceLevelEnum.CoupleAgreedOnMarriage;
    }

    private bool conversation_finalize_courtship_for_other_on_condition()
    {
      if (Hero.OneToOneConversationHero == null || Hero.OneToOneConversationHero.Clan?.Leader != Hero.OneToOneConversationHero || Hero.OneToOneConversationHero.IsPrisoner)
        return false;
      foreach (Hero lord in (List<Hero>) Hero.OneToOneConversationHero.Clan.Lords)
      {
        if (lord != Hero.OneToOneConversationHero && this.MarriageCourtshipPossibility(Hero.MainHero, lord) && Romance.GetRomanticLevel(Hero.MainHero, lord) == Romance.RomanceLevelEnum.CoupleAgreedOnMarriage)
        {
          MBTextManager.SetTextVariable("COURTSHIP_PARTNER", lord.Name, false);
          return true;
        }
      }
      return false;
    }

    private bool conversation_discuss_marriage_alliance_on_condition()
    {
      if (Hero.OneToOneConversationHero != null)
      {
        IFaction mapFaction = Hero.OneToOneConversationHero.MapFaction;
        if ((mapFaction != null ? (mapFaction.IsMinorFaction ? 1 : 0) : 0) == 0 && !Hero.OneToOneConversationHero.IsPrisoner && !FactionManager.IsAtWarAgainstFaction(Hero.MainHero.MapFaction, Hero.OneToOneConversationHero.MapFaction) && Hero.OneToOneConversationHero.Clan != null && Hero.OneToOneConversationHero.Clan.Leader == Hero.OneToOneConversationHero)
        {
          bool flag = false;
          foreach (Hero hero in (List<Hero>) Hero.MainHero.Clan.Heroes)
          {
            foreach (Hero lord in (List<Hero>) Hero.OneToOneConversationHero.Clan.Lords)
            {
              if (this.MarriageCourtshipPossibility(hero, lord))
                flag = true;
            }
          }
          return flag;
        }
      }
      return false;
    }

    private bool conversation_player_can_open_courtship_on_condition()
    {
      if (Hero.OneToOneConversationHero != null)
      {
        IFaction mapFaction = Hero.OneToOneConversationHero.MapFaction;
        if ((mapFaction != null ? (mapFaction.IsMinorFaction ? 1 : 0) : 0) == 0 && !Hero.OneToOneConversationHero.IsPrisoner)
        {
          if (this.MarriageCourtshipPossibility(Hero.MainHero, Hero.OneToOneConversationHero) && Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) == Romance.RomanceLevelEnum.Untested)
          {
            if (Hero.MainHero.IsFemale)
              MBTextManager.SetTextVariable("FLIRTATION_LINE", "{=bjJs0eeB}My lord, I note that you have not yet taken a wife.", false);
            else
              MBTextManager.SetTextVariable("FLIRTATION_LINE", "{=v1hC6Aem}My lady, I wish to profess myself your most ardent admirer.", false);
            return true;
          }
          if (Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) != Romance.RomanceLevelEnum.FailedInCompatibility && Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) != Romance.RomanceLevelEnum.FailedInPracticalities)
            return false;
          if (Hero.MainHero.IsFemale)
            MBTextManager.SetTextVariable("FLIRTATION_LINE", "{=2WnhUBMM}My lord, may you give me another chance to prove myself?", false);
          else
            MBTextManager.SetTextVariable("FLIRTATION_LINE", "{=4iTaEZKg}My lady, may you give me another chance to prove myself?", false);
          return true;
        }
      }
      return false;
    }

    private bool conversation_player_opens_courtship_on_condition()
    {
      return this._playerProposalHero == Hero.MainHero;
    }

    private void conversation_player_opens_courtship_on_consequence()
    {
      if (Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) == Romance.RomanceLevelEnum.FailedInCompatibility || Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) == Romance.RomanceLevelEnum.FailedInPracticalities)
        return;
      ChangeRomanticStateAction.Apply(Hero.MainHero, Hero.OneToOneConversationHero, Romance.RomanceLevelEnum.CourtshipStarted);
    }

    private bool conversation_courtship_try_later_on_condition()
    {
      MBTextManager.SetTextVariable("TRY_HARDER_LINE", this.GetCurrentPersuasionTask().TryLaterLine, false);
      return true;
    }

    private bool conversation_courtship_reaction_stage_1_on_condition()
    {
      PersuasionOptionResult optionResult = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>().Item2;
      if (Romance.GetRomanticLevel(Hero.MainHero, Hero.OneToOneConversationHero) != Romance.RomanceLevelEnum.CourtshipStarted)
        return false;
      if ((optionResult == PersuasionOptionResult.Failure || optionResult == PersuasionOptionResult.CriticalFailure) && this.GetCurrentPersuasionTask().ImmediateFailLine != null)
      {
        MBTextManager.SetTextVariable("PERSUASION_REACTION", this.GetCurrentPersuasionTask().ImmediateFailLine, false);
        if (optionResult == PersuasionOptionResult.CriticalFailure)
        {
          foreach (PersuasionTask allReservation in this._allReservations)
            allReservation.BlockAllOptions();
        }
      }
      else
        MBTextManager.SetTextVariable("PERSUASION_REACTION", PersuasionHelper.GetDefaultPersuasionOptionReaction(optionResult), false);
      return true;
    }

    private bool conversation_marriage_barter_successful_on_condition()
    {
      return Campaign.Current.BarterManager.LastBarterIsAccepted;
    }

    private void conversation_marriage_barter_successful_on_consequence()
    {
      foreach (PersuasionAttempt persuasionAttempt in this._previousRomancePersuasionAttempts)
      {
        if (persuasionAttempt.PersuadedHero == Hero.OneToOneConversationHero || Hero.OneToOneConversationHero.Clan.Lords.Contains(persuasionAttempt.PersuadedHero))
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
    }

    private bool conversation_courtship_reaction_stage_2_on_condition()
    {
      PersuasionOptionResult persuasionOptionResult = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>().Item2;
      switch (persuasionOptionResult)
      {
        case PersuasionOptionResult.Success:
          MBTextManager.SetTextVariable("PERSUASION_REACTION", "{=KWBzmJQl}I am happy to hear that.", false);
          break;
        case PersuasionOptionResult.CriticalSuccess:
          MBTextManager.SetTextVariable("PERSUASION_REACTION", "{=RGZWdKDx}Ah. It makes me so glad to hear you say that!", false);
          break;
        default:
          if ((persuasionOptionResult == PersuasionOptionResult.Failure || persuasionOptionResult == PersuasionOptionResult.CriticalFailure) && this.GetCurrentPersuasionTask().ImmediateFailLine != null)
          {
            MBTextManager.SetTextVariable("PERSUASION_REACTION", this.GetCurrentPersuasionTask().ImmediateFailLine, false);
            break;
          }
          switch (persuasionOptionResult)
          {
            case PersuasionOptionResult.CriticalFailure:
              MBTextManager.SetTextVariable("PERSUASION_REACTION", "{=APSE3Q6r}What? No... I cannot, I cannot agree.", false);
              using (List<PersuasionTask>.Enumerator enumerator = this._allReservations.GetEnumerator())
              {
                while (enumerator.MoveNext())
                  enumerator.Current.BlockAllOptions();
                break;
              }
            case PersuasionOptionResult.Failure:
              MBTextManager.SetTextVariable("PERSUASION_REACTION", "{=OqqUatT9}I... I think this will be difficult. Perhaps we are not meant for each other.", false);
              break;
          }
          break;
      }
      return true;
    }

    private void conversation_lord_persuade_option_reaction_on_consequence()
    {
      PersuasionTask currentPersuasionTask = this.GetCurrentPersuasionTask();
      Tuple<PersuasionOptionArgs, PersuasionOptionResult> tuple = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>();
      float difficulty = Campaign.Current.Models.PersuasionModel.GetDifficulty(PersuasionDifficulty.Medium);
      float moveToNextStageChance;
      float blockRandomOptionChance;
      Campaign.Current.Models.PersuasionModel.GetEffectChances(tuple.Item1, out moveToNextStageChance, out blockRandomOptionChance, difficulty);
      this.FindTaskOfOption(tuple.Item1).ApplyEffects(moveToNextStageChance, blockRandomOptionChance);
      this._previousRomancePersuasionAttempts.Add(new PersuasionAttempt(Hero.OneToOneConversationHero, CampaignTime.Now, tuple.Item1, tuple.Item2, currentPersuasionTask.ReservationType));
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

    private List<CharacterObject> FindPlayerRelativesEligibleForMarriage(Clan withClan)
    {
      List<CharacterObject> eligibleForMarriage = new List<CharacterObject>();
      MarriageModel marriageModel = Campaign.Current.Models.MarriageModel;
      foreach (Hero lord in (List<Hero>) Hero.MainHero.Clan.Lords)
      {
        Hero characterRelative = lord;
        IEnumerable<Hero> source = withClan.Lords.Where<Hero>((Func<Hero, bool>) (x => marriageModel.IsCoupleSuitableForMarriage(x, characterRelative)));
        if (characterRelative != Hero.MainHero && source.Any<Hero>())
          eligibleForMarriage.Add(characterRelative.CharacterObject);
      }
      return eligibleForMarriage;
    }

    private TextObject ShowSuccess(PersuasionOptionArgs optionArgs) => TextObject.Empty;

    private bool MarriageCourtshipPossibility(Hero person1, Hero person2)
    {
      return Campaign.Current.Models.MarriageModel.IsCoupleSuitableForMarriage(person1, person2) && !FactionManager.IsAtWarAgainstFaction(person1.MapFaction, person2.MapFaction);
    }

    public enum RomanticPreference
    {
      Conventional,
      Moralist,
      AttractedToBravery,
      Macchiavellian,
      Romantic,
      Companionship,
      MadAndBad,
      Security,
      PreferencesEnd,
    }

    private enum RomanceReservationType
    {
      TravelChat,
      TravelLesson,
      Aspirations,
      Compatibility,
      Attraction,
      Family,
      MaterialWealth,
      NoObjection,
    }

    private enum RomanceReservationDescription
    {
      CompatibilityINeedSomeoneUpright,
      CompatibilityNeedSomethingInCommon,
      CompatibiliyINeedSomeoneDangerous,
      CompatibilityStrongPoliticalBeliefs,
      AttractionYoureNotMyType,
      AttractionYoureGoodEnough,
      AttractionIAmDrawnToYou,
      PropertyYouSeemRichEnough,
      PropertyWeNeedToBeComfortable,
      PropertyIWantRealWealth,
      PropertyHowCanIMarryAnAdventuress,
      FamilyApprovalIAmGladYouAreFriendsWithOurFamily,
      FamilyApprovalYouNeedToBeFriendsWithOurFamily,
      FamilyApprovalHowCanYouBeEnemiesWithOurFamily,
      FamilyApprovalItWouldBeBestToBefriendOurFamily,
    }
  }
}
