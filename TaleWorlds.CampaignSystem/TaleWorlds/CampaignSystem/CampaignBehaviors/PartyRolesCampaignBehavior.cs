// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PartyRolesCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PartyRolesCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.OnGovernorChangedEvent.AddNonSerializedListener((object) this, new Action<Town, Hero, Hero>(this.OnGovernorChanged));
      CampaignEvents.MobilePartyCreated.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartySpawned));
      CampaignEvents.CompanionRemoved.AddNonSerializedListener((object) this, new Action<Hero, RemoveCompanionAction.RemoveCompanionDetail>(this.OnCompanionRemoved));
      CampaignEvents.OnHeroGetsBusyEvent.AddNonSerializedListener((object) this, new Action<Hero, HeroGetsBusyReasons>(this.OnHeroGetsBusy));
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnHeroPrisonerTaken));
      CampaignEvents.OnHeroChangedClanEvent.AddNonSerializedListener((object) this, new Action<Hero, Clan>(this.OnHeroChangedClan));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      if (victim.Clan != Clan.PlayerClan)
        return;
      this.RemovePartyRoleIfExist(victim);
    }

    private void OnHeroPrisonerTaken(PartyBase party, Hero prisoner)
    {
      if (prisoner.Clan != Clan.PlayerClan)
        return;
      this.RemovePartyRoleIfExist(prisoner);
    }

    private void OnGovernorChanged(Town fortification, Hero oldGovernor, Hero newGovernor)
    {
      if (newGovernor?.Clan != Clan.PlayerClan)
        return;
      this.RemovePartyRoleIfExist(newGovernor);
    }

    private void OnPartySpawned(MobileParty spawnedParty)
    {
      if (!spawnedParty.IsLordParty || spawnedParty.ActualClan != Clan.PlayerClan)
        return;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) spawnedParty.MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero)
          this.RemovePartyRoleIfExist(troopRosterElement.Character.HeroObject);
      }
    }

    private void OnCompanionRemoved(
      Hero companion,
      RemoveCompanionAction.RemoveCompanionDetail detail)
    {
      this.RemovePartyRoleIfExist(companion);
    }

    private void OnHeroGetsBusy(Hero hero, HeroGetsBusyReasons heroGetsBusyReason)
    {
      if (hero.Clan != Clan.PlayerClan)
        return;
      this.RemovePartyRoleIfExist(hero);
    }

    private void OnHeroChangedClan(Hero hero, Clan oldClan)
    {
      if (oldClan != Clan.PlayerClan)
        return;
      this.RemovePartyRoleIfExist(hero);
    }

    private void RemovePartyRoleIfExist(Hero hero)
    {
      foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) Clan.PlayerClan.WarPartyComponents)
      {
        if (warPartyComponent.MobileParty.GetHeroPerkRole(hero) != SkillEffect.PerkRole.None)
          warPartyComponent.MobileParty.RemoveHeroPerkRole(hero);
      }
    }
  }
}
