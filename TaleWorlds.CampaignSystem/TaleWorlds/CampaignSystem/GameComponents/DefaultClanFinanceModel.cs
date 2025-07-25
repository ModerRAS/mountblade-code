// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultClanFinanceModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultClanFinanceModel : ClanFinanceModel
  {
    private static readonly TextObject _townTaxStr = new TextObject("{=TLuaPAIO}{A0} Taxes");
    private static readonly TextObject _townTradeTaxStr = new TextObject("{=dfwCjiRx}Trade Tax from {A0}");
    private static readonly TextObject _partyIncomeStr = new TextObject("{=uuyso3mg}Income from Parties");
    private static readonly TextObject _financialHelpStr = new TextObject("{=E3BsEDav}Financial Help for Parties");
    private static readonly TextObject _scutageTaxStr = new TextObject("{=RuHaC2Ck}Scutage Tax");
    private static readonly TextObject _caravanIncomeStr = new TextObject("{=qyahMgD3}Caravan ({A0})");
    private static readonly TextObject _projectsIncomeStr = new TextObject("{=uixuohBp}Settlement Projects");
    private static readonly TextObject _partyExpensesStr = new TextObject("{=dZDFxUvU}{A0}");
    private static readonly TextObject _shopIncomeStr = new TextObject("{=0g7MZCAK}Workshop Income");
    private static readonly TextObject _shopExpenseStr = new TextObject("{=cSuNR48H}Workshop Expense");
    private static readonly TextObject _mercenaryStr = new TextObject("{=qcaaJLhx}Mercenary Contract");
    private static readonly TextObject _mercenaryExpensesStr = new TextObject("{=5aElrlUt}Payment to Mercenaries");
    private static readonly TextObject _tributeExpensesStr = new TextObject("{=AtFv5RMW}Tribute Payments");
    private static readonly TextObject _tributeIncomeStr = new TextObject("{=rhfgzKtA}Tribute from {A0}");
    private static readonly TextObject _tributeIncomes = new TextObject("{=tributeIncome}Tribute Income");
    private static readonly TextObject _settlementIncome = new TextObject("{=AewK9qME}Settlement Income");
    private static readonly TextObject _mainPartywageStr = new TextObject("{=YkZKXsIn}Main party wages");
    private static readonly TextObject _caravanAndPartyIncome = new TextObject("{=8iLzK3Y4}Caravan and Party Income");
    private static readonly TextObject _garrisonAndPartyExpenses = new TextObject("{=ChUDSiJw}Garrison and Party Expense");
    private static readonly TextObject _debtStr = new TextObject("{=U3LdMEXb}Debts");
    private static readonly TextObject _kingdomSupport = new TextObject("{=essaRvXP}King's support");
    private static readonly TextObject _supportKing = new TextObject("{=WrJSUsBe}Support to king");
    private static readonly TextObject _workshopExpenseStr = new TextObject("{=oNgwQTTV}Workshop Expense");
    private static readonly TextObject _kingdomBudgetStr = new TextObject("{=7uzvI8e8}Kingdom Budget Expense");
    private static readonly TextObject _tariffTaxStr = new TextObject("{=wVMPdc8J}{A0}'s tariff");
    private static readonly TextObject _autoRecruitmentStr = new TextObject("{=6gvDrbe7}Recruitment Expense");
    private static readonly TextObject _alley = new TextObject("{=UQc6zg1Q}Owned Alleys");
    private const int PartyGoldIncomeThreshold = 10000;
    private const int payGarrisonWagesTreshold = 8000;
    private const int payClanPartiesTreshold = 4000;
    private const int payLeaderPartyWageTreshold = 2000;

    public override int PartyGoldLowerThreshold => 5000;

    public override ExplainedNumber CalculateClanGoldChange(
      Clan clan,
      bool includeDescriptions = false,
      bool applyWithdrawals = false,
      bool includeDetails = false)
    {
      ExplainedNumber goldChange = new ExplainedNumber(includeDescriptions: includeDescriptions);
      this.CalculateClanIncomeInternal(clan, ref goldChange, applyWithdrawals, includeDetails);
      this.CalculateClanExpensesInternal(clan, ref goldChange, applyWithdrawals, includeDetails);
      return goldChange;
    }

    public override ExplainedNumber CalculateClanIncome(
      Clan clan,
      bool includeDescriptions = false,
      bool applyWithdrawals = false,
      bool includeDetails = false)
    {
      ExplainedNumber goldChange = new ExplainedNumber(includeDescriptions: includeDescriptions);
      this.CalculateClanIncomeInternal(clan, ref goldChange, applyWithdrawals, includeDetails);
      return goldChange;
    }

    private void CalculateClanIncomeInternal(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals = false,
      bool includeDetails = false)
    {
      if (clan.IsEliminated)
        return;
      if (clan.Kingdom?.RulingClan == clan)
        this.AddRulingClanIncome(clan, ref goldChange, applyWithdrawals, includeDetails);
      if (clan != Clan.PlayerClan && (!clan.MapFaction.IsKingdomFaction || clan.IsUnderMercenaryService) && clan.Fiefs.Count == 0)
      {
        int num = clan.Tier * (80 + (clan.IsUnderMercenaryService ? 40 : 0));
        goldChange.Add((float) num);
      }
      this.AddMercenaryIncome(clan, ref goldChange, applyWithdrawals);
      this.AddSettlementIncome(clan, ref goldChange, applyWithdrawals, includeDetails);
      this.CalculateHeroIncomeFromWorkshops(clan.Leader, ref goldChange, applyWithdrawals);
      this.AddIncomeFromParties(clan, ref goldChange, applyWithdrawals, includeDetails);
      if (clan == Clan.PlayerClan)
        this.AddPlayerClanIncomeFromOwnedAlleys(ref goldChange);
      if (!clan.IsUnderMercenaryService)
        this.AddIncomeFromTribute(clan, ref goldChange, applyWithdrawals, includeDetails);
      if (clan.Gold < 30000 && clan.Kingdom != null && clan.Leader != Hero.MainHero && !clan.IsUnderMercenaryService)
        this.AddIncomeFromKingdomBudget(clan, ref goldChange, applyWithdrawals);
      Hero leader = clan.Leader;
      if ((leader != null ? (leader.GetPerkValue(DefaultPerks.Trade.SpringOfGold) ? 1 : 0) : 0) == 0)
        return;
      int num1 = MathF.Min(1000, MathF.Round((float) clan.Leader.Gold * DefaultPerks.Trade.SpringOfGold.PrimaryBonus));
      goldChange.Add((float) num1, DefaultPerks.Trade.SpringOfGold.Name);
    }

    public void CalculateClanExpensesInternal(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals = false,
      bool includeDetails = false)
    {
      this.AddExpensesFromPartiesAndGarrisons(clan, ref goldChange, applyWithdrawals, includeDetails);
      if (!clan.IsUnderMercenaryService)
      {
        this.AddExpensesForHiredMercenaries(clan, ref goldChange, applyWithdrawals);
        this.AddExpensesForTributes(clan, ref goldChange, applyWithdrawals);
      }
      this.AddExpensesForAutoRecruitment(clan, ref goldChange, applyWithdrawals);
      if (clan.Gold > 100000 && clan.Kingdom != null && clan.Leader != Hero.MainHero && !clan.IsUnderMercenaryService)
      {
        int num = (int) (((double) clan.Gold - 100000.0) * 0.0099999997764825821);
        if (applyWithdrawals)
          clan.Kingdom.KingdomBudgetWallet += num;
        goldChange.Add((float) -num, DefaultClanFinanceModel._kingdomBudgetStr);
      }
      if (clan.DebtToKingdom > 0)
        this.AddPaymentForDebts(clan, ref goldChange, applyWithdrawals);
      if (Clan.PlayerClan != clan)
        return;
      this.AddPlayerExpenseForWorkshops(ref goldChange);
    }

    private void AddPlayerExpenseForWorkshops(ref ExplainedNumber goldChange)
    {
      int num = 0;
      foreach (Workshop ownedWorkshop in (List<Workshop>) Hero.MainHero.OwnedWorkshops)
      {
        if (ownedWorkshop.Capital < Campaign.Current.Models.WorkshopModel.CapitalLowLimit)
          num -= ownedWorkshop.Expense;
      }
      goldChange.Add((float) num, DefaultClanFinanceModel._shopExpenseStr);
    }

    public override ExplainedNumber CalculateClanExpenses(
      Clan clan,
      bool includeDescriptions = false,
      bool applyWithdrawals = false,
      bool includeDetails = false)
    {
      ExplainedNumber goldChange = new ExplainedNumber(includeDescriptions: includeDescriptions);
      this.CalculateClanExpensesInternal(clan, ref goldChange, applyWithdrawals, includeDetails);
      return goldChange;
    }

    private void AddPaymentForDebts(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals)
    {
      if (clan.Kingdom == null || clan.DebtToKingdom <= 0)
        return;
      int a = clan.DebtToKingdom;
      if (applyWithdrawals)
      {
        a = MathF.Min(a, (int) ((double) clan.Gold + (double) goldChange.ResultNumber));
        clan.DebtToKingdom -= a;
      }
      goldChange.Add((float) -a, DefaultClanFinanceModel._debtStr);
    }

    private void AddRulingClanIncome(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals,
      bool includeDetails)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(includeDescriptions: goldChange.IncludeDescriptions);
      int num1 = 0;
      int num2 = 0;
      bool flag = clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.LandTax);
      float num3 = 0.0f;
      foreach (Town fief in (List<Town>) clan.Fiefs)
      {
        num1 += (int) Campaign.Current.Models.SettlementTaxModel.CalculateTownTax(fief).ResultNumber;
        ++num2;
      }
      if (flag)
      {
        foreach (Village village in (List<Village>) clan.Kingdom.Villages)
        {
          if (!village.IsOwnerUnassigned && village.Settlement.OwnerClan != clan && village.VillageState != Village.VillageStates.Looted && village.VillageState != Village.VillageStates.BeingRaided)
          {
            int num4 = (int) ((double) village.TradeTaxAccumulated / (double) this.RevenueSmoothenFraction());
            num3 += (float) num4 * 0.05f;
          }
        }
        if ((double) num3 > 9.9999997473787516E-06)
          explainedNumber.Add(num3, DefaultPolicies.LandTax.Name);
      }
      Kingdom kingdom = clan.Kingdom;
      if (kingdom.RulingClan == clan)
      {
        if (kingdom.ActivePolicies.Contains(DefaultPolicies.WarTax))
        {
          int num5 = (int) ((double) num1 * 0.05000000074505806);
          explainedNumber.Add((float) num5, DefaultPolicies.WarTax.Name);
        }
        if (kingdom.ActivePolicies.Contains(DefaultPolicies.DebasementOfTheCurrency))
          explainedNumber.Add((float) (num2 * 100), DefaultPolicies.DebasementOfTheCurrency.Name);
      }
      int num6 = 0;
      int num7 = 0;
      foreach (Settlement settlement in (List<Settlement>) clan.Settlements)
      {
        if (settlement.IsTown)
        {
          if (kingdom.ActivePolicies.Contains(DefaultPolicies.RoadTolls))
          {
            int num8 = settlement.Town.TradeTaxAccumulated / 30;
            if (applyWithdrawals)
              settlement.Town.TradeTaxAccumulated -= num8;
            num6 += num8;
          }
          if (kingdom.ActivePolicies.Contains(DefaultPolicies.StateMonopolies))
            num7 += (int) ((double) ((IEnumerable<Workshop>) settlement.Town.Workshops).Sum<Workshop>((Func<Workshop, int>) (t => t.ProfitMade)) * 0.05000000074505806);
          if (num6 > 0)
            explainedNumber.Add((float) num6, DefaultPolicies.RoadTolls.Name);
          if (num7 > 0)
            explainedNumber.Add((float) num7, DefaultPolicies.StateMonopolies.Name);
        }
      }
      if (explainedNumber.ResultNumber.ApproximatelyEqualsTo(0.0f))
        return;
      if (!includeDetails)
        goldChange.Add(explainedNumber.ResultNumber, GameTexts.FindText("str_policies"));
      else
        goldChange.AddFromExplainedNumber(explainedNumber, GameTexts.FindText("str_policies"));
    }

    private void AddExpensesForHiredMercenaries(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals)
    {
      Kingdom kingdom = clan.Kingdom;
      if (kingdom == null)
        return;
      float shareFactor = DefaultClanFinanceModel.CalculateShareFactor(clan);
      if (kingdom.MercenaryWallet >= 0)
        return;
      int expenseShare = (int) ((double) -kingdom.MercenaryWallet * (double) shareFactor);
      DefaultClanFinanceModel.ApplyShareForExpenses(clan, ref goldChange, applyWithdrawals, expenseShare, DefaultClanFinanceModel._mercenaryExpensesStr);
      if (!applyWithdrawals)
        return;
      kingdom.MercenaryWallet += expenseShare;
    }

    private void AddExpensesForTributes(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals)
    {
      Kingdom kingdom = clan.Kingdom;
      if (kingdom == null)
        return;
      float shareFactor = DefaultClanFinanceModel.CalculateShareFactor(clan);
      if (kingdom.TributeWallet >= 0)
        return;
      int num = (int) ((double) -kingdom.TributeWallet * (double) shareFactor);
      DefaultClanFinanceModel.ApplyShareForExpenses(clan, ref goldChange, applyWithdrawals, num, DefaultClanFinanceModel._tributeExpensesStr);
      if (!applyWithdrawals)
        return;
      kingdom.TributeWallet += num;
      if (clan != Clan.PlayerClan)
        return;
      CampaignEventDispatcher.Instance.OnPlayerEarnedGoldFromAsset(DefaultClanFinanceModel.AssetIncomeType.TributesPaid, num);
    }

    private static void ApplyShareForExpenses(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals,
      int expenseShare,
      TextObject mercenaryExpensesStr)
    {
      if (applyWithdrawals)
      {
        int num1 = (int) ((double) clan.Gold + (double) goldChange.ResultNumber);
        if (expenseShare > num1)
        {
          int num2 = expenseShare - num1;
          expenseShare = num1;
          clan.DebtToKingdom += num2;
        }
      }
      goldChange.Add((float) -expenseShare, mercenaryExpensesStr);
    }

    private void AddSettlementIncome(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals,
      bool includeDetails)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(includeDescriptions: goldChange.IncludeDescriptions);
      foreach (Town fief in (List<Town>) clan.Fiefs)
      {
        ExplainedNumber townTax = Campaign.Current.Models.SettlementTaxModel.CalculateTownTax(fief);
        ExplainedNumber incomeFromTariffs = this.CalculateTownIncomeFromTariffs(clan, fief, applyWithdrawals);
        int incomeFromProjects = this.CalculateTownIncomeFromProjects(fief);
        explainedNumber.Add((float) (int) townTax.ResultNumber, DefaultClanFinanceModel._townTaxStr, fief.Name);
        explainedNumber.Add((float) (int) incomeFromTariffs.ResultNumber, DefaultClanFinanceModel._tariffTaxStr, fief.Name);
        explainedNumber.Add((float) incomeFromProjects, DefaultClanFinanceModel._projectsIncomeStr);
        foreach (Village village in (List<Village>) fief.Villages)
        {
          int villageIncome = this.CalculateVillageIncome(clan, village, applyWithdrawals);
          explainedNumber.Add((float) villageIncome, village.Name);
        }
      }
      if (!includeDetails)
        goldChange.Add(explainedNumber.ResultNumber, DefaultClanFinanceModel._settlementIncome);
      else
        goldChange.AddFromExplainedNumber(explainedNumber, DefaultClanFinanceModel._settlementIncome);
    }

    public override ExplainedNumber CalculateTownIncomeFromTariffs(
      Clan clan,
      Town town,
      bool applyWithdrawals = false)
    {
      ExplainedNumber bonuses = new ExplainedNumber((float) (int) ((double) town.TradeTaxAccumulated / (double) this.RevenueSmoothenFraction()));
      int num = MathF.Round(bonuses.ResultNumber);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Trade.ContentTrades, town, ref bonuses);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Crossbow.Steady, town, ref bonuses);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Roguery.SaltTheEarth, town, ref bonuses);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Steward.GivingHands, town, ref bonuses);
      if (applyWithdrawals)
      {
        town.TradeTaxAccumulated -= num;
        if (clan == Clan.PlayerClan)
          CampaignEventDispatcher.Instance.OnPlayerEarnedGoldFromAsset(DefaultClanFinanceModel.AssetIncomeType.Taxes, (int) bonuses.ResultNumber);
      }
      return bonuses;
    }

    public override int CalculateTownIncomeFromProjects(Town town)
    {
      return town.CurrentDefaultBuilding != null && town.Governor != null && town.Governor.GetPerkValue(DefaultPerks.Engineering.ArchitecturalCommisions) ? (int) DefaultPerks.Engineering.ArchitecturalCommisions.SecondaryBonus : 0;
    }

    public override int CalculateVillageIncome(Clan clan, Village village, bool applyWithdrawals = false)
    {
      int incomeAmount = village.VillageState == Village.VillageStates.Looted || village.VillageState == Village.VillageStates.BeingRaided ? 0 : (int) ((double) village.TradeTaxAccumulated / (double) this.RevenueSmoothenFraction());
      int num = incomeAmount;
      if (clan.Kingdom != null && clan.Kingdom.RulingClan != clan && clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.LandTax))
        incomeAmount -= (int) (0.05000000074505806 * (double) incomeAmount);
      if (village.Bound.Town != null && village.Bound.Town.Governor != null && village.Bound.Town.Governor.GetPerkValue(DefaultPerks.Scouting.ForestKin))
        incomeAmount += MathF.Round((float) incomeAmount * DefaultPerks.Scouting.ForestKin.SecondaryBonus);
      if (village.Bound?.Town?.Governor != null && village.Bound.Town.Governor.GetPerkValue(DefaultPerks.Steward.Logistician))
        incomeAmount += MathF.Round((float) incomeAmount * DefaultPerks.Steward.Logistician.SecondaryBonus);
      if (applyWithdrawals)
      {
        village.TradeTaxAccumulated -= num;
        if (clan == Clan.PlayerClan)
          CampaignEventDispatcher.Instance.OnPlayerEarnedGoldFromAsset(DefaultClanFinanceModel.AssetIncomeType.Taxes, incomeAmount);
      }
      return incomeAmount;
    }

    private static float CalculateShareFactor(Clan clan)
    {
      Kingdom kingdom = clan.Kingdom;
      int num = kingdom.Fiefs.Sum<Town>((Func<Town, int>) (x => !x.IsCastle ? 3 : 1)) + 1 + kingdom.Clans.Count;
      return (float) (clan.Fiefs.Sum<Town>((Func<Town, int>) (x => !x.IsCastle ? 3 : 1)) + (clan == kingdom.RulingClan ? 1 : 0) + 1) / (float) num;
    }

    private void AddMercenaryIncome(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals)
    {
      if (!clan.IsUnderMercenaryService || clan.Leader == null || clan.Kingdom == null)
        return;
      int num = MathF.Ceiling(clan.Influence * (1f / Campaign.Current.Models.ClanFinanceModel.RevenueSmoothenFraction())) * clan.MercenaryAwardMultiplier;
      if (applyWithdrawals)
        clan.Kingdom.MercenaryWallet -= num;
      goldChange.Add((float) num, DefaultClanFinanceModel._mercenaryStr);
    }

    private void AddIncomeFromKingdomBudget(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals)
    {
      int b = (clan.Gold < 5000 ? 2000 : (clan.Gold < 10000 ? 1500 : (clan.Gold < 20000 ? 1000 : 500))) * (clan.Kingdom.KingdomBudgetWallet > 1000000 ? 2 : 1) * (clan.Leader == clan.Kingdom.Leader ? 2 : 1);
      int num = MathF.Min(clan.Kingdom.KingdomBudgetWallet, b);
      if (applyWithdrawals)
        clan.Kingdom.KingdomBudgetWallet -= num;
      goldChange.Add((float) num, DefaultClanFinanceModel._kingdomSupport);
    }

    private void AddPlayerClanIncomeFromOwnedAlleys(ref ExplainedNumber goldChange)
    {
      int num = 0;
      foreach (Alley ownedAlley in Hero.MainHero.OwnedAlleys)
        num += Campaign.Current.Models.AlleyModel.GetDailyIncomeOfAlley(ownedAlley);
      goldChange.Add((float) num, DefaultClanFinanceModel._alley);
    }

    private void AddIncomeFromTribute(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals,
      bool includeDetails)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(includeDescriptions: goldChange.IncludeDescriptions);
      IFaction mapFaction = clan.MapFaction;
      float num = 1f;
      if (clan.Kingdom != null)
        num = DefaultClanFinanceModel.CalculateShareFactor(clan);
      foreach (StanceLink stance in mapFaction.Stances)
      {
        if (stance.IsNeutral && stance.GetDailyTributePaid(mapFaction) < 0)
        {
          int incomeAmount = (int) ((double) stance.GetDailyTributePaid(mapFaction) * (double) num);
          IFaction faction = stance.Faction1 == mapFaction ? stance.Faction2 : stance.Faction1;
          if (applyWithdrawals)
          {
            faction.TributeWallet += incomeAmount;
            if (stance.Faction1 == mapFaction)
              stance.TotalTributePaidby2 += -incomeAmount;
            if (stance.Faction2 == mapFaction)
              stance.TotalTributePaidby1 += -incomeAmount;
            if (clan == Clan.PlayerClan)
              CampaignEventDispatcher.Instance.OnPlayerEarnedGoldFromAsset(DefaultClanFinanceModel.AssetIncomeType.TributesEarned, incomeAmount);
          }
          explainedNumber.Add((float) -incomeAmount, DefaultClanFinanceModel._tributeIncomeStr, faction.InformalName);
        }
      }
      if (!includeDetails)
        goldChange.Add(explainedNumber.ResultNumber, DefaultClanFinanceModel._tributeIncomes);
      else
        goldChange.AddFromExplainedNumber(explainedNumber, DefaultClanFinanceModel._tributeIncomes);
    }

    private void AddIncomeFromParties(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals,
      bool includeDetails)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(includeDescriptions: goldChange.IncludeDescriptions);
      foreach (Hero lord in (List<Hero>) clan.Lords)
      {
        foreach (CaravanPartyComponent ownedCaravan in lord.OwnedCaravans)
        {
          if (ownedCaravan.MobileParty.IsActive && ownedCaravan.MobileParty.LeaderHero != clan.Leader && (ownedCaravan.MobileParty.IsLordParty || ownedCaravan.MobileParty.IsGarrison || ownedCaravan.MobileParty.IsCaravan))
          {
            int num = this.AddIncomeFromParty(ownedCaravan.MobileParty, clan, ref goldChange, applyWithdrawals);
            explainedNumber.Add((float) num, DefaultClanFinanceModel._caravanIncomeStr, ownedCaravan.Leader != null ? ownedCaravan.Leader.Name : ownedCaravan.Name);
          }
        }
      }
      foreach (Hero companion in (List<Hero>) clan.Companions)
      {
        foreach (CaravanPartyComponent ownedCaravan in companion.OwnedCaravans)
        {
          if (ownedCaravan.MobileParty.IsActive && ownedCaravan.MobileParty.LeaderHero != clan.Leader && (ownedCaravan.MobileParty.IsLordParty || ownedCaravan.MobileParty.IsGarrison || ownedCaravan.MobileParty.IsCaravan))
          {
            int num = this.AddIncomeFromParty(ownedCaravan.MobileParty, clan, ref goldChange, applyWithdrawals);
            explainedNumber.Add((float) num, DefaultClanFinanceModel._caravanIncomeStr, ownedCaravan.Leader != null ? ownedCaravan.Leader.Name : ownedCaravan.Name);
          }
        }
      }
      foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
      {
        if (warPartyComponent.MobileParty.IsActive && warPartyComponent.MobileParty.LeaderHero != clan.Leader && (warPartyComponent.MobileParty.IsLordParty || warPartyComponent.MobileParty.IsGarrison || warPartyComponent.MobileParty.IsCaravan))
        {
          int num = this.AddIncomeFromParty(warPartyComponent.MobileParty, clan, ref goldChange, applyWithdrawals);
          explainedNumber.Add((float) num, DefaultClanFinanceModel._partyIncomeStr, warPartyComponent.MobileParty.Name);
        }
      }
      if (!includeDetails)
        goldChange.Add(explainedNumber.ResultNumber, DefaultClanFinanceModel._caravanAndPartyIncome);
      else
        goldChange.AddFromExplainedNumber(explainedNumber, DefaultClanFinanceModel._caravanAndPartyIncome);
    }

    private int AddIncomeFromParty(
      MobileParty party,
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals)
    {
      int num1 = 0;
      if (party.IsActive && party.LeaderHero != clan.Leader && (party.IsLordParty || party.IsGarrison || party.IsCaravan))
      {
        int num2 = !party.IsLordParty || party.LeaderHero == null ? party.PartyTradeGold : party.LeaderHero.Gold;
        if (num2 > 10000)
        {
          num1 = (num2 - 10000) / 10;
          if (applyWithdrawals)
          {
            this.RemovePartyGold(party, num1);
            if (party.LeaderHero != null && num1 > 0)
              SkillLevelingManager.OnTradeProfitMade(party.LeaderHero, num1);
            if (party.Party.Owner?.Clan?.Leader != null && party.IsCaravan && party.Party.Owner.Clan.Leader.GetPerkValue(DefaultPerks.Trade.GreatInvestor) && num1 > 0)
              party.Party.Owner.Clan.AddRenown(DefaultPerks.Trade.GreatInvestor.PrimaryBonus);
            if (clan == Clan.PlayerClan && party.IsCaravan)
              CampaignEventDispatcher.Instance.OnPlayerEarnedGoldFromAsset(DefaultClanFinanceModel.AssetIncomeType.Caravan, num1);
          }
        }
      }
      return num1;
    }

    private void AddExpensesFromPartiesAndGarrisons(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals,
      bool includeDetails)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(includeDescriptions: goldChange.IncludeDescriptions);
      int num1 = this.AddExpenseFromLeaderParty(clan, goldChange, applyWithdrawals);
      explainedNumber.Add((float) num1, DefaultClanFinanceModel._mainPartywageStr);
      foreach (Hero lord in (List<Hero>) clan.Lords)
      {
        foreach (CaravanPartyComponent ownedCaravan in lord.OwnedCaravans)
        {
          if (ownedCaravan.MobileParty.IsActive && ownedCaravan.MobileParty.LeaderHero != clan.Leader)
          {
            int num2 = this.AddPartyExpense(ownedCaravan.MobileParty, clan, goldChange, applyWithdrawals);
            explainedNumber.Add((float) num2, DefaultClanFinanceModel._partyExpensesStr, ownedCaravan.Name);
          }
        }
      }
      foreach (Hero companion in (List<Hero>) clan.Companions)
      {
        foreach (CaravanPartyComponent ownedCaravan in companion.OwnedCaravans)
        {
          int num3 = this.AddPartyExpense(ownedCaravan.MobileParty, clan, goldChange, applyWithdrawals);
          explainedNumber.Add((float) num3, DefaultClanFinanceModel._partyExpensesStr, ownedCaravan.Name);
        }
      }
      foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
      {
        if (warPartyComponent.MobileParty.IsActive && warPartyComponent.MobileParty.LeaderHero != clan.Leader)
        {
          int num4 = this.AddPartyExpense(warPartyComponent.MobileParty, clan, goldChange, applyWithdrawals);
          explainedNumber.Add((float) num4, DefaultClanFinanceModel._partyExpensesStr, warPartyComponent.Name);
        }
      }
      foreach (Town fief in (List<Town>) clan.Fiefs)
      {
        if (fief.GarrisonParty != null && fief.GarrisonParty.IsActive)
        {
          int num5 = this.AddPartyExpense(fief.GarrisonParty, clan, goldChange, applyWithdrawals);
          TextObject variable = new TextObject("{=fsTBcLvA}{SETTLEMENT} Garrison");
          variable.SetTextVariable("SETTLEMENT", fief.Name);
          explainedNumber.Add((float) num5, DefaultClanFinanceModel._partyExpensesStr, variable);
        }
      }
      if (!includeDetails)
        goldChange.Add(explainedNumber.ResultNumber, DefaultClanFinanceModel._garrisonAndPartyExpenses);
      else
        goldChange.AddFromExplainedNumber(explainedNumber, DefaultClanFinanceModel._garrisonAndPartyExpenses);
    }

    private void AddExpensesForAutoRecruitment(
      Clan clan,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals = false)
    {
      int num = clan.AutoRecruitmentExpenses / 5;
      if (applyWithdrawals)
        clan.AutoRecruitmentExpenses -= num;
      goldChange.Add((float) -num, DefaultClanFinanceModel._autoRecruitmentStr);
    }

    private int AddExpenseFromLeaderParty(
      Clan clan,
      ExplainedNumber goldChange,
      bool applyWithdrawals)
    {
      MobileParty partyBelongedTo = clan.Leader?.PartyBelongedTo;
      if (partyBelongedTo == null)
        return 0;
      int budget = clan.Gold + (int) goldChange.ResultNumber;
      if (budget < 2000 & applyWithdrawals && clan != Clan.PlayerClan)
        budget = 0;
      return -this.CalculatePartyWage(partyBelongedTo, budget, applyWithdrawals);
    }

    private int AddPartyExpense(
      MobileParty party,
      Clan clan,
      ExplainedNumber goldChange,
      bool applyWithdrawals)
    {
      int a1 = clan.Gold + (int) goldChange.ResultNumber;
      int num1 = a1;
      if (a1 < (party.IsGarrison ? 8000 : 4000) & applyWithdrawals && clan != Clan.PlayerClan)
        num1 = party.LeaderHero == null || party.LeaderHero.Gold >= 500 ? 0 : MathF.Min(a1, 250);
      int partyWage = this.CalculatePartyWage(party, num1, applyWithdrawals);
      int num2 = !party.IsLordParty || party.LeaderHero == null ? party.PartyTradeGold : party.LeaderHero.Gold;
      if (applyWithdrawals)
      {
        if (party.IsLordParty)
        {
          if (party.LeaderHero != null)
            party.LeaderHero.Gold -= partyWage;
          else
            party.ActualClan.Leader.Gold -= partyWage;
        }
        else
          party.PartyTradeGold -= partyWage;
      }
      int num3 = num2 - partyWage;
      if (num3 >= this.PartyGoldLowerThreshold)
        return 0;
      int a2 = this.PartyGoldLowerThreshold - num3;
      if (applyWithdrawals)
      {
        a2 = MathF.Min(a2, num1);
        if (party.IsLordParty && party.LeaderHero != null)
          party.LeaderHero.Gold += a2;
        else
          party.PartyTradeGold += a2;
      }
      return -a2;
    }

    public override int CalculateOwnerIncomeFromCaravan(MobileParty caravan)
    {
      return (int) ((double) MathF.Max(0, caravan.PartyTradeGold - 10000) / (double) this.RevenueSmoothenFraction());
    }

    private void RemovePartyGold(MobileParty party, int share)
    {
      if (party.IsLordParty && party.LeaderHero != null)
        party.LeaderHero.Gold -= share;
      else
        party.PartyTradeGold -= share;
    }

    public override int CalculateOwnerIncomeFromWorkshop(Workshop workshop)
    {
      return (int) ((double) MathF.Max(0, workshop.ProfitMade) / (double) this.RevenueSmoothenFraction());
    }

    private void CalculateHeroIncomeFromAssets(
      Hero hero,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals)
    {
      int num = 0;
      foreach (CaravanPartyComponent ownedCaravan in hero.OwnedCaravans)
      {
        if (ownedCaravan.MobileParty.PartyTradeGold > 10000)
        {
          int incomeFromCaravan = Campaign.Current.Models.ClanFinanceModel.CalculateOwnerIncomeFromCaravan(ownedCaravan.MobileParty);
          if (applyWithdrawals)
          {
            ownedCaravan.MobileParty.PartyTradeGold -= incomeFromCaravan;
            SkillLevelingManager.OnTradeProfitMade(hero, incomeFromCaravan);
          }
          if (incomeFromCaravan > 0)
            num += incomeFromCaravan;
        }
      }
      goldChange.Add((float) num, DefaultClanFinanceModel._caravanIncomeStr);
      this.CalculateHeroIncomeFromWorkshops(hero, ref goldChange, applyWithdrawals);
      if (hero.CurrentSettlement == null)
        return;
      foreach (Alley alley in hero.CurrentSettlement.Alleys)
      {
        if (alley.Owner == hero)
          goldChange.Add(30f, alley.Name);
      }
    }

    private void CalculateHeroIncomeFromWorkshops(
      Hero hero,
      ref ExplainedNumber goldChange,
      bool applyWithdrawals)
    {
      int num1 = 0;
      int num2 = 0;
      foreach (Workshop ownedWorkshop in (List<Workshop>) hero.OwnedWorkshops)
      {
        int incomeFromWorkshop = Campaign.Current.Models.ClanFinanceModel.CalculateOwnerIncomeFromWorkshop(ownedWorkshop);
        num1 += incomeFromWorkshop;
        if (applyWithdrawals && incomeFromWorkshop > 0)
        {
          ownedWorkshop.ChangeGold(-incomeFromWorkshop);
          if (hero == Hero.MainHero)
            CampaignEventDispatcher.Instance.OnPlayerEarnedGoldFromAsset(DefaultClanFinanceModel.AssetIncomeType.Workshop, incomeFromWorkshop);
        }
        if (incomeFromWorkshop > 0)
          ++num2;
      }
      goldChange.Add((float) num1, DefaultClanFinanceModel._shopIncomeStr);
      int num3;
      if (hero.Clan != null)
      {
        Hero leader = hero.Clan.Leader;
        num3 = leader != null ? (leader.GetPerkValue(DefaultPerks.Trade.ArtisanCommunity) ? 1 : 0) : 0;
      }
      else
        num3 = 0;
      int num4 = applyWithdrawals ? 1 : 0;
      if ((num3 & num4) == 0 || num2 <= 0)
        return;
      hero.Clan.AddRenown((float) num2 * DefaultPerks.Trade.ArtisanCommunity.PrimaryBonus);
    }

    public override float RevenueSmoothenFraction() => 5f;

    private int CalculatePartyWage(MobileParty mobileParty, int budget, bool applyWithdrawals)
    {
      int totalWage = mobileParty.TotalWage;
      int paymentAmount = totalWage;
      if (applyWithdrawals)
      {
        paymentAmount = MathF.Min(totalWage, budget);
        DefaultClanFinanceModel.ApplyMoraleEffect(mobileParty, totalWage, paymentAmount);
      }
      return paymentAmount;
    }

    public override int CalculateNotableDailyGoldChange(Hero hero, bool applyWithdrawals)
    {
      ExplainedNumber goldChange = new ExplainedNumber();
      this.CalculateHeroIncomeFromAssets(hero, ref goldChange, applyWithdrawals);
      return (int) goldChange.ResultNumber;
    }

    private static void ApplyMoraleEffect(MobileParty mobileParty, int wage, int paymentAmount)
    {
      if (paymentAmount < wage && wage > 0)
      {
        float num = (float) (1.0 - (double) paymentAmount / (double) wage);
        float f = (float) Campaign.Current.Models.PartyMoraleModel.GetDailyNoWageMoralePenalty(mobileParty) * num;
        if ((double) mobileParty.HasUnpaidWages < (double) num)
          f += (float) Campaign.Current.Models.PartyMoraleModel.GetDailyNoWageMoralePenalty(mobileParty) * (num - mobileParty.HasUnpaidWages);
        mobileParty.RecentEventsMorale += f;
        mobileParty.HasUnpaidWages = num;
        MBTextManager.SetTextVariable("reg1", MathF.Round(MathF.Abs(f), 1));
        if (mobileParty != MobileParty.MainParty)
          return;
        MBInformationManager.AddQuickInformation(GameTexts.FindText("str_party_loses_moral_due_to_insufficent_funds"));
      }
      else
        mobileParty.HasUnpaidWages = 0.0f;
    }

    private enum TransactionType
    {
      Expense = -1, // 0xFFFFFFFF
      Both = 0,
      Income = 1,
    }

    public enum AssetIncomeType
    {
      Workshop,
      Caravan,
      Taxes,
      TributesEarned,
      TributesPaid,
    }
  }
}
