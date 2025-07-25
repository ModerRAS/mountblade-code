// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.GovernorCampaignBehavior
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
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class GovernorCampaignBehavior : CampaignBehaviorBase
  {
    private const int CultureDialogueOptionCount = 3;
    private List<CultureObject> _availablePlayerKingdomCultures = new List<CultureObject>();
    private int _kingdomCreationCurrentCulturePageIndex;
    private CultureObject _kingdomCreationChosenCulture;
    private TextObject _kingdomCreationChosenName;

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
      CampaignEvents.OnHeroChangedClanEvent.AddNonSerializedListener((object) this, new Action<Hero, Clan>(this.OnHeroChangedClan));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
    }

    private void OnGameLoadFinished()
    {
      if (!MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.0")))
        return;
      foreach (Town allFief in Town.AllFiefs)
      {
        if (allFief.Governor != null && allFief != allFief.Governor.GovernorOf)
          allFief.Governor = (Hero) null;
      }
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      if (!settlement.IsTown && !settlement.IsCastle || settlement.Town.Governor == null)
        return;
      Hero governor = settlement.Town.Governor;
      if (governor.GetPerkValue(DefaultPerks.Charm.InBloom) && (double) MBRandom.RandomFloat <= (double) DefaultPerks.Charm.InBloom.SecondaryBonus)
      {
        Hero elementWithPredicate = settlement.Notables.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (x => x.IsFemale != governor.IsFemale));
        if (elementWithPredicate != null)
          ChangeRelationAction.ApplyRelationChangeBetweenHeroes(governor.Clan.Leader, elementWithPredicate, 1);
      }
      if (governor.GetPerkValue(DefaultPerks.Charm.YoungAndRespectful) && (double) MBRandom.RandomFloat <= (double) DefaultPerks.Charm.YoungAndRespectful.SecondaryBonus)
      {
        Hero elementWithPredicate = settlement.Notables.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (x => x.IsFemale == governor.IsFemale));
        if (elementWithPredicate != null)
          ChangeRelationAction.ApplyRelationChangeBetweenHeroes(governor.Clan.Leader, elementWithPredicate, 1);
      }
      if (governor.GetPerkValue(DefaultPerks.Charm.MeaningfulFavors) && (double) MBRandom.RandomFloat <= (double) DefaultPerks.Charm.MeaningfulFavors.SecondaryBonus)
      {
        foreach (Hero notable in (List<Hero>) settlement.Notables)
        {
          if ((double) notable.Power >= 200.0)
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(settlement.OwnerClan.Leader, notable, 1);
        }
      }
      SkillLevelingManager.OnSettlementGoverned(governor, settlement);
    }

    private void OnHeroChangedClan(Hero hero, Clan oldClan)
    {
      if (hero.GovernorOf == null || hero.GovernorOf.OwnerClan == hero.Clan)
        return;
      ChangeGovernorAction.RemoveGovernorOf(hero);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void AddDialogs(CampaignGameStarter starter)
    {
      starter.AddPlayerLine("governor_talk_start", "hero_main_options", "governor_talk_start_reply", "{=zBo78JQb}How are things doing here in {GOVERNOR_SETTLEMENT}?", new ConversationSentence.OnConditionDelegate(this.governor_talk_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("governor_talk_start_reply", "governor_talk_start_reply", "lord_pretalk", "{=!}{SETTLEMENT_DESCRIPTION}", new ConversationSentence.OnConditionDelegate(this.governor_talk_start_reply_on_condition), (ConversationSentence.OnConsequenceDelegate) null, 200);
      starter.AddPlayerLine("governor_talk_kingdom_creation_start", "hero_main_options", "governor_kingdom_creation_reply", "{=EKuB6Ohf}It is time to take a momentous step... It is time to proclaim a new kingdom.", new ConversationSentence.OnConditionDelegate(this.governor_talk_kingdom_creation_start_on_condition), new ConversationSentence.OnConsequenceDelegate(this.governor_talk_kingdom_creation_start_on_consequence), 200, new ConversationSentence.OnClickableConditionDelegate(this.governor_talk_kingdom_creation_start_clickable_condition));
      starter.AddDialogLine("governor_talk_kingdom_creation_reply", "governor_kingdom_creation_reply", "governor_kingdom_creation_culture_selection", "{=ZyNjXUHc}I am at your command.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("governor_talk_kingdom_creation_culture_selection", "governor_kingdom_creation_culture_selection", "governor_kingdom_creation_culture_selection_options", "{=jxEVSu98}The language of our documents, and our customary laws... Whose should we use?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("governor_talk_kingdom_creation_culture_selection_option", "governor_kingdom_creation_culture_selection_options", "governor_kingdom_creation_culture_selected", "{CULTURE_OPTION_0}", new ConversationSentence.OnConditionDelegate(this.governor_talk_kingdom_creation_culture_option_0_on_condition), new ConversationSentence.OnConsequenceDelegate(this.governor_talk_kingdom_creation_culture_option_0_on_consequence));
      starter.AddPlayerLine("governor_talk_kingdom_creation_culture_selection_option_2", "governor_kingdom_creation_culture_selection_options", "governor_kingdom_creation_culture_selected", "{CULTURE_OPTION_1}", new ConversationSentence.OnConditionDelegate(this.governor_talk_kingdom_creation_culture_option_1_on_condition), new ConversationSentence.OnConsequenceDelegate(this.governor_talk_kingdom_creation_culture_option_1_on_consequence));
      starter.AddPlayerLine("governor_talk_kingdom_creation_culture_selection_option_3", "governor_kingdom_creation_culture_selection_options", "governor_kingdom_creation_culture_selected", "{CULTURE_OPTION_2}", new ConversationSentence.OnConditionDelegate(this.governor_talk_kingdom_creation_culture_option_2_on_condition), new ConversationSentence.OnConsequenceDelegate(this.governor_talk_kingdom_creation_culture_option_2_on_consequence));
      starter.AddPlayerLine("governor_talk_kingdom_creation_culture_selection_other", "governor_kingdom_creation_culture_selection_options", "governor_kingdom_creation_culture_selection", "{=kcuNzSvf}I have another people in mind.", new ConversationSentence.OnConditionDelegate(this.governor_talk_kingdom_creation_culture_other_on_condition), new ConversationSentence.OnConsequenceDelegate(this.governor_talk_kingdom_creation_culture_other_on_consequence));
      starter.AddPlayerLine("governor_talk_kingdom_creation_culture_selection_cancel", "governor_kingdom_creation_culture_selection_options", "governor_kingdom_creation_exit", "{=hbzs5tLd}On second thought, perhaps now is not the right time.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("governor_talk_kingdom_creation_exit_reply", "governor_kingdom_creation_exit", "close_window", "{=ppi6eVos}As you wish.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("governor_talk_kingdom_creation_culture_selected", "governor_kingdom_creation_culture_selected", "governor_kingdom_creation_culture_selected_confirmation", "{=VOtKthQU}Yes. A kingdom using {CULTURE_ADJECTIVE} law would institute the following: {INITIAL_POLICY_NAMES}.", new ConversationSentence.OnConditionDelegate(this.governor_kingdom_creation_culture_selected_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("governor_talk_kingdom_creation_culture_selected_player_reply", "governor_kingdom_creation_culture_selected_confirmation", "governor_kingdom_creation_name_selection", "{=dzXaXKaC}Very well.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("governor_talk_kingdom_creation_culture_selected_player_reply_2", "governor_kingdom_creation_culture_selected_confirmation", "governor_kingdom_creation_culture_selection", "{=kTjsx8gN}Perhaps we should choose another set of laws and customs.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("governor_talk_kingdom_creation_name_selection", "governor_kingdom_creation_name_selection", "governor_kingdom_creation_name_selection_response", "{=wT1ducZX}Now. What will the kingdom be called?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("governor_talk_kingdom_creation_name_selection_player", "governor_kingdom_creation_name_selection_response", "governor_kingdom_creation_name_selection_prompted", "{=XRoG766S}I'll name it...", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.governor_talk_kingdom_creation_name_selection_on_consequence));
      starter.AddDialogLine("governor_talk_kingdom_creation_name_selection_response", "governor_kingdom_creation_name_selection_prompted", "governor_kingdom_creation_name_selected", "{=shf5aY3l}I'm listening...", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("governor_talk_kingdom_creation_name_selection_cancel", "governor_kingdom_creation_name_selection_response", "governor_kingdom_creation_exit", "{=7HpfrmIU}On a second thought... Now is not the right time to do this.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("governor_talk_kingdom_creation_name_selection_final_response", "governor_kingdom_creation_name_selected", "governor_kingdom_creation_finalization", "{=CzJZ5zhT}So it shall be proclaimed throughout your domain. May {KINGDOM_NAME} forever be victorious!", new ConversationSentence.OnConditionDelegate(this.governor_talk_kingdom_creation_finalization_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("governor_talk_kingdom_creation_finalization", "governor_kingdom_creation_finalization", "close_window", "{=VRbbIWNf}So it shall be.", new ConversationSentence.OnConditionDelegate(this.governor_talk_kingdom_creation_finalization_on_condition), new ConversationSentence.OnConsequenceDelegate(this.governor_talk_kingdom_creation_finalization_on_consequence));
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      if (victim.GovernorOf == null)
        return;
      ChangeGovernorAction.RemoveGovernorOf(victim);
    }

    private bool governor_talk_start_on_condition()
    {
      if (Hero.OneToOneConversationHero == null || Hero.OneToOneConversationHero.GovernorOf == null || Hero.OneToOneConversationHero.CurrentSettlement == null || !Hero.OneToOneConversationHero.CurrentSettlement.IsTown || Hero.OneToOneConversationHero.CurrentSettlement.Town != Hero.OneToOneConversationHero.GovernorOf || Hero.OneToOneConversationHero.GovernorOf.Owner.Owner != Hero.MainHero)
        return false;
      MBTextManager.SetTextVariable("GOVERNOR_SETTLEMENT", Hero.OneToOneConversationHero.CurrentSettlement.Name, false);
      return true;
    }

    private bool governor_talk_start_reply_on_condition()
    {
      Settlement currentSettlement = Hero.OneToOneConversationHero.CurrentSettlement;
      TextObject parent = TextObject.Empty;
      switch (currentSettlement.Town.GetProsperityLevel())
      {
        case SettlementComponent.ProsperityLevel.Low:
          parent = new TextObject("{=rbJEuVKg}Things could certainly be better, my {?HERO.GENDER}lady{?}lord{\\?}. The merchants say business is slow, and the people complain that goods are expensive and in short supply.");
          break;
        case SettlementComponent.ProsperityLevel.Mid:
          parent = new TextObject("{=HgdbSrq9}Things are all right, my {?HERO.GENDER}lady{?}lord{\\?}. The merchants say that they are breaking even, for the most part. Some prices are high, but most of what the people need is available.");
          break;
        case SettlementComponent.ProsperityLevel.High:
          parent = new TextObject("{=8G94SlPD}We are doing well, my {?HERO.GENDER}lady{?}lord{\\?}. The merchants say business is brisk, and everything the people need appears to be in good supply.");
          break;
      }
      StringHelpers.SetCharacterProperties("HERO", CharacterObject.PlayerCharacter, parent);
      MBTextManager.SetTextVariable("SETTLEMENT_DESCRIPTION", parent.ToString(), false);
      return true;
    }

    private bool governor_talk_kingdom_creation_start_on_condition()
    {
      return Clan.PlayerClan.Kingdom == null && Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero.GovernorOf != null && Hero.OneToOneConversationHero.GovernorOf.Settlement.MapFaction == Hero.MainHero.MapFaction;
    }

    private void governor_talk_kingdom_creation_start_on_consequence()
    {
      this._availablePlayerKingdomCultures.Clear();
      this._availablePlayerKingdomCultures = Campaign.Current.Models.KingdomCreationModel.GetAvailablePlayerKingdomCultures().ToList<CultureObject>();
      this._kingdomCreationCurrentCulturePageIndex = 0;
    }

    private bool governor_talk_kingdom_creation_start_clickable_condition(out TextObject explanation)
    {
      List<TextObject> explanations;
      bool flag = Campaign.Current.Models.KingdomCreationModel.IsPlayerKingdomCreationPossible(out explanations);
      string str = "";
      foreach (TextObject textObject in explanations)
      {
        str += (string) (object) textObject;
        if (textObject != explanations[explanations.Count - 1])
          str += "\n";
      }
      explanation = new TextObject(str);
      return flag;
    }

    private bool governor_talk_kingdom_creation_culture_option_0_on_condition()
    {
      return this.HandleAvailableCultureConditionAndText(0);
    }

    private bool governor_talk_kingdom_creation_culture_option_1_on_condition()
    {
      return this.HandleAvailableCultureConditionAndText(1);
    }

    private bool governor_talk_kingdom_creation_culture_option_2_on_condition()
    {
      return this.HandleAvailableCultureConditionAndText(2);
    }

    private bool HandleAvailableCultureConditionAndText(int index)
    {
      int cultureIndex = this.GetCultureIndex(index);
      if (this._availablePlayerKingdomCultures.Count <= cultureIndex)
        return false;
      TextObject text = new TextObject("{=mY6DbVfc}The language and laws of {CULTURE_NAME}.");
      text.SetTextVariable("CULTURE_NAME", FactionHelper.GetInformalNameForFactionCulture(this._availablePlayerKingdomCultures[cultureIndex]));
      MBTextManager.SetTextVariable("CULTURE_OPTION_" + index.ToString(), text, false);
      return true;
    }

    private int GetCultureIndex(int optionIndex)
    {
      return this._kingdomCreationCurrentCulturePageIndex * 3 + optionIndex;
    }

    private void governor_talk_kingdom_creation_culture_option_0_on_consequence()
    {
      this._kingdomCreationChosenCulture = this._availablePlayerKingdomCultures[this.GetCultureIndex(0)];
    }

    private void governor_talk_kingdom_creation_culture_option_1_on_consequence()
    {
      this._kingdomCreationChosenCulture = this._availablePlayerKingdomCultures[this.GetCultureIndex(1)];
    }

    private void governor_talk_kingdom_creation_culture_option_2_on_consequence()
    {
      this._kingdomCreationChosenCulture = this._availablePlayerKingdomCultures[this.GetCultureIndex(2)];
    }

    private bool governor_talk_kingdom_creation_culture_other_on_condition()
    {
      return this._availablePlayerKingdomCultures.Count > 3;
    }

    private void governor_talk_kingdom_creation_culture_other_on_consequence()
    {
      ++this._kingdomCreationCurrentCulturePageIndex;
      if (this._kingdomCreationCurrentCulturePageIndex <= MathF.Ceiling((float) this._availablePlayerKingdomCultures.Count / 3f) - 1)
        return;
      this._kingdomCreationCurrentCulturePageIndex = 0;
    }

    private bool governor_kingdom_creation_culture_selected_on_condition()
    {
      MBTextManager.SetTextVariable("INITIAL_POLICY_NAMES", GameTexts.GameTextHelper.MergeTextObjectsWithComma(this._kingdomCreationChosenCulture.DefaultPolicyList.Select<PolicyObject, TextObject>((Func<PolicyObject, TextObject>) (t => t.Name)).ToList<TextObject>(), true), false);
      MBTextManager.SetTextVariable("CULTURE_ADJECTIVE", FactionHelper.GetAdjectiveForFactionCulture(this._kingdomCreationChosenCulture), false);
      return true;
    }

    private void governor_talk_kingdom_creation_name_selection_on_consequence()
    {
      this._kingdomCreationChosenName = TextObject.Empty;
      InformationManager.ShowTextInquiry(new TextInquiryData(new TextObject("{=RuaA8t97}Kingdom Name").ToString(), string.Empty, true, true, GameTexts.FindText("str_done").ToString(), GameTexts.FindText("str_cancel").ToString(), new Action<string>(this.OnKingdomNameSelectionDone), new Action(this.OnKingdomNameSelectionCancel), textCondition: new Func<string, Tuple<bool, string>>(FactionHelper.IsKingdomNameApplicable)));
    }

    private void OnKingdomNameSelectionDone(string chosenName)
    {
      this._kingdomCreationChosenName = new TextObject(chosenName);
      Campaign.Current.ConversationManager.ContinueConversation();
    }

    private void OnKingdomNameSelectionCancel()
    {
      Campaign.Current.ConversationManager.EndConversation();
    }

    private bool governor_talk_kingdom_creation_finalization_on_condition()
    {
      MBTextManager.SetTextVariable("KINGDOM_NAME", this._kingdomCreationChosenName, false);
      return true;
    }

    private void governor_talk_kingdom_creation_finalization_on_consequence()
    {
      Campaign.Current.KingdomManager.CreateKingdom(this._kingdomCreationChosenName, this._kingdomCreationChosenName, this._kingdomCreationChosenCulture, Clan.PlayerClan, this._kingdomCreationChosenCulture.DefaultPolicyList);
    }
  }
}
