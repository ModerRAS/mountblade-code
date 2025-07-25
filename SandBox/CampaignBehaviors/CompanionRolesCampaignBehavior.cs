// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.CompanionRolesCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Conversation;
using SandBox.Missions.AgentBehaviors;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class CompanionRolesCampaignBehavior : CampaignBehaviorBase
  {
    private const int CompanionRelationLimit = -10;
    private const int NeededGoldToGrantFief = 20000;
    private const int NeededInfluenceToGrantFief = 500;
    private const int RelationGainWhenCompanionToLordAction = 50;
    private const int NewCreatedHeroForCompanionClanMaxAge = 50;
    private const int NewHeroSkillUpperLimit = 175;
    private const int NewHeroSkillLowerLimit = 125;
    private Settlement _selectedFief;
    private bool _playerConfirmedTheAction;
    private List<int> _alreadyUsedIconIdsForNewClans = new List<int>();
    private bool _partyCreatedAfterRescueForCompanion;
    private bool _partyScreenOpenedForPartyCreationAfterRescue;

    private static CompanionRolesCampaignBehavior CurrentBehavior
    {
      get => Campaign.Current.GetCampaignBehavior<CompanionRolesCampaignBehavior>();
    }

    public override void RegisterEvents()
    {
      CampaignEvents.CompanionRemoved.AddNonSerializedListener((object) this, new Action<Hero, RemoveCompanionAction.RemoveCompanionDetail>(this.OnCompanionRemoved));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.HeroRelationChanged.AddNonSerializedListener((object) this, new Action<Hero, Hero, int, bool, ChangeRelationAction.ChangeRelationDetail, Hero, Hero>(this.OnHeroRelationChanged));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<int>>("_alreadyUsedIconIdsForNewClans", ref this._alreadyUsedIconIdsForNewClans);
    }

    private void OnHeroRelationChanged(
      Hero effectiveHero,
      Hero effectiveHeroGainedRelationWith,
      int relationChange,
      bool showNotification,
      ChangeRelationAction.ChangeRelationDetail detail,
      Hero originalHero,
      Hero originalGainedRelationWith)
    {
      if ((effectiveHero != Hero.MainHero || !effectiveHeroGainedRelationWith.IsPlayerCompanion) && (!effectiveHero.IsPlayerCompanion || effectiveHeroGainedRelationWith != Hero.MainHero) || relationChange >= 0 || effectiveHero.GetRelation(effectiveHeroGainedRelationWith) >= -10)
        return;
      KillCharacterAction.ApplyByRemove(effectiveHero.IsPlayerCompanion ? effectiveHero : effectiveHeroGainedRelationWith);
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    protected void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddPlayerLine("companion_rejoin_after_emprisonment_role", "hero_main_options", "companion_rejoin", "{=!}{COMPANION_REJOIN_LINE}", new ConversationSentence.OnConditionDelegate(this.companion_rejoin_after_emprisonment_role_on_condition), new ConversationSentence.OnConsequenceDelegate(this.companion_rejoin_after_emprisonment_role_on_consequence));
      campaignGameStarter.AddDialogLine("companion_rejoin", "companion_rejoin", "close_window", "{=akpaap9e}As you wish.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_start_role", "hero_main_options", "companion_role_pretalk", "{=d4t6oUCn}About your position in the clan...", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_role_discuss_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("companion_pretalk", "companion_role_pretalk", "companion_role", "{=V6jXzuMv}{COMPANION_ROLE}", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_has_role_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_talk_fire", "companion_role", "companion_fire", "{=pRsCnGoo}I no longer have need of your services.", (ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero.IsPlayerCompanion && Settlement.CurrentSettlement == null), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_talk_fire_2", "companion_role", "companion_assign_new_role", "{=2g18dlwo}I would like to assign you a new role.", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_assign_role_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("companion_assign_new_role", "companion_assign_new_role", "companion_roles", "{=5ajobQiL}What role do you have in mind?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_talk_fire_3", "companion_role", "companion_okay", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_becomes_engineer", "companion_roles", "companion_okay", "{=E91oU7oi}I no longer need you as Engineer.", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_fire_engineer_on_condition), new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_delete_party_role_consequence));
      campaignGameStarter.AddPlayerLine("companion_becomes_surgeon", "companion_roles", "companion_okay", "{=Dga7sQOu}I no longer need you as Surgeon.", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_fire_surgeon_on_condition), new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_delete_party_role_consequence));
      campaignGameStarter.AddPlayerLine("companion_becomes_quartermaster", "companion_roles", "companion_okay", "{=GjpJN2xE}I no longer need you as Quartermaster.", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_fire_quartermaster_on_condition), new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_delete_party_role_consequence));
      campaignGameStarter.AddPlayerLine("companion_becomes_scout", "companion_roles", "companion_okay", "{=EUQnsZFb}I no longer need you as Scout.", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_fire_scout_on_condition), new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_delete_party_role_consequence));
      campaignGameStarter.AddDialogLine("companion_role_response", "companion_okay", "hero_main_options", "{=dzXaXKaC}Very well.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_becomes_engineer_2", "companion_roles", "give_companion_roles", "{=UuFPafDj}Engineer {CURRENTLY_HELD_ENGINEER}", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_becomes_engineer_on_condition), new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_becomes_engineer_on_consequence));
      campaignGameStarter.AddPlayerLine("companion_becomes_surgeon_2", "companion_roles", "give_companion_roles", "{=6xZ8U3Yz}Surgeon {CURRENTLY_HELD_SURGEON}", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_becomes_surgeon_on_condition), new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_becomes_surgeon_on_consequence));
      campaignGameStarter.AddPlayerLine("companion_becomes_quartermaster_2", "companion_roles", "give_companion_roles", "{=B0VLXHHz}Quartermaster {CURRENTLY_HELD_QUARTERMASTER}", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_becomes_quartermaster_on_condition), new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_becomes_quartermaster_on_consequence));
      campaignGameStarter.AddPlayerLine("companion_becomes_scout_2", "companion_roles", "give_companion_roles", "{=3aziL3Gs}Scout {CURRENTLY_HELD_SCOUT}", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_becomes_scout_on_condition), new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_becomes_scout_on_consequence));
      campaignGameStarter.AddDialogLine("companion_role_response_2", "give_companion_roles", "hero_main_options", "{=5hhxQBTj}I would be honored.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_talk_return", "companion_roles", "companion_okay", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("companion_start_mission", "hero_main_options", "companion_mission_pretalk", "{=4ry48jbg}I have a mission for you...", (ConversationSentence.OnConditionDelegate) (() => HeroHelper.IsCompanionInPlayerParty(Hero.OneToOneConversationHero)), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("companion_pretalk_2", "companion_mission_pretalk", "companion_mission", "{=7EoBCTX0}What do you want me to do?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_mission_gather_troops", "companion_mission", "companion_recruit_troops", "{=MDik3Kfn}I want you to recruit some troops.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_mission_forage", "companion_mission", "companion_forage", "{=kAbebv72}I want you to go forage some food.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_mission_patrol", "companion_mission", "companion_patrol", "{=OMaM6ihN}I want you to patrol the area.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_mission_cancel", "companion_mission", "hero_main_options", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("companion_forage_1", "companion_forage", "companion_forage_2", "{=o2g6Wi9K}As you wish. Will I take some troops with me?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_forage_2", "companion_forage_2", "companion_forage_troops", "{=lVbQCibL}Yes. Take these troops with you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_forage_3", "companion_forage_2", "companion_forage_3", "{=3bOcF1Cw}I can't spare anyone now. You will need to go alone.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("companion_fire", "companion_fire", "companion_fire2", "{=bUzU50P8}What? Why? Did I do something wrong?[ib:closed]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_fire_age", "companion_fire2", "companion_fire3", "{=ywtuRAmP}Time has taken its toll on us all, friend. It's time that you retire.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_fire_no_fit", "companion_fire2", "companion_fire3", "{=1s3bHupn}You're not getting along with the rest of the company. It's better you go.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_fire_no_fit_2", "companion_fire2", "companion_fire3", "{=Q0xPr6CP}I cannot be sure of your loyalty any longer.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_fire_underperforming", "companion_fire2", "companion_fire3", "{=aCwCaWGC}Your skills are not what I need.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("companion_fire_cancel", "companion_fire2", "companion_fire_cancel", "{=8VlqJteC}I was just jesting. I need you more than ever. Now go back to your job.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_talk_done_on_consequence));
      campaignGameStarter.AddDialogLine("companion_fire_cancel2", "companion_fire_cancel", "close_window", "{=vctta154}Well {PLAYER.NAME}, it is certainly good to see you still retain your sense of humor.[if:convo_nervous][ib:normal2]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("companion_fire_farewell", "companion_fire3", "close_window", "{=LrbyNgAa}{AGREE_TO_LEAVE}[ib:nervous2]", new ConversationSentence.OnConditionDelegate(this.companion_agrees_to_leave_on_condition), new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_fire_on_consequence));
      campaignGameStarter.AddPlayerLine("turn_companion_to_lord_start", "hero_main_options", "turn_companion_to_lord_talk_answer", "{=B9uT9wa6}I wish to reward you for your services.", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.turn_companion_to_lord_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("turn_companion_to_lord_start_answer_2", "turn_companion_to_lord_talk_answer", "companion_leading_caravan", "{=IkH0pVhC}I would be honored, my {?PLAYER.GENDER}lady{?}lord{\\?}. But I can't take on any new responsibilities while leading this caravan. If you wish to relieve me of my duties, we can discuss this further.", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_is_leading_caravan_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("turn_companion_to_lord_start_answer_player", "companion_leading_caravan", "lord_pretalk", "{=i7k0AXsO}I see. We will speak again when you are relieved from your duty.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("turn_companion_to_lord_start_answer", "turn_companion_to_lord_talk_answer", "turn_companion_to_lord_talk", "{=TXO1ihiZ}Thank you, my {?PLAYER.GENDER}lady{?}lord{\\?}. I have often thought about that. If I had a fief, with revenues, and perhaps a title to go with it, I could marry well and pass my wealth down to my heirs, and of course raise troops to help defend the realm.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("turn_companion_to_lord_has_fief", "turn_companion_to_lord_talk", "check_player_has_fief_to_grant", "{=KqazzTWV}Indeed. You have shed your blood for me, and you deserve a fief of your own..", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.fief_grant_answer_consequence));
      campaignGameStarter.AddDialogLine("turn_companion_to_lord_has_no_fief", "check_player_has_fief_to_grant", "player_has_no_fief_to_grant", "{=Wx5ysDp1}My {?PLAYER.GENDER}lady{?}lord{\\?}, as much as I appreciate the gesture, I am not sure that you have a suitable estate to grant me.", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.turn_companion_to_lord_no_fief_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("turn_companion_to_lord_has_no_fief_player_answer", "player_has_no_fief_to_grant", "player_has_no_fief_to_grant_answer", "{=6uUzWz46}I see. Maybe we will speak again when I have one.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("turn_companion_to_lord_has_no_fief_companion_answer", "player_has_no_fief_to_grant_answer", "hero_main_options", "{=PP3LzCKk}As you wish, my {?PLAYER.GENDER}lady{?}lord{\\?}.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("turn_companion_to_lord_has_fief_answer", "check_player_has_fief_to_grant", "player_has_fief_list", "{=ArNB7aaL}Where exactly did you have in mind?[if:convo_happy]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddRepeatablePlayerLine("turn_companion_to_lord_has_fief_list", "player_has_fief_list", "player_selected_fief_to_grant", "{=3rHeoq6r}{SETTLEMENT_NAME}.", "{=sxc2D6NJ}I am thinking of a different location.", "check_player_has_fief_to_grant", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.list_player_fief_on_condition), new ConversationSentence.OnConsequenceDelegate(this.list_player_fief_selected_on_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(CompanionRolesCampaignBehavior.list_player_fief_clickable_condition));
      campaignGameStarter.AddPlayerLine("turn_companion_to_lord_has_fief_list_cancel", "player_has_fief_list", "turn_companion_to_lord_fief_conclude", "{=UEbesbKZ}Actually, I have changed my mind.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.list_player_fief_cancel_on_consequence));
      campaignGameStarter.AddDialogLine("turn_companion_to_lord_fief_selected", "player_selected_fief_to_grant", "turn_companion_to_lord_fief_selected_answer", "{=Mt9abZzi}{SETTLEMENT_NAME}? This is a great honor, my {?PLAYER.GENDER}lady{?}lord{\\?}. I will protect it until the last drop of my blood.[ib:hip][if:convo_happy]", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.fief_selected_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("turn_companion_to_lord_fief_selected_confirm", "turn_companion_to_lord_fief_selected_answer", "turn_companion_to_lord_fief_selected_confirm_box", "{=TtlwXnVc}I am pleased to grant you the title of {CULTURE_SPECIFIC_TITLE} and the fiefdom of {SETTLEMENT_NAME}.. You richly deserve it.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(CompanionRolesCampaignBehavior.fief_selected_confirm_clickable_on_condition));
      campaignGameStarter.AddPlayerLine("turn_companion_to_lord_fief_selected_reject", "turn_companion_to_lord_fief_selected_answer", "turn_companion_to_lord_fief_conclude", "{=LDGMSQJJ}Very well. Let me think on this a bit longer", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("turn_companion_to_lord_fief_selected_confirm_box", "turn_companion_to_lord_fief_selected_confirm_box", "turn_companion_to_lord_fief_conclude", "{=LOiZfCEy}My {?PLAYER.GENDER}lady{?}lord{\\?}, it would be an honor if you were to choose the name of my noble house.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.turn_companion_to_lord_consequence));
      campaignGameStarter.AddDialogLine("turn_companion_to_lord_done_answer_thanks", "turn_companion_to_lord_fief_conclude", "close_window", "{=dpYhBgAC}Thank you my {?PLAYER.GENDER}lady{?}lord{\\?}. I will always remember this grand gesture.[ib:hip][if:convo_happy]", new ConversationSentence.OnConditionDelegate(CompanionRolesCampaignBehavior.companion_thanks_on_condition), new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_talk_done_on_consequence));
      campaignGameStarter.AddDialogLine("turn_companion_to_lord_done_answer_rejected", "turn_companion_to_lord_fief_conclude", "hero_main_options", "{=SVEptNxR}It's only normal that you have second thoughts. I will be right by your side if you change your mind, my {?PLAYER.GENDER}lady{?}lord{\\?}.[ib:hip][if:convo_nervous]", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(CompanionRolesCampaignBehavior.companion_talk_done_on_consequence));
      campaignGameStarter.AddDialogLine("rescue_companion_start", "start", "rescue_companion_option_acknowledgement", "{=FVOfzPot}{SALUTATION}... Thank you for freeing me.", new ConversationSentence.OnConditionDelegate(this.companion_rescue_start_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("rescue_companion_option_acknowledgement", "rescue_companion_option_acknowledgement", "rescue_companion_preoptions", "{=YyNywO6Z}Think nothing of it. I'm glad you're safe.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("rescue_companion_preoptions", "rescue_companion_preoptions", "rescue_companion_options", "{=kaVMFgBs}What now?", new ConversationSentence.OnConditionDelegate(this.companion_rescue_start_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("rescue_companion_option_1", "rescue_companion_options", "rescue_companion_join_party", "{=drIfaTa7}Rejoin the others and let's be off.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.companion_rescue_answer_options_join_party_consequence));
      campaignGameStarter.AddPlayerLine("rescue_companion_option_2", "rescue_companion_options", "rescue_companion_lead_party", "{=Y6Z8qNW9}I'll need you to lead a party.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.lead_a_party_clickable_condition));
      campaignGameStarter.AddPlayerLine("rescue_companion_option_3", "rescue_companion_options", "rescue_companion_do_nothing", "{=dRKk0E1V}Unfortunately, I can't take you back right now.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("rescue_companion_lead_party_answer", "rescue_companion_lead_party", "close_window", "{=Q9Ltufg5}Tell me who to command.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.companion_rescue_answer_options_lead_party_consequence));
      campaignGameStarter.AddDialogLine("rescue_companion_join_party_answer", "rescue_companion_join_party", "close_window", "{=92mngWSd}All right. It's good to be back.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.end_rescue_companion));
      campaignGameStarter.AddDialogLine("rescue_companion_do_nothing_answer", "rescue_companion_do_nothing", "close_window", "{=gT2O4YXc}I will go off on my own, then. I can stay busy. But I'll remember - I owe you one!", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.end_rescue_companion));
      campaignGameStarter.AddDialogLine("rescue_companion_lead_party_create_party_continue_0", "start", "party_screen_rescue_continue", "{=ppi6eVos}As you wish.", new ConversationSentence.OnConditionDelegate(this.party_screen_continue_conversation_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("rescue_companion_lead_party_create_party_continue_1", "party_screen_rescue_continue", "rescue_companion_options", "{=ttWBYlxS}So, what shall I do?", new ConversationSentence.OnConditionDelegate(this.party_screen_opened_but_party_is_not_created_after_rescue_condition), new ConversationSentence.OnConsequenceDelegate(this.party_screen_opened_but_party_is_not_created_after_rescue_consequence));
      campaignGameStarter.AddDialogLine("rescue_companion_lead_party_create_party_continue_2", "party_screen_rescue_continue", "close_window", "{=DiEKuVGF}We'll make ready to set out at once.", new ConversationSentence.OnConditionDelegate(this.party_screen_opened_and_party_is_created_after_rescue_condition), new ConversationSentence.OnConsequenceDelegate(this.end_rescue_companion));
      campaignGameStarter.AddDialogLine("default_conversation_for_wrongly_created_heroes", "start", "close_window", "{=BaeqKlQ6}I am not allowed to talk with you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, 0);
    }

    private static bool turn_companion_to_lord_no_fief_on_condition()
    {
      return !Hero.MainHero.Clan.Settlements.Any<Settlement>((Func<Settlement, bool>) (x => x.IsTown || x.IsCastle));
    }

    private static bool turn_companion_to_lord_on_condition()
    {
      Hero conversationHero = Hero.OneToOneConversationHero;
      if (conversationHero == null || !conversationHero.IsPlayerCompanion || !Hero.MainHero.IsKingdomLeader)
        return false;
      CompanionRolesCampaignBehavior.CurrentBehavior._playerConfirmedTheAction = false;
      return true;
    }

    private static bool companion_is_leading_caravan_condition()
    {
      Hero conversationHero = Hero.OneToOneConversationHero;
      return conversationHero != null && conversationHero.IsPlayerCompanion && conversationHero.PartyBelongedTo != null && conversationHero.PartyBelongedTo.IsCaravan;
    }

    private static void fief_grant_answer_consequence()
    {
      ConversationSentence.SetObjectsToRepeatOver((IReadOnlyList<object>) Hero.MainHero.Clan.Settlements.Where<Settlement>((Func<Settlement, bool>) (x => x.IsTown || x.IsCastle)).ToList<Settlement>());
    }

    private static bool list_player_fief_clickable_condition(out TextObject explanation)
    {
      explanation = TextObject.Empty;
      Kingdom mapFaction = Hero.MainHero.MapFaction as Kingdom;
      Settlement fief = ConversationSentence.CurrentProcessedRepeatObject as Settlement;
      if (fief.SiegeEvent != null)
      {
        explanation = new TextObject("{=arCGUuR5}The settlement is under siege.");
        return false;
      }
      if (!fief.Town.IsOwnerUnassigned && !mapFaction.UnresolvedDecisions.Any<KingdomDecision>((Func<KingdomDecision, bool>) (x =>
      {
        // ISSUE: reference to a compiler-generated field
        switch (x)
        {
          case SettlementClaimantDecision claimantDecision2 when claimantDecision2.Settlement == this.fief:
            return true;
          case SettlementClaimantPreliminaryDecision preliminaryDecision2:
            return preliminaryDecision2.Settlement == fief;
          default:
            return false;
        }
      })))
        return true;
      explanation = new TextObject("{=OiPqa3L8}This settlement's ownership will be decided through voting.");
      return false;
    }

    private static bool list_player_fief_on_condition()
    {
      if (ConversationSentence.CurrentProcessedRepeatObject is Settlement processedRepeatObject)
        ConversationSentence.SelectedRepeatLine.SetTextVariable("SETTLEMENT_NAME", processedRepeatObject.Name);
      return true;
    }

    private void list_player_fief_selected_on_consequence()
    {
      this._selectedFief = ConversationSentence.SelectedRepeatObject as Settlement;
    }

    private static void turn_companion_to_lord_consequence()
    {
      TextObject to = new TextObject("{=ntDH7J3H}This action costs {NEEDED_GOLD_TO_GRANT_FIEF}{GOLD_ICON} and {NEEDED_INFLUENCE_TO_GRANT_FIEF}{INFLUENCE_ICON}. You will also be granting {SETTLEMENT} to {COMPANION.NAME}.");
      to.SetTextVariable("NEEDED_GOLD_TO_GRANT_FIEF", 20000);
      to.SetTextVariable("NEEDED_INFLUENCE_TO_GRANT_FIEF", 500);
      to.SetTextVariable("INFLUENCE_ICON", "{=!}<img src=\"General\\Icons\\Influence@2x\" extend=\"7\">");
      to.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
      to.SetCharacterProperties("COMPANION", Hero.OneToOneConversationHero.CharacterObject);
      to.SetTextVariable("SETTLEMENT", CompanionRolesCampaignBehavior.CurrentBehavior._selectedFief.Name);
      InformationManager.ShowInquiry(new InquiryData(new TextObject("{=awjomtnJ}Are you sure?").ToString(), to.ToString(), true, true, new TextObject("{=aeouhelq}Yes").ToString(), new TextObject("{=8OkPHu4f}No").ToString(), new Action(CompanionRolesCampaignBehavior.ConfirmTurningCompanionToLordConsequence), new Action(CompanionRolesCampaignBehavior.RejectTurningCompanionToLordConsequence)));
    }

    private static void ConfirmTurningCompanionToLordConsequence()
    {
      CompanionRolesCampaignBehavior.CurrentBehavior._playerConfirmedTheAction = true;
      TextObject textObject = new TextObject("{=4eStbG4S}Select {COMPANION.NAME}{.o} clan name: ");
      StringHelpers.SetCharacterProperties("COMPANION", Hero.OneToOneConversationHero.CharacterObject);
      InformationManager.ShowTextInquiry(new TextInquiryData(textObject.ToString(), string.Empty, true, false, GameTexts.FindText("str_done").ToString(), (string) null, new Action<string>(CompanionRolesCampaignBehavior.ClanNameSelectionIsDone), (Action) null, textCondition: new Func<string, Tuple<bool, string>>(FactionHelper.IsClanNameApplicable)));
    }

    private static void RejectTurningCompanionToLordConsequence()
    {
      CompanionRolesCampaignBehavior.CurrentBehavior._playerConfirmedTheAction = false;
      Campaign.Current.ConversationManager.ContinueConversation();
    }

    private static void ClanNameSelectionIsDone(string clanName)
    {
      Hero conversationHero = Hero.OneToOneConversationHero;
      RemoveCompanionAction.ApplyByByTurningToLord(Hero.MainHero.Clan, conversationHero);
      conversationHero.SetNewOccupation(Occupation.Lord);
      TextObject text = GameTexts.FindText("str_generic_clan_name");
      text.SetTextVariable("CLAN_NAME", new TextObject(clanName));
      int bannerIdForNewClan = CompanionRolesCampaignBehavior.GetRandomBannerIdForNewClan();
      Clan companionToLordClan = Clan.CreateCompanionToLordClan(conversationHero, CompanionRolesCampaignBehavior.CurrentBehavior._selectedFief, text, bannerIdForNewClan);
      if (conversationHero.PartyBelongedTo == MobileParty.MainParty)
        MobileParty.MainParty.MemberRoster.AddToCounts(conversationHero.CharacterObject, -1);
      MobileParty partyBelongedTo = conversationHero.PartyBelongedTo;
      if (partyBelongedTo == null)
      {
        MobileParty lordParty = LordPartyComponent.CreateLordParty((string) null, conversationHero, MobileParty.MainParty.Position2D, 3f, CompanionRolesCampaignBehavior.CurrentBehavior._selectedFief, conversationHero);
        lordParty.MemberRoster.AddToCounts(companionToLordClan.Culture.BasicTroop, MBRandom.RandomInt(12, 15));
        lordParty.MemberRoster.AddToCounts(companionToLordClan.Culture.EliteBasicTroop, MBRandom.RandomInt(10, 15));
      }
      else
      {
        partyBelongedTo.ActualClan = companionToLordClan;
        partyBelongedTo.Party.SetVisualAsDirty();
      }
      CompanionRolesCampaignBehavior.AdjustCompanionsEquipment(conversationHero);
      CompanionRolesCampaignBehavior.SpawnNewHeroesForNewCompanionClan(conversationHero, companionToLordClan, CompanionRolesCampaignBehavior.CurrentBehavior._selectedFief);
      GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, conversationHero, 20000);
      GainKingdomInfluenceAction.ApplyForDefault(Hero.MainHero, -500f);
      ChangeRelationAction.ApplyPlayerRelation(conversationHero, 50);
      Campaign.Current.ConversationManager.ContinueConversation();
    }

    private static void AdjustCompanionsEquipment(Hero companionHero)
    {
      Equipment equipmentForCompanion1 = CompanionRolesCampaignBehavior.GetNewEquipmentForCompanion(companionHero, true);
      Equipment equipmentForCompanion2 = CompanionRolesCampaignBehavior.GetNewEquipmentForCompanion(companionHero, false);
      Equipment equipment1 = new Equipment(true);
      Equipment equipment2 = new Equipment(false);
      for (int index = 0; index < 12; ++index)
      {
        EquipmentElement equipmentElement = equipmentForCompanion2[index];
        if (equipmentElement.Item != null)
        {
          equipmentElement = companionHero.BattleEquipment[index];
          if (equipmentElement.Item != null)
          {
            equipmentElement = companionHero.BattleEquipment[index];
            int tier1 = (int) equipmentElement.Item.Tier;
            equipmentElement = equipmentForCompanion2[index];
            int tier2 = (int) equipmentElement.Item.Tier;
            if (tier1 >= tier2)
              goto label_5;
          }
          equipment2[index] = equipmentForCompanion2[index];
          goto label_6;
        }
label_5:
        equipment2[index] = companionHero.BattleEquipment[index];
label_6:
        equipmentElement = equipmentForCompanion1[index];
        if (equipmentElement.Item != null)
        {
          equipmentElement = companionHero.CivilianEquipment[index];
          if (equipmentElement.Item != null)
          {
            equipmentElement = companionHero.CivilianEquipment[index];
            int tier3 = (int) equipmentElement.Item.Tier;
            equipmentElement = equipmentForCompanion1[index];
            int tier4 = (int) equipmentElement.Item.Tier;
            if (tier3 >= tier4)
              goto label_10;
          }
          equipment1[index] = equipmentForCompanion1[index];
          continue;
        }
label_10:
        equipment1[index] = companionHero.CivilianEquipment[index];
      }
      EquipmentHelper.AssignHeroEquipmentFromEquipment(companionHero, equipment1);
      EquipmentHelper.AssignHeroEquipmentFromEquipment(companionHero, equipment2);
    }

    private static int GetRandomBannerIdForNewClan()
    {
      MBReadOnlyList<int> clanBannerIconsIds = Hero.MainHero.MapFaction.Culture.PossibleClanBannerIconsIDs;
      int randomElement = clanBannerIconsIds.GetRandomElement<int>();
      if (CompanionRolesCampaignBehavior.CurrentBehavior._alreadyUsedIconIdsForNewClans.Contains(randomElement))
      {
        int num = 0;
        do
        {
          randomElement = clanBannerIconsIds.GetRandomElement<int>();
          ++num;
        }
        while (CompanionRolesCampaignBehavior.CurrentBehavior._alreadyUsedIconIdsForNewClans.Contains(randomElement) && num < 20);
        bool flag = num != 20;
        if (!flag)
        {
          for (int index = 0; index < clanBannerIconsIds.Count; ++index)
          {
            if (!CompanionRolesCampaignBehavior.CurrentBehavior._alreadyUsedIconIdsForNewClans.Contains(clanBannerIconsIds[index]))
            {
              randomElement = clanBannerIconsIds[index];
              flag = true;
              break;
            }
          }
        }
        if (!flag)
          randomElement = clanBannerIconsIds.GetRandomElement<int>();
      }
      if (!CompanionRolesCampaignBehavior.CurrentBehavior._alreadyUsedIconIdsForNewClans.Contains(randomElement))
        CompanionRolesCampaignBehavior.CurrentBehavior._alreadyUsedIconIdsForNewClans.Add(randomElement);
      return randomElement;
    }

    private static void SpawnNewHeroesForNewCompanionClan(
      Hero companionHero,
      Clan clan,
      Settlement settlement)
    {
      MBReadOnlyList<CharacterObject> lordTemplates = companionHero.Culture.LordTemplates;
      List<Hero> heroList = new List<Hero>();
      heroList.Add(CompanionRolesCampaignBehavior.CreateNewHeroForNewCompanionClan(lordTemplates.GetRandomElement<CharacterObject>(), settlement, new Dictionary<SkillObject, int>()
      {
        {
          DefaultSkills.Steward,
          MBRandom.RandomInt(100, 175)
        },
        {
          DefaultSkills.Leadership,
          MBRandom.RandomInt(125, 175)
        },
        {
          DefaultSkills.OneHanded,
          MBRandom.RandomInt(125, 175)
        },
        {
          DefaultSkills.Medicine,
          MBRandom.RandomInt(125, 175)
        }
      }));
      heroList.Add(CompanionRolesCampaignBehavior.CreateNewHeroForNewCompanionClan(lordTemplates.GetRandomElement<CharacterObject>(), settlement, new Dictionary<SkillObject, int>()
      {
        {
          DefaultSkills.OneHanded,
          MBRandom.RandomInt(100, 175)
        },
        {
          DefaultSkills.Leadership,
          MBRandom.RandomInt(125, 175)
        },
        {
          DefaultSkills.Tactics,
          MBRandom.RandomInt(125, 175)
        },
        {
          DefaultSkills.Engineering,
          MBRandom.RandomInt(125, 175)
        }
      }));
      heroList.Add(companionHero);
      foreach (Hero hero in heroList)
      {
        hero.Clan = clan;
        hero.ChangeState(Hero.CharacterStates.Active);
        ChangeRelationAction.ApplyRelationChangeBetweenHeroes(hero, Hero.MainHero, MBRandom.RandomInt(5, 10), false);
        if (hero != companionHero)
          EnterSettlementAction.ApplyForCharacterOnly(hero, settlement);
        foreach (Hero gainedRelationWith in heroList)
        {
          if (hero != gainedRelationWith)
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(hero, gainedRelationWith, MBRandom.RandomInt(5, 10), false);
        }
      }
    }

    private static Hero CreateNewHeroForNewCompanionClan(
      CharacterObject templateCharacter,
      Settlement settlement,
      Dictionary<SkillObject, int> startingSkills)
    {
      Hero specialHero = HeroCreator.CreateSpecialHero(templateCharacter, settlement, age: MBRandom.RandomInt(Campaign.Current.Models.AgeModel.HeroComesOfAge, 50));
      foreach (KeyValuePair<SkillObject, int> startingSkill in startingSkills)
        specialHero.HeroDeveloper.SetInitialSkillLevel(startingSkill.Key, startingSkill.Value);
      return specialHero;
    }

    private static Equipment GetNewEquipmentForCompanion(Hero companionHero, bool isCivilian)
    {
      return Campaign.Current.Models.EquipmentSelectionModel.GetEquipmentRostersForCompanion(companionHero, isCivilian).GetRandomElementInefficiently<MBEquipmentRoster>().AllEquipments.GetRandomElement<Equipment>();
    }

    private static void list_player_fief_cancel_on_consequence()
    {
      CompanionRolesCampaignBehavior.CurrentBehavior._playerConfirmedTheAction = false;
    }

    private static bool fief_selected_on_condition()
    {
      MBTextManager.SetTextVariable("SETTLEMENT_NAME", CompanionRolesCampaignBehavior.CurrentBehavior._selectedFief.Name, false);
      return true;
    }

    private static bool companion_thanks_on_condition()
    {
      return CompanionRolesCampaignBehavior.CurrentBehavior._playerConfirmedTheAction;
    }

    private static bool fief_selected_confirm_clickable_on_condition(out TextObject explanation)
    {
      explanation = TextObject.Empty;
      MBTextManager.SetTextVariable("CULTURE_SPECIFIC_TITLE", HeroHelper.GetTitleInIndefiniteCase(Hero.OneToOneConversationHero), false);
      MBTextManager.SetTextVariable("SETTLEMENT_NAME", CompanionRolesCampaignBehavior.CurrentBehavior._selectedFief.Name, false);
      bool flag1 = Hero.MainHero.Gold >= 20000;
      bool flag2 = (double) Hero.MainHero.Clan.Influence >= 500.0;
      MBTextManager.SetTextVariable("NEEDED_GOLD_TO_GRANT_FIEF", 20000);
      MBTextManager.SetTextVariable("NEEDED_INFLUENCE_TO_GRANT_FIEF", 500);
      MBTextManager.SetTextVariable("INFLUENCE_ICON", "{=!}<img src=\"General\\Icons\\Influence@2x\" extend=\"7\">", false);
      MBTextManager.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">", false);
      if (flag1 & flag2)
      {
        explanation = new TextObject("{=PxQEwCha}You will pay {NEEDED_GOLD_TO_GRANT_FIEF}{GOLD_ICON}, {NEEDED_INFLUENCE_TO_GRANT_FIEF}{INFLUENCE_ICON}.");
        return true;
      }
      explanation = new TextObject("{=!}{GOLD_REQUIREMENT}{INFLUENCE_REQUIREMENT}");
      if (!flag1)
      {
        TextObject variable = new TextObject("{=yo2NvkQQ}You need {NEEDED_GOLD_TO_GRANT_FIEF}{GOLD_ICON}. ");
        explanation.SetTextVariable("GOLD_REQUIREMENT", variable);
      }
      if (!flag2)
      {
        TextObject variable = new TextObject("{=pDeFXZJd}You need {NEEDED_INFLUENCE_TO_GRANT_FIEF}{INFLUENCE_ICON}.");
        explanation.SetTextVariable("INFLUENCE_REQUIREMENT", variable);
      }
      return false;
    }

    private static void companion_talk_done_on_consequence()
    {
      if (PlayerEncounter.Current == null)
        return;
      PlayerEncounter.LeaveEncounter = true;
    }

    private static void companion_fire_on_consequence()
    {
      Agent conversationAgent = ConversationMission.OneToOneConversationAgent;
      RemoveCompanionAction.ApplyByFire(Hero.OneToOneConversationHero.CompanionOf, Hero.OneToOneConversationHero);
      KillCharacterAction.ApplyByRemove(Hero.OneToOneConversationHero);
      if (Hero.MainHero.CurrentSettlement != null)
      {
        AgentNavigator agentNavigator = conversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator;
        if (agentNavigator?.GetActiveBehavior() is FollowAgentBehavior)
          agentNavigator.GetBehaviorGroup<DailyBehaviorGroup>().RemoveBehavior<FollowAgentBehavior>();
        PlayerEncounter.LocationEncounter.RemoveAccompanyingCharacter(LocationComplex.Current.FindCharacter((IAgent) conversationAgent));
      }
      if (PlayerEncounter.Current == null)
        return;
      PlayerEncounter.LeaveEncounter = true;
    }

    private bool companion_rejoin_after_emprisonment_role_on_condition()
    {
      if (Hero.OneToOneConversationHero == null || Hero.OneToOneConversationHero.IsPartyLeader || !Hero.OneToOneConversationHero.IsPlayerCompanion || Hero.OneToOneConversationHero.PartyBelongedTo == MobileParty.MainParty || Hero.OneToOneConversationHero.PartyBelongedTo != null && Hero.OneToOneConversationHero.PartyBelongedTo.IsCaravan)
        return false;
      if (Settlement.CurrentSettlement != null && Hero.OneToOneConversationHero.GovernorOf == Settlement.CurrentSettlement.Town)
        MBTextManager.SetTextVariable("COMPANION_REJOIN_LINE", "{=Z5zAok5G}I need to recall you to my party, and to stop governing this town.", false);
      else
        MBTextManager.SetTextVariable("COMPANION_REJOIN_LINE", "{=1QthEZ9R}I am glad that I found you. Please rejoin my party.", false);
      return true;
    }

    private void companion_rejoin_after_emprisonment_role_on_consequence()
    {
      AddHeroToPartyAction.Apply(Hero.OneToOneConversationHero, MobileParty.MainParty);
    }

    private void OnCompanionRemoved(
      Hero companion,
      RemoveCompanionAction.RemoveCompanionDetail detail)
    {
      if (LocationComplex.Current != null)
        LocationComplex.Current.RemoveCharacterIfExists(companion);
      if (PlayerEncounter.LocationEncounter == null)
        return;
      PlayerEncounter.LocationEncounter.RemoveAccompanyingCharacter(companion);
    }

    private bool companion_agrees_to_leave_on_condition()
    {
      MBTextManager.SetTextVariable("AGREE_TO_LEAVE", new TextObject("{=0geP718k}Well... I don't know what to say. Goodbye, then."), false);
      return true;
    }

    private static bool companion_has_role_on_condition()
    {
      SkillEffect.PerkRole heroPerkRole = MobileParty.MainParty.GetHeroPerkRole(Hero.OneToOneConversationHero);
      if (heroPerkRole == SkillEffect.PerkRole.None)
      {
        MBTextManager.SetTextVariable("COMPANION_ROLE", new TextObject("{=k7ebznzr}Yes?"), false);
      }
      else
      {
        MBTextManager.SetTextVariable("COMPANION_ROLE", new TextObject("{=n3bvfe8t}I am currently working as {COMPANION_JOB}."), false);
        MBTextManager.SetTextVariable("COMPANION_JOB", GameTexts.FindText("role", heroPerkRole.ToString()), false);
      }
      return true;
    }

    private static bool companion_role_discuss_on_condition()
    {
      return Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero.Clan == Clan.PlayerClan;
    }

    private static bool companion_assign_role_on_condition()
    {
      return Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero.Clan == Clan.PlayerClan && Hero.OneToOneConversationHero.PartyBelongedTo != null;
    }

    private static bool companion_becomes_engineer_on_condition()
    {
      Hero conversationHero = Hero.OneToOneConversationHero;
      Hero roleHolder = conversationHero.PartyBelongedTo.GetRoleHolder(SkillEffect.PerkRole.Engineer);
      if (roleHolder != null)
      {
        TextObject textObject = new TextObject("{=QEp8t8u0}(Currently held by {COMPANION.LINK})");
        StringHelpers.SetCharacterProperties("COMPANION", roleHolder.CharacterObject, textObject);
        MBTextManager.SetTextVariable("CURRENTLY_HELD_ENGINEER", textObject, false);
      }
      else
        MBTextManager.SetTextVariable("CURRENTLY_HELD_ENGINEER", "{=kNQMkh3j}(Currently unassigned)", false);
      return roleHolder != conversationHero && MobilePartyHelper.IsHeroAssignableForEngineerInParty(conversationHero, conversationHero.PartyBelongedTo);
    }

    private static void companion_becomes_engineer_on_consequence()
    {
      Hero.OneToOneConversationHero.PartyBelongedTo.SetPartyEngineer(Hero.OneToOneConversationHero);
    }

    private static bool companion_becomes_surgeon_on_condition()
    {
      Hero conversationHero = Hero.OneToOneConversationHero;
      Hero roleHolder = conversationHero.PartyBelongedTo.GetRoleHolder(SkillEffect.PerkRole.Surgeon);
      if (roleHolder != null)
      {
        TextObject textObject = new TextObject("{=QEp8t8u0}(Currently held by {COMPANION.LINK})");
        StringHelpers.SetCharacterProperties("COMPANION", roleHolder.CharacterObject, textObject);
        MBTextManager.SetTextVariable("CURRENTLY_HELD_SURGEON", textObject, false);
      }
      else
        MBTextManager.SetTextVariable("CURRENTLY_HELD_SURGEON", "{=kNQMkh3j}(Currently unassigned)", false);
      return roleHolder != conversationHero && MobilePartyHelper.IsHeroAssignableForSurgeonInParty(conversationHero, conversationHero.PartyBelongedTo);
    }

    private static void companion_becomes_surgeon_on_consequence()
    {
      Hero.OneToOneConversationHero.PartyBelongedTo.SetPartySurgeon(Hero.OneToOneConversationHero);
    }

    private static bool companion_becomes_quartermaster_on_condition()
    {
      Hero conversationHero1 = Hero.OneToOneConversationHero;
      Hero roleHolder = conversationHero1.PartyBelongedTo.GetRoleHolder(SkillEffect.PerkRole.Quartermaster);
      if (roleHolder != null)
      {
        TextObject textObject = new TextObject("{=QEp8t8u0}(Currently held by {COMPANION.LINK})");
        StringHelpers.SetCharacterProperties("COMPANION", roleHolder.CharacterObject, textObject);
        MBTextManager.SetTextVariable("CURRENTLY_HELD_QUARTERMASTER", textObject, false);
      }
      else
        MBTextManager.SetTextVariable("CURRENTLY_HELD_QUARTERMASTER", "{=kNQMkh3j}(Currently unassigned)", false);
      Hero conversationHero2 = Hero.OneToOneConversationHero;
      return roleHolder != conversationHero1 && MobilePartyHelper.IsHeroAssignableForQuartermasterInParty(conversationHero2, Hero.OneToOneConversationHero.PartyBelongedTo);
    }

    private static void companion_becomes_quartermaster_on_consequence()
    {
      Hero.OneToOneConversationHero.PartyBelongedTo.SetPartyQuartermaster(Hero.OneToOneConversationHero);
    }

    private static bool companion_becomes_scout_on_condition()
    {
      Hero conversationHero = Hero.OneToOneConversationHero;
      Hero roleHolder = conversationHero.PartyBelongedTo.GetRoleHolder(SkillEffect.PerkRole.Scout);
      if (roleHolder != null)
      {
        TextObject textObject = new TextObject("{=QEp8t8u0}(Currently held by {COMPANION.LINK})");
        StringHelpers.SetCharacterProperties("COMPANION", roleHolder.CharacterObject, textObject);
        MBTextManager.SetTextVariable("CURRENTLY_HELD_SCOUT", textObject, false);
      }
      else
        MBTextManager.SetTextVariable("CURRENTLY_HELD_SCOUT", "{=kNQMkh3j}(Currently unassigned)", false);
      return roleHolder != conversationHero && MobilePartyHelper.IsHeroAssignableForScoutInParty(conversationHero, conversationHero.PartyBelongedTo);
    }

    private static void companion_becomes_scout_on_consequence()
    {
      Hero.OneToOneConversationHero.PartyBelongedTo.SetPartyScout(Hero.OneToOneConversationHero);
    }

    private static void companion_delete_party_role_consequence()
    {
      Hero.OneToOneConversationHero.PartyBelongedTo.RemoveHeroPerkRole(Hero.OneToOneConversationHero);
    }

    private static bool companion_fire_engineer_on_condition()
    {
      return Hero.OneToOneConversationHero.PartyBelongedTo.GetRoleHolder(SkillEffect.PerkRole.Engineer) == Hero.OneToOneConversationHero && Hero.OneToOneConversationHero != Hero.OneToOneConversationHero.PartyBelongedTo.LeaderHero;
    }

    private static bool companion_fire_surgeon_on_condition()
    {
      return Hero.OneToOneConversationHero.PartyBelongedTo.GetRoleHolder(SkillEffect.PerkRole.Surgeon) == Hero.OneToOneConversationHero && Hero.OneToOneConversationHero != Hero.OneToOneConversationHero.PartyBelongedTo.LeaderHero;
    }

    private static bool companion_fire_quartermaster_on_condition()
    {
      return Hero.OneToOneConversationHero.PartyBelongedTo.GetRoleHolder(SkillEffect.PerkRole.Quartermaster) == Hero.OneToOneConversationHero && Hero.OneToOneConversationHero != Hero.OneToOneConversationHero.PartyBelongedTo.LeaderHero;
    }

    private static bool companion_fire_scout_on_condition()
    {
      return Hero.OneToOneConversationHero.PartyBelongedTo.GetRoleHolder(SkillEffect.PerkRole.Scout) == Hero.OneToOneConversationHero && Hero.OneToOneConversationHero != Hero.OneToOneConversationHero.PartyBelongedTo.LeaderHero;
    }

    private bool companion_rescue_start_condition()
    {
      if (Campaign.Current.CurrentConversationContext != ConversationContext.FreedHero || Hero.OneToOneConversationHero?.CompanionOf != Clan.PlayerClan || CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Wanderer || this._partyScreenOpenedForPartyCreationAfterRescue)
        return false;
      MBTextManager.SetTextVariable("SALUTATION", Campaign.Current.ConversationManager.FindMatchingTextOrNull("str_salutation", CharacterObject.OneToOneConversationCharacter), false);
      return true;
    }

    private void companion_rescue_answer_options_join_party_consequence()
    {
      EndCaptivityAction.ApplyByReleasedAfterBattle(Hero.OneToOneConversationHero);
      Hero.OneToOneConversationHero.ChangeState(Hero.CharacterStates.Active);
      MobileParty.MainParty.AddElementToMemberRoster(CharacterObject.OneToOneConversationCharacter, 1);
    }

    private bool lead_a_party_clickable_condition(out TextObject reason)
    {
      int num = Clan.PlayerClan.CommanderLimit > Clan.PlayerClan.WarPartyComponents.Count ? 1 : 0;
      reason = TextObject.Empty;
      if (num != 0)
        return num != 0;
      reason = GameTexts.FindText("str_clan_doesnt_have_empty_party_slots");
      return num != 0;
    }

    private void companion_rescue_answer_options_lead_party_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.OpenPartyScreenForRescue);
    }

    private void OpenPartyScreenForRescue()
    {
      TroopRoster.CreateDummyTroopRoster().AddToCounts(CharacterObject.OneToOneConversationCharacter, 1);
      TroopRoster.CreateDummyTroopRoster();
      GameTexts.FindText("str_lord_party_name").SetCharacterProperties("TROOP", CharacterObject.OneToOneConversationCharacter);
      PartyScreenManager.OpenScreenAsCreateClanPartyForHero(Hero.OneToOneConversationHero, new PartyScreenClosedDelegate(this.PartyScreenClosed), new IsTroopTransferableDelegate(this.TroopTransferableDelegate));
      this._partyScreenOpenedForPartyCreationAfterRescue = true;
    }

    private void PartyScreenClosed(
      PartyBase leftOwnerParty,
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      PartyBase rightOwnerParty,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      bool fromCancel)
    {
      if (fromCancel)
        return;
      CharacterObject characterAtIndex = leftMemberRoster.GetCharacterAtIndex(0);
      EndCaptivityAction.ApplyByReleasedAfterBattle(characterAtIndex.HeroObject);
      characterAtIndex.HeroObject.ChangeState(Hero.CharacterStates.Active);
      MobileParty.MainParty.AddElementToMemberRoster(characterAtIndex, 1);
      this._partyCreatedAfterRescueForCompanion = true;
      MobileParty newMobileParty = Clan.PlayerClan.CreateNewMobileParty(characterAtIndex.HeroObject);
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) leftMemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character != characterAtIndex)
          newMobileParty.MemberRoster.Add(troopRosterElement);
      }
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) leftPrisonRoster.GetTroopRoster())
        newMobileParty.MemberRoster.Add(troopRosterElement);
    }

    private bool TroopTransferableDelegate(
      CharacterObject character,
      PartyScreenLogic.TroopType type,
      PartyScreenLogic.PartyRosterSide side,
      PartyBase LeftOwnerParty)
    {
      return !character.IsHero;
    }

    private bool party_screen_continue_conversation_condition()
    {
      return this._partyScreenOpenedForPartyCreationAfterRescue && Campaign.Current.CurrentConversationContext == ConversationContext.FreedHero && Hero.OneToOneConversationHero?.CompanionOf == Clan.PlayerClan && CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Wanderer;
    }

    private bool party_screen_opened_but_party_is_not_created_after_rescue_condition()
    {
      return !this._partyCreatedAfterRescueForCompanion && this._partyScreenOpenedForPartyCreationAfterRescue;
    }

    private void party_screen_opened_but_party_is_not_created_after_rescue_consequence()
    {
      this._partyScreenOpenedForPartyCreationAfterRescue = false;
    }

    private bool party_screen_opened_and_party_is_created_after_rescue_condition()
    {
      return this._partyCreatedAfterRescueForCompanion && this._partyScreenOpenedForPartyCreationAfterRescue;
    }

    private void end_rescue_companion()
    {
      this._partyCreatedAfterRescueForCompanion = false;
      this._partyScreenOpenedForPartyCreationAfterRescue = false;
      if (!Hero.OneToOneConversationHero.IsPrisoner)
        return;
      EndCaptivityAction.ApplyByReleasedAfterBattle(Hero.OneToOneConversationHero);
    }
  }
}
