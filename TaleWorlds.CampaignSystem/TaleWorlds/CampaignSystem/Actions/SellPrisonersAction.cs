// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.SellPrisonersAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class SellPrisonersAction
  {
    private static void ApplyInternal(
      PartyBase sellerParty,
      PartyBase buyerParty,
      TroopRoster prisoners,
      bool applyConsequences)
    {
      Settlement settlement = sellerParty.Settlement ?? buyerParty?.Settlement;
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      int amount = 0;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) prisoners.GetTroopRoster())
      {
        CharacterObject character = troopRosterElement.Character;
        bool flag = false;
        if (!character.IsHero)
        {
          if (applyConsequences)
            sellerParty.PrisonRoster.AddToCounts(character, -troopRosterElement.Number, woundedCount: -troopRosterElement.WoundedNumber);
        }
        else if (character.HeroObject != Hero.MainHero)
        {
          if (buyerParty != null)
          {
            if (!buyerParty.MapFaction.IsAtWarWith(character.HeroObject.MapFaction))
            {
              if (character.HeroObject.Clan == Clan.PlayerClan)
                EndCaptivityAction.ApplyByReleasedByCompensation(character.HeroObject);
              else
                EndCaptivityAction.ApplyByRansom(character.HeroObject, (Hero) null);
            }
            else
            {
              if (sellerParty.MapFaction == buyerParty.MapFaction && sellerParty != PartyBase.MainParty)
              {
                flag = true;
                dummyTroopRoster.Add(troopRosterElement);
              }
              TransferPrisonerAction.Apply(character, sellerParty, buyerParty);
            }
          }
          if (settlement != null)
            CampaignEventDispatcher.Instance.OnPrisonersChangeInSettlement(settlement, (FlattenedTroopRoster) null, character.HeroObject, false);
        }
        if (applyConsequences && !flag && character != Hero.MainHero.CharacterObject)
        {
          int num = Campaign.Current.Models.RansomValueCalculationModel.PrisonerRansomValue(character, sellerParty?.LeaderHero);
          amount += troopRosterElement.Number * num;
        }
      }
      if (applyConsequences)
      {
        if (sellerParty.IsMobile)
          GiveGoldAction.ApplyBetweenCharacters((Hero) null, sellerParty.LeaderHero ?? sellerParty.Owner, amount);
        else
          GiveGoldAction.ApplyForPartyToSettlement((PartyBase) null, sellerParty.Settlement, amount, buyerParty?.Settlement?.OwnerClan != Clan.PlayerClan);
      }
      if (sellerParty.IsMobile)
        SkillLevelingManager.OnPrisonerSell(sellerParty.MobileParty, in prisoners);
      CampaignEventDispatcher.Instance.OnPrisonerSold(sellerParty, buyerParty, prisoners);
      if (settlement == null || dummyTroopRoster.Count <= 0)
        return;
      CampaignEventDispatcher.Instance.OnPrisonerDonatedToSettlement(sellerParty.MobileParty, dummyTroopRoster.ToFlattenedRoster(), settlement);
    }

    public static void ApplyForAllPrisoners(PartyBase sellerParty, PartyBase buyerParty)
    {
      SellPrisonersAction.ApplyInternal(sellerParty, buyerParty, sellerParty.PrisonRoster.CloneRosterData(), true);
    }

    public static void ApplyForSelectedPrisoners(
      PartyBase sellerParty,
      PartyBase buyerParty,
      TroopRoster prisoners)
    {
      SellPrisonersAction.ApplyInternal(sellerParty, buyerParty, prisoners, true);
    }

    public static void ApplyByPartyScreen(TroopRoster prisoners)
    {
      SellPrisonersAction.ApplyInternal(PartyBase.MainParty, Hero.MainHero.CurrentSettlement.Party, prisoners, false);
    }
  }
}
