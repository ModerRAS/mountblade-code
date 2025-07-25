// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.VassalAndMercenaryOfferCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class VassalAndMercenaryOfferCampaignBehavior : CampaignBehaviorBase
  {
    private const float MercenaryOfferCreationChance = 0.02f;
    private const float VassalOfferCreationChance = 0.01f;
    private const int MercenaryOfferCancelTimeInHours = 48;
    private static readonly TextObject MercenaryOfferDecisionPopUpExplanationText = new TextObject("{=TENbJKpP}The {OFFERED_KINGDOM_NAME} is offering you work as a mercenary, paying {GOLD_AMOUNT}{GOLD_ICON} per influence point that you would gain from fighting on their behalf. Do you accept?");
    private static readonly TextObject MercenaryOfferPanelNotificationText = new TextObject("{=FA2QZc7Q}A courier arrives, bearing a message from {OFFERED_KINGDOM_LEADER.NAME}. {?OFFERED_KINGDOM_LEADER.GENDER}She{?}He{\\?} is offering you a contract as a mercenary.");
    private static readonly TextObject VassalOfferPanelNotificationText = new TextObject("{=7ouzFASf}A courier arrives, bearing a message from {OFFERED_KINGDOM_LEADER.NAME}. {?OFFERED_KINGDOM_LEADER.GENDER}She{?}He{\\?} remarks on your growing reputation, and asks if you would consider pledging yourself as a vassal of the {OFFERED_KINGDOM_NAME}. You should speak in person if you are interested.");
    private Tuple<Kingdom, CampaignTime> _currentMercenaryOffer;
    private Dictionary<Kingdom, CampaignTime> _vassalOffers = new Dictionary<Kingdom, CampaignTime>();
    private bool _stopOffers;

    private static TextObject DecisionPopUpTitleText => new TextObject("{=ho5EndaV}Decision");

    private static TextObject DecisionPopUpAffirmativeText => new TextObject("{=Y94H6XnK}Accept");

    private static TextObject DecisionPopUpNegativeText => new TextObject("{=cOgmdp9e}Decline");

    public override void RegisterEvents()
    {
      if (this._stopOffers)
        return;
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnHeroPrisonerTaken));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      CampaignEvents.OnVassalOrMercenaryServiceOfferedToPlayerEvent.AddNonSerializedListener((object) this, new Action<Kingdom>(this.OnVassalOrMercenaryServiceOfferedToPlayer));
      CampaignEvents.OnVassalOrMercenaryServiceOfferCanceledEvent.AddNonSerializedListener((object) this, new Action<Kingdom>(this.OnVassalOrMercenaryServiceOfferCanceled));
      CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
      CampaignEvents.HeroRelationChanged.AddNonSerializedListener((object) this, new Action<Hero, Hero, int, bool, ChangeRelationAction.ChangeRelationDetail, Hero, Hero>(this.OnHeroRelationChanged));
      CampaignEvents.KingdomDestroyedEvent.AddNonSerializedListener((object) this, new Action<Kingdom>(this.OnKingdomDestroyed));
      CampaignEvents.OnPlayerCharacterChangedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, MobileParty, bool>(this.OnPlayerCharacterChanged));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Tuple<Kingdom, CampaignTime>>("_currentMercenaryOffer", ref this._currentMercenaryOffer);
      dataStore.SyncData<Dictionary<Kingdom, CampaignTime>>("_vassalOffers", ref this._vassalOffers);
      dataStore.SyncData<bool>("_stopOffers", ref this._stopOffers);
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddVassalDialogues(campaignGameStarter);
    }

    private void DailyTick()
    {
      if (this._stopOffers || Clan.PlayerClan.Tier <= Campaign.Current.Models.ClanTierModel.MinClanTier)
        return;
      if (this._currentMercenaryOffer != null)
      {
        if ((double) this._currentMercenaryOffer.Item2.ElapsedHoursUntilNow < 48.0 && this.MercenaryKingdomSelectionConditionsHold(this._currentMercenaryOffer.Item1))
          return;
        CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled(this._currentMercenaryOffer.Item1);
      }
      else
      {
        float randomFloat = MBRandom.RandomFloat;
        if ((double) randomFloat <= 0.019999999552965164 && this.CanPlayerClanReceiveMercenaryOffer())
        {
          Kingdom elementWithPredicate = Kingdom.All.GetRandomElementWithPredicate<Kingdom>(new Func<Kingdom, bool>(this.MercenaryKingdomSelectionConditionsHold));
          if (elementWithPredicate == null)
            return;
          this.CreateMercenaryOffer(elementWithPredicate);
        }
        else
        {
          if ((double) randomFloat > 0.0099999997764825821 || !this.CanPlayerClanReceiveVassalOffer())
            return;
          Kingdom elementWithPredicate = Kingdom.All.GetRandomElementWithPredicate<Kingdom>(new Func<Kingdom, bool>(this.VassalKingdomSelectionConditionsHold));
          if (elementWithPredicate == null)
            return;
          this.CreateVassalOffer(elementWithPredicate);
        }
      }
    }

    private bool VassalKingdomSelectionConditionsHold(Kingdom kingdom)
    {
      return !this._vassalOffers.ContainsKey(kingdom) && FactionHelper.CanPlayerOfferVassalage(kingdom, out List<IFaction> _, out List<IFaction> _);
    }

    private bool MercenaryKingdomSelectionConditionsHold(Kingdom kingdom)
    {
      return FactionHelper.CanPlayerOfferMercenaryService(kingdom, out List<IFaction> _, out List<IFaction> _);
    }

    private void OnHeroPrisonerTaken(PartyBase captor, Hero prisoner)
    {
      if (prisoner != Hero.MainHero || this._currentMercenaryOffer == null)
        return;
      CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled(this._currentMercenaryOffer.Item1);
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      if (clan != Clan.PlayerClan || newKingdom == null)
        return;
      if (detail == ChangeKingdomAction.ChangeKingdomActionDetail.JoinAsMercenary && this._currentMercenaryOffer != null && this._currentMercenaryOffer.Item1 != newKingdom)
      {
        CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled(this._currentMercenaryOffer.Item1);
      }
      else
      {
        if (detail != ChangeKingdomAction.ChangeKingdomActionDetail.JoinKingdom && detail != ChangeKingdomAction.ChangeKingdomActionDetail.CreateKingdom)
          return;
        this._stopOffers = true;
        if (this._currentMercenaryOffer != null)
          CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled(this._currentMercenaryOffer.Item1);
        foreach (KeyValuePair<Kingdom, CampaignTime> keyValuePair in this._vassalOffers.ToDictionary<KeyValuePair<Kingdom, CampaignTime>, Kingdom, CampaignTime>((Func<KeyValuePair<Kingdom, CampaignTime>, Kingdom>) (x => x.Key), (Func<KeyValuePair<Kingdom, CampaignTime>, CampaignTime>) (x => x.Value)))
          CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled(keyValuePair.Key);
      }
    }

    private void OnVassalOrMercenaryServiceOfferedToPlayer(Kingdom kingdom)
    {
      if (this._currentMercenaryOffer == null || this._currentMercenaryOffer.Item1 != kingdom)
        return;
      this.CreateMercenaryOfferDecisionPopUp(kingdom);
    }

    private void OnVassalOrMercenaryServiceOfferCanceled(Kingdom kingdom)
    {
      this.ClearKingdomOffer(kingdom);
    }

    private void OnWarDeclared(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail detail)
    {
      if (faction1 != Clan.PlayerClan && faction2 != Clan.PlayerClan || this._currentMercenaryOffer == null || this.MercenaryKingdomSelectionConditionsHold(this._currentMercenaryOffer.Item1))
        return;
      CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled(this._currentMercenaryOffer.Item1);
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
      if (effectiveHero != Hero.MainHero && effectiveHeroGainedRelationWith != Hero.MainHero || this._currentMercenaryOffer == null || this.MercenaryKingdomSelectionConditionsHold(this._currentMercenaryOffer.Item1))
        return;
      CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled(this._currentMercenaryOffer.Item1);
    }

    private void OnKingdomDestroyed(Kingdom destroyedKingdom)
    {
      if ((this._currentMercenaryOffer == null || this._currentMercenaryOffer.Item1 != destroyedKingdom) && !this._vassalOffers.ContainsKey(destroyedKingdom))
        return;
      CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled(destroyedKingdom);
    }

    private void OnPlayerCharacterChanged(
      Hero oldPlayer,
      Hero newPlayer,
      MobileParty newMainParty,
      bool isMainPartyChanged)
    {
      if (this._currentMercenaryOffer != null)
        CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled(this._currentMercenaryOffer.Item1);
      if (this._vassalOffers.IsEmpty<KeyValuePair<Kingdom, CampaignTime>>())
        return;
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if (this._vassalOffers.ContainsKey(kingdom))
          CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled(kingdom);
      }
    }

    private void ClearKingdomOffer(Kingdom kingdom)
    {
      if (this._currentMercenaryOffer != null && this._currentMercenaryOffer.Item1 == kingdom)
      {
        this._currentMercenaryOffer = (Tuple<Kingdom, CampaignTime>) null;
      }
      else
      {
        if (this._vassalOffers.Count <= 0)
          return;
        this._vassalOffers.Clear();
      }
    }

    private bool CanPlayerClanReceiveMercenaryOffer()
    {
      return Clan.PlayerClan.Kingdom == null && Clan.PlayerClan.Tier == Campaign.Current.Models.ClanTierModel.MercenaryEligibleTier;
    }

    public void CreateMercenaryOffer(Kingdom kingdom)
    {
      this._currentMercenaryOffer = new Tuple<Kingdom, CampaignTime>(kingdom, CampaignTime.Now);
      VassalAndMercenaryOfferCampaignBehavior.MercenaryOfferPanelNotificationText.SetCharacterProperties("OFFERED_KINGDOM_LEADER", kingdom.Leader.CharacterObject);
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new MercenaryOfferMapNotification(kingdom, VassalAndMercenaryOfferCampaignBehavior.MercenaryOfferPanelNotificationText));
    }

    private void CreateMercenaryOfferDecisionPopUp(Kingdom kingdom)
    {
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      int factorToJoinKingdom = Campaign.Current.Models.MinorFactionsModel.GetMercenaryAwardFactorToJoinKingdom(Clan.PlayerClan, kingdom, true);
      VassalAndMercenaryOfferCampaignBehavior.MercenaryOfferDecisionPopUpExplanationText.SetTextVariable("OFFERED_KINGDOM_NAME", kingdom.Name);
      VassalAndMercenaryOfferCampaignBehavior.MercenaryOfferDecisionPopUpExplanationText.SetTextVariable("GOLD_AMOUNT", factorToJoinKingdom);
      InformationManager.ShowInquiry(new InquiryData(VassalAndMercenaryOfferCampaignBehavior.DecisionPopUpTitleText.ToString(), VassalAndMercenaryOfferCampaignBehavior.MercenaryOfferDecisionPopUpExplanationText.ToString(), true, true, VassalAndMercenaryOfferCampaignBehavior.DecisionPopUpAffirmativeText.ToString(), VassalAndMercenaryOfferCampaignBehavior.DecisionPopUpNegativeText.ToString(), new Action(this.MercenaryOfferAccepted), new Action(this.MercenaryOfferDeclined)));
    }

    private void MercenaryOfferAccepted()
    {
      Kingdom kingdom = this._currentMercenaryOffer.Item1;
      this.ClearKingdomOffer(this._currentMercenaryOffer.Item1);
      int factorToJoinKingdom = Campaign.Current.Models.MinorFactionsModel.GetMercenaryAwardFactorToJoinKingdom(Clan.PlayerClan, kingdom, true);
      ChangeKingdomAction.ApplyByJoinFactionAsMercenary(Clan.PlayerClan, kingdom, factorToJoinKingdom);
    }

    private void MercenaryOfferDeclined()
    {
      this.ClearKingdomOffer(this._currentMercenaryOffer.Item1);
    }

    private bool CanPlayerClanReceiveVassalOffer()
    {
      return (Clan.PlayerClan.Kingdom == null || Clan.PlayerClan.IsUnderMercenaryService) && Clan.PlayerClan.Tier >= Campaign.Current.Models.ClanTierModel.VassalEligibleTier;
    }

    public void CreateVassalOffer(Kingdom kingdom)
    {
      this._vassalOffers.Add(kingdom, CampaignTime.Now);
      VassalAndMercenaryOfferCampaignBehavior.VassalOfferPanelNotificationText.SetTextVariable("OFFERED_KINGDOM_NAME", kingdom.Name);
      VassalAndMercenaryOfferCampaignBehavior.VassalOfferPanelNotificationText.SetCharacterProperties("OFFERED_KINGDOM_LEADER", kingdom.Leader.CharacterObject);
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new VassalOfferMapNotification(kingdom, VassalAndMercenaryOfferCampaignBehavior.VassalOfferPanelNotificationText));
    }

    private void AddVassalDialogues(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("valid_vassal_offer_start", "start", "valid_vassal_offer_player_response", "{=aDABE6Md}Greetings, {PLAYER.NAME}. I am glad that you received my message. Are you interested in my offer?", new ConversationSentence.OnConditionDelegate(this.valid_vassal_offer_start_condition), (ConversationSentence.OnConsequenceDelegate) null, int.MaxValue);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_accepts_response", "valid_vassal_offer_player_response", "vassal_offer_start_oath", "{=IHXqZSnt}Yes, I am ready to accept your offer.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_declines_response", "valid_vassal_offer_player_response", "vassal_offer_king_response_to_decline", "{=FAuoq2gT}While I am honored, I must decline your offer.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.vassal_conversation_end_consequence));
      campaignGameStarter.AddDialogLine("vassal_offer_king_response_to_accept_continue", "vassal_offer_start_oath", "vassal_offer_king_response_to_accept_start_oath_1_response", "{=54PbMkNw}Good. Then repeat the words of the oath with me: {OATH_LINE_1}", new ConversationSentence.OnConditionDelegate(this.conversation_set_oath_phrases_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_oath_1", "vassal_offer_king_response_to_accept_start_oath_1_response", "vassal_offer_king_response_to_accept_start_oath_2", "{=!}{OATH_LINE_1}", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_oath_1_decline", "vassal_offer_king_response_to_accept_start_oath_1_response", "vassal_offer_king_response_to_accept_start_oath_decline", "{=8bLwh9yy}Excuse me, {?CONVERSATION_NPC.GENDER}my lady{?}sir{\\?}. But I feel I need to think about this.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("vassal_offer_lord_oath_2", "vassal_offer_king_response_to_accept_start_oath_2", "vassal_offer_king_response_to_accept_start_oath_2_response", "{=!}{OATH_LINE_2}", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_oath_2", "vassal_offer_king_response_to_accept_start_oath_2_response", "vassal_offer_king_response_to_accept_start_oath_3", "{=!}{OATH_LINE_2}", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_oath_2_decline", "vassal_offer_king_response_to_accept_start_oath_2_response", "vassal_offer_king_response_to_accept_start_oath_decline", "{=LKdrCaTO}{?CONVERSATION_NPC.GENDER}My lady{?}Sir{\\?}, may I ask for some time to think about this?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("vassal_offer_lord_oath_3", "vassal_offer_king_response_to_accept_start_oath_3", "vassal_offer_king_response_to_accept_start_oath_3_response", "{=!}{OATH_LINE_3}", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_oath_3", "vassal_offer_king_response_to_accept_start_oath_3_response", "vassal_offer_king_response_to_accept_start_oath_4", "{=!}{OATH_LINE_3}", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_oath_3_decline", "vassal_offer_king_response_to_accept_start_oath_3_response", "vassal_offer_king_response_to_accept_start_oath_decline", "{=aa5F4vP5}My {?CONVERSATION_NPC.GENDER}lady{?}lord{\\?}, please give me more time to think about this.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("vassal_offer_lord_oath_4", "vassal_offer_king_response_to_accept_start_oath_4", "vassal_offer_king_response_to_accept_start_oath_4_response", "{=!}{OATH_LINE_4}", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_oath_4", "vassal_offer_king_response_to_accept_start_oath_4_response", "lord_give_oath_10", "{=!}{OATH_LINE_4}", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_oath_4_decline", "vassal_offer_king_response_to_accept_start_oath_4_response", "vassal_offer_king_response_to_accept_start_oath_decline", "{=aupbQveh}{?CONVERSATION_NPC.GENDER}Madame{?}Sir{\\?}, I must have more time to consider this.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("vassal_offer_king_response_to_decline_during_oath", "vassal_offer_king_response_to_accept_start_oath_decline", "lord_start", "{=vueZBBYB}Indeed. I am not sure why you didn't make up your mind before coming to speak with me.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.vassal_conversation_end_consequence));
      campaignGameStarter.AddDialogLine("vassal_offer_king_response_to_decline_continue", "vassal_offer_king_response_to_decline", "lord_start", "{=Lo2kJuhK}I am sorry to hear that.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("invalid_vassal_offer_start", "start", "invalid_vassal_offer_player_response", "{=!}{INVALID_REASON}[if:idle_angry][ib:closed]", new ConversationSentence.OnConditionDelegate(this.invalid_vassal_offer_start_condition), (ConversationSentence.OnConsequenceDelegate) null, int.MaxValue);
      campaignGameStarter.AddPlayerLine("vassal_offer_player_accepts_response_2", "invalid_vassal_offer_player_response", "lord_start", "{=AmBEgOyq}I see...", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.vassal_conversation_end_consequence));
    }

    private bool valid_vassal_offer_start_condition()
    {
      if (PlayerEncounter.Current != null && PlayerEncounter.Current.IsJoinedBattle || Hero.OneToOneConversationHero == null)
        return false;
      IFaction mapFaction = Hero.OneToOneConversationHero.MapFaction;
      if ((mapFaction != null ? (!mapFaction.IsKingdomFaction ? 1 : 0) : 0) != 0)
        return false;
      KeyValuePair<Kingdom, CampaignTime> keyValuePair = this._vassalOffers.FirstOrDefault<KeyValuePair<Kingdom, CampaignTime>>((Func<KeyValuePair<Kingdom, CampaignTime>, bool>) (o => o.Key == Hero.OneToOneConversationHero?.MapFaction));
      bool flag = Hero.OneToOneConversationHero != null && keyValuePair.Key != null && Hero.OneToOneConversationHero == keyValuePair.Key.Leader && FactionHelper.CanPlayerOfferVassalage((Kingdom) Hero.OneToOneConversationHero.MapFaction, out List<IFaction> _, out List<IFaction> _);
      if (flag)
      {
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter);
        Hero.OneToOneConversationHero.SetHasMet();
        float kingdomToGetClan = Campaign.Current.Models.DiplomacyModel.GetScoreOfKingdomToGetClan((Kingdom) Hero.OneToOneConversationHero.MapFaction, Clan.PlayerClan);
        flag &= (double) kingdomToGetClan > 0.0;
      }
      return flag;
    }

    private bool conversation_set_oath_phrases_on_condition()
    {
      Hero leader = Hero.OneToOneConversationHero.MapFaction.Leader;
      string stringId = Hero.OneToOneConversationHero.Culture.StringId;
      MBTextManager.SetTextVariable("FACTION_TITLE", leader.IsFemale ? Campaign.Current.ConversationManager.FindMatchingTextOrNull("str_liege_title_female", leader.CharacterObject) : Campaign.Current.ConversationManager.FindMatchingTextOrNull("str_liege_title", leader.CharacterObject), false);
      StringHelpers.SetCharacterProperties("LORD", CharacterObject.OneToOneConversationCharacter);
      switch (stringId)
      {
        case "empire":
          MBTextManager.SetTextVariable("OATH_LINE_1", "{=ya8VF98X}I swear by my ancestors that you are lawful {FACTION_TITLE}.", false);
          break;
        case "khuzait":
          MBTextManager.SetTextVariable("OATH_LINE_1", "{=PP8VeNiC}I swear that you are my {?LORD.GENDER}khatun{?}khan{\\?}, my {?LORD.GENDER}mother{?}father{\\?}, my protector...", false);
          break;
        default:
          MBTextManager.SetTextVariable("OATH_LINE_1", "{=MqIg6Mh2}I swear homage to you as lawful {FACTION_TITLE}.", false);
          break;
      }
      switch (stringId)
      {
        case "empire":
          MBTextManager.SetTextVariable("OATH_LINE_2", "{=vuEyisBW}I affirm that you are executor of the will of the Senate and people...", false);
          break;
        case "khuzait":
          MBTextManager.SetTextVariable("OATH_LINE_2", "{=QSPMKz2R}You are the chosen of the Sky, and I shall follow your banner as long as my breath remains...", false);
          break;
        case "battania":
          MBTextManager.SetTextVariable("OATH_LINE_2", "{=OHJYAaW5}The powers of Heaven and of the Earth have entrusted to you the guardianship of this sacred land...", false);
          break;
        case "aserai":
          MBTextManager.SetTextVariable("OATH_LINE_2", "{=kc3tLqGy}You command the sons of Asera in war and govern them in peace...", false);
          break;
        case "sturgia":
          MBTextManager.SetTextVariable("OATH_LINE_2", "{=Qs7qs3b0}You are the shield of our people against the wolves of the forest, the steppe and the sea.", false);
          break;
        default:
          MBTextManager.SetTextVariable("OATH_LINE_2", "{=PypPEj5Z}I will be your loyal {?PLAYER.GENDER}follower{?}man{\\?} as long as my breath remains...", false);
          break;
      }
      switch (stringId)
      {
        case "empire":
          MBTextManager.SetTextVariable("OATH_LINE_3", "{=LWFDXeQc}Furthermore, I accept induction into the army of Calradia, at the rank of archon.", false);
          break;
        case "khuzait":
          MBTextManager.SetTextVariable("OATH_LINE_3", "{=8lOCOcXw}Your word shall direct the strike of my sword and the flight of my arrow...", false);
          break;
        case "aserai":
          MBTextManager.SetTextVariable("OATH_LINE_3", "{=bue9AShm}I swear to fight your enemies and give shelter and water to your friends...", false);
          break;
        case "sturgia":
          MBTextManager.SetTextVariable("OATH_LINE_3", "{=U3u2D6Ze}I give you my word and bond, to stand by your banner in battle so long as my breath remains...", false);
          break;
        case "battania":
          MBTextManager.SetTextVariable("OATH_LINE_3", "{=UwbhGhGw}I shall stand by your side and not foresake you, and fight until my life leaves my body...", false);
          break;
        default:
          MBTextManager.SetTextVariable("OATH_LINE_3", "{=2o7U1bNV}..and I will be at your side to fight your enemies should you need my sword.", false);
          break;
      }
      switch (stringId)
      {
        case "empire":
          MBTextManager.SetTextVariable("OATH_LINE_4", "{=EsF8sEaQ}And as such, that you are my commander, and I shall follow you wherever you lead.", false);
          break;
        case "battania":
          MBTextManager.SetTextVariable("OATH_LINE_4", "{=6KbDn1HS}I shall heed your judgements and pay you the tribute that is your due, so that this land may have a strong protector.", false);
          break;
        case "khuzait":
          MBTextManager.SetTextVariable("OATH_LINE_4", "{=xDzxaYed}Your word shall divide the spoils of victory and the bounties of peace.", false);
          break;
        case "aserai":
          MBTextManager.SetTextVariable("OATH_LINE_4", "{=qObicX7y}I swear to heed your judgements according to the laws of the Aserai, and ensure that my kinfolk heed them as well...", false);
          break;
        case "sturgia":
          MBTextManager.SetTextVariable("OATH_LINE_4", "{=HpWYfcgw}..and to uphold your rights under the laws of the Sturgians, and the rights of your kin, and to avenge their blood as thought it were my own.", false);
          break;
        default:
          MBTextManager.SetTextVariable("OATH_LINE_4", "{=waoSd6tj}.. and I shall defend your rights and the rights of your legitimate heirs.", false);
          break;
      }
      StringHelpers.SetCharacterProperties("CONVERSATION_NPC", CharacterObject.OneToOneConversationCharacter);
      return true;
    }

    private bool invalid_vassal_offer_start_condition()
    {
      if (Hero.OneToOneConversationHero != null)
      {
        IFaction mapFaction = Hero.OneToOneConversationHero.MapFaction;
        if ((mapFaction != null ? (!mapFaction.IsKingdomFaction ? 1 : 0) : 0) == 0 && (PlayerEncounter.Current == null || PlayerEncounter.Current.EncounterState != PlayerEncounterState.FreeHeroes && PlayerEncounter.Current.EncounterState != PlayerEncounterState.CaptureHeroes))
        {
          Kingdom offerKingdom = (Kingdom) Hero.OneToOneConversationHero.MapFaction;
          KeyValuePair<Kingdom, CampaignTime> keyValuePair = this._vassalOffers.FirstOrDefault<KeyValuePair<Kingdom, CampaignTime>>((Func<KeyValuePair<Kingdom, CampaignTime>, bool>) (o => o.Key == offerKingdom));
          List<IFaction> playerWars = new List<IFaction>();
          List<IFaction> warsOfFactionToJoin = new List<IFaction>();
          bool flag = Hero.OneToOneConversationHero != null && keyValuePair.Key != null && Hero.OneToOneConversationHero == keyValuePair.Key.Leader && !FactionHelper.CanPlayerOfferVassalage(offerKingdom, out playerWars, out warsOfFactionToJoin);
          if (flag)
          {
            Hero.OneToOneConversationHero.SetHasMet();
            TextObject textObject = TextObject.Empty;
            if ((double) offerKingdom.Leader.GetRelationWithPlayer() < (double) Campaign.Current.Models.DiplomacyModel.MinimumRelationWithConversationCharacterToJoinKingdom)
              textObject = new TextObject("{=niWfuEeh}Well, {PLAYER.NAME}. Are you here about that offer I made? Seeing as what's happened between then and now, surely you realize that that offer no longer stands?");
            else if (playerWars.Contains((IFaction) offerKingdom))
              textObject = new TextObject("{=RACyH7N5}Greetings, {PLAYER.NAME}. I suppose that you're here because of that message I sent you. But we are at war now. I can no longer make that offer to you.");
            else if (warsOfFactionToJoin.Intersect<IFaction>((IEnumerable<IFaction>) playerWars).Count<IFaction>() != playerWars.Count)
            {
              textObject = new TextObject("{=lynev8Lk}Greetings, {PLAYER.NAME}. I suppose that you're here because of that message I sent you. But the diplomatic situation has changed. You are at war with {WAR_KINGDOMS}, and we are at peace with them. Until that changes, I can no longer accept your fealty.");
              List<TextObject> textObjects = new List<TextObject>();
              foreach (IFaction faction in playerWars)
              {
                if (!warsOfFactionToJoin.Contains(faction))
                  textObjects.Add(faction.Name);
              }
              textObject.SetTextVariable("WAR_KINGDOMS", GameTexts.GameTextHelper.MergeTextObjectsWithComma(textObjects, true));
            }
            textObject.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter);
            MBTextManager.SetTextVariable("INVALID_REASON", textObject, false);
          }
          return flag;
        }
      }
      return false;
    }

    private void vassal_conversation_end_consequence()
    {
      CampaignEventDispatcher.Instance.OnVassalOrMercenaryServiceOfferCanceled((Kingdom) Hero.OneToOneConversationHero.MapFaction);
    }
  }
}
