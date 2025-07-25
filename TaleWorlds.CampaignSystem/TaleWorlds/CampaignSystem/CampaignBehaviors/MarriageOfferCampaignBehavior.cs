// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.MarriageOfferCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.SceneInformationPopupTypes;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class MarriageOfferCampaignBehavior : 
    CampaignBehaviorBase,
    IMarriageOfferCampaignBehavior,
    ICampaignBehavior
  {
    private const int MarriageOfferCooldownDurationAsWeeks = 1;
    private const int OfferRelationGainAmountWithTheMarriageClan = 10;
    private const float MapNotificationAutoDeclineDurationInHours = 48f;
    private readonly TextObject MarriageOfferPanelExplanationText = new TextObject("{=CZwrlJMJ}A courier with a marriage offer for {CLAN_MEMBER.NAME} from {OFFERING_CLAN_NAME} has arrived.");
    private Hero _currentOfferedPlayerClanHero;
    private Hero _currentOfferedOtherClanHero;
    private CampaignTime _lastMarriageOfferTime = CampaignTime.Zero;

    internal bool IsThereActiveMarriageOffer
    {
      get
      {
        return this._currentOfferedPlayerClanHero != null && this._currentOfferedOtherClanHero != null;
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickClanEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.DailyTickClan));
      CampaignEvents.OnMarriageOfferedToPlayerEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero>(this.OnMarriageOfferedToPlayer));
      CampaignEvents.OnMarriageOfferCanceledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero>(this.OnMarriageOfferCanceled));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTick));
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnHeroPrisonerTaken));
      CampaignEvents.HeroesMarried.AddNonSerializedListener((object) this, new Action<Hero, Hero, bool>(this.OnHeroesMarried));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.ArmyCreated.AddNonSerializedListener((object) this, new Action<Army>(this.OnArmyCreated));
      CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
      CampaignEvents.CharacterBecameFugitive.AddNonSerializedListener((object) this, new Action<Hero>(this.CharacterBecameFugitive));
      CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
      CampaignEvents.HeroRelationChanged.AddNonSerializedListener((object) this, new Action<Hero, Hero, int, bool, ChangeRelationAction.ChangeRelationDetail, Hero, Hero>(this.OnHeroRelationChanged));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Hero>("_currentOfferedPlayerClanHero", ref this._currentOfferedPlayerClanHero);
      dataStore.SyncData<Hero>("_currentOfferedOtherClanHero", ref this._currentOfferedOtherClanHero);
      dataStore.SyncData<CampaignTime>("_lastMarriageOfferTime", ref this._lastMarriageOfferTime);
    }

    public void CreateMarriageOffer(
      Hero currentOfferedPlayerClanHero,
      Hero currentOfferedOtherClanHero)
    {
      this._currentOfferedPlayerClanHero = currentOfferedPlayerClanHero;
      this._currentOfferedOtherClanHero = currentOfferedOtherClanHero;
      this._lastMarriageOfferTime = CampaignTime.Now;
      this.MarriageOfferPanelExplanationText.SetCharacterProperties("CLAN_MEMBER", this._currentOfferedPlayerClanHero.CharacterObject);
      this.MarriageOfferPanelExplanationText.SetTextVariable("OFFERING_CLAN_NAME", this._currentOfferedOtherClanHero.Clan.Name);
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new MarriageOfferMapNotification(this._currentOfferedPlayerClanHero, this._currentOfferedOtherClanHero, this.MarriageOfferPanelExplanationText));
    }

    public MBBindingList<TextObject> GetMarriageAcceptedConsequences()
    {
      MBBindingList<TextObject> acceptedConsequences = new MBBindingList<TextObject>();
      TextObject text1 = GameTexts.FindText("str_marriage_consequence_hero_join_clan");
      if (Campaign.Current.Models.MarriageModel.GetClanAfterMarriage(this._currentOfferedPlayerClanHero, this._currentOfferedOtherClanHero) == this._currentOfferedPlayerClanHero.Clan)
      {
        text1.SetCharacterProperties("HERO", this._currentOfferedOtherClanHero.CharacterObject);
        text1.SetTextVariable("CLAN_NAME", this._currentOfferedPlayerClanHero.Clan.Name);
      }
      else
      {
        text1.SetCharacterProperties("HERO", this._currentOfferedPlayerClanHero.CharacterObject);
        text1.SetTextVariable("CLAN_NAME", this._currentOfferedOtherClanHero.Clan.Name);
      }
      acceptedConsequences.Add(text1);
      TextObject text2 = GameTexts.FindText("str_marriage_consequence_clan_relation");
      text2.SetTextVariable("CLAN_NAME", this._currentOfferedOtherClanHero.Clan.Name);
      text2.SetTextVariable("AMOUNT", 10.ToString("+0;-#"));
      acceptedConsequences.Add(text2);
      return acceptedConsequences;
    }

    public void OnMarriageOfferAcceptedOnPopUp()
    {
      if (this._currentOfferedPlayerClanHero != Hero.MainHero)
        MBInformationManager.ShowSceneNotification((SceneNotificationData) new MarriageSceneNotificationItem(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero, CampaignTime.Now));
      ChangeRelationAction.ApplyPlayerRelation(this._currentOfferedOtherClanHero.Clan.Leader, 10);
      MarriageAction.Apply(this._currentOfferedPlayerClanHero, this._currentOfferedOtherClanHero);
      this.FinalizeMarriageOffer();
    }

    public void OnMarriageOfferDeclinedOnPopUp()
    {
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
    }

    public void OnMarriageOfferedToPlayer(Hero suitor, Hero maiden)
    {
    }

    public void OnMarriageOfferCanceled(Hero suitor, Hero maiden) => this.FinalizeMarriageOffer();

    private void DailyTickClan(Clan consideringClan)
    {
      if (!this.CanOfferMarriageForClan(consideringClan) || (double) MBRandom.RandomFloat < (double) Campaign.Current.Models.MapDistanceModel.GetDistance(Clan.PlayerClan.FactionMidSettlement, consideringClan.FactionMidSettlement) / (double) Campaign.MaximumDistanceBetweenTwoSettlements - 0.5)
        return;
      foreach (Hero hero in (List<Hero>) Clan.PlayerClan.Heroes)
      {
        if (hero != Hero.MainHero && hero.CanMarry() && this.ConsiderMarriageForPlayerClanMember(hero, consideringClan))
          break;
      }
    }

    private void HourlyTick()
    {
      if (!this.IsThereActiveMarriageOffer || (double) this._lastMarriageOfferTime.ElapsedHoursUntilNow < 48.0)
        return;
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
    }

    private void OnHeroPrisonerTaken(PartyBase capturer, Hero prisoner)
    {
      if (!this.IsThereActiveMarriageOffer || prisoner != Hero.MainHero && prisoner != this._currentOfferedPlayerClanHero && prisoner != this._currentOfferedOtherClanHero)
        return;
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
    }

    private void OnHeroesMarried(Hero hero1, Hero hero2, bool showNotification = true)
    {
      if (!this.IsThereActiveMarriageOffer || (hero1 != this._currentOfferedPlayerClanHero || hero2 != this._currentOfferedOtherClanHero) && (hero1 != this._currentOfferedOtherClanHero || hero2 != this._currentOfferedPlayerClanHero))
        return;
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      if (!this.IsThereActiveMarriageOffer || victim != Hero.MainHero && victim != this._currentOfferedPlayerClanHero && victim != this._currentOfferedOtherClanHero)
        return;
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
    }

    private void OnArmyCreated(Army army)
    {
      if (!this.IsThereActiveMarriageOffer || this._currentOfferedPlayerClanHero.PartyBelongedTo?.Army == null && this._currentOfferedOtherClanHero.PartyBelongedTo?.Army == null)
        return;
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
    }

    private void OnMapEventStarted(
      MapEvent mapEvent,
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      if (!this.IsThereActiveMarriageOffer || this._currentOfferedPlayerClanHero.PartyBelongedTo?.MapEvent == null && this._currentOfferedOtherClanHero.PartyBelongedTo?.MapEvent == null)
        return;
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
    }

    private void CharacterBecameFugitive(Hero hero)
    {
      if (!this.IsThereActiveMarriageOffer || this._currentOfferedPlayerClanHero.IsActive && this._currentOfferedOtherClanHero.IsActive)
        return;
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
    }

    private void OnWarDeclared(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail declareWarDetail)
    {
      if (!this.IsThereActiveMarriageOffer || Campaign.Current.Models.MarriageModel.IsCoupleSuitableForMarriage(this._currentOfferedPlayerClanHero, this._currentOfferedOtherClanHero) && Campaign.Current.Models.MarriageModel.ShouldNpcMarriageBetweenClansBeAllowed(Clan.PlayerClan, this._currentOfferedOtherClanHero.Clan))
        return;
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
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
      if (!this.IsThereActiveMarriageOffer || effectiveHero.Clan != this._currentOfferedPlayerClanHero.Clan && effectiveHero.Clan != this._currentOfferedOtherClanHero.Clan || effectiveHeroGainedRelationWith.Clan != this._currentOfferedPlayerClanHero.Clan && effectiveHeroGainedRelationWith.Clan != this._currentOfferedOtherClanHero.Clan || Campaign.Current.Models.MarriageModel.ShouldNpcMarriageBetweenClansBeAllowed(this._currentOfferedPlayerClanHero.Clan, this._currentOfferedOtherClanHero.Clan))
        return;
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      if (!this.IsThereActiveMarriageOffer || this._currentOfferedPlayerClanHero.Clan != clan && this._currentOfferedOtherClanHero.Clan != clan || Campaign.Current.Models.MarriageModel.ShouldNpcMarriageBetweenClansBeAllowed(this._currentOfferedPlayerClanHero.Clan, this._currentOfferedOtherClanHero.Clan))
        return;
      CampaignEventDispatcher.Instance.OnMarriageOfferCanceled(this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedOtherClanHero : this._currentOfferedPlayerClanHero, this._currentOfferedPlayerClanHero.IsFemale ? this._currentOfferedPlayerClanHero : this._currentOfferedOtherClanHero);
    }

    private bool CanOfferMarriageForClan(Clan consideringClan)
    {
      return !this.IsThereActiveMarriageOffer && (double) this._lastMarriageOfferTime.ElapsedWeeksUntilNow >= 1.0 && !Hero.MainHero.IsPrisoner && consideringClan != Clan.PlayerClan && Campaign.Current.Models.MarriageModel.IsClanSuitableForMarriage(consideringClan) && Campaign.Current.Models.MarriageModel.ShouldNpcMarriageBetweenClansBeAllowed(Clan.PlayerClan, consideringClan);
    }

    private bool ConsiderMarriageForPlayerClanMember(Hero playerClanHero, Clan consideringClan)
    {
      MarriageModel marriageModel = Campaign.Current.Models.MarriageModel;
      foreach (Hero hero in (List<Hero>) consideringClan.Heroes)
      {
        float num = marriageModel.NpcCoupleMarriageChance(playerClanHero, hero);
        if ((double) num > 0.0 && (double) MBRandom.RandomFloat < (double) num)
        {
          foreach (Romance.RomanticState romanticState in Romance.RomanticStateList)
          {
            if (romanticState.Level >= Romance.RomanceLevelEnum.MatchMadeByFamily && (romanticState.Person1 == playerClanHero || romanticState.Person2 == playerClanHero || romanticState.Person1 == hero || romanticState.Person2 == hero))
              return false;
          }
          this.CreateMarriageOffer(playerClanHero, hero);
          return true;
        }
      }
      return false;
    }

    private void FinalizeMarriageOffer()
    {
      this._currentOfferedPlayerClanHero = (Hero) null;
      this._currentOfferedOtherClanHero = (Hero) null;
    }
  }
}
