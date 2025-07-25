// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PlayerTrackCompanionBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PlayerTrackCompanionBehavior : CampaignBehaviorBase
  {
    public Dictionary<Hero, CampaignTime> ScatteredCompanions = new Dictionary<Hero, CampaignTime>();

    public override void RegisterEvents()
    {
      CampaignEvents.CharacterBecameFugitive.AddNonSerializedListener((object) this, new Action<Hero>(this.HeroBecameFugitive));
      CampaignEvents.CompanionRemoved.AddNonSerializedListener((object) this, new Action<Hero, RemoveCompanionAction.RemoveCompanionDetail>(this.CompanionRemoved));
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.SettlementEntered));
      CampaignEvents.NewCompanionAdded.AddNonSerializedListener((object) this, new Action<Hero>(this.CompanionAdded));
      CampaignEvents.HeroPrisonerReleased.AddNonSerializedListener((object) this, new Action<Hero, PartyBase, IFaction, EndCaptivityDetail>(this.OnHeroPrisonerReleased));
      CampaignEvents.CanBeGovernorOrHavePartyRoleEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, bool>(this.CanBeGovernorOrHavePartyRole));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<Hero, CampaignTime>>("ScatteredCompanions", ref this.ScatteredCompanions);
    }

    private void CanBeGovernorOrHavePartyRole(Hero hero, ref bool canBeGovernorOrHavePartyRole)
    {
      if (!this.ScatteredCompanions.ContainsKey(hero))
        return;
      canBeGovernorOrHavePartyRole = false;
    }

    private void AddHeroToScatteredCompanions(Hero hero)
    {
      if (!hero.IsPlayerCompanion)
        return;
      if (!this.ScatteredCompanions.ContainsKey(hero))
        this.ScatteredCompanions.Add(hero, CampaignTime.Now);
      else
        this.ScatteredCompanions[hero] = CampaignTime.Now;
    }

    private void HeroBecameFugitive(Hero hero) => this.AddHeroToScatteredCompanions(hero);

    private void OnHeroPrisonerReleased(
      Hero releasedHero,
      PartyBase party,
      IFaction capturerFaction,
      EndCaptivityDetail detail)
    {
      this.AddHeroToScatteredCompanions(releasedHero);
    }

    private void SettlementEntered(MobileParty party, Settlement settlement, Hero hero)
    {
      if (party != MobileParty.MainParty)
        return;
      foreach (Hero key in (List<Hero>) settlement.HeroesWithoutParty)
      {
        if (this.ScatteredCompanions.ContainsKey(key))
        {
          TextObject parent = new TextObject("{=ahpSGaow}You hear that your companion {NOTABLE.LINK}, who was separated from you after a battle, is currently in this settlement.");
          StringHelpers.SetCharacterProperties("NOTABLE", key.CharacterObject, parent);
          InformationManager.ShowInquiry(new InquiryData(new TextObject("{=dx0hmeH6}Tracking").ToString(), parent.ToString(), true, false, new TextObject("{=yS7PvrTD}OK").ToString(), "", (Action) null, (Action) null));
          this.ScatteredCompanions.Remove(key);
        }
      }
    }

    private void CompanionAdded(Hero companion)
    {
      if (!this.ScatteredCompanions.ContainsKey(companion))
        return;
      this.ScatteredCompanions.Remove(companion);
    }

    private void CompanionRemoved(
      Hero companion,
      RemoveCompanionAction.RemoveCompanionDetail detail)
    {
      if (!this.ScatteredCompanions.ContainsKey(companion))
        return;
      this.ScatteredCompanions.Remove(companion);
    }
  }
}
