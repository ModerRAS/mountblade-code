// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.DesertionCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class DesertionCampaignBehavior : CampaignBehaviorBase
  {
    private int _numberOfDesertersFromLordParty;

    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.DailyTickParty));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void DailyTickParty(MobileParty mobileParty)
    {
      if (!Campaign.Current.DesertionEnabled || !mobileParty.IsActive || mobileParty.IsDisbanding || mobileParty.Party.MapEvent != null || !mobileParty.IsLordParty && !mobileParty.IsCaravan)
        return;
      TroopRoster desertedTroopList = (TroopRoster) null;
      if (mobileParty.MemberRoster.TotalRegulars > 0)
      {
        this.PartiesCheckDesertionDueToMorale(mobileParty, ref desertedTroopList);
        this.PartiesCheckDesertionDueToPartySizeExceedsPaymentRatio(mobileParty, ref desertedTroopList);
      }
      if (desertedTroopList != (TroopRoster) null && desertedTroopList.Count > 0)
        CampaignEventDispatcher.Instance.OnTroopsDeserted(mobileParty, desertedTroopList);
      if (mobileParty.Party.NumberOfAllMembers > 0)
        return;
      DestroyPartyAction.Apply((PartyBase) null, mobileParty);
    }

    private void PartiesCheckForTroopDesertionEffectiveMorale(
      MobileParty party,
      int stackNo,
      int desertIfMoraleIsLessThanValue,
      out int numberOfDeserters,
      out int numberOfWoundedDeserters)
    {
      int num1 = 0;
      int num2 = 0;
      float morale = party.Morale;
      if (party.IsActive && party.MemberRoster.Count > 0)
      {
        TroopRosterElement elementCopyAtIndex = party.MemberRoster.GetElementCopyAtIndex(stackNo);
        float num3 = MathF.Pow((float) elementCopyAtIndex.Character.Level / 100f, (float) (0.10000000149011612 * (((double) desertIfMoraleIsLessThanValue - (double) morale) / (double) desertIfMoraleIsLessThanValue)));
        for (int index = 0; index < elementCopyAtIndex.Number - elementCopyAtIndex.WoundedNumber; ++index)
        {
          if ((double) num3 < (double) MBRandom.RandomFloat)
            ++num1;
        }
        for (int index = 0; index < elementCopyAtIndex.WoundedNumber; ++index)
        {
          if ((double) num3 < (double) MBRandom.RandomFloat)
            ++num2;
        }
      }
      numberOfDeserters = num1;
      numberOfWoundedDeserters = num2;
    }

    private void PartiesCheckDesertionDueToPartySizeExceedsPaymentRatio(
      MobileParty mobileParty,
      ref TroopRoster desertedTroopList)
    {
      int partySizeLimit = mobileParty.Party.PartySizeLimit;
      if ((mobileParty.IsLordParty || mobileParty.IsCaravan) && mobileParty.Party.NumberOfAllMembers > partySizeLimit && mobileParty != MobileParty.MainParty && mobileParty.MapEvent == null)
      {
        int num1 = mobileParty.Party.NumberOfAllMembers - partySizeLimit;
        for (int index1 = 0; index1 < num1; ++index1)
        {
          CharacterObject character = mobileParty.MapFaction.BasicTroop;
          int num2 = 99;
          bool flag = false;
          for (int index2 = 0; index2 < mobileParty.MemberRoster.Count; ++index2)
          {
            CharacterObject characterAtIndex = mobileParty.MemberRoster.GetCharacterAtIndex(index2);
            if (!characterAtIndex.IsHero && characterAtIndex.Level < num2 && mobileParty.MemberRoster.GetElementNumber(index2) > 0)
            {
              num2 = characterAtIndex.Level;
              character = characterAtIndex;
              flag = mobileParty.MemberRoster.GetElementWoundedNumber(index2) > 0;
            }
          }
          if (num2 < 99)
          {
            if (flag)
              mobileParty.MemberRoster.AddToCounts(character, -1, woundedCount: -1);
            else
              mobileParty.MemberRoster.AddToCounts(character, -1);
          }
        }
      }
      bool flag1 = mobileParty.IsWageLimitExceeded();
      if (!(mobileParty.Party.NumberOfAllMembers > mobileParty.LimitedPartySize | flag1))
        return;
      int numberOfDeserters1 = Campaign.Current.Models.PartyDesertionModel.GetNumberOfDeserters(mobileParty);
      int numberOfDeserters2;
      for (int index3 = 0; index3 < numberOfDeserters1 && mobileParty.MemberRoster.TotalRegulars > 0; index3 += numberOfDeserters2)
      {
        int stackNo = -1;
        int num = 9;
        numberOfDeserters2 = 1;
        for (int index4 = 0; index4 < mobileParty.MemberRoster.Count && mobileParty.MemberRoster.TotalRegulars > 0; ++index4)
        {
          CharacterObject characterAtIndex = mobileParty.MemberRoster.GetCharacterAtIndex(index4);
          int elementNumber = mobileParty.MemberRoster.GetElementNumber(index4);
          if (!characterAtIndex.IsHero && elementNumber > 0 && characterAtIndex.Tier < num)
          {
            num = characterAtIndex.Tier;
            stackNo = index4;
            numberOfDeserters2 = Math.Min(elementNumber, numberOfDeserters1 - index3);
          }
        }
        MobilePartyHelper.DesertTroopsFromParty(mobileParty, stackNo, numberOfDeserters2, 0, ref desertedTroopList);
      }
    }

    private bool PartiesCheckDesertionDueToMorale(
      MobileParty party,
      ref TroopRoster desertedTroopList)
    {
      int forTroopDesertion = Campaign.Current.Models.PartyDesertionModel.GetMoraleThresholdForTroopDesertion(party);
      bool morale = false;
      if ((double) party.Morale < (double) forTroopDesertion && party.MemberRoster.TotalManCount > 0)
      {
        for (int index = party.MemberRoster.Count - 1; index >= 0; --index)
        {
          if (!party.MemberRoster.GetCharacterAtIndex(index).IsHero)
          {
            int numberOfDeserters = 0;
            int numberOfWoundedDeserters = 0;
            this.PartiesCheckForTroopDesertionEffectiveMorale(party, index, forTroopDesertion, out numberOfDeserters, out numberOfWoundedDeserters);
            if (numberOfDeserters + numberOfWoundedDeserters > 0)
            {
              if (party.IsLordParty && party.MapFaction.IsKingdomFaction)
                ++this._numberOfDesertersFromLordParty;
              morale = true;
              MobilePartyHelper.DesertTroopsFromParty(party, index, numberOfDeserters, numberOfWoundedDeserters, ref desertedTroopList);
            }
          }
        }
      }
      return morale;
    }
  }
}
