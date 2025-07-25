// Decompiled with JetBrains decompiler
// Type: Helpers.FactionHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class FactionHelper
  {
    public static float FindPotentialStrength(IFaction faction)
    {
      float num1 = 0.0f;
      if (faction.IsKingdomFaction)
      {
        Kingdom kingdom = (Kingdom) faction;
        foreach (Clan clan in (List<Clan>) kingdom.Clans)
        {
          float num2 = clan.IsUnderMercenaryService ? ((double) kingdom.Leader.Gold > 100000.0 ? 0.3f : (float) (0.30000001192092896 - (1.0 - (double) kingdom.Leader.Gold / 100000.0) * 0.30000001192092896)) : 1f;
          num1 += (float) ((double) num2 * (double) clan.Tier * 100.0);
        }
      }
      else if (faction.IsClan)
        num1 += (float) ((Clan) faction).Tier * 100f;
      return num1 * 2f;
    }

    public static float GetPowerRatioToEnemies(Kingdom kingdom)
    {
      return kingdom.TotalStrength / (FactionHelper.GetTotalEnemyKingdomPower(kingdom) + 0.0001f);
    }

    private static List<TextObject> IsFactionNameApplicable(string name)
    {
      List<TextObject> textObjectList = new List<TextObject>();
      if ((name.Length > 50 ? 0 : (name.Length >= 1 ? 1 : 0)) == 0)
      {
        TextObject textObject = GameTexts.FindText("str_faction_name_invalid_character_count").SetTextVariable("MIN", 1).SetTextVariable("MAX", 50);
        textObjectList.Add(textObject);
      }
      if (Common.TextContainsSpecialCharacters(name))
        textObjectList.Add(GameTexts.FindText("str_faction_name_invalid_characters"));
      if (name.StartsWith(" ") || name.EndsWith(" "))
        textObjectList.Add(new TextObject("{=LCOZZMta}Faction name cannot start or end with a white space"));
      if (name.Contains("  "))
        textObjectList.Add(new TextObject("{=CtsdrQ9N}Faction name cannot contain consecutive white spaces"));
      return textObjectList;
    }

    public static Tuple<bool, string> IsClanNameApplicable(string name)
    {
      string empty = string.Empty;
      List<TextObject> textObjectList = FactionHelper.IsFactionNameApplicable(name);
      if (Clan.All.Any<Clan>((Func<Clan, bool>) (x => x != Clan.PlayerClan && string.Equals(x.Name.ToString(), name, StringComparison.InvariantCultureIgnoreCase))))
        textObjectList.Add(GameTexts.FindText("str_clan_name_invalid_already_exist"));
      bool flag = textObjectList.Count == 0;
      if (textObjectList.Count == 1)
        empty = textObjectList[0].ToString();
      else if (textObjectList.Count > 1)
      {
        TextObject textObject = textObjectList[0];
        for (int index = 1; index < textObjectList.Count; ++index)
          textObject = GameTexts.FindText("str_string_newline_newline_string").SetTextVariable("STR1", textObject.ToString()).SetTextVariable("STR2", textObjectList[index].ToString());
        empty = textObject.ToString();
      }
      return new Tuple<bool, string>(flag, empty);
    }

    public static Tuple<bool, string> IsKingdomNameApplicable(string name)
    {
      string empty = string.Empty;
      List<TextObject> textObjectList = FactionHelper.IsFactionNameApplicable(name);
      if (Kingdom.All.Any<Kingdom>((Func<Kingdom, bool>) (x => x != Clan.PlayerClan.Kingdom && string.Equals(x.Name.ToString(), name, StringComparison.InvariantCultureIgnoreCase))))
        textObjectList.Add(GameTexts.FindText("str_kingdom_name_invalid_already_exist"));
      bool flag = textObjectList.Count == 0;
      if (textObjectList.Count == 1)
        empty = textObjectList[0].ToString();
      else if (textObjectList.Count > 1)
      {
        TextObject textObject = textObjectList[0];
        for (int index = 1; index < textObjectList.Count; ++index)
          textObject = GameTexts.FindText("str_string_newline_newline_string").SetTextVariable("STR1", textObject.ToString()).SetTextVariable("STR2", textObjectList[index].ToString());
        empty = textObject.ToString();
      }
      return new Tuple<bool, string>(flag, empty);
    }

    public static float GetPowerRatioToTributePayedKingdoms(Kingdom kingdom)
    {
      return kingdom.TotalStrength / (FactionHelper.GetTotalTributePayedKingdomsPower(kingdom) + 0.0001f);
    }

    public static bool CanClanBeGrantedFief(Clan clan)
    {
      return clan != Clan.PlayerClan && !clan.IsUnderMercenaryService;
    }

    public static bool CanPlayerEnterFaction(bool asVassal = false)
    {
      float num1 = Campaign.Current.Settlements.Where<Settlement>((Func<Settlement, bool>) (settlement => (settlement.IsVillage || settlement.IsTown || settlement.IsCastle) && settlement.OwnerClan.Leader == Hero.MainHero)).Sum<Settlement>((Func<Settlement, float>) (settlement => settlement.GetSettlementValueForFaction(Hero.OneToOneConversationHero.MapFaction)));
      float a = asVassal ? 50f : 10f;
      float num2 = (float) ((double) Clan.PlayerClan.Renown + (asVassal ? (double) num1 / 5000.0 : 0.0) + (asVassal ? (double) Hero.MainHero.Gold / 10000.0 : 0.0) + (double) MathF.Min(a, Clan.PlayerClan.Renown) / (double) a * 0.20000000298023224 * (double) Clan.PlayerClan.TotalStrength + (double) Hero.OneToOneConversationHero.MapFaction.Leader.GetRelationWithPlayer() * 2.0);
      return !asVassal ? (double) num2 > 25.0 : (double) num2 > 150.0;
    }

    public static float GetTotalEnemyKingdomPower(Kingdom kingdom)
    {
      float enemyKingdomPower = 0.0f;
      foreach (Kingdom enemyKingdom in FactionManager.GetEnemyKingdoms(kingdom))
        enemyKingdomPower += enemyKingdom.TotalStrength;
      return enemyKingdomPower;
    }

    public static float GetTotalTributePayedKingdomsPower(Kingdom kingdom)
    {
      float payedKingdomsPower = 0.0f;
      foreach (StanceLink stance in kingdom.Stances)
      {
        if (stance.IsNeutral)
        {
          int dailyTributePaid = stance.GetDailyTributePaid((IFaction) kingdom);
          if (dailyTributePaid < 0)
          {
            float num = MathF.Sqrt(MathF.Min(1f, (float) -dailyTributePaid / 4000f));
            IFaction faction = stance.Faction1 == kingdom ? stance.Faction2 : stance.Faction1;
            payedKingdomsPower += num * faction.TotalStrength;
          }
        }
      }
      return payedKingdomsPower;
    }

    public static IEnumerable<Army> GetKingdomArmies(IFaction mapFaction)
    {
      return !mapFaction.IsKingdomFaction ? (IEnumerable<Army>) new List<Army>() : (IEnumerable<Army>) ((Kingdom) mapFaction).Armies;
    }

    public static float SettlementProsperityEffectOnGarrisonSizeConstant(Town town)
    {
      return (float) (2.2000000476837158 * (0.10000000149011612 + 0.89999997615814209 * (double) MathF.Sqrt(MathF.Min(town.Prosperity, 5000f) / 5000f)));
    }

    public static float SettlementFoodPotentialEffectOnGarrisonSizeConstant(Settlement settlement)
    {
      int b = 0;
      if (settlement.IsFortification)
      {
        foreach (Village village in (List<Village>) settlement.Town.Villages)
          b += 5 * ((double) village.Hearth < 200.0 ? 1 : ((double) village.Hearth < 600.0 ? 2 : 3));
      }
      return (float) (0.5 + 0.5 * (double) MathF.Min(50, b) / 50.0);
    }

    public static float OwnerClanEconomyEffectOnGarrisonSizeConstant(Clan clan)
    {
      if (clan == null || clan.Leader == null)
        return 1f;
      if ((double) clan.Leader.Gold > 160000.0)
        return (float) (1.5 + 0.5 * (double) MathF.Min(1f, (float) (((double) clan.Leader.Gold - 160000.0) / 160000.0)));
      if ((double) clan.Leader.Gold > 80000.0)
        return (float) (1.0 + 0.5 * (double) MathF.Min(1f, (float) (((double) clan.Leader.Gold - 80000.0) / 80000.0)));
      return (double) clan.Leader.Gold < 40000.0 ? (float) (1.0 - 0.75 * (1.0 - (double) clan.Leader.Gold / 40000.0)) : 1f;
    }

    public static float FindIdealGarrisonStrengthPerWalledCenter(Kingdom kingdom, Clan clan = null)
    {
      if (kingdom == null && clan == null)
        return 0.0f;
      float num1 = 0.0f;
      int num2 = kingdom != null ? kingdom.Clans.Count<Clan>((Func<Clan, bool>) (x => !x.IsUnderMercenaryService)) : 0;
      MBReadOnlyList<Town> mbReadOnlyList = kingdom != null ? kingdom.Fiefs : clan.Fiefs;
      float num3 = kingdom != null ? (float) (((double) kingdom.TotalStrength + (double) (num2 * 500)) / 2.0) : clan.TotalStrength;
      float num4 = 0.0f;
      float num5 = 0.0f;
      foreach (Town town in (List<Town>) mbReadOnlyList)
      {
        float num6 = FactionHelper.SettlementProsperityEffectOnGarrisonSizeConstant(town) * FactionHelper.SettlementFoodPotentialEffectOnGarrisonSizeConstant(town.Settlement);
        float num7 = FactionHelper.OwnerClanEconomyEffectOnGarrisonSizeConstant(town.OwnerClan);
        num5 += num6;
        float num8 = num6 * num7;
        num1 += num8 * 60f;
        num4 += num8;
      }
      return (float) (5.0 + ((double) (num3 * 0.5f / num4) + (double) (num1 / num5)) / 2.0);
    }

    public static void FinishAllRelatedHostileActionsOfNobleToFaction(Hero noble, IFaction faction)
    {
      if (noble.PartyBelongedTo != null && noble.PartyBelongedTo.MapEvent != null && (noble.PartyBelongedTo.MapEvent.AttackerSide.LeaderParty == noble.PartyBelongedTo.Party && (faction.IsKingdomFaction && noble.PartyBelongedTo.MapEvent.DefenderSide.LeaderParty.MapFaction == faction || !faction.IsKingdomFaction && noble.PartyBelongedTo.MapEvent.DefenderSide.LeaderParty.Owner != null && noble.PartyBelongedTo.MapEvent.DefenderSide.LeaderParty.Owner.Clan == faction) || noble.PartyBelongedTo.MapEvent.DefenderSide.LeaderParty == noble.PartyBelongedTo.Party && (faction.IsKingdomFaction && noble.PartyBelongedTo.MapEvent.AttackerSide.LeaderParty.MapFaction == faction || !faction.IsKingdomFaction && noble.PartyBelongedTo.MapEvent.AttackerSide.LeaderParty.Owner != null && noble.PartyBelongedTo.MapEvent.AttackerSide.LeaderParty.Owner.Clan == faction)))
      {
        noble.PartyBelongedTo.MapEvent.DiplomaticallyFinished = true;
        List<PartyBase> partyBaseList = new List<PartyBase>();
        foreach (MapEventParty party in (List<MapEventParty>) noble.PartyBelongedTo.MapEvent.AttackerSide.Parties)
          partyBaseList.Add(party.Party);
        if (noble.PartyBelongedTo.MapEvent.MapEventSettlement != null)
        {
          foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) noble.PartyBelongedTo.MapEvent.MapEventSettlement.MapFaction.WarPartyComponents)
          {
            MobileParty mobileParty = warPartyComponent.MobileParty;
            if (mobileParty.DefaultBehavior == AiBehavior.DefendSettlement && mobileParty.TargetSettlement == noble.PartyBelongedTo.MapEvent.MapEventSettlement && mobileParty.CurrentSettlement == null)
              mobileParty.Ai.SetMoveModeHold();
          }
        }
        noble.PartyBelongedTo.MapEvent.Update();
        foreach (PartyBase partyBase in partyBaseList)
        {
          if (partyBase.IsMobile)
            partyBase.MobileParty.Ai.SetMoveModeHold();
        }
      }
      if (noble.PartyBelongedTo == null)
        return;
      MobileParty partyBelongedTo = noble.PartyBelongedTo;
      if (partyBelongedTo.BesiegedSettlement != null && (faction.IsKingdomFaction && partyBelongedTo.BesiegedSettlement.MapFaction == faction || !faction.IsKingdomFaction && partyBelongedTo.BesiegedSettlement.OwnerClan == faction))
      {
        foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) partyBelongedTo.BesiegedSettlement.MapFaction.WarPartyComponents)
        {
          MobileParty mobileParty = warPartyComponent.MobileParty;
          if (mobileParty.DefaultBehavior == AiBehavior.DefendSettlement && mobileParty.TargetSettlement == partyBelongedTo.BesiegedSettlement && mobileParty.CurrentSettlement == null)
            mobileParty.Ai.SetMoveModeHold();
        }
        partyBelongedTo.BesiegerCamp = (BesiegerCamp) null;
        partyBelongedTo.Ai.SetMoveModeHold();
      }
      if ((partyBelongedTo.DefaultBehavior == AiBehavior.RaidSettlement || partyBelongedTo.DefaultBehavior == AiBehavior.BesiegeSettlement || partyBelongedTo.DefaultBehavior == AiBehavior.AssaultSettlement) && (faction.IsKingdomFaction && partyBelongedTo.TargetSettlement.MapFaction == faction || !faction.IsKingdomFaction && partyBelongedTo.TargetSettlement.OwnerClan == faction))
      {
        if (partyBelongedTo.Army != null)
          partyBelongedTo.Army.FinishArmyObjective();
        partyBelongedTo.Ai.SetMoveModeHold();
      }
      if (partyBelongedTo.ShortTermBehavior != AiBehavior.EngageParty || partyBelongedTo.ShortTermTargetParty == null || partyBelongedTo.ShortTermTargetParty.MapFaction != faction)
        return;
      partyBelongedTo.Ai.SetMoveModeHold();
    }

    public static void FinishAllRelatedHostileActionsOfFactionToFaction(
      IFaction faction1,
      IFaction faction2)
    {
      foreach (Hero lord in (List<Hero>) faction1.Lords)
        FactionHelper.FinishAllRelatedHostileActionsOfNobleToFaction(lord, faction2);
    }

    public static void FinishAllRelatedHostileActions(Clan clan1, Clan clan2)
    {
      foreach (Hero lord in (List<Hero>) clan1.Lords)
        FactionHelper.FinishAllRelatedHostileActionsOfNobleToFaction(lord, (IFaction) clan2);
      foreach (Hero lord in (List<Hero>) clan2.Lords)
        FactionHelper.FinishAllRelatedHostileActionsOfNobleToFaction(lord, (IFaction) clan1);
    }

    public static void FinishAllRelatedHostileActions(Kingdom kingdom1, Kingdom kingdom2)
    {
      foreach (IFaction clan in (List<Clan>) kingdom1.Clans)
        FactionHelper.FinishAllRelatedHostileActionsOfFactionToFaction(clan, (IFaction) kingdom2);
      foreach (IFaction clan in (List<Clan>) kingdom2.Clans)
        FactionHelper.FinishAllRelatedHostileActionsOfFactionToFaction(clan, (IFaction) kingdom1);
    }

    public static void AdjustFactionStancesForClanJoiningKingdom(
      Clan joiningClan,
      Kingdom kingdomToJoin)
    {
      foreach (StanceLink stanceLink in new List<StanceLink>(joiningClan.Stances))
      {
        if (!stanceLink.IsAtConstantWar)
        {
          IFaction faction = stanceLink.Faction1 == joiningClan ? stanceLink.Faction2 : stanceLink.Faction1;
          if (stanceLink.IsAtWar)
          {
            if (!kingdomToJoin.IsAtWarWith(faction))
            {
              MakePeaceAction.Apply((IFaction) joiningClan, faction);
              FactionHelper.FinishAllRelatedHostileActionsOfFactionToFaction((IFaction) joiningClan, faction);
              FactionHelper.FinishAllRelatedHostileActionsOfFactionToFaction(faction, (IFaction) joiningClan);
            }
          }
          else
            stanceLink.ResetPeaceStats();
        }
      }
    }

    public static TextObject GetTermUsedByOtherFaction(
      IFaction faction,
      IFaction otherFaction,
      bool pejorative)
    {
      if (faction.IsMinorFaction || faction.IsEliminated)
      {
        TextObject usedByOtherFaction = new TextObject("{=n48jo6Qn}the {FACTION_NAME}");
        usedByOtherFaction.SetTextVariable("FACTION_NAME", faction.Name);
        return usedByOtherFaction;
      }
      if (otherFaction.Culture == faction.Culture)
      {
        TextObject usedByOtherFaction = !pejorative ? new TextObject("{=WWFnlL3O}{FACTION_LIEGE}'s followers") : new TextObject("{=uujU2fSA}{FACTION_LIEGE}'s scum");
        usedByOtherFaction.SetTextVariable("FACTION_LIEGE", faction.Leader != null ? faction.Leader.Name : TextObject.Empty);
        return usedByOtherFaction;
      }
      int num = 0;
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if (kingdom.Culture == faction.Culture)
          ++num;
      }
      TextObject usedByOtherFaction1 = num == 1 ? new TextObject("{=bIWDtytH}the {ETHNIC_TERM}") : new TextObject("{=JrT9bBEK}{FACTION_LIEGE}'s {ETHNIC_TERM}");
      usedByOtherFaction1.SetTextVariable("ETHNIC_TERM", GameTexts.FindText("str_neutral_term_for_culture", faction.Culture.StringId));
      usedByOtherFaction1.SetTextVariable("FACTION_LIEGE", faction.Leader != null ? faction.Leader.Name : TextObject.Empty);
      return usedByOtherFaction1;
    }

    public static TextObject GetFormalNameForFactionCulture(CultureObject factionCulture)
    {
      return GameTexts.FindText("str_faction_formal_name_for_culture", factionCulture.StringId);
    }

    public static TextObject GetInformalNameForFactionCulture(CultureObject factionCulture)
    {
      return GameTexts.FindText("str_faction_informal_name_for_culture", factionCulture.StringId);
    }

    public static TextObject GetAdjectiveForFactionCulture(CultureObject factionCulture)
    {
      return GameTexts.FindText("str_adjective_for_culture", factionCulture.StringId);
    }

    public static TextObject GetAdjectiveForFaction(IFaction faction)
    {
      return faction is Kingdom ? GameTexts.FindText("str_adjective_for_faction", faction.StringId) : faction.Name;
    }

    public static TextObject GenerateClanNameforPlayer()
    {
      CultureObject culture = CharacterObject.PlayerCharacter.Culture;
      return !(culture.StringId == "vlandia") ? NameGenerator.Current.GenerateClanName(culture, (Settlement) null) : new TextObject("{=Uk3qRuCS}dey Corvand");
    }

    public static float GetDistanceToClosestNonAllyFortificationOfFaction(IFaction faction)
    {
      float maximumDistance = float.MaxValue;
      if (faction.FactionMidSettlement != null)
      {
        foreach (SettlementComponent allFief in Town.AllFiefs)
        {
          Settlement settlement = allFief.Settlement;
          float distance;
          if (settlement.MapFaction != faction && Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, faction.FactionMidSettlement, maximumDistance, out distance))
            maximumDistance = distance;
        }
      }
      return maximumDistance;
    }

    public static Settlement FactionMidSettlement(IFaction faction)
    {
      Settlement settlement1 = (Settlement) null;
      if (faction.Settlements.Count > 0)
      {
        float num1 = float.MaxValue;
        settlement1 = faction.Settlements[0];
        foreach (Settlement settlement2 in (List<Settlement>) faction.Settlements)
        {
          float num2 = 0.0f;
          foreach (Settlement settlement3 in (List<Settlement>) faction.Settlements)
          {
            if (settlement2 != settlement3)
            {
              float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(settlement2, settlement3);
              if (settlement3.IsVillage)
                distance *= 0.2f;
              if (settlement3.IsFortification)
                distance *= (float) settlement3.BoundVillages.Count * 0.1f;
              num2 += distance;
            }
          }
          if ((double) num1 > (double) num2)
          {
            num1 = num2;
            settlement1 = settlement2;
          }
        }
      }
      else
      {
        switch (faction)
        {
          case Clan clan:
            settlement1 = clan.HomeSettlement;
            break;
          case Kingdom kingdom:
            settlement1 = kingdom.InitialHomeLand;
            break;
        }
      }
      return settlement1;
    }

    public static List<IFaction> GetPossibleKingdomsToDeclareWar(Kingdom kingdom)
    {
      List<IFaction> kingdomsToDeclareWar = new List<IFaction>();
      foreach (Kingdom faction1 in (List<Kingdom>) Kingdom.All)
      {
        if (faction1 != kingdom && !FactionManager.IsAtWarAgainstFaction((IFaction) faction1, (IFaction) kingdom))
          kingdomsToDeclareWar.Add((IFaction) faction1);
      }
      return kingdomsToDeclareWar;
    }

    public static List<IFaction> GetPossibleKingdomsToDeclarePeace(Kingdom kingdom)
    {
      List<IFaction> kingdomsToDeclarePeace = new List<IFaction>();
      foreach (Kingdom faction1 in (List<Kingdom>) Kingdom.All)
      {
        if (faction1 != kingdom && FactionManager.IsAtWarAgainstFaction((IFaction) faction1, (IFaction) kingdom))
          kingdomsToDeclarePeace.Add((IFaction) faction1);
      }
      return kingdomsToDeclarePeace;
    }

    public static IEnumerable<Clan> GetAllyMinorFactions(CharacterObject otherCharacter)
    {
      throw new NotImplementedException();
    }

    public static Clan ChooseHeirClanForFiefs(Clan oldClan)
    {
      Clan clan1 = (Clan) null;
      if (oldClan.Kingdom != null)
        clan1 = oldClan.Kingdom.IsEliminated || oldClan.Kingdom.RulingClan == oldClan ? oldClan.Kingdom.Clans.GetRandomElementWithPredicate<Clan>((Func<Clan, bool>) (t => t != oldClan && !t.IsEliminated && !t.IsMinorFaction && !t.Lords.IsEmpty<Hero>() && t.Lords.Any<Hero>((Func<Hero, bool>) (k => !k.IsChild)))) : oldClan.Kingdom.RulingClan;
      if (clan1 == null)
      {
        float num = float.MaxValue;
        foreach (Clan clan2 in Clan.All.Where<Clan>((Func<Clan, bool>) (t => t != oldClan && !t.IsEliminated && !t.IsMinorFaction && !t.Lords.IsEmpty<Hero>() && t.Lords.Any<Hero>((Func<Hero, bool>) (k => !k.IsChild)) && !t.IsBanditFaction)))
        {
          float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(clan2.FactionMidSettlement, oldClan.FactionMidSettlement);
          if ((double) distance < (double) num)
          {
            clan1 = clan2;
            num = distance;
          }
        }
        if (clan1?.Kingdom != null && !clan1.Kingdom.IsEliminated)
          clan1 = clan1.Kingdom.RulingClan;
      }
      if (clan1 == null)
        clan1 = Clan.PlayerClan;
      return clan1;
    }

    private static bool IsMainClanMemberAvailableForRelocate(Hero hero, out TextObject explanation)
    {
      if ((double) hero.Age < (double) Campaign.Current.Models.AgeModel.HeroComesOfAge)
      {
        explanation = new TextObject("{=HAo6iIda}{HERO.NAME} is not eligible.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      if (hero.PartyBelongedTo != null)
      {
        if (hero.PartyBelongedTo.LeaderHero == hero)
        {
          explanation = new TextObject("{=kNW1qYSi}{HERO.NAME} is leading a party right now.");
          explanation.SetCharacterProperties("HERO", hero.CharacterObject);
          return false;
        }
        if (hero.PartyBelongedTo.MapEvent != null)
        {
          explanation = new TextObject("{=haY6IEw2}{HERO.NAME} is currently in a battle right now.");
          explanation.SetCharacterProperties("HERO", hero.CharacterObject);
          return false;
        }
      }
      if (hero.IsPrisoner)
      {
        explanation = new TextObject("{=hv1ARuaU}{HERO.NAME} is in prison right now.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      if (hero.IsFugitive || hero.IsDisabled)
      {
        explanation = new TextObject("{=nMmYZ3xi}{HERO.NAME} is not available right now.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      if (hero.IsTraveling)
      {
        explanation = new TextObject("{=287Epvf0}{HERO.NAME} is traveling right now.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      if (Campaign.Current.IssueManager.IssueSolvingCompanionList.Contains<Hero>(hero))
      {
        explanation = new TextObject("{=se5704KH}{HERO.NAME} is solving an issue right now.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      if (Campaign.Current.GetCampaignBehavior<IAlleyCampaignBehavior>().IsHeroAlleyLeaderOfAnyPlayerAlley(hero))
      {
        explanation = new TextObject("{=WBcw6Z9W}{HERO.NAME} is leading an alley.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      explanation = TextObject.Empty;
      return true;
    }

    public static bool CanPlayerOfferMercenaryService(
      Kingdom offerKingdom,
      out List<IFaction> playerWars,
      out List<IFaction> warsOfFactionToJoin)
    {
      playerWars = new List<IFaction>();
      warsOfFactionToJoin = new List<IFaction>();
      float ignoredToJoinKingdom = Campaign.Current.Models.DiplomacyModel.GetStrengthThresholdForNonMutualWarsToBeIgnoredToJoinKingdom(offerKingdom);
      foreach (Kingdom other in (List<Kingdom>) Kingdom.All)
      {
        if (Clan.PlayerClan.MapFaction.IsAtWarWith((IFaction) other) && (double) other.TotalStrength > (double) ignoredToJoinKingdom)
          playerWars.Add((IFaction) other);
      }
      foreach (Kingdom other in (List<Kingdom>) Kingdom.All)
      {
        if (offerKingdom.IsAtWarWith((IFaction) other))
          warsOfFactionToJoin.Add((IFaction) other);
      }
      return Clan.PlayerClan.Kingdom == null && !Clan.PlayerClan.IsAtWarWith((IFaction) offerKingdom) && Clan.PlayerClan.Tier >= Campaign.Current.Models.ClanTierModel.MercenaryEligibleTier && (double) offerKingdom.Leader.GetRelationWithPlayer() >= (double) Campaign.Current.Models.DiplomacyModel.MinimumRelationWithConversationCharacterToJoinKingdom && warsOfFactionToJoin.Intersect<IFaction>((IEnumerable<IFaction>) playerWars).Count<IFaction>() == playerWars.Count && Clan.PlayerClan.Settlements.IsEmpty<Settlement>();
    }

    public static bool CanPlayerOfferVassalage(
      Kingdom offerKingdom,
      out List<IFaction> playerWars,
      out List<IFaction> warsOfFactionToJoin)
    {
      playerWars = new List<IFaction>();
      warsOfFactionToJoin = new List<IFaction>();
      float ignoredToJoinKingdom = Campaign.Current.Models.DiplomacyModel.GetStrengthThresholdForNonMutualWarsToBeIgnoredToJoinKingdom(offerKingdom);
      foreach (Kingdom other in (List<Kingdom>) Kingdom.All)
      {
        if (Clan.PlayerClan.MapFaction.IsAtWarWith((IFaction) other) && (double) other.TotalStrength > (double) ignoredToJoinKingdom)
          playerWars.Add((IFaction) other);
      }
      foreach (Kingdom other in (List<Kingdom>) Kingdom.All)
      {
        if (offerKingdom.IsAtWarWith((IFaction) other))
          warsOfFactionToJoin.Add((IFaction) other);
      }
      return (Clan.PlayerClan.Kingdom == null || Clan.PlayerClan.IsUnderMercenaryService) && !Clan.PlayerClan.IsAtWarWith((IFaction) offerKingdom) && Clan.PlayerClan.Tier >= Campaign.Current.Models.ClanTierModel.VassalEligibleTier && !offerKingdom.IsEliminated && (double) offerKingdom.Leader.GetRelationWithPlayer() >= (double) Campaign.Current.Models.DiplomacyModel.MinimumRelationWithConversationCharacterToJoinKingdom && warsOfFactionToJoin.Intersect<IFaction>((IEnumerable<IFaction>) playerWars).Count<IFaction>() == playerWars.Count;
    }

    public static bool IsMainClanMemberAvailableForRecall(
      Hero hero,
      MobileParty targetParty,
      out TextObject explanation)
    {
      if (!FactionHelper.IsMainClanMemberAvailableForRelocate(hero, out explanation))
        return false;
      if (hero.PartyBelongedTo != null && hero.PartyBelongedTo.IsMainParty)
      {
        explanation = new TextObject("{=uhOCqJwd}{HERO.NAME} is already in the main party.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      if (hero.CurrentSettlement != null && (hero.CurrentSettlement.IsUnderSiege || hero.CurrentSettlement.IsUnderRaid))
      {
        explanation = new TextObject("{=L9nn40qu}{HERO.NAME}{.o} location is under attack right now.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      if (Hero.MainHero.IsPrisoner)
      {
        explanation = new TextObject("{=jRslIaiU}You can't recall a clan member while you are a prisoner.");
        return false;
      }
      if (MobileParty.MainParty.MapEvent != null)
      {
        explanation = new TextObject("{=h0pBxG09}You can't recall a clan member while you are in a map event.");
        return false;
      }
      explanation = new TextObject("{=NAseSXPl}It would take {HOUR} {?HOUR > 1}hours{?}hour{\\?} for {HERO.NAME} to arrive at your party.");
      explanation.SetCharacterProperties("HERO", hero.CharacterObject);
      float resultNumber = Campaign.Current.Models.DelayedTeleportationModel.GetTeleportationDelayAsHours(hero, targetParty.Party).ResultNumber;
      explanation.SetTextVariable("HOUR", (int) Math.Ceiling((double) resultNumber));
      return true;
    }

    public static bool IsMainClanMemberAvailableForPartyLeaderChange(
      Hero hero,
      bool isSend,
      MobileParty targetParty,
      out TextObject explanation)
    {
      if (!FactionHelper.IsMainClanMemberAvailableForRelocate(hero, out explanation))
        return false;
      if (hero.PartyBelongedTo != null && hero.PartyBelongedTo.IsMainParty && !isSend)
      {
        explanation = new TextObject("{=uhOCqJwd}{HERO.NAME} is already in the main party.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      if (targetParty.MemberRoster.Count == 1 && targetParty.LeaderHero != null)
      {
        explanation = new TextObject("{=pwuEqegC}Party leader is the only member of the party right now.");
        return false;
      }
      if (targetParty.MapEvent != null)
      {
        explanation = new TextObject("{=yC52EBCb}Target party is currently in a battle right now.");
        return false;
      }
      if (targetParty.Army != null)
      {
        explanation = new TextObject("{=2iRg3vpP}Target party is currently in an army right now.");
        return false;
      }
      if (hero.CurrentSettlement != null && (hero.CurrentSettlement.IsUnderSiege || hero.CurrentSettlement.IsUnderRaid))
      {
        explanation = new TextObject("{=L9nn40qu}{HERO.NAME}{.o} location is under attack right now.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      if (hero.GovernorOf != null)
      {
        explanation = new TextObject("{=bgVZcd1I}{HERO.NAME} is a governor.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      explanation = new TextObject("{=NAseSXPl}It would take {HOUR} {?HOUR > 1}hours{?}hour{\\?} for {HERO.NAME} to arrive at your party.");
      explanation.SetCharacterProperties("HERO", hero.CharacterObject);
      float resultNumber = Campaign.Current.Models.DelayedTeleportationModel.GetTeleportationDelayAsHours(hero, targetParty.Party).ResultNumber;
      explanation.SetTextVariable("HOUR", (int) Math.Ceiling((double) resultNumber));
      return true;
    }

    public static bool IsMainClanMemberAvailableForSendingSettlement(
      Hero hero,
      Settlement targetSettlement,
      out TextObject explanation)
    {
      if (!FactionHelper.IsMainClanMemberAvailableForRelocate(hero, out explanation))
        return false;
      if (hero.CurrentSettlement != null && (hero.CurrentSettlement.IsUnderSiege || hero.CurrentSettlement.IsUnderRaid))
      {
        explanation = new TextObject("{=L9nn40qu}{HERO.NAME}{.o} location is under attack right now.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      if (targetSettlement.IsUnderRaid || targetSettlement.IsUnderSiege)
      {
        explanation = new TextObject("{=1tGP6vJn}Target settlement is under attack right now.");
        return false;
      }
      if (hero.GovernorOf != null)
      {
        explanation = new TextObject("{=bgVZcd1I}{HERO.NAME} is a governor.");
        explanation.SetCharacterProperties("HERO", hero.CharacterObject);
        return false;
      }
      explanation = new TextObject("{=NAseSXPl}It would take {HOUR} {?HOUR > 1}hours{?}hour{\\?} for {HERO.NAME} to arrive at your party.");
      explanation.SetCharacterProperties("HERO", hero.CharacterObject);
      float resultNumber = Campaign.Current.Models.DelayedTeleportationModel.GetTeleportationDelayAsHours(hero, targetSettlement.Party).ResultNumber;
      explanation.SetTextVariable("HOUR", (int) Math.Ceiling((double) resultNumber));
      return true;
    }

    public static bool IsMainClanMemberAvailableForSendingSettlementAsGovernor(
      Hero hero,
      Settlement settlementOfGovernor,
      out TextObject explanation)
    {
      if (!FactionHelper.IsMainClanMemberAvailableForRelocate(hero, out explanation))
        return false;
      if (hero.PartyBelongedToAsPrisoner != null)
      {
        explanation = new TextObject("{=knwId8DG}You cannot assign a prisoner as a governor of a settlement");
        return false;
      }
      if (hero == Hero.MainHero)
      {
        explanation = new TextObject("{=uoDuiBZR}You cannot assign yourself as a governor");
        return false;
      }
      if (hero.PartyBelongedTo != null && hero.PartyBelongedTo.LeaderHero == hero)
      {
        explanation = new TextObject("{=pWObBhj5}You cannot assign a party leader as a new governor of a settlement");
        return false;
      }
      if (hero.IsFugitive)
      {
        explanation = new TextObject("{=KghY9qwl}You cannot assign a fugitive as the new governor of a settlement");
        return false;
      }
      if (hero.IsReleased)
      {
        explanation = new TextObject("{=mOFjZuSf}You cannot assign a newly released hero as the new governor of a settlement");
        return false;
      }
      if (settlementOfGovernor != null)
      {
        explanation = new TextObject("{=YbGu9rSH}This character is already the governor of {SETTLEMENT_NAME}");
        explanation.SetTextVariable("SETTLEMENT_NAME", settlementOfGovernor.Town.Name);
        return false;
      }
      explanation = TextObject.Empty;
      return true;
    }
  }
}
