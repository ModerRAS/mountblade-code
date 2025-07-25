// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultBattleRewardModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultBattleRewardModel : BattleRewardModel
  {
    private static readonly int[] _indices = new int[12];

    public override float DestroyHideoutBannerLootChance => 0.1f;

    public override float CaptureSettlementBannerLootChance => 0.5f;

    public override float DefeatRegularHeroBannerLootChance => 0.5f;

    public override float DefeatClanLeaderBannerLootChance => 0.25f;

    public override float DefeatKingdomRulerBannerLootChance => 0.1f;

    public override int GetPlayerGainedRelationAmount(MapEvent mapEvent, Hero hero)
    {
      MapEventSide mapEventSide = mapEvent.AttackerSide.IsMainPartyAmongParties() ? mapEvent.AttackerSide : mapEvent.DefenderSide;
      float contributionRate = mapEventSide.GetPlayerPartyContributionRate();
      float num1 = (float) (((double) mapEvent.StrengthOfSide[(int) PartyBase.MainParty.Side] - (double) PlayerEncounter.Current.PlayerPartyInitialStrength) / ((double) mapEvent.StrengthOfSide[(int) PartyBase.MainParty.OpponentSide] + 1.0));
      float num2 = (double) num1 < 1.0 ? (float) (1.0 + (1.0 - (double) num1)) : ((double) num1 < 3.0 ? (float) (0.5 * (3.0 - (double) num1)) : 0.0f);
      float valueAtMapEventEnd = mapEvent.GetRenownValueAtMapEventEnd(mapEventSide == mapEvent.AttackerSide ? BattleSideEnum.Attacker : BattleSideEnum.Defender);
      ExplainedNumber explainedNumber = new ExplainedNumber(0.75f + MathF.Pow((float) ((double) contributionRate * 1.2999999523162842 * ((double) num2 + (double) valueAtMapEventEnd)), 0.67f));
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Charm.Camaraderie))
        explainedNumber.AddFactor(DefaultPerks.Charm.Camaraderie.PrimaryBonus, DefaultPerks.Charm.Camaraderie.Name);
      return (int) explainedNumber.ResultNumber;
    }

    public override ExplainedNumber CalculateRenownGain(
      PartyBase party,
      float renownValueOfBattle,
      float contributionShare)
    {
      ExplainedNumber renownGain = new ExplainedNumber(renownValueOfBattle * contributionShare, true);
      if (party.IsMobile)
      {
        if (party.MobileParty.HasPerk(DefaultPerks.Throwing.LongReach, true))
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Throwing.LongReach, party.MobileParty, false, ref renownGain);
        if (party.MobileParty.HasPerk(DefaultPerks.Charm.PublicSpeaker))
          renownGain.AddFactor(DefaultPerks.Charm.PublicSpeaker.PrimaryBonus, DefaultPerks.Charm.PublicSpeaker.Name);
        if (party.LeaderHero != null)
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Leadership.FamousCommander, party.LeaderHero.CharacterObject, true, ref renownGain);
        if (PartyBaseHelper.HasFeat(party, DefaultCulturalFeats.VlandianRenownMercenaryFeat))
          renownGain.AddFactor(DefaultCulturalFeats.VlandianRenownMercenaryFeat.EffectBonus, GameTexts.FindText("str_culture"));
      }
      return renownGain;
    }

    public override ExplainedNumber CalculateInfluenceGain(
      PartyBase party,
      float influenceValueOfBattle,
      float contributionShare)
    {
      ExplainedNumber influenceGain = new ExplainedNumber(party.MapFaction.IsKingdomFaction ? influenceValueOfBattle * contributionShare : 0.0f, true);
      Hero leaderHero = party.LeaderHero;
      if ((leaderHero != null ? (leaderHero.GetPerkValue(DefaultPerks.Charm.Warlord) ? 1 : 0) : 0) != 0)
        influenceGain.AddFactor(DefaultPerks.Charm.Warlord.PrimaryBonus, DefaultPerks.Charm.Warlord.Name);
      return influenceGain;
    }

    public override ExplainedNumber CalculateMoraleGainVictory(
      PartyBase party,
      float renownValueOfBattle,
      float contributionShare)
    {
      ExplainedNumber stat = new ExplainedNumber((float) (0.5 + (double) renownValueOfBattle * (double) contributionShare * 0.5), true);
      if (party.IsMobile && party.MobileParty.HasPerk(DefaultPerks.Throwing.LongReach, true))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Throwing.LongReach, party.MobileParty, false, ref stat);
      if (party.IsMobile && party.MobileParty.HasPerk(DefaultPerks.Leadership.CitizenMilitia, true))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Leadership.CitizenMilitia, party.MobileParty, false, ref stat);
      return stat;
    }

    public override int CalculateGoldLossAfterDefeat(Hero partyLeaderHero)
    {
      float goldLossAfterDefeat = (float) partyLeaderHero.Gold * 0.05f;
      if ((double) goldLossAfterDefeat > 10000.0)
        goldLossAfterDefeat = 10000f;
      return (int) goldLossAfterDefeat;
    }

    public override EquipmentElement GetLootedItemFromTroop(
      CharacterObject character,
      float targetValue)
    {
      int num = MobileParty.MainParty.HasPerk(DefaultPerks.Engineering.Metallurgy) ? 1 : 0;
      EquipmentElement lootedItemFromTroop = this.GetRandomItem(character.AllEquipments.GetRandomElement<Equipment>(), targetValue);
      if (num != 0 && lootedItemFromTroop.ItemModifier != null && (double) lootedItemFromTroop.ItemModifier.PriceMultiplier < 1.0 && (double) MBRandom.RandomFloat < (double) DefaultPerks.Engineering.Metallurgy.PrimaryBonus)
        lootedItemFromTroop = new EquipmentElement(lootedItemFromTroop.Item);
      return lootedItemFromTroop;
    }

    private EquipmentElement GetRandomItem(Equipment equipment, float targetValue = 0.0f)
    {
      int index1 = 0;
      EquipmentElement randomItem1;
      for (int index2 = 0; index2 < 12; ++index2)
      {
        randomItem1 = equipment[index2];
        if (randomItem1.Item != null)
        {
          randomItem1 = equipment[index2];
          if (!randomItem1.Item.NotMerchandise)
          {
            DefaultBattleRewardModel._indices[index1] = index2;
            ++index1;
          }
        }
      }
      for (int index3 = 0; index3 < index1 - 1; ++index3)
      {
        int index4 = index3;
        randomItem1 = equipment[DefaultBattleRewardModel._indices[index3]];
        int num = randomItem1.Item.Value;
        for (int index5 = index3 + 1; index5 < index1; ++index5)
        {
          randomItem1 = equipment[DefaultBattleRewardModel._indices[index5]];
          if (randomItem1.Item.Value > num)
          {
            index4 = index5;
            randomItem1 = equipment[DefaultBattleRewardModel._indices[index5]];
            num = randomItem1.Item.Value;
          }
        }
        int index6 = DefaultBattleRewardModel._indices[index3];
        DefaultBattleRewardModel._indices[index3] = DefaultBattleRewardModel._indices[index4];
        DefaultBattleRewardModel._indices[index4] = index6;
      }
      if (index1 > 0)
      {
        for (int index7 = 0; index7 < index1; ++index7)
        {
          int index8 = DefaultBattleRewardModel._indices[index7];
          EquipmentElement randomItem2 = equipment[index8];
          if (randomItem2.Item != null)
          {
            randomItem1 = equipment[index8];
            if (!randomItem1.Item.NotMerchandise)
            {
              float b = (float) randomItem2.Item.Value + 0.1f;
              if ((double) MBRandom.RandomFloat < 0.60000002384185791 * ((double) targetValue / ((double) MathF.Max(targetValue, b) * (double) (index1 - index7))))
              {
                ItemModifier modifierLootScoreBased = randomItem2.Item.ItemComponent?.ItemModifierGroup?.GetRandomItemModifierLootScoreBased();
                if (modifierLootScoreBased != null)
                  randomItem2 = new EquipmentElement(randomItem2.Item, modifierLootScoreBased);
                return randomItem2;
              }
            }
          }
        }
      }
      randomItem1 = new EquipmentElement();
      return randomItem1;
    }

    public override float GetPartySavePrisonerAsMemberShareProbability(
      PartyBase winnerParty,
      float lootAmount)
    {
      float shareProbability = lootAmount;
      if (winnerParty.IsMobile && (winnerParty.MobileParty.IsVillager || winnerParty.MobileParty.IsCaravan || winnerParty.MobileParty.IsMilitia || winnerParty.MobileParty.IsBandit && winnerParty.MobileParty.CurrentSettlement != null && winnerParty.MobileParty.CurrentSettlement.IsHideout))
        shareProbability = 0.0f;
      return shareProbability;
    }

    public override float GetExpectedLootedItemValue(CharacterObject character)
    {
      return 6f * (float) (character.Level * character.Level);
    }

    public override float GetAITradePenalty() => 0.0181818176f;
  }
}
