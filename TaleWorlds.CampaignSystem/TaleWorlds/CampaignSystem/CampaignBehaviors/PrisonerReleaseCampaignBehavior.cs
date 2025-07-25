// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PrisonerReleaseCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PrisonerReleaseCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.DailyHeroTick));
      CampaignEvents.HourlyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.HourlyPartyTick));
      CampaignEvents.MakePeace.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, MakePeaceAction.MakePeaceDetail>(this.OnMakePeaceEvent));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.ClanChangedKingdom));
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      if (!MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.0")))
        return;
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero != Hero.MainHero)
        {
          if (allAliveHero.IsPrisoner)
          {
            bool flag1 = allAliveHero.PartyBelongedToAsPrisoner != null && allAliveHero.PartyBelongedToAsPrisoner.IsMobile && allAliveHero.PartyBelongedToAsPrisoner.MobileParty.IsMilitia;
            bool flag2 = allAliveHero.PartyBelongedToAsPrisoner != null && !allAliveHero.PartyBelongedToAsPrisoner.MapFaction.IsAtWarWith(allAliveHero.MapFaction);
            if (allAliveHero.PartyBelongedToAsPrisoner == null)
            {
              if (allAliveHero.CurrentSettlement == null)
                MakeHeroFugitiveAction.Apply(allAliveHero);
            }
            else if (flag1 | flag2)
            {
              EndCaptivityAction.ApplyByEscape(allAliveHero);
              MakeHeroFugitiveAction.Apply(allAliveHero);
            }
          }
          else if (allAliveHero.PartyBelongedToAsPrisoner != null)
          {
            allAliveHero.PartyBelongedToAsPrisoner.PrisonRoster.RemoveTroop(allAliveHero.CharacterObject);
            MakeHeroFugitiveAction.Apply(allAliveHero);
          }
        }
      }
    }

    private void ClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      if (detail == ChangeKingdomAction.ChangeKingdomActionDetail.CreateKingdom)
        return;
      PrisonerReleaseCampaignBehavior.ReleasePrisonersInternal((IFaction) clan);
      if (oldKingdom != null)
        PrisonerReleaseCampaignBehavior.ReleasePrisonersInternal((IFaction) oldKingdom);
      if (newKingdom == null)
        return;
      this.OnAfterClanJoinedKingdom(clan, newKingdom);
      PrisonerReleaseCampaignBehavior.ReleasePrisonersInternal((IFaction) newKingdom);
    }

    private void OnAfterClanJoinedKingdom(Clan clan, Kingdom newKingdom)
    {
      foreach (Kingdom side2Faction in (List<Kingdom>) Kingdom.All)
      {
        if (side2Faction != newKingdom && side2Faction.IsAtWarWith((IFaction) clan) && !side2Faction.IsAtWarWith((IFaction) newKingdom))
          this.OnMakePeace((IFaction) clan, (IFaction) side2Faction);
      }
    }

    private void OnMakePeaceEvent(
      IFaction side1Faction,
      IFaction side2Faction,
      MakePeaceAction.MakePeaceDetail detail)
    {
      this.OnMakePeace(side1Faction, side2Faction);
    }

    private void OnMakePeace(IFaction side1Faction, IFaction side2Faction)
    {
      PrisonerReleaseCampaignBehavior.ReleasePrisonersInternal(side1Faction);
      PrisonerReleaseCampaignBehavior.ReleasePrisonersInternal(side2Faction);
    }

    private static void ReleasePrisonersInternal(IFaction faction)
    {
      foreach (Settlement settlement in (List<Settlement>) faction.Settlements)
      {
        for (int index = settlement.Party.PrisonRoster.Count - 1; index >= 0; --index)
        {
          if (settlement.Party.PrisonRoster.GetElementNumber(index) > 0)
          {
            TroopRosterElement elementCopyAtIndex = settlement.Party.PrisonRoster.GetElementCopyAtIndex(index);
            if (elementCopyAtIndex.Character.IsHero && elementCopyAtIndex.Character.HeroObject != Hero.MainHero && !elementCopyAtIndex.Character.HeroObject.MapFaction.IsAtWarWith(faction.MapFaction))
            {
              EndCaptivityAction.ApplyByPeace(elementCopyAtIndex.Character.HeroObject);
              CampaignEventDispatcher.Instance.OnPrisonersChangeInSettlement(settlement, (FlattenedTroopRoster) null, elementCopyAtIndex.Character.HeroObject, true);
            }
          }
        }
      }
      Clan clan1 = faction.IsClan || faction.IsMinorFaction ? (Clan) faction : (Clan) null;
      Kingdom kingdom = faction.IsKingdomFaction ? (Kingdom) faction : (Kingdom) null;
      if (clan1 != null)
      {
        PrisonerReleaseCampaignBehavior.ReleasePrisonersForClan(clan1, faction);
      }
      else
      {
        if (kingdom == null)
          return;
        foreach (Clan clan2 in (List<Clan>) kingdom.Clans)
          PrisonerReleaseCampaignBehavior.ReleasePrisonersForClan(clan2, faction);
      }
    }

    private static void ReleasePrisonersForClan(Clan clan, IFaction faction)
    {
      foreach (Hero lord in (List<Hero>) clan.Lords)
      {
        foreach (PartyComponent ownedCaravan in lord.OwnedCaravans)
          PrisonerReleaseCampaignBehavior.ReleasePartyPrisoners(ownedCaravan.MobileParty, faction);
      }
      foreach (Hero companion in (List<Hero>) clan.Companions)
      {
        foreach (PartyComponent ownedCaravan in companion.OwnedCaravans)
          PrisonerReleaseCampaignBehavior.ReleasePartyPrisoners(ownedCaravan.MobileParty, faction);
      }
      foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
        PrisonerReleaseCampaignBehavior.ReleasePartyPrisoners(warPartyComponent.MobileParty, faction);
      foreach (Settlement settlement in (List<Settlement>) clan.Settlements)
      {
        if (settlement.IsVillage && settlement.Village.VillagerPartyComponent != null)
          PrisonerReleaseCampaignBehavior.ReleasePartyPrisoners(settlement.Village.VillagerPartyComponent.MobileParty, faction);
        else if ((settlement.IsCastle || settlement.IsTown) && settlement.Town.GarrisonParty != null)
          PrisonerReleaseCampaignBehavior.ReleasePartyPrisoners(settlement.Town.GarrisonParty, faction);
      }
    }

    private static void ReleasePartyPrisoners(MobileParty mobileParty, IFaction faction)
    {
      for (int index = mobileParty.PrisonRoster.Count - 1; index >= 0; --index)
      {
        if (mobileParty.Party.PrisonRoster.GetElementNumber(index) > 0)
        {
          TroopRosterElement elementCopyAtIndex = mobileParty.Party.PrisonRoster.GetElementCopyAtIndex(index);
          if (elementCopyAtIndex.Character.IsHero && elementCopyAtIndex.Character.HeroObject != Hero.MainHero && !elementCopyAtIndex.Character.HeroObject.MapFaction.IsAtWarWith(faction.MapFaction))
          {
            if (elementCopyAtIndex.Character.HeroObject.PartyBelongedToAsPrisoner == mobileParty.Party)
              EndCaptivityAction.ApplyByPeace(elementCopyAtIndex.Character.HeroObject);
            else
              mobileParty.Party.PrisonRoster.RemoveTroop(elementCopyAtIndex.Character);
          }
        }
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void DailyHeroTick(Hero hero)
    {
      if (!hero.IsPrisoner || hero.PartyBelongedToAsPrisoner == null || hero == Hero.MainHero)
        return;
      float baseNumber = 0.04f;
      if (hero.PartyBelongedToAsPrisoner.IsMobile && hero.PartyBelongedToAsPrisoner.MobileParty.CurrentSettlement == null)
        baseNumber *= 5f - MathF.Pow((float) MathF.Min(81, hero.PartyBelongedToAsPrisoner.NumberOfHealthyMembers), 0.25f);
      if (hero.PartyBelongedToAsPrisoner == PartyBase.MainParty || hero.PartyBelongedToAsPrisoner.IsSettlement && hero.PartyBelongedToAsPrisoner.Settlement.OwnerClan == Clan.PlayerClan || hero.PartyBelongedToAsPrisoner.IsMobile && hero.PartyBelongedToAsPrisoner.MobileParty.CurrentSettlement != null && hero.PartyBelongedToAsPrisoner.MobileParty.CurrentSettlement.OwnerClan == Clan.PlayerClan)
        baseNumber *= 0.5f;
      ExplainedNumber stat = new ExplainedNumber(baseNumber);
      if (hero.PartyBelongedToAsPrisoner.IsSettlement && hero.PartyBelongedToAsPrisoner.Settlement.Town != null && hero.PartyBelongedToAsPrisoner.Settlement.Town.Governor != null)
      {
        Town town = hero.PartyBelongedToAsPrisoner.Settlement.Town;
        if (hero.PartyBelongedToAsPrisoner.Settlement.IsTown)
        {
          if (town.Governor.GetPerkValue(DefaultPerks.Riding.MountedPatrols))
            stat.AddFactor(DefaultPerks.Riding.MountedPatrols.SecondaryBonus, DefaultPerks.Riding.MountedPatrols.Description);
          if (town.Governor.GetPerkValue(DefaultPerks.Roguery.SweetTalker))
            stat.AddFactor(DefaultPerks.Roguery.SweetTalker.SecondaryBonus, DefaultPerks.Roguery.SweetTalker.Description);
        }
        if ((hero.PartyBelongedToAsPrisoner.Settlement.IsTown || hero.PartyBelongedToAsPrisoner.Settlement.IsCastle) && town.Governor.GetPerkValue(DefaultPerks.Engineering.DungeonArchitect))
          stat.AddFactor(DefaultPerks.Engineering.DungeonArchitect.SecondaryBonus, DefaultPerks.Engineering.DungeonArchitect.Description);
      }
      if (hero.PartyBelongedToAsPrisoner.IsMobile)
      {
        if (hero.GetPerkValue(DefaultPerks.Roguery.FleetFooted))
          stat.AddFactor(DefaultPerks.Roguery.FleetFooted.SecondaryBonus);
        if (hero.PartyBelongedToAsPrisoner.MobileParty.HasPerk(DefaultPerks.Riding.MountedPatrols))
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Riding.MountedPatrols, hero.PartyBelongedToAsPrisoner.MobileParty, true, ref stat);
        if (hero.PartyBelongedToAsPrisoner.MobileParty.HasPerk(DefaultPerks.Roguery.RansomBroker))
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Roguery.RansomBroker, hero.PartyBelongedToAsPrisoner.MobileParty, false, ref stat);
      }
      if (hero.PartyBelongedToAsPrisoner.IsMobile && hero.PartyBelongedToAsPrisoner.MobileParty.HasPerk(DefaultPerks.Scouting.KeenSight, true))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Scouting.KeenSight, hero.PartyBelongedToAsPrisoner.MobileParty, false, ref stat);
      if ((double) MBRandom.RandomFloat >= (double) stat.ResultNumber)
        return;
      EndCaptivityAction.ApplyByEscape(hero);
    }

    private void HourlyPartyTick(MobileParty mobileParty)
    {
      int prisonerSizeLimit = mobileParty.Party.PrisonerSizeLimit;
      if (mobileParty.MapEvent != null || mobileParty.SiegeEvent != null || mobileParty.PrisonRoster.TotalManCount <= prisonerSizeLimit)
        return;
      int num1 = mobileParty.PrisonRoster.TotalManCount - prisonerSizeLimit;
      for (int index = 0; index < num1; ++index)
      {
        bool flag = mobileParty.PrisonRoster.TotalRegulars > 0;
        float randomFloat = MBRandom.RandomFloat;
        int num2 = flag ? (int) ((double) mobileParty.PrisonRoster.TotalRegulars * (double) randomFloat) : (int) ((double) mobileParty.PrisonRoster.TotalManCount * (double) randomFloat);
        CharacterObject character = (CharacterObject) null;
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.PrisonRoster.GetTroopRoster())
        {
          if (!troopRosterElement.Character.IsHero || !flag)
          {
            num2 -= troopRosterElement.Number;
            if (num2 <= 0)
            {
              character = troopRosterElement.Character;
              break;
            }
          }
        }
        this.ApplyEscapeChanceToExceededPrisoners(character, mobileParty);
      }
    }

    private void ApplyEscapeChanceToExceededPrisoners(
      CharacterObject character,
      MobileParty capturerParty)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(0.1f);
      if (capturerParty.HasPerk(DefaultPerks.Athletics.Stamina, true))
        explainedNumber.AddFactor(-0.1f, DefaultPerks.Athletics.Stamina.Name);
      if (capturerParty.IsGarrison || capturerParty.IsMilitia || character.IsPlayerCharacter || (double) MBRandom.RandomFloat >= (double) explainedNumber.ResultNumber)
        return;
      if (character.IsHero)
        EndCaptivityAction.ApplyByEscape(character.HeroObject);
      else
        capturerParty.PrisonRoster.AddToCounts(character, -1);
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) settlement.Party.PrisonRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero && troopRosterElement.Character.HeroObject != Hero.MainHero && !troopRosterElement.Character.HeroObject.MapFaction.IsAtWarWith(settlement.MapFaction))
        {
          if (troopRosterElement.Character.HeroObject.PartyBelongedToAsPrisoner == settlement.Party && troopRosterElement.Character.HeroObject.IsPrisoner)
            EndCaptivityAction.ApplyByReleasedAfterBattle(troopRosterElement.Character.HeroObject);
          else
            settlement.Party.PrisonRoster.RemoveTroop(troopRosterElement.Character, troopRosterElement.Number);
        }
      }
    }
  }
}
