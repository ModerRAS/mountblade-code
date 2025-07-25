// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.RecruitmentCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class RecruitmentCampaignBehavior : CampaignBehaviorBase
  {
    private Dictionary<Town, RecruitmentCampaignBehavior.TownMercenaryData> _townMercenaryData = new Dictionary<Town, RecruitmentCampaignBehavior.TownMercenaryData>();
    private int _selectedMercenaryCount;
    private CharacterObject _selectedTroop;

    public override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.LocationCharactersAreReadyToSpawnEvent.AddNonSerializedListener((object) this, new Action<Dictionary<string, int>>(this.LocationCharactersAreReadyToSpawn));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.DailyTickTownEvent.AddNonSerializedListener((object) this, new Action<Town>(this.DailyTickTown));
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
      CampaignEvents.HourlyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.HourlyTickParty));
      CampaignEvents.MercenaryNumberChangedInTown.AddNonSerializedListener((object) this, new Action<Town, int, int>(this.OnMercenaryNumberChanged));
      CampaignEvents.MercenaryTroopChangedInTown.AddNonSerializedListener((object) this, new Action<Town, CharacterObject, CharacterObject>(this.OnMercenaryTroopChanged));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
      CampaignEvents.OnUnitRecruitedEvent.AddNonSerializedListener((object) this, new Action<CharacterObject, int>(this.OnUnitRecruited));
      CampaignEvents.OnTroopRecruitedEvent.AddNonSerializedListener((object) this, new Action<Hero, Settlement, Hero, CharacterObject, int>(this.OnTroopRecruited));
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      this.UpdateVolunteersOfNotablesInSettlement(settlement);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<CharacterObject>("_selectedTroop", ref this._selectedTroop);
      dataStore.SyncData<Dictionary<Town, RecruitmentCampaignBehavior.TownMercenaryData>>("_townMercenaryData", ref this._townMercenaryData);
    }

    private RecruitmentCampaignBehavior.TownMercenaryData GetMercenaryData(Town town)
    {
      RecruitmentCampaignBehavior.TownMercenaryData mercenaryData;
      if (!this._townMercenaryData.TryGetValue(town, out mercenaryData))
      {
        mercenaryData = new RecruitmentCampaignBehavior.TownMercenaryData(town);
        this._townMercenaryData.Add(town, mercenaryData);
      }
      return mercenaryData;
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter starter)
    {
      foreach (Town allTown in (List<Town>) Town.AllTowns)
        this.UpdateCurrentMercenaryTroopAndCount(allTown, true);
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
        this.UpdateVolunteersOfNotablesInSettlement(settlement);
    }

    private void OnTroopRecruited(
      Hero recruiter,
      Settlement settlement,
      Hero recruitmentSource,
      CharacterObject troop,
      int count)
    {
      if (recruiter != null && recruiter.PartyBelongedTo != null && recruiter.GetPerkValue(DefaultPerks.Leadership.FamousCommander))
        recruiter.PartyBelongedTo.MemberRoster.AddXpToTroop((int) DefaultPerks.Leadership.FamousCommander.SecondaryBonus * count, troop);
      SkillLevelingManager.OnTroopRecruited(recruiter, count, troop.Tier);
      if (recruiter == null || recruiter.PartyBelongedTo == null || troop.Occupation != Occupation.Bandit)
        return;
      SkillLevelingManager.OnBanditsRecruited(recruiter.PartyBelongedTo, troop, count);
    }

    private void OnUnitRecruited(CharacterObject troop, int count)
    {
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Leadership.FamousCommander))
        MobileParty.MainParty.MemberRoster.AddXpToTroop((int) DefaultPerks.Leadership.FamousCommander.SecondaryBonus * count, troop);
      SkillLevelingManager.OnTroopRecruited(Hero.MainHero, count, troop.Tier);
      if (troop.Occupation != Occupation.Bandit)
        return;
      SkillLevelingManager.OnBanditsRecruited(MobileParty.MainParty, troop, count);
    }

    private void DailyTickTown(Town town)
    {
      this.UpdateCurrentMercenaryTroopAndCount(town, (int) CampaignTime.Now.ToDays % 2 == 0);
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddGameMenus(campaignGameStarter);
      this.AddDialogs(campaignGameStarter);
    }

    private void OnMercenaryNumberChanged(Town town, int oldNumber, int newNumber)
    {
      this.CheckIfMercenaryCharacterNeedsToRefresh(town.Owner.Settlement, this.GetMercenaryData(town).TroopType);
    }

    private void OnMercenaryTroopChanged(
      Town town,
      CharacterObject oldTroopType,
      CharacterObject newTroopType)
    {
      this.CheckIfMercenaryCharacterNeedsToRefresh(town.Owner.Settlement, oldTroopType);
    }

    private void UpdateVolunteersOfNotablesInSettlement(Settlement settlement)
    {
      if ((!settlement.IsTown || settlement.Town.InRebelliousState) && (!settlement.IsVillage || settlement.Village.Bound.Town.InRebelliousState))
        return;
      foreach (Hero notable in (List<Hero>) settlement.Notables)
      {
        if (notable.CanHaveRecruits && notable.IsAlive)
        {
          bool flag = false;
          CharacterObject basicVolunteer = Campaign.Current.Models.VolunteerModel.GetBasicVolunteer(notable);
          for (int index = 0; index < 6; ++index)
          {
            if ((double) MBRandom.RandomFloat < (double) Campaign.Current.Models.VolunteerModel.GetDailyVolunteerProductionProbability(notable, index, settlement))
            {
              CharacterObject volunteerType = notable.VolunteerTypes[index];
              if (volunteerType == null)
              {
                notable.VolunteerTypes[index] = basicVolunteer;
                flag = true;
              }
              else if (volunteerType.UpgradeTargets.Length != 0 && volunteerType.Tier < Campaign.Current.Models.VolunteerModel.MaxVolunteerTier && (double) MBRandom.RandomFloat < (double) (MathF.Log(notable.Power / (float) volunteerType.Tier, 2f) * 0.01f))
              {
                notable.VolunteerTypes[index] = volunteerType.UpgradeTargets[MBRandom.RandomInt(volunteerType.UpgradeTargets.Length)];
                flag = true;
              }
            }
          }
          if (flag)
          {
            CharacterObject[] volunteerTypes = notable.VolunteerTypes;
            for (int index1 = 1; index1 < 6; ++index1)
            {
              CharacterObject characterObject1 = volunteerTypes[index1];
              if (characterObject1 != null)
              {
                int num = 0;
                int index2 = index1 - 1;
                CharacterObject characterObject2 = volunteerTypes[index2];
                while (index2 >= 0 && (characterObject2 == null || (double) characterObject1.Level + (characterObject1.IsMounted ? 0.5 : 0.0) < (double) characterObject2.Level + (characterObject2.IsMounted ? 0.5 : 0.0)))
                {
                  if (characterObject2 == null)
                  {
                    --index2;
                    ++num;
                    if (index2 >= 0)
                      characterObject2 = volunteerTypes[index2];
                  }
                  else
                  {
                    volunteerTypes[index2 + 1 + num] = characterObject2;
                    --index2;
                    num = 0;
                    if (index2 >= 0)
                      characterObject2 = volunteerTypes[index2];
                  }
                }
                volunteerTypes[index2 + 1 + num] = characterObject1;
              }
            }
          }
        }
      }
    }

    public void HourlyTickParty(MobileParty mobileParty)
    {
      if (!mobileParty.IsCaravan && !mobileParty.IsLordParty || mobileParty.MapEvent != null || mobileParty == MobileParty.MainParty)
        return;
      Settlement forAiCalculation = MobilePartyHelper.GetCurrentSettlementOfMobilePartyForAICalculation(mobileParty);
      if (forAiCalculation != null)
      {
        if ((!forAiCalculation.IsVillage || forAiCalculation.IsRaided || forAiCalculation.IsUnderRaid) && (!forAiCalculation.IsTown || forAiCalculation.IsUnderSiege))
          return;
        this.CheckRecruiting(mobileParty, forAiCalculation);
      }
      else
      {
        if ((double) MBRandom.RandomFloat >= 0.05000000074505806 || mobileParty.LeaderHero == null || mobileParty.ActualClan == Clan.PlayerClan || mobileParty.IsCaravan)
          return;
        IFaction mapFaction = mobileParty.MapFaction;
        if ((mapFaction != null ? (mapFaction.IsMinorFaction ? 1 : 0) : 0) == 0 || (double) MobileParty.MainParty.Position2D.DistanceSquared(mobileParty.Position2D) <= ((double) MobileParty.MainParty.SeeingRange + 5.0) * ((double) MobileParty.MainParty.SeeingRange + 5.0))
          return;
        int partySizeLimit = mobileParty.Party.PartySizeLimit;
        float num1 = (float) mobileParty.Party.NumberOfAllMembers / (float) partySizeLimit;
        float num2 = (double) num1 < 0.2 ? 1000f : ((double) num1 < 0.3 ? 2000f : ((double) num1 < 0.4 ? 3000f : ((double) num1 < 0.55 ? 4000f : ((double) num1 < 0.7 ? 5000f : 7000f))));
        float num3 = (double) mobileParty.LeaderHero.Gold > (double) num2 ? 1f : MathF.Sqrt((float) mobileParty.LeaderHero.Gold / num2);
        if ((double) MBRandom.RandomFloat >= (1.0 - (double) num1) * (double) num3)
          return;
        CharacterObject basicTroop = mobileParty.ActualClan.BasicTroop;
        int number = MBRandom.RandomInt(3, 8);
        if (number + mobileParty.Party.NumberOfAllMembers > partySizeLimit)
          number = partySizeLimit - mobileParty.Party.NumberOfAllMembers;
        int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(basicTroop, mobileParty.LeaderHero);
        if (number * troopRecruitmentCost > mobileParty.LeaderHero.Gold)
          number = mobileParty.LeaderHero.Gold / troopRecruitmentCost;
        if (number <= 0)
          return;
        this.GetRecruitVolunteerFromMap(mobileParty, basicTroop, number);
      }
    }

    private void UpdateCurrentMercenaryTroopAndCount(Town town, bool forceUpdate = false)
    {
      RecruitmentCampaignBehavior.TownMercenaryData mercenaryData = this.GetMercenaryData(town);
      if (!forceUpdate && mercenaryData.HasAvailableMercenary())
      {
        int mercenariesWillBeAdded = this.FindNumberOfMercenariesWillBeAdded(mercenaryData.TroopType, true);
        mercenaryData.ChangeMercenaryCount(mercenariesWillBeAdded);
      }
      else if ((double) MBRandom.RandomFloat < (double) Campaign.Current.Models.TavernMercenaryTroopsModel.RegularMercenariesSpawnChance)
      {
        CharacterObject elementInefficiently = town.Culture.BasicMercenaryTroops.GetRandomElementInefficiently<CharacterObject>();
        this._selectedTroop = (CharacterObject) null;
        float randomValueRemaining = MBRandom.RandomFloat * this.FindTotalMercenaryProbability(elementInefficiently, 1f);
        double randomMercenaryTroop = (double) this.FindRandomMercenaryTroop(elementInefficiently, 1f, randomValueRemaining);
        int mercenariesWillBeAdded = this.FindNumberOfMercenariesWillBeAdded(this._selectedTroop);
        mercenaryData.ChangeMercenaryType(this._selectedTroop, mercenariesWillBeAdded);
      }
      else
      {
        CharacterObject caravanGuard = town.Culture.CaravanGuard;
        if (caravanGuard == null)
          return;
        this._selectedTroop = (CharacterObject) null;
        float randomValueRemaining = MBRandom.RandomFloat * this.FindTotalMercenaryProbability(caravanGuard, 1f);
        double randomMercenaryTroop = (double) this.FindRandomMercenaryTroop(caravanGuard, 1f, randomValueRemaining);
        int mercenariesWillBeAdded = this.FindNumberOfMercenariesWillBeAdded(this._selectedTroop);
        mercenaryData.ChangeMercenaryType(this._selectedTroop, mercenariesWillBeAdded);
      }
    }

    private float FindTotalMercenaryProbability(
      CharacterObject mercenaryTroop,
      float probabilityOfTroop)
    {
      float mercenaryProbability = probabilityOfTroop;
      foreach (CharacterObject upgradeTarget in mercenaryTroop.UpgradeTargets)
        mercenaryProbability += this.FindTotalMercenaryProbability(upgradeTarget, probabilityOfTroop / 1.5f);
      return mercenaryProbability;
    }

    private float FindRandomMercenaryTroop(
      CharacterObject mercenaryTroop,
      float probabilityOfTroop,
      float randomValueRemaining)
    {
      randomValueRemaining -= probabilityOfTroop;
      if ((double) randomValueRemaining <= 9.9999997473787516E-06 && this._selectedTroop == null)
      {
        this._selectedTroop = mercenaryTroop;
        return 1f;
      }
      float randomMercenaryTroop1 = probabilityOfTroop;
      foreach (CharacterObject upgradeTarget in mercenaryTroop.UpgradeTargets)
      {
        float randomMercenaryTroop2 = this.FindRandomMercenaryTroop(upgradeTarget, probabilityOfTroop / 1.5f, randomValueRemaining);
        randomValueRemaining -= randomMercenaryTroop2;
        randomMercenaryTroop1 += randomMercenaryTroop2;
      }
      return randomMercenaryTroop1;
    }

    private int FindNumberOfMercenariesWillBeAdded(CharacterObject character, bool dailyUpdate = false)
    {
      int tier = Campaign.Current.Models.CharacterStatsModel.GetTier(character);
      int maxCharacterTier = Campaign.Current.Models.CharacterStatsModel.MaxCharacterTier;
      int num = (maxCharacterTier - tier) * 2;
      int maxValue = (maxCharacterTier - tier) * 5;
      return MBRandom.RoundRandomized(MBMath.ClampFloat((float) (((double) MBRandom.RandomFloat * (double) MBRandom.RandomFloat * (double) (maxValue - num) + (double) num) * (dailyUpdate ? 0.10000000149011612 : 1.0)), 1f, (float) maxValue));
    }

    private void CheckIfMercenaryCharacterNeedsToRefresh(
      Settlement settlement,
      CharacterObject oldTroopType)
    {
      if (!settlement.IsTown || settlement != Settlement.CurrentSettlement || PlayerEncounter.LocationEncounter == null || settlement.LocationComplex == null || CampaignMission.Current != null && GameStateManager.Current.ActiveState == CampaignMission.Current.State)
        return;
      if (oldTroopType != null)
        Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("tavern").RemoveAllCharacters((Predicate<LocationCharacter>) (x => x.Character.Occupation == oldTroopType.Occupation));
      this.AddMercenaryCharacterToTavern(settlement);
    }

    private void AddMercenaryCharacterToTavern(Settlement settlement)
    {
      if (settlement.LocationComplex == null || !settlement.IsTown || !this.GetMercenaryData(settlement.Town).HasAvailableMercenary())
        return;
      Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("tavern")?.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateMercenary), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
    }

    private void CheckRecruiting(MobileParty mobileParty, Settlement settlement)
    {
      if (settlement.IsTown && mobileParty.IsCaravan)
      {
        RecruitmentCampaignBehavior.TownMercenaryData mercenaryData = this.GetMercenaryData(settlement.Town);
        if (!mercenaryData.HasAvailableMercenary(Occupation.CaravanGuard) && !mercenaryData.HasAvailableMercenary(Occupation.Mercenary))
          return;
        int partySizeLimit = mobileParty.Party.PartySizeLimit;
        if (mobileParty.Party.NumberOfAllMembers >= partySizeLimit)
          return;
        CharacterObject troopType = mercenaryData.TroopType;
        int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(troopType, mobileParty.LeaderHero);
        int num1 = mobileParty.IsCaravan ? 2000 : 0;
        if (mobileParty.PartyTradeGold <= troopRecruitmentCost + num1)
          return;
        bool flag = true;
        double num2 = 0.0;
        for (int index = 0; index < mercenaryData.Number; ++index)
        {
          if (flag)
          {
            double num3 = (double) MathF.Min(1f, MathF.Sqrt((float) (mobileParty.PartyTradeGold - (troopRecruitmentCost + num1)) / (100f * (float) troopRecruitmentCost)));
            float num4 = (float) mobileParty.Party.NumberOfAllMembers / (float) partySizeLimit;
            double num5 = ((double) MathF.Min(10f, 1f / num4) * (double) MathF.Min(10f, 1f / num4) - 1.0) * (!mobileParty.IsCaravan || mobileParty.Party.Owner != Hero.MainHero ? 0.10000000149011612 : 0.40000000596046448);
            num2 = num3 * num5;
          }
          if ((double) MBRandom.RandomFloat < num2)
          {
            this.ApplyRecruitMercenary(mobileParty, settlement, troopType, 1);
            flag = true;
          }
          else
            flag = false;
        }
      }
      else
      {
        if (!mobileParty.IsLordParty || mobileParty.IsDisbanding || mobileParty.LeaderHero == null || mobileParty.Party.IsStarving || (double) mobileParty.LeaderHero.Gold <= (double) HeroHelper.StartRecruitingMoneyLimit(mobileParty.LeaderHero) || mobileParty.LeaderHero != mobileParty.LeaderHero.Clan.Leader && (double) mobileParty.LeaderHero.Clan.Gold <= (double) HeroHelper.StartRecruitingMoneyLimitForClanLeader(mobileParty.LeaderHero) || ((double) mobileParty.Party.NumberOfAllMembers + 0.5) / (double) mobileParty.LimitedPartySize > 1.0)
          return;
        if (settlement.IsTown && this.GetMercenaryData(settlement.Town).HasAvailableMercenary(Occupation.Mercenary))
        {
          float num6 = (float) mobileParty.Party.NumberOfAllMembers / (float) mobileParty.LimitedPartySize;
          CharacterObject troopType = this.GetMercenaryData(settlement.Town).TroopType;
          if (troopType != null)
          {
            int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(troopType, mobileParty.LeaderHero);
            if (troopRecruitmentCost < 5000)
            {
              double num7 = (double) MathF.Min(1f, (float) mobileParty.LeaderHero.Gold / (troopRecruitmentCost <= 100 ? 100000f : (troopRecruitmentCost <= 200 ? 125000f : (troopRecruitmentCost <= 400 ? 150000f : (troopRecruitmentCost <= 700 ? 175000f : (troopRecruitmentCost <= 1100 ? 200000f : (troopRecruitmentCost <= 1600 ? 250000f : (troopRecruitmentCost <= 2200 ? 300000f : 400000f))))))));
              float num8 = (float) (num7 * num7 * (double) (MathF.Max(1f, MathF.Min(10f, 1f / num6)) - 1f) * 0.25);
              int number1 = this.GetMercenaryData(settlement.Town).Number;
              int a = 0;
              for (int index = 0; index < number1; ++index)
              {
                if ((double) MBRandom.RandomFloat < (double) num8)
                  ++a;
              }
              int b = MathF.Min(a, mobileParty.LimitedPartySize - mobileParty.Party.NumberOfAllMembers);
              int number2 = (double) troopRecruitmentCost <= 0.1 ? b : MathF.Min(mobileParty.LeaderHero.Gold / troopRecruitmentCost, b);
              if (number2 > 0)
                this.ApplyRecruitMercenary(mobileParty, settlement, troopType, number2);
            }
          }
        }
        if (mobileParty.Party.NumberOfAllMembers >= mobileParty.LimitedPartySize || !mobileParty.CanPayMoreWage())
          return;
        this.RecruitVolunteersFromNotable(mobileParty, settlement);
      }
    }

    private void RecruitVolunteersFromNotable(MobileParty mobileParty, Settlement settlement)
    {
      if (((double) mobileParty.Party.NumberOfAllMembers + 0.5) / (double) mobileParty.LimitedPartySize > 1.0)
        return;
      foreach (Hero notable in (List<Hero>) settlement.Notables)
      {
        if (notable.IsAlive)
        {
          if (mobileParty.IsWageLimitExceeded())
            break;
          int num1 = MBRandom.RandomInt(6);
          int num2 = Campaign.Current.Models.VolunteerModel.MaximumIndexHeroCanRecruitFromHero(mobileParty.IsGarrison ? mobileParty.Party.Owner : mobileParty.LeaderHero, notable);
          for (int index1 = num1; index1 < num1 + 6; ++index1)
          {
            int bitCode = index1 % 6;
            if (bitCode < num2)
            {
              int num3 = mobileParty.LeaderHero != null ? (int) MathF.Sqrt((float) mobileParty.LeaderHero.Gold / 10000f) : 0;
              float x = MBRandom.RandomFloat;
              for (int index2 = 0; index2 < num3; ++index2)
              {
                float randomFloat = MBRandom.RandomFloat;
                if ((double) randomFloat > (double) x)
                  x = randomFloat;
              }
              if (mobileParty.Army != null)
              {
                float y = mobileParty.Army.LeaderParty == mobileParty ? 0.5f : 0.67f;
                x = MathF.Pow(x, y);
              }
              float num4 = (float) mobileParty.Party.NumberOfAllMembers / (float) mobileParty.LimitedPartySize;
              if ((double) x > (double) num4 - 0.10000000149011612)
              {
                CharacterObject volunteerType = notable.VolunteerTypes[bitCode];
                if (volunteerType != null && mobileParty.LeaderHero.Gold > Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(volunteerType, mobileParty.LeaderHero) && mobileParty.PaymentLimit >= mobileParty.TotalWage + Campaign.Current.Models.PartyWageModel.GetCharacterWage(volunteerType))
                {
                  this.GetRecruitVolunteerFromIndividual(mobileParty, volunteerType, notable, bitCode);
                  break;
                }
              }
            }
            else
              break;
          }
        }
      }
    }

    public void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if (mobileParty == null || mobileParty.MapEvent != null)
        return;
      if (!settlement.IsVillage)
      {
        Clan ownerClan = settlement.OwnerClan;
        if ((ownerClan != null ? (!ownerClan.IsAtWarWith(mobileParty.MapFaction) ? 1 : 0) : 0) == 0)
          return;
      }
      if (settlement.IsRaided || settlement.IsUnderRaid)
        return;
      int num = mobileParty.IsCaravan ? 1 : (mobileParty.Army == null || mobileParty.Army != MobileParty.MainParty.Army ? 7 : ((double) MobileParty.MainParty.PartySizeRatio < 0.60000002384185791 ? 1 : ((double) MobileParty.MainParty.PartySizeRatio < 0.89999997615814209 ? 2 : 3)));
      List<MobileParty> mobilePartyList = new List<MobileParty>();
      if (mobileParty.Army != null && mobileParty.Army.LeaderParty == mobileParty)
      {
        foreach (MobileParty party in (List<MobileParty>) mobileParty.Army.Parties)
        {
          if ((party == mobileParty.Army.LeaderParty || party.AttachedTo == mobileParty.Army.LeaderParty) && party != MobileParty.MainParty)
            mobilePartyList.Add(party);
        }
      }
      else if (mobileParty.AttachedTo == null && mobileParty != MobileParty.MainParty)
        mobilePartyList.Add(mobileParty);
      for (int index = 0; index < num; ++index)
      {
        foreach (MobileParty mobileParty1 in mobilePartyList)
          this.CheckRecruiting(mobileParty1, settlement);
      }
    }

    private void ApplyInternal(
      MobileParty side1Party,
      Settlement settlement,
      Hero individual,
      CharacterObject troop,
      int number,
      int bitCode,
      RecruitmentCampaignBehavior.RecruitingDetail detail)
    {
      int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(troop, side1Party.LeaderHero);
      switch (detail)
      {
        case RecruitmentCampaignBehavior.RecruitingDetail.MercenaryFromTavern:
          if (side1Party.IsCaravan)
          {
            side1Party.PartyTradeGold -= number * troopRecruitmentCost;
            this.GetMercenaryData(settlement.Town).ChangeMercenaryCount(-number);
          }
          else
          {
            GiveGoldAction.ApplyBetweenCharacters(side1Party.LeaderHero, (Hero) null, number * troopRecruitmentCost, true);
            this.GetMercenaryData(settlement.Town).ChangeMercenaryCount(-number);
          }
          side1Party.AddElementToMemberRoster(troop, number);
          break;
        case RecruitmentCampaignBehavior.RecruitingDetail.VolunteerFromIndividual:
          GiveGoldAction.ApplyBetweenCharacters(side1Party.LeaderHero, (Hero) null, troopRecruitmentCost, true);
          individual.VolunteerTypes[bitCode] = (CharacterObject) null;
          side1Party.AddElementToMemberRoster(troop, 1);
          break;
        case RecruitmentCampaignBehavior.RecruitingDetail.VolunteerFromIndividualToGarrison:
          individual.VolunteerTypes[bitCode] = (CharacterObject) null;
          side1Party.AddElementToMemberRoster(troop, 1);
          break;
        case RecruitmentCampaignBehavior.RecruitingDetail.VolunteerFromMap:
          GiveGoldAction.ApplyBetweenCharacters(side1Party.LeaderHero, (Hero) null, number * troopRecruitmentCost, true);
          side1Party.AddElementToMemberRoster(troop, number);
          break;
      }
      CampaignEventDispatcher.Instance.OnTroopRecruited(side1Party.LeaderHero, settlement, individual, troop, number);
    }

    private void ApplyRecruitMercenary(
      MobileParty side1Party,
      Settlement side2Party,
      CharacterObject subject,
      int number)
    {
      this.ApplyInternal(side1Party, side2Party, (Hero) null, subject, number, -1, RecruitmentCampaignBehavior.RecruitingDetail.MercenaryFromTavern);
    }

    private void GetRecruitVolunteerFromMap(
      MobileParty side1Party,
      CharacterObject subject,
      int number)
    {
      this.ApplyInternal(side1Party, (Settlement) null, (Hero) null, subject, number, -1, RecruitmentCampaignBehavior.RecruitingDetail.VolunteerFromMap);
    }

    private void GetRecruitVolunteerFromIndividual(
      MobileParty side1Party,
      CharacterObject subject,
      Hero individual,
      int bitCode)
    {
      this.ApplyInternal(side1Party, individual.CurrentSettlement, individual, subject, 1, bitCode, RecruitmentCampaignBehavior.RecruitingDetail.VolunteerFromIndividual);
    }

    private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
    {
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      if (CampaignMission.Current.Location != settlement.LocationComplex.GetLocationWithId("tavern"))
        return;
      this.AddMercenaryCharacterToTavern(settlement);
    }

    private LocationCharacter CreateMercenary(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject troopType = this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town).TroopType;
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) troopType)).Monster(FaceGen.GetMonsterWithSuffix(troopType.Race, "_settlement")).NoHorses(true), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "spawnpoint_mercenary", true, relation, (string) null, false);
    }

    protected void AddGameMenus(CampaignGameStarter campaignGameSystemStarter)
    {
      campaignGameSystemStarter.AddGameMenuOption("town_backstreet", "recruit_mercenaries", "{=NwO0CVzn}Recruit {MEN_COUNT} {MERCENARY_NAME} ({TOTAL_AMOUNT}{GOLD_ICON})", new GameMenuOption.OnConditionDelegate(this.buy_mercenaries_condition), (GameMenuOption.OnConsequenceDelegate) (x => this.buy_mercenaries_on_consequence()), index: 2);
    }

    protected void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("mercenary_recruit_start", "start", "mercenary_tavern_talk", "{=I0StkXlK}Do you have a need for fighters, {?PLAYER.GENDER}madam{?}sir{\\?}? Me and {?PLURAL}{MERCENARY_COUNT} of my mates{?}one of my mates{\\?} are looking for a master. You might call us mercenaries, like. We'll join you for {GOLD_AMOUNT}{GOLD_ICON}", new ConversationSentence.OnConditionDelegate(this.conversation_mercenary_recruit_plural_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("mercenary_recruit_start_single", "start", "mercenary_tavern_talk", "{=rJwExPKb}Do you have a need for fighters, {?PLAYER.GENDER}madam{?}sir{\\?}? I am looking for a master. I'll join you for {GOLD_AMOUNT}{GOLD_ICON}", new ConversationSentence.OnConditionDelegate(this.conversation_mercenary_recruit_single_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("mercenary_recruit_accept", "mercenary_tavern_talk", "mercenary_tavern_talk_hire", "{=PDLDvUfH}All right. I will hire {?PLURAL}all of you{?}you{\\?}. Here is {GOLD_AMOUNT}{GOLD_ICON}", new ConversationSentence.OnConditionDelegate(this.conversation_mercenary_recruit_accept_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_mercenary_recruit_accept_on_consequence));
      campaignGameStarter.AddPlayerLine("mercenary_recruit_accept_some", "mercenary_tavern_talk", "mercenary_tavern_talk_hire", "{=aTPc7AkY}All right. But I can only hire {MERCENARY_COUNT} of you. Here is {GOLD_AMOUNT}{GOLD_ICON}", new ConversationSentence.OnConditionDelegate(this.conversation_mercenary_recruit_accept_some_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_mercenary_recruit_accept_some_on_consequence));
      campaignGameStarter.AddPlayerLine("mercenary_recruit_reject_gold", "mercenary_tavern_talk", "close_window", "{=n5BGNLrc}That sounds good. But I can't afford any more men right now.", new ConversationSentence.OnConditionDelegate(this.conversation_mercenary_recruit_reject_gold_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("mercenary_recruit_reject", "mercenary_tavern_talk", "close_window", "{=I2thb8VU}Sorry. I don't need any other men right now.", new ConversationSentence.OnConditionDelegate(this.conversation_mercenary_recruit_dont_need_men_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("mercenary_recruit_end", "mercenary_tavern_talk_hire", "close_window", "{=vbxQoyN3}{RANDOM_HIRE_SENTENCE}", new ConversationSentence.OnConditionDelegate(this.conversation_mercenary_recruit_end_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("mercenary_recruit_start_2", "start", "close_window", "{=Jhj437BV}Don't worry, I'll be ready. Just having a last drink for the road.", new ConversationSentence.OnConditionDelegate(this.conversation_mercenary_recruited_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
    }

    private bool buy_mercenaries_condition(MenuCallbackArgs args)
    {
      if (MobileParty.MainParty.CurrentSettlement == null || !MobileParty.MainParty.CurrentSettlement.IsTown || this.GetMercenaryData(MobileParty.MainParty.CurrentSettlement.Town).Number <= 0)
        return false;
      RecruitmentCampaignBehavior.TownMercenaryData mercenaryData = this.GetMercenaryData(MobileParty.MainParty.CurrentSettlement.Town);
      int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(mercenaryData.TroopType, Hero.MainHero);
      if (Hero.MainHero.Gold >= troopRecruitmentCost)
      {
        int content = MathF.Min(mercenaryData.Number, Hero.MainHero.Gold / troopRecruitmentCost);
        MBTextManager.SetTextVariable("MEN_COUNT", content);
        MBTextManager.SetTextVariable("MERCENARY_NAME", mercenaryData.TroopType.Name, false);
        MBTextManager.SetTextVariable("TOTAL_AMOUNT", content * troopRecruitmentCost);
      }
      else
      {
        args.Tooltip = GameTexts.FindText("str_decision_not_enough_gold");
        args.IsEnabled = false;
        int number = mercenaryData.Number;
        MBTextManager.SetTextVariable("MEN_COUNT", number);
        MBTextManager.SetTextVariable("MERCENARY_NAME", mercenaryData.TroopType.Name, false);
        MBTextManager.SetTextVariable("TOTAL_AMOUNT", number * troopRecruitmentCost);
      }
      args.optionLeaveType = GameMenuOption.LeaveType.Bribe;
      return true;
    }

    private void buy_mercenaries_on_consequence()
    {
      if (MobileParty.MainParty.CurrentSettlement == null || !MobileParty.MainParty.CurrentSettlement.IsTown || this.GetMercenaryData(MobileParty.MainParty.CurrentSettlement.Town).Number <= 0)
        return;
      RecruitmentCampaignBehavior.TownMercenaryData mercenaryData = this.GetMercenaryData(MobileParty.MainParty.CurrentSettlement.Town);
      int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(mercenaryData.TroopType, Hero.MainHero);
      if (Hero.MainHero.Gold < troopRecruitmentCost)
        return;
      int count = MathF.Min(mercenaryData.Number, Hero.MainHero.Gold / troopRecruitmentCost);
      MobileParty.MainParty.MemberRoster.AddToCounts(mercenaryData.TroopType, count);
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, -(count * troopRecruitmentCost));
      mercenaryData.ChangeMercenaryCount(-count);
      GameMenu.SwitchToMenu("town_backstreet");
    }

    private bool conversation_mercenary_recruit_plural_start_on_condition()
    {
      if (PlayerEncounter.EncounterSettlement == null || !PlayerEncounter.EncounterSettlement.IsTown)
        return false;
      RecruitmentCampaignBehavior.TownMercenaryData mercenaryData = this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town);
      int num = CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Mercenary && CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.CaravanGuard && CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Gangster || PlayerEncounter.EncounterSettlement == null || !PlayerEncounter.EncounterSettlement.IsTown ? 0 : (mercenaryData.Number > 1 ? 1 : 0);
      if (num == 0)
        return num != 0;
      int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(mercenaryData.TroopType, Hero.MainHero);
      MBTextManager.SetTextVariable("PLURAL", mercenaryData.Number - 1 > 1 ? 1 : 0);
      MBTextManager.SetTextVariable("MERCENARY_COUNT", mercenaryData.Number - 1);
      MBTextManager.SetTextVariable("GOLD_AMOUNT", troopRecruitmentCost * mercenaryData.Number);
      return num != 0;
    }

    private bool conversation_mercenary_recruit_single_start_on_condition()
    {
      if (PlayerEncounter.EncounterSettlement == null || !PlayerEncounter.EncounterSettlement.IsTown)
        return false;
      RecruitmentCampaignBehavior.TownMercenaryData mercenaryData = this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town);
      int num = CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Mercenary && CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.CaravanGuard && CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Gangster || PlayerEncounter.EncounterSettlement == null || !PlayerEncounter.EncounterSettlement.IsTown ? 0 : (mercenaryData.Number == 1 ? 1 : 0);
      if (num == 0)
        return num != 0;
      int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(mercenaryData.TroopType, Hero.MainHero);
      MBTextManager.SetTextVariable("GOLD_AMOUNT", mercenaryData.Number * troopRecruitmentCost);
      return num != 0;
    }

    private bool conversation_mercenary_recruit_accept_on_condition()
    {
      RecruitmentCampaignBehavior.TownMercenaryData mercenaryData = this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town);
      int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(mercenaryData.TroopType, Hero.MainHero);
      MBTextManager.SetTextVariable("PLURAL", mercenaryData.Number > 1 ? 1 : 0);
      return Hero.MainHero.Gold >= mercenaryData.Number * troopRecruitmentCost;
    }

    private bool conversation_mercenary_recruited_on_condition()
    {
      return (CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Mercenary || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.CaravanGuard || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Gangster) && PlayerEncounter.EncounterSettlement != null;
    }

    private void BuyMercenaries()
    {
      this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town).ChangeMercenaryCount(-this._selectedMercenaryCount);
      int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town).TroopType, Hero.MainHero);
      MobileParty.MainParty.AddElementToMemberRoster(CharacterObject.OneToOneConversationCharacter, this._selectedMercenaryCount);
      GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, this._selectedMercenaryCount * troopRecruitmentCost);
      CampaignEventDispatcher.Instance.OnUnitRecruited(CharacterObject.OneToOneConversationCharacter, this._selectedMercenaryCount);
    }

    private void conversation_mercenary_recruit_accept_on_consequence()
    {
      this._selectedMercenaryCount = this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town).Number;
      this.BuyMercenaries();
    }

    private bool conversation_mercenary_recruit_accept_some_on_condition()
    {
      int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town).TroopType, Hero.MainHero);
      if (Hero.MainHero.Gold < troopRecruitmentCost || Hero.MainHero.Gold >= this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town).Number * troopRecruitmentCost)
        return false;
      this._selectedMercenaryCount = 0;
      while (Hero.MainHero.Gold >= troopRecruitmentCost * (this._selectedMercenaryCount + 1))
        ++this._selectedMercenaryCount;
      MBTextManager.SetTextVariable("MERCENARY_COUNT", this._selectedMercenaryCount);
      MBTextManager.SetTextVariable("GOLD_AMOUNT", troopRecruitmentCost * this._selectedMercenaryCount);
      return true;
    }

    private void conversation_mercenary_recruit_accept_some_on_consequence()
    {
      this.BuyMercenaries();
    }

    private bool conversation_mercenary_recruit_reject_gold_on_condition()
    {
      return Hero.MainHero.Gold < Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town).TroopType, Hero.MainHero);
    }

    private bool conversation_mercenary_recruit_dont_need_men_on_condition()
    {
      return Hero.MainHero.Gold >= Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(this.GetMercenaryData(PlayerEncounter.EncounterSettlement.Town).TroopType, Hero.MainHero);
    }

    private bool conversation_mercenary_recruit_end_on_condition()
    {
      MBTextManager.SetTextVariable("RANDOM_HIRE_SENTENCE", GameTexts.FindText("str_mercenary_tavern_talk_hire", MBRandom.RandomInt(4).ToString()), false);
      return true;
    }

    public class RecruitmentCampaignBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public RecruitmentCampaignBehaviorTypeDefiner()
        : base(881200)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (RecruitmentCampaignBehavior.TownMercenaryData), 1);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (Dictionary<Town, RecruitmentCampaignBehavior.TownMercenaryData>));
      }
    }

    internal class TownMercenaryData
    {
      [SaveableField(204)]
      private readonly Town _currentTown;

      [SaveableProperty(202)]
      public CharacterObject TroopType { get; private set; }

      [SaveableProperty(203)]
      public int Number { get; private set; }

      public TownMercenaryData(Town currentTown) => this._currentTown = currentTown;

      public void ChangeMercenaryType(CharacterObject troopType, int number)
      {
        if (troopType != this.TroopType)
        {
          CharacterObject troopType1 = this.TroopType;
          this.TroopType = troopType;
          this.Number = number;
          CampaignEventDispatcher.Instance.OnMercenaryTroopChangedInTown(this._currentTown, troopType1, this.TroopType);
        }
        else
        {
          if (this.Number == number)
            return;
          this.ChangeMercenaryCount(number - this.Number);
        }
      }

      public void ChangeMercenaryCount(int difference)
      {
        if (difference == 0)
          return;
        int number = this.Number;
        this.Number += difference;
        CampaignEventDispatcher.Instance.OnMercenaryNumberChangedInTown(this._currentTown, number, this.Number);
      }

      public bool HasAvailableMercenary(Occupation occupation = Occupation.NotAssigned)
      {
        if (this.TroopType == null || this.Number <= 0)
          return false;
        return occupation == Occupation.NotAssigned || this.TroopType.Occupation == occupation;
      }

      internal static void AutoGeneratedStaticCollectObjectsTownMercenaryData(
        object o,
        List<object> collectedObjects)
      {
        ((RecruitmentCampaignBehavior.TownMercenaryData) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this._currentTown);
        collectedObjects.Add((object) this.TroopType);
      }

      internal static object AutoGeneratedGetMemberValueTroopType(object o)
      {
        return (object) ((RecruitmentCampaignBehavior.TownMercenaryData) o).TroopType;
      }

      internal static object AutoGeneratedGetMemberValueNumber(object o)
      {
        return (object) ((RecruitmentCampaignBehavior.TownMercenaryData) o).Number;
      }

      internal static object AutoGeneratedGetMemberValue_currentTown(object o)
      {
        return (object) ((RecruitmentCampaignBehavior.TownMercenaryData) o)._currentTown;
      }
    }

    public enum RecruitingDetail
    {
      MercenaryFromTavern,
      VolunteerFromIndividual,
      VolunteerFromIndividualToGarrison,
      VolunteerFromMap,
    }
  }
}
