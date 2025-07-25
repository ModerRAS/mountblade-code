// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.FoodConsumptionBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class FoodConsumptionBehavior : CampaignBehaviorBase
  {
    private int _lastItemVersion = -1;

    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
      CampaignEvents.DailyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.DailyTickParty));
      CampaignEvents.TickEvent.AddNonSerializedListener((object) this, new Action<float>(this.OnTick));
      CampaignEvents.PartyAttachedAnotherParty.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartyAttachedParty));
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter starter)
    {
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsFortification)
          settlement.Town.FoodStocks = (float) settlement.Town.FoodStocksUpperLimit();
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<int>("_lastItemVersion", ref this._lastItemVersion);
    }

    public void DailyTickParty(MobileParty party)
    {
      this.CheckAnimalBreeding(party);
      if (!Campaign.Current.Models.MobilePartyFoodConsumptionModel.DoesPartyConsumeFood(party))
        return;
      this.PartyConsumeFood(party);
    }

    private void OnPartyAttachedParty(MobileParty mobileParty)
    {
      if (MobileParty.MainParty.Army == null || mobileParty.Army != MobileParty.MainParty.Army)
        return;
      if (mobileParty.Party.IsStarving)
      {
        this.PartyConsumeFood(mobileParty, true);
      }
      else
      {
        if (MobileParty.MainParty.Army.LeaderParty.Party.IsStarving)
          this.PartyConsumeFood(MobileParty.MainParty.Army.LeaderParty, true);
        foreach (MobileParty attachedParty in (List<MobileParty>) MobileParty.MainParty.Army.LeaderParty.AttachedParties)
        {
          if (attachedParty.Party.IsStarving && mobileParty != attachedParty)
            this.PartyConsumeFood(attachedParty, true);
        }
      }
    }

    public void OnTick(float dt)
    {
      if (!PartyBase.MainParty.IsStarving)
        return;
      int versionNo = PartyBase.MainParty.ItemRoster.VersionNo;
      if (this._lastItemVersion == versionNo)
        return;
      this._lastItemVersion = versionNo;
      this.PartyConsumeFood(MobileParty.MainParty, true);
    }

    private void PartyConsumeFood(MobileParty mobileParty, bool starvingCheck = false)
    {
      bool isStarving1 = mobileParty.Party.IsStarving;
      float foodChange = mobileParty.FoodChange;
      double num1 = (double) foodChange < 0.0 ? -(double) foodChange : 0.0;
      int partyRemainingFoodPercentage = (mobileParty.Party.RemainingFoodPercentage < 0 ? 0 : mobileParty.Party.RemainingFoodPercentage) - MathF.Round((float) (num1 * 100.0));
      this.MakeFoodConsumption(mobileParty, ref partyRemainingFoodPercentage);
      if (partyRemainingFoodPercentage < 0 && mobileParty.ItemRoster.TotalFood > 0 && this.SlaughterLivestock(mobileParty, partyRemainingFoodPercentage))
      {
        this.MakeFoodConsumption(mobileParty, ref partyRemainingFoodPercentage);
        if (mobileParty.IsMainParty)
          MBInformationManager.AddQuickInformation(new TextObject("{=WTwafRTH}Your party has slaughtered some animals to eat."));
      }
      if (partyRemainingFoodPercentage < 0 && mobileParty.Army != null && (mobileParty.AttachedTo == mobileParty.Army.LeaderParty || mobileParty.Army.LeaderParty == mobileParty))
      {
        Dictionary<Hero, float> dictionary = new Dictionary<Hero, float>();
        Hero leaderHero1 = mobileParty.LeaderHero;
        do
        {
          MobileParty mobileParty1 = (MobileParty) null;
          float num2 = 1f;
          MobileParty leaderParty = mobileParty.Army.LeaderParty;
          if (leaderParty != mobileParty && !leaderParty.Party.IsStarving && leaderParty.ItemRoster.TotalFood > 0)
          {
            float num3 = (float) leaderParty.ItemRoster.TotalFood / MathF.Abs(leaderParty.FoodChange);
            if ((double) num3 > (double) num2)
            {
              num2 = num3;
              mobileParty1 = leaderParty;
            }
          }
          foreach (MobileParty attachedParty in (List<MobileParty>) leaderParty.AttachedParties)
          {
            if (attachedParty != mobileParty && !attachedParty.Party.IsStarving && attachedParty.ItemRoster.TotalFood > 0)
            {
              float num4 = (float) attachedParty.ItemRoster.TotalFood / MathF.Abs(attachedParty.FoodChange);
              if ((double) num4 > (double) num2)
              {
                num2 = num4;
                mobileParty1 = attachedParty;
              }
            }
          }
          ItemRosterElement itemRosterElement1 = new ItemRosterElement();
          if (mobileParty1 != null)
          {
            int num5 = 10000;
            bool flag = false;
            foreach (ItemRosterElement itemRosterElement2 in mobileParty1.ItemRoster)
            {
              EquipmentElement equipmentElement = itemRosterElement2.EquipmentElement;
              if (equipmentElement.Item.IsFood)
              {
                equipmentElement = itemRosterElement2.EquipmentElement;
                if (equipmentElement.Item.Value < num5)
                {
                  itemRosterElement1 = itemRosterElement2;
                  equipmentElement = itemRosterElement2.EquipmentElement;
                  num5 = equipmentElement.Item.Value;
                  flag = true;
                }
              }
            }
            if (!flag)
            {
              foreach (ItemRosterElement itemRosterElement3 in mobileParty1.ItemRoster)
              {
                EquipmentElement equipmentElement = itemRosterElement3.EquipmentElement;
                if (equipmentElement.Item.HasHorseComponent)
                {
                  equipmentElement = itemRosterElement3.EquipmentElement;
                  if (equipmentElement.Item.HorseComponent.IsLiveStock)
                  {
                    equipmentElement = itemRosterElement3.EquipmentElement;
                    if (equipmentElement.Item.Value < num5)
                    {
                      itemRosterElement1 = itemRosterElement3;
                      equipmentElement = itemRosterElement3.EquipmentElement;
                      num5 = equipmentElement.Item.Value;
                      flag = true;
                    }
                  }
                }
              }
            }
            if (flag)
            {
              mobileParty1.ItemRoster.AddToCounts(itemRosterElement1.EquipmentElement, -1);
              partyRemainingFoodPercentage += 100;
              EquipmentElement equipmentElement = itemRosterElement1.EquipmentElement;
              if (equipmentElement.Item.HasHorseComponent)
              {
                equipmentElement = itemRosterElement1.EquipmentElement;
                if (equipmentElement.Item.HorseComponent.IsLiveStock)
                {
                  equipmentElement = itemRosterElement1.EquipmentElement;
                  int meatCount = equipmentElement.Item.HorseComponent.MeatCount;
                  mobileParty1.ItemRoster.AddToCounts(DefaultItems.Meat, meatCount - 1);
                }
              }
              Hero leaderHero2 = mobileParty1.LeaderHero;
              if (leaderHero1 != null && leaderHero2 != null)
              {
                float num6 = 0.2f;
                GainKingdomInfluenceAction.ApplyForGivingFood(leaderHero2, leaderHero1, num6);
                float num7;
                if (dictionary.TryGetValue(leaderHero2, out num7))
                  dictionary[leaderHero2] = num7 + num6;
                else
                  dictionary.Add(leaderHero2, num6);
              }
            }
            else
              break;
          }
          else
            break;
        }
        while (partyRemainingFoodPercentage < 0);
        foreach (KeyValuePair<Hero, float> keyValuePair in dictionary)
          CampaignEventDispatcher.Instance.OnHeroSharedFoodWithAnother(keyValuePair.Key, leaderHero1, keyValuePair.Value);
      }
      mobileParty.Party.RemainingFoodPercentage = partyRemainingFoodPercentage;
      bool isStarving2 = mobileParty.Party.IsStarving;
      CampaignTime campaignTime = CampaignData.CampaignStartTime;
      int toDays1 = (int) campaignTime.ToDays;
      campaignTime = CampaignTime.Now;
      int toDays2 = (int) campaignTime.ToDays;
      if (toDays1 != toDays2)
      {
        if (isStarving1 & isStarving2)
        {
          int starvationMoralePenalty = Campaign.Current.Models.PartyMoraleModel.GetDailyStarvationMoralePenalty(mobileParty.Party);
          mobileParty.RecentEventsMorale += (float) starvationMoralePenalty;
          if (mobileParty.IsMainParty)
          {
            MBTextManager.SetTextVariable("MORALE_PENALTY", -starvationMoralePenalty);
            MBInformationManager.AddQuickInformation(new TextObject("{=qhL5o55i}Your party is starving. You lose {MORALE_PENALTY} morale."));
            CampaignEventDispatcher.Instance.OnMainPartyStarving();
            campaignTime = CampaignTime.Now;
            if ((int) campaignTime.ToDays % 3 == 0 && mobileParty.MemberRoster.TotalManCount > 1)
              TraitLevelingHelper.OnPartyStarved();
          }
        }
        if (mobileParty.MemberRoster.TotalManCount > 1)
        {
          SkillLevelingManager.OnFoodConsumed(mobileParty, isStarving2);
          if (!isStarving1 && !isStarving2 && mobileParty.IsMainParty && (double) mobileParty.Morale >= 90.0 && mobileParty.MemberRoster.TotalRegulars >= 20)
          {
            campaignTime = CampaignTime.Now;
            if ((int) campaignTime.ToDays % 10 == 0)
              TraitLevelingHelper.OnPartyTreatedWell();
          }
        }
      }
      CampaignEventDispatcher.Instance.OnPartyConsumedFood(mobileParty);
    }

    private bool SlaughterLivestock(MobileParty party, int partyRemainingFoodPercentage)
    {
      int number = 0;
      ItemRoster itemRoster = party.ItemRoster;
      for (int index = itemRoster.Count - 1; index >= 0 && number * 100 < -partyRemainingFoodPercentage; --index)
      {
        ItemObject itemAtIndex = itemRoster.GetItemAtIndex(index);
        HorseComponent horseComponent = itemAtIndex.HorseComponent;
        if ((horseComponent != null ? (horseComponent.IsLiveStock ? 1 : 0) : 0) != 0)
        {
          while (number * 100 < -partyRemainingFoodPercentage)
          {
            itemRoster.AddToCounts(itemAtIndex, -1);
            number += itemAtIndex.HorseComponent.MeatCount;
            if (itemRoster.FindIndexOfItem(itemAtIndex) == -1)
              break;
          }
        }
      }
      if (number <= 0)
        return false;
      itemRoster.AddToCounts(DefaultItems.Meat, number);
      return true;
    }

    private void CheckAnimalBreeding(MobileParty party)
    {
      if (!party.HasPerk(DefaultPerks.Riding.Breeder) || (double) MBRandom.RandomFloat >= (double) DefaultPerks.Riding.Breeder.PrimaryBonus || party.ItemRoster.NumberOfLivestockAnimals <= 1 && party.ItemRoster.NumberOfPackAnimals <= 1 && party.ItemRoster.NumberOfMounts <= 1)
        return;
      int num1 = party.ItemRoster.NumberOfLivestockAnimals + party.ItemRoster.NumberOfPackAnimals + party.ItemRoster.NumberOfMounts;
      ItemRosterElement elementWithPredicate = party.ItemRoster.GetRandomElementWithPredicate<ItemRosterElement>((Func<ItemRosterElement, bool>) (x => x.EquipmentElement.Item.HasHorseComponent));
      int num2 = MathF.Round(MathF.Max(1f, (float) num1 / 50f));
      party.ItemRoster.AddToCounts(elementWithPredicate.EquipmentElement.Item, num2);
      if (!party.IsMainParty)
        return;
      TextObject textObject = new TextObject("{=vl9bawa7}{COUNT} {?(COUNT > 1)}{PLURAL(ANIMAL_NAME)} are{?}{ANIMAL_NAME} is{\\?} added to your party.");
      textObject.SetTextVariable("COUNT", num2);
      textObject.SetTextVariable("ANIMAL_NAME", elementWithPredicate.EquipmentElement.Item.Name);
      InformationManager.DisplayMessage(new InformationMessage(textObject.ToString()));
    }

    private void MakeFoodConsumption(MobileParty party, ref int partyRemainingFoodPercentage)
    {
      ItemRoster itemRoster = party.ItemRoster;
      int maxValue = 0;
      for (int index = 0; index < itemRoster.Count; ++index)
      {
        if (itemRoster.GetItemAtIndex(index).IsFood)
          ++maxValue;
      }
      bool flag1 = false;
      while (maxValue > 0 && partyRemainingFoodPercentage < 0)
      {
        int num1 = MBRandom.RandomInt(maxValue);
        bool flag2 = false;
        int num2 = 0;
        for (int index = itemRoster.Count - 1; index >= 0 && !flag2; --index)
        {
          if (itemRoster.GetItemAtIndex(index).IsFood)
          {
            int elementNumber = itemRoster.GetElementNumber(index);
            if (elementNumber > 0)
            {
              ++num2;
              if (num1 < num2)
              {
                itemRoster.AddToCounts(itemRoster.GetItemAtIndex(index), -1);
                partyRemainingFoodPercentage += 100;
                if (elementNumber == 1)
                  --maxValue;
                flag2 = true;
                flag1 = true;
              }
            }
          }
        }
        if (flag1)
          party.Party.OnConsumedFood();
      }
    }
  }
}
