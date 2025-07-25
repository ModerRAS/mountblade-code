// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultDiplomacyModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultDiplomacyModel : DiplomacyModel
  {
    private const int DailyValueFactorForTributes = 70;
    private static float HearthRiskValueFactor = 500f;
    private static float LordRiskValueFactor = 1000f;
    private static float FoodRiskValueFactor = 750f;
    private static float GarrisonRiskValueFactor = 2000f;
    private static float SiegeRiskValueFactor = 3000f;
    private static float LoyalityRiskValueFactor = 500f;
    private static float ProsperityValueFactor = 50f;
    private static float HappenedSiegesDifFactor = 1500f;
    private static float HappenedRaidsDifFactor = 500f;
    private static float StrengthValueFactor = 100f;
    private static TextObject _personalityEffectText = new TextObject("{=HDBryERe}Personalities");
    private const float strengthFactor = 50f;
    private static float _MaxValue = 1E+07f;
    private static float _MeaningfulValue = 2000000f;
    private static float _MinValue = 10000f;

    public override int MinimumRelationWithConversationCharacterToJoinKingdom => -10;

    public override int GiftingTownRelationshipBonus => 20;

    public override int GiftingCastleRelationshipBonus => 10;

    public override int MaxRelationLimit => 100;

    public override int MinRelationLimit => -100;

    public override int MaxNeutralRelationLimit => 10;

    public override int MinNeutralRelationLimit => -10;

    public override float GetStrengthThresholdForNonMutualWarsToBeIgnoredToJoinKingdom(
      Kingdom kingdomToJoin)
    {
      return kingdomToJoin.TotalStrength * 0.05f;
    }

    public override float GetClanStrength(Clan clan)
    {
      float num1 = 0.0f;
      foreach (Hero hero in (List<Hero>) clan.Heroes)
        num1 += this.GetHeroCommandingStrengthForClan(hero);
      float num2 = 1.2f;
      float num3 = clan.Influence * num2;
      float num4 = 4f;
      float num5 = (float) clan.Settlements.Count * num4;
      return num1 + num3 + num5;
    }

    public override float GetHeroCommandingStrengthForClan(Hero hero)
    {
      if (!hero.IsAlive)
        return 0.0f;
      float num1 = 1f;
      float num2 = 1f;
      float num3 = 1f;
      float num4 = 1f;
      float num5 = 0.1f;
      float num6 = 5f;
      float num7 = (float) hero.GetSkillValue(DefaultSkills.Tactics) * num1;
      float num8 = (float) hero.GetSkillValue(DefaultSkills.Steward) * num2;
      float num9 = (float) hero.GetSkillValue(DefaultSkills.Trade) * num3;
      float num10 = (float) hero.GetSkillValue(DefaultSkills.Leadership) * num4;
      int num11 = hero.GetTraitLevel(DefaultTraits.Commander) > 0 ? 300 : 0;
      float num12 = (float) hero.Gold * num5;
      float num13 = hero.PartyBelongedTo != null ? num6 * hero.PartyBelongedTo.Party.TotalStrength : 0.0f;
      float num14 = 0.0f;
      if (hero.Clan.Leader == hero)
        num14 += 500f;
      float num15 = 0.0f;
      if (hero.Father == hero.Clan.Leader || hero.Clan.Leader.Father == hero || hero.Mother == hero.Clan.Leader || hero.Clan.Leader.Mother == hero)
        num15 += 100f;
      float num16 = 0.0f;
      if (hero.IsNoncombatant)
        num16 -= 250f;
      float num17 = 0.0f;
      if (hero.GovernorOf != null)
        num17 -= 250f;
      float num18 = (float) num11 + num7 + num8 + num9 + num10 + num12 + num13 + num14 + num15 + num16 + num17;
      return (double) num18 <= 0.0 ? 0.0f : num18;
    }

    public override float GetHeroGoverningStrengthForClan(Hero hero)
    {
      if (!hero.IsAlive)
        return 0.0f;
      float num1 = 0.3f;
      float num2 = 0.9f;
      float num3 = 0.8f;
      float num4 = 1.2f;
      float num5 = 1f;
      float num6 = 0.005f;
      float num7 = 2f;
      float num8 = (float) hero.GetSkillValue(DefaultSkills.Tactics) * num1;
      float num9 = (float) hero.GetSkillValue(DefaultSkills.Charm) * num2;
      float num10 = (float) hero.GetSkillValue(DefaultSkills.Engineering) * num3;
      float num11 = (float) hero.GetSkillValue(DefaultSkills.Steward) * num7;
      float num12 = (float) hero.GetSkillValue(DefaultSkills.Trade) * num4;
      float num13 = (float) hero.GetSkillValue(DefaultSkills.Leadership) * num5;
      int num14 = hero.GetTraitLevel(DefaultTraits.Honor) > 0 ? 100 : 0;
      float num15 = (float) MathF.Min(100000, hero.Gold) * num6;
      float num16 = 0.0f;
      if (hero.Spouse == hero.Clan.Leader)
        num16 += 1000f;
      if (hero.Father == hero.Clan.Leader || hero.Clan.Leader.Father == hero || hero.Mother == hero.Clan.Leader || hero.Clan.Leader.Mother == hero)
        num16 += 750f;
      if (hero.Siblings.Contains<Hero>(hero.Clan.Leader))
        num16 += 500f;
      return (float) num14 + num8 + num11 + num12 + num13 + num15 + num16 + num9 + num10;
    }

    public override float GetRelationIncreaseFactor(Hero hero1, Hero hero2, float relationChange)
    {
      ExplainedNumber stat = new ExplainedNumber(relationChange);
      Hero hero = hero1.IsHumanPlayerCharacter || hero2.IsHumanPlayerCharacter ? (hero1.IsHumanPlayerCharacter ? hero1 : hero2) : ((double) MBRandom.RandomFloat < 0.5 ? hero1 : hero2);
      SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Charm, DefaultSkillEffects.CharmRelationBonus, hero.CharacterObject, ref stat);
      if (hero1.IsFemale != hero2.IsFemale)
      {
        if (hero.GetPerkValue(DefaultPerks.Charm.InBloom))
          stat.AddFactor(DefaultPerks.Charm.InBloom.PrimaryBonus);
      }
      else if (hero.GetPerkValue(DefaultPerks.Charm.YoungAndRespectful))
        stat.AddFactor(DefaultPerks.Charm.YoungAndRespectful.PrimaryBonus);
      if (hero.GetPerkValue(DefaultPerks.Charm.GoodNatured) && hero2.GetTraitLevel(DefaultTraits.Mercy) > 0)
        stat.Add(DefaultPerks.Charm.GoodNatured.SecondaryBonus, DefaultPerks.Charm.GoodNatured.Name);
      if (hero.GetPerkValue(DefaultPerks.Charm.Tribute) && hero2.GetTraitLevel(DefaultTraits.Mercy) < 0)
        stat.Add(DefaultPerks.Charm.Tribute.SecondaryBonus, DefaultPerks.Charm.Tribute.Name);
      return stat.ResultNumber;
    }

    public override int GetInfluenceAwardForSettlementCapturer(Settlement settlement)
    {
      if (!settlement.IsTown && !settlement.IsCastle)
        return 10;
      int num1 = settlement.IsTown ? 30 : 10;
      int num2 = 0;
      foreach (Village boundVillage in (List<Village>) settlement.BoundVillages)
        num2 += this.GetInfluenceAwardForSettlementCapturer(boundVillage.Settlement);
      return num1 + num2;
    }

    public override float GetHourlyInfluenceAwardForBeingArmyMember(MobileParty mobileParty)
    {
      float forBeingArmyMember = (float) (9.9999997473787516E-05 * (20.0 + (double) mobileParty.Party.TotalStrength));
      if (mobileParty.BesiegedSettlement != null || mobileParty.MapEvent != null)
        forBeingArmyMember *= 2f;
      return forBeingArmyMember;
    }

    public override float GetHourlyInfluenceAwardForRaidingEnemyVillage(MobileParty mobileParty)
    {
      int x = 0;
      foreach (MapEventParty party in (List<MapEventParty>) mobileParty.MapEvent.AttackerSide.Parties)
      {
        if (party.Party.MobileParty == mobileParty || party.Party.MobileParty?.Army != null && party.Party.MobileParty.Army.LeaderParty == mobileParty)
          x += party.Party.MemberRoster.TotalManCount;
      }
      return (float) (((double) MathF.Sqrt((float) x) + 2.0) / 240.0);
    }

    public override float GetHourlyInfluenceAwardForBesiegingEnemyFortification(
      MobileParty mobileParty)
    {
      int x = 0;
      foreach (PartyBase partyBase in mobileParty.BesiegedSettlement.SiegeEvent.GetSiegeEventSide(BattleSideEnum.Attacker).GetInvolvedPartiesForEventType())
      {
        if (partyBase.MobileParty == mobileParty || partyBase.MobileParty.Army != null && partyBase.MobileParty.Army.LeaderParty == mobileParty)
          x += partyBase.MemberRoster.TotalManCount;
      }
      return (float) (((double) MathF.Sqrt((float) x) + 2.0) / 240.0);
    }

    public override float GetScoreOfClanToJoinKingdom(Clan clan, Kingdom kingdom)
    {
      if (clan.Kingdom != null && clan.Kingdom.RulingClan == clan)
        return -1E+08f;
      int relationBetweenClans1 = FactionManager.GetRelationBetweenClans(kingdom.RulingClan, clan);
      int num1 = 0;
      int num2 = 0;
      foreach (Clan clan1 in (List<Clan>) kingdom.Clans)
      {
        int relationBetweenClans2 = FactionManager.GetRelationBetweenClans(clan, clan1);
        num1 += relationBetweenClans2;
        ++num2;
      }
      float num3 = num2 > 0 ? (float) num1 / (float) num2 : 0.0f;
      float f = MathF.Max(-100f, MathF.Min(100f, (float) relationBetweenClans1 + num3));
      float num4 = MathF.Min(2f, MathF.Max(0.33f, (float) (1.0 + (double) MathF.Sqrt(MathF.Abs(f)) * ((double) f < 0.0 ? -0.067000001668930054 : 0.10000000149011612))));
      float num5 = (float) (1.0 + (kingdom.Culture == clan.Culture ? 0.15000000596046448 : (kingdom.Leader == Hero.MainHero ? 0.0 : -0.15000000596046448)));
      float settlementBaseValue = clan.CalculateTotalSettlementBaseValue();
      float settlementValueForFaction = clan.CalculateTotalSettlementValueForFaction(kingdom);
      int commanderLimit = clan.CommanderLimit;
      float num6 = 0.0f;
      float num7 = 0.0f;
      if (!clan.IsMinorFaction)
      {
        float num8 = 0.0f;
        foreach (Town fief in (List<Town>) kingdom.Fiefs)
          num8 += fief.Settlement.GetSettlementValueForFaction((IFaction) kingdom);
        int num9 = 0;
        foreach (Clan clan2 in (List<Clan>) kingdom.Clans)
        {
          if (!clan2.IsUnderMercenaryService && clan2 != clan)
            num9 += clan2.CommanderLimit;
        }
        num6 = num8 / (float) (num9 + commanderLimit);
        num7 = (float) (-((double) (num9 * num9) * 100.0) + 10000.0);
      }
      int gold = clan.Leader.Gold;
      double num10 = 0.5 * (double) MathF.Min(1000000f, clan.Kingdom != null ? (float) clan.Kingdom.KingdomBudgetWallet : 0.0f) / (clan.Kingdom != null ? (double) clan.Kingdom.Clans.Count + 1.0 : 2.0);
      float num11 = 0.15f;
      float clanToJoinKingdom = (float) ((double) num6 * (double) MathF.Sqrt((float) commanderLimit) * (double) num11 * 0.20000000298023224) * (num4 * num5) + (clan.MapFaction.IsAtWarWith((IFaction) kingdom) ? settlementValueForFaction - settlementBaseValue : 0.0f) + num7;
      if (clan.Kingdom != null && clan.Kingdom.Leader == Hero.MainHero && (double) clanToJoinKingdom > 0.0)
        clanToJoinKingdom *= 0.2f;
      return clanToJoinKingdom;
    }

    public override float GetScoreOfClanToLeaveKingdom(Clan clan, Kingdom kingdom)
    {
      int relationBetweenClans1 = FactionManager.GetRelationBetweenClans(kingdom.RulingClan, clan);
      int num1 = 0;
      int num2 = 0;
      foreach (Clan clan1 in (List<Clan>) kingdom.Clans)
      {
        int relationBetweenClans2 = FactionManager.GetRelationBetweenClans(clan, clan1);
        num1 += relationBetweenClans2;
        ++num2;
      }
      float num3 = num2 > 0 ? (float) num1 / (float) num2 : 0.0f;
      float f = MathF.Max(-100f, MathF.Min(100f, (float) relationBetweenClans1 + num3));
      float num4 = MathF.Min(2f, MathF.Max(0.33f, (float) (1.0 + (double) MathF.Sqrt(MathF.Abs(f)) * ((double) f < 0.0 ? -0.067000001668930054 : 0.10000000149011612))));
      float num5 = (float) (1.0 + (kingdom.Culture == clan.Culture ? 0.15000000596046448 : (kingdom.Leader == Hero.MainHero ? 0.0 : -0.15000000596046448)));
      float settlementBaseValue = clan.CalculateTotalSettlementBaseValue();
      float settlementValueForFaction = clan.CalculateTotalSettlementValueForFaction(kingdom);
      int commanderLimit = clan.CommanderLimit;
      float num6 = 0.0f;
      if (!clan.IsMinorFaction)
      {
        float num7 = 0.0f;
        foreach (Town fief in (List<Town>) kingdom.Fiefs)
          num7 += fief.Settlement.GetSettlementValueForFaction((IFaction) kingdom);
        int num8 = 0;
        foreach (Clan clan2 in (List<Clan>) kingdom.Clans)
        {
          if (!clan2.IsUnderMercenaryService && clan2 != clan)
            num8 += clan2.CommanderLimit;
        }
        num6 = num7 / (float) (num8 + commanderLimit);
      }
      float reliabilityConstant = HeroHelper.CalculateReliabilityConstant(clan.Leader);
      float num9 = (float) (4000.0 * (15.0 - (double) MathF.Sqrt(MathF.Min(225f, (float) (CampaignTime.Now - clan.LastFactionChangeTime).ToDays))));
      int num10 = 0;
      int num11 = 0;
      foreach (SettlementComponent fief in (List<Town>) clan.Fiefs)
      {
        if (fief.IsCastle)
          ++num11;
        else
          ++num10;
      }
      float num12 = (float) (-70000.0 - (double) num11 * 10000.0 - (double) num10 * 30000.0);
      int gold = clan.Leader.Gold;
      double num13 = 0.5 * (double) MathF.Min(1000000, clan.Kingdom != null ? clan.Kingdom.KingdomBudgetWallet : 0) / ((double) clan.Kingdom.Clans.Count + 1.0);
      float num14 = 0.15f;
      float num15 = num12 / num14;
      float num16 = (float) (-(double) num6 * (double) MathF.Sqrt((float) commanderLimit) * (double) num14 * 0.20000000298023224 + (double) num15 * (double) reliabilityConstant + -(double) num9) * (num4 * num5);
      float num17 = (double) num4 >= 1.0 || (double) settlementBaseValue - (double) settlementValueForFaction >= 0.0 ? num16 + (settlementBaseValue - settlementValueForFaction) : num16 + num4 * (settlementBaseValue - settlementValueForFaction);
      if ((double) num4 < 1.0)
        num17 += (float) ((1.0 - (double) num4) * 200000.0);
      if (kingdom.Leader == Hero.MainHero)
      {
        if ((double) num17 > 0.0)
          num17 *= 0.2f;
        else
          num17 *= 5f;
      }
      return num17 + (kingdom.Leader == Hero.MainHero ? (float) -(1000000.0 * (double) num4) : 0.0f);
    }

    public override float GetScoreOfKingdomToGetClan(Kingdom kingdom, Clan clan)
    {
      float num1 = MathF.Min(2f, MathF.Max(0.33f, (float) (1.0 + 0.019999999552965164 * (double) FactionManager.GetRelationBetweenClans(kingdom.RulingClan, clan))));
      float num2 = (float) (1.0 + (kingdom.Culture == clan.Culture ? 1.0 : 0.0));
      int commanderLimit = clan.CommanderLimit;
      float num3 = (float) (((double) clan.TotalStrength + 150.0 * (double) commanderLimit) * 20.0);
      float powerRatioToEnemies = FactionHelper.GetPowerRatioToEnemies(kingdom);
      float reliabilityConstant = HeroHelper.CalculateReliabilityConstant(clan.Leader);
      float num4 = 1f / MathF.Max(0.4f, MathF.Min(2.5f, MathF.Sqrt(powerRatioToEnemies)));
      float num5 = num3 * num4;
      return (clan.CalculateTotalSettlementValueForFaction(kingdom) * 0.1f + num5) * num1 * num2 * reliabilityConstant;
    }

    public override float GetScoreOfKingdomToSackClan(Kingdom kingdom, Clan clan)
    {
      float num1 = MathF.Min(2f, MathF.Max(0.33f, (float) (1.0 + 0.019999999552965164 * (double) FactionManager.GetRelationBetweenClans(kingdom.RulingClan, clan))));
      float num2 = (float) (1.0 + (kingdom.Culture == clan.Culture ? 1.0 : 0.5));
      int commanderLimit = clan.CommanderLimit;
      float num3 = (float) (((double) clan.TotalStrength + 150.0 * (double) commanderLimit) * 20.0);
      float settlementValueForFaction = clan.CalculateTotalSettlementValueForFaction(kingdom);
      return (float) (10.0 - 1.0 * (double) num3 * (double) num2 * (double) num1) - settlementValueForFaction;
    }

    public override float GetScoreOfMercenaryToJoinKingdom(Clan mercenaryClan, Kingdom kingdom)
    {
      int num1 = mercenaryClan.Kingdom == kingdom ? mercenaryClan.MercenaryAwardMultiplier : Campaign.Current.Models.MinorFactionsModel.GetMercenaryAwardFactorToJoinKingdom(mercenaryClan, kingdom);
      float num2 = mercenaryClan.TotalStrength + (float) mercenaryClan.CommanderLimit * 50f;
      int factorToJoinKingdom = Campaign.Current.Models.MinorFactionsModel.GetMercenaryAwardFactorToJoinKingdom(mercenaryClan, kingdom, true);
      return kingdom.Leader == Hero.MainHero ? 0.0f : (float) ((double) (num1 - factorToJoinKingdom) * (double) num2 * 0.5);
    }

    public override float GetScoreOfMercenaryToLeaveKingdom(Clan mercenaryClan, Kingdom kingdom)
    {
      return (float) (10000.0 * (0.004999999888241291 * (double) MathF.Min(200f, mercenaryClan.LastFactionChangeTime.ElapsedDaysUntilNow)) - 5000.0) - this.GetScoreOfMercenaryToJoinKingdom(mercenaryClan, kingdom);
    }

    public override float GetScoreOfKingdomToHireMercenary(Kingdom kingdom, Clan mercenaryClan)
    {
      int num1 = 0;
      foreach (Clan clan in (List<Clan>) kingdom.Clans)
        num1 += clan.CommanderLimit;
      int num2 = num1 < 12 ? (12 - num1) * 100 : 0;
      int count = kingdom.Settlements.Count;
      int num3 = count < 40 ? (40 - count) * 30 : 0;
      return (float) (num2 + num3);
    }

    public override float GetScoreOfKingdomToSackMercenary(Kingdom kingdom, Clan mercenaryClan)
    {
      float b = (double) kingdom.Leader.Gold > 20000.0 ? MathF.Sqrt((float) kingdom.Leader.Gold / 20000f) - 1f : -1f;
      return (float) (((double) MathF.Min((float) (2.0 + (double) FactionManager.GetRelationBetweenClans(kingdom.RulingClan, mercenaryClan) / 100.0) - MathF.Min(5f, FactionHelper.GetPowerRatioToEnemies(kingdom)), b) * -1.0 - 0.10000000149011612) * 50.0 * (double) mercenaryClan.TotalStrength * 5.0);
    }

    public override float GetScoreOfDeclaringPeace(
      IFaction factionDeclaresPeace,
      IFaction factionDeclaredPeace,
      IFaction evaluatingClan,
      out TextObject peaceReason)
    {
      float num1 = -this.GetScoreOfWarInternal(factionDeclaresPeace, factionDeclaredPeace, evaluatingClan, true, out peaceReason);
      float num2 = 1f;
      if ((double) num1 > 0.0)
      {
        float num3 = factionDeclaredPeace.Leader == Hero.MainHero ? 0.12f : (Hero.MainHero.MapFaction == factionDeclaredPeace ? 0.24f : 0.36f);
        num2 *= num3 + (float) ((0.8399999737739563 - (double) num3) * (100.0 - (double) factionDeclaredPeace.Aggressiveness) * 0.0099999997764825821);
      }
      int num4 = factionDeclaredPeace.Leader == Hero.MainHero || factionDeclaresPeace.Leader == Hero.MainHero ? MathF.Min(Hero.MainHero.Level + 1, 31) * 20 : 0;
      int num5 = -(int) MathF.Min(180000f, (float) (((double) MathF.Min(10000f, factionDeclaresPeace.TotalStrength) + 2000.0 + (double) num4) * ((double) MathF.Min(10000f, factionDeclaredPeace.TotalStrength) + 2000.0 + (double) num4) * 0.00018000000272877514));
      return (float) ((int) ((double) num2 * (double) num1) + num5);
    }

    private float GetWarFatiqueScoreNew(
      IFaction factionDeclaresWar,
      IFaction factionDeclaredWar,
      IFaction evaluatingClan)
    {
      float num1 = 0.0f;
      float num2 = 0.0f;
      float num3 = 0.0f;
      float num4 = 0.0f;
      int num5 = 0;
      int num6 = 0;
      int num7 = 0;
      foreach (Town fief in (List<Town>) factionDeclaresWar.Fiefs)
      {
        int num8 = 1;
        if (fief.OwnerClan == evaluatingClan || evaluatingClan.IsKingdomFaction && fief.OwnerClan.Leader == evaluatingClan.Leader)
          num8 = 3;
        int num9 = fief.Settlement.IsTown ? 2 : 1;
        num1 += (double) fief.Loyalty < 50.0 ? (float) ((50.0 - (double) fief.Loyalty) * (double) MathF.Min(6000f, fief.Prosperity) * (double) num8 * (double) num9 * 0.0016599999507889152) : 0.0f;
        num2 += (float) num9 * ((double) fief.FoodStocks < 100.0 ? (100f - fief.FoodStocks) * (float) num8 : 0.0f);
        num6 += num8 * num9;
        if (fief.GarrisonParty == null)
        {
          num3 += 100f * (float) num8 * (float) num9;
        }
        else
        {
          double totalStrength = (double) fief.GarrisonParty.Party.TotalStrength;
          MilitiaPartyComponent militiaPartyComponent = fief.Settlement.MilitiaPartyComponent;
          double num10 = militiaPartyComponent != null ? (double) militiaPartyComponent.MobileParty.Party.TotalStrength : 0.0;
          float num11 = (float) (totalStrength + num10);
          num3 += (double) num11 < (double) (200 * num9) ? (float) (0.25 * ((double) (200 * num9) - (double) num11)) * (float) num8 * (float) num9 : 0.0f;
        }
        if (fief.IsUnderSiege && fief.Settlement.SiegeEvent != null && fief.Settlement.SiegeEvent.BesiegerCamp.LeaderParty.MapFaction == factionDeclaredWar && (MobileParty.MainParty.SiegeEvent == null || MobileParty.MainParty.SiegeEvent.BesiegedSettlement != fief.Settlement))
          num7 += 100 * num8 * num9;
        foreach (Village village in (List<Village>) fief.Villages)
        {
          float num12 = MathF.Max(0.0f, 400f - village.Hearth) * 0.2f + (village.VillageState == Village.VillageStates.Looted ? 20f : 0.0f);
          num4 += num12 * (float) num8;
          num5 += num8;
        }
      }
      float num13 = 0.0f;
      float num14 = 0.0f;
      int num15 = 0;
      if (factionDeclaresWar.IsKingdomFaction)
      {
        foreach (Clan clan in (List<Clan>) ((Kingdom) factionDeclaresWar).Clans)
        {
          int num16 = 1;
          if (clan == evaluatingClan || evaluatingClan.IsKingdomFaction && clan.Leader == evaluatingClan.Leader)
            num16 = 3;
          int partyLimitForTier = Campaign.Current.Models.ClanTierModel.GetPartyLimitForTier(clan, clan.Tier);
          if (partyLimitForTier > clan.WarPartyComponents.Count)
            num13 += 100f * (float) (partyLimitForTier - clan.WarPartyComponents.Count * num16);
          foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
          {
            if ((double) warPartyComponent.MobileParty.PartySizeRatio < 0.89999997615814209)
              num13 += (float) (100.0 * (0.89999997615814209 - (double) warPartyComponent.MobileParty.PartySizeRatio)) * (float) num16;
            if ((double) warPartyComponent.Party.TotalStrength > (double) warPartyComponent.Party.PartySizeLimit)
              num14 += (warPartyComponent.Party.TotalStrength - (float) warPartyComponent.Party.PartySizeLimit) * (float) num16;
          }
          num15 += partyLimitForTier * num16;
        }
      }
      int num17 = 0;
      int num18 = 0;
      int num19 = 0;
      int num20 = 0;
      foreach (StanceLink stance in factionDeclaresWar.Stances)
      {
        if (stance.Faction1 == factionDeclaresWar && stance.Faction2 == factionDeclaredWar)
        {
          num17 = stance.SuccessfulSieges2;
          num18 = stance.SuccessfulRaids2;
          num19 = stance.SuccessfulSieges1;
          num20 = stance.SuccessfulRaids1;
        }
        else if (stance.Faction1 == factionDeclaredWar && stance.Faction2 == factionDeclaresWar)
        {
          num17 = stance.SuccessfulSieges1;
          num18 = stance.SuccessfulRaids1;
          num19 = stance.SuccessfulSieges2;
          num20 = stance.SuccessfulRaids2;
        }
      }
      float num21 = (float) (1.0 + 0.20000000298023224 * (double) MathF.Min(2, MathF.Max(-2, evaluatingClan.IsKingdomFaction ? 0 : evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Calculating))));
      int count = factionDeclaresWar.Fiefs.Count;
      int num22 = factionDeclaresWar.Fiefs.Count * 3;
      float num23 = (float) ((double) MathF.Max(0.0f, (float) num17 - (float) num19 * 0.5f) / ((double) count + 5.0) * (double) DefaultDiplomacyModel.HappenedSiegesDifFactor * 100.0) * num21;
      float num24 = (float) ((double) MathF.Max(0.0f, (float) num18 - (float) num20 * 0.5f) / ((double) num22 + 5.0) * (double) DefaultDiplomacyModel.HappenedRaidsDifFactor * 100.0) * num21;
      float num25 = num13 / (float) (num15 + 2) * DefaultDiplomacyModel.LordRiskValueFactor;
      float num26 = (float) ((double) num14 / (double) (num15 + 2) * 0.5) * DefaultDiplomacyModel.LordRiskValueFactor;
      float num27 = num1 / (float) (num6 + 2) * DefaultDiplomacyModel.LoyalityRiskValueFactor;
      float num28 = num4 / (float) (num5 + 2) * DefaultDiplomacyModel.HearthRiskValueFactor;
      float num29 = num2 / (float) (num6 + 2) * DefaultDiplomacyModel.FoodRiskValueFactor;
      float num30 = num3 / (float) (num6 + 2) * DefaultDiplomacyModel.GarrisonRiskValueFactor;
      return MathF.Min(300000f, (float) (num7 / (num6 + 2)) * DefaultDiplomacyModel.SiegeRiskValueFactor + num25 - num26 + num27 + num28 + num29 + num30 + num23 + num24);
    }

    private DefaultDiplomacyModel.WarStats CalculateWarStats(
      IFaction faction,
      IFaction targetFaction)
    {
      float num1 = faction.TotalStrength * 0.85f;
      float num2 = 0.0f;
      int num3 = 0;
      foreach (Town fief in (List<Town>) faction.Fiefs)
        num3 += fief.IsCastle ? 1 : 2;
      if (faction.IsKingdomFaction)
      {
        foreach (Clan clan in (List<Clan>) ((Kingdom) faction).Clans)
        {
          if (!clan.IsUnderMercenaryService)
          {
            int partyLimitForTier = Campaign.Current.Models.ClanTierModel.GetPartyLimitForTier(clan, clan.Tier);
            num2 += (float) ((double) partyLimitForTier * 80.0 * (clan.Leader == clan.MapFaction.Leader ? 1.25 : 1.0));
          }
        }
      }
      float num4 = num1 + num2;
      Clan clan1 = faction.IsClan ? faction as Clan : (faction as Kingdom).RulingClan;
      float num5 = faction.Fiefs.Sum<Town>((Func<Town, float>) (f => (f.IsTown ? 2000f : 1000f) + f.Prosperity * 0.33f)) * DefaultDiplomacyModel.ProsperityValueFactor;
      float num6 = 0.0f;
      float num7 = 0.0f;
      foreach (StanceLink stance in faction.Stances)
      {
        if (stance.IsAtWar && stance.Faction1 != targetFaction && stance.Faction2 != targetFaction && (!stance.Faction2.IsMinorFaction || stance.Faction2.Leader == Hero.MainHero))
        {
          IFaction faction1 = stance.Faction1 == faction ? stance.Faction2 : stance.Faction1;
          if (faction1.IsKingdomFaction)
          {
            foreach (Clan clan2 in (List<Clan>) ((Kingdom) faction1).Clans)
            {
              if (!clan2.IsUnderMercenaryService)
                num6 += (float) ((double) clan2.Tier * 80.0 * (clan2.Leader == clan2.MapFaction.Leader ? 1.5 : 1.0));
            }
          }
          num7 += faction1.TotalStrength;
        }
      }
      float num8 = num7 + num6;
      float num9 = num4 * (MathF.Sqrt(MathF.Sqrt((float) MathF.Min(num3 + 4, 40))) / 2.5f);
      return new DefaultDiplomacyModel.WarStats()
      {
        RulingClan = clan1,
        Strength = num9,
        ValueOfSettlements = num5,
        TotalStrengthOfEnemies = num8
      };
    }

    private (Kingdom kingdom1, float kingdom1Score, Kingdom kingdom2, float kingdom2Score) GetTopDogs()
    {
      (Kingdom kingdom1, Kingdom kingdom2, Kingdom kingdom3) = MBMath.MaxElements3<Kingdom>((IEnumerable<Kingdom>) Kingdom.All, (Func<Kingdom, float>) (k => k.TotalStrength));
      float num1 = kingdom1 != null ? kingdom1.TotalStrength : 400f;
      float num2 = kingdom2 != null ? kingdom2.TotalStrength : 300f;
      float num3 = kingdom3 != null ? kingdom3.TotalStrength : (kingdom2 != null ? kingdom2.TotalStrength : 200f);
      if ((double) num3 <= 3000.0)
        num3 = 3000f;
      float num4 = num1 / num3;
      float num5 = num2 / num3;
      return (kingdom1, num4, kingdom2, num5);
    }

    private float GetTopDogScore(IFaction factionDeclaresWar, IFaction factionDeclaredWar)
    {
      float topDogScore = 0.0f;
      (Kingdom kingdom, float kingdom1Score, Kingdom kingdom2, float kingdom2Score) = this.GetTopDogs();
      if (kingdom == factionDeclaresWar)
        return 0.0f;
      if (factionDeclaredWar == kingdom)
        topDogScore = (float) ((double) DefaultDiplomacyModel.StrengthValueFactor * 2.0 * ((double) factionDeclaresWar.TotalStrength + 1.0) * (0.30000001192092896 * ((double) kingdom1Score - 0.89999997615814209)));
      else if (factionDeclaredWar.IsAtWarWith((IFaction) kingdom))
        topDogScore = (float) (-(double) DefaultDiplomacyModel.StrengthValueFactor * 2.0 * ((double) factionDeclaresWar.TotalStrength + 1.0) * (0.20000000298023224 * ((double) kingdom1Score - 0.89999997615814209)));
      if (factionDeclaredWar == kingdom2)
        topDogScore = (float) ((double) DefaultDiplomacyModel.StrengthValueFactor * 2.0 * ((double) factionDeclaresWar.TotalStrength + 1.0) * (0.30000001192092896 * ((double) kingdom2Score - 0.89999997615814209)));
      else if (factionDeclaredWar.IsAtWarWith((IFaction) kingdom))
        topDogScore = (float) (-(double) DefaultDiplomacyModel.StrengthValueFactor * 2.0 * ((double) factionDeclaresWar.TotalStrength + 1.0) * (0.20000000298023224 * ((double) kingdom2Score - 0.89999997615814209)));
      return topDogScore;
    }

    private float GetBottomScore(IFaction factionDeclaresWar, IFaction factionDeclaredWar)
    {
      float bottomScore = 0.0f;
      (Kingdom kingdom1, float kingdom1Score, Kingdom _, float _) = this.GetTopDogs();
      if (factionDeclaredWar == kingdom1)
        bottomScore = (float) ((double) DefaultDiplomacyModel.StrengthValueFactor * (double) factionDeclaresWar.TotalStrength * (0.20000000298023224 * (double) kingdom1Score));
      return bottomScore;
    }

    private float CalculateClanRiskScoreOfWar(
      float squareRootOfPowerRatio,
      IFaction factionDeclaredWar,
      IFaction evaluatingClan)
    {
      float clanRiskScoreOfWar = 0.0f;
      if ((double) squareRootOfPowerRatio > 0.5)
      {
        foreach (Town fief1 in (List<Town>) evaluatingClan.Fiefs)
        {
          float num1 = Campaign.MapDiagonal * 2f;
          float num2 = Campaign.MapDiagonal * 2f;
          foreach (Town fief2 in (List<Town>) factionDeclaredWar.Fiefs)
          {
            if (fief2.IsTown)
            {
              float length = (fief1.Settlement.GetPosition2D - fief2.Settlement.GetPosition2D).Length;
              if ((double) length < (double) num1)
              {
                num2 = num1;
                num1 = length;
              }
              else if ((double) length < (double) num2)
                num2 = length;
            }
          }
          float num3 = (float) (((double) num1 + (double) num2) / 2.0);
          if ((double) num3 < (double) Campaign.AverageDistanceBetweenTwoFortifications * 3.0)
          {
            float num4 = MathF.Min(Campaign.AverageDistanceBetweenTwoFortifications * 3f - num3, Campaign.AverageDistanceBetweenTwoFortifications * 2f) / (Campaign.AverageDistanceBetweenTwoFortifications * 2f);
            float num5 = MathF.Min(7.5f, (float) (((double) squareRootOfPowerRatio - 0.5) * 5.0)) + 0.5f;
            int num6 = fief1.IsTown ? 2 : 1;
            clanRiskScoreOfWar += (float) ((double) num4 * (double) num5 * (double) num6 * (2000.0 + (double) MathF.Min(8000f, fief1.Prosperity)));
          }
        }
      }
      return clanRiskScoreOfWar;
    }

    private float GetScoreOfWarInternal(
      IFaction factionDeclaresWar,
      IFaction factionDeclaredWar,
      IFaction evaluatingClan,
      bool evaluatingPeace,
      out TextObject reason)
    {
      reason = TextObject.Empty;
      if (factionDeclaresWar.MapFaction == factionDeclaredWar.MapFaction)
        return 0.0f;
      DefaultDiplomacyModel.WarStats warStats1 = this.CalculateWarStats(factionDeclaresWar, factionDeclaredWar);
      DefaultDiplomacyModel.WarStats warStats2 = this.CalculateWarStats(factionDeclaredWar, factionDeclaresWar);
      float distance = this.GetDistance(factionDeclaresWar, factionDeclaredWar);
      float num1 = (float) ((483.0 + 8.630000114440918 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      float num2 = factionDeclaresWar.Leader == Hero.MainHero || factionDeclaredWar.Leader == Hero.MainHero ? -300000f : -400000f;
      float num3;
      if ((double) distance - (double) Campaign.AverageDistanceBetweenTwoFortifications * 1.5 > (double) num1)
        num3 = num2;
      else if ((double) distance - (double) Campaign.AverageDistanceBetweenTwoFortifications * 1.5 < 0.0)
      {
        num3 = 0.0f;
      }
      else
      {
        float x = num1 - Campaign.AverageDistanceBetweenTwoFortifications * 1.5f;
        float num4 = -num2 / MathF.Pow(x, 1.6f);
        float num5 = distance - Campaign.AverageDistanceBetweenTwoFortifications * 1.5f;
        num3 = num2 + num4 * MathF.Pow(MathF.Pow(x - num5, 8f), 0.2f);
        if ((double) num3 > 0.0)
          num3 = 0.0f;
      }
      float num6 = (float) (0.10000000149011612 + (double) (1f - MathF.Pow(num3 / num2, 0.55f)) * 0.89999997615814209);
      float num7 = evaluatingClan.IsKingdomFaction ? 0.0f : evaluatingClan.Leader.RandomFloat(-20000f, 20000f);
      int valorLevelOfEvaluatingClan = MathF.Max(-2, MathF.Min(2, evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Valor)));
      float benefitScore1 = this.CalculateBenefitScore(ref warStats1, ref warStats2, valorLevelOfEvaluatingClan, evaluatingPeace, distance);
      float benefitScore2 = this.CalculateBenefitScore(ref warStats2, ref warStats1, valorLevelOfEvaluatingClan, evaluatingPeace, distance, true);
      float b = 0.0f;
      float squareRootOfPowerRatio = MathF.Min(2f, MathF.Sqrt((float) (((double) warStats2.Strength + 1000.0) / ((double) warStats1.Strength + 1000.0))));
      if (evaluatingClan.IsKingdomFaction)
      {
        int num8 = 0;
        foreach (Clan clan in (List<Clan>) ((Kingdom) evaluatingClan).Clans)
        {
          b += this.CalculateClanRiskScoreOfWar(squareRootOfPowerRatio, factionDeclaredWar, (IFaction) clan);
          ++num8;
        }
        if (num8 > 0)
          b /= (float) num8;
      }
      else
        b = this.CalculateClanRiskScoreOfWar(squareRootOfPowerRatio, factionDeclaredWar, evaluatingClan);
      float num9 = MathF.Min(200000f, b);
      float warFatiqueScoreNew = this.GetWarFatiqueScoreNew(factionDeclaresWar, factionDeclaredWar, evaluatingClan);
      float topDogScore = this.GetTopDogScore(factionDeclaresWar, factionDeclaredWar);
      int relationWithClan1 = warStats1.RulingClan.GetRelationWithClan(warStats2.RulingClan);
      int relationWithClan2 = evaluatingClan.Leader.Clan.GetRelationWithClan(warStats2.RulingClan);
      int num10 = relationWithClan2;
      float num11 = (float) (relationWithClan1 + num10) / 2f;
      float num12 = benefitScore1 * (float) (0.699999988079071 + 0.30000001192092896 * (100.0 - (double) num11) * 0.0099999997764825821);
      float num13 = (float) (((double) num11 < 0.0 ? ((double) factionDeclaresWar.TotalStrength > (double) factionDeclaredWar.TotalStrength * 2.0 ? -500.0 * (double) num11 : -500.0 * ((double) factionDeclaresWar.TotalStrength / (2.0 * (double) factionDeclaredWar.TotalStrength)) * ((double) factionDeclaresWar.TotalStrength / (2.0 * (double) factionDeclaredWar.TotalStrength)) * (double) num11) : 0.0) * (factionDeclaredWar.Leader == Hero.MainHero ? 1.5 : 1.0));
      float num14 = (float) (1.0 + 1.0 / 500.0 * (double) factionDeclaredWar.Aggressiveness * (factionDeclaredWar.Leader == Hero.MainHero ? 1.5 : 1.0));
      float a = num12 * num14;
      if (factionDeclaredWar.Leader == Hero.MainHero & evaluatingPeace)
        benefitScore2 /= num14;
      float num15 = 0.3f * MathF.Min(100000f, factionDeclaredWar.Settlements.Sum<Settlement>((Func<Settlement, float>) (s => s.Culture != factionDeclaresWar.Culture || !s.IsFortification ? 0.0f : s.Town.Prosperity * 0.5f * DefaultDiplomacyModel.ProsperityValueFactor)));
      int num16 = 0;
      foreach (Town fief in (List<Town>) factionDeclaresWar.Fiefs)
        num16 += fief.IsTown ? 2 : 1;
      if (num16 > 0)
        ;
      float num17 = (float) (0.10000000149011612 + 0.89999997615814209 * (double) MathF.Min(MathF.Min(a, benefitScore2), 100000f) / 100000.0);
      float num18 = a - benefitScore2;
      if (!evaluatingClan.IsKingdomFaction && evaluatingClan.Leader != evaluatingClan.MapFaction.Leader)
      {
        if ((double) num18 > 0.0 && evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Mercy) != 0)
          num18 *= (float) (1.0 - 0.10000000149011612 * (double) MathF.Min(2, MathF.Max(-2, evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Mercy))));
        if ((double) num18 < 0.0 && evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Valor) != 0)
          num18 *= (float) (1.0 - 0.10000000149011612 * (double) MathF.Min(2, MathF.Max(-2, evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Valor))));
      }
      float num19 = 0.0f;
      if (!evaluatingClan.IsKingdomFaction && (double) warStats1.Strength > (double) warStats2.Strength && evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Mercy) > 0)
        num19 -= MathF.Min((float) (((double) warStats1.Strength + 500.0) / ((double) warStats2.Strength + 500.0) - 1.0), 2f) * 5000f * (float) evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Mercy);
      if (!evaluatingClan.IsKingdomFaction && (double) warStats1.Strength < (double) warStats2.Strength && evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Valor) > 0)
        num19 += MathF.Min((float) (((double) warStats2.Strength + 500.0) / ((double) warStats1.Strength + 500.0) - 1.0), 2f) * 5000f * (float) evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Valor);
      float num20 = 0.0f;
      float num21 = 0.0f;
      StanceLink stanceWith = factionDeclaresWar.GetStanceWith(factionDeclaredWar);
      int num22 = 0;
      int num23 = 0;
      if (stanceWith.IsAtWar)
      {
        float elapsedDaysUntilNow = stanceWith.WarStartDate.ElapsedDaysUntilNow;
        int num24 = 60;
        float num25 = 5f;
        num20 = (double) elapsedDaysUntilNow > (double) num24 ? (float) (((double) elapsedDaysUntilNow - (double) num24) * -400.0) : (float) (((double) num24 - (double) elapsedDaysUntilNow) * (double) num25 * (400.0 + 0.20000000298023224 * (double) MathF.Min(6000f, MathF.Min(warStats1.Strength, warStats2.Strength))));
        if ((double) num20 < 0.0 && !evaluatingClan.IsKingdomFaction)
        {
          int traitLevel = evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Valor);
          if (traitLevel < 0)
            num20 *= (float) (1.0 - (double) MathF.Max(traitLevel, -2) * 0.25);
          else if (traitLevel > 0)
            num20 *= (float) (1.0 - (double) MathF.Min(traitLevel, 2) * 0.17499999701976776);
        }
        foreach (Hero hero in (List<Hero>) factionDeclaresWar.Heroes)
        {
          int num26 = hero.Clan == evaluatingClan ? 3 : 1;
          float num27 = hero.Clan.Leader == hero ? 1.5f : 1f;
          double num28 = hero == hero.MapFaction.Leader ? 1.5 : 1.0;
          if (hero.IsPrisoner && hero.IsLord && hero.PartyBelongedToAsPrisoner != null && hero.PartyBelongedToAsPrisoner.MapFaction == factionDeclaredWar)
            num22 += (int) (num28 * (double) num27 * (double) num26 * 3000.0);
        }
        num23 = num22;
        foreach (Hero hero in (List<Hero>) factionDeclaredWar.Heroes)
        {
          double num29 = hero == hero.MapFaction.Leader ? 1.5 : 1.0;
          float num30 = hero.Clan.Leader == hero ? 1.5f : 1f;
          if (hero.IsPrisoner && hero.IsLord && hero.PartyBelongedToAsPrisoner != null && hero.PartyBelongedToAsPrisoner.MapFaction == factionDeclaresWar)
            num22 -= (int) (num29 * (double) num30 * 2500.0);
        }
      }
      else
      {
        float elapsedDaysUntilNow = stanceWith.PeaceDeclarationDate.ElapsedDaysUntilNow;
        num21 = (double) elapsedDaysUntilNow > 60.0 ? 0.0f : (float) ((60.0 - (double) elapsedDaysUntilNow) * -(400.0 + 0.20000000298023224 * (double) MathF.Min(6000f, MathF.Min(warStats1.Strength, warStats2.Strength))));
        if ((double) num21 < 0.0 && !evaluatingClan.IsKingdomFaction)
        {
          int traitLevel = evaluatingClan.Leader.GetTraitLevel(DefaultTraits.Honor);
          if (traitLevel > 0)
            num21 *= (float) (1.0 + (double) MathF.Min(traitLevel, 2) * 0.25);
          else if (traitLevel < 0)
            num21 *= (float) (1.0 + (double) MathF.Max(traitLevel, -2) * 0.17499999701976776);
        }
      }
      int num31 = factionDeclaresWar.IsKingdomFaction ? ((Kingdom) factionDeclaresWar).PoliticalStagnation * 1000 : 0;
      float num32 = (float) ((double) num15 + (double) num7 * (double) num17 + (double) num3 * (double) num17 + (double) num18 + (double) num20 + (double) num21 + (double) num31 * (double) num17 - (double) num9 * (double) num17 + (double) num13 - (double) num22 + (double) num19 * (double) num17);
      float num33 = DefaultDiplomacyModel.StrengthValueFactor * 0.5f * Kingdom.All.Sum<Kingdom>((Func<Kingdom, float>) (k => !k.IsAtWarWith(factionDeclaresWar) || !k.IsAtWarWith(factionDeclaredWar) || k.IsMinorFaction ? 0.0f : MathF.Min(k.TotalStrength, factionDeclaredWar.TotalStrength)));
      float num34 = (topDogScore - num33 - warFatiqueScoreNew) * num17;
      float num35;
      if (evaluatingPeace)
      {
        float num36 = num32 + (factionDeclaredWar.Leader == Hero.MainHero ? 10000f : 0.0f);
        if ((double) num36 > 0.0)
        {
          num35 = num36 + num34;
          if ((double) num35 < 0.0)
            num35 *= 0.5f;
        }
        else
          num35 = num36 + num34 * 0.75f;
      }
      else
        num35 = num32 + num34;
      if (evaluatingPeace)
      {
        float num37 = warFatiqueScoreNew;
        float num38 = -num18;
        float num39 = (float) (-(double) num20 * 2.0);
        int num40 = num22 * 3 + num23;
        float num41 = (float) (-(double) num9 * 3.0);
        float num42 = num35 * 0.5f;
        float num43 = (float) (-(double) num3 * 0.5);
        reason = (double) num42 <= (double) num41 || (double) num42 <= (double) num22 || (double) num42 <= (double) warFatiqueScoreNew || (double) num42 <= (double) num38 || (double) num42 <= (double) num39 || (double) num42 <= (double) num43 ? ((double) num41 <= (double) num40 || (double) num41 <= (double) warFatiqueScoreNew || (double) num41 <= (double) num38 || (double) num41 <= (double) num39 || (double) num41 <= (double) num43 ? ((double) num40 <= (double) num37 || (double) num40 <= (double) num38 || (double) num40 <= (double) num39 || (double) num22 <= (double) num43 ? ((double) num37 < (double) num38 || (double) num37 < (double) num39 || (double) warFatiqueScoreNew <= (double) num43 ? ((double) num39 < (double) num38 || (double) num39 <= (double) num43 ? ((double) num38 <= (double) num43 ? new TextObject("{=i0h0LKa0}Our borders are far from those of the enemy. It is too arduous to pursue this war.") : ((double) warStats1.TotalStrengthOfEnemies <= 0.0 || (double) warStats1.Strength >= (double) warStats1.TotalStrengthOfEnemies + (double) warStats2.Strength ? ((double) warStats1.Strength >= (double) warStats2.Strength ? ((double) warStats1.ValueOfSettlements <= (double) warStats2.ValueOfSettlements ? new TextObject("{=vwjs6EjJ}On balance, the gains we stand to make are not worth the costs and risks. ") : new TextObject("{=HqJSNG3M}Our realm is currently doing well, but we stand to lose this wealth if we go on fighting.")) : new TextObject("{=JOe3BC41}The {ENEMY_KINGDOM_INFORMAL_NAME} is currently more powerful than us. We need time to build up our strength.")) : new TextObject("{=nuqv4GAA}We have too many enemies. We need to make peace with at least some of them."))) : new TextObject("{=lV0VOn99}This war has gone on too long.")) : new TextObject("{=QQtJobYP}We need time to recover from the hardships of war.")) : new TextObject("{=TQmPcVRZ}Too many of our nobles are in captivity. We should make peace to free them.")) : new TextObject("{=eH0roDGM}Our clan's lands are vulnerable. I owe it to those under my protection to seek peace.")) : new TextObject("{=3JGFdaT7}The {ENEMY_KINGDOM_INFORMAL_NAME} are willing to pay considerable tribute.");
        reason.SetTextVariable("ENEMY_KINGDOM_INFORMAL_NAME", factionDeclaredWar.InformalName);
      }
      else
      {
        float num44 = num18;
        int num45 = relationWithClan2 < 0 ? -relationWithClan2 * 1000 : 0;
        int num46 = stanceWith.Faction1 == evaluatingClan.MapFaction ? (stanceWith.TotalTributePaidby1 != 0 ? stanceWith.TotalTributePaidby1 : -stanceWith.TotalTributePaidby2) : (stanceWith.TotalTributePaidby1 != 0 ? stanceWith.TotalTributePaidby2 : -stanceWith.TotalTributePaidby1);
        int num47 = num46 * 70;
        int num48 = num31;
        float num49 = topDogScore;
        float num50 = (float) ((100.0 - (double) factionDeclaredWar.Aggressiveness) * 1000.0);
        float num51 = 0.0f;
        if (factionDeclaredWar.Culture != factionDeclaresWar.Culture)
        {
          int x = 0;
          foreach (Town fief in (List<Town>) factionDeclaredWar.Fiefs)
          {
            if (fief.Culture == factionDeclaresWar.Culture)
              ++x;
          }
          num51 = MathF.Pow((float) x, 0.7f) * 30000f;
        }
        if ((double) num47 > (double) num44 && num47 > num45 && num47 > num48 && (double) num47 > (double) num51 && (double) num47 > (double) num49 && (double) num47 > (double) num50)
          reason = num46 <= 1000 ? new TextObject("{=qI4cicQz}It is a disgrace to keep paying tribute to the  {ENEMY_KINGDOM_INFORMAL_NAME}.") : new TextObject("{=Kt8tBtBG}We are paying too much tribute to the {ENEMY_KINGDOM_INFORMAL_NAME}.");
        else if ((double) num45 > (double) num44 && num45 > num48 && (double) num45 > (double) num51 && (double) num45 > (double) num49 && (double) num45 > (double) num50)
          reason = new TextObject("{=dov3iRlt}{ENEMY_RULER.NAME} of the {ENEMY_KINGDOM_INFORMAL_NAME} is vile and dangerous. We must deal with {?ENEMY_RULER.GENDER}her{?}him{\\?} before it is too late.");
        else if ((double) num44 > (double) num48 && (double) num44 > (double) num51 && (double) num44 > (double) num49)
        {
          if ((double) warStats1.TotalStrengthOfEnemies == 0.0 && (double) warStats1.Strength < (double) warStats2.Strength)
            reason = new TextObject("{=1aQAmENB}The  {ENEMY_KINGDOM_INFORMAL_NAME} may be strong but their lands are rich and ripe for the taking.");
          else if ((double) warStats1.Strength > (double) warStats2.Strength)
            reason = new TextObject("{=az3K3j4C}Right now we are stronger than the {ENEMY_KINGDOM_INFORMAL_NAME}. We should strike while we can.");
        }
        else
          reason = (double) num48 <= (double) num51 || (double) num48 <= (double) num49 || (double) num48 <= (double) num50 ? ((double) num51 <= (double) num49 || (double) num51 <= (double) num50 ? ((double) num50 <= (double) num49 ? new TextObject("{=gsmmoKNd}The {ENEMY_KINGDOM_INFORMAL_NAME} will devour all of Calradia if we do not stop them.") : new TextObject("{=bHf8aMtt}The {ENEMY_KINGDOM_INFORMAL_NAME} have been acting aggressively. We should teach them a lesson.")) : new TextObject("{=79lEPn1u}The {ENEMY_KINGDOM_INFORMAL_NAME} have occupied our ancestral lands and they oppress our kinfolk.")) : new TextObject("{=pmg9KCqf}We have been at peace too long. Our men grow restless.");
        reason.SetTextVariable("ENEMY_KINGDOM_INFORMAL_NAME", factionDeclaredWar.InformalName);
        reason.SetCharacterProperties("ENEMY_RULER", factionDeclaredWar.Leader.CharacterObject);
      }
      return num6 * num35;
    }

    private float CalculateBenefitScore(
      ref DefaultDiplomacyModel.WarStats faction1Stats,
      ref DefaultDiplomacyModel.WarStats faction2Stats,
      int valorLevelOfEvaluatingClan,
      bool evaluatingPeace,
      float distanceToClosestEnemyFief,
      bool calculatingRisk = false)
    {
      float valueOfSettlements = faction2Stats.ValueOfSettlements;
      double num1 = (double) MathF.Clamp((double) valueOfSettlements > (double) DefaultDiplomacyModel._MeaningfulValue ? (float) (((double) valueOfSettlements - (double) DefaultDiplomacyModel._MeaningfulValue) * 0.5) + DefaultDiplomacyModel._MinValue + DefaultDiplomacyModel._MeaningfulValue : valueOfSettlements + DefaultDiplomacyModel._MinValue, DefaultDiplomacyModel._MinValue, DefaultDiplomacyModel._MaxValue);
      float num2 = 100f;
      float x1 = (float) (((double) faction2Stats.Strength + (double) num2) / ((double) faction1Stats.Strength + (double) num2));
      float num3 = 0.0f;
      float num4 = (double) x1 > 1.0 ? x1 : 1f / x1;
      if ((double) num4 > 3.0)
        num3 = MathF.Min(0.4f, (float) (((double) num4 / 3.0 - 1.0) * 0.10000000149011612));
      float num5 = MathF.Pow(x1, 1.1f + num3);
      float num6;
      if (!calculatingRisk)
      {
        float x2 = MathF.Min(1f, (float) (((double) MathF.Min(MathF.Max(faction2Stats.Strength, 10000f), faction1Stats.Strength) + (double) num2) / ((double) faction2Stats.Strength + (double) faction1Stats.TotalStrengthOfEnemies + (double) num2)));
        num6 = num5 / MathF.Pow(x2, (float) ((0.5 - (double) valorLevelOfEvaluatingClan * 0.10000000149011612) * (evaluatingPeace ? 1.1000000238418579 : 1.0)));
      }
      else
      {
        float x3 = MathF.Min(1f, (float) (((double) MathF.Min(MathF.Max(faction1Stats.Strength, 10000f), faction2Stats.Strength) + (double) num2) / ((double) faction1Stats.Strength + (double) faction2Stats.TotalStrengthOfEnemies + (double) num2)));
        num6 = num5 * MathF.Pow(x3, (float) ((0.40000000596046448 - (double) valorLevelOfEvaluatingClan * 0.10000000149011612) * (evaluatingPeace ? 1.1000000238418579 : 1.0)));
      }
      double num7 = (double) MathF.Clamp((float) (1.0 / (1.0 + (double) num6)), 0.01f, 0.99f);
      return (float) (num1 * num7) * MathF.Max(0.25f, (float) ((double) Campaign.AverageDistanceBetweenTwoFortifications * 3.0 / ((double) Campaign.AverageDistanceBetweenTwoFortifications * 3.0 + (double) distanceToClosestEnemyFief + (double) distanceToClosestEnemyFief * 0.25)));
    }

    private (Settlement, float)[] GetClosestSettlementsToOtherFactionsNearestSettlementToMidPoint(
      IFaction faction1,
      IFaction faction2)
    {
      Settlement toSettlement = (Settlement) null;
      float num = float.MaxValue;
      foreach (Town fief in (List<Town>) faction1.Fiefs)
      {
        float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(fief.Settlement, faction1.FactionMidSettlement);
        if ((double) num > (double) distance)
        {
          toSettlement = fief.Settlement;
          num = distance;
        }
      }
      (Settlement, float)[] settlementToMidPoint = new (Settlement, float)[3]
      {
        ((Settlement) null, float.MaxValue),
        ((Settlement) null, float.MaxValue),
        ((Settlement) null, float.MaxValue)
      };
      foreach (Town fief in (List<Town>) faction2.Fiefs)
      {
        float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(fief.Settlement, toSettlement);
        if ((double) distance < (double) settlementToMidPoint[2].Item2)
        {
          if ((double) distance < (double) settlementToMidPoint[1].Item2)
          {
            if ((double) distance < (double) settlementToMidPoint[0].Item2)
            {
              settlementToMidPoint[2] = settlementToMidPoint[1];
              settlementToMidPoint[1] = settlementToMidPoint[0];
              settlementToMidPoint[0].Item1 = fief.Settlement;
              settlementToMidPoint[0].Item2 = distance;
            }
            else
            {
              settlementToMidPoint[2] = settlementToMidPoint[1];
              settlementToMidPoint[1].Item1 = fief.Settlement;
              settlementToMidPoint[1].Item2 = distance;
            }
          }
          else
          {
            settlementToMidPoint[2].Item1 = fief.Settlement;
            settlementToMidPoint[2].Item2 = distance;
          }
        }
      }
      return settlementToMidPoint;
    }

    private float GetDistance(IFaction factionDeclaresWar, IFaction factionDeclaredWar)
    {
      if (factionDeclaresWar.Fiefs.Count == 0 || factionDeclaredWar.Fiefs.Count == 0)
        return factionDeclaresWar.Leader == Hero.MainHero || factionDeclaredWar.Leader == Hero.MainHero ? 100f : 0.4f * (factionDeclaresWar.InitialPosition - factionDeclaredWar.InitialPosition).Length;
      (Settlement, float)[] settlementToMidPoint1 = this.GetClosestSettlementsToOtherFactionsNearestSettlementToMidPoint(factionDeclaredWar, factionDeclaresWar);
      (Settlement, float)[] settlementToMidPoint2 = this.GetClosestSettlementsToOtherFactionsNearestSettlementToMidPoint(factionDeclaresWar, factionDeclaredWar);
      float[] numArray = new float[3]
      {
        float.MaxValue,
        float.MaxValue,
        float.MaxValue
      };
      foreach ((Settlement, float) tuple1 in settlementToMidPoint1)
      {
        if (tuple1.Item1 != null)
        {
          foreach ((Settlement, float) tuple2 in settlementToMidPoint2)
          {
            if (tuple2.Item1 != null)
            {
              float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(tuple1.Item1, tuple2.Item1);
              if ((double) distance < (double) numArray[2])
              {
                if ((double) distance < (double) numArray[1])
                {
                  if ((double) distance < (double) numArray[0])
                  {
                    numArray[2] = numArray[1];
                    numArray[1] = numArray[0];
                    numArray[0] = distance;
                  }
                  else
                  {
                    numArray[2] = numArray[1];
                    numArray[1] = distance;
                  }
                }
                else
                  numArray[2] = distance;
              }
            }
          }
        }
      }
      float num1 = numArray[0];
      float num2 = (float) (((double) numArray[1] < 3.4028234663852886E+38 ? (double) numArray[1] : (double) num1) * 0.67000001668930054);
      float num3 = (float) (((double) numArray[2] < 3.4028234663852886E+38 ? (double) numArray[2] : ((double) num2 < 3.4028234663852886E+38 ? (double) num2 : (double) num1)) * 0.33000001311302185);
      return (float) (((double) num1 + (double) num2 + (double) num3) / 2.0);
    }

    public override float GetScoreOfDeclaringWar(
      IFaction factionDeclaresWar,
      IFaction factionDeclaredWar,
      IFaction evaluatingClan,
      out TextObject warReason)
    {
      double scoreOfWarInternal = (double) this.GetScoreOfWarInternal(factionDeclaresWar, factionDeclaredWar, evaluatingClan, false, out warReason);
      StanceLink stanceWith = factionDeclaresWar.GetStanceWith(factionDeclaredWar);
      int num1 = 0;
      if (stanceWith.IsNeutral)
      {
        int dailyTributePaid = stanceWith.GetDailyTributePaid(factionDeclaredWar);
        float num2 = (float) evaluatingClan.Leader.Gold + (evaluatingClan.MapFaction.IsKingdomFaction ? (float) (0.5 * ((double) ((Kingdom) evaluatingClan.MapFaction).KingdomBudgetWallet / ((double) ((Kingdom) evaluatingClan.MapFaction).Clans.Count + 1.0))) : 0.0f);
        float num3 = evaluatingClan.IsKingdomFaction || evaluatingClan.Leader == null ? 1f : ((double) num2 < 50000.0 ? (float) (1.0 + 0.5 * ((50000.0 - (double) num2) / 50000.0)) : ((double) num2 > 200000.0 ? MathF.Max(0.5f, MathF.Sqrt(200000f / num2)) : 1f));
        num1 = (int) ((double) this.GetValueOfDailyTribute(dailyTributePaid) * (double) num3);
      }
      double num4 = (double) -(int) MathF.Min(120000f, (float) (((double) MathF.Min(10000f, factionDeclaresWar.TotalStrength) * 0.800000011920929 + 2000.0) * ((double) MathF.Min(10000f, factionDeclaredWar.TotalStrength) * 0.800000011920929 + 2000.0) * 0.0012000000569969416));
      return (float) (scoreOfWarInternal + num4) - (float) num1;
    }

    private static int GetWarFatiqueScore(IFaction factionDeclaresWar, IFaction factionDeclaredWar)
    {
      int num1 = 0;
      float toDays = (float) (CampaignTime.Now - factionDeclaresWar.GetStanceWith(factionDeclaredWar).WarStartDate).ToDays;
      float num2 = !factionDeclaresWar.IsMinorFaction || factionDeclaresWar == MobileParty.MainParty.MapFaction ? 60f : 40f;
      if ((double) toDays < (double) num2)
      {
        int num3 = factionDeclaredWar == MobileParty.MainParty.MapFaction && !factionDeclaresWar.IsMinorFaction || factionDeclaresWar == MobileParty.MainParty.MapFaction && !factionDeclaredWar.IsMinorFaction ? 2 : 1;
        float num4 = !factionDeclaresWar.IsMinorFaction || factionDeclaresWar == MobileParty.MainParty.MapFaction ? 2000f : 1000f;
        num1 = (int) ((double) MathF.Pow(num2 - toDays, 1.3f) * (double) num4 * (double) num3);
      }
      return num1 + 60000;
    }

    public override float GetScoreOfLettingPartyGo(MobileParty party, MobileParty partyToLetGo)
    {
      float num1 = 0.0f;
      BattleSideEnum battleSideEnum = BattleSideEnum.Attacker;
      if (battleSideEnum == BattleSideEnum.Attacker)
        num1 = 0.98f;
      float num2 = 0.0f;
      for (int index = 0; index < partyToLetGo.ItemRoster.Count; ++index)
      {
        ItemRosterElement elementCopyAtIndex = partyToLetGo.ItemRoster.GetElementCopyAtIndex(index);
        num2 += (float) (elementCopyAtIndex.Amount * elementCopyAtIndex.EquipmentElement.GetBaseValue());
      }
      float num3 = 0.0f;
      for (int index = 0; index < party.ItemRoster.Count; ++index)
      {
        ItemRosterElement elementCopyAtIndex = party.ItemRoster.GetElementCopyAtIndex(index);
        num3 += (float) (elementCopyAtIndex.Amount * elementCopyAtIndex.EquipmentElement.GetBaseValue());
      }
      float num4 = 0.0f;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) party.MemberRoster.GetTroopRoster())
        num4 += MathF.Min(1000f, 10f * (float) troopRosterElement.Character.Level * MathF.Sqrt((float) troopRosterElement.Character.Level));
      float num5 = 0.0f;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) partyToLetGo.MemberRoster.GetTroopRoster())
        num5 += MathF.Min(1000f, 10f * (float) troopRosterElement.Character.Level * MathF.Sqrt((float) troopRosterElement.Character.Level));
      float num6 = 0.0f;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) (battleSideEnum == BattleSideEnum.Attacker ? partyToLetGo : party).MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero)
          num6 += 500f;
        num6 += (float) Campaign.Current.Models.RansomValueCalculationModel.PrisonerRansomValue(troopRosterElement.Character, battleSideEnum == BattleSideEnum.Attacker ? partyToLetGo.LeaderHero : party.LeaderHero) * 0.3f;
      }
      float num7 = (float) ((party.IsPartyTradeActive ? (double) party.PartyTradeGold : 0.0) + (party.LeaderHero != null ? (double) party.LeaderHero.Gold * 0.15000000596046448 : 0.0));
      float num8 = partyToLetGo.IsPartyTradeActive ? (float) partyToLetGo.PartyTradeGold : 0.0f;
      float num9 = num7 + (partyToLetGo.LeaderHero != null ? (float) partyToLetGo.LeaderHero.Gold * 0.15f : 0.0f);
      float num10 = num5 + 10000f;
      if (partyToLetGo.BesiegedSettlement != null)
        num10 += 20000f;
      return (float) ((1.0 - (double) num1) * (double) num4 - 1000.0 - (double) num1 * (double) num10 - (double) num1 * (double) num8 + (1.0 - (double) num1) * (double) num9 + (double) num1 * (double) num6 + ((double) num3 * (1.0 - (double) num1) - (double) num1 * (double) num2));
    }

    public override float GetValueOfHeroForFaction(
      Hero examinedHero,
      IFaction targetFaction,
      bool forMarriage = false)
    {
      return this.GetHeroCommandingStrengthForClan(examinedHero) * 10f;
    }

    public override int GetRelationCostOfExpellingClanFromKingdom() => -20;

    public override int GetInfluenceCostOfSupportingClan() => 50;

    public override int GetInfluenceCostOfExpellingClan(Clan proposingClan)
    {
      ExplainedNumber cost = new ExplainedNumber(200f);
      this.GetPerkEffectsOnKingdomDecisionInfluenceCost(proposingClan, ref cost);
      return MathF.Round(cost.ResultNumber);
    }

    public override int GetInfluenceCostOfProposingPeace(Clan proposingClan)
    {
      ExplainedNumber cost = new ExplainedNumber(100f);
      this.GetPerkEffectsOnKingdomDecisionInfluenceCost(proposingClan, ref cost);
      return MathF.Round(cost.ResultNumber);
    }

    public override int GetInfluenceCostOfProposingWar(Clan proposingClan)
    {
      ExplainedNumber cost = new ExplainedNumber(200f);
      if (proposingClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.WarTax) && proposingClan == proposingClan.Kingdom.RulingClan)
        cost.AddFactor(1f);
      this.GetPerkEffectsOnKingdomDecisionInfluenceCost(proposingClan, ref cost);
      return MathF.Round(cost.ResultNumber);
    }

    public override int GetInfluenceValueOfSupportingClan()
    {
      return this.GetInfluenceCostOfSupportingClan() / 4;
    }

    public override int GetRelationValueOfSupportingClan() => 1;

    public override int GetInfluenceCostOfAnnexation(Clan proposingClan)
    {
      ExplainedNumber cost = new ExplainedNumber(200f);
      if (proposingClan.Kingdom != null)
      {
        if (proposingClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.FeudalInheritance))
          cost.AddFactor(1f);
        if (proposingClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.PrecarialLandTenure) && proposingClan == proposingClan.Kingdom.RulingClan)
          cost.AddFactor(-0.5f);
      }
      this.GetPerkEffectsOnKingdomDecisionInfluenceCost(proposingClan, ref cost);
      return MathF.Round(cost.ResultNumber);
    }

    public override int GetInfluenceCostOfChangingLeaderOfArmy() => 30;

    public override int GetInfluenceCostOfDisbandingArmy()
    {
      int ofDisbandingArmy = 30;
      if (Clan.PlayerClan.Kingdom != null && Clan.PlayerClan == Clan.PlayerClan.Kingdom.RulingClan)
        ofDisbandingArmy /= 2;
      return ofDisbandingArmy;
    }

    public override int GetRelationCostOfDisbandingArmy(bool isLeaderParty)
    {
      return !isLeaderParty ? -1 : -4;
    }

    public override int GetInfluenceCostOfPolicyProposalAndDisavowal(Clan proposerClan)
    {
      ExplainedNumber cost = new ExplainedNumber(100f);
      this.GetPerkEffectsOnKingdomDecisionInfluenceCost(proposerClan, ref cost);
      return MathF.Round(cost.ResultNumber);
    }

    public override int GetInfluenceCostOfAbandoningArmy() => 2;

    private void GetPerkEffectsOnKingdomDecisionInfluenceCost(
      Clan proposingClan,
      ref ExplainedNumber cost)
    {
      if (!proposingClan.Leader.GetPerkValue(DefaultPerks.Charm.Firebrand))
        return;
      cost.AddFactor(DefaultPerks.Charm.Firebrand.PrimaryBonus, DefaultPerks.Charm.Firebrand.Name);
    }

    private int GetBaseRelationBetweenHeroes(Hero hero1, Hero hero2)
    {
      return CharacterRelationManager.GetHeroRelation(hero1, hero2);
    }

    public override int GetBaseRelation(Hero hero1, Hero hero2)
    {
      return this.GetBaseRelationBetweenHeroes(hero1, hero2);
    }

    public override int GetEffectiveRelation(Hero hero1, Hero hero2)
    {
      Hero effectiveHero1;
      Hero effectiveHero2;
      this.GetHeroesForEffectiveRelation(hero1, hero2, out effectiveHero1, out effectiveHero2);
      if (effectiveHero1 == null || effectiveHero2 == null)
        return 0;
      int relationBetweenHeroes = this.GetBaseRelationBetweenHeroes(effectiveHero1, effectiveHero2);
      this.GetPersonalityEffects(ref relationBetweenHeroes, hero1, effectiveHero2);
      return MBMath.ClampInt(relationBetweenHeroes, this.MinRelationLimit, this.MaxRelationLimit);
    }

    public override void GetHeroesForEffectiveRelation(
      Hero hero1,
      Hero hero2,
      out Hero effectiveHero1,
      out Hero effectiveHero2)
    {
      effectiveHero1 = hero1.Clan != null ? hero1.Clan.Leader : hero1;
      effectiveHero2 = hero2.Clan != null ? hero2.Clan.Leader : hero2;
      if (effectiveHero1 != effectiveHero2 && (!hero1.IsPlayerCompanion || !hero2.IsHumanPlayerCharacter) && (!hero1.IsPlayerCompanion || !hero2.IsHumanPlayerCharacter))
        return;
      effectiveHero1 = hero1;
      effectiveHero2 = hero2;
    }

    public override int GetRelationChangeAfterClanLeaderIsDead(Hero deadLeader, Hero relationHero)
    {
      return (int) ((double) CharacterRelationManager.GetHeroRelation(deadLeader, relationHero) * 0.699999988079071);
    }

    public override int GetRelationChangeAfterVotingInSettlementOwnerPreliminaryDecision(
      Hero supporter,
      bool hasHeroVotedAgainstOwner)
    {
      int preliminaryDecision;
      if (hasHeroVotedAgainstOwner)
      {
        preliminaryDecision = -20;
        if (supporter.Culture.HasFeat(DefaultCulturalFeats.SturgianDecisionPenaltyFeat))
          preliminaryDecision += (int) ((double) preliminaryDecision * (double) DefaultCulturalFeats.SturgianDecisionPenaltyFeat.EffectBonus);
      }
      else
        preliminaryDecision = 5;
      return preliminaryDecision;
    }

    private void GetPersonalityEffects(ref int effectiveRelation, Hero hero1, Hero effectiveHero2)
    {
      this.GetTraitEffect(ref effectiveRelation, hero1, effectiveHero2, DefaultTraits.Honor, 2);
      this.GetTraitEffect(ref effectiveRelation, hero1, effectiveHero2, DefaultTraits.Valor, 1);
      this.GetTraitEffect(ref effectiveRelation, hero1, effectiveHero2, DefaultTraits.Mercy, 1);
    }

    private void GetTraitEffect(
      ref int effectiveRelation,
      Hero hero1,
      Hero effectiveHero2,
      TraitObject trait,
      int effectMagnitude)
    {
      int num = hero1.GetTraitLevel(trait) * effectiveHero2.GetTraitLevel(trait);
      if (num > 0)
      {
        effectiveRelation += effectMagnitude;
      }
      else
      {
        if (num >= 0)
          return;
        effectiveRelation -= effectMagnitude;
      }
    }

    public override int GetCharmExperienceFromRelationGain(
      Hero hero,
      float relationChange,
      ChangeRelationAction.ChangeRelationDetail detail)
    {
      float num = 20f;
      if (detail != ChangeRelationAction.ChangeRelationDetail.Emissary)
      {
        if (!hero.IsNotable)
        {
          if (hero.MapFaction != null && hero.MapFaction.Leader == hero)
            num *= 30f;
          else if (hero.Clan != null && hero.Clan.Leader == hero)
            num *= 20f;
        }
      }
      else if (!hero.IsNotable)
      {
        if (hero.MapFaction != null && hero.MapFaction.Leader == hero)
          num *= 30f;
        else if (hero.Clan != null && hero.Clan.Leader == hero)
          num *= 20f;
        else
          num *= 10f;
      }
      else
        num *= 20f;
      return MathF.Round(num * relationChange);
    }

    public override uint GetNotificationColor(ChatNotificationType notificationType)
    {
      switch (notificationType)
      {
        case ChatNotificationType.Default:
          return 10066329;
        case ChatNotificationType.PlayerFactionPositive:
          return 2284902;
        case ChatNotificationType.PlayerClanPositive:
          return 3407803;
        case ChatNotificationType.PlayerFactionNegative:
          return 14509602;
        case ChatNotificationType.PlayerClanNegative:
          return 16750899;
        case ChatNotificationType.Civilian:
          return 10053324;
        case ChatNotificationType.PlayerClanCivilian:
          return 15623935;
        case ChatNotificationType.PlayerFactionCivilian:
          return 11163101;
        case ChatNotificationType.Neutral:
          return 12303291;
        case ChatNotificationType.PlayerFactionIndirectPositive:
          return 12298820;
        case ChatNotificationType.PlayerFactionIndirectNegative:
          return 13382502;
        case ChatNotificationType.PlayerClanPolitical:
          return 6745855;
        case ChatNotificationType.PlayerFactionPolitical:
          return 5614301;
        case ChatNotificationType.Political:
          return 6724044;
        default:
          return 13369548;
      }
    }

    public override float DenarsToInfluence() => 1f / 500f;

    public override bool CanSettlementBeGifted(Settlement settlementToGift)
    {
      return settlementToGift.Town != null && !settlementToGift.Town.IsOwnerUnassigned;
    }

    public override IEnumerable<BarterGroup> GetBarterGroups()
    {
      return (IEnumerable<BarterGroup>) new BarterGroup[6]
      {
        (BarterGroup) new GoldBarterGroup(),
        (BarterGroup) new ItemBarterGroup(),
        (BarterGroup) new PrisonerBarterGroup(),
        (BarterGroup) new FiefBarterGroup(),
        (BarterGroup) new OtherBarterGroup(),
        (BarterGroup) new DefaultsBarterGroup()
      };
    }

    public override int GetValueOfDailyTribute(int dailyTributeAmount) => dailyTributeAmount * 70;

    public override int GetDailyTributeForValue(int value) => value / 70 / 10 * 10;

    public override bool IsClanEligibleToBecomeRuler(Clan clan)
    {
      return !clan.IsEliminated && clan.Leader.IsAlive && !clan.IsUnderMercenaryService;
    }

    private struct WarStats
    {
      public Clan RulingClan;
      public float Strength;
      public float ValueOfSettlements;
      public float TotalStrengthOfEnemies;
    }
  }
}
