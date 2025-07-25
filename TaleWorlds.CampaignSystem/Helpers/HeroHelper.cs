// Decompiled with JetBrains decompiler
// Type: Helpers.HeroHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class HeroHelper
  {
    public static TextObject GetLastSeenText(Hero hero)
    {
      TextObject empty = TextObject.Empty;
      TextObject text;
      if (hero.LastKnownClosestSettlement == null)
      {
        text = GameTexts.FindText("str_never_seen_encyclopedia_entry");
      }
      else
      {
        text = GameTexts.FindText("str_last_seen_encyclopedia_entry");
        text.SetTextVariable("SETTLEMENT", hero.LastKnownClosestSettlement.EncyclopediaLinkWithName);
        text.SetTextVariable("IS_IN_SETTLEMENT", hero.LastKnownClosestSettlement == hero.CurrentSettlement ? 1 : 0);
      }
      return text;
    }

    public static Settlement GetClosestSettlement(Hero hero)
    {
      Settlement toMapPoint = (Settlement) null;
      if (hero.CurrentSettlement != null)
      {
        toMapPoint = hero.CurrentSettlement;
      }
      else
      {
        PartyBase partyBase = hero.PartyBelongedTo?.Party ?? hero.PartyBelongedToAsPrisoner;
        if (partyBase != null)
        {
          if (partyBase.IsSettlement)
            toMapPoint = partyBase.Settlement;
          else if (partyBase.IsMobile)
          {
            MobileParty mobileParty = partyBase.MobileParty;
            if (mobileParty.CurrentNavigationFace.IsValid())
              toMapPoint = SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (x => x.IsVillage || x.IsFortification), (IMapPoint) mobileParty);
            else
              Debug.FailedAssert("Mobileparty is nowhere to be found", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Helpers.cs", nameof (GetClosestSettlement), 1801);
          }
        }
        else if (PlayerEncounter.Current != null && PlayerEncounter.Battle != null && PlayerEncounter.Battle.PartiesOnSide(PlayerEncounter.Battle.GetOtherSide(PlayerEncounter.Battle.PlayerSide)).Any<MapEventParty>((Func<MapEventParty, bool>) (x => x.Party.Owner == hero)))
          toMapPoint = SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (x => x.IsVillage || x.IsFortification), (IMapPoint) MobileParty.MainParty);
      }
      if (toMapPoint != null && !toMapPoint.IsVillage && !toMapPoint.IsFortification)
        toMapPoint = SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (x => x.IsVillage || x.IsFortification), (IMapPoint) toMapPoint);
      return toMapPoint;
    }

    public static bool LordWillConspireWithLord(Hero lord, Hero otherLord, bool suggestingBetrayal)
    {
      Hero.OneToOneConversationHero.MapFaction.Leader.SetTextVariables();
      int num = 0 + otherLord.RandomInt(-9, 11) + lord.GetTraitLevel(DefaultTraits.Honor);
      if (suggestingBetrayal)
        --num;
      if (suggestingBetrayal && Hero.OneToOneConversationHero.Clan == Hero.OneToOneConversationHero.MapFaction.Leader.Clan)
      {
        TextObject text = new TextObject("{=0M6ApEr2}Surely you know that {FIRST_NAME} is {RELATIONSHIP} as well as my liege, and will always be able to count on my loyalty.");
        text.SetTextVariable("FIRST_NAME", Hero.OneToOneConversationHero.MapFaction.Leader.FirstName);
        text.SetTextVariable("RELATIONSHIP", ConversationHelper.HeroRefersToHero(Hero.OneToOneConversationHero, Hero.OneToOneConversationHero.MapFaction.Leader, true));
        MBTextManager.SetTextVariable("CONSPIRE_REFUSAL", text, false);
        return false;
      }
      if (num >= 0)
        return true;
      if (suggestingBetrayal)
        MBTextManager.SetTextVariable("CONSPIRE_REFUSAL", Campaign.Current.ConversationManager.FindMatchingTextOrNull("str_liege_support", lord.CharacterObject), false);
      else
        MBTextManager.SetTextVariable("CONSPIRE_REFUSAL", Campaign.Current.ConversationManager.FindMatchingTextOrNull("str_lord_intrigue_refuses", lord.CharacterObject), false);
      return false;
    }

    public static bool UnderPlayerCommand(Hero hero)
    {
      if (hero == null)
        return false;
      return hero.MapFaction != null && hero.MapFaction.Leader == Hero.MainHero || hero.IsNotable && hero.HomeSettlement.OwnerClan == Hero.MainHero.Clan || hero.IsPlayerCompanion;
    }

    public static TextObject GetTitleInIndefiniteCase(Hero hero)
    {
      string stringId = hero.MapFaction.Culture.StringId;
      if (hero.IsFemale)
        stringId += "_f";
      return hero.MapFaction.IsKingdomFaction && hero.MapFaction.Leader == hero ? GameTexts.FindText("str_faction_ruler", stringId) : GameTexts.FindText("str_faction_official", stringId);
    }

    public static TextObject GetCharacterTypeName(Hero hero)
    {
      if (hero.IsArtisan)
        return GameTexts.FindText("str_charactertype_artisan");
      if (hero.IsGangLeader)
        return GameTexts.FindText("str_charactertype_gangleader");
      if (hero.IsPreacher)
        return GameTexts.FindText("str_charactertype_preacher");
      if (hero.IsMerchant)
        return GameTexts.FindText("str_charactertype_merchant");
      if (hero.IsHeadman)
        return GameTexts.FindText("str_charactertype_headman");
      if (hero.IsRuralNotable)
        return GameTexts.FindText("str_charactertype_ruralnotable");
      if (hero.IsWanderer)
        return GameTexts.FindText("str_charactertype_wanderer");
      Clan clan = hero.Clan;
      if ((clan != null ? (clan.IsClanTypeMercenary ? 1 : 0) : 0) != 0)
        return GameTexts.FindText("str_charactertype_mercenary");
      if (hero.IsMinorFactionHero)
        return GameTexts.FindText("str_charactertype_minorfaction");
      if (!hero.IsLord)
        return GameTexts.FindText("str_charactertype_unknown");
      return hero.IsFemale ? GameTexts.FindText("str_charactertype_lady") : GameTexts.FindText("str_charactertype_lord");
    }

    public static TextObject GetOccupiedEventReasonText(Hero hero)
    {
      return hero.CanHaveQuestsOrIssues() ? GameTexts.FindText("str_hero_busy") : GameTexts.FindText("str_hero_busy_issue_quest");
    }

    public static List<string> OrderHeroesOnPlayerSideByPriority()
    {
      List<Hero> source = new List<Hero>();
      foreach (MapEventParty mapEventParty in (List<MapEventParty>) MobileParty.MainParty.MapEvent.PartiesOnSide(MobileParty.MainParty.MapEvent.PlayerSide))
      {
        if (mapEventParty.Party.LeaderHero != null && mapEventParty.Party.MobileParty?.Army?.LeaderParty != mapEventParty.Party.MobileParty)
          source.Add(mapEventParty.Party.LeaderHero);
      }
      return source.OrderByDescending<Hero, int>((Func<Hero, int>) (t => Campaign.Current.Models.EncounterModel.GetCharacterSergeantScore(t))).ToList<Hero>().ConvertAll<string>((Converter<Hero, string>) (t => t.CharacterObject.StringId));
    }

    public static bool WillLordAttack()
    {
      if (PlayerEncounter.Current != null && PlayerEncounter.Current.PlayerSide == BattleSideEnum.Defender && (PlayerEncounter.EncounteredMobileParty == null || PlayerEncounter.EncounteredMobileParty.Ai.DoNotAttackMainPartyUntil.IsPast))
      {
        PartyBase partyBase = Campaign.Current.ConversationManager.ConversationParty == null ? PlayerEncounter.EncounteredParty : Campaign.Current.ConversationManager.ConversationParty.Party;
        if (partyBase.Owner != null && partyBase.LeaderHero != null && FactionManager.IsAtWarAgainstFaction(partyBase.MapFaction, Hero.MainHero.MapFaction))
          return true;
      }
      return false;
    }

    public static void SetPlayerSalutation()
    {
      if (Hero.OneToOneConversationHero.IsLord)
        MBTextManager.SetTextVariable("PLAYER_SALUTATION", Hero.MainHero.Name, false);
      else if (Hero.OneToOneConversationHero.IsPlayerCompanion)
        MBTextManager.SetTextVariable("PLAYER_SALUTATION", GameTexts.FindText("str_player_salutation_captain"), false);
      else if (Hero.MainHero.IsFemale)
        MBTextManager.SetTextVariable("PLAYER_SALUTATION", GameTexts.FindText("str_player_salutation_madame"), false);
      else
        MBTextManager.SetTextVariable("PLAYER_SALUTATION", GameTexts.FindText("str_player_salutation_sir"), false);
    }

    public static void SpawnHeroForTheFirstTime(Hero hero, Settlement spawnSettlement)
    {
      hero.BornSettlement = spawnSettlement;
      EnterSettlementAction.ApplyForCharacterOnly(hero, spawnSettlement);
      hero.ChangeState(Hero.CharacterStates.Active);
    }

    public static int DefaultRelation(Hero hero, Hero otherHero)
    {
      if (hero.Clan != null && hero.Clan.IsNoble && hero.Clan == otherHero.Clan)
        return 40;
      if (hero.MapFaction == otherHero.MapFaction && hero.CharacterObject.Culture == otherHero.CharacterObject.Culture && (double) hero.Age > 35.0 && (double) otherHero.Age > 35.0 && HeroHelper.NPCPersonalityClashWithNPC(hero, otherHero) > 40)
        return -5;
      if (hero.MapFaction == otherHero.MapFaction && hero.CharacterObject.Culture == otherHero.CharacterObject.Culture && (double) hero.Age > 35.0 && (double) otherHero.Age > 35.0)
        return 25;
      return hero.MapFaction == otherHero.MapFaction && hero.CharacterObject.Culture == otherHero.CharacterObject.Culture ? 10 : 0;
    }

    public static int CalculateTotalStrength(Hero hero)
    {
      float f = 1f;
      if (hero.PartyBelongedTo != null && hero.PartyBelongedTo.LeaderHero == hero)
        f += hero.PartyBelongedTo.Party.TotalStrength;
      if (hero.Clan != null && hero.Clan.Leader == hero)
      {
        foreach (Hero companion in (List<Hero>) hero.Clan.Companions)
        {
          if (companion.PartyBelongedTo != null && companion.PartyBelongedTo.LeaderHero == companion)
            f += companion.PartyBelongedTo.Party.TotalStrength;
        }
      }
      return MathF.Round(f);
    }

    public static bool IsCompanionInPlayerParty(Hero hero)
    {
      return hero != null && hero.IsPlayerCompanion && hero.PartyBelongedTo == MobileParty.MainParty;
    }

    public static bool NPCPoliticalDifferencesWithNPC(Hero firstNPC, Hero secondNPC)
    {
      int num1 = firstNPC.GetTraitLevel(DefaultTraits.Egalitarian) > 0 ? 1 : 0;
      bool flag1 = firstNPC.GetTraitLevel(DefaultTraits.Oligarchic) > 0;
      bool flag2 = firstNPC.GetTraitLevel(DefaultTraits.Authoritarian) > 0;
      bool flag3 = secondNPC.GetTraitLevel(DefaultTraits.Egalitarian) > 0;
      bool flag4 = secondNPC.GetTraitLevel(DefaultTraits.Oligarchic) > 0;
      bool flag5 = secondNPC.GetTraitLevel(DefaultTraits.Authoritarian) > 0;
      int num2 = flag3 ? 1 : 0;
      return num1 != num2 || flag1 != flag4 || flag2 != flag5;
    }

    public static int NPCPersonalityClashWithNPC(Hero firstNPC, Hero secondNPC)
    {
      int num = 0;
      foreach (TraitObject trait in DefaultTraits.Personality)
      {
        if (trait != DefaultTraits.Calculating && trait != DefaultTraits.Generosity)
        {
          int traitLevel1 = firstNPC.CharacterObject.GetTraitLevel(trait);
          int traitLevel2 = secondNPC.CharacterObject.GetTraitLevel(trait);
          if (traitLevel1 > 0 && traitLevel2 < 0)
            num += 2;
          if (traitLevel2 > 0 && traitLevel1 < 0)
            num += 2;
          if (traitLevel1 == 0 && traitLevel2 < 0)
            ++num;
          if (traitLevel2 == 0 && traitLevel1 < 0)
            ++num;
        }
      }
      CharacterObject characterObject = firstNPC.CharacterObject;
      if (characterObject.GetTraitLevel(DefaultTraits.Generosity) == -1)
        ++num;
      if (secondNPC.GetTraitLevel(DefaultTraits.Generosity) == -1)
        ++num;
      if (characterObject.GetTraitLevel(DefaultTraits.Honor) == -1)
        ++num;
      if (secondNPC.GetTraitLevel(DefaultTraits.Honor) == -1)
        ++num;
      return num * 5;
    }

    public static int TraitHarmony(
      Hero considerer,
      TraitObject trait,
      Hero consideree,
      bool sensitive)
    {
      int traitLevel1 = considerer.GetTraitLevel(trait);
      int traitLevel2 = consideree.GetTraitLevel(trait);
      if (traitLevel1 > 0 && traitLevel2 > 0)
        return 3;
      if (traitLevel1 == 0 && traitLevel2 > 0 || traitLevel1 < 0 && traitLevel2 < 0)
        return 1;
      if (traitLevel1 > 0 && traitLevel2 < 0)
        return -3;
      return traitLevel1 == 0 && traitLevel2 < 0 || traitLevel1 < 0 && traitLevel2 > 0 ? -1 : 0;
    }

    public static float CalculateReliabilityConstant(Hero hero, float maxValueConstant = 1f)
    {
      int traitLevel = hero.GetTraitLevel(DefaultTraits.Honor);
      return maxValueConstant * (float) ((2.5 + (double) MathF.Min(2, MathF.Max(-2, traitLevel))) / 5.0);
    }

    public static void SetPropertiesToTextObject(
      this Hero hero,
      TextObject textObject,
      string tagName)
    {
      StringHelpers.SetCharacterProperties(tagName, hero.CharacterObject, textObject);
    }

    public static void SetPropertiesToTextObject(
      this Settlement settlement,
      TextObject textObject,
      string tagName)
    {
      StringHelpers.SetSettlementProperties(tagName, settlement, textObject);
    }

    public static bool HeroCanRecruitFromHero(Hero buyerHero, Hero sellerHero, int index)
    {
      return index <= Campaign.Current.Models.VolunteerModel.MaximumIndexHeroCanRecruitFromHero(buyerHero, sellerHero);
    }

    public static List<CharacterObject> GetVolunteerTroopsOfHeroForRecruitment(Hero hero)
    {
      List<CharacterObject> heroForRecruitment = new List<CharacterObject>();
      if (hero.IsAlive)
      {
        for (int index = 0; index < 6; ++index)
          heroForRecruitment.Add(hero.VolunteerTypes[index]);
      }
      return heroForRecruitment;
    }

    public static Clan GetRandomClanForNotable(Hero notable)
    {
      float num1 = 0.0f;
      List<Clan> clanList = new List<Clan>();
      int num2 = notable.IsWanderer ? 1 : 0;
      int num3 = notable.IsMerchant ? 1 : 0;
      int num4 = notable.IsRuralNotable ? 1 : 0;
      int num5 = notable.IsArtisan ? 1 : 0;
      if (notable.IsPreacher)
      {
        num1 = 0.5f;
        clanList = Clan.NonBanditFactions.Where<Clan>((Func<Clan, bool>) (x => x.IsSect)).ToList<Clan>();
      }
      if (notable.IsGangLeader)
      {
        num1 = 0.5f;
        clanList = Clan.NonBanditFactions.Where<Clan>((Func<Clan, bool>) (x => x.IsMafia)).ToList<Clan>();
      }
      if ((double) MBRandom.RandomFloat >= (double) num1)
        return (Clan) null;
      foreach (Hero notable1 in (List<Hero>) notable.HomeSettlement.Notables)
      {
        if (clanList.Contains(notable1.SupporterOf))
          clanList.Remove(notable1.SupporterOf);
      }
      float num6 = 0.0f;
      ILookup<Clan, Settlement> lookup = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (x => x.IsVillage && x.Village.IsCastle || x.IsTown || x.IsHideout)).ToLookup<Settlement, Clan>((Func<Settlement, Clan>) (x => x.OwnerClan));
      foreach (Clan clan in clanList)
        num6 += HeroHelper.GetProbabilityForClan(clan, lookup[clan], notable);
      float num7 = num6 * MBRandom.RandomFloat;
      foreach (Clan randomClanForNotable in clanList)
      {
        num7 -= HeroHelper.GetProbabilityForClan(randomClanForNotable, lookup[randomClanForNotable], notable);
        if ((double) num7 <= 0.0)
          return randomClanForNotable;
      }
      return (Clan) null;
    }

    public static float GetProbabilityForClan(
      Clan clan,
      IEnumerable<Settlement> applicableSettlements,
      Hero notable)
    {
      float num1 = 1f;
      if (clan.Culture == notable.Culture)
        num1 *= 3f;
      float num2 = float.MaxValue;
      foreach (Settlement applicableSettlement in applicableSettlements)
      {
        float num3 = applicableSettlement.Position2D.DistanceSquared(notable.HomeSettlement.Position2D);
        if ((double) num3 < (double) num2)
          num2 = num3;
      }
      return num1 / (50f + num2);
    }

    public static CampaignTime GetRandomBirthDayForAge(float age)
    {
      double valueInDays = (double) MBRandom.RandomFloatRanged(0.0f, (float) CampaignTime.Now.GetDayOfYear);
      float valueInYears = (float) CampaignTime.Now.GetYear - age;
      return CampaignTime.Days((float) valueInDays) + CampaignTime.Years(valueInYears);
    }

    public static void GetRandomDeathDayAndBirthDay(
      int deathAge,
      out CampaignTime birthday,
      out CampaignTime deathday)
    {
      int maxValue = 84;
      int valueInDays = MBRandom.RandomInt(maxValue);
      birthday = CampaignTime.Years((float) (CampaignTime.Now.GetYear - deathAge - 1)) - CampaignTime.Days((float) valueInDays);
      deathday = birthday + CampaignTime.Years((float) deathAge) + CampaignTime.Days((float) MBRandom.RandomInt(maxValue - 1));
    }

    public static float StartRecruitingMoneyLimit(Hero hero)
    {
      return hero.Clan == Clan.PlayerClan ? 0.0f : (float) (50.0 + (hero.PartyBelongedTo != null ? (double) MathF.Min(150, hero.PartyBelongedTo.MemberRoster.TotalManCount) * 20.0 : 0.0));
    }

    public static float StartRecruitingMoneyLimitForClanLeader(Hero hero)
    {
      return hero.Clan == Clan.PlayerClan ? 0.0f : (float) (50.0 + (hero.Clan == null || hero.Clan.Leader == null || hero.Clan.Leader.PartyBelongedTo == null ? 0.0 : (double) hero.Clan.Leader.PartyBelongedTo.TotalWage + (double) hero.Clan.Leader.PartyBelongedTo.MemberRoster.TotalManCount * 40.0));
    }
  }
}
