// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PerkResetCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PerkResetCampaignBehavior : CampaignBehaviorBase
  {
    private Hero _heroForPerkReset;
    private CharacterAttribute _attributeForPerkReset;
    private SkillObject _selectedSkillForReset;
    private CampaignTime _warningTime;

    public int PerkResetCost
    {
      get
      {
        return this._selectedSkillForReset == null ? 0 : this._heroForPerkReset.GetSkillValue(this._selectedSkillForReset) * 40;
      }
    }

    public bool HasEnoughSkillValueForReset
    {
      get
      {
        return this._selectedSkillForReset != null && this._heroForPerkReset.GetSkillValue(this._selectedSkillForReset) >= 25;
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<CampaignTime>("_warningTime", ref this._warningTime);
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    protected void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("arena_intro_7", "arena_intro_perk_reset", "arena_intro_4", "{=ocIutUyu}Also, here at the arena, we think a lot about the arts of war - and many other related skills as well. Often you pick up certain habits while learning your skills. If you need to change those, to practice one of your skills in a certain way, we can help you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_master_ask_player_perk_reset", "arena_master_talk", "arena_master_ask_retrain", "{=Y7tz9D28}These teachers who help people hone their skills and learn new habits... Can you help me find one?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_ask_retrain", "arena_master_ask_retrain", "arena_master_choose_hero", "{=NyWXSHH2}Of course. Was this for you, or someone else?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_master_ask_player_perk_reset_2", "arena_master_choose_hero", "arena_master_reset_attribute", "{=3VxA6HaZ}This is for me.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_player_select_player_for_perk_reset_on_consequence));
      campaignGameStarter.AddPlayerLine("arena_master_ask_clan_member_perk_reset", "arena_master_choose_hero", "arena_master_reset_attribute", "{=1OKEl18y}This is for {COMPANION.NAME}", new ConversationSentence.OnConditionDelegate(this.conversation_player_has_single_clan_member_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_player_has_single_clan_member_on_consequence));
      campaignGameStarter.AddPlayerLine("arena_master_ask_clan_member_perk_reset_2", "arena_master_choose_hero", "arena_master_retrain_ask_clan_members", "{=GvcotJmH}I would like you to help hone the skills of a member of my clan.", new ConversationSentence.OnConditionDelegate(this.conversation_player_has_multiple_clan_members_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_list_clan_members_on_condition));
      campaignGameStarter.AddDialogLine("arena_master_retrain_ask_clan_member", "arena_master_retrain_ask_clan_members", "arena_master_select_clan_member", "{=WRwA0VVS}Which one of your clan members did you wish me to retrain?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddRepeatablePlayerLine("arena_master_select_clan_member", "arena_master_select_clan_member", "arena_master_reset_attribute", "{=!}{CLAN_MEMBER.NAME}", "{=ElG1LnCA}I am thinking of someone else.", "arena_master_retrain_ask_clan_members", new ConversationSentence.OnConditionDelegate(this.conversation_arena_player_select_clan_member_multiple_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_player_select_clan_member_for_perk_reset_on_consequence));
      campaignGameStarter.AddPlayerLine("arena_master_select_clan_member_cancel", "arena_master_select_clan_member", "arena_master_pre_talk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_reset_attribute", "arena_master_reset_attribute", "arena_master_select_attribute", "{=95jXfam8}What kind of skill is this, speaking broadly? What trait would you say it reflects?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddRepeatablePlayerLine("arena_master_select_attribute", "arena_master_select_attribute", "arena_master_reset_perks", "{=!}{ATTRIBUTE_NAME}", "{=0G8Q3AZv}I am thinking of a different attribute.", "arena_master_reset_attribute", new ConversationSentence.OnConditionDelegate(this.conversation_arena_player_select_attribute_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_player_select_attribute_on_consequence));
      campaignGameStarter.AddPlayerLine("arena_master_select_attribute_cancel", "arena_master_select_attribute", "arena_master_pre_talk", "{=g0JOQQl0}I don't want to do this right now.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_reset_perks", "arena_master_reset_perks", "arena_master_select_skill", "{=pGyO41lb}Yes, I can do that. What skill exactly do you have in mind?", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_set_skills_for_reset_on_consequence));
      campaignGameStarter.AddRepeatablePlayerLine("arena_master_select_skill", "arena_master_select_skill", "arena_master_pay_for_reset", "{=8PV1oB9W}I wish to focus on {SKILL_NAME}.", "{=Z9pq58h4}I am thinking of a different skill.", "arena_master_reset_perks", new ConversationSentence.OnConditionDelegate(this.conversation_arena_player_select_skill_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_player_select_skill_on_consequence));
      campaignGameStarter.AddPlayerLine("arena_master_select_skill_cancel", "arena_master_select_skill", "arena_master_reset_attribute", "{=CH7b5LaX}I have changed my mind.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_list_perks_on_condition));
      campaignGameStarter.AddDialogLine("arena_master_pay_for_reset", "arena_master_pay_for_reset", "arena_master_accept_perk_reset", "{=q3J9Wb8N}If you can afford to pay {GOLD_AMOUNT} {GOLD_ICON} for it, I can teach you right now. Are you sure you want to go through with it?", new ConversationSentence.OnConditionDelegate(this.conversation_arena_ask_price_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_selected_skill_invalid", "arena_master_pay_for_reset", "arena_master_reset_attribute", "{=!}{NOT_ENOUGH_SKILL_TEXT}", new ConversationSentence.OnConditionDelegate(this.conversation_arena_skill_not_developed_enough_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_skill_not_developed_enough_on_consequence));
      campaignGameStarter.AddPlayerLine("arena_master_accept_perk_reset1", "arena_master_accept_perk_reset", "arena_master_perk_reset_closure", "{=Q0UjYw7V}Yes I am sure.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_player_accept_perk_reset_on_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.conversation_arena_player_accept_price));
      campaignGameStarter.AddPlayerLine("arena_master_reject_perk_reset2", "arena_master_accept_perk_reset", "arena_master_pre_talk", "{=SLaJsVnq}Actually, I have changed my mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("arena_master_perk_reset_closure", "arena_master_perk_reset_closure", "arena_master_perk_reset_final", "{=IsBVxopm}Excellent! Is there anything else I can help you with?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("arena_master_perk_reset_final1", "arena_master_perk_reset_final", "arena_master_reset_attribute", "{=aCGgBilx}I would like help fine-tuning another skill.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_train_another_skill_on_condition));
      campaignGameStarter.AddPlayerLine("arena_master_perk_reset_final2", "arena_master_perk_reset_final", "arena_master_retrain_ask_clan_members", "{=c4tfVgqb}I would like you to help another member of my clan hone their skills.", new ConversationSentence.OnConditionDelegate(this.conversation_player_has_multiple_clan_members_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_train_another_clan_member_on_condition));
      campaignGameStarter.AddPlayerLine("arena_master_perk_reset_final3", "arena_master_perk_reset_final", "arena_master_pre_talk", "{=Dz7E79QP}You have already helped enough. Thank you.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_arena_finish_perk_reset_dialogs_on_consequence));
    }

    private void conversation_player_has_single_clan_member_on_consequence()
    {
      this._heroForPerkReset = this.GetClanMembersInParty()[0];
      this.SetAttributesForDialog();
    }

    private void conversation_arena_skill_not_developed_enough_on_consequence()
    {
      this.SetAttributesForDialog();
    }

    private bool conversation_arena_skill_not_developed_enough_on_condition()
    {
      TextObject textObject;
      if (this._heroForPerkReset == Hero.MainHero)
      {
        textObject = new TextObject("{=FN3xNnd1}You really don't have much experience in this skill, I can't help you much. Maybe we can work on something else?");
      }
      else
      {
        textObject = new TextObject("{=wGAmNQGE}{CHARACTER.NAME} does not have much experience in this skill, I can't help {?CHARACTER.GENDER}her{?}him{\\?} much. Maybe we can work on something else?");
        textObject.SetCharacterProperties("CHARACTER", this._heroForPerkReset.CharacterObject);
      }
      MBTextManager.SetTextVariable("NOT_ENOUGH_SKILL_TEXT", textObject, false);
      return !this.HasEnoughSkillValueForReset;
    }

    private void conversation_arena_finish_perk_reset_dialogs_on_consequence()
    {
      this._heroForPerkReset = (Hero) null;
      this._attributeForPerkReset = (CharacterAttribute) null;
      this._selectedSkillForReset = (SkillObject) null;
    }

    private void conversation_arena_train_another_skill_on_condition()
    {
      this.SetAttributesForDialog();
    }

    private void conversation_arena_train_another_clan_member_on_condition()
    {
      this.SetHeroesForDialog();
    }

    private void conversation_arena_player_accept_perk_reset_on_consequence()
    {
      GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, this.PerkResetCost);
      this.ResetPerkTreeForHero(this._heroForPerkReset, this._selectedSkillForReset);
    }

    private bool conversation_arena_player_accept_price(out TextObject explanation)
    {
      if (Hero.MainHero.Gold < this.PerkResetCost)
      {
        explanation = new TextObject("{=QOWyEJrm}You don't have enough denars.");
        return false;
      }
      explanation = new TextObject("{=ePmSvu1s}{AMOUNT}{GOLD_ICON}");
      explanation.SetTextVariable("AMOUNT", this.PerkResetCost);
      return true;
    }

    private void conversation_arena_player_select_skill_on_consequence()
    {
      this._selectedSkillForReset = ConversationSentence.SelectedRepeatObject as SkillObject;
    }

    private bool conversation_arena_ask_price_on_condition()
    {
      if (!this.HasEnoughSkillValueForReset)
        return false;
      MBTextManager.SetTextVariable("GOLD_AMOUNT", this.PerkResetCost);
      MBTextManager.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">", false);
      return true;
    }

    private bool conversation_arena_player_select_skill_on_condition()
    {
      if (!(ConversationSentence.CurrentProcessedRepeatObject is SkillObject processedRepeatObject))
        return false;
      ConversationSentence.SelectedRepeatLine.SetTextVariable("SKILL_NAME", processedRepeatObject.Name);
      return true;
    }

    private void conversation_arena_set_skills_for_reset_on_consequence()
    {
      this.SetSkillsForDialog();
    }

    private void conversation_arena_list_perks_on_condition() => this.SetAttributesForDialog();

    private void conversation_arena_player_select_attribute_on_consequence()
    {
      this._attributeForPerkReset = ConversationSentence.SelectedRepeatObject as CharacterAttribute;
      this.SetSkillsForDialog();
    }

    private bool conversation_arena_player_select_attribute_on_condition()
    {
      if (!(ConversationSentence.CurrentProcessedRepeatObject is CharacterAttribute processedRepeatObject))
        return false;
      ConversationSentence.SelectedRepeatLine.SetTextVariable("ATTRIBUTE_NAME", processedRepeatObject.Name);
      return true;
    }

    private void conversation_arena_player_select_clan_member_for_perk_reset_on_consequence()
    {
      this._heroForPerkReset = ConversationSentence.SelectedRepeatObject as Hero;
      this.SetAttributesForDialog();
    }

    private void conversation_arena_player_select_player_for_perk_reset_on_consequence()
    {
      this._heroForPerkReset = Hero.MainHero;
      this.SetAttributesForDialog();
    }

    private void conversation_arena_list_clan_members_on_condition() => this.SetHeroesForDialog();

    private bool conversation_arena_player_select_clan_member_multiple_on_condition()
    {
      if (!(ConversationSentence.CurrentProcessedRepeatObject is Hero processedRepeatObject))
        return false;
      ConversationSentence.SelectedRepeatLine.SetCharacterProperties("CLAN_MEMBER", processedRepeatObject.CharacterObject);
      return true;
    }

    private bool conversation_player_has_multiple_clan_members_on_condition()
    {
      return this.GetClanMembersInParty().Count > 1;
    }

    private bool conversation_player_has_single_clan_member_on_condition()
    {
      List<Hero> clanMembersInParty = this.GetClanMembersInParty();
      if (clanMembersInParty.Count != 1)
        return false;
      StringHelpers.SetCharacterProperties("COMPANION", clanMembersInParty[0].CharacterObject);
      return true;
    }

    private void DailyTick()
    {
      if (Clan.PlayerClan.Companions.Count > Clan.PlayerClan.CompanionLimit)
      {
        if (this._warningTime != CampaignTime.Zero)
        {
          if ((double) this._warningTime.ElapsedDaysUntilNow <= 6.0)
            return;
          this.RemoveACompanionFromPlayerParty();
        }
        else
          this.WarnPlayerAboutCompanionLimit();
      }
      else
        this._warningTime = CampaignTime.Zero;
    }

    private void SetHeroesForDialog()
    {
      ConversationSentence.SetObjectsToRepeatOver((IReadOnlyList<object>) this.GetClanMembersInParty());
    }

    private void SetAttributesForDialog()
    {
      ConversationSentence.SetObjectsToRepeatOver((IReadOnlyList<object>) Attributes.All.ToList<CharacterAttribute>());
    }

    private void SetSkillsForDialog()
    {
      ConversationSentence.SetObjectsToRepeatOver((IReadOnlyList<object>) this._attributeForPerkReset.Skills.ToList<SkillObject>());
    }

    private void ResetPerkTreeForHero(Hero hero, SkillObject skill)
    {
      this.ClearkPerksForSkill(hero, skill);
    }

    private void ClearPermanentBonusesIfExists(Hero hero, PerkObject perk)
    {
      if (!hero.GetPerkValue(perk))
        return;
      if (perk == DefaultPerks.Crafting.VigorousSmith)
        hero.HeroDeveloper.RemoveAttribute(DefaultCharacterAttributes.Vigor, 1);
      else if (perk == DefaultPerks.Crafting.StrongSmith)
        hero.HeroDeveloper.RemoveAttribute(DefaultCharacterAttributes.Control, 1);
      else if (perk == DefaultPerks.Crafting.EnduringSmith)
        hero.HeroDeveloper.RemoveAttribute(DefaultCharacterAttributes.Endurance, 1);
      else if (perk == DefaultPerks.Crafting.WeaponMasterSmith)
      {
        hero.HeroDeveloper.RemoveFocus(DefaultSkills.OneHanded, 1);
        hero.HeroDeveloper.RemoveFocus(DefaultSkills.TwoHanded, 1);
      }
      else if (perk == DefaultPerks.Athletics.Durable)
        hero.HeroDeveloper.RemoveAttribute(DefaultCharacterAttributes.Endurance, 1);
      else if (perk == DefaultPerks.Athletics.Steady)
      {
        hero.HeroDeveloper.RemoveAttribute(DefaultCharacterAttributes.Control, 1);
      }
      else
      {
        if (perk != DefaultPerks.Athletics.Strong)
          return;
        hero.HeroDeveloper.RemoveAttribute(DefaultCharacterAttributes.Vigor, 1);
      }
    }

    private void ClearkPerksForSkill(Hero hero, SkillObject skill)
    {
      foreach (PerkObject perk in (List<PerkObject>) PerkObject.All)
      {
        if (perk.Skill == skill)
        {
          this.ClearPermanentBonusesIfExists(hero, perk);
          hero.SetPerkValueInternal(perk, false);
        }
      }
      PartyBase.MainParty.MemberRoster.UpdateVersion();
      hero.HitPoints = MathF.Min(hero.HitPoints, hero.MaxHitPoints);
    }

    private void RemoveACompanionFromPlayerParty()
    {
      int count = Clan.PlayerClan.Companions.Count;
      int num = MBRandom.RandomInt(count);
      for (int index = 0; index < count; ++index)
      {
        Hero companion = Clan.PlayerClan.Companions[(index + num) % count];
        if (companion.PartyBelongedTo?.MapEvent == null && companion.CurrentSettlement?.Party.MapEvent == null && !Campaign.Current.IssueManager.IssueSolvingCompanionList.Contains<Hero>(companion))
        {
          KillCharacterAction.ApplyByRemove(companion, true);
          break;
        }
      }
    }

    private void WarnPlayerAboutCompanionLimit()
    {
      MBInformationManager.AddQuickInformation(new TextObject("{=xDikJxbO}Your party is above your companion limits. Due to that some of the companions might leave soon."), soundEventPath: "event:/ui/notification/relation");
      this._warningTime = CampaignTime.Now;
    }

    private List<Hero> GetClanMembersInParty()
    {
      return PartyBase.MainParty.MemberRoster.GetTroopRoster().Where<TroopRosterElement>((Func<TroopRosterElement, bool>) (m => m.Character.IsHero && m.Character.HeroObject.Clan == Clan.PlayerClan && !m.Character.HeroObject.IsHumanPlayerCharacter)).Select<TroopRosterElement, Hero>((Func<TroopRosterElement, Hero>) (t => t.Character.HeroObject)).ToList<Hero>();
    }
  }
}
