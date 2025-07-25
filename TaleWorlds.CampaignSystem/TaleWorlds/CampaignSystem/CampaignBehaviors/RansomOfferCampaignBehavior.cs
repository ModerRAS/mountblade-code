// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.RansomOfferCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class RansomOfferCampaignBehavior : CampaignBehaviorBase
  {
    private const float RansomOfferInitialChance = 0.2f;
    private const float RansomOfferChanceAfterRefusal = 0.12f;
    private const float RansomOfferChanceForPrisonersKeptByAI = 0.1f;
    private const float MapNotificationAutoDeclineDurationInHours = 48f;
    private const int AmountOfGoldLeftAfterRansom = 1000;
    private static TextObject RansomOfferDescriptionText = new TextObject("{=ZqJ92UN4}A courier with a ransom offer for the freedom of {CAPTIVE_HERO.NAME} has arrived.");
    private static TextObject RansomPanelDescriptionNpcHeldPrisonerText = new TextObject("{=4fXpOe4N}A courier arrives from the {CLAN_NAME}. They hold {CAPTIVE_HERO.NAME} and are demanding {GOLD_AMOUNT}{GOLD_ICON} in ransom.");
    private static TextObject RansomPanelDescriptionPlayerHeldPrisonerText = new TextObject("{=PutoRsWp}A courier arrives from the {CLAN_NAME}. They offer you {GOLD_AMOUNT}{GOLD_ICON} in ransom if you will free {CAPTIVE_HERO.NAME}.");
    private List<Hero> _heroesWithDeclinedRansomOffers = new List<Hero>();
    private Hero _currentRansomHero;
    private Hero _currentRansomPayer;
    private CampaignTime _currentRansomOfferDate;

    private static TextObject RansomPanelTitleText => new TextObject("{=ho5EndaV}Decision");

    private static TextObject RansomPanelAffirmativeText => new TextObject("{=Y94H6XnK}Accept");

    private static TextObject RansomPanelNegativeText => new TextObject("{=cOgmdp9e}Decline");

    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.DailyTickHero));
      CampaignEvents.OnRansomOfferedToPlayerEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnRansomOffered));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.HeroPrisonerReleased.AddNonSerializedListener((object) this, new Action<Hero, PartyBase, IFaction, EndCaptivityDetail>(this.OnHeroPrisonerReleased));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTick));
      CampaignEvents.PrisonersChangeInSettlement.AddNonSerializedListener((object) this, new Action<Settlement, FlattenedTroopRoster, Hero, bool>(this.OnPrisonersChangeInSettlement));
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnHeroPrisonerTaken));
    }

    private void OnHeroPrisonerTaken(PartyBase party, Hero hero)
    {
      this.HandleDeclineRansomOffer(hero);
    }

    private void DailyTickHero(Hero hero)
    {
      if (!hero.IsPrisoner || hero.Clan == null || hero.PartyBelongedToAsPrisoner == null || hero.PartyBelongedToAsPrisoner.MapFaction == null || hero.PartyBelongedToAsPrisoner.MapFaction.IsBanditFaction || hero == Hero.MainHero || hero.Clan.Lords.Count <= 1)
        return;
      this.ConsiderRansomPrisoner(hero);
    }

    private void ConsiderRansomPrisoner(Hero hero)
    {
      Clan captorClanOfPrisoner = this.GetCaptorClanOfPrisoner(hero);
      if (captorClanOfPrisoner == null)
        return;
      Hero hero1 = hero.Clan.Leader != hero ? hero.Clan.Leader : hero.Clan.Lords.Where<Hero>((Func<Hero, bool>) (t => t != hero.Clan.Leader)).GetRandomElementInefficiently<Hero>();
      if (hero1 == Hero.MainHero && hero1.IsPrisoner)
        return;
      if (captorClanOfPrisoner == Clan.PlayerClan || hero.Clan == Clan.PlayerClan)
      {
        if (this._currentRansomHero != null)
          return;
        float num1 = !this._heroesWithDeclinedRansomOffers.Contains(hero) ? 0.2f : 0.12f;
        if ((double) MBRandom.RandomFloat >= (double) num1)
          return;
        float num2 = (float) new SetPrisonerFreeBarterable(hero, captorClanOfPrisoner.Leader, hero.PartyBelongedToAsPrisoner, hero1).GetUnitValueForFaction((IFaction) hero.Clan) * 1.1f;
        if ((double) num2 <= 9.9999997473787516E-06 || (double) MBRandom.RandomFloat >= (double) num1 || (double) (hero1.Gold + 1000) < (double) num2)
          return;
        this.SetCurrentRansomHero(hero, hero1);
        StringHelpers.SetCharacterProperties("CAPTIVE_HERO", hero.CharacterObject, RansomOfferCampaignBehavior.RansomOfferDescriptionText);
        Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new RansomOfferMapNotification(hero, RansomOfferCampaignBehavior.RansomOfferDescriptionText));
      }
      else
      {
        if ((double) MBRandom.RandomFloat >= 0.10000000149011612)
          return;
        SetPrisonerFreeBarterable prisonerFreeBarterable = new SetPrisonerFreeBarterable(hero, captorClanOfPrisoner.Leader, hero.PartyBelongedToAsPrisoner, hero1);
        if (prisonerFreeBarterable.GetValueForFaction((IFaction) captorClanOfPrisoner) + prisonerFreeBarterable.GetValueForFaction((IFaction) hero.Clan) <= 0)
          return;
        Campaign.Current.BarterManager.ExecuteAiBarter((IFaction) captorClanOfPrisoner, (IFaction) hero.Clan, captorClanOfPrisoner.Leader, hero1, (Barterable) prisonerFreeBarterable);
      }
    }

    private Clan GetCaptorClanOfPrisoner(Hero hero)
    {
      return !hero.PartyBelongedToAsPrisoner.IsMobile ? hero.PartyBelongedToAsPrisoner.Settlement.OwnerClan : (!hero.PartyBelongedToAsPrisoner.MobileParty.IsMilitia && !hero.PartyBelongedToAsPrisoner.MobileParty.IsGarrison && !hero.PartyBelongedToAsPrisoner.MobileParty.IsCaravan && !hero.PartyBelongedToAsPrisoner.MobileParty.IsVillager || hero.PartyBelongedToAsPrisoner.Owner == null ? hero.PartyBelongedToAsPrisoner.MobileParty.ActualClan : (!hero.PartyBelongedToAsPrisoner.Owner.IsNotable ? hero.PartyBelongedToAsPrisoner.Owner.Clan : hero.PartyBelongedToAsPrisoner.Owner.CurrentSettlement.OwnerClan));
    }

    public void SetCurrentRansomHero(Hero hero, Hero ransomPayer = null)
    {
      this._currentRansomHero = hero;
      this._currentRansomPayer = ransomPayer;
      this._currentRansomOfferDate = hero != null ? CampaignTime.Now : CampaignTime.Never;
    }

    private void OnRansomOffered(Hero captiveHero)
    {
      Clan captorClanOfPrisoner = this.GetCaptorClanOfPrisoner(captiveHero);
      Clan clan = captiveHero.Clan == Clan.PlayerClan ? captorClanOfPrisoner : captiveHero.Clan;
      Hero ransompayer = captiveHero.Clan.Leader != captiveHero ? captiveHero.Clan.Leader : captiveHero.Clan.Lords.Where<Hero>((Func<Hero, bool>) (t => t != captiveHero.Clan.Leader)).GetRandomElementInefficiently<Hero>();
      int ransomPrice = (int) Math.Min((float) ransompayer.Gold, (float) new SetPrisonerFreeBarterable(captiveHero, captorClanOfPrisoner.Leader, captiveHero.PartyBelongedToAsPrisoner, ransompayer).GetUnitValueForFaction((IFaction) captiveHero.Clan) * 1.1f);
      TextObject parent = captorClanOfPrisoner == Clan.PlayerClan ? RansomOfferCampaignBehavior.RansomPanelDescriptionPlayerHeldPrisonerText : RansomOfferCampaignBehavior.RansomPanelDescriptionNpcHeldPrisonerText;
      parent.SetTextVariable("CLAN_NAME", clan.Name);
      parent.SetTextVariable("GOLD_AMOUNT", ransomPrice);
      parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
      StringHelpers.SetCharacterProperties("CAPTIVE_HERO", captiveHero.CharacterObject, parent);
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      InformationManager.ShowInquiry(new InquiryData(RansomOfferCampaignBehavior.RansomPanelTitleText.ToString(), parent.ToString(), true, true, RansomOfferCampaignBehavior.RansomPanelAffirmativeText.ToString(), RansomOfferCampaignBehavior.RansomPanelNegativeText.ToString(), (Action) (() => this.AcceptRansomOffer(ransomPrice)), new Action(this.DeclineRansomOffer)), true);
    }

    private void AcceptRansomOffer(int ransomPrice)
    {
      if (this._heroesWithDeclinedRansomOffers.Contains(this._currentRansomHero))
        this._heroesWithDeclinedRansomOffers.Remove(this._currentRansomHero);
      GiveGoldAction.ApplyBetweenCharacters(this._currentRansomPayer, this.GetCaptorClanOfPrisoner(this._currentRansomHero).Leader, ransomPrice);
      EndCaptivityAction.ApplyByRansom(this._currentRansomHero, this._currentRansomHero.Clan.Leader);
      Campaign.Current.CampaignBehaviorManager.GetBehavior<IStatisticsCampaignBehavior>()?.OnPlayerAcceptedRansomOffer(ransomPrice);
    }

    private void DeclineRansomOffer()
    {
      if (this._currentRansomHero.IsPrisoner && this._currentRansomHero.IsAlive && !this._heroesWithDeclinedRansomOffers.Contains(this._currentRansomHero))
        this._heroesWithDeclinedRansomOffers.Add(this._currentRansomHero);
      this.SetCurrentRansomHero((Hero) null);
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      this.HandleDeclineRansomOffer(victim);
    }

    private void HandleDeclineRansomOffer(Hero victim)
    {
      if (this._currentRansomHero == null || victim != this._currentRansomHero && victim != Hero.MainHero)
        return;
      CampaignEventDispatcher.Instance.OnRansomOfferCancelled(this._currentRansomHero);
      this.DeclineRansomOffer();
    }

    private void OnPrisonersChangeInSettlement(
      Settlement settlement,
      FlattenedTroopRoster roster,
      Hero prisoner,
      bool takenFromDungeon)
    {
      if (takenFromDungeon || this._currentRansomHero == null)
        return;
      if (prisoner == this._currentRansomHero)
      {
        CampaignEventDispatcher.Instance.OnRansomOfferCancelled(this._currentRansomHero);
        this.DeclineRansomOffer();
      }
      else
      {
        if (roster == null)
          return;
        foreach (FlattenedTroopRosterElement troopRosterElement in roster)
        {
          if (troopRosterElement.Troop.IsHero && troopRosterElement.Troop.HeroObject == this._currentRansomHero)
          {
            CampaignEventDispatcher.Instance.OnRansomOfferCancelled(this._currentRansomHero);
            this.DeclineRansomOffer();
            break;
          }
        }
      }
    }

    private void OnHeroPrisonerReleased(
      Hero prisoner,
      PartyBase party,
      IFaction capturerFaction,
      EndCaptivityDetail detail)
    {
      this.HandleDeclineRansomOffer(prisoner);
    }

    private void HourlyTick()
    {
      if (this._currentRansomHero == null || (double) this._currentRansomOfferDate.ElapsedHoursUntilNow < 48.0)
        return;
      CampaignEventDispatcher.Instance.OnRansomOfferCancelled(this._currentRansomHero);
      this.DeclineRansomOffer();
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<Hero>>("_heroesWithDeclinedRansomOffers", ref this._heroesWithDeclinedRansomOffers);
      dataStore.SyncData<Hero>("_currentRansomHero", ref this._currentRansomHero);
      dataStore.SyncData<Hero>("_currentRansomPayer", ref this._currentRansomPayer);
      dataStore.SyncData<CampaignTime>("_currentRansomOfferDate", ref this._currentRansomOfferDate);
    }
  }
}
