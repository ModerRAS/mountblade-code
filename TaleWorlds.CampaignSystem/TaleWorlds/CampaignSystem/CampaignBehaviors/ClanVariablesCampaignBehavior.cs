// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.ClanVariablesCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class ClanVariablesCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickClanEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.DailyTickClan));
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.DailyTickHero));
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      if (settlement.IsHideout)
        return;
      newOwner.Clan.UpdateHomeSettlement(settlement);
      foreach (Hero hero in (List<Hero>) newOwner.Clan.Heroes)
        hero.UpdateHomeSettlement();
      oldOwner.Clan.UpdateHomeSettlement(settlement);
      foreach (Hero hero in (List<Hero>) oldOwner.Clan.Heroes)
        hero.UpdateHomeSettlement();
      if (!settlement.IsFortification)
        return;
      settlement.SetGarrisonWagePaymentLimit(Campaign.Current.Models.PartyWageModel.MaxWage);
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      clan.UpdateHomeSettlement((Settlement) null);
    }

    private void UpdateGovernorsOfClan(Clan clan)
    {
      List<Tuple<Town, float>> tupleList = new List<Tuple<Town, float>>();
      foreach (Town fief in (List<Town>) clan.Fiefs)
      {
        float num = ((float) (0.0 + (fief.IsTown ? 3.0 : 1.0)) + MathF.Sqrt(fief.Prosperity / 1000f) + (float) fief.Settlement.BoundVillages.Count) * (clan.Culture == fief.Settlement.Culture ? 1f : 0.5f) * (1f - MathF.Sqrt((clan.Leader.MapFaction.IsKingdomFaction ? Campaign.Current.Models.MapDistanceModel.GetDistance(fief.Settlement, clan.Leader.MapFaction.FactionMidSettlement) : 100f) / Campaign.MaximumDistanceBetweenTwoSettlements));
        tupleList.Add(new Tuple<Town, float>(fief, num));
      }
      List<Hero> heroList = new List<Hero>();
      for (int index = 0; index < clan.Fiefs.Count; ++index)
      {
        Tuple<Town, float> tuple1 = (Tuple<Town, float>) null;
        float num1 = 0.0f;
        foreach (Tuple<Town, float> tuple2 in tupleList)
        {
          if ((double) tuple2.Item2 > (double) num1)
          {
            num1 = tuple2.Item2;
            tuple1 = tuple2;
          }
        }
        if ((double) num1 > 0.0099999997764825821)
        {
          tupleList.Remove(tuple1);
          float num2 = 0.0f;
          Hero governor = (Hero) null;
          foreach (Hero lord in (List<Hero>) clan.Lords)
          {
            if ((!Campaign.Current.Models.ClanPoliticsModel.CanHeroBeGovernor(lord) || lord.PartyBelongedTo != null || lord.Clan == Clan.PlayerClan ? 0 : (!heroList.Contains(lord) ? 1 : 0)) != 0)
            {
              float num3 = (tuple1.Item1.Governor == lord ? 1f : 0.75f) * Campaign.Current.Models.DiplomacyModel.GetHeroGoverningStrengthForClan(lord);
              if ((double) num3 > (double) num2)
              {
                num2 = num3;
                governor = lord;
              }
            }
          }
          if (governor != null)
          {
            if (tuple1.Item1.Governor != governor)
            {
              if (governor.GovernorOf != null)
                ChangeGovernorAction.RemoveGovernorOf(governor);
              ChangeGovernorAction.Apply(tuple1.Item1, governor);
            }
            heroList.Add(governor);
          }
        }
      }
    }

    public void OnNewGameCreated(CampaignGameStarter starter)
    {
      foreach (Clan clan in (List<Clan>) Clan.All)
      {
        if (clan.Leader != null && clan.Leader.IsLord)
          clan.UpdateHomeSettlement((Settlement) null);
        if (clan != Clan.PlayerClan && clan.Leader != null && clan.Leader.MapFaction != null && clan.Leader.MapFaction.IsKingdomFaction && (double) clan.Renown > 0.0)
          ChangeClanInfluenceAction.Apply(clan, (float) Campaign.Current.Models.ClanTierModel.CalculateInitialInfluence(clan));
        clan.LastFactionChangeTime = CampaignTime.Now;
      }
      this.DetermineBasicTroopsForMinorFactions();
      foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
      {
        this.UpdateGovernorsOfClan(nonBanditFaction);
        if (nonBanditFaction.Kingdom != null && nonBanditFaction.Leader == nonBanditFaction.Kingdom.Leader)
          nonBanditFaction.Kingdom.KingdomBudgetWallet = 2000000;
      }
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      if (!MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("e1.8.0")))
        return;
      foreach (Clan clan1 in (List<Clan>) Clan.All)
      {
        if (clan1 != Clan.PlayerClan && !clan1.IsBanditFaction && !clan1.Leader.IsAlive)
        {
          if (!clan1.IsEliminated)
          {
            ChangeClanLeaderAction.ApplyWithoutSelectedNewLeader(clan1);
            if (!clan1.Leader.IsAlive)
              DestroyClanAction.Apply(clan1);
          }
          else if (clan1.Settlements.Count > 0)
          {
            Clan clan2 = FactionHelper.ChooseHeirClanForFiefs(clan1);
            foreach (Settlement settlement in clan1.Settlements.ToList<Settlement>())
            {
              if (settlement.IsTown || settlement.IsCastle)
              {
                Hero elementWithPredicate = clan2.Lords.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (x => !x.IsChild));
                ChangeOwnerOfSettlementAction.ApplyByDestroyClan(settlement, elementWithPredicate);
              }
            }
          }
        }
      }
      foreach (Kingdom kingdom1 in (List<Kingdom>) Kingdom.All)
      {
        Kingdom kingdom = kingdom1;
        if (!kingdom.IsEliminated && kingdom.RulingClan.IsEliminated || kingdom.Leader.MapFaction != kingdom)
        {
          IEnumerable<Clan> source = kingdom.Clans.Where<Clan>((Func<Clan, bool>) (t => t != kingdom.RulingClan && !t.IsUnderMercenaryService && !t.IsEliminated));
          if (!source.IsEmpty<Clan>())
          {
            ChangeRulingClanAction.Apply(kingdom, source.FirstOrDefault<Clan>());
            if (source.Count<Clan>() > 1)
              kingdom.AddDecision((KingdomDecision) new KingSelectionKingdomDecision(kingdom.RulingClan, kingdom.RulingClan), true);
          }
          else
            DestroyKingdomAction.Apply(kingdom);
        }
      }
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      if (!MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.1.0")))
        return;
      for (int index = Clan.All.Count - 1; index >= 0; --index)
      {
        Clan clan = Clan.All[index];
        if (clan.StringId == "test_clan")
        {
          Campaign.Current.CampaignObjectManager.RemoveClan(clan);
          break;
        }
      }
      foreach (Clan clan in (List<Clan>) Clan.All)
      {
        if (clan != Clan.PlayerClan)
          this.UpdateClanSettlementsPaymentLimit(clan);
      }
      foreach (MobileParty mobileParty in Campaign.Current.GarrisonParties.WhereQ<MobileParty>((Func<MobileParty, bool>) (p => p.CurrentSettlement.OwnerClan == Clan.PlayerClan)))
      {
        if (mobileParty.CurrentSettlement.GarrisonWagePaymentLimit == 0)
          mobileParty.CurrentSettlement.SetGarrisonWagePaymentLimit(2000);
      }
    }

    private void OnGameLoadFinished()
    {
      foreach (Kingdom other in (List<Kingdom>) Kingdom.All)
      {
        for (int index = other.Clans.Count - 1; index >= 0; --index)
        {
          if (other.Clans[index].GetStanceWith((IFaction) other).IsAtConstantWar)
            ChangeKingdomAction.ApplyByLeaveWithRebellionAgainstKingdom(other.Clans[index], false);
        }
      }
    }

    private void MakeClanFinancialEvaluation(Clan clan)
    {
      int num1 = clan.IsMinorFaction ? 10000 : 30000;
      int num2 = clan.IsMinorFaction ? 30000 : 90000;
      if (clan.Leader.Gold > num2)
      {
        foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
          warPartyComponent.MobileParty.SetWagePaymentLimit(Campaign.Current.Models.PartyWageModel.MaxWage);
      }
      else if (clan.Leader.Gold > num1)
      {
        foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
        {
          float newLimit = (float) (600.0 + (double) (clan.Leader.Gold - num1) / (double) (num2 - num1) * 600.0);
          if (warPartyComponent.MobileParty.LeaderHero == clan.Leader)
            newLimit *= 1.5f;
          warPartyComponent.MobileParty.SetWagePaymentLimit((int) newLimit);
        }
      }
      else
      {
        foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
        {
          float newLimit = (float) (200.0 + (double) clan.Leader.Gold / (double) num1 * ((double) clan.Leader.Gold / (double) num1) * 400.0);
          if (warPartyComponent.MobileParty.LeaderHero == clan.Leader)
            newLimit *= 1.5f;
          warPartyComponent.MobileParty.SetWagePaymentLimit((int) newLimit);
        }
      }
    }

    private void DailyTickClan(Clan clan)
    {
      if (!Clan.BanditFactions.Contains<Clan>(clan))
      {
        if (clan.Kingdom != null)
        {
          if (clan != Clan.PlayerClan && clan.IsUnderMercenaryService && clan.Kingdom != null && clan.Kingdom.Leader != Hero.MainHero && (double) MBRandom.RandomFloat < 0.10000000149011612)
            clan.MercenaryAwardMultiplier = Campaign.Current.Models.MinorFactionsModel.GetMercenaryAwardFactorToJoinKingdom(clan, clan.Kingdom);
          if (clan == Clan.PlayerClan && clan.IsUnderMercenaryService && clan.Kingdom != null && (double) Campaign.CurrentTime > (double) Campaign.Current.KingdomManager.PlayerMercenaryServiceNextRenewDay)
          {
            clan.MercenaryAwardMultiplier = Campaign.Current.Models.MinorFactionsModel.GetMercenaryAwardFactorToJoinKingdom(clan, clan.Kingdom);
            Campaign.Current.KingdomManager.PlayerMercenaryServiceNextRenewDay = Campaign.CurrentTime + 720f;
          }
          if (clan != Clan.PlayerClan && clan.IsUnderMercenaryService && clan.Kingdom != null && clan.Kingdom.RulingClan.DebtToKingdom > 10000 && (double) MBRandom.RandomFloat < 0.25)
            ChangeKingdomAction.ApplyByLeaveKingdomAsMercenary(clan);
        }
        if (clan != Clan.PlayerClan)
          this.MakeClanFinancialEvaluation(clan);
        ExplainedNumber explainedNumber = Campaign.Current.Models.ClanFinanceModel.CalculateClanGoldChange(clan, applyWithdrawals: true);
        int num1 = MathF.Round(explainedNumber.ResultNumber);
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, clan.Leader, num1, true);
        if (clan.MapFaction.Leader == clan.Leader && clan.Kingdom != null)
        {
          int num2 = clan.Kingdom.KingdomBudgetWallet < 2000000 ? 1000 : 0;
          if ((double) clan.Kingdom.KingdomBudgetWallet < 1000000.0 && (double) MBRandom.RandomFloat < ((double) clan.Kingdom.KingdomBudgetWallet < 100000.0 ? 0.0099999997764825821 : 0.004999999888241291))
          {
            float randomFloat = MBRandom.RandomFloat;
            num2 = (double) randomFloat < 0.10000000149011612 ? 400000 : ((double) randomFloat < 0.30000001192092896 ? 200000 : 100000);
          }
          clan.Kingdom.KingdomBudgetWallet += num2;
        }
        explainedNumber = Campaign.Current.Models.ClanPoliticsModel.CalculateInfluenceChange(clan);
        float resultNumber = explainedNumber.ResultNumber;
        ChangeClanInfluenceAction.Apply(clan, resultNumber);
        if (clan == Clan.PlayerClan)
        {
          TextObject textObject = new TextObject("{=dPD5zood}Daily Gold Change: {CHANGE}{GOLD_ICON}");
          textObject.SetTextVariable("CHANGE", num1);
          textObject.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          string soundEventPath = num1 > 0 ? "event:/ui/notification/coins_positive" : (num1 == 0 ? string.Empty : "event:/ui/notification/coins_negative");
          InformationManager.DisplayMessage(new InformationMessage(textObject.ToString(), soundEventPath));
        }
      }
      if (clan == Clan.PlayerClan)
        return;
      this.UpdateGovernorsOfClan(clan);
      this.UpdateClanSettlementsPaymentLimit(clan);
      this.UpdateClanSettlementAutoRecruitment(clan);
    }

    private void UpdateClanSettlementAutoRecruitment(Clan clan)
    {
      if (clan.MapFaction == null || !clan.MapFaction.IsKingdomFaction)
        return;
      foreach (Settlement settlement in (List<Settlement>) clan.Settlements)
      {
        if (settlement.IsFortification && settlement.Town.GarrisonParty != null && !settlement.Town.GarrisonAutoRecruitmentIsEnabled)
          settlement.Town.GarrisonParty.CurrentSettlement.Town.GarrisonAutoRecruitmentIsEnabled = true;
      }
    }

    private void UpdateClanSettlementsPaymentLimit(Clan clan)
    {
      float averageWage = Campaign.Current.AverageWage;
      if (clan.MapFaction == null || !clan.IsRebelClan && !clan.MapFaction.IsKingdomFaction)
        return;
      float strengthPerWalledCenter = FactionHelper.FindIdealGarrisonStrengthPerWalledCenter(clan.MapFaction as Kingdom, clan);
      foreach (Town fief in (List<Town>) clan.Fiefs)
      {
        float num1 = FactionHelper.OwnerClanEconomyEffectOnGarrisonSizeConstant(fief.OwnerClan);
        float num2 = FactionHelper.SettlementProsperityEffectOnGarrisonSizeConstant(fief);
        float num3 = FactionHelper.SettlementFoodPotentialEffectOnGarrisonSizeConstant(fief.Settlement);
        fief.Settlement.SetGarrisonWagePaymentLimit((int) MathF.Clamp(strengthPerWalledCenter * ((!clan.IsRebelClan || clan.MapFaction.IsKingdomFaction ? 1.5f : 2f) * num1 * num2 * num3) * averageWage, 0.0f, (float) Campaign.Current.Models.PartyWageModel.MaxWage));
      }
    }

    private void DailyTickHero(Hero hero)
    {
      if (!hero.IsActive || !hero.IsNotable)
        return;
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, hero, Campaign.Current.Models.ClanFinanceModel.CalculateNotableDailyGoldChange(hero, true), true);
    }

    private void DetermineBasicTroopsForMinorFactions()
    {
      foreach (Clan clan in (List<Clan>) Clan.All)
      {
        if (clan.IsMinorFaction)
        {
          CharacterObject characterObject = (CharacterObject) null;
          PartyTemplateObject defaultPartyTemplate = clan.DefaultPartyTemplate;
          int num = 50;
          foreach (PartyTemplateStack stack in (List<PartyTemplateStack>) defaultPartyTemplate.Stacks)
          {
            int level = stack.Character.Level;
            if (level < num)
            {
              num = level;
              characterObject = stack.Character;
            }
          }
          clan.BasicTroop = characterObject;
        }
      }
    }
  }
}
